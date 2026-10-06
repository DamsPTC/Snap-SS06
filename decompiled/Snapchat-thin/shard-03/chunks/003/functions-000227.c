/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1027617c0; end: 1027617d3;  */

undefined8 FUN_1027617c0(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *unaff_x20;
  func_0x000107c61434(lVar3);
  func_0x000100029284();
  func_0x000107c6142c(lVar3);
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_102761f64(0x112ebc638,&UNK_10dad6710);
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10 + 8));
    uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 8);
    func_0x00010276282c(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  return uVar2;
}



/* Entry: 1027617d4; end: 10276188f;  */

undefined8 FUN_1027617d4(long param_1,ulong param_2)

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
      FUN_102761be8();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    FUN_1027624ac(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 102761890; end: 1027619a7;  */

void FUN_102761890(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *unaff_x20;
  func_0x000107c61434(lVar4);
  func_0x000100029284();
  func_0x000107c6142c(lVar4);
  if ((param_3 & 1) == 0) {
    lVar4 = 0;
    FUN_10276adc8();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar2 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_102761d58();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_2 * 0x10 + 8));
    lVar5 = *(long *)(lVar3 + 0x38);
    lVar4 = 0;
    FUN_10276adc8();
    lVar6 = *(long *)(lVar4 + -8);
    FUN_1027634d4(lVar5 + *(long *)(lVar6 + 0x48) * param_2,param_1);
    func_0x00010276265c(param_2,lVar3);
    *unaff_x20 = lVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000102761994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,1,lVar4);
  return;
}



/* Entry: 1027619a8; end: 1027619bb;  */

undefined8 FUN_1027619a8(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *unaff_x20;
  func_0x000107c61434(lVar3);
  func_0x000100029284();
  func_0x000107c6142c(lVar3);
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_102761f64(0x112ebc630,&UNK_10dad6458);
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10 + 8));
    uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 8);
    func_0x00010276282c(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  return uVar2;
}



/* Entry: 1027619bc; end: 102761a8f;  */

undefined8 FUN_1027619bc(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *unaff_x20;
  func_0x000107c61434(lVar3);
  func_0x000100029284();
  func_0x000107c6142c(lVar3);
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_102761f64(param_3,param_4);
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10 + 8));
    uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 8);
    func_0x00010276282c(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  return uVar2;
}



/* Entry: 102761a90; end: 102761bd3;  */

void FUN_102761a90(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *unaff_x20;
  func_0x000107c61434(lVar4);
  func_0x0001000c8928(param_2);
  func_0x000107c6142c(lVar4);
  if ((param_3 & 1) == 0) {
    lVar4 = 0x112ebc618;
    func_0x0001000285a8(0x112ebc618,&UNK_10dad6440);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar2 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_1027620c4();
    }
    lVar5 = *(long *)(lVar3 + 0x30);
    lVar4 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar4 + -8) + 8))
              (lVar5 + *(long *)(*(long *)(lVar4 + -8) + 0x48) * param_2,lVar4);
    lVar5 = *(long *)(lVar3 + 0x38);
    lVar4 = 0x112ebc618;
    func_0x0001000285a8(0x112ebc618,&UNK_10dad6440);
    lVar6 = *(long *)(lVar4 + -8);
    (**(code **)(lVar6 + 0x20))(param_1,lVar5 + *(long *)(lVar6 + 0x48) * param_2,lVar4);
    func_0x0001027629dc(param_2,lVar3);
    *unaff_x20 = lVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000102761bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,1,lVar4);
  return;
}



/* Entry: 102761bd4; end: 102761be7;  */

void FUN_102761bd4(void)

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
  
  func_0x0001000285a8(0x112ebc638,&UNK_10dad6710);
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
    if (uVar8 == 0) goto LAB_102762030;
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
        func_0x000107c61434(uVar12);
        if (uVar8 != 0) break;
LAB_102762030:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1027620c4);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_10276209c;
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
LAB_10276209c:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 102761be8; end: 102761d57;  */

void FUN_102761be8(void)

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
  
  func_0x0001000285a8(0x112ebc658,&UNK_10dc506f0);
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
    if (uVar8 == 0) goto LAB_102761cc4;
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
LAB_102761cc4:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102761d58);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_102761d30;
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
LAB_102761d30:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 102761d58; end: 102761f4f;  */

void FUN_102761d58(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar6 = 0;
  FUN_10276adc8();
  lVar7 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  func_0x0001000285a8(0x112ebc628,&UNK_10dad6450);
  lVar13 = *unaff_x20;
  lVar6 = lVar13;
  func_0x000107c6048c();
  if (*(long *)(lVar13 + 0x10) == 0) {
    func_0x000107c61574(lVar13);
LAB_102761f28:
    *unaff_x20 = lVar6;
    return;
  }
  lVar1 = lVar13 + 0x40;
  uVar8 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if ((lVar6 != lVar13) || (lVar1 + uVar8 * 8 <= lVar6 + 0x40U)) {
    func_0x000107c610b8(lVar6 + 0x40U,lVar1,uVar8 << 3);
  }
  lVar14 = 0;
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar13 + 0x10);
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar8 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar8 = uVar8 & *(ulong *)(lVar13 + 0x40);
  if (uVar8 == 0) goto LAB_102761e84;
  do {
    uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
    uVar8 = uVar8 - 1 & uVar8;
    while( true ) {
      uVar10 = LZCOUNT(uVar10) | lVar14 << 6;
      lVar11 = uVar10 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(lVar13 + 0x30) + lVar11);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar12 = *(long *)(lVar7 + 0x48) * uVar10;
      func_0x000102763634(*(long *)(lVar13 + 0x38) + lVar12,
                          &stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar11);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      FUN_1027634d4(&stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                    *(long *)(lVar6 + 0x38) + lVar12);
      func_0x000107c61434(uVar4);
      if (uVar8 != 0) break;
LAB_102761e84:
      do {
        lVar11 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102761f50);
          (*pcVar5)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar11) {
          func_0x000107c61574(lVar13);
          goto LAB_102761f28;
        }
        uVar8 = *(ulong *)(lVar1 + lVar11 * 8);
        lVar14 = lVar14 + 1;
      } while (uVar8 == 0);
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      lVar14 = lVar11;
    }
  } while( true );
}



/* Entry: 102761f50; end: 102761f63;  */

void FUN_102761f50(void)

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
  
  func_0x0001000285a8(0x112ebc630,&UNK_10dad6458);
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
    if (uVar8 == 0) goto LAB_102762030;
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
        func_0x000107c61434(uVar12);
        if (uVar8 != 0) break;
LAB_102762030:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1027620c4);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_10276209c;
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
LAB_10276209c:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 102761f64; end: 1027620c3;  */

void FUN_102761f64(void)

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
  
  func_0x0001000285a8();
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
    if (uVar8 == 0) goto LAB_102762030;
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
        func_0x000107c61434(uVar12);
        if (uVar8 != 0) break;
LAB_102762030:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1027620c4);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_10276209c;
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
LAB_10276209c:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 1027620c4; end: 10276234f;  */

void FUN_1027620c4(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  long extraout_x8_00;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *unaff_x20;
  long lVar14;
  long lVar15;
  ulong uStack_68;
  
  lVar3 = 0x112ebc618;
  func_0x0001000285a8(0x112ebc618,&UNK_10dad6440);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffff40 + -extraout_x8;
  lVar4 = 0;
  func_0x000107c5eec8();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar9 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112ebc610,&UNK_10dad6438);
  lVar15 = *unaff_x20;
  lVar5 = lVar15;
  func_0x000107c6048c();
  if (*(long *)(lVar15 + 0x10) == 0) {
    func_0x000107c61574(lVar15);
LAB_102762328:
    *unaff_x20 = lVar5;
    return;
  }
  lVar1 = lVar15 + 0x40;
  uVar10 = (1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if ((lVar5 != lVar15) || (lVar1 + uVar10 * 8 <= lVar5 + 0x40U)) {
    func_0x000107c610b8(lVar5 + 0x40U,lVar1,uVar10 << 3);
  }
  lVar13 = 0;
  *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar15 + 0x10);
  uVar10 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uStack_68 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uStack_68 = ~(-1L << (uVar10 & 0x3f));
  }
  uStack_68 = uStack_68 & *(ulong *)(lVar15 + 0x40);
  if (uStack_68 == 0) goto LAB_102762244;
  do {
    uVar11 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
    uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
    uStack_68 = uStack_68 - 1 & uStack_68;
    while( true ) {
      uVar11 = LZCOUNT(uVar11) | lVar13 << 6;
      lVar12 = *(long *)(lVar8 + 0x48) * uVar11;
      (**(code **)(lVar8 + 0x10))(lVar9,*(long *)(lVar15 + 0x30) + lVar12,lVar4);
      lVar14 = *(long *)(lVar6 + 0x48) * uVar11;
      (**(code **)(lVar6 + 0x10))(puVar7,*(long *)(lVar15 + 0x38) + lVar14,lVar3);
      (**(code **)(lVar8 + 0x20))(*(long *)(lVar5 + 0x30) + lVar12,lVar9,lVar4);
      (**(code **)(lVar6 + 0x20))(*(long *)(lVar5 + 0x38) + lVar14,puVar7,lVar3);
      if (uStack_68 != 0) break;
LAB_102762244:
      do {
        lVar12 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102762350);
          (*pcVar2)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar12) {
          func_0x000107c61574(lVar15);
          goto LAB_102762328;
        }
        uStack_68 = *(ulong *)(lVar1 + lVar12 * 8);
        lVar13 = lVar13 + 1;
      } while (uStack_68 == 0);
      uVar11 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uStack_68 = uStack_68 - 1 & uStack_68;
      lVar13 = lVar12;
    }
  } while( true );
}



/* Entry: 102762350; end: 1027624ab;  */

void FUN_102762350(void)

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
  
  func_0x0001000285a8(0x112ebc668,&UNK_10dad6490);
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
    if (uVar6 == 0) goto LAB_10276242c;
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
        *(undefined1 *)(*(long *)(lVar4 + 0x30) + uVar8) =
             *(undefined1 *)(*(long *)(lVar9 + 0x30) + uVar8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61434();
        if (uVar6 != 0) break;
LAB_10276242c:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1027624ac);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_102762484;
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
LAB_102762484:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1027624ac; end: 102762c6f;  */

void FUN_1027624ac(ulong param_1,long param_2)

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
LAB_1027625a0:
          if ((long)param_1 < (long)uVar8) goto LAB_102762528;
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
      else if (uVar10 <= uVar8) goto LAB_1027625a0;
LAB_102762528:
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
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10276265c);
  (*pcVar5)();
}



/* Entry: 102762c70; end: 102762c97;  */

undefined * FUN_102762c70(long param_1)

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
    func_0x0001000285a8(0x112ebc638,&UNK_10dad6710);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102762d88);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102762d8c);
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



/* Entry: 102762c98; end: 102762d8b;  */

undefined * FUN_102762c98(long param_1,undefined8 param_2,undefined8 param_3)

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
    func_0x0001000285a8(param_2,param_3);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102762d88);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102762d8c);
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



/* Entry: 102762d8c; end: 1027630bf;  */

undefined * FUN_102762d8c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  long extraout_x8;
  ulong uVar8;
  ulong *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = 0x112ebc620;
  func_0x0001000285a8(0x112ebc620,&UNK_10dad6448);
  lVar11 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (ulong *)(&stack0xffffffffffffffa0 + -extraout_x8);
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    func_0x0001000285a8(0x112ebc628,&UNK_10dad6450);
    puVar6 = puVar10;
    func_0x000107c60498();
    iVar4 = *(int *)(lVar12 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
    lVar12 = *(long *)(lVar11 + 0x48);
    func_0x000107c6157c();
    do {
      func_0x000102763678(param_1,puVar9,0x112ebc620,&UNK_10dad6448);
      uVar2 = *puVar9;
      uVar3 = *(ulong *)(&stack0xffffffffffffffa8 + -extraout_x8);
      uVar7 = uVar2;
      uVar8 = uVar3;
      func_0x000100029284();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102762f0c);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      lVar13 = *(long *)(puVar6 + 0x38);
      lVar11 = 0;
      FUN_10276adc8();
      FUN_1027634d4((long)puVar9 + (long)iVar4,
                    lVar13 + *(long *)(*(long *)(lVar11 + -8) + 0x48) * uVar7);
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102762f10);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      param_1 = param_1 + lVar12;
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 1027630c0; end: 1027631cb;  */

undefined * FUN_1027630c0(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  if (puVar7 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar4 = 0;
  func_0x0001000285a8(0x112ebc668);
  puVar2 = puVar7;
  func_0x000107c60498();
  uVar8 = (ulong)*(byte *)(param_1 + 0x20);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar8;
  FUN_10276835c();
  if ((uVar4 & 1) == 0) {
    puVar5 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar6 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar6 + 0x40) = *(ulong *)(puVar2 + uVar6 + 0x40) | 1L << (uVar3 & 0x3f);
      *(char *)(*(long *)(puVar2 + 0x30) + uVar3) = (char)uVar8;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1027631cc);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar7 = puVar7 + -1;
      if (puVar7 == (undefined *)0x0) {
        func_0x000107c61434();
        return puVar2;
      }
      uVar8 = (ulong)*(byte *)(puVar5 + -1);
      uVar9 = *puVar5;
      func_0x000107c61434();
      uVar3 = uVar8;
      FUN_10276835c();
      puVar5 = puVar5 + 2;
    } while ((uVar4 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10276319c);
  (*pcVar1)();
}



/* Entry: 1027631cc; end: 10276337f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1027631cc(ulong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (*(long *)(param_1 + _DAT_112ebd9f0 + 8) != 0) {
    if (*(char *)(param_1 + _DAT_112ebd9f0 + 0x10) == '\x01') {
      return 6;
    }
    return 1;
  }
  FUN_102787314();
  uVar3 = param_1;
  FUN_1027af494();
  if (uVar3 != 0) {
    uVar7 = uVar3 & 0xffffffffffffff8;
    if (uVar3 >> 0x3e == 0) {
      uVar6 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      uVar6 = uVar3;
      if (-1 < (long)uVar3) {
        uVar6 = uVar7;
      }
      func_0x000107c60480();
    }
    if (uVar6 == 0) {
      func_0x000107c6142c();
    }
    else {
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar7 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102763380);
          (*pcVar2)();
        }
        uVar7 = *(ulong *)(uVar3 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar7 = 0;
        func_0x00010121c1ac();
      }
      func_0x000107c6142c(uVar3);
      uVar3 = uVar7;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (uVar3 != 0) {
        uVar6 = uVar3;
        func_0x000107c44984();
        if ((uVar6 & 1) != 0) {
          uVar6 = uVar3;
          func_0x000107c4c99c();
          func_0x000107c61180();
          if (uVar6 != 0) {
            uVar4 = uVar6;
            FUN_1027af184();
            if (uVar4 != 0) {
              uVar5 = uVar4;
              func_0x000107c4ca5c();
              func_0x000107c61170(param_1);
              func_0x000107c61170(uVar6);
              func_0x000107c61170(uVar3);
              func_0x000107c61170(uVar7);
              func_0x000107c61170(uVar4);
              uVar1 = 6;
              if ((int)uVar5 != 3) {
                uVar1 = 0;
              }
              if ((int)uVar5 != 2) {
                return uVar1;
              }
              return 1;
            }
            func_0x000107c61170(uVar6);
            func_0x000107c61170(param_1);
            func_0x000107c61170(uVar3);
            param_1 = uVar7;
            goto LAB_10276334c;
          }
        }
        func_0x000107c61170(uVar7);
        uVar7 = uVar3;
      }
      func_0x000107c61170(uVar7);
    }
  }
LAB_10276334c:
  func_0x000107c61170(param_1);
  return 0;
}



/* Entry: 102763380; end: 10276345f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_102763380(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_38;
  undefined1 uStack_36;
  
  iVar1 = (int)&lStack_60;
  func_0x0001000bb420(param_1,&uStack_58);
  uVar2 = 0;
  FUN_102787194(0);
  func_0x000107c6147c(&lStack_60,&uStack_58,PTR___sypN_11034f1a8 + 8,uVar2,6);
  if (iVar1 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uStack_58 = *(undefined8 *)(lStack_60 + _DAT_112ebd968);
    uVar2 = ((undefined8 *)(lStack_60 + _DAT_112ebd968))[1];
    uStack_48 = 0xd000000000000017;
    uStack_40 = 0x800000010f0ba8f0;
    uStack_38 = 0x101;
    uStack_36 = 1;
    uStack_50 = uVar2;
    func_0x000104445170(0);
    func_0x000107c610f8();
    func_0x000107c61434(uVar2);
    puVar3 = &uStack_58;
    func_0x000104444c88(puVar3);
    func_0x000107c61170(lStack_60);
  }
  return puVar3;
}



/* Entry: 102763460; end: 10276346f;  */

undefined1  [16] FUN_102763460(void)

{
  return ZEXT816(0x110545710);
}



/* Entry: 102763470; end: 10276348f;  */

void FUN_102763470(void)

{
  func_0x000107c61168(&PTR_PTR_11285fa28);
  return;
}



/* Entry: 102763490; end: 1027634d3;  */

void FUN_102763490(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001027634a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1027634d4; end: 102763517;  */

undefined8 FUN_1027634d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10276adc8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102763518; end: 10276351f;  */

void FUN_102763518(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0x112ebc8a0;
  uStack_88 = uVar2;
  uStack_80 = param_1;
  func_0x0001000285a8(0x112ebc8a0,&UNK_10dad6680);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_90 + -extraout_x8;
  lVar4 = 0;
  func_0x000107c5eec8();
  lVar14 = *(long *)(lVar4 + -8);
  lVar12 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (long)puVar13 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  pcVar8 = *(code **)(lVar14 + 0x10);
  (*pcVar8)(lVar11,uVar2,lVar4);
  lVar3 = 0x112ebc618;
  func_0x0001000285a8(0x112ebc618,&UNK_10dad6440);
  lVar10 = *(long *)(lVar3 + -8);
  (**(code **)(lVar10 + 0x10))(puVar13,param_1,lVar3);
  (**(code **)(lVar10 + 0x38))(puVar13,0,1,lVar3);
  func_0x000107c61428(lVar1 + 0x40,auStack_78,0x21,0);
  func_0x000102764bc8(puVar13,lVar11);
  func_0x000107c614a8(auStack_78);
  puVar5 = &UNK_1105458b8;
  func_0x000107c613fc(&UNK_1105458b8,0x18,7);
  func_0x000107c61644(puVar5 + 0x10,lVar1);
  (*pcVar8)(lVar11,uStack_88,lVar4);
  uVar7 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar9 = uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = &UNK_110545928;
  func_0x000107c613fc(&UNK_110545928,uVar9 + lVar12,uVar7 | 7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  (**(code **)(lVar14 + 0x20))(puVar6 + uVar9,lVar11,lVar4);
  func_0x000107c5fd1c(0x10276b23c,puVar6,lVar3);
  return;
}



/* Entry: 102763520; end: 1027635b7;  */

void FUN_102763520(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = 0x112ebc648;
  func_0x0001000285a8(0x112ebc648,&UNK_10db560b0);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar4 = uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff);
  lVar5 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar5 + -8) + 0x40) + uVar4 + 7 & 0xffffffffffffff8));
  plVar3 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1027635b8;
  plVar3[7] = unaff_x20 + uVar4;
  plVar3[8] = lVar5;
  lVar5 = 0x112ebc650;
  func_0x0001000285a8(0x112ebc650,&UNK_10dad6480);
  plVar3[9] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar3[10] = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0xb] = uVar4;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar5 = lVar2;
  func_0x000107c5fce8();
  plVar3[0xc] = lVar5;
  lVar5 = 0x112d45220;
  FUN_1027635f4(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar3[0xd] = lVar2;
  plVar3[0xe] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102760dd0,lVar2,lVar5);
  return;
}



/* Entry: 1027635b8; end: 1027635f3;  */

void FUN_1027635b8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001027635f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1027635f4; end: 1027636bf;  */

void FUN_1027635f4(long *param_1,code *param_2,long param_3)

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



/* Entry: 1027636c0; end: 102763723;  */

void FUN_1027636c0(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar7 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x102763884;
  plVar7[8] = lVar4;
  plVar7[9] = lVar2;
  plVar7[6] = lVar5;
  plVar7[7] = lVar1;
  lVar4 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar5 = lVar4;
  func_0x000107c5fce8();
  plVar7[10] = lVar5;
  uVar6 = 0x112d45220;
  FUN_1027635f4(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar4,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10276023c,lVar4,uVar6);
  return;
}



/* Entry: 102763724; end: 102763793;  */

void FUN_102763724(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102763880;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102763794; end: 10276383b;  */

void FUN_102763794(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x48);
  lVar3 = *(long *)(unaff_x20 + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x58);
  lVar4 = *(long *)(unaff_x20 + 0x60);
  lVar9 = *(long *)(unaff_x20 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x70);
  plVar8 = (long *)0x1b0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_10276383c;
  plVar8[0x26] = lVar4;
  plVar8[0x27] = lVar9;
  plVar8[0x24] = lVar3;
  plVar8[0x25] = lVar1;
  plVar8[0x22] = unaff_x20 + 0x20;
  plVar8[0x23] = lVar6;
  plVar8[0x20] = lVar7;
  plVar8[0x21] = lVar2;
  lVar6 = 0;
  func_0x000107c5fcec(uVar10);
  puVar5 = PTR___sScMMa_11034fc70;
  lVar7 = lVar6;
  func_0x000107c5fce8();
  plVar8[0x28] = lVar7;
  lVar7 = 0x112d45220;
  FUN_1027635f4(0x112d45220,puVar5,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar8[0x29] = lVar6;
  plVar8[0x2a] = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027603d4,lVar6,lVar7);
  return;
}



/* Entry: 10276383c; end: 102763877;  */

void FUN_10276383c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102763874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102763878; end: 102763887;  */

void FUN_102763878(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  *(undefined8 *)(*(long *)(param_5 + 0x38) + param_1 * 8) = param_4;
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10276153c);
  (*pcVar3)();
}



/* Entry: 102763888; end: 102763907;  */

void FUN_102763888(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebc598,&UNK_10dad6310);
  puVar1 = &UNK_110545850;
  func_0x000107c613fc(&UNK_110545850,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1027639c0,puVar1);
  return;
}



/* Entry: 102763908; end: 1027639bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102763908(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = param_2;
  FUN_1027642a0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x000107c61614(lVar3 + _DAT_112ebc6b8,0);
  func_0x000107c61614(lVar3 + _DAT_112ebc6c0,0);
  *(long *)(lVar3 + _DAT_112ebc6c8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112ebc6d0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1027639c0; end: 1027639c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027639c0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_50;
  lVar4 = lVar1;
  FUN_1027642a0();
  lVar5 = lVar4;
  func_0x000107c610f8();
  func_0x000107c61614(lVar5 + _DAT_112ebc6b8,0);
  func_0x000107c61614(lVar5 + _DAT_112ebc6c0,0);
  *(long *)(lVar5 + _DAT_112ebc6c8) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112ebc6d0) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_50,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1027639c8; end: 102763a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027639c8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112ebc6b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ebc6c0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ebc6c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ebc6d0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102763a58; end: 102763a9f; -[_TtC48MemTwoOperaSessionDataSourcePluginImplementation34MemTwoOperaSessionDataSourcePlugin playlistDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102763a58(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_28);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 102763aa0; end: 102763b3f; -[_TtC48MemTwoOperaSessionDataSourcePluginImplementation34MemTwoOperaSessionDataSourcePlugin addEventListenersWithEventAnnouncing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102763aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000100083b20(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 8))(param_3,uStack_50,lStack_48);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  func_0x0001000834e4(auStack_68);
  return;
}



/* Entry: 102763b40; end: 102763b6b; -[_TtC48MemTwoOperaSessionDataSourcePluginImplementation34MemTwoOperaSessionDataSourcePlugin type] */

void FUN_102763b40(void)

{
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0ba8f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102763b6c; end: 102763c0f; -[_TtC48MemTwoOperaSessionDataSourcePluginImplementation34MemTwoOperaSessionDataSourcePlugin setPlaylistItemController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102763b6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_38;
  
  func_0x000107c61604(param_1 + _DAT_112ebc6b8,param_3);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000100083b20(&lStack_38);
  func_0x000107c61604(lStack_38 + _DAT_112ebc5b8,param_3);
  FUN_10275ef20();
  func_0x000107c61170(lStack_38);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102763c10; end: 102763caf; -[_TtC48MemTwoOperaSessionDataSourcePluginImplementation34MemTwoOperaSessionDataSourcePlugin setOperaControlling:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102763c10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_38;
  
  func_0x000107c61604(param_1 + _DAT_112ebc6c0,param_3);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000100083b20(&lStack_38);
  func_0x000107c61170(param_1);
  func_0x000107c61604(lStack_38 + _DAT_112ebc5c0,param_3);
  func_0x000107c61170(lStack_38);
  func_0x000107c615e8(param_3);
  return;
}



/* Entry: 102763cb0; end: 102763d0b; -[_TtC48MemTwoOperaSessionDataSourcePluginImplementation34MemTwoOperaSessionDataSourcePlugin updateOperaConfiguration:] */

void FUN_102763cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000102764064(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102763d0c; end: 102763d6b; -[_TtC48MemTwoOperaSessionDataSourcePluginImplementation34MemTwoOperaSessionDataSourcePlugin init] */

void FUN_102763d0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoOperaSessionDataSourcePluginImplementation.MemTwoOperaSessionDataSourcePlugin"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102763d38);
  (*pcVar1)();
}



/* Entry: 102763d6c; end: 102763dc3; -[_TtC48MemTwoOperaSessionDataSourcePluginImplementation34MemTwoOperaSessionDataSourcePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102763da8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102763dac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102763d6c(long param_1)

{
  func_0x000100d04438(param_1 + _DAT_112ebc6b8);
  func_0x000100d04438(param_1 + _DAT_112ebc6c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebc6c8));
  return;
}



/* Entry: 102763dc4; end: 102763e1f;  */

void FUN_102763dc4(void)

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
    func_0x0001044443ac();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112ea1de0;
  plVar5 = (long *)&UNK_10dab4120;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 102763e20; end: 102763f63;  */

undefined * FUN_102763e20(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102763f64);
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
    puVar3 = (undefined *)0x112ebc718;
    func_0x0001000285a8(0x112ebc718,&UNK_10dad6548);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112ebc720;
    func_0x0001000285a8(0x112ebc720,&UNK_10dad6550);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x30 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 102763f64; end: 10276428f;  */

undefined * FUN_102763f64(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102764064);
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
    puVar3 = (undefined *)0x112ebc660;
    func_0x0001000285a8(0x112ebc660,&UNK_10dad6540);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 102764290; end: 10276429f;  */

undefined1  [16] FUN_102764290(void)

{
  return ZEXT816(0x110545878);
}



/* Entry: 1027642a0; end: 102764343;  */

void FUN_1027642a0(void)

{
  func_0x000107c61168(&PTR_PTR_11285fb18);
  return;
}



/* Entry: 102764344; end: 1027643c3;  */

void FUN_102764344(undefined8 param_1)

{
  func_0x0001000285a8(0x112ebc728,&UNK_10dad6560);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102764390,param_1);
  return;
}



/* Entry: 1027643c4; end: 1027643d3;  */

undefined1  [16] FUN_1027643c4(void)

{
  return ZEXT816(0x110545898);
}



/* Entry: 1027643d4; end: 102764663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1027643d4(double param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  double dVar10;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined8 auStack_78 [3];
  
  plVar1 = (long *)(param_2 + _DAT_112ebd9d0);
  func_0x000107c61428(unaff_x20 + 0x20,auStack_78,0x20,0);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *plVar1;
  uVar2 = plVar1[1];
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    lVar9 = lVar3;
    uVar7 = uVar2;
    func_0x000100029284();
    if ((uVar7 & 1) != 0) {
      lVar9 = *(long *)(*(long *)(lVar8 + 0x38) + lVar9 * 8);
      func_0x000107c61434(lVar9);
      func_0x000107c614a8(auStack_78);
      func_0x000107c6142c(lVar8);
      FUN_102765b4c(param_2);
      lVar3 = lVar9;
      FUN_10276a840(lVar9,param_2);
      func_0x000107c6142c(lVar9);
      func_0x000107c6142c(param_2);
      return lVar3;
    }
    func_0x000107c6142c(lVar8);
  }
  puVar4 = auStack_78;
  func_0x000107c614a8();
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar5 = *puVar4;
  func_0x000107c61174(uVar5);
  uVar6 = 0xd000000000000022;
  func_0x0001000a9a18(0xd000000000000022,0x800000010f0baa40);
  func_0x000107c61170(uVar5);
  func_0x000107c60734();
  lVar8 = param_2;
  dVar10 = param_1;
  func_0x00010276abc8(param_2);
  func_0x000102765d1c(param_2);
  lVar9 = lVar8;
  FUN_10276a840(lVar8,param_2);
  func_0x000107c6142c(lVar8);
  func_0x000107c6142c(param_2);
  func_0x000107c61428(puVar4,auStack_90,0,0);
  uVar5 = *puVar4;
  func_0x000107c61174(uVar5);
  func_0x0001000aa0a8(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c60734();
  func_0x000107c61428(unaff_x20 + 0x28,auStack_a8,0x21,0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61558(uVar5);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = 0x8000000000000000;
  func_0x00010206e030((dVar10 - param_1) * 1000.0,lVar3,uVar2,uVar5);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar6;
  func_0x000107c614a8(auStack_a8);
  func_0x000107c61428(unaff_x20 + 0x20,auStack_a8,0x21,0);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(lVar9);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61558(uVar5);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = 0x8000000000000000;
  FUN_10276841c(lVar9,lVar3,uVar2,uVar5);
  func_0x000107c6142c(uVar2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar6;
  func_0x000107c614a8(auStack_a8);
  return lVar9;
}



/* Entry: 102764664; end: 102764d9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102764664(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long extraout_x8;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long lVar14;
  long lVar15;
  undefined8 *unaff_x20;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long alStack_d0 [2];
  long lStack_c0;
  undefined1 auStack_78 [24];
  
  uVar9 = *unaff_x20;
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar20 = *(long *)(lVar3 + -8);
  lVar22 = *(long *)(lVar20 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)&lStack_c0 - (lVar22 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar10 - extraout_x12;
  lVar4 = 0x112ebc730;
  func_0x0001000285a8(0x112ebc730,&UNK_10dad65a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar13 = lVar17 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar13 - extraout_x12_00;
  plVar1 = (long *)(param_1 + _DAT_112ebd9d0);
  func_0x000107c61428(unaff_x20 + 7,auStack_78,0x20,0);
  lVar16 = unaff_x20[7];
  lVar4 = *plVar1;
  uVar2 = plVar1[1];
  if (*(long *)(lVar16 + 0x10) != 0) {
    func_0x000107c61434(lVar16);
    lVar15 = lVar4;
    uVar12 = uVar2;
    func_0x000100029284(lVar4);
    if ((uVar12 & 1) != 0) {
      lVar14 = *(long *)(lVar16 + 0x38);
      lVar5 = 0;
      FUN_10276adc8();
      lVar21 = *(long *)(lVar5 + -8);
      func_0x000102763634(lVar14 + *(long *)(lVar21 + 0x48) * lVar15,lVar18);
      func_0x000107c6142c(lVar16);
      pcVar11 = *(code **)(lVar21 + 0x38);
      uVar8 = 0;
      goto LAB_102764814;
    }
    func_0x000107c6142c(lVar16);
  }
  lVar5 = 0;
  FUN_10276adc8();
  pcVar11 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  uVar8 = 1;
LAB_102764814:
  (*pcVar11)(lVar18,uVar8,1,lVar5);
  func_0x000107c614a8(auStack_78);
  FUN_10276adc8(0);
  lVar15 = *(long *)(lVar5 + -8);
  lVar16 = lVar18;
  (**(code **)(lVar15 + 0x30))(lVar18,1,lVar5);
  func_0x00010276baec(lVar18,0x112ebc730,&UNK_10dad65a0);
  if ((int)lVar16 == 1) {
    func_0x000107c5eec4(lVar17);
    puVar6 = &UNK_1105458b8;
    func_0x000107c613fc(&UNK_1105458b8,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    pcVar11 = *(code **)(lVar20 + 0x10);
    lStack_c0 = lVar17;
    (*pcVar11)(lVar10,lVar17,lVar3);
    uVar12 = (ulong)*(byte *)(lVar20 + 0x50);
    uVar19 = uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff);
    uVar23 = lVar22 + uVar19 + 7 & 0xfffffffffffffff8;
    puVar7 = &UNK_1105458e0;
    func_0x000107c613fc(&UNK_1105458e0,uVar23 + 8,uVar12 | 7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(long *)(puVar7 + 0x18) = param_1;
    (**(code **)(lVar20 + 0x20))(puVar7 + uVar19,lVar10,lVar3);
    *(undefined8 *)(puVar7 + uVar23) = uVar9;
    func_0x000107c61174(param_1);
    *(undefined **)(lVar18 + -0x10) = PTR___sytN_11034f1b0 + 8;
    uVar9 = 0xc1;
    func_0x000100859150(0xc1,0,0x48,4,0,0,&UNK_10dad65b0,puVar7);
    func_0x000107c61574(puVar7);
    lVar10 = lStack_c0;
    (*pcVar11)(lVar13,lStack_c0,lVar3);
    *(undefined8 *)(lVar13 + *(int *)(lVar5 + 0x14)) = uVar9;
    (**(code **)(lVar15 + 0x38))(lVar13,0,1,lVar5);
    func_0x000107c61428(unaff_x20 + 7,auStack_78,0x21,0);
    func_0x000107c61434(uVar2);
    func_0x000107c6157c(uVar9);
    func_0x000102764a1c(lVar13,lVar4,uVar2);
    func_0x000107c614a8(auStack_78);
    func_0x000107c61574(uVar9);
    (**(code **)(lVar20 + 8))(lVar10,lVar3);
  }
  return;
}



/* Entry: 102764da0; end: 102764fbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102764da0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar2 = 0x112ebc730;
  func_0x0001000285a8(0x112ebc730,&UNK_10dad65a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&uStack_70 - extraout_x8;
  lVar3 = 0;
  FUN_10276adc8();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar1 = (undefined8 *)(param_1 + _DAT_112ebd9d0);
  func_0x000107c61428(unaff_x20 + 0x20,auStack_68,0x21,0);
  uVar5 = *puVar1;
  uVar7 = puVar1[1];
  uVar4 = uVar5;
  FUN_1027617c0(uVar5,uVar7);
  func_0x000107c614a8(auStack_68);
  func_0x000107c6142c(uVar4);
  func_0x000107c61428(unaff_x20 + 0x28,auStack_68,0x21,0);
  func_0x00010206439c(uVar5,uVar7);
  func_0x000107c614a8(auStack_68);
  func_0x000107c61428(unaff_x20 + 0x30,auStack_68,0x21,0);
  uVar4 = uVar5;
  FUN_1027619a8(uVar5,uVar7);
  func_0x000107c614a8(auStack_68);
  func_0x000107c6142c(uVar4);
  func_0x000107c61428(unaff_x20 + 0x38,auStack_68,0x21,0);
  FUN_102761890(lVar8,uVar5,uVar7);
  func_0x000107c614a8(auStack_68);
  lVar2 = lVar8;
  (**(code **)(lVar9 + 0x30))(lVar8,1,lVar3);
  if ((int)lVar2 == 1) {
    func_0x00010276baec(lVar8,0x112ebc730,&UNK_10dad65a0);
  }
  else {
    FUN_1027634d4(lVar8,lVar6);
    uVar7 = *(undefined8 *)(lVar6 + *(int *)(lVar3 + 0x14));
    uVar5 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fd50(uVar7,PTR___sytN_11034f1b0 + 8,uVar5,PTR___ss5ErrorWS_11034ee10);
    FUN_10276aedc(lVar6);
  }
  return;
}



/* Entry: 102764fbc; end: 102765013;  */

void FUN_102764fbc(undefined8 param_1)

{
  func_0x0001000285a8(0x112ebc738,&UNK_10dad65b8);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  func_0x0001002acf1c(FUN_10276af18,param_1);
  return;
}



/* Entry: 102765014; end: 10276518b;  */

void FUN_102765014(long *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = param_2;
  FUN_10276af38();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  func_0x000107c6157c(param_2);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102762c70();
  *(undefined **)(lVar1 + 0x20) = puVar2;
  puVar2 = puVar3;
  func_0x0001010fe67c();
  *(undefined **)(lVar1 + 0x28) = puVar2;
  puVar2 = puVar3;
  func_0x000102762c84();
  *(undefined **)(lVar1 + 0x30) = puVar2;
  puVar2 = puVar3;
  FUN_102762d8c();
  *(undefined **)(lVar1 + 0x38) = puVar2;
  func_0x000102762f10();
  *(undefined **)(lVar1 + 0x40) = puVar3;
  *(long *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
  return;
}



/* Entry: 10276518c; end: 102765683;  */

undefined * FUN_10276518c(long param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  FUN_102785df4();
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    func_0x000107c6142c(param_1);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar9 = 0x20;
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      uVar2 = *(undefined1 *)(param_1 + lVar9);
      func_0x000100083b20(&uStack_c8);
      uVar3 = CONCAT71(uStack_c7,uStack_c8);
      uStack_c8 = uVar2;
      func_0x00010008a7c8(&lStack_90,&uStack_c8);
      func_0x000107c61574(uVar3);
      lVar4 = lStack_90;
      if (lStack_90 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        lStack_a0 = 0;
        uStack_b8 = 0;
        lStack_c0 = 0;
LAB_1027651f4:
        func_0x00010276baec(&lStack_c0,0x112ebc8d0,&UNK_10dad6700);
      }
      else {
        lStack_c0 = CONCAT71(lStack_c0._1_7_,uVar2);
        func_0x000107c6157c(lStack_90);
        func_0x0001048580f8(&uStack_b8);
        func_0x000107c61578(lVar4,2);
        if (lStack_a0 == 0) goto LAB_1027651f4;
        uStack_88 = uStack_b8;
        lStack_90 = lStack_c0;
        uStack_78 = uStack_a8;
        uStack_80 = uStack_b0;
        uStack_68 = uStack_98;
        lStack_70 = lStack_a0;
        puVar5 = puVar7;
        func_0x000107c61558();
        puVar6 = puVar7;
        if (((ulong)puVar5 & 1) == 0) {
          puVar6 = (undefined *)0x0;
          FUN_102763e20(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
        }
        uVar1 = *(ulong *)(puVar6 + 0x10);
        puVar7 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
          FUN_102763e20(puVar7,uVar1 + 1,1,puVar6);
        }
        *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar7 + uVar1 * 0x30 + 0x38) = uStack_78;
        *(undefined8 *)(puVar7 + uVar1 * 0x30 + 0x30) = uStack_80;
        *(undefined8 *)(puVar7 + uVar1 * 0x30 + 0x48) = uStack_68;
        *(long *)(puVar7 + uVar1 * 0x30 + 0x40) = lStack_70;
        *(undefined8 *)(puVar7 + uVar1 * 0x30 + 0x28) = uStack_88;
        *(long *)(puVar7 + uVar1 * 0x30 + 0x20) = lStack_90;
      }
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    func_0x000107c6142c(param_1);
  }
  return puVar7;
}



/* Entry: 102765684; end: 1027656a3;  */

void FUN_102765684(void)

{
  func_0x000102765338();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1027656a4; end: 102765877;  */

void FUN_1027656a4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0x112ebc8a0;
  uStack_88 = param_3;
  uStack_80 = param_1;
  func_0x0001000285a8(0x112ebc8a0,&UNK_10dad6680);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_90 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar12 = *(long *)(lVar2 + -8);
  lVar10 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar11 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  pcVar6 = *(code **)(lVar12 + 0x10);
  (*pcVar6)(lVar9,param_3,lVar2);
  lVar1 = 0x112ebc618;
  func_0x0001000285a8(0x112ebc618,&UNK_10dad6440);
  lVar8 = *(long *)(lVar1 + -8);
  (**(code **)(lVar8 + 0x10))(puVar11,param_1,lVar1);
  (**(code **)(lVar8 + 0x38))(puVar11,0,1,lVar1);
  func_0x000107c61428(param_2 + 0x40,auStack_78,0x21,0);
  func_0x000102764bc8(puVar11,lVar9);
  func_0x000107c614a8(auStack_78);
  puVar3 = &UNK_1105458b8;
  func_0x000107c613fc(&UNK_1105458b8,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,param_2);
  (*pcVar6)(lVar9,uStack_88,lVar2);
  uVar5 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar7 = uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff);
  puVar4 = &UNK_110545928;
  func_0x000107c613fc(&UNK_110545928,uVar7 + lVar10,uVar5 | 7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  (**(code **)(lVar12 + 0x20))(puVar4 + uVar7,lVar9,lVar2);
  func_0x000107c5fd1c(0x10276b23c,puVar4,lVar1);
  return;
}



/* Entry: 102765878; end: 1027659e3;  */

void FUN_102765878(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 auStack_80 [2];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar9 = *(long *)(lVar2 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = -(lVar7 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &UNK_1105458b8;
  func_0x000107c613fc(&UNK_1105458b8,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648(param_2);
  func_0x000107c61644(puVar3 + 0x10,param_2);
  func_0x000107c61574(param_2);
  (**(code **)(lVar9 + 0x10))(auStack_70 + lVar1,param_3,lVar2);
  uVar6 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar8 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  puVar4 = &UNK_110545950;
  func_0x000107c613fc(&UNK_110545950,uVar8 + lVar7,uVar6 | 7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  (**(code **)(lVar9 + 0x20))(puVar4 + uVar8,auStack_70 + lVar1,lVar2);
  uVar5 = 0x112ebc8a0;
  func_0x0001000285a8(0x112ebc8a0,&UNK_10dad6680);
  *(undefined8 *)((long)auStack_80 + lVar1) = uVar5;
  uVar5 = 0xc1;
  func_0x0001001ca524(0xc1,0,0x48,4,0,0,&UNK_10dad6690,puVar4);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar5);
  return;
}



/* Entry: 1027659e4; end: 102765a77;  */

void FUN_1027659e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar3;
  uVar3 = 0x112d45220;
  FUN_10276b3a0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102765a78,uVar2,uVar3);
  return;
}



/* Entry: 102765a78; end: 102765b4b;  */

void FUN_102765a78(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x48);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar2 = 0x112ebc618;
    func_0x0001000285a8(0x112ebc618,&UNK_10dad6440);
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uVar1,1,1,lVar2);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
    func_0x000107c61428(lVar2 + 0x40,unaff_x22 + 0x28,0x21,0);
    FUN_102761a90(uVar3,uVar1);
    func_0x000107c614a8(unaff_x22 + 0x28);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000102765b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102765b4c; end: 102765e37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102765b4c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puStack_b0;
  undefined1 auStack_a8 [24];
  byte abStack_90 [8];
  undefined1 auStack_88 [40];
  
  puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84();
  puVar3 = puStack_b0;
  func_0x000102765130();
  lVar6 = *(long *)(puVar3 + 0x10);
  if (lVar6 == 0) {
    func_0x000107c6142c();
  }
  else {
    lVar1 = *(long *)(param_1 + _DAT_112ebd9d0);
    uVar2 = ((long *)(param_1 + _DAT_112ebd9d0))[1];
    puVar10 = puVar3 + 0x20;
    do {
      FUN_10276baa4(puVar10,abStack_90,0x112ebc720,&UNK_10dad6550);
      uVar11 = (ulong)abStack_90[0];
      func_0x000107c61428(unaff_x20 + 0x30,auStack_a8,0x20,0);
      lVar7 = *(long *)(unaff_x20 + 0x30);
      if (*(long *)(lVar7 + 0x10) == 0) {
LAB_102765bd0:
        func_0x000107c614a8(auStack_a8);
      }
      else {
        func_0x000107c61434(lVar7);
        lVar4 = lVar1;
        uVar5 = uVar2;
        func_0x000100029284();
        if ((uVar5 & 1) == 0) {
          func_0x000107c6142c(lVar7);
          goto LAB_102765bd0;
        }
        puVar9 = *(undefined **)(*(long *)(lVar7 + 0x38) + lVar4 * 8);
        func_0x000107c61434(puVar9);
        func_0x000107c6142c(lVar7);
        if ((*(long *)(puVar9 + 0x10) == 0) || (FUN_10276835c(), (uVar5 & 1) == 0)) {
          func_0x000107c614a8(auStack_a8);
          puVar8 = puVar9;
LAB_102765cd0:
          func_0x000107c6142c(puVar8);
        }
        else {
          puVar8 = *(undefined **)(*(long *)(puVar9 + 0x38) + uVar11 * 8);
          func_0x000107c61434(puVar8);
          func_0x000107c614a8(auStack_a8);
          func_0x000107c6142c(puVar9);
          if (*(long *)(puVar8 + 0x10) == 0) goto LAB_102765cd0;
          puVar9 = puVar8;
          FUN_10276a840(puVar8,puStack_b0);
          func_0x000107c6142c(puStack_b0);
          func_0x000107c6142c(puVar8);
          puStack_b0 = puVar9;
        }
      }
      FUN_10276ba84(auStack_88);
      puVar10 = puVar10 + 0x30;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    func_0x000107c6142c(puVar3);
  }
  return puStack_b0;
}



/* Entry: 102765e38; end: 102765ed3;  */

void FUN_102765e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x198) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x188) = param_2;
  *(undefined8 *)(unaff_x22 + 400) = param_3;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0x1a8) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar3;
  uVar3 = 0x112d45220;
  FUN_10276b3a0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0x1b8) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102765ed4,uVar2,uVar3);
  return;
}



/* Entry: 102765ed4; end: 10276607f;  */

void FUN_102765ed4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1a0);
  lVar5 = *(long *)(unaff_x22 + 0x188);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar6 = *(undefined8 *)(unaff_x22 + 400);
  func_0x000107c60734();
  *(undefined **)(unaff_x22 + 0x178) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0x1d0) = param_1;
  puVar2 = &UNK_1105458b8;
  func_0x000107c613fc(&UNK_1105458b8,0x18,7);
  *(undefined **)(unaff_x22 + 0x1d8) = puVar2;
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x148,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648(lVar5);
  func_0x000107c61644(puVar2 + 0x10,lVar5);
  func_0x000107c61574(lVar5);
  *(undefined **)(unaff_x22 + 0x120) = puVar2;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar6;
  *(long *)(unaff_x22 + 0x138) = unaff_x22 + 0x178;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar4;
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    func_0x0001000285a8(0x112ebc8a8,&UNK_10dad66a8);
    plVar3 = (long *)(ulong)*(uint *)(
                                     PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1e0) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_102766080;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
    )();
    return;
  }
  if (param_1 == 0) {
    param_1 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1b8);
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x22 + 0x1e8) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027660e0,param_1);
  return;
}



/* Entry: 102766080; end: 1027660df;  */

void FUN_102766080(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x1d8);
  uVar2 = *(undefined8 *)(lVar3 + 0x1d0);
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x1e0));
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102766264,*(undefined8 *)(lVar3 + 0x1c0),*(undefined8 *)(lVar3 + 0x1c8));
  return;
}



/* Entry: 1027660e0; end: 10276615f;  */

void FUN_1027660e0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  
  uVar2 = 0x112ebc8a8;
  func_0x0001000285a8(0x112ebc8a8,&UNK_10dad66a8);
  func_0x000107c615ac(unaff_x22 + 0x10,uVar2);
  *(long *)(unaff_x22 + 0x180) = unaff_x22 + 0x10;
  plVar3 = (long *)0x1a0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1f8) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102766160;
  lVar8 = *(long *)(unaff_x22 + 0x1d8);
  lVar4 = *(long *)(unaff_x22 + 0x198);
  lVar7 = *(long *)(unaff_x22 + 0x1a0);
  lVar9 = *(long *)(unaff_x22 + 400);
  plVar3[0x22] = unaff_x22 + 0x178;
  plVar3[0x23] = lVar7;
  plVar3[0x20] = lVar9;
  plVar3[0x21] = lVar4;
  plVar3[0x1e] = unaff_x22 + 0x180;
  plVar3[0x1f] = lVar8;
  lVar4 = 0;
  func_0x000107c5eec8();
  plVar3[0x24] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x25] = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  plVar3[0x26] = lVar4;
  uVar5 = lVar4 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x27] = uVar5;
  lVar4 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x28] = uVar6;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x29] = uVar5;
  lVar4 = 0x112ebc8c0;
  func_0x0001000285a8(0x112ebc8c0,&UNK_10dad66c8);
  plVar3[0x2a] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x2b] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x2c] = uVar5;
  lVar7 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  plVar3[0x2d] = lVar7;
  lVar4 = lVar7;
  func_0x000107c5fce8();
  plVar3[0x2e] = lVar4;
  lVar4 = 0x112d45220;
  FUN_10276b3a0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  plVar3[0x2f] = lVar4;
  func_0x000107c5fca8();
  plVar3[0x30] = lVar7;
  plVar3[0x31] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102766a2c,lVar7,lVar4);
  return;
}



/* Entry: 102766160; end: 1027661d3;  */

void FUN_102766160(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x1f8));
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
  func_0x000107c615b8();
  *(long **)(lVar3 + 0x200) = plVar1;
  func_0x0001000285a8(0x112ebc8b0,&UNK_10dad66b0);
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_1027661d4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
  return;
}



/* Entry: 1027661d4; end: 102766217;  */

void FUN_1027661d4(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102766218,*(undefined8 *)(lVar1 + 0x1e8),*(undefined8 *)(lVar1 + 0x1f0));
  return;
}



/* Entry: 102766218; end: 102766263;  */

void FUN_102766218(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1d8);
  func_0x000107c615a8(unaff_x22 + 0x10);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102766264,*(undefined8 *)(unaff_x22 + 0x1c0),*(undefined8 *)(unaff_x22 + 0x1c8));
  return;
}



/* Entry: 102766264; end: 10276630b;  */

void FUN_102766264(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar2 = *(ulong *)(unaff_x22 + 0x1b0);
  func_0x000107c61574();
  func_0x000107c5fd5c();
  if ((uVar2 & 1) == 0) {
    lVar4 = *(long *)(unaff_x22 + 0x188);
    func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x160,0,0);
    lVar4 = lVar4 + 0x10;
    func_0x000107c61648();
    if (lVar4 != 0) {
      uVar3 = *(undefined8 *)(unaff_x22 + 400);
      func_0x000107c60734();
      FUN_10276b4fc(uVar3,*(undefined8 *)(unaff_x22 + 0x178));
      func_0x000107c61574(lVar4);
    }
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 400);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x188);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x178));
  FUN_10276630c(uVar5,uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102766308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10276630c; end: 1027668f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10276630c(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar6;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  bool bVar13;
  long lVar14;
  ulong uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar5 = (long)&uStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0x112d68090;
  lStack_d0 = lVar5;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  lStack_a0 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = lVar5 - extraout_x8_00;
  lVar3 = 0;
  lStack_98 = lVar5;
  FUN_10276adc8();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar5 = lVar5 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0x112ebc730;
  lStack_c8 = lVar5;
  func_0x0001000285a8(0x112ebc730,&UNK_10dad65a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar5 = lVar5 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_c0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar5 - extraout_x12;
  lVar9 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  uVar6 = lVar5 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uStack_a8 = uVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = uVar6 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar12 - extraout_x12_01;
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    return;
  }
  plVar1 = (long *)(param_2 + _DAT_112ebd9d0);
  uStack_b8 = param_3;
  lStack_b0 = lVar14;
  func_0x000107c61428(param_1 + 0x38,auStack_90,0x20,0);
  lVar7 = *(long *)(param_1 + 0x38);
  lVar14 = *plVar1;
  uVar6 = plVar1[1];
  uStack_e0 = uVar6;
  lStack_d8 = lVar14;
  if (*(long *)(lVar7 + 0x10) == 0) {
    bVar13 = true;
  }
  else {
    func_0x000107c61434(lVar7);
    func_0x000100029284(lVar14);
    bVar13 = (uVar6 & 1) == 0;
    if (!bVar13) {
      func_0x000102763634(*(long *)(lVar7 + 0x38) + *(long *)(lVar10 + 0x48) * lVar14,lVar5);
    }
    func_0x000107c6142c(lVar7);
  }
  (**(code **)(lVar10 + 0x38))(lVar5,bVar13,1,lVar3);
  lVar14 = lVar5;
  (**(code **)(lVar10 + 0x30))(lVar5,1,lVar3);
  lVar10 = lStack_98;
  lVar3 = lStack_c8;
  if ((int)lVar14 == 0) {
    func_0x000102763634(lVar5,lStack_c8);
    func_0x00010276baec(lVar5,0x112ebc730,&UNK_10dad65a0);
    func_0x000107c614a8(auStack_90);
    lVar5 = lStack_b0;
    pcVar11 = *(code **)(lStack_b0 + 0x10);
    (*pcVar11)(lVar9,lVar3,lVar2);
    FUN_10276aedc(lVar3);
    pcVar8 = *(code **)(lVar5 + 0x38);
    (*pcVar8)(lVar9,0,1,lVar2);
  }
  else {
    func_0x00010276baec(lVar5,0x112ebc730,&UNK_10dad65a0);
    func_0x000107c614a8(auStack_90);
    lVar5 = lStack_b0;
    pcVar8 = *(code **)(lStack_b0 + 0x38);
    (*pcVar8)(lVar9,1,1,lVar2);
    pcVar11 = *(code **)(lVar5 + 0x10);
  }
  (*pcVar11)(lVar12,uStack_b8,lVar2);
  (*pcVar8)(lVar12,0,1,lVar2);
  lVar3 = (long)*(int *)(lStack_a0 + 0x30);
  func_0x00010276baa4(lVar9,lVar10,0x112d3bc20,&UNK_10d904ef0);
  func_0x00010276baa4(lVar12,lVar10 + lVar3,0x112d3bc20,&UNK_10d904ef0);
  pcVar8 = *(code **)(lVar5 + 0x30);
  lVar14 = lVar10;
  (*pcVar8)(lVar10,1,lVar2);
  uVar6 = uStack_a8;
  if ((int)lVar14 == 1) {
    func_0x00010276baec(lVar12,0x112d3bc20,&UNK_10d904ef0);
    func_0x00010276baec(lVar9,0x112d3bc20,&UNK_10d904ef0);
    lVar3 = lVar10 + lVar3;
    (*pcVar8)(lVar3,1,lVar2);
    if ((int)lVar3 == 1) {
      func_0x00010276baec(lVar10,0x112d3bc20,&UNK_10d904ef0);
LAB_102766884:
      func_0x000107c61428(param_1 + 0x38,auStack_90,0x21,0);
      lVar9 = lStack_c0;
      FUN_102761890(lStack_c0,lStack_d8,uStack_e0);
      func_0x000107c614a8(auStack_90);
      func_0x000107c61574(param_1);
      func_0x00010276baec(lVar9,0x112ebc730,&UNK_10dad65a0);
      return;
    }
  }
  else {
    func_0x00010276baa4(lVar10,uStack_a8,0x112d3bc20,&UNK_10d904ef0);
    lVar14 = lVar10 + lVar3;
    (*pcVar8)(lVar14,1,lVar2);
    lVar7 = lStack_d0;
    if ((int)lVar14 != 1) {
      (**(code **)(lVar5 + 0x20))(lStack_d0,lVar10 + lVar3,lVar2);
      uVar4 = 0x112d68098;
      FUN_10276b3a0(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                    PTR___s10Foundation4UUIDVSQAAMc_110350c50);
      func_0x000107c5fab8(uVar6,lVar7,lVar2,uVar4);
      pcVar8 = *(code **)(lVar5 + 8);
      (*pcVar8)(lVar7,lVar2);
      func_0x00010276baec(lVar12,0x112d3bc20,&UNK_10d904ef0);
      func_0x00010276baec(lVar9,0x112d3bc20,&UNK_10d904ef0);
      (*pcVar8)(uStack_a8,lVar2);
      func_0x00010276baec(lVar10,0x112d3bc20,&UNK_10d904ef0);
      if ((uVar6 & 1) != 0) goto LAB_102766884;
      goto LAB_1027667c8;
    }
    func_0x00010276baec(lVar12,0x112d3bc20,&UNK_10d904ef0);
    func_0x00010276baec(lVar9,0x112d3bc20,&UNK_10d904ef0);
    (**(code **)(lVar5 + 8))(uVar6,lVar2);
  }
  func_0x00010276baec(lVar10,0x112d68090,&UNK_10da24400);
LAB_1027667c8:
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 1027668f4; end: 102766a2b;  */

void FUN_1027668f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x110) = param_6;
  *(undefined8 *)(unaff_x22 + 0x118) = param_7;
  *(undefined8 *)(unaff_x22 + 0x100) = param_4;
  *(undefined8 *)(unaff_x22 + 0x108) = param_5;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_3;
  lVar2 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x120) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x128) = lVar2;
  lVar2 = *(long *)(lVar2 + 0x40);
  *(long *)(unaff_x22 + 0x130) = lVar2;
  uVar3 = lVar2 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x138) = uVar3;
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x140) = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x148) = uVar3;
  lVar2 = 0x112ebc8c0;
  func_0x0001000285a8(0x112ebc8c0,&UNK_10dad66c8);
  *(long *)(unaff_x22 + 0x150) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x158) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x160) = uVar3;
  uVar5 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0x168) = uVar5;
  uVar6 = uVar5;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x170) = uVar6;
  uVar6 = 0x112d45220;
  FUN_10276b3a0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0x178) = uVar6;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x180) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x188) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102766a2c,uVar5,uVar6);
  return;
}



/* Entry: 102766a2c; end: 102766ea7;  */

void FUN_102766a2c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long unaff_x22;
  long lVar25;
  undefined8 uVar26;
  ulong uVar27;
  
  lVar22 = *(long *)(unaff_x22 + 0xf8);
  func_0x000107c61428(lVar22 + 0x10,unaff_x22 + 0xb0,0,0);
  lVar22 = lVar22 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 400) = lVar22;
  if (lVar22 == 0) {
    uVar24 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x138);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x170));
    func_0x000107c615c0(uVar24);
    func_0x000107c615c0(uVar15);
    func_0x000107c615c0(uVar14);
    func_0x000107c615c0(uVar23);
                    /* WARNING: Could not recover jumptable at 0x000102766ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar7 = lVar22;
  func_0x000102765130();
  lVar18 = *(long *)(lVar7 + 0x10);
  if (lVar18 != 0) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x178);
    lVar1 = *(long *)(unaff_x22 + 0x128);
    lVar2 = *(long *)(unaff_x22 + 0x130);
    lVar8 = lVar7 + 0x20;
    uVar15 = **(undefined8 **)(unaff_x22 + 0xf0);
    do {
      uVar20 = *(ulong *)(unaff_x22 + 0x140);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x138);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x118);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
      FUN_10276baa4(lVar8,unaff_x22 + 0x10,0x112ebc720,&UNK_10dad6550);
      uVar6 = *(undefined1 *)(unaff_x22 + 0x10);
      FUN_10276b870(unaff_x22 + 0x18,unaff_x22 + 0x40);
      lVar9 = 0;
      func_0x000107c5fd0c();
      lVar16 = *(long *)(lVar9 + -8);
      (**(code **)(lVar16 + 0x38))(uVar3,1,1,lVar9);
      puVar10 = &UNK_1105458b8;
      func_0x000107c613fc(&UNK_1105458b8,0x18,7);
      func_0x000107c61644(puVar10 + 0x10,lVar22);
      FUN_10276b888(unaff_x22 + 0x40,unaff_x22 + 0x68);
      (**(code **)(lVar1 + 0x10))(uVar26,uVar5,uVar4);
      func_0x000107c61174();
      puVar11 = puVar10;
      func_0x000107c6157c();
      func_0x000107c5fce8();
      uVar17 = (ulong)*(byte *)(lVar1 + 0x50);
      uVar27 = uVar17 + 0x60 & (uVar17 ^ 0xffffffffffffffff);
      uVar19 = lVar2 + 7 + uVar27 & 0xfffffffffffffff8;
      puVar12 = &UNK_110545978;
      func_0x000107c613fc(&UNK_110545978,uVar19 + 8,uVar17 | 7);
      *(undefined **)(puVar12 + 0x10) = puVar11;
      *(undefined8 *)(puVar12 + 0x18) = uVar14;
      puVar12[0x20] = uVar6;
      FUN_10276b870(unaff_x22 + 0x68,puVar12 + 0x28);
      *(undefined8 *)(puVar12 + 0x50) = uVar23;
      *(undefined **)(puVar12 + 0x58) = puVar10;
      (**(code **)(lVar1 + 0x20))(puVar12 + uVar27,uVar26,uVar4);
      *(undefined8 *)(puVar12 + uVar19) = uVar24;
      func_0x000107c61574(puVar10);
      FUN_10276baa4(uVar3,uVar20,0x112d453c8,&UNK_10d90ac60);
      (**(code **)(lVar16 + 0x30))(uVar20,1,lVar9);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x140);
      if ((int)uVar20 == 1) {
        func_0x00010276baec(uVar24,0x112d453c8,&UNK_10d90ac60);
        uVar20 = 0x3100;
        lVar9 = *(long *)(puVar12 + 0x10);
        if (lVar9 != 0) goto LAB_102766cfc;
LAB_102766d60:
        lVar16 = 0;
        lVar25 = 0;
      }
      else {
        func_0x000107c5fd08();
        (**(code **)(lVar16 + 8))(uVar24,lVar9);
        uVar20 = uVar20 & 0xff | 0x3100;
        lVar9 = *(long *)(puVar12 + 0x10);
        if (lVar9 == 0) goto LAB_102766d60;
LAB_102766cfc:
        lVar25 = *(long *)(puVar12 + 0x18);
        lVar16 = lVar9;
        func_0x000107c614f0();
        func_0x000107c615f0(lVar9);
        func_0x000107c5fca8();
        func_0x000107c615e8(lVar9);
      }
      puVar10 = &UNK_1105459a0;
      func_0x000107c613fc(&UNK_1105459a0,0x20,7);
      *(undefined **)(puVar10 + 0x10) = &UNK_10dad66e8;
      *(undefined **)(puVar10 + 0x18) = puVar12;
      func_0x000107c6157c(puVar12);
      uVar24 = 0x112ebc8a8;
      func_0x0001000285a8(0x112ebc8a8,&UNK_10dad66a8);
      puVar21 = (undefined8 *)0x0;
      if (lVar25 != 0 || lVar16 != 0) {
        *(undefined8 *)(unaff_x22 + 0x90) = 0;
        *(undefined8 *)(unaff_x22 + 0x98) = 0;
        *(long *)(unaff_x22 + 0xa0) = lVar16;
        *(long *)(unaff_x22 + 0xa8) = lVar25;
        puVar21 = (undefined8 *)(unaff_x22 + 0x90);
      }
      uVar23 = *(undefined8 *)(unaff_x22 + 0x148);
      *(undefined8 *)(unaff_x22 + 200) = 1;
      *(undefined8 **)(unaff_x22 + 0xd0) = puVar21;
      *(undefined8 *)(unaff_x22 + 0xd8) = uVar15;
      func_0x000107c615bc(uVar20,unaff_x22 + 200,uVar24,&UNK_10dad66f0,puVar10);
      func_0x000107c61574(puVar12);
      func_0x000107c61574(uVar20);
      func_0x00010276baec(uVar23,0x112d453c8,&UNK_10d90ac60);
      FUN_10276ba84(unaff_x22 + 0x40);
      lVar8 = lVar8 + 0x30;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  uVar24 = *(undefined8 *)(unaff_x22 + 0x160);
  puVar21 = *(undefined8 **)(unaff_x22 + 0xf0);
  func_0x000107c6142c(lVar7);
  uVar15 = *puVar21;
  uVar14 = 0x112ebc8a8;
  func_0x0001000285a8(0x112ebc8a8,&UNK_10dad66a8);
  func_0x000107c5fcc4(uVar24,uVar15,uVar14);
  plVar13 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x198) = plVar13;
  *plVar13 = unaff_x22;
  plVar13[1] = (long)FUN_102766ea8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
            (plVar13,unaff_x22 + 0xe0,*(undefined8 *)(unaff_x22 + 0x150));
  return;
}



/* Entry: 102766ea8; end: 102766eeb;  */

void FUN_102766ea8(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x198));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102766eec,*(undefined8 *)(lVar1 + 0x180),*(undefined8 *)(lVar1 + 0x188));
  return;
}



/* Entry: 102766eec; end: 10276706f;  */

void FUN_102766eec(void)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  cVar3 = *(char *)(unaff_x22 + 0xe0);
  if (cVar3 != '\x05') {
    if (cVar3 != '\x04') {
      uVar11 = *(undefined8 *)(unaff_x22 + 0xe8);
      puVar9 = *(ulong **)(unaff_x22 + 0x110);
      uVar7 = *puVar9;
      uVar4 = uVar7;
      func_0x000107c61558();
      *puVar9 = uVar7;
      uVar6 = uVar7;
      if ((uVar4 & 1) == 0) {
        puVar9 = *(ulong **)(unaff_x22 + 0x110);
        uVar6 = 0;
        FUN_102763f64(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
        *puVar9 = uVar6;
      }
      uVar4 = *(ulong *)(uVar6 + 0x10);
      uVar7 = uVar6;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar4) {
        puVar9 = *(ulong **)(unaff_x22 + 0x110);
        uVar7 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        FUN_102763f64(uVar7,uVar4 + 1,1,uVar6);
        *puVar9 = uVar7;
      }
      *(ulong *)(uVar7 + 0x10) = uVar4 + 1;
      lVar1 = uVar7 + uVar4 * 0x10;
      *(char *)(lVar1 + 0x20) = cVar3;
      *(undefined8 *)(lVar1 + 0x28) = uVar11;
    }
    plVar5 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x198) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_102766ea8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
              (plVar5,(char *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 0x150));
    return;
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x170);
  (**(code **)(*(long *)(unaff_x22 + 0x158) + 8))
            (*(undefined8 *)(unaff_x22 + 0x160),*(undefined8 *)(unaff_x22 + 0x150));
  func_0x000107c61574(uVar11);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x138);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 400));
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010276701c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102767070; end: 102767163;  */

void FUN_102767070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = param_8;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_9;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_6;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_7;
  *(undefined1 *)(unaff_x22 + 0x21) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_5;
  lVar2 = 0;
  func_0x000107c5fcbc();
  *(long *)(unaff_x22 + 0xd8) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xe0) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe8) = uVar3;
  lVar2 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0xf0) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xf8) = lVar2;
  lVar2 = *(long *)(lVar2 + 0x40);
  *(long *)(unaff_x22 + 0x100) = lVar2;
  uVar3 = lVar2 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x108) = uVar3;
  uVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x110) = uVar5;
  uVar5 = 0x112d45220;
  FUN_10276b3a0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x118) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102767164,uVar4,uVar5);
  return;
}



/* Entry: 102767164; end: 1027674cf;  */

/* WARNING: Removing unreachable block (ram,0x0001027671e8) */
/* WARNING: Removing unreachable block (ram,0x000102767440) */
/* WARNING: Removing unreachable block (ram,0x000102767234) */
/* WARNING: Removing unreachable block (ram,0x000102767460) */

void FUN_102767164(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  long *plVar16;
  ulong uVar17;
  int *piVar18;
  ulong uVar19;
  ulong uVar20;
  long unaff_x22;
  long lVar21;
  
  uVar9 = *(undefined1 *)(unaff_x22 + 0x21);
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x128) = param_2;
  func_0x000107c61428();
  uVar10 = *param_2;
  *(undefined1 *)(unaff_x22 + 0x20) = uVar9;
  func_0x000107c61174(uVar10);
  pcVar11 = FUN_10276ba04;
  func_0x00010029cef4(FUN_10276ba04,unaff_x22 + 0x10);
  *(code **)(unaff_x22 + 0x130) = pcVar11;
  func_0x000107c61170(uVar10);
  func_0x000107c60734();
  *(undefined8 *)(unaff_x22 + 0x138) = param_1;
  func_0x000107c5fd64();
  lVar2 = *(long *)(unaff_x22 + 0x100);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar7 = *(long *)(unaff_x22 + 0xf8);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar14 = *(long *)(unaff_x22 + 0xc0);
  lVar21 = *(long *)(unaff_x22 + 0xb0);
  uVar9 = *(undefined1 *)(unaff_x22 + 0x21);
  puVar12 = &UNK_1105459c8;
  func_0x000107c613fc(&UNK_1105459c8,0x18,7);
  *(undefined **)(unaff_x22 + 0x140) = puVar12;
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84();
  *(undefined **)(puVar12 + 0x10) = puVar13;
  uVar5 = *(undefined8 *)(lVar21 + 0x18);
  lVar21 = *(long *)(lVar21 + 0x20);
  func_0x0001000a8868();
  puVar13 = &UNK_1105458b8;
  func_0x000107c613fc(&UNK_1105458b8,0x18,7);
  *(undefined **)(unaff_x22 + 0x148) = puVar13;
  func_0x000107c61428(lVar14 + 0x10,unaff_x22 + 0x70,0,0);
  lVar14 = lVar14 + 0x10;
  func_0x000107c61648(lVar14);
  func_0x000107c61644(puVar13 + 0x10,lVar14);
  func_0x000107c61574(lVar14);
  (**(code **)(lVar7 + 0x10))(uVar6,uVar3,uVar10);
  uVar17 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar20 = uVar17 + 0x20 & (uVar17 ^ 0xffffffffffffffff);
  lVar2 = uVar20 + lVar2;
  uVar19 = lVar2 + 0x17U & 0xfffffffffffffff8;
  puVar15 = &UNK_1105459f0;
  func_0x000107c613fc(&UNK_1105459f0,uVar19 + 8,uVar17 | 7);
  *(undefined **)(unaff_x22 + 0x150) = puVar15;
  *(undefined **)(puVar15 + 0x10) = puVar13;
  *(undefined8 *)(puVar15 + 0x18) = uVar4;
  (**(code **)(lVar7 + 0x20))(puVar15 + uVar20,uVar6,uVar10);
  *(undefined **)(puVar15 + (lVar2 + 7U & 0xfffffffffffffff8)) = puVar12;
  *(undefined1 *)((long)(puVar15 + (lVar2 + 7U & 0xfffffffffffffff8)) + 8) = uVar9;
  *(undefined8 *)(puVar15 + uVar19) = uVar8;
  piVar18 = *(int **)(lVar21 + 0x10);
  iVar1 = *piVar18;
  plVar16 = (long *)(ulong)(uint)piVar18[1];
  func_0x000107c6157c(puVar13);
  func_0x000107c61174(uVar4);
  func_0x000107c6157c(puVar12);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x158) = plVar16;
  *plVar16 = unaff_x22;
  plVar16[1] = (long)FUN_1027674d0;
                    /* WARNING: Could not recover jumptable at 0x00010276743c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar18))
            (*(undefined8 *)(unaff_x22 + 0xb8),FUN_10276ba0c,puVar15,uVar5,lVar21);
  return;
}



/* Entry: 1027674d0; end: 102767543;  */

void FUN_1027674d0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x160) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x158));
  if (unaff_x20 == 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x148);
    func_0x000107c61574(*(undefined8 *)(lVar3 + 0x150));
    func_0x000107c61574(uVar4);
    uVar4 = *(undefined8 *)(lVar3 + 0x118);
    uVar2 = *(undefined8 *)(lVar3 + 0x120);
    pcVar1 = FUN_102767544;
  }
  else {
    func_0x000107c61574(*(undefined8 *)(lVar3 + 0x150));
    uVar4 = *(undefined8 *)(lVar3 + 0x118);
    uVar2 = *(undefined8 *)(lVar3 + 0x120);
    pcVar1 = FUN_1027676dc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar4,uVar2);
  return;
}



/* Entry: 102767544; end: 1027676db;  */

void FUN_102767544(double param_1)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  ulong *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  double dVar12;
  
  lVar7 = *(long *)(unaff_x22 + 0x160);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x110));
  func_0x000107c5fd64();
  if (lVar7 == 0) {
    lVar6 = unaff_x22 + 0x88;
    uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
    dVar12 = *(double *)(unaff_x22 + 0x138);
    bVar2 = *(byte *)(unaff_x22 + 0x21);
    puVar8 = *(ulong **)(unaff_x22 + 0xa8);
    func_0x000107c60734();
    func_0x000107c61574(uVar4);
    *puVar8 = (ulong)bVar2;
    puVar8[1] = (ulong)((param_1 - dVar12) * 1000.0);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x140));
    uVar5 = *(ulong *)(unaff_x22 + 0xe8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
    *(long *)(unaff_x22 + 0xa0) = lVar7;
    func_0x000107c614b0(lVar7);
    uVar4 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c6147c(uVar5,unaff_x22 + 0xa0,uVar4,uVar3,0);
    if ((uVar5 & 1) == 0) {
      lVar6 = unaff_x22 + 0x40;
      puVar11 = *(undefined8 **)(unaff_x22 + 0xa8);
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0xa0));
      func_0x000107c614ac(lVar7);
      puVar11[1] = 0;
      *puVar11 = 4;
    }
    else {
      lVar6 = unaff_x22 + 0x58;
      lVar1 = *(long *)(unaff_x22 + 0xe0);
      uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
      puVar11 = *(undefined8 **)(unaff_x22 + 0xa8);
      func_0x000107c614ac(lVar7);
      puVar11[1] = 0;
      *puVar11 = 4;
      (**(code **)(lVar1 + 8))(uVar4,uVar3);
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0xa0));
    }
  }
  puVar11 = *(undefined8 **)(unaff_x22 + 0x128);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c61428(puVar11,lVar6,0,0);
  uVar3 = *puVar11;
  func_0x000107c61174(uVar3);
  func_0x000100069b5c(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001027676d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027676dc; end: 102767827;  */

void FUN_1027676dc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x148);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x110));
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar2);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar3;
  uVar5 = *(ulong *)(unaff_x22 + 0xe8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c614b0(uVar3);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar5,(undefined8 *)(unaff_x22 + 0xa0),uVar2,uVar6,0);
  if ((uVar5 & 1) == 0) {
    lVar4 = unaff_x22 + 0x40;
    puVar8 = *(undefined8 **)(unaff_x22 + 0xa8);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0xa0));
    func_0x000107c614ac(uVar3);
    puVar8[1] = 0;
    *puVar8 = 4;
  }
  else {
    lVar4 = unaff_x22 + 0x58;
    lVar1 = *(long *)(unaff_x22 + 0xe0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
    puVar8 = *(undefined8 **)(unaff_x22 + 0xa8);
    func_0x000107c614ac(uVar3);
    puVar8[1] = 0;
    *puVar8 = 4;
    (**(code **)(lVar1 + 8))(uVar2,uVar6);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0xa0));
  }
  puVar8 = *(undefined8 **)(unaff_x22 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c61428(puVar8,lVar4,0,0);
  uVar3 = *puVar8;
  func_0x000107c61174(uVar3);
  func_0x000100069b5c(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000102767824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102767828; end: 1027678b3;  */

undefined1  [16] FUN_102767828(undefined1 param_1)

{
  undefined1 auVar1 [16];
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0xe000000000000000;
  func_0x000107c602fc(0x25);
  func_0x000107c5fb78(0xd000000000000023,0x800000010f0baa70);
  uStack_31 = param_1;
  func_0x000107c603d0(&uStack_31,&uStack_30,&UNK_110547ae8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = uStack_30;
  return auVar1;
}



/* Entry: 1027678b4; end: 10276826f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027678b4(undefined8 param_1,uint param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,undefined4 param_7)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar12;
  ulong uVar13;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar14;
  undefined8 uVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  bool bVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 auStack_140 [8];
  undefined1 *puStack_138;
  ulong uStack_130;
  long lStack_128;
  undefined4 uStack_11c;
  long lStack_118;
  uint uStack_10c;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [24];
  long lStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar4 = 0;
  uStack_11c = param_7;
  uStack_10c = param_2;
  lStack_108 = param_6;
  uStack_100 = param_1;
  lStack_f8 = param_4;
  uStack_e8 = param_5;
  func_0x000107c5eec8();
  lVar18 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar20 = 0x112d68090;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  lStack_f0 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = (long)(auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar5 = 0;
  FUN_10276adc8();
  lVar21 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar11 = lVar22 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar20 = 0x112ebc730;
  lStack_118 = lVar11;
  func_0x0001000285a8(0x112ebc730,&UNK_10dad65a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar11 - extraout_x8_02;
  lVar20 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
  uVar12 = lVar11 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uStack_e0 = uVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = uVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_d8 = lVar20 - extraout_x12_00;
  func_0x000107c61428(param_3 + 0x10,auStack_80,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    return;
  }
  plVar1 = (long *)(lStack_f8 + _DAT_112ebd9d0);
  puStack_138 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_3 + 0x38,auStack_98,0x20,0);
  lVar16 = *(long *)(param_3 + 0x38);
  lVar6 = *plVar1;
  uVar12 = plVar1[1];
  uStack_130 = uVar12;
  lStack_128 = lVar6;
  lStack_f8 = param_3;
  if (*(long *)(lVar16 + 0x10) == 0) {
    bVar19 = true;
  }
  else {
    func_0x000107c61434(lVar16);
    func_0x000100029284(lVar6);
    bVar19 = (uVar12 & 1) == 0;
    if (!bVar19) {
      func_0x000102763634(*(long *)(lVar16 + 0x38) + *(long *)(lVar21 + 0x48) * lVar6,lVar11);
    }
    func_0x000107c6142c(lVar16);
  }
  (**(code **)(lVar21 + 0x38))(lVar11,bVar19,1,lVar5);
  lVar6 = lVar11;
  (**(code **)(lVar21 + 0x30))(lVar11,1,lVar5);
  lVar21 = lStack_d8;
  lVar5 = lStack_118;
  if ((int)lVar6 == 0) {
    func_0x000102763634(lVar11,lStack_118);
    func_0x00010276baec(lVar11,0x112ebc730,&UNK_10dad65a0);
    func_0x000107c614a8(auStack_98);
    pcVar17 = *(code **)(lVar18 + 0x10);
    (*pcVar17)(lVar21,lVar5,lVar4);
    FUN_10276aedc(lVar5);
    pcVar14 = *(code **)(lVar18 + 0x38);
    (*pcVar14)(lVar21,0,1,lVar4);
  }
  else {
    func_0x00010276baec(lVar11,0x112ebc730,&UNK_10dad65a0);
    func_0x000107c614a8(auStack_98);
    pcVar14 = *(code **)(lVar18 + 0x38);
    (*pcVar14)(lVar21,1,1,lVar4);
    pcVar17 = *(code **)(lVar18 + 0x10);
  }
  (*pcVar17)(lVar20,uStack_e8,lVar4);
  (*pcVar14)(lVar20,0,1,lVar4);
  lVar5 = (long)*(int *)(lStack_f0 + 0x30);
  func_0x00010276baa4(lVar21,lVar22,0x112d3bc20,&UNK_10d904ef0);
  func_0x00010276baa4(lVar20,lVar22 + lVar5,0x112d3bc20,&UNK_10d904ef0);
  pcVar14 = *(code **)(lVar18 + 0x30);
  lVar11 = lVar22;
  (*pcVar14)(lVar22,1,lVar4);
  uVar12 = uStack_e0;
  if ((int)lVar11 == 1) {
    func_0x00010276baec(lVar20,0x112d3bc20,&UNK_10d904ef0);
    func_0x00010276baec(lVar21,0x112d3bc20,&UNK_10d904ef0);
    lVar5 = lVar22 + lVar5;
    (*pcVar14)(lVar5,1,lVar4);
    lVar20 = lStack_f8;
    if ((int)lVar5 != 1) {
LAB_102767d58:
      lVar20 = lStack_f8;
      func_0x00010276baec(lVar22,0x112d68090,&UNK_10da24400);
      goto LAB_102768020;
    }
    func_0x00010276baec(lVar22,0x112d3bc20,&UNK_10d904ef0);
  }
  else {
    func_0x00010276baa4(lVar22,uStack_e0,0x112d3bc20,&UNK_10d904ef0);
    lVar11 = lVar22 + lVar5;
    (*pcVar14)(lVar11,1,lVar4);
    puVar2 = puStack_138;
    if ((int)lVar11 == 1) {
      func_0x00010276baec(lVar20,0x112d3bc20,&UNK_10d904ef0);
      func_0x00010276baec(lStack_d8,0x112d3bc20,&UNK_10d904ef0);
      (**(code **)(lVar18 + 8))(uVar12,lVar4);
      goto LAB_102767d58;
    }
    (**(code **)(lVar18 + 0x20))(puStack_138,lVar22 + lVar5,lVar4);
    uVar7 = 0x112d68098;
    FUN_10276b3a0(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                  PTR___s10Foundation4UUIDVSQAAMc_110350c50);
    uVar8 = uVar12;
    func_0x000107c5fab8(uVar12,puVar2,lVar4,uVar7);
    pcVar14 = *(code **)(lVar18 + 8);
    (*pcVar14)(puVar2,lVar4);
    func_0x00010276baec(lVar20,0x112d3bc20,&UNK_10d904ef0);
    func_0x00010276baec(lStack_d8,0x112d3bc20,&UNK_10d904ef0);
    (*pcVar14)(uVar12,lVar4);
    func_0x00010276baec(lVar22,0x112d3bc20,&UNK_10d904ef0);
    lVar20 = lStack_f8;
    if ((uVar8 & 1) == 0) goto LAB_102768020;
  }
  lVar4 = lStack_108;
  if ((uStack_10c & 0xff) == 1) {
    func_0x000107c61428(lStack_108 + 0x10,auStack_98,1,0);
    uVar7 = uStack_100;
    uVar15 = *(undefined8 *)(lVar4 + 0x10);
    *(undefined8 *)(lVar4 + 0x10) = uStack_100;
    func_0x000107c61434(uStack_100);
  }
  else {
    func_0x000107c61428(lStack_108 + 0x10,auStack_98,0,0);
    uVar15 = *(undefined8 *)(lVar4 + 0x10);
    uVar7 = uVar15;
    func_0x000107c61434();
    FUN_10276a840();
    func_0x000107c6142c(uVar15);
    func_0x000107c61428(lVar4 + 0x10,auStack_d0,1,0);
    uVar15 = *(undefined8 *)(lVar4 + 0x10);
    *(undefined8 *)(lVar4 + 0x10) = uVar7;
  }
  lVar5 = lStack_128;
  uVar12 = uStack_130;
  func_0x000107c61434(uVar7);
  func_0x000107c6142c(uVar15);
  func_0x000107c61428(lVar20 + 0x30,auStack_b0,0x21,0);
  uVar9 = *(ulong *)(lVar20 + 0x30);
  func_0x000107c61558();
  lVar11 = *(long *)(lVar20 + 0x30);
  *(undefined8 *)(lVar20 + 0x30) = 0x8000000000000000;
  lVar18 = lVar5;
  uVar8 = uVar12;
  lStack_b8 = lVar11;
  func_0x000100029284();
  uVar13 = (ulong)~(uint)uVar8 & 1;
  lVar4 = *(long *)(lVar11 + 0x10) + uVar13;
  if (SCARRY8(*(long *)(lVar11 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x10276804c);
    (*pcVar14)();
  }
  if (*(long *)(lVar11 + 0x18) < lVar4) {
    func_0x000102768fc0(lVar4,uVar9,0x112ebc630,&UNK_10dad6458);
    lVar11 = lStack_b8;
    lVar18 = lVar5;
    uVar9 = uVar12;
    func_0x000100029284();
    if (((uint)uVar8 & 1) != ((uint)uVar9 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x10276806c);
      (*pcVar14)();
    }
  }
  else if ((uVar9 & 1) == 0) {
    FUN_102761f50();
    lVar11 = lStack_b8;
  }
  uVar3 = uStack_11c;
  *(long *)(lVar20 + 0x30) = lVar11;
  if ((uVar8 & 1) == 0) {
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1027630c0(PTR___swiftEmptyArrayStorage_11034f1c8);
    FUN_102763878(lVar18,lVar5,uVar12,puVar10,lVar11);
    func_0x000107c61434(uVar12);
  }
  lVar4 = *(long *)(lVar11 + 0x38);
  uVar15 = *(undefined8 *)(lVar4 + lVar18 * 8);
  func_0x000107c61558(uVar15);
  lStack_b8 = *(undefined8 *)(lVar4 + lVar18 * 8);
  *(undefined8 *)(lVar4 + lVar18 * 8) = 0x8000000000000000;
  FUN_102768924(uVar7,uVar3,uVar15);
  *(long *)(lVar4 + lVar18 * 8) = lStack_b8;
  func_0x000107c614a8(auStack_b0);
  func_0x00010276806c(lVar5,uVar12);
LAB_102768020:
  func_0x000107c61574(lVar20);
  return;
}



/* Entry: 102768270; end: 10276835b;  */

void FUN_102768270(ulong param_1)

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
    FUN_102769898(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_10276a2fc(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102768358);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10276835c);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102768354);
  (*pcVar1)();
}



/* Entry: 10276835c; end: 1027683b3;  */

void FUN_10276835c(byte param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = (ulong)param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(byte *)(*(long *)(unaff_x20 + 0x30) + uVar1) == param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 1027683b4; end: 10276841b;  */

void FUN_1027683b4(char param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(char *)(*(long *)(unaff_x20 + 0x30) + param_2) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 10276841c; end: 10276878f;  */

void FUN_10276841c(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102768504);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar4) {
    func_0x000102768fc0(lVar4,param_4 & 1,0x112ebc638,&UNK_10dad6710);
    uVar7 = param_3;
    func_0x000100029284();
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027684cc);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_102761bd4();
    lVar4 = *unaff_x20;
    goto joined_r0x000102768518;
  }
  lVar4 = *unaff_x20;
joined_r0x000102768518:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 8);
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
    return;
  }
  FUN_102763878();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102768790; end: 102768923;  */

void FUN_102768790(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  
  lVar2 = 0;
  uVar4 = param_2;
  func_0x000107c5eec8();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = *unaff_x20;
  uVar3 = param_2;
  func_0x0001000c8928(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar4 & 1;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1027688c0);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < (long)(lVar5 + uVar6)) {
    param_3 = param_3 & 1;
    func_0x000102769254();
    uVar3 = param_2;
    func_0x0001000c8928(param_2);
    if (((uint)uVar4 & 1) != (param_3 & 1)) {
      func_0x000107c60624(lVar2);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102768924);
      (*pcVar1)();
    }
    lVar5 = *unaff_x20;
  }
  else if ((param_3 & 1) == 0) {
    FUN_1027620c4();
    lVar5 = *unaff_x20;
  }
  else {
    lVar5 = *unaff_x20;
  }
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(lVar5 + 0x38);
    lVar2 = 0x112ebc618;
    func_0x0001000285a8(0x112ebc618,&UNK_10dad6440);
                    /* WARNING: Could not recover jumptable at 0x0001027688b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 0x28))
              (lVar5 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * uVar3,param_1,lVar2);
    return;
  }
  (**(code **)(lVar8 + 0x10))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,lVar2);
  FUN_102761430(uVar3,&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,
                lVar5);
  return;
}



/* Entry: 102768924; end: 102768a1b;  */

void FUN_102768924(undefined8 param_1,ulong param_2,uint param_3)

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
  FUN_10276835c();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1027689e8);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar4) {
    param_3 = param_3 & 1;
    func_0x000102769614(lVar4);
    uVar2 = param_2;
    FUN_10276835c();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(&UNK_110547ae8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027689b4);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_102762350();
    lVar4 = *unaff_x20;
    goto joined_r0x0001027689fc;
  }
  lVar4 = *unaff_x20;
joined_r0x0001027689fc:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
    return;
  }
  lVar5 = lVar4 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar2 & 0x3f);
  *(char *)(*(long *)(lVar4 + 0x30) + uVar2) = (char)param_2;
  *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102761580);
    (*pcVar1)();
  }
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  return;
}



/* Entry: 102768a1c; end: 102769897;  */

void FUN_102768a1c(long param_1,ulong param_2)

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
  uVar6 = 0x112ebc658;
  func_0x0001000285a8(0x112ebc658,&UNK_10dc506f0);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_102768c84:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102768cb4);
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
          goto LAB_102768c84;
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102768cb8);
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



/* Entry: 102769898; end: 102769947;  */

void FUN_102769898(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
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
  func_0x0001013e3bac();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 102769948; end: 102769a53;  */

void FUN_102769948(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_10276a450();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar6;
  uStack_48 = uVar6;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar6) {
    puVar5 = (undefined *)(uVar6 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      uVar2 = 0x112ebc8b8;
      func_0x0001000285a8(0x112ebc8b8,&UNK_10dad66c0);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    FUN_102769a54(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_102769dfc(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 102769a54; end: 102769dfb;  */

void FUN_102769a54(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  undefined1 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  double *pdVar18;
  undefined8 *puVar19;
  long unaff_x21;
  ulong *puVar20;
  ulong uVar21;
  long lVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  double dVar28;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar10 = param_3[1];
  if (0 < lVar10) {
    lVar12 = 0;
    do {
      puVar9 = puStack_58;
      lVar22 = lVar12 + 1;
      if (lVar22 < lVar10) {
        lVar13 = *param_3;
        dVar23 = *(double *)(lVar13 + lVar22 * 0x10 + 8);
        lVar15 = lVar12 * 0x10;
        dVar26 = *(double *)(lVar13 + lVar15 + 8);
        lVar17 = lVar12 + 2;
        pdVar18 = (double *)(lVar13 + lVar15 + 0x28);
        dVar25 = dVar23;
        do {
          lVar11 = lVar17;
          lVar22 = lVar10;
          if (lVar10 == lVar11) break;
          dVar28 = *pdVar18;
          bVar6 = dVar28 <= dVar25;
          lVar17 = lVar11 + 1;
          pdVar18 = pdVar18 + 2;
          dVar25 = dVar28;
          lVar22 = lVar11;
        } while (dVar26 < dVar23 != bVar6);
        if (dVar26 < dVar23) {
          if (lVar22 < lVar12) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102769dd0);
            (*pcVar5)();
          }
          if (lVar12 < lVar22) {
            lVar11 = lVar22 << 4;
            lVar17 = lVar22;
            lVar10 = lVar12;
            do {
              lVar17 = lVar17 + -1;
              if (lVar10 != lVar17) {
                if (lVar13 == 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x102769df0);
                  (*pcVar5)();
                }
                puVar16 = (undefined8 *)(lVar13 + lVar15);
                lVar1 = lVar13 + lVar11;
                uVar4 = *(undefined1 *)puVar16;
                uVar24 = puVar16[1];
                uVar27 = *(undefined8 *)(lVar1 + -0x10);
                puVar16[1] = *(undefined8 *)(lVar1 + -8);
                *puVar16 = uVar27;
                *(undefined1 *)(lVar1 + -0x10) = uVar4;
                *(undefined8 *)(lVar1 + -8) = uVar24;
              }
              lVar10 = lVar10 + 1;
              lVar11 = lVar11 + -0x10;
              lVar15 = lVar15 + 0x10;
            } while (lVar10 < lVar17);
            lVar10 = param_3[1];
          }
        }
      }
      lVar15 = lVar22;
      if (lVar22 < lVar10) {
        if (SBORROW8(lVar22,lVar12)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102769dcc);
          (*pcVar5)();
        }
        if (lVar22 - lVar12 < param_4) {
          if (SCARRY8(lVar12,param_4)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102769dd4);
            (*pcVar5)();
          }
          lVar17 = lVar12 + param_4;
          if (lVar10 <= lVar12 + param_4) {
            lVar17 = lVar10;
          }
          if (lVar17 < lVar12) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102769dd8);
            (*pcVar5)();
          }
          if (lVar22 != lVar17) {
            lVar10 = *param_3;
            puVar16 = (undefined8 *)(lVar10 + lVar22 * 0x10);
            lVar13 = lVar12 - lVar22;
            do {
              dVar25 = *(double *)(lVar10 + lVar22 * 0x10 + 8);
              lVar15 = lVar13;
              puVar19 = puVar16;
              do {
                if (dVar25 <= (double)puVar19[-1]) break;
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x102769ddc);
                  (*pcVar5)();
                }
                uVar4 = *(undefined1 *)puVar19;
                puVar19[1] = puVar19[-1];
                *puVar19 = puVar19[-2];
                puVar19[-1] = dVar25;
                puVar19 = puVar19 + -2;
                *(undefined1 *)puVar19 = uVar4;
                bVar6 = lVar15 != -1;
                lVar15 = lVar15 + 1;
              } while (bVar6);
              lVar22 = lVar22 + 1;
              puVar16 = puVar16 + 2;
              lVar13 = lVar13 + -1;
              lVar15 = lVar17;
            } while (lVar22 != lVar17);
          }
        }
      }
      if (lVar15 < lVar12) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102769dbc);
        (*pcVar5)();
      }
      puVar7 = puStack_58;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar21 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar21) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        func_0x0001000a91e0(puVar9,uVar21 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar21 + 1;
      *(long *)(puVar9 + uVar21 * 0x10 + 0x20) = lVar12;
      *(long *)(puVar9 + uVar21 * 0x10 + 0x28) = lVar15;
      puStack_58 = puVar9;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102769df4);
        (*pcVar5)();
      }
      FUN_102769e74(&puStack_58,*param_1,param_3);
      puVar9 = puStack_58;
      if (unaff_x21 != 0) goto LAB_102769d8c;
      lVar10 = param_3[1];
      lVar12 = lVar15;
    } while (lVar15 < lVar10);
  }
  puVar9 = puStack_58;
  lVar10 = *param_1;
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x102769dfc);
    (*pcVar5)();
  }
  puVar7 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar7 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar20 = (ulong *)(puVar9 + 0x10);
  uVar21 = *puVar20;
  while (1 < uVar21) {
    lVar12 = *param_3;
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102769df8);
      (*pcVar5)();
    }
    plVar2 = (long *)(puVar9 + uVar21 * 0x10);
    lVar22 = *plVar2;
    puVar3 = puVar20 + uVar21 * 2;
    uVar14 = puVar3[1];
    FUN_10276a0e4(lVar12 + lVar22 * 0x10,lVar12 + *puVar3 * 0x10,lVar12 + uVar14 * 0x10,lVar10);
    if (unaff_x21 != 0) break;
    if ((long)uVar14 < lVar22) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102769dc0);
      (*pcVar5)();
    }
    if (*puVar20 <= uVar21 - 2) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102769dc4);
      (*pcVar5)();
    }
    *plVar2 = lVar22;
    plVar2[1] = uVar14;
    uVar14 = *puVar20;
    lVar12 = uVar14 - uVar21;
    if (uVar14 < uVar21) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102769dc8);
      (*pcVar5)();
    }
    uVar21 = uVar14 - 1;
    func_0x000107c610b8(puVar3,puVar3 + 2,lVar12 * 0x10);
    *puVar20 = uVar21;
  }
LAB_102769d8c:
  func_0x000107c6142c(puVar9);
  return;
}



/* Entry: 102769dfc; end: 102769e73;  */

void FUN_102769dfc(long param_1,long param_2,long param_3,long *param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  double dVar8;
  
  if (param_3 != param_2) {
    lVar4 = *param_4;
    puVar5 = (undefined8 *)(lVar4 + param_3 * 0x10);
    param_1 = param_1 - param_3;
    do {
      dVar8 = *(double *)(lVar4 + param_3 * 0x10 + 8);
      lVar6 = param_1;
      puVar7 = puVar5;
      do {
        if (dVar8 <= (double)puVar7[-1]) break;
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102769e74);
          (*pcVar2)();
        }
        uVar1 = *(undefined1 *)puVar7;
        puVar7[1] = puVar7[-1];
        *puVar7 = puVar7[-2];
        puVar7[-1] = dVar8;
        puVar7 = puVar7 + -2;
        *(undefined1 *)puVar7 = uVar1;
        bVar3 = lVar6 != -1;
        lVar6 = lVar6 + 1;
      } while (bVar3);
      param_3 = param_3 + 1;
      puVar5 = puVar5 + 2;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 102769e74; end: 10276a0e3;  */

undefined8 FUN_102769e74(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar10 = *param_1;
  if (1 < *(ulong *)(uVar10 + 0x10)) {
    uVar14 = uVar10;
    func_0x000107c61558();
    if ((uVar14 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar10;
    lVar1 = uVar10 + 0x20;
    uVar14 = *(ulong *)(uVar10 + 0x10);
    do {
      uVar12 = uVar14 - 1;
      if (uVar14 < 4) {
        if (uVar14 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar10 + 0x28),*(long *)(uVar10 + 0x20));
          lVar8 = *(long *)(uVar10 + 0x28) - *(long *)(uVar10 + 0x20);
          goto LAB_102769f4c;
        }
        if (uVar14 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10276a0c4);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_102769fac:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10276a0b4);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar12 * 0x10);
        lVar8 = *plVar2;
        lVar11 = plVar2[1];
        if (SBORROW8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10276a0bc);
          (*pcVar6)();
        }
        uVar13 = uVar12;
        if (lVar11 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar14 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10276a09c);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10276a0a0);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar11 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar11;
        if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10276a0a8);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10276a0b0);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_102769f4c:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10276a0a4);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar10 + uVar14 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10276a0ac);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10276a0b8);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10276a0c0);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_102769fac;
          uVar13 = uVar14 - 2;
          if (lVar5 <= lVar8) {
            uVar13 = uVar12;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar9 = *plVar2;
          lVar11 = plVar2[1];
          if (SBORROW8(lVar11,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10276a0c8);
            (*pcVar6)();
          }
          uVar13 = uVar14 - 2;
          if (lVar11 - lVar9 <= lVar8) {
            uVar13 = uVar12;
          }
        }
      }
      uVar12 = uVar13 - 1;
      if (uVar14 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10276a08c);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar10;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10276a0e4);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar12 * 0x10);
      lVar11 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar13 * 0x10);
      lVar9 = plVar3[1];
      FUN_10276a0e4(lVar8 + lVar11 * 0x10,lVar8 + *plVar3 * 0x10,lVar8 + lVar9 * 0x10,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10276a090);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10276a094);
        (*pcVar6)();
      }
      *plVar2 = lVar11;
      plVar2[1] = lVar9;
      uVar12 = *(ulong *)(uVar10 + 0x10);
      if (uVar12 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10276a098);
        (*pcVar6)();
      }
      uVar14 = uVar12 - 1;
      func_0x000107c610b8(plVar3,plVar3 + 2,(uVar14 - uVar13) * 0x10);
      *(ulong *)(uVar10 + 0x10) = uVar14;
    } while (2 < uVar12);
    *param_1 = uVar10;
  }
  return 1;
}



/* Entry: 10276a0e4; end: 10276a2fb;  */

undefined8
FUN_10276a0e4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar5;
  
  lVar9 = (long)param_2 - (long)param_1;
  lVar2 = lVar9 + 0xf;
  if (-1 < lVar9) {
    lVar2 = lVar9;
  }
  lVar2 = lVar2 >> 4;
  lVar10 = (long)param_3 - (long)param_2;
  lVar6 = lVar10 + 0xf;
  if (-1 < lVar10) {
    lVar6 = lVar10;
  }
  lVar6 = lVar6 >> 4;
  if (lVar2 < lVar6) {
    if ((param_4 < param_1) || ((param_1 + lVar2 * 2 <= param_4 || (param_4 != param_1)))) {
      func_0x000107c610b8(param_4,param_1,lVar2 << 4);
    }
    puVar5 = param_4 + lVar2 * 2;
    puVar7 = param_1;
    if (0xf < lVar9) {
      do {
        if (param_3 <= param_2) break;
        if ((double)param_2[1] <= (double)param_4[1]) {
          puVar8 = param_4 + 2;
          puVar3 = param_4;
        }
        else {
          puVar8 = param_4;
          puVar3 = param_2;
          param_2 = param_2 + 2;
        }
        param_4 = puVar8;
        if (puVar7 != puVar3) {
          uVar11 = *puVar3;
          puVar7[1] = puVar3[1];
          *puVar7 = uVar11;
        }
        puVar7 = puVar7 + 2;
      } while (param_4 < puVar5);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 * 2 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar6 << 4);
    }
    puVar3 = param_4 + lVar6 * 2;
    puVar5 = puVar3;
    puVar7 = param_2;
    if ((param_1 < param_2) && (0xf < lVar10)) {
      do {
        while (puVar8 = param_3 + -2, (double)param_2[-1] < (double)puVar3[-1]) {
          puVar7 = param_2 + -2;
          if (param_3 != param_2) {
            uVar11 = *puVar7;
            param_3[-1] = param_2[-1];
            *puVar8 = uVar11;
          }
          puVar5 = puVar3;
          if ((puVar7 <= param_1) || (param_3 = puVar8, param_2 = puVar7, puVar3 <= param_4))
          goto LAB_10276a2a0;
        }
        puVar5 = puVar3 + -2;
        if (param_3 != puVar3) {
          uVar11 = *puVar5;
          param_3[-1] = puVar3[-1];
          *puVar8 = uVar11;
        }
        puVar3 = puVar5;
        puVar7 = param_2;
        param_3 = puVar8;
      } while (param_4 < puVar5);
    }
  }
LAB_10276a2a0:
  uVar4 = (long)puVar5 - (long)param_4;
  uVar1 = uVar4 + 0xf;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((puVar7 != param_4) ||
     ((undefined8 *)((long)param_4 + (uVar1 & 0xfffffffffffffff0)) <= puVar7)) {
    func_0x000107c610b8(puVar7,param_4,((long)uVar1 >> 4) << 4);
  }
  return 1;
}



/* Entry: 10276a2fc; end: 10276a44f;  */

ulong FUN_10276a2fc(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar6 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar6 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10276a450);
      (*pcVar1)();
    }
    uVar5 = param_3 & 0xffffffffffffff8;
    if (param_3 >> 0x3e == 0) {
      if (param_2 < *(long *)(uVar5 + 0x10)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10276a444);
        (*pcVar1)();
      }
      func_0x000107c6140c(param_1,uVar5 + 0x20,*(long *)(uVar5 + 0x10),PTR___syXlN_11034f1a0 + 8);
    }
    else {
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar5 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10276a448);
        (*pcVar1)();
      }
      if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10276a44c);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar3 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar3;
        lVar7 = uVar6 - 1;
        if (lVar7 != 0) {
          uVar4 = uVar3;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar3 = *puVar8;
            *param_1 = uVar3;
            func_0x000107c615f0(uVar4);
            lVar7 = lVar7 + -1;
            uVar4 = uVar3;
            puVar8 = puVar8 + 1;
          } while (lVar7 != 0);
        }
        func_0x000107c615f0(uVar3);
      }
      else {
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          func_0x00010125fef0(uVar5,param_3);
          param_1[uVar5] = uVar2;
          uVar5 = uVar5 + 1;
        } while (uVar6 != uVar5);
      }
    }
  }
  return param_3;
}



/* Entry: 10276a450; end: 10276a463;  */

/* WARNING: Removing unreachable block (ram,0x0001027616dc) */
/* WARNING: Removing unreachable block (ram,0x0001027616ec) */
/* WARNING: Removing unreachable block (ram,0x0001027617bc) */
/* WARNING: Removing unreachable block (ram,0x0001027616f8) */
/* WARNING: Removing unreachable block (ram,0x000102761700) */
/* WARNING: Removing unreachable block (ram,0x000102761778) */
/* WARNING: Removing unreachable block (ram,0x000102761780) */
/* WARNING: Removing unreachable block (ram,0x000102761784) */
/* WARNING: Removing unreachable block (ram,0x000102761788) */
/* WARNING: Removing unreachable block (ram,0x000102761790) */

undefined * FUN_10276a450(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112ebc660;
    func_0x0001000285a8(0x112ebc660,&UNK_10dad6540);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar5;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 4) << 1;
  }
  func_0x000107c610b4(puVar3 + 0x20,param_1 + 0x20,lVar5 << 4);
  func_0x000107c61574(param_1);
  return puVar3;
}



/* Entry: 10276a464; end: 10276a4c7;  */

void FUN_10276a464(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10276a4c8;
                    /* WARNING: Could not recover jumptable at 0x00010276a4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}


