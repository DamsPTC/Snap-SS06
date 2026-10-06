/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102830064; end: 1028300c3; -[_TtC18GamesMessagePlugin18GamesMessagePlugin init] */

void FUN_102830064(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesMessagePlugin.GamesMessagePlugin",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102830090);
  (*pcVar1)();
}



/* Entry: 1028300c4; end: 1028301bf; -[_TtC18GamesMessagePlugin18GamesMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102830134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102830154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102830184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028301a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102830188) */
/* WARNING: Removing unreachable block (ram,0x000102830158) */
/* WARNING: Removing unreachable block (ram,0x000102830138) */
/* WARNING: Removing unreachable block (ram,0x0001028301a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028300c4(long param_1)

{
  func_0x000100e3b598(param_1 + _DAT_112ec3cc8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3cd0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3cd8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3ce0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec3ce8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec3cf0));
  return;
}



/* Entry: 1028301c0; end: 1028301df;  */

void FUN_1028301c0(void)

{
  func_0x000107c61168(&PTR_PTR_1128653b8);
  return;
}



/* Entry: 1028301e0; end: 102830257;  */

void FUN_1028301e0(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102832000(0,param_1,param_2);
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



/* Entry: 102830258; end: 1028303a7;  */

void FUN_102830258(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102830330);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_102830af0(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028302f8);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000102830678();
    lVar6 = *unaff_x20;
    goto joined_r0x000102830344;
  }
  lVar6 = *unaff_x20;
joined_r0x000102830344:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1028303a8);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1028303a8; end: 102830527;  */

void FUN_1028303a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,uint param_7)

{
  undefined8 *puVar1;
  ulong *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *unaff_x20;
  long lVar11;
  
  lVar11 = *unaff_x20;
  uVar4 = param_5;
  uVar6 = param_6;
  func_0x000100029284();
  lVar7 = *(long *)(lVar11 + 0x10);
  uVar9 = (ulong)~(uint)uVar6 & 1;
  lVar8 = lVar7 + uVar9;
  if (SCARRY8(lVar7,uVar9)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1028304a4);
    (*pcVar3)();
  }
  if (*(long *)(lVar11 + 0x18) < lVar8) {
    func_0x000102830d8c(lVar8,param_7 & 1);
    uVar4 = param_5;
    uVar9 = param_6;
    func_0x000100029284();
    if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102830458);
      (*pcVar3)();
    }
  }
  else if ((param_7 & 1) == 0) {
    FUN_1028307e8();
    lVar8 = *unaff_x20;
    goto joined_r0x0001028304b8;
  }
  lVar8 = *unaff_x20;
joined_r0x0001028304b8:
  if ((uVar6 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar4 * 0x20);
    uVar10 = puVar1[1];
    uVar5 = puVar1[3];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    func_0x000107c61574(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar10);
    return;
  }
  lVar7 = lVar8 + (uVar4 >> 6) * 8;
  *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar4 & 0x3f);
  puVar2 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar4 * 0x10);
  *puVar2 = param_5;
  puVar2[1] = param_6;
  puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar4 * 0x20);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102830528);
    (*pcVar3)();
  }
  *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_6);
  return;
}



/* Entry: 102830528; end: 1028307e7;  */

void FUN_102830528(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102830600);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    func_0x000102831054(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028305c8);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_102830980();
    lVar6 = *unaff_x20;
    goto joined_r0x000102830614;
  }
  lVar6 = *unaff_x20;
joined_r0x000102830614:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102830678);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1028307e8; end: 10283097f;  */

void FUN_1028307e8(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *unaff_x20;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  func_0x0001000285a8(0x112ec3cb0,&UNK_10dae3fc0);
  lVar16 = *unaff_x20;
  lVar9 = lVar16;
  func_0x000107c6048c();
  if (*(long *)(lVar16 + 0x10) != 0) {
    lVar1 = lVar16 + 0x40;
    uVar11 = (1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar9 != lVar16 || lVar1 + uVar11 * 8 <= lVar9 + 0x40U) {
      func_0x000107c610b8(lVar9 + 0x40U,lVar1,uVar11 << 3);
    }
    lVar17 = 0;
    *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar16 + 0x10);
    uVar12 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
    uVar11 = 0xffffffffffffffff;
    if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
      uVar11 = ~(-1L << (uVar12 & 0x3f));
    }
    uVar11 = uVar11 & *(ulong *)(lVar16 + 0x40);
    if (uVar11 == 0) goto LAB_1028308c8;
    do {
      uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      while( true ) {
        uVar13 = LZCOUNT(uVar13) | lVar17 << 6;
        lVar15 = uVar13 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar16 + 0x30) + lVar15);
        uVar6 = puVar2[1];
        lVar14 = uVar13 * 0x20;
        puVar3 = (undefined8 *)(*(long *)(lVar16 + 0x38) + lVar14);
        puVar4 = (undefined8 *)(*(long *)(lVar9 + 0x30) + lVar15);
        uVar5 = puVar3[2];
        uVar7 = puVar3[3];
        uVar10 = puVar3[1];
        uVar19 = puVar3[1];
        uVar18 = *puVar3;
        *puVar4 = *puVar2;
        puVar4[1] = uVar6;
        puVar2 = (undefined8 *)(*(long *)(lVar9 + 0x38) + lVar14);
        puVar2[1] = uVar19;
        *puVar2 = uVar18;
        puVar2[2] = uVar5;
        puVar2[3] = uVar7;
        func_0x000107c61434(uVar10);
        func_0x000107c6157c(uVar7);
        func_0x000107c61434(uVar6);
        if (uVar11 != 0) break;
LAB_1028308c8:
        do {
          lVar14 = lVar17 + 1;
          if (SCARRY8(lVar17,1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x102830980);
            (*pcVar8)();
          }
          if ((long)(uVar12 + 0x3f >> 6) <= lVar14) goto LAB_102830954;
          uVar11 = *(ulong *)(lVar1 + lVar14 * 8);
          lVar17 = lVar17 + 1;
        } while (uVar11 == 0);
        uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
        lVar17 = lVar14;
      }
    } while( true );
  }
LAB_102830954:
  func_0x000107c61574(lVar16);
  *unaff_x20 = lVar9;
  return;
}



/* Entry: 102830980; end: 102830aef;  */

void FUN_102830980(void)

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
  
  func_0x0001000285a8(0x112ec3cc0,&UNK_10dae3f48);
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
    if (uVar8 == 0) goto LAB_102830a5c;
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
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_102830a5c:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102830af0);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_102830ac8;
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
LAB_102830ac8:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 102830af0; end: 1028312ef;  */

void FUN_102830af0(long param_1,ulong param_2)

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
  uVar6 = 0x112ec3cb8;
  func_0x0001000285a8(0x112ec3cb8,&UNK_10dae3f40);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_102830d58:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102830d88);
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
          goto LAB_102830d58;
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
      func_0x000107c61434(uVar18);
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102830d8c);
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



/* Entry: 1028312f0; end: 1028313ff;  */

void FUN_1028312f0(ulong *param_1)

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
    FUN_10283222c();
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
      uVar2 = 0;
      FUN_102832000(0,0x112dbe420,&PTR_PTR_1126b2d28);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    FUN_102831400(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_10283189c(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 102831400; end: 10283189b;  */

void FUN_102831400(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  long unaff_x21;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar18 = param_3[1];
  if (0 < lVar18) {
    lVar11 = 0;
    do {
      lVar3 = lVar11 + 1;
      if (lVar3 < lVar18) {
        lVar3 = *(long *)(*param_3 + lVar3 * 8);
        plVar16 = (long *)(*param_3 + lVar11 * 8);
        plVar21 = plVar16 + 2;
        lVar20 = *plVar16;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar14 = lVar3;
        func_0x000107c4e03c();
        lVar10 = lVar20;
        func_0x000107c4e03c();
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar20);
        lVar20 = lVar11 + 2;
        do {
          lVar6 = lVar20;
          lVar3 = lVar18;
          if (lVar18 == lVar6) break;
          lVar3 = plVar21[-1];
          lVar20 = *plVar21;
          func_0x000107c61174();
          func_0x000107c61174();
          lVar4 = lVar20;
          func_0x000107c4e03c();
          lVar5 = lVar3;
          func_0x000107c4e03c();
          func_0x000107c61170(lVar20);
          func_0x000107c61170(lVar3);
          plVar21 = plVar21 + 1;
          lVar20 = lVar6 + 1;
          lVar3 = lVar6;
        } while (lVar14 < lVar10 != lVar5 <= lVar4);
        if (lVar14 < lVar10) {
          if (lVar3 < lVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102831870);
            (*pcVar1)();
          }
          if (lVar11 < lVar3) {
            lVar10 = *param_3;
            puVar12 = (undefined8 *)(lVar10 + lVar3 * 8);
            puVar13 = (undefined8 *)(lVar10 + lVar11 * 8);
            lVar14 = lVar3;
            lVar18 = lVar11;
            do {
              puVar12 = puVar12 + -1;
              lVar14 = lVar14 + -1;
              if (lVar18 != lVar14) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x102831890);
                  (*pcVar1)();
                }
                uVar15 = *puVar13;
                *puVar13 = *puVar12;
                *puVar12 = uVar15;
              }
              lVar18 = lVar18 + 1;
              puVar13 = puVar13 + 1;
            } while (lVar18 < lVar14);
          }
        }
      }
      lVar18 = param_3[1];
      lVar14 = lVar3;
      if (lVar3 < lVar18) {
        if (SBORROW8(lVar3,lVar11)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10283186c);
          (*pcVar1)();
        }
        if (lVar3 - lVar11 < param_4) {
          if (SCARRY8(lVar11,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102831874);
            (*pcVar1)();
          }
          lVar10 = lVar11 + param_4;
          if (lVar18 <= lVar11 + param_4) {
            lVar10 = lVar18;
          }
          if (lVar10 < lVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102831878);
            (*pcVar1)();
          }
          if (lVar3 != lVar10) {
            lVar20 = *param_3;
            plVar21 = (long *)(lVar20 + lVar3 * 8 + -8);
            lVar18 = lVar11 - lVar3;
            do {
              lVar6 = *(long *)(lVar20 + lVar3 * 8);
              plVar16 = plVar21;
              lVar14 = lVar18;
              do {
                lVar19 = *plVar16;
                func_0x000107c61174();
                func_0x000107c61174();
                lVar4 = lVar6;
                func_0x000107c4e03c();
                lVar5 = lVar19;
                func_0x000107c4e03c();
                func_0x000107c61170(lVar6);
                func_0x000107c61170(lVar19);
                if (lVar5 <= lVar4) break;
                if (lVar20 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10283187c);
                  (*pcVar1)();
                }
                lVar4 = *plVar16;
                lVar6 = plVar16[1];
                *plVar16 = lVar6;
                plVar16[1] = lVar4;
                bVar2 = lVar14 != -1;
                lVar14 = lVar14 + 1;
                plVar16 = plVar16 + -1;
              } while (bVar2);
              lVar3 = lVar3 + 1;
              plVar21 = plVar21 + 1;
              lVar18 = lVar18 + -1;
              lVar14 = lVar10;
            } while (lVar3 != lVar10);
          }
        }
      }
      puVar9 = puStack_58;
      if (lVar14 < lVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102831860);
        (*pcVar1)();
      }
      puVar7 = puStack_58;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar17 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar17) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        func_0x0001000a91e0(puVar9,uVar17 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar17 + 1;
      *(long *)(puVar9 + uVar17 * 0x10 + 0x20) = lVar11;
      *(long *)(puVar9 + uVar17 * 0x10 + 0x28) = lVar14;
      puStack_58 = puVar9;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102831894);
        (*pcVar1)();
      }
      FUN_102831990(&puStack_58,*param_1,param_3);
      puVar9 = puStack_58;
      if (unaff_x21 != 0) goto LAB_102831830;
      lVar18 = param_3[1];
      lVar11 = lVar14;
    } while (lVar14 < lVar18);
  }
  puVar9 = puStack_58;
  lVar18 = *param_1;
  if (lVar18 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10283189c);
    (*pcVar1)();
  }
  puVar7 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar7 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar17 = *(ulong *)(puVar9 + 0x10);
  while (puStack_58 = puVar9, 1 < uVar17) {
    lVar11 = *param_3;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102831898);
      (*pcVar1)();
    }
    lVar10 = uVar17 - 1;
    lVar14 = *(long *)(puVar9 + uVar17 * 0x10);
    lVar3 = *(long *)(puVar9 + lVar10 * 0x10 + 0x28);
    FUN_102831bf8(lVar11 + lVar14 * 8,lVar11 + *(long *)(puVar9 + lVar10 * 0x10 + 0x20) * 8,
                  lVar11 + lVar3 * 8,lVar18);
    if (unaff_x21 != 0) break;
    if (lVar3 < lVar14) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102831864);
      (*pcVar1)();
    }
    puVar7 = puVar9;
    func_0x000107c61558();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar9 + 0x10) <= uVar17 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102831868);
      (*pcVar1)();
    }
    *(long *)(puVar9 + uVar17 * 0x10) = lVar14;
    *(long *)((long)(puVar9 + uVar17 * 0x10) + 8) = lVar3;
    puStack_58 = puVar9;
    func_0x0001000a97cc(lVar10);
    puVar9 = puStack_58;
    uVar17 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_102831830:
  func_0x000107c6142c(puVar9);
  return;
}



/* Entry: 10283189c; end: 10283198f;  */

void FUN_10283189c(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  if (param_3 != param_2) {
    lVar8 = *param_4;
    plVar9 = (long *)(lVar8 + param_3 * 8 + -8);
    param_1 = param_1 - param_3;
    do {
      lVar3 = *(long *)(lVar8 + param_3 * 8);
      lVar6 = param_1;
      plVar10 = plVar9;
      do {
        lVar7 = *plVar10;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar4 = lVar3;
        func_0x000107c4e03c();
        lVar5 = lVar7;
        func_0x000107c4e03c();
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar7);
        if (lVar5 <= lVar4) break;
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102831990);
          (*pcVar1)();
        }
        lVar4 = *plVar10;
        lVar3 = plVar10[1];
        *plVar10 = lVar3;
        plVar10[1] = lVar4;
        bVar2 = lVar6 != -1;
        lVar6 = lVar6 + 1;
        plVar10 = plVar10 + -1;
      } while (bVar2);
      param_3 = param_3 + 1;
      plVar9 = plVar9 + 1;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 102831990; end: 102831bf7;  */

undefined8 FUN_102831990(ulong *param_1,undefined8 param_2,long *param_3)

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
          goto LAB_102831a64;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102831be0);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_102831ac8:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102831bd0);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102831bd8);
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
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102831bb8);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102831bbc);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102831bc4);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102831bcc);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_102831a64:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102831bc0);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102831bc8);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102831bd4);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102831bdc);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_102831ac8;
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
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102831be4);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102831bac);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102831bf8);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_102831bf8(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102831bb0);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102831bb4);
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



/* Entry: 102831bf8; end: 102831f2f;  */

undefined8 FUN_102831bf8(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  lVar8 = (long)param_2 - (long)param_1;
  lVar3 = lVar8 + 7;
  if (-1 < lVar8) {
    lVar3 = lVar8;
  }
  lVar3 = lVar3 >> 3;
  lVar11 = (long)param_3 - (long)param_2;
  lVar6 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar6 = lVar11;
  }
  lVar6 = lVar6 >> 3;
  if (lVar3 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar3 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar3 << 3);
    }
    plVar9 = param_4 + lVar3;
    plVar2 = param_1;
    if (7 < lVar8) {
      do {
        if (param_3 <= param_2) break;
        lVar6 = *param_2;
        lVar11 = *param_4;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar3 = lVar6;
        func_0x000107c4e03c();
        lVar8 = lVar11;
        func_0x000107c4e03c();
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar11);
        if (lVar3 < lVar8) {
          plVar7 = param_2 + 1;
          plVar4 = param_4;
          plVar10 = param_2;
        }
        else {
          plVar4 = param_4 + 1;
          plVar10 = param_4;
          plVar7 = param_2;
        }
        param_4 = plVar4;
        if (plVar2 != plVar10) {
          *plVar2 = *plVar10;
        }
        plVar2 = plVar2 + 1;
        param_2 = plVar7;
      } while (param_4 < plVar9);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar6 << 3);
    }
    plVar7 = param_4 + lVar6;
    plVar2 = param_2;
    plVar9 = plVar7;
    if ((param_1 < param_2) && (7 < lVar11)) {
      do {
        plVar4 = param_2 + -1;
        plVar10 = param_3;
        while( true ) {
          param_3 = plVar10 + -1;
          plVar9 = plVar7 + -1;
          lVar6 = *plVar9;
          lVar11 = *plVar4;
          func_0x000107c61174();
          func_0x000107c61174();
          lVar3 = lVar6;
          func_0x000107c4e03c();
          lVar8 = lVar11;
          func_0x000107c4e03c();
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar11);
          if (lVar3 < lVar8) break;
          if (plVar10 != plVar7) {
            *param_3 = *plVar9;
          }
          plVar2 = param_2;
          plVar7 = plVar9;
          plVar10 = param_3;
          if (plVar9 <= param_4) goto LAB_102831ec4;
        }
        if (plVar10 != param_2) {
          *param_3 = *plVar4;
        }
        plVar2 = plVar4;
        plVar9 = plVar7;
      } while ((param_1 < plVar4) && (param_2 = plVar4, param_4 < plVar7));
    }
  }
LAB_102831ec4:
  uVar5 = (long)plVar9 - (long)param_4;
  uVar1 = uVar5 + 7;
  if (-1 < (long)uVar5) {
    uVar1 = uVar5;
  }
  if ((plVar2 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar2)) {
    func_0x000107c610b8(plVar2,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 102831f30; end: 102831f9b;  */

void FUN_102831f30(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102832040();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102831f9c; end: 102831fb7;  */

void FUN_102831f9c(long param_1,long param_2)

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



/* Entry: 102831fb8; end: 102831fe7;  */

void FUN_102831fb8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10282c9ac(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 102831fe8; end: 102831fff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102831fe8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  code *pcVar11;
  long alStack_b0 [2];
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0,*(undefined8 *)(unaff_x20 + 0x28));
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    func_0x0001000b6d30();
    func_0x000104885df0(0,0);
  }
  else {
    lStack_80 = 0;
    uVar10 = *(undefined8 *)(lVar3 + _DAT_112ec3d20);
    plStack_a0 = &lStack_80;
    uStack_98 = uVar2;
    uStack_90 = uVar1;
    func_0x000107c6157c(uVar10);
    func_0x000100075034(FUN_1028323d8,alStack_b0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar10);
    lVar4 = lStack_80;
    if (lStack_80 != 0) {
      alStack_b0[0] = lStack_80;
      func_0x000107c61174();
      func_0x000100087f6c(alStack_b0);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar4);
    }
    func_0x000100dd41f8();
    func_0x0001000c2068();
    puVar8 = &UNK_110554ee0;
    puVar5 = puVar8;
    func_0x000107c613fc(&UNK_110554ee0,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,lVar3);
    puVar6 = &UNK_110554fa8;
    func_0x000107c613fc(&UNK_110554fa8,0x30,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined8 *)(puVar6 + 0x18) = uVar2;
    *(undefined8 *)(puVar6 + 0x20) = uVar1;
    *(undefined8 *)(puVar6 + 0x28) = uVar9;
    func_0x000107c61174(lVar3);
    func_0x000107c61434(uVar1);
    func_0x000107c61174(uVar9);
    uVar9 = 0x112ec3d90;
    func_0x0001000285a8(0x112ec3d90,&UNK_10dae3fa0);
    plVar7 = (long *)0x9;
    func_0x0001048785ac(9,4,0x38,4,&UNK_10dae3f98,puVar6,uVar9);
    func_0x000107c61574(lVar4);
    func_0x000107c61574(puVar6);
    func_0x000107c613fc(&UNK_110554ee0,0x18,7);
    func_0x000107c61614(puVar8 + 0x10,lVar3);
    func_0x000107c61170(lVar3);
    puVar6 = &UNK_110554fd0;
    func_0x000107c613fc(&UNK_110554fd0,0x30,7);
    *(undefined **)(puVar6 + 0x10) = puVar8;
    *(undefined8 *)(puVar6 + 0x18) = uVar2;
    *(undefined8 *)(puVar6 + 0x20) = uVar1;
    *(undefined8 *)(puVar6 + 0x28) = param_1;
    pcVar11 = *(code **)(*plVar7 + 0x60);
    func_0x000107c61434(uVar1);
    func_0x000107c6157c(param_1);
    (*pcVar11)(FUN_1028324b0,puVar6);
    func_0x000107c61170(lVar3);
    func_0x000107c61574(plVar7);
    func_0x000107c61574(puVar6);
  }
  return;
}



/* Entry: 102832000; end: 10283203f;  */

void FUN_102832000(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102832040; end: 10283218b;  */

undefined *
FUN_102832040(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10283218c);
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
    puVar3 = param_5;
    FUN_1028301e0(param_5,param_6,param_7,param_8);
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
    FUN_102832000(0,param_5,param_6);
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



/* Entry: 10283218c; end: 10283222b;  */

undefined * FUN_10283218c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112dbe420;
    FUN_1028301e0(0x112dbe420,&PTR_PTR_1126b2d28,0x112ec3780,&UNK_10dae3f80);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 10283222c; end: 10283226f;  */

void FUN_10283222c(long param_1)

{
  FUN_102832040(0,*(undefined8 *)(param_1 + 0x10),0,param_1,0x112dbe420,&PTR_PTR_1126b2d28,
                0x112ec3780,&UNK_10dae3f80);
  return;
}



/* Entry: 102832270; end: 1028323d7;  */

ulong FUN_102832270(undefined8 *param_1,long param_2,ulong param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028323d8);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028323cc);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_102832000(0,0x112dbe420,&PTR_PTR_1126b2d28);
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
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028323d0);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028323d4);
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
          func_0x000101681cac(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 1028323d8; end: 1028323f3;  */

void FUN_1028323d8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10282d79c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1028323f4; end: 102832473;  */

void FUN_1028323f4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102832474;
  plVar5[8] = lVar2;
  plVar5[9] = lVar4;
  plVar5[6] = lVar1;
  plVar5[7] = lVar3;
  plVar5[5] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10282f534,0,0);
  return;
}



/* Entry: 102832474; end: 1028324af;  */

void FUN_102832474(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001028324ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1028324b0; end: 1028324bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028324b0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long alStack_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar4 = *param_1;
  if (lVar4 != 0) {
    func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0,*(undefined8 *)(unaff_x20 + 0x28));
    lVar3 = lVar3 + 0x10;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000107c61174(lVar4);
    }
    else {
      uVar5 = *(undefined8 *)(lVar3 + _DAT_112ec3d20);
      uStack_70 = uVar2;
      uStack_68 = uVar1;
      lStack_60 = lVar4;
      func_0x000107c61174(lVar4);
      func_0x000107c6157c(uVar5);
      func_0x000100075034(FUN_1028324bc,alStack_80,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar5);
      func_0x000107c61170(lVar3);
    }
    alStack_80[0] = lVar4;
    func_0x000107c61174(lVar4);
    func_0x000100087f6c(alStack_80);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1028324bc; end: 1028324d7;  */

void FUN_1028324bc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10282d828(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1028324d8; end: 102832547;  */

long * FUN_1028324d8(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 102832548; end: 102832567;  */

void FUN_102832548(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102832568; end: 1028325a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102832568(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(0x101,unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ec3d10;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + _DAT_112ec3d10) != 0) {
      func_0x0001000d224c(auStack_80);
      FUN_1028324d8(auStack_80,uStack_68);
      (**(code **)(lStack_60 + 0x10))(uStack_68,lStack_60);
      func_0x0001028324fc(auStack_80);
      lVar3 = lVar2 + _DAT_112ec3cc8;
      func_0x000107c61618();
      if (lVar3 != 0) {
        func_0x000107c41864();
        func_0x000107c615e8(lVar3);
      }
      *(undefined8 *)(lVar2 + lVar1) = 0;
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1028325a4; end: 10283266b;  */

void FUN_1028325a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110555138;
  func_0x000107c613fc(&UNK_110555138,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_102832a38,puVar1);
  return;
}



/* Entry: 10283266c; end: 102832a37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283266c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  uVar3 = *(ulong *)(lStack_68 + _DAT_1130344b8);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  uVar4 = uVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (uVar4 != 0) {
    uVar3 = uVar4;
    func_0x000107c49e74();
    func_0x000107c615e8(uVar4);
    if ((uVar3 & 1) != 0) {
      plVar5 = (long *)0x0;
      goto LAB_102832a14;
    }
  }
  func_0x0001000285a8(0x112ec3da8,&UNK_10dae4000);
  func_0x000107c613fc();
  func_0x000107c6157c(param_3);
  pcVar6 = FUN_102832afc;
  func_0x0001000bdd8c();
  func_0x000100083b20(&lStack_68);
  uVar7 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  uVar8 = uVar7;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  uVar7 = uVar8;
  func_0x000107c5faec();
  func_0x000107c61170(uVar8);
  func_0x000100083b20(&lStack_70);
  uVar15 = *(undefined8 *)(lStack_70 + _DAT_113070048);
  func_0x000107c6157c(uVar15);
  func_0x000107c61170(lStack_70);
  func_0x0001000285a8(0x112ec3db0,&UNK_10dae4008);
  func_0x000107c613fc();
  func_0x000107c6157c(param_6);
  uVar8 = 0x102832b04;
  func_0x0001000bdd8c(0x102832b04,param_6);
  func_0x000100083b20(&lStack_78);
  uVar16 = *(undefined8 *)(lStack_78 + _DAT_11301aef0);
  func_0x000107c615f0(uVar16);
  func_0x000107c61170(lStack_78);
  func_0x0001000285a8(0x112e1bff0,&UNK_10da60480);
  func_0x000100083b20(&puStack_80);
  uVar9 = *(undefined8 *)(puStack_80 + _DAT_1130344b8);
  func_0x000107c61174();
  func_0x000107c61170(puStack_80);
  uVar10 = uVar9;
  func_0x0001000bda74();
  func_0x000107c61170(uVar9);
  lVar11 = 0;
  FUN_1028301c0();
  lVar12 = lVar11;
  func_0x000107c610f8();
  func_0x000107c61614(lVar12 + _DAT_112ec3cc8,0);
  *(undefined8 *)(lVar12 + _DAT_112ec3cd0) = 0;
  *(undefined8 *)(lVar12 + _DAT_112ec3cd8) = 0;
  *(undefined8 *)(lVar12 + _DAT_112ec3ce0) = 0;
  *(undefined8 *)(lVar12 + _DAT_112ec3d10) = 0;
  *(undefined8 *)(lVar12 + _DAT_112ec3d18) = 0;
  lVar2 = _DAT_112ec3d20;
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010282d16c();
  puStack_80 = puVar13;
  func_0x0001000285a8(0x112ec3db8,&UNK_10dae4018);
  func_0x000107c613fc();
  ppuVar14 = &puStack_80;
  func_0x00010006c248();
  *(undefined ***)(lVar12 + lVar2) = ppuVar14;
  lVar2 = _DAT_112ec3d28;
  uVar9 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar12 + lVar2) = uVar9;
  *(undefined1 *)(lVar12 + _DAT_112ec3d38) = 2;
  puVar1 = (undefined8 *)(lVar12 + _DAT_112ec3ce8);
  *puVar1 = uVar7;
  puVar1[1] = param_3;
  *(undefined8 *)(lVar12 + _DAT_112ec3cf0) = uVar15;
  *(undefined8 *)(lVar12 + _DAT_112ec3cf8) = uVar8;
  *(code **)(lVar12 + _DAT_112ec3d00) = pcVar6;
  *(undefined8 *)(lVar12 + _DAT_112ec3d08) = uVar16;
  *(undefined8 *)(lVar12 + _DAT_112ec3d30) = uVar10;
  plVar5 = &lStack_90;
  lStack_90 = lVar12;
  lStack_88 = lVar11;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
LAB_102832a14:
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 102832a38; end: 102832a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102832a38(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 uVar17;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),uVar15,
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),uVar10,
                      *(undefined8 *)(unaff_x20 + 0x38));
  lVar2 = lStack_68;
  uVar3 = *(ulong *)(lStack_68 + _DAT_1130344b8);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  uVar4 = uVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (uVar4 != 0) {
    uVar3 = uVar4;
    func_0x000107c49e74();
    func_0x000107c615e8(uVar4);
    if ((uVar3 & 1) != 0) {
      plVar5 = (long *)0x0;
      goto LAB_102832a14;
    }
  }
  func_0x0001000285a8(0x112ec3da8,&UNK_10dae4000);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar15);
  pcVar6 = FUN_102832afc;
  func_0x0001000bdd8c();
  func_0x000100083b20(&lStack_68);
  uVar7 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  uVar8 = uVar7;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  uVar7 = uVar8;
  func_0x000107c5faec();
  func_0x000107c61170(uVar8);
  func_0x000100083b20(&lStack_70);
  uVar16 = *(undefined8 *)(lStack_70 + _DAT_113070048);
  func_0x000107c6157c(uVar16);
  func_0x000107c61170(lStack_70);
  func_0x0001000285a8(0x112ec3db0,&UNK_10dae4008);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar10);
  uVar8 = 0x102832b04;
  func_0x0001000bdd8c(0x102832b04,uVar10);
  func_0x000100083b20(&lStack_78);
  uVar17 = *(undefined8 *)(lStack_78 + _DAT_11301aef0);
  func_0x000107c615f0(uVar17);
  func_0x000107c61170(lStack_78);
  func_0x0001000285a8(0x112e1bff0,&UNK_10da60480);
  func_0x000100083b20(&puStack_80);
  uVar9 = *(undefined8 *)(puStack_80 + _DAT_1130344b8);
  func_0x000107c61174();
  func_0x000107c61170(puStack_80);
  uVar10 = uVar9;
  func_0x0001000bda74();
  func_0x000107c61170(uVar9);
  lVar11 = 0;
  FUN_1028301c0();
  lVar12 = lVar11;
  func_0x000107c610f8();
  func_0x000107c61614(lVar12 + _DAT_112ec3cc8,0);
  *(undefined8 *)(lVar12 + _DAT_112ec3cd0) = 0;
  *(undefined8 *)(lVar12 + _DAT_112ec3cd8) = 0;
  *(undefined8 *)(lVar12 + _DAT_112ec3ce0) = 0;
  *(undefined8 *)(lVar12 + _DAT_112ec3d10) = 0;
  *(undefined8 *)(lVar12 + _DAT_112ec3d18) = 0;
  lVar2 = _DAT_112ec3d20;
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010282d16c();
  puStack_80 = puVar13;
  func_0x0001000285a8(0x112ec3db8,&UNK_10dae4018);
  func_0x000107c613fc();
  ppuVar14 = &puStack_80;
  func_0x00010006c248();
  *(undefined ***)(lVar12 + lVar2) = ppuVar14;
  lVar2 = _DAT_112ec3d28;
  uVar9 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar12 + lVar2) = uVar9;
  *(undefined1 *)(lVar12 + _DAT_112ec3d38) = 2;
  puVar1 = (undefined8 *)(lVar12 + _DAT_112ec3ce8);
  *puVar1 = uVar7;
  puVar1[1] = uVar15;
  *(undefined8 *)(lVar12 + _DAT_112ec3cf0) = uVar16;
  *(undefined8 *)(lVar12 + _DAT_112ec3cf8) = uVar8;
  *(code **)(lVar12 + _DAT_112ec3d00) = pcVar6;
  *(undefined8 *)(lVar12 + _DAT_112ec3d08) = uVar17;
  *(undefined8 *)(lVar12 + _DAT_112ec3d30) = uVar10;
  plVar5 = &lStack_90;
  lStack_90 = lVar12;
  lStack_88 = lVar11;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
LAB_102832a14:
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 102832a58; end: 102832afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102832a58(long *param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = *(long *)(lStack_38 + _DAT_11302a318);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c40a64();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 102832afc; end: 102832b07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102832afc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = *(long *)(lStack_38 + _DAT_11302a318);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c40a64();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 102832b08; end: 102832d23;  */

long FUN_102832b08(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102832d24; end: 102832d6b; -[_TtC40LensSpotlightShareMessageAccessoryPlugin40LensSpotlightShareMessageAccessoryPlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102832d24(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec3dc0;
  func_0x000107c61428(param_1 + _DAT_112ec3dc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102832d6c; end: 102832dc3; -[_TtC40LensSpotlightShareMessageAccessoryPlugin40LensSpotlightShareMessageAccessoryPlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102832d6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec3dc0;
  func_0x000107c61428(param_1 + _DAT_112ec3dc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102832dc4; end: 102832e5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102832dc4(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112ec3e00;
  uVar2 = (uint)*(byte *)(unaff_x20 + _DAT_112ec3e00);
  if (*(byte *)(unaff_x20 + _DAT_112ec3e00) == 2) {
    lVar3 = unaff_x20;
    func_0x000102832e04();
    uVar2 = (uint)lVar3;
    *(byte *)(unaff_x20 + lVar1) = (byte)lVar3 & 1;
  }
  return uVar2 & 1;
}



/* Entry: 102832e60; end: 10283312b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_102832e60(ulong *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  ppuVar10 = &puStack_80;
  uVar12 = *param_1;
  puVar11 = auStack_78;
  func_0x000107c61428(param_2 + 0x10,puVar11,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = uVar12;
    func_0x000107c49fc0();
    if ((((int)uVar1 == 0) || (FUN_102832dc4(), (uVar1 & 1) == 0)) ||
       (uVar1 = uVar12, FUN_102833138(), puVar11 == (undefined1 *)0x0)) {
      func_0x000107c61170(param_2);
    }
    else {
      uVar4 = uVar1 & 0xffffffffffff;
      if (((ulong)puVar11 & 0x2000000000000000) != 0) {
        uVar4 = (ulong)puVar11 >> 0x38 & 0xf;
      }
      if ((uVar4 != 0) && (func_0x0001000d224c(&puStack_80), puStack_80 != (undefined *)0x0)) {
        puVar2 = puStack_80;
        func_0x000107c41574();
        func_0x000107c61180();
        func_0x000107c615e8(puStack_80);
        puVar3 = puVar2;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(puVar2);
        if (puVar3 != (undefined *)0x0) {
          func_0x0001000285a8(0x112d52fb8,&UNK_10d919898);
          uVar4 = uVar1;
          func_0x000107c5fadc(uVar1,puVar11);
          puVar2 = puVar3;
          func_0x000107c4b288();
          func_0x000107c61180();
          func_0x000107c61170(uVar4);
          puVar5 = puVar2;
          func_0x000100759c94(puVar2,0);
          func_0x000107c61170(puVar2);
          func_0x0001000285a8(0x112ec3528,&UNK_10dae40c0);
          func_0x0001000b637c(param_3);
          uVar6 = 1;
          func_0x00010061b458(1);
          func_0x000107c61574(param_3);
          puVar2 = &UNK_1105552e8;
          func_0x000107c613fc(&UNK_1105552e8,0x18,7);
          func_0x000107c61614(puVar2 + 0x10,param_2);
          puVar7 = &UNK_110555358;
          func_0x000107c613fc(&UNK_110555358,0x40,7);
          *(undefined **)(puVar7 + 0x10) = puVar5;
          *(undefined **)(puVar7 + 0x18) = puVar2;
          *(ulong *)(puVar7 + 0x20) = uVar12;
          *(ulong *)(puVar7 + 0x28) = uVar1;
          *(undefined1 **)(puVar7 + 0x30) = puVar11;
          *(undefined8 *)(puVar7 + 0x38) = param_4;
          func_0x000107c6157c(puVar5);
          func_0x000107c61174(uVar12);
          uVar8 = 0x112d38358;
          func_0x0001000285a8(0x112d38358,&UNK_10d902090);
          pcVar9 = FUN_1028348e0;
          func_0x00010068b194(FUN_1028348e0,puVar7,uVar8);
          func_0x000107c61170(param_2);
          func_0x000107c615e8(puVar3);
          func_0x000107c61574(puVar5);
          func_0x000107c61574(uVar6);
          func_0x000107c61574(puVar7);
          return pcVar9;
        }
      }
      func_0x000107c61170(param_2);
      func_0x000107c6142c(puVar11);
    }
  }
  func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
  puVar2 = PTR_PTR_1126ae750;
  func_0x000107c61168();
  func_0x000107c4d73c();
  func_0x000107c61180();
  puStack_80 = puVar2;
  func_0x000100854cb0(&puStack_80);
  func_0x000107c61170(puVar2);
  return (code *)ppuVar10;
}



/* Entry: 10283312c; end: 102833137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_10283312c(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  long unaff_x20;
  ulong uVar14;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar11 = &puStack_80;
  uVar14 = *param_1;
  puVar12 = auStack_78;
  func_0x000107c61428(lVar1 + 0x10,puVar12,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = uVar14;
    func_0x000107c49fc0();
    if ((((int)uVar2 == 0) || (FUN_102832dc4(), (uVar2 & 1) == 0)) ||
       (uVar2 = uVar14, FUN_102833138(), puVar12 == (undefined1 *)0x0)) {
      func_0x000107c61170(lVar1);
    }
    else {
      uVar5 = uVar2 & 0xffffffffffff;
      if (((ulong)puVar12 & 0x2000000000000000) != 0) {
        uVar5 = (ulong)puVar12 >> 0x38 & 0xf;
      }
      if ((uVar5 != 0) && (func_0x0001000d224c(&puStack_80), puStack_80 != (undefined *)0x0)) {
        puVar3 = puStack_80;
        func_0x000107c41574();
        func_0x000107c61180();
        func_0x000107c615e8(puStack_80);
        puVar4 = puVar3;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        if (puVar4 != (undefined *)0x0) {
          func_0x0001000285a8(0x112d52fb8,&UNK_10d919898);
          uVar5 = uVar2;
          func_0x000107c5fadc(uVar2,puVar12);
          puVar3 = puVar4;
          func_0x000107c4b288();
          func_0x000107c61180();
          func_0x000107c61170(uVar5);
          puVar6 = puVar3;
          func_0x000100759c94(puVar3,0);
          func_0x000107c61170(puVar3);
          func_0x0001000285a8(0x112ec3528,&UNK_10dae40c0);
          func_0x0001000b637c(uVar7);
          uVar8 = 1;
          func_0x00010061b458(1);
          func_0x000107c61574(uVar7);
          puVar3 = &UNK_1105552e8;
          func_0x000107c613fc(&UNK_1105552e8,0x18,7);
          func_0x000107c61614(puVar3 + 0x10,lVar1);
          puVar9 = &UNK_110555358;
          func_0x000107c613fc(&UNK_110555358,0x40,7);
          *(undefined **)(puVar9 + 0x10) = puVar6;
          *(undefined **)(puVar9 + 0x18) = puVar3;
          *(ulong *)(puVar9 + 0x20) = uVar14;
          *(ulong *)(puVar9 + 0x28) = uVar2;
          *(undefined1 **)(puVar9 + 0x30) = puVar12;
          *(undefined8 *)(puVar9 + 0x38) = uVar13;
          func_0x000107c6157c(puVar6);
          func_0x000107c61174(uVar14);
          uVar7 = 0x112d38358;
          func_0x0001000285a8(0x112d38358,&UNK_10d902090);
          pcVar10 = FUN_1028348e0;
          func_0x00010068b194(FUN_1028348e0,puVar9,uVar7);
          func_0x000107c61170(lVar1);
          func_0x000107c615e8(puVar4);
          func_0x000107c61574(puVar6);
          func_0x000107c61574(uVar8);
          func_0x000107c61574(puVar9);
          return pcVar10;
        }
      }
      func_0x000107c61170(lVar1);
      func_0x000107c6142c(puVar12);
    }
  }
  func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
  puVar3 = PTR_PTR_1126ae750;
  func_0x000107c61168();
  func_0x000107c4d73c();
  func_0x000107c61180();
  puStack_80 = puVar3;
  func_0x000100854cb0(&puStack_80);
  func_0x000107c61170(puVar3);
  return (code *)ppuVar11;
}



/* Entry: 102833138; end: 1028332bb;  */

undefined1  [16] FUN_102833138(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 unaff_x20;
  undefined1 auVar7 [16];
  
  func_0x000107c614f0();
  func_0x000107c4051c();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c5a934();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028332bc);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c5b988();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x000107c44b20();
      if ((int)lVar2 != 0) {
        lVar2 = lVar3;
        func_0x000107c5b524();
        func_0x000107c61180();
        if (lVar2 != 0) {
          lVar4 = lVar2;
          func_0x000107c44920();
          func_0x000107c61170(lVar2);
          if ((int)lVar4 != 0) {
            lVar2 = lVar3;
            func_0x000107c5b524();
            func_0x000107c61180();
            if (lVar2 != 0) {
              lVar4 = lVar2;
              func_0x000107c4adb4();
              func_0x000107c61180();
              func_0x000107c61170(lVar2);
              if (lVar4 != 0) {
                func_0x000107c44fd8();
                func_0x000107c61170(lVar4);
                puVar5 = PTR___ss5Int64VN_11034ee50;
                puVar6 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
                func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                                    PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
                func_0x000107c61170(lVar3);
                goto LAB_1028332a4;
              }
            }
          }
        }
      }
      func_0x000107c61170(lVar3);
    }
  }
  func_0x0001007d6c6c(2,0xd000000000000021,0x800000010f0c2a00,unaff_x20,&PTR_DAT_110555300);
  puVar5 = (undefined *)0x0;
  puVar6 = (undefined *)0x0;
LAB_1028332a4:
  auVar7._8_8_ = puVar6;
  auVar7._0_8_ = puVar5;
  return auVar7;
}



/* Entry: 1028332bc; end: 1028334df;  */

undefined8
FUN_1028332bc(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [24];
  
  uVar4 = *param_1;
  uVar1 = 0x112ec3e30;
  func_0x0001000285a8(0x112ec3e30,&UNK_10dae40c8);
  func_0x000100775284(param_2,0,1,uVar1);
  puVar2 = &UNK_1105552e8;
  func_0x000107c613fc(&UNK_1105552e8,0x18,7);
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  func_0x000107c61614(puVar2 + 0x10,param_3);
  func_0x000107c61170(param_3);
  puVar3 = &UNK_110555380;
  func_0x000107c613fc(&UNK_110555380,0x40,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  *(undefined8 *)(puVar3 + 0x20) = param_5;
  *(undefined8 *)(puVar3 + 0x28) = param_6;
  *(undefined8 *)(puVar3 + 0x30) = uVar4;
  *(undefined8 *)(puVar3 + 0x38) = param_7;
  func_0x000107c61174(param_4);
  func_0x000107c61434(param_6);
  func_0x000107c61174(uVar4);
  uVar1 = 0x112d38358;
  func_0x0001000285a8(0x112d38358,&UNK_10d902090);
  uVar4 = 0x1028348f0;
  func_0x0001000bfde0(0x1028348f0,puVar3,uVar1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(puVar3);
  return uVar4;
}



/* Entry: 1028334e0; end: 10283363f; -[_TtC40LensSpotlightShareMessageAccessoryPlugin40LensSpotlightShareMessageAccessoryPlugin accessoryParamsForMessage:conversationInformation:] */

void FUN_1028334e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x0001000285a8(0x112d3bec8,&UNK_10d905040);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  func_0x0001000b637c(param_3);
  uVar3 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(uVar2);
  puVar4 = &UNK_1105552e8;
  func_0x000107c613fc(&UNK_1105552e8,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,param_1);
  puVar5 = &UNK_110555330;
  func_0x000107c613fc(&UNK_110555330,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_4;
  *(undefined8 *)(puVar5 + 0x20) = uVar1;
  func_0x000107c61174(param_4);
  uVar1 = 0x112d38358;
  func_0x0001000285a8(0x112d38358,&UNK_10d902090);
  uVar2 = 0x102835498;
  func_0x00010068b194(0x102835498,puVar5,uVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar5);
  func_0x0001004575f0();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 102833640; end: 1028336ab; -[_TtC40LensSpotlightShareMessageAccessoryPlugin40LensSpotlightShareMessageAccessoryPlugin isApplicableToMessage:] */

uint FUN_102833640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  func_0x000107c49fc0();
  uVar1 = (uint)uVar2;
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_102832dc4();
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 1028336ac; end: 1028336b3; -[_TtC40LensSpotlightShareMessageAccessoryPlugin40LensSpotlightShareMessageAccessoryPlugin pluginType] */

undefined8 FUN_1028336ac(void)

{
  return 0;
}



/* Entry: 1028336b4; end: 1028336cb; -[_TtC40LensSpotlightShareMessageAccessoryPlugin40LensSpotlightShareMessageAccessoryPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001028336c8) */

void FUN_1028336b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1028336cc; end: 10283372b; -[_TtC40LensSpotlightShareMessageAccessoryPlugin40LensSpotlightShareMessageAccessoryPlugin dismissPresentedView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028336cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec3dc0;
  func_0x000107c61428(param_1 + _DAT_112ec3dc0,auStack_38,0,0);
  param_1 = param_1 + lVar1;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c41864();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 10283372c; end: 1028337ef;  */

/* WARNING: Possible PIC construction at 0x000102833764: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102833768) */

void FUN_10283372c(void)

{
  func_0x000107c602fc(0x1e);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe000000000000000);
  return;
}



/* Entry: 1028337f0; end: 1028338eb;  */

void FUN_1028337f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x28);
  func_0x000107c6142c(uStack_48);
  uStack_50 = 0xd00000000000001d;
  uStack_48 = 0x800000010f0c29c0;
  func_0x000107c5fb78(param_4,param_5);
  func_0x000107c5fb78(0x3a726f72726520,0xe700000000000000);
  func_0x000107c614cc(param_3,auStack_58,auStack_70);
  uVar1 = uStack_60;
  func_0x000107c60640(uStack_68,uStack_60);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar1);
  uVar1 = uStack_48;
  func_0x0001007d6c6c(3,uStack_50,uStack_48,param_6,&PTR_DAT_110555300);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 1028338ec; end: 1028339df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1028338ec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lStack_38;
  
  func_0x000107c4f220();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x0001000d224c(&lStack_38);
    if (lStack_38 != 0) {
      lVar2 = lStack_38;
      func_0x000107c43bac();
      func_0x000107c61180();
      func_0x000107c615e8(lStack_38);
      lVar3 = lVar2;
      func_0x000107c5fc54(lVar2,PTR___sSSN_11034da80);
      func_0x000107c61170(lVar2);
      if (*(long *)(lVar3 + 0x10) != 0) {
        func_0x000100077018(lVar1,param_2,lVar3);
        uVar4 = (uint)lVar1;
        func_0x000107c6142c(lVar3);
        func_0x000107c6142c(param_2);
        goto LAB_1028339c8;
      }
      func_0x000107c6142c(param_2);
      param_2 = lVar3;
    }
    func_0x000107c6142c(param_2);
  }
  uVar4 = 0;
LAB_1028339c8:
  return uVar4 & 1;
}



/* Entry: 1028339e0; end: 102833ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028339e0(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uStack_48;
  
  lVar1 = param_1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x0001000d224c(&uStack_48);
  uVar2 = uStack_48;
  func_0x000107c5c470();
  if ((int)uVar2 == 0) {
    func_0x000107c615e8(uStack_48);
    func_0x000107c61170(lVar1);
  }
  else {
    uVar2 = uStack_48;
    func_0x000107c426f0();
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(uStack_48);
    if ((uVar2 & 1) != 0) {
      func_0x000102833d28(param_1);
      return;
    }
  }
  FUN_102833e88(param_1);
  return;
}



/* Entry: 102833ab8; end: 102833b23;  */

void FUN_102833ab8(long param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    (*param_3)(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102833b24; end: 102833e87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102833b24(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  long alStack_68 [3];
  
  func_0x0001000d224c(alStack_68);
  if (alStack_68[0] != 0) {
    lVar2 = alStack_68[0];
    func_0x000107c4c18c(alStack_68[0]);
    func_0x000107c61180();
    func_0x000107c615e8(alStack_68[0]);
    lVar3 = _DAT_112ec3dc0;
    func_0x000107c61428(unaff_x20 + _DAT_112ec3dc0,alStack_68,0,0);
    lVar3 = unaff_x20 + lVar3;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000107c615e8(lVar2);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___UIViewController_1126af898;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c5677c();
      puVar5 = puVar4;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102833d28);
        (*pcVar1)();
      }
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c3fa94();
      func_0x000107c61180();
      func_0x000107c52b50(puVar5);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      puVar7 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c4807c();
      lVar8 = lVar2;
      func_0x000107c614f0(lVar2);
      puVar5 = &UNK_1105552e8;
      func_0x000107c613fc(&UNK_1105552e8,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar6 = &UNK_1105555b0;
      func_0x000107c613fc(&UNK_1105555b0,0x38,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(long *)(puVar6 + 0x18) = lVar3;
      *(undefined **)(puVar6 + 0x20) = puVar4;
      *(undefined **)(puVar6 + 0x28) = puVar7;
      *(undefined8 *)(puVar6 + 0x30) = param_1;
      func_0x000107c6157c(puVar5);
      func_0x000107c615f0(lVar3);
      func_0x000107c61174(puVar4);
      func_0x000107c61174(puVar7);
      func_0x000107c61174(param_1);
      func_0x00010090569c(FUN_1028352bc,puVar6,lVar8);
      func_0x000107c615e8(lVar2);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar7);
      func_0x000107c61574(puVar5);
      func_0x000107c61574(puVar6);
    }
  }
  return;
}



/* Entry: 102833e88; end: 1028342a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102833e88(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uStack_80;
  long alStack_78 [3];
  
  func_0x0001000d224c(alStack_78);
  if (alStack_78[0] != 0) {
    lVar1 = alStack_78[0];
    func_0x000107c4c18c(alStack_78[0]);
    func_0x000107c61180();
    func_0x000107c615e8(alStack_78[0]);
    lVar2 = _DAT_112ec3dc0;
    func_0x000107c61428(unaff_x20 + _DAT_112ec3dc0,alStack_78,0,0);
    lVar2 = unaff_x20 + lVar2;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c615e8(lVar1);
    }
    else {
      func_0x0001000d224c(&uStack_80);
      puVar3 = PTR_PTR_1126ae6d0;
      func_0x000107c610f8(PTR_PTR_1126ae6d0);
      func_0x000107c4831c();
      puVar4 = PTR_PTR_1126ae6d8;
      func_0x000107c610f8();
      func_0x000107c486a0();
      puVar5 = PTR_PTR_1126b0100;
      func_0x000107c610f8();
      func_0x000107c45964();
      func_0x000107c61170(puVar3);
      func_0x000107c61170();
      func_0x000100fe4188();
      func_0x000107c613fc();
      *(undefined8 *)(puVar4 + 0x18) = 3;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      *(undefined8 *)(puVar4 + 0x20) = param_1;
      puVar6 = PTR_PTR_1126ae6b0;
      func_0x000107c610f8();
      uVar7 = 0;
      FUN_1028353a8(0,0x112d4d630,&PTR_PTR_1126ae6a8);
      func_0x000107c61174(param_1);
      puVar3 = puVar4;
      func_0x000107c5fc48(puVar4,uVar7);
      func_0x000107c61574(puVar4);
      func_0x000107c47440();
      func_0x000107c61170(puVar3);
      puVar4 = PTR__OBJC_CLASS___UIViewController_1126af898;
      func_0x000107c610f8();
      func_0x000107c453e4();
      lVar8 = lVar1;
      func_0x000107c614f0(lVar1);
      puVar3 = &UNK_1105556a0;
      func_0x000107c613fc(&UNK_1105556a0,0x48,7);
      *(long *)(puVar3 + 0x10) = lVar2;
      *(undefined **)(puVar3 + 0x18) = puVar4;
      *(undefined8 *)(puVar3 + 0x20) = uStack_80;
      *(undefined **)(puVar3 + 0x28) = puVar6;
      *(undefined **)(puVar3 + 0x30) = puVar5;
      *(undefined8 *)(puVar3 + 0x38) = 0xf;
      *(long *)(puVar3 + 0x40) = unaff_x20;
      func_0x000107c615f0(lVar2);
      func_0x000107c61174(puVar4);
      func_0x000107c615f0(uStack_80);
      func_0x000107c61174(puVar6);
      func_0x000107c61174(puVar5);
      func_0x000107c61174();
      func_0x00010090569c(FUN_1028353e8,puVar3,lVar8);
      func_0x000107c615e8(lVar1);
      func_0x000107c615e8(lVar2);
      func_0x000107c615e8(uStack_80);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar4);
      func_0x000107c61574(puVar3);
    }
  }
  return;
}



/* Entry: 1028342a4; end: 102834333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028342a4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ec3dc0;
  if (param_2 != 0) {
    func_0x000107c61428(param_2 + _DAT_112ec3dc0,auStack_50,0,0);
    lVar1 = param_2 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(param_2);
    if (lVar1 != 0) {
      func_0x000107c41864(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 102834334; end: 10283456b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102834334(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_88,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar3 = &UNK_1105555d8;
    func_0x000107c613fc(&UNK_1105555d8,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_2;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    puVar4 = &UNK_110555600;
    func_0x000107c613fc(&UNK_110555600,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_102835304;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    pcStack_98 = FUN_10283530c;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)&UNK_10006eb60;
    puStack_a0 = &UNK_110555618;
    ppuVar5 = &puStack_b8;
    puStack_90 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar6 = puStack_90;
    func_0x000107c615f0(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar6);
    func_0x000107c4e5fc(puVar2);
    func_0x000107c60bd0(ppuVar5);
    puVar6 = puVar4;
    func_0x000107c61544(puVar4,"",0x82,0xef,0x2c,1);
    func_0x000107c61574(puVar4);
    if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10283456c);
      (*pcVar1)();
    }
    func_0x0001000d224c(&uStack_c0);
    puVar4 = &UNK_1105552e8;
    func_0x000107c613fc(&UNK_1105552e8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,param_1);
    pcStack_98 = FUN_10283532c;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_1024fca8c;
    puStack_a0 = &UNK_110555640;
    ppuVar5 = &puStack_b8;
    puStack_90 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_90);
    func_0x000107c4ab4c(uStack_c0);
    func_0x000107c61170(param_1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c615e8(uStack_c0);
  }
  return;
}



/* Entry: 10283456c; end: 1028345fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283456c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ec3dc0;
  if (param_2 != 0) {
    func_0x000107c61428(param_2 + _DAT_112ec3dc0,auStack_50,0,0);
    lVar1 = param_2 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(param_2);
    if (lVar1 != 0) {
      func_0x000107c41864(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1028345fc; end: 102834713;  */

void FUN_1028345fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 in_x6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  func_0x000107c3e2c0(param_1,param_2,param_2);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c4a8a4();
  func_0x000107c61180();
  puVar2 = &UNK_1105552e8;
  func_0x000107c613fc(&UNK_1105552e8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,in_x6);
  uStack_60 = 0x1028353fc;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100288f10;
  puStack_68 = &UNK_1105556b8;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c4eec8(param_3);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 102834714; end: 1028347a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102834714(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ec3dc0;
  if (param_2 != 0) {
    func_0x000107c61428(param_2 + _DAT_112ec3dc0,auStack_50,0,0);
    lVar1 = param_2 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(param_2);
    if (lVar1 != 0) {
      func_0x000107c41864(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1028347a4; end: 102834803; -[_TtC40LensSpotlightShareMessageAccessoryPlugin40LensSpotlightShareMessageAccessoryPlugin init] */

void FUN_1028347a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensSpotlightShareMessageAccessoryPlugin.LensSpotlightShareMessageAccessoryPlugin"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028347d0);
  (*pcVar1)();
}



/* Entry: 102834804; end: 10283489b; -[_TtC40LensSpotlightShareMessageAccessoryPlugin40LensSpotlightShareMessageAccessoryPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102834804(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec3dc8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec3dd0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec3dd8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec3de0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec3de8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec3df0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec3df8));
  param_1 = param_1 + _DAT_112ec3dc0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10283489c; end: 1028348bf;  */

void FUN_10283489c(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001028348ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1028348c0; end: 1028348df;  */

void FUN_1028348c0(void)

{
  func_0x000107c61168(&PTR_PTR_1128654e8);
  return;
}



/* Entry: 1028348e0; end: 1028348ff;  */

undefined8 FUN_1028348e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 auStack_68 [24];
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar10 = *param_1;
  uVar4 = 0x112ec3e30;
  func_0x0001000285a8(0x112ec3e30,&UNK_10dae40c8);
  func_0x000100775284(uVar5,0,1,uVar4);
  puVar6 = &UNK_1105552e8;
  func_0x000107c613fc(&UNK_1105552e8,0x18,7);
  func_0x000107c61428(lVar7 + 0x10,auStack_68,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618(lVar7);
  func_0x000107c61614(puVar6 + 0x10,lVar7);
  func_0x000107c61170(lVar7);
  puVar8 = &UNK_110555380;
  func_0x000107c613fc(&UNK_110555380,0x40,7);
  *(undefined **)(puVar8 + 0x10) = puVar6;
  *(undefined8 *)(puVar8 + 0x18) = uVar9;
  *(undefined8 *)(puVar8 + 0x20) = uVar2;
  *(undefined8 *)(puVar8 + 0x28) = uVar1;
  *(undefined8 *)(puVar8 + 0x30) = uVar10;
  *(undefined8 *)(puVar8 + 0x38) = uVar3;
  func_0x000107c61174(uVar9);
  func_0x000107c61434(uVar1);
  func_0x000107c61174(uVar10);
  uVar4 = 0x112d38358;
  func_0x0001000285a8(0x112d38358,&UNK_10d902090);
  uVar9 = 0x1028348f0;
  func_0x0001000bfde0(0x1028348f0,puVar8,uVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar8);
  return uVar9;
}



/* Entry: 102834900; end: 102834ab7;  */

undefined8 FUN_102834900(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar7 = &puStack_90;
  uStack_60 = 0;
  uStack_58 = 0;
  uVar4 = param_1;
  func_0x000107c406c0();
  func_0x000107c61180();
  puVar5 = &UNK_1105556f0;
  func_0x000107c613fc(&UNK_1105556f0,0x18,7);
  *(undefined8 **)(puVar5 + 0x10) = &uStack_60;
  puVar6 = &UNK_110555718;
  uVar9 = 0x20;
  func_0x000107c613fc(&UNK_110555718,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_102835404;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  uStack_70 = 0x102835434;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1011b6bc0;
  puStack_78 = &UNK_110555730;
  puStack_68 = puVar6;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6d0(uVar4);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c40674(param_1);
  func_0x000107c61180();
  uVar8 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  uVar2 = uStack_58;
  uVar4 = uStack_60;
  func_0x0001038a7794(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar2);
  func_0x0001038a748c(uVar8,uVar9,uVar4,uVar2);
  uVar4 = uStack_58;
  func_0x000107c61574(puVar5);
  func_0x000107c6142c(uVar4);
  puVar5 = puVar6;
  func_0x000107c61544(puVar6,"",0x82,0x101,0x43,1);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar5 & 1) == 0) {
    return uVar8;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102834ab8);
  (*pcVar3)();
}



/* Entry: 102834ab8; end: 1028351df;  */

/* WARNING: Possible PIC construction at 0x000102834d48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102834f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028350e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102835178: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102835088: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010283517c) */
/* WARNING: Removing unreachable block (ram,0x0001028350e8) */
/* WARNING: Removing unreachable block (ram,0x000102834f5c) */
/* WARNING: Removing unreachable block (ram,0x000102834d4c) */
/* WARNING: Removing unreachable block (ram,0x00010283508c) */
/* WARNING: Removing unreachable block (ram,0x00010283519c) */
/* WARNING: Removing unreachable block (ram,0x0001028351bc) */

void FUN_102834ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  char param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong auStack_80 [2];
  
  func_0x000107c614f0();
  if (param_5 == '\x01') {
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c4d73c();
  }
  else if (param_4 == 0) {
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c4d73c();
  }
  else {
    auStack_80[0] = 0;
    puVar3 = &UNK_1105553a8;
    func_0x000107c613fc(&UNK_1105553a8,0x18,7);
    *(ulong **)(puVar3 + 0x10) = auStack_80;
    puVar4 = &UNK_1105553d0;
    func_0x000107c613fc(&UNK_1105553d0,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_1028351e0;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_90 = (code *)0x102835494;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_100fe2610;
    puStack_98 = &UNK_1105553e8;
    ppuVar5 = &puStack_b0;
    puStack_88 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar3 = puStack_88;
    func_0x000107c61174();
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_110555420;
    func_0x000107c613fc(&UNK_110555420,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
    puVar4 = &UNK_110555448;
    func_0x000107c613fc(&UNK_110555448,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x102835228;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    pcStack_90 = FUN_102835230;
    puStack_b0 = puVar1;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_100de6bdc;
    puStack_98 = &UNK_110555460;
    ppuVar6 = &puStack_b0;
    puStack_88 = puVar4;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_88);
    puVar3 = &UNK_110555498;
    func_0x000107c613fc(&UNK_110555498,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    *(undefined8 *)(puVar3 + 0x20) = unaff_x20;
    puVar4 = &UNK_1105554c0;
    func_0x000107c613fc(&UNK_1105554c0,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_102835250;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    pcStack_90 = FUN_10283525c;
    puStack_b0 = puVar1;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_100fe2654;
    puStack_98 = &UNK_1105554d8;
    ppuVar7 = &puStack_b0;
    puStack_88 = puVar4;
    func_0x000107c60bc4(ppuVar7);
    puVar3 = puStack_88;
    func_0x000107c61434(param_2);
    func_0x000107c61574(puVar3);
    func_0x000107c4c744(param_4);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    if (auStack_80[0] == 0) {
      puStack_b0 = (undefined *)0x0;
      uStack_a8 = 0xe000000000000000;
      func_0x000107c602fc(0x32);
      func_0x000107c6142c(uStack_a8);
      puStack_b0 = (undefined *)0xd000000000000019;
      uStack_a8 = 0x800000010f0c2950;
      func_0x000107c5fb78(param_1,param_2);
      func_0x000107c5fb78(0xd000000000000017,0x800000010f0c2970);
      uVar2 = uStack_a8;
      func_0x0001007d6c6c(1,puStack_b0,uStack_a8,unaff_x20,&PTR_DAT_110555300);
      func_0x000107c6142c(uVar2);
      func_0x000107c61168(PTR_PTR_1126ae750);
      func_0x000107c4d73c();
    }
    else {
      uVar8 = auStack_80[0];
      func_0x000107c61174();
      uVar9 = uVar8;
      FUN_1028338ec();
      if ((uVar9 & 1) == 0) {
        puStack_b0 = (undefined *)0x0;
        uStack_a8 = 0xe000000000000000;
        func_0x000107c602fc(0x2a);
        func_0x000107c6142c(uStack_a8);
        puStack_b0 = (undefined *)0x20736e654c;
        uStack_a8 = 0xe500000000000000;
        func_0x000107c4b1dc(uVar8);
      }
      else {
        FUN_1028353a8(0,0x112ec3e38,&PTR_PTR_1126ab238);
        func_0x000107c614e8();
        func_0x000107c3ff48();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1028351e0; end: 10283520b;  */

void FUN_1028351e0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10283520c; end: 10283522f;  */

void FUN_10283520c(long param_1,long param_2)

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



/* Entry: 102835230; end: 10283524f;  */

void FUN_102835230(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102835250; end: 10283525b;  */

void FUN_102835250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x28);
  func_0x000107c6142c(uStack_48);
  uStack_50 = 0xd00000000000001d;
  uStack_48 = 0x800000010f0c29c0;
  func_0x000107c5fb78(uVar2,uVar1);
  func_0x000107c5fb78(0x3a726f72726520,0xe700000000000000);
  func_0x000107c614cc(param_3,auStack_58,auStack_70);
  uVar2 = uStack_60;
  func_0x000107c60640(uStack_68,uStack_60);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar2);
  uVar2 = uStack_48;
  func_0x0001007d6c6c(3,uStack_50,uStack_48,uVar3,&PTR_DAT_110555300);
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 10283525c; end: 10283527b;  */

void FUN_10283525c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10283527c; end: 1028352bb;  */

void FUN_10283527c(void)

{
  long unaff_x20;
  
  FUN_102833ab8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),FUN_1028339e0);
  return;
}



/* Entry: 1028352bc; end: 1028352c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028352bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar4 + 0x10,auStack_88,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar6 = &UNK_1105555d8;
    func_0x000107c613fc(&UNK_1105555d8,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar2;
    *(undefined8 *)(puVar6 + 0x18) = uVar1;
    puVar7 = &UNK_110555600;
    func_0x000107c613fc(&UNK_110555600,0x20,7);
    *(code **)(puVar7 + 0x10) = FUN_102835304;
    *(undefined **)(puVar7 + 0x18) = puVar6;
    pcStack_98 = FUN_10283530c;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)&UNK_10006eb60;
    puStack_a0 = &UNK_110555618;
    ppuVar8 = &puStack_b8;
    puStack_90 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar9 = puStack_90;
    func_0x000107c615f0(uVar2);
    func_0x000107c61174(uVar1);
    func_0x000107c6157c(puVar7);
    func_0x000107c61574(puVar9);
    func_0x000107c4e5fc(puVar5);
    func_0x000107c60bd0(ppuVar8);
    puVar9 = puVar7;
    func_0x000107c61544(puVar7,"",0x82,0xef,0x2c,1);
    func_0x000107c61574(puVar7);
    if (((ulong)puVar9 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10283456c);
      (*pcVar3)();
    }
    func_0x0001000d224c(&uStack_c0);
    puVar7 = &UNK_1105552e8;
    func_0x000107c613fc(&UNK_1105552e8,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,lVar4);
    pcStack_98 = FUN_10283532c;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_1024fca8c;
    puStack_a0 = &UNK_110555640;
    ppuVar8 = &puStack_b8;
    puStack_90 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c61574(puStack_90);
    func_0x000107c4ab4c(uStack_c0);
    func_0x000107c61170(lVar4);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61574(puVar6);
    func_0x000107c615e8(uStack_c0);
  }
  return;
}



/* Entry: 1028352c8; end: 102835303;  */

void FUN_1028352c8(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102835304; end: 10283530b;  */

void FUN_102835304(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_attachUI__1125a0c08,
             *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10283530c; end: 10283532b;  */

void FUN_10283530c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10283532c; end: 1028353a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283532c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112ec3dc0;
  if (lVar1 != 0) {
    func_0x000107c61428(lVar1 + _DAT_112ec3dc0,auStack_50,0,0);
    lVar2 = lVar1 + lVar2;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c41864(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1028353a8; end: 1028353e7;  */

void FUN_1028353a8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028353e8; end: 102835403;  */

void FUN_1028353e8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x40);
  ppuVar4 = &puStack_80;
  func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x18));
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c4a8a4();
  func_0x000107c61180();
  puVar3 = &UNK_1105552e8;
  func_0x000107c613fc(&UNK_1105552e8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,uVar5);
  uStack_60 = 0x1028353fc;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100288f10;
  puStack_68 = &UNK_1105556b8;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c4eec8(uVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 102835404; end: 102835453;  */

void FUN_102835404(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 102835454; end: 10283549b;  */

void FUN_102835454(long param_1,long param_2)

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



/* Entry: 10283549c; end: 1028359b7;  */

void FUN_10283549c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec3540,&UNK_10dae3580);
  puVar1 = &UNK_110555770;
  func_0x000107c613fc(&UNK_110555770,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_1;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(FUN_1028359b8,puVar1);
  return;
}



/* Entry: 1028359b8; end: 1028359db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028359b8(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x20;
  long *plVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,uVar8,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  lVar4 = lStack_68;
  uVar1 = *(ulong *)(lStack_68 + _DAT_1130344b8);
  func_0x000107c61174();
  func_0x000107c61170(lVar4);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x000107c49fbc();
    func_0x000107c615e8(uVar2);
    if ((uVar3 & 1) != 0) {
      func_0x000100083b20(&lStack_68);
      lVar4 = lStack_68;
      uVar11 = 0x112e48e78;
      func_0x0001000285a8(0x112e48e78,&UNK_10da3fdf0);
      func_0x000107c610f8();
      func_0x00010017da58(lVar4,uVar11);
      puVar5 = PTR_PTR_1126a73e0;
      func_0x000107c610f8();
      func_0x000107c4907c();
      func_0x000107c61170(lVar4);
      puVar6 = &UNK_1105557b8;
      func_0x000107c613fc(&UNK_1105557b8,0x20,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(undefined8 *)(puVar6 + 0x18) = uVar8;
      func_0x0001000285a8(0x112ec3e50,&UNK_10dae4110);
      func_0x000107c613fc();
      func_0x000107c61174();
      func_0x000107c6157c(uVar8);
      pcVar7 = FUN_102835a44;
      func_0x0001000bdd8c(FUN_102835a44,puVar6);
      func_0x000100083b20(&lStack_68);
      uVar8 = *(undefined8 *)(lStack_68 + _DAT_112fa6788);
      func_0x000107c6157c();
      func_0x000107c61170(lStack_68);
      func_0x0001000285a8(0x112df5dd0,&UNK_10d9c4ad0);
      func_0x000100083b20(&lStack_70);
      lVar4 = lStack_70;
      lVar9 = lStack_70;
      func_0x000107c3f770();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      lVar10 = lVar9;
      func_0x0001000bda74();
      func_0x000107c61170(lVar9);
      func_0x0001000285a8(0x112d5a5f8,&UNK_10d921380);
      func_0x000100083b20(&lStack_70);
      lVar4 = lStack_70;
      lVar9 = lStack_70;
      func_0x000107c4b2ec();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      lVar4 = lVar9;
      func_0x0001000bda74();
      func_0x000107c61170(lVar9);
      func_0x0001000285a8(0x112e1bff0,&UNK_10da60480);
      uVar2 = uVar1;
      func_0x0001000bda74();
      func_0x000100083b20(&lStack_70);
      uVar11 = *(undefined8 *)(lStack_70 + _DAT_11306fa38);
      func_0x000107c6157c();
      func_0x000107c61170(lStack_70);
      func_0x000100083b20(&lStack_78);
      uVar13 = *(undefined8 *)(lStack_78 + _DAT_11306fa40);
      func_0x000107c6157c(uVar13);
      func_0x000107c61170(lStack_78);
      lVar12 = 0;
      FUN_1028348c0();
      lVar9 = lVar12;
      func_0x000107c610f8();
      func_0x000107c61614(lVar9 + _DAT_112ec3dc0,0);
      *(undefined1 *)(lVar9 + _DAT_112ec3e00) = 2;
      *(undefined8 *)(lVar9 + _DAT_112ec3dd0) = uVar8;
      *(long *)(lVar9 + _DAT_112ec3dd8) = lVar10;
      *(ulong *)(lVar9 + _DAT_112ec3dc8) = uVar2;
      *(code **)(lVar9 + _DAT_112ec3de0) = pcVar7;
      *(long *)(lVar9 + _DAT_112ec3de8) = lVar4;
      *(undefined8 *)(lVar9 + _DAT_112ec3df0) = uVar11;
      *(undefined8 *)(lVar9 + _DAT_112ec3df8) = uVar13;
      puVar6 = PTR_s_init_1125d9248;
      lStack_88 = lVar9;
      lStack_80 = lVar12;
      func_0x000107c6157c(uVar8);
      func_0x000107c6157c(uVar11);
      func_0x000107c6157c(uVar13);
      func_0x000107c6157c(lVar10);
      func_0x000107c6157c(uVar2);
      func_0x000107c6157c(pcVar7);
      func_0x000107c6157c(lVar4);
      plVar14 = &lStack_88;
      func_0x000107c61154(plVar14,puVar6);
      func_0x000107c61574(uVar8);
      func_0x000107c61574(lVar10);
      func_0x000107c61574(pcVar7);
      func_0x000107c61574(lVar4);
      func_0x000107c61574(uVar2);
      func_0x000107c61574(uVar11);
      func_0x000107c61574(uVar13);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(uVar1);
      goto LAB_102835994;
    }
  }
  func_0x000107c61170(uVar1);
  plVar14 = (long *)0x0;
LAB_102835994:
  *param_1 = (long)plVar14;
  return;
}



/* Entry: 1028359dc; end: 102835a43;  */

void FUN_1028359dc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126b5f28;
  func_0x000107c610f8();
  func_0x000107c47454();
  func_0x000107c61170(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 102835a44; end: 102835a4b;  */

void FUN_102835a44(undefined8 *param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  puVar1 = PTR_PTR_1126b5f28;
  func_0x000107c610f8();
  func_0x000107c47454();
  func_0x000107c61170(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 102835a4c; end: 102835a93; -[_TtC32LensPromptMessageAccessoryPlugin32LensPromptMessageAccessoryPlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102835a4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec3e58;
  func_0x000107c61428(param_1 + _DAT_112ec3e58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102835a94; end: 102835c8b; -[_TtC32LensPromptMessageAccessoryPlugin32LensPromptMessageAccessoryPlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102835a94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec3e58;
  func_0x000107c61428(param_1 + _DAT_112ec3e58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102835c8c; end: 102835c93;  */

void FUN_102835c8c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_2;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_102835c94(uVar3);
    func_0x000107c61170(lVar1);
  }
  puVar2 = PTR_PTR_1126ae750;
  func_0x000107c61168();
  func_0x000107c4e01c();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  *param_1 = puVar2;
  return;
}



/* Entry: 102835c94; end: 102835edf;  */

void FUN_102835c94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *apuStack_90 [3];
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126c6b40;
  func_0x000107c610f8();
  func_0x000107c45ad4();
  uVar2 = 1;
  func_0x000107c60660(1);
  func_0x000107c52ea8(puVar1);
  func_0x000107c61170(uVar2);
  puVar3 = PTR_PTR_1126c2cb0;
  func_0x000107c61168();
  func_0x000107c44f9c();
  func_0x000107c61180();
  uVar2 = param_2;
  if (puVar3 == (undefined *)0x0) {
    func_0x000107c5faec();
    uVar2 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c592b0(puVar1);
  func_0x000107c61170(puVar3);
  FUN_1028375f8();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar2);
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(puVar3);
  puVar4 = PTR_PTR_1126c6b48;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = &UNK_110555888;
  func_0x000107c613fc(&UNK_110555888,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar5 = &UNK_1105558b0;
  func_0x000107c613fc(&UNK_1105558b0,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  pcStack_50 = FUN_102837238;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_102827bd8;
  puStack_58 = &UNK_1105558c8;
  ppuVar6 = &puStack_70;
  puStack_48 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar3 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c56ea0(puVar4);
  func_0x000107c60bd0(ppuVar6);
  uVar2 = 0x112ec3b20;
  uVar7 = 0;
  FUN_10283725c(0,0x112ec3b20,&PTR_PTR_1126c6b50);
  func_0x000107c614e8();
  func_0x000107c3ff48();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  uVar7 = 0;
  FUN_10283725c(0,0x112ec3b28,&PTR_PTR_1126c6b40);
  uVar9 = 0;
  puStack_70 = puVar1;
  puStack_58 = (undefined *)uVar7;
  FUN_10283725c(0,0x112ec3b30,&PTR_PTR_1126c6b48);
  apuStack_90[0] = puVar4;
  uStack_78 = uVar9;
  func_0x000107c610f8(PTR_PTR_1126c67d8);
  FUN_1027efbc4(uVar8,uVar2,&puStack_70,apuStack_90);
  return;
}



/* Entry: 102835ee0; end: 102835f57; -[_TtC32LensPromptMessageAccessoryPlugin32LensPromptMessageAccessoryPlugin accessoryParamsForMessage:conversationInformation:] */

void FUN_102835ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000102835aec(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102835f58; end: 102836237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102835f58(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  long unaff_x20;
  
  uVar1 = param_1;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (uVar1 == 0) {
LAB_102835fa0:
    uVar1 = param_1;
    func_0x000107c49d34();
    if ((uVar1 & 1) == 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ec3e68);
      param_2 = ((undefined8 *)(unaff_x20 + _DAT_112ec3e68))[1];
      func_0x000107c5fadc(uVar3,param_2);
      uVar1 = param_1;
      func_0x000107c4a128();
      func_0x000107c61170(uVar3);
      if ((int)uVar1 == 0) {
        return;
      }
    }
  }
  else {
    uVar2 = uVar1;
    func_0x000107c404a8();
    func_0x000107c61170(uVar1);
    if ((int)uVar2 != 3) goto LAB_102835fa0;
  }
  func_0x000107c4c930();
  func_0x000107c61180();
  if (param_1 == 0) {
    return;
  }
  uVar1 = param_1;
  func_0x000107c5b34c();
  func_0x000107c61180();
  if (uVar1 == 0) goto LAB_10283615c;
  uVar2 = uVar1;
  func_0x000107c4058c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (uVar2 == 0) goto LAB_10283615c;
  uVar1 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  uVar2 = uVar1;
  func_0x000107c5fb5c(uVar1,param_2);
  if ((long)uVar2 < 1) {
    func_0x000107c61170(param_1);
    func_0x000107c6142c(param_2);
    return;
  }
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
  puVar4 = PTR_PTR_1126b2378;
  func_0x000107c61168();
  func_0x000107c44e9c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = param_1;
  func_0x000107c4a8c4();
  func_0x000107c61180();
  puVar5 = puVar4;
  uVar2 = uVar1;
  func_0x000107c3fed0();
  uVar10 = (uint)uVar2;
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puVar6 = puVar5;
  func_0x000107c4afb0();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
LAB_10283614c:
    func_0x000107c61170(puVar4);
    puVar6 = puVar5;
  }
  else {
    puVar7 = puVar6;
    func_0x000107c44a5c();
    if (((ulong)puVar7 & 1) == 0) {
LAB_102836148:
      func_0x000107c61170(puVar6);
      goto LAB_10283614c;
    }
    puVar7 = puVar6;
    func_0x000107c4f480();
    func_0x000107c61180();
    if (puVar7 == (undefined *)0x0) goto LAB_102836148;
    puVar8 = *(undefined **)(unaff_x20 + _DAT_112ec3e68);
    func_0x000103ee34e0(puVar8,((undefined8 *)(unaff_x20 + _DAT_112ec3e68))[1]);
    if ((uVar10 & 0xff) == 1) {
      func_0x000107c61170(puVar6);
      puVar6 = puVar7;
      goto LAB_102836148;
    }
    puVar9 = puVar6;
    func_0x000107c4f710();
    if ((int)puVar9 == 3) {
      func_0x000107c61170(param_1);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar7);
      return;
    }
    puVar9 = puVar7;
    func_0x000107c44e64();
    if (puVar9 == puVar8) {
      func_0x000107c4c0fc(puVar7);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(param_1);
      return;
    }
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61170(puVar6);
LAB_10283615c:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102836238; end: 102836293; -[_TtC32LensPromptMessageAccessoryPlugin32LensPromptMessageAccessoryPlugin isApplicableToMessage:] */

uint FUN_102836238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102835f58(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102836294; end: 10283629b; -[_TtC32LensPromptMessageAccessoryPlugin32LensPromptMessageAccessoryPlugin pluginType] */

undefined8 FUN_102836294(void)

{
  return 1;
}



/* Entry: 10283629c; end: 1028362b3; -[_TtC32LensPromptMessageAccessoryPlugin32LensPromptMessageAccessoryPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001028362b0) */

void FUN_10283629c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1028362b4; end: 1028363ab;  */

void FUN_1028362b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  pcVar1 = "createContextParams(message:)";
  func_0x0001000c10c0("createContextParams(message:)");
  func_0x000107c61180();
  puVar2 = &UNK_110555900;
  func_0x000107c613fc(&UNK_110555900,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  pcStack_50 = FUN_10283729c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110555918;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1028363ac; end: 102836423;  */

void FUN_1028363ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102836424(param_2,param_3,param_4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102836424; end: 102836eab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102836424(long param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  undefined **ppuVar21;
  long *plVar22;
  undefined8 uVar23;
  long unaff_x20;
  undefined **ppuStack_130;
  long lStack_128;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar4 = _DAT_112ec3e58;
  puVar19 = auStack_80;
  func_0x000107c61428(unaff_x20 + _DAT_112ec3e58,puVar19,0,0);
  lVar4 = unaff_x20 + lVar4;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar5 = param_1;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar14 = lVar5;
      func_0x000107c5b34c();
      func_0x000107c61180();
      if (lVar14 != 0) {
        lVar18 = lVar14;
        func_0x000107c4058c();
        func_0x000107c61180();
        func_0x000107c61170(lVar14);
        if (lVar18 != 0) {
          lVar14 = lVar18;
          func_0x000107c5faec();
          func_0x000107c61170(lVar18);
          lVar18 = lVar14;
          func_0x000107c5fb5c(lVar14,puVar19);
          if (0 < lVar18) {
            func_0x000107c5fadc(lVar14,puVar19);
            func_0x000107c6142c(puVar19);
            puVar6 = PTR_PTR_1126b2378;
            func_0x000107c61168();
            func_0x000107c44e9c();
            func_0x000107c61180();
            func_0x000107c61170(lVar14);
            lVar14 = lVar5;
            func_0x000107c4a8c4(lVar5);
            func_0x000107c61180();
            puVar7 = puVar6;
            func_0x000107c3fed0();
            func_0x000107c61180();
            func_0x000107c61170(lVar14);
            puVar8 = &UNK_110555950;
            uVar20 = 0x20;
            func_0x000107c613fc(&UNK_110555950,0x20,7);
            lVar14 = param_1;
            func_0x000107c51f08();
            func_0x000107c61180();
            lVar18 = lVar14;
            func_0x000107c5cb4c();
            func_0x000107c61180();
            func_0x000107c61170(lVar14);
            lVar14 = lVar18;
            func_0x000107c5faec();
            uVar23 = uVar20;
            func_0x000107c61170(lVar18);
            plVar22 = (long *)(puVar8 + 0x10);
            *plVar22 = lVar14;
            *(undefined8 *)(puVar8 + 0x18) = uVar20;
            lVar14 = lVar5;
            func_0x000107c5b34c();
            func_0x000107c61180();
            if (lVar14 == 0) {
              lVar14 = 0;
              uVar23 = 0;
            }
            else {
              lVar18 = lVar14;
              func_0x000107c4b1dc();
              func_0x000107c61180();
              func_0x000107c61170(lVar14);
              if (lVar18 == 0) {
                lVar14 = 0;
                uVar23 = 0;
              }
              else {
                lVar14 = lVar18;
                func_0x000107c5faec();
                func_0x000107c61170(lVar18);
              }
            }
            puVar9 = &UNK_110555888;
            func_0x000107c613fc(&UNK_110555888,0x18,7);
            func_0x000107c61614(puVar9 + 0x10);
            puVar10 = &UNK_110555978;
            func_0x000107c613fc(&UNK_110555978,0x60,7);
            *(undefined **)(puVar10 + 0x10) = puVar9;
            *(code **)(puVar10 + 0x18) = param_2;
            *(undefined8 *)(puVar10 + 0x20) = param_3;
            *(long *)(puVar10 + 0x28) = lVar5;
            *(long *)(puVar10 + 0x30) = param_1;
            *(undefined **)(puVar10 + 0x38) = puVar8;
            *(undefined **)(puVar10 + 0x40) = puVar7;
            *(long *)(puVar10 + 0x48) = lVar14;
            *(undefined8 *)(puVar10 + 0x50) = uVar23;
            *(long *)(puVar10 + 0x58) = lVar4;
            func_0x000107c61434(uVar23);
            func_0x000107c6157c(puVar9);
            func_0x000107c61174();
            func_0x000107c6157c(param_3);
            func_0x000107c61174();
            func_0x000107c6157c(puVar8);
            func_0x000107c615f0(lVar4);
            func_0x000107c61174();
            puVar11 = puVar7;
            func_0x000107c4afb0();
            func_0x000107c61180();
            if (puVar11 != (undefined *)0x0) {
              puVar12 = puVar11;
              func_0x000107c4f710();
              func_0x000107c61170(puVar11);
              if ((int)puVar12 == 3) {
                func_0x000107c61428(plVar22,auStack_b0,0,0);
                uVar13 = *(ulong *)(puVar8 + 0x10);
                if ((((uVar13 == *(ulong *)(unaff_x20 + _DAT_112ec3e68)) &&
                     (*(ulong *)(puVar8 + 0x18) == ((ulong *)(unaff_x20 + _DAT_112ec3e68))[1])) ||
                    (func_0x000107c605b8(), (uVar13 & 1) != 0)) &&
                   (lVar14 = *(long *)(unaff_x20 + _DAT_112ec3e60), lVar14 != 0)) {
                  func_0x000107c61174();
                  func_0x000107c61574(puVar9);
                  func_0x000107c6142c(uVar23);
                  lVar18 = lVar14;
                  func_0x000107c5c6c0();
                  func_0x000107c61180();
                  puVar9 = &UNK_1105559a0;
                  func_0x000107c613fc(&UNK_1105559a0,0x28,7);
                  *(undefined **)(puVar9 + 0x10) = puVar8;
                  *(code **)(puVar9 + 0x18) = FUN_1028372a8;
                  *(undefined **)(puVar9 + 0x20) = puVar10;
                  pcStack_c0 = FUN_1028372dc;
                  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_d8 = 0x42000000;
                  pcStack_d0 = FUN_10283706c;
                  puStack_c8 = &UNK_1105559b8;
                  ppuVar15 = &puStack_e0;
                  puStack_b8 = puVar9;
                  func_0x000107c60bc4(ppuVar15);
                  puVar9 = puStack_b8;
                  func_0x000107c6157c(puVar8);
                  func_0x000107c6157c(puVar10);
                  func_0x000107c61574(puVar9);
                  lVar16 = lVar18;
                  func_0x000107c5c320();
                  func_0x000107c61180();
                  func_0x000107c61170(puVar6);
                  func_0x000107c61170(lVar14);
                  func_0x000107c61574(puVar10);
                  func_0x000107c61170(puVar7);
                  func_0x000107c61170(lVar5);
                  func_0x000107c615e8(lVar4);
                  func_0x000107c60bd0(ppuVar15);
                  func_0x000107c61170(lVar18);
                  uVar23 = *(undefined8 *)(unaff_x20 + _DAT_112ec3e80);
                  *(long *)(unaff_x20 + _DAT_112ec3e80) = lVar16;
                  func_0x000107c61574(puVar8);
                  func_0x000107c61170(uVar23);
                  return;
                }
              }
            }
            ppuVar15 = &puStack_e0;
            func_0x000107c61428(puVar9 + 0x10,ppuVar15,0,0);
            puVar11 = puVar9 + 0x10;
            func_0x000107c61618();
            if (puVar11 == (undefined *)0x0) {
              (*param_2)();
              func_0x000107c61574(puVar8);
              func_0x000107c61574(puVar9);
              func_0x000107c61170(lVar5);
              func_0x000107c61170(puVar7);
            }
            else {
              lVar14 = lVar5;
              func_0x000107c4c99c();
              func_0x000107c61180();
              if (lVar14 == 0) {
                ppuStack_130 = (undefined **)0x0;
                lStack_128 = 0;
                ppuVar21 = ppuVar15;
              }
              else {
                lStack_128 = lVar14;
                func_0x000107c5faec();
                ppuVar21 = ppuVar15;
                func_0x000107c61170(lVar14);
                ppuStack_130 = ppuVar15;
              }
              lVar14 = lVar5;
              func_0x000107c4ca5c();
              uVar3 = (undefined4)lVar14;
              func_0x0001085436b8();
              lVar14 = param_1;
              func_0x000107c3dc7c();
              func_0x000107c61180();
              lVar18 = lVar14;
              func_0x000107c5faec();
              func_0x000107c61170(lVar14);
              puVar19 = auStack_98;
              func_0x000107c61428(plVar22,puVar19,0,0);
              uVar20 = *(undefined8 *)(puVar8 + 0x10);
              uVar1 = *(undefined8 *)(puVar8 + 0x18);
              func_0x000107c61434();
              puVar12 = puVar7;
              func_0x000107c4d2a4();
              func_0x000107c61180();
              if (puVar12 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102836bf0);
                (*pcVar2)();
              }
              func_0x000107c41800();
              func_0x000107c61180();
              lVar14 = param_1;
              func_0x000107c40674();
              func_0x000107c61180();
              func_0x000107c61170(param_1);
              lVar16 = lVar14;
              func_0x000107c5cb4c();
              func_0x000107c61180();
              func_0x000107c61170(lVar14);
              lVar14 = lVar16;
              func_0x000107c5faec();
              func_0x000107c61170(lVar16);
              puVar17 = puVar7;
              func_0x000107c4afb0();
              func_0x000107c61180();
              func_0x000107c4119c();
              func_0x000107c61180();
              func_0x000107c61170(puVar17);
              func_0x0001043facc0(0);
              func_0x000107c610f8();
              func_0x000107c61434();
              func_0x0001043f9914(lStack_128,ppuStack_130,uVar3,0,0,lVar18,ppuVar21,uVar20,uVar1,
                                  puVar12,lVar14,puVar19,0);
              uVar20 = *(undefined8 *)(puVar11 + _DAT_112ec3e78);
              func_0x000107c3ede0(uVar20);
              func_0x000107c61180();
              lVar14 = _DAT_112ec3e70;
              lVar18 = *(long *)(puVar11 + _DAT_112ec3e70);
              func_0x000107c5194c();
              func_0x000107c61180();
              if (lVar18 != 0) {
                func_0x000107c61170();
                func_0x000107c4ffe8(*(undefined8 *)(puVar11 + lVar14));
                func_0x000107c61180();
                func_0x000107c615e8();
              }
              func_0x000107c42c1c(*(undefined8 *)(puVar11 + lVar14));
              (*param_2)(0);
              func_0x000107c61574(puVar8);
              func_0x000107c61574(puVar9);
              func_0x000107c61170(puVar11);
              func_0x000107c61170(lStack_128);
              func_0x000107c61170(uVar20);
              func_0x000107c61170(lVar5);
              func_0x000107c61170(puVar7);
            }
            func_0x000107c6142c(uVar23);
            func_0x000107c615e8(lVar4);
            func_0x000107c61574(puVar10);
            func_0x000107c61170(puVar6);
            return;
          }
          func_0x000107c615e8(lVar4);
          func_0x000107c61170(lVar5);
          func_0x000107c6142c(puVar19);
          goto LAB_102836640;
        }
      }
      func_0x000107c61170(lVar5);
    }
    func_0x000107c615e8(lVar4);
  }
LAB_102836640:
  (*param_2)(0);
  return;
}


