/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101480d04; end: 101480d6b;  */

void FUN_101480d04(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0x112d38270;
    func_0x00010002969c(0x112d38270,&UNK_10d905a20);
    uStack_38 = param_2;
    func_0x000107c61520(param_3,uVar1,&uStack_38);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101480d6c; end: 101480dab;  */

void FUN_101480d6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1dc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s10Foundation4DataVSEAAMc_110350ae8;
  func_0x000107c61520(PTR___s10Foundation4DataVSEAAMc_110350ae8,PTR___s10Foundation4DataVN_110350ae0
                     );
  puRam0000000112da1dc8 = puVar1;
  return;
}



/* Entry: 101480dac; end: 101480e37;  */

void FUN_101480dac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112da1dd0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112da1d60;
  func_0x00010002969c(0x112da1d60,&UNK_10d945950);
  puVar3 = PTR___sSSSEsWP_11034da88;
  uVar2 = 0x112da1dd8;
  FUN_101480e38(0x112da1dd8,PTR___sSSSEsWP_11034da88,PTR___sxSgSEsSERzlMc_11034f180);
  puStack_30 = puVar3;
  puVar3 = PTR___sSDyxq_GSEsSERzSER_rlMc_11034d780;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSDyxq_GSEsSERzSER_rlMc_11034d780,uVar1,&puStack_30);
  puRam0000000112da1dd0 = puVar3;
  return;
}



/* Entry: 101480e38; end: 101480e9f;  */

void FUN_101480e38(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0x112d35ff8;
    func_0x00010002969c(0x112d35ff8,&UNK_10d900cd0);
    uStack_38 = param_2;
    func_0x000107c61520(param_3,uVar1,&uStack_38);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101480ea0; end: 10148108f;  */

undefined4 FUN_101480ea0(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 != 0x65646f63 || param_2 != -0x1c00000000000000) {
    uVar1 = 0x65646f63;
    func_0x000107c605b8(0x65646f63,0xe400000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0x726f727265;
      if (((param_1 == 0x726f727265) && (param_2 == -0x1b00000000000000)) ||
         (func_0x000107c605b8(0x726f727265,0xe500000000000000,param_1,param_2,0), (uVar1 & 1) != 0))
      {
        func_0x000107c6142c(param_2);
        return 1;
      }
      if ((param_1 != 0x61746164) || (param_2 != -0x1c00000000000000)) {
        uVar1 = 0;
        func_0x000107c605b8(0x61746164,0xe400000000000000,param_1,param_2,0);
        if ((uVar1 & 1) == 0) {
          if ((param_1 != 0x6e6f736a) || (param_2 != -0x1c00000000000000)) {
            uVar1 = 0;
            func_0x000107c605b8(0x6e6f736a,0xe400000000000000,param_1,param_2,0);
            if ((uVar1 & 1) == 0) {
              uVar1 = 0x676e69727473;
              if (((param_1 != 0x676e69727473) || (param_2 != -0x1a00000000000000)) &&
                 (func_0x000107c605b8(0x676e69727473,0xe600000000000000,param_1,param_2,0),
                 (uVar1 & 1) == 0)) {
                uVar1 = 0x6e776f6e6b6e75;
                if ((param_1 == 0x6e776f6e6b6e75) && (param_2 == -0x1900000000000000)) {
                  func_0x000107c6142c(0xe700000000000000);
                  return 5;
                }
                func_0x000107c605b8(0x6e776f6e6b6e75,0xe700000000000000,param_1,param_2,0);
                func_0x000107c6142c(param_2);
                if ((uVar1 & 1) != 0) {
                  return 5;
                }
                return 6;
              }
              func_0x000107c6142c(param_2);
              return 4;
            }
          }
          func_0x000107c6142c(param_2);
          return 3;
        }
      }
      func_0x000107c6142c(param_2);
      return 2;
    }
  }
  func_0x000107c6142c(param_2);
  return 0;
}



/* Entry: 101481090; end: 10148133f;  */

/* WARNING: Removing unreachable block (ram,0x0001014811c0) */
/* WARNING: Removing unreachable block (ram,0x000101481154) */
/* WARNING: Removing unreachable block (ram,0x000101481264) */
/* WARNING: Removing unreachable block (ram,0x0001014812b4) */
/* WARNING: Removing unreachable block (ram,0x000101481214) */

void FUN_101481090(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lStack_80;
  undefined1 *puStack_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  ulong uStack_68;
  undefined1 uStack_51;
  
  lVar2 = 0x112da1f50;
  func_0x0001000285a8(0x112da1f50,&UNK_10d945d00);
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&lStack_80 - extraout_x8;
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  lVar3 = param_2;
  func_0x0001000a8868(param_2,uVar8);
  func_0x000101483740();
  func_0x000107c606e0(lVar6,&UNK_1103c4b08,&UNK_1103c4b08,lVar3,uVar8,uVar1);
  if (unaff_x21 != 0) {
    func_0x0001000834e4(param_2);
    return;
  }
  uStack_70 = 0;
  puVar4 = &uStack_70;
  func_0x000107c60500(puVar4,lVar2);
  uStack_70 = 1;
  puVar5 = &uStack_70;
  lVar3 = lVar2;
  func_0x000107c604d4();
  uStack_51 = 4;
  lStack_80 = lVar3;
  puStack_78 = puVar5;
  func_0x0001006e2f9c();
  func_0x000107c604e8(&uStack_70,PTR___s10Foundation4DataVN_110350ae0,&uStack_51,lVar2,
                      PTR___s10Foundation4DataVN_110350ae0,puVar5);
  uVar7 = uStack_68;
  if (0xe < uStack_68 >> 0x3c) {
    uStack_51 = 3;
    func_0x000107c604e8(&uStack_70,PTR___s10Foundation4DataVN_110350ae0,&uStack_51,lVar2,
                        PTR___s10Foundation4DataVN_110350ae0,puVar5);
    uVar7 = uStack_68;
    if (0xe < uStack_68 >> 0x3c) {
      uStack_51 = 2;
      func_0x000107c604e8(&uStack_70,PTR___s10Foundation4DataVN_110350ae0,&uStack_51,lVar2,
                          PTR___s10Foundation4DataVN_110350ae0,puVar5);
      (**(code **)(lVar9 + 8))(lVar6,lVar2);
      uVar8 = 0;
      if (uStack_68 >> 0x3c < 0xf) {
        uVar8 = CONCAT71(uStack_6f,uStack_70);
      }
      uVar7 = 0xf000000000000000;
      if (uStack_68 >> 0x3c < 0xf) {
        uVar7 = uStack_68;
      }
      goto LAB_101481324;
    }
  }
  uVar8 = CONCAT71(uStack_6f,uStack_70);
  (**(code **)(lVar9 + 8))(lVar6,lVar2);
LAB_101481324:
  func_0x0001000834e4(param_2);
  *param_1 = puVar4;
  param_1[1] = puStack_78;
  param_1[2] = lStack_80;
  param_1[3] = uVar8;
  param_1[4] = uVar7;
  return;
}



/* Entry: 101481340; end: 1014815d7;  */

long * FUN_101481340(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    lVar4 = 0;
    func_0x000107c5ede0();
    lVar12 = *(long *)(lVar4 + -8);
    pcVar13 = *(code **)(lVar12 + 0x30);
    plVar5 = param_2;
    (*pcVar13)(param_2,1,lVar4);
    if ((int)plVar5 == 0) {
      (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar4);
      (**(code **)(lVar12 + 0x38))(param_1,0,1,lVar4);
    }
    else {
      lVar6 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    }
    lVar6 = 0;
    FUN_10147f430();
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x14));
    uVar10 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar10;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x18));
    uVar9 = puVar2[1];
    func_0x000107c61434();
    if (uVar9 >> 0x3c < 0xf) {
      uVar10 = *puVar2;
      func_0x00010006c00c(uVar10,uVar9);
      *puVar1 = uVar10;
      puVar1[1] = uVar9;
    }
    else {
      uVar10 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar10;
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x1c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x1c));
    uVar10 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x20));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x20)) = uVar10;
    lVar11 = (long)*(int *)(lVar6 + 0x24);
    func_0x000107c61434();
    func_0x000107c61434(uVar10);
    lVar7 = (long)param_2 + lVar11;
    (*pcVar13)(lVar7,1,lVar4);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar12 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,lVar4);
      (**(code **)(lVar12 + 0x38))((long)param_1 + lVar11,0,1,lVar4);
    }
    else {
      lVar4 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)param_1 + lVar11,(long)param_2 + lVar11,
                          *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x28));
    uVar10 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar10;
    uVar10 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x2c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x2c)) = uVar10;
    uVar8 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x30));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x30)) = uVar8;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    lVar4 = puVar2[2];
    func_0x000107c61434();
    func_0x000107c61434(uVar10);
    func_0x000107c61434(uVar8);
    if (lVar4 == 1) {
      uVar10 = *puVar2;
      uVar14 = puVar2[3];
      uVar8 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar10;
      puVar1[3] = uVar14;
      puVar1[2] = uVar8;
      puVar1[4] = puVar2[4];
    }
    else {
      uVar10 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar10;
      puVar1[2] = lVar4;
      uVar9 = puVar2[4];
      func_0x000107c61434(lVar4);
      if (uVar9 >> 0x3c < 0xf) {
        uVar10 = puVar2[3];
        func_0x00010006c00c(uVar10,uVar9);
        puVar1[3] = uVar10;
        puVar1[4] = uVar9;
      }
      else {
        uVar10 = puVar2[3];
        puVar1[4] = puVar2[4];
        puVar1[3] = uVar10;
      }
    }
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar9 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar4 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1014815d8; end: 10148172f;  */

/* WARNING: Possible PIC construction at 0x000101481668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1014815d8(long param_1,long param_2)

{
  undefined1 *puVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long unaff_x19;
  long unaff_x20;
  long lVar10;
  code *pcVar11;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar4 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar5 = param_1;
  (*pcVar11)(param_1,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 8))(param_1,lVar4);
  }
  lVar5 = 0;
  FUN_10147f430();
  func_0x000107c6142c(*(undefined8 *)(param_1 + *(int *)(lVar5 + 0x14) + 8));
  puVar2 = (ulong *)(param_1 + *(int *)(lVar5 + 0x18));
  uVar8 = puVar2[1];
  if (uVar8 >> 0x3c < 0xf) {
    uVar6 = *puVar2;
    unaff_x30 = 0x10148166c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    unaff_x19 = param_1;
    unaff_x20 = param_2;
    unaff_x29 = puVar1;
code_r0x00010006c090:
    uVar9 = (uint)(uVar8 >> 0x3e);
    if (uVar9 == 1) {
      uVar6 = uVar8 & 0x3fffffffffffffff;
    }
    else {
      if (uVar9 != 2) {
        return;
      }
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar6);
    return;
  }
  func_0x000107c6142c(*(undefined8 *)(param_1 + *(int *)(lVar5 + 0x1c)));
  func_0x000107c6142c(*(undefined8 *)(param_1 + *(int *)(lVar5 + 0x20)));
  iVar3 = *(int *)(lVar5 + 0x24);
  lVar7 = param_1 + iVar3;
  (*pcVar11)(lVar7,1,lVar4);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar10 + 8))(param_1 + iVar3,lVar4);
  }
  func_0x000107c6142c(*(undefined8 *)(param_1 + *(int *)(lVar5 + 0x28) + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + *(int *)(lVar5 + 0x2c)));
  func_0x000107c6142c(*(undefined8 *)(param_1 + *(int *)(lVar5 + 0x30)));
  param_1 = param_1 + *(int *)(param_2 + 0x14);
  if (*(long *)(param_1 + 0x10) != 1) {
    func_0x000107c6142c();
    uVar8 = *(ulong *)(param_1 + 0x20);
    if (uVar8 >> 0x3c < 0xf) {
      uVar6 = *(ulong *)(param_1 + 0x18);
      goto code_r0x00010006c090;
    }
  }
  return;
}



/* Entry: 101481730; end: 101481dc7;  */

long FUN_101481730(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar3 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar4 = param_2;
  (*pcVar11)(param_2,1,lVar3);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar3);
    (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar3);
  }
  else {
    lVar4 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  lVar4 = 0;
  FUN_10147f430();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x14));
  uVar8 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x18));
  uVar7 = puVar2[1];
  func_0x000107c61434();
  if (uVar7 >> 0x3c < 0xf) {
    uVar8 = *puVar2;
    func_0x00010006c00c(uVar8,uVar7);
    *puVar1 = uVar8;
    puVar1[1] = uVar7;
  }
  else {
    uVar8 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar8;
  }
  *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(lVar4 + 0x1c));
  uVar8 = *(undefined8 *)(param_2 + *(int *)(lVar4 + 0x20));
  *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x20)) = uVar8;
  lVar9 = (long)*(int *)(lVar4 + 0x24);
  func_0x000107c61434();
  func_0x000107c61434(uVar8);
  lVar5 = param_2 + lVar9;
  (*pcVar11)(lVar5,1,lVar3);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 0x10))(param_1 + lVar9,param_2 + lVar9,lVar3);
    (**(code **)(lVar10 + 0x38))(param_1 + lVar9,0,1,lVar3);
  }
  else {
    lVar3 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4(param_1 + lVar9,param_2 + lVar9,
                        *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x28));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x28));
  uVar8 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  uVar8 = *(undefined8 *)(param_2 + *(int *)(lVar4 + 0x2c));
  *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x2c)) = uVar8;
  uVar6 = *(undefined8 *)(param_2 + *(int *)(lVar4 + 0x30));
  *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x30)) = uVar6;
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  lVar4 = puVar2[2];
  func_0x000107c61434();
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar6);
  if (lVar4 == 1) {
    uVar8 = *puVar2;
    uVar12 = puVar2[3];
    uVar6 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar8;
    puVar1[3] = uVar12;
    puVar1[2] = uVar6;
    puVar1[4] = puVar2[4];
  }
  else {
    uVar8 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar8;
    puVar1[2] = lVar4;
    uVar7 = puVar2[4];
    func_0x000107c61434(lVar4);
    if (uVar7 >> 0x3c < 0xf) {
      uVar8 = puVar2[3];
      func_0x00010006c00c(uVar8,uVar7);
      puVar1[3] = uVar8;
      puVar1[4] = uVar7;
    }
    else {
      uVar8 = puVar2[3];
      puVar1[4] = puVar2[4];
      puVar1[3] = uVar8;
    }
  }
  return param_1;
}



/* Entry: 101481dc8; end: 101481df3;  */

undefined8 FUN_101481dc8(undefined8 param_1)

{
  func_0x00010148303c(param_1,&UNK_1103c4948);
  return param_1;
}



/* Entry: 101481df4; end: 101481f9f;  */

long FUN_101481df4(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar3 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar4 = param_2;
  (*pcVar7)(param_2,1,lVar3);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar6 + 0x20))(param_1,param_2,lVar3);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,lVar3);
  }
  else {
    lVar4 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  lVar5 = 0;
  FUN_10147f430();
  puVar1 = (undefined8 *)(param_2 + *(int *)(lVar5 + 0x14));
  uVar9 = *puVar1;
  puVar2 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x14));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar9;
  puVar1 = (undefined8 *)(param_2 + *(int *)(lVar5 + 0x18));
  uVar9 = *puVar1;
  puVar2 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x18));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar9;
  *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x1c));
  *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x20)) =
       *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x20));
  lVar8 = (long)*(int *)(lVar5 + 0x24);
  lVar4 = param_2 + lVar8;
  (*pcVar7)(lVar4,1,lVar3);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar6 + 0x20))(param_1 + lVar8,param_2 + lVar8,lVar3);
    (**(code **)(lVar6 + 0x38))(param_1 + lVar8,0,1,lVar3);
  }
  else {
    lVar4 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4(param_1 + lVar8,param_2 + lVar8,
                        *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(param_2 + *(int *)(lVar5 + 0x28));
  uVar9 = *puVar1;
  puVar2 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x28));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar9;
  *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x2c)) =
       *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x2c));
  *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x30)) =
       *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x30));
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar9 = *puVar2;
  uVar11 = puVar2[3];
  uVar10 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar9;
  puVar1[3] = uVar11;
  puVar1[2] = uVar10;
  puVar1[4] = puVar2[4];
  return param_1;
}



/* Entry: 101481fa0; end: 1014822db;  */

long FUN_101481fa0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar3 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar4 = param_1;
  (*pcVar11)(param_1,1,lVar3);
  lVar9 = param_2;
  (*pcVar11)(param_2,1,lVar3);
  if ((int)lVar4 == 0) {
    if ((int)lVar9 != 0) {
      (**(code **)(lVar10 + 8))(param_1,lVar3);
      goto LAB_10148204c;
    }
    (**(code **)(lVar10 + 0x28))(param_1,param_2,lVar3);
  }
  else if ((int)lVar9 == 0) {
    (**(code **)(lVar10 + 0x20))(param_1,param_2,lVar3);
    (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar3);
  }
  else {
LAB_10148204c:
    lVar4 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  lVar4 = 0;
  FUN_10147f430();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x14));
  uVar6 = puVar2[1];
  uVar5 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  func_0x000107c6142c(uVar5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x18));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    uVar8 = puVar2[1];
    if (0xe < uVar8 >> 0x3c) {
      func_0x0001006e5814(puVar1);
      goto LAB_1014820d0;
    }
    uVar6 = *puVar1;
    *puVar1 = *puVar2;
    puVar1[1] = uVar8;
    func_0x00010006c090(uVar6);
  }
  else {
LAB_1014820d0:
    uVar6 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar6;
  }
  lVar9 = (long)*(int *)(lVar4 + 0x1c);
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  *(undefined8 *)(param_1 + lVar9) = *(undefined8 *)(param_2 + lVar9);
  func_0x000107c6142c(uVar6);
  lVar9 = (long)*(int *)(lVar4 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  *(undefined8 *)(param_1 + lVar9) = *(undefined8 *)(param_2 + lVar9);
  func_0x000107c6142c(uVar6);
  lVar12 = (long)*(int *)(lVar4 + 0x24);
  lVar9 = param_1 + lVar12;
  (*pcVar11)(lVar9,1,lVar3);
  lVar7 = param_2 + lVar12;
  (*pcVar11)(lVar7,1,lVar3);
  if ((int)lVar9 == 0) {
    if ((int)lVar7 == 0) {
      (**(code **)(lVar10 + 0x28))(param_1 + lVar12,param_2 + lVar12,lVar3);
      goto LAB_1014821b0;
    }
    (**(code **)(lVar10 + 8))(param_1 + lVar12,lVar3);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar10 + 0x20))(param_1 + lVar12,param_2 + lVar12,lVar3);
    (**(code **)(lVar10 + 0x38))(param_1 + lVar12,0,1,lVar3);
    goto LAB_1014821b0;
  }
  lVar9 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4(param_1 + lVar12,param_2 + lVar12,
                      *(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
LAB_1014821b0:
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x28));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x28));
  uVar6 = puVar2[1];
  uVar5 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  func_0x000107c6142c(uVar5);
  lVar9 = (long)*(int *)(lVar4 + 0x2c);
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  *(undefined8 *)(param_1 + lVar9) = *(undefined8 *)(param_2 + lVar9);
  func_0x000107c6142c(uVar6);
  lVar4 = (long)*(int *)(lVar4 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = *(undefined8 *)(param_2 + lVar4);
  func_0x000107c6142c(uVar6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  if (puVar1[2] != 1) {
    lVar4 = puVar2[2];
    if (lVar4 != 1) {
      uVar6 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar6;
      puVar1[2] = lVar4;
      func_0x000107c6142c();
      if ((ulong)puVar1[4] >> 0x3c < 0xf) {
        uVar8 = puVar2[4];
        if (uVar8 >> 0x3c < 0xf) {
          uVar6 = puVar1[3];
          puVar1[3] = puVar2[3];
          puVar1[4] = uVar8;
          func_0x00010006c090(uVar6);
          return param_1;
        }
        func_0x0001006e5814(puVar1 + 3);
      }
      uVar6 = puVar2[3];
      puVar1[4] = puVar2[4];
      puVar1[3] = uVar6;
      return param_1;
    }
    FUN_101481dc8(puVar1);
  }
  uVar6 = *puVar2;
  uVar13 = puVar2[3];
  uVar5 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar13;
  puVar1[2] = uVar5;
  puVar1[4] = puVar2[4];
  return param_1;
}



/* Entry: 1014822dc; end: 1014822f3;  */

void FUN_1014822dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1014822f4; end: 101482363;  */

void FUN_1014822f4(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_10147f430();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10d945a88;
    func_0x000107c6153c(param_1,0x100,2,&lStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 101482364; end: 101482573;  */

long * FUN_101482364(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar5 = 0;
    func_0x000107c5ede0();
    lVar12 = *(long *)(lVar5 + -8);
    pcVar13 = *(code **)(lVar12 + 0x30);
    plVar6 = param_2;
    (*pcVar13)(param_2,1,lVar5);
    if ((int)plVar6 == 0) {
      (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar5);
      (**(code **)(lVar12 + 0x38))(param_1,0,1,lVar5);
    }
    else {
      lVar7 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    iVar3 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar10 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar10;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
    uVar9 = puVar2[1];
    func_0x000107c61434();
    if (uVar9 >> 0x3c < 0xf) {
      uVar10 = *puVar2;
      func_0x00010006c00c(uVar10,uVar9);
      *puVar1 = uVar10;
      puVar1[1] = uVar9;
    }
    else {
      uVar10 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar10;
    }
    iVar3 = *(int *)(param_3 + 0x20);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar10 = *(undefined8 *)((long)param_2 + (long)iVar3);
    *(undefined8 *)((long)param_1 + (long)iVar3) = uVar10;
    lVar11 = (long)*(int *)(param_3 + 0x24);
    func_0x000107c61434();
    func_0x000107c61434(uVar10);
    lVar7 = (long)param_2 + lVar11;
    (*pcVar13)(lVar7,1,lVar5);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar12 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,lVar5);
      (**(code **)(lVar12 + 0x38))((long)param_1 + lVar11,0,1,lVar5);
    }
    else {
      lVar5 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)param_1 + lVar11,(long)param_2 + lVar11,
                          *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    }
    iVar3 = *(int *)(param_3 + 0x2c);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    uVar10 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar10;
    uVar8 = *(undefined8 *)((long)param_2 + (long)iVar3);
    *(undefined8 *)((long)param_1 + (long)iVar3) = uVar8;
    uVar10 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) = uVar10;
    func_0x000107c61434();
    func_0x000107c61434(uVar8);
    func_0x000107c61434(uVar10);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar9 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar5 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 101482574; end: 10148266f;  */

/* WARNING: Possible PIC construction at 0x0001014825d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101482600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101482644: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101482604) */
/* WARNING: Removing unreachable block (ram,0x000101482628) */
/* WARNING: Removing unreachable block (ram,0x000101482638) */
/* WARNING: Removing unreachable block (ram,0x0001014825d8) */
/* WARNING: Removing unreachable block (ram,0x0001014825f0) */
/* WARNING: Removing unreachable block (ram,0x0001014825f8) */
/* WARNING: Removing unreachable block (ram,0x000101482648) */

void FUN_101482574(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  lVar2 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar3 + 8))(param_1,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14) + 8));
  return;
}



/* Entry: 101482670; end: 101482b5b;  */

long FUN_101482670(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar4 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar5 = param_2;
  (*pcVar11)(param_2,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar4);
    (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar8 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)(param_1 + iVar3);
  puVar2 = (undefined8 *)(param_2 + iVar3);
  uVar7 = puVar2[1];
  func_0x000107c61434();
  if (uVar7 >> 0x3c < 0xf) {
    uVar8 = *puVar2;
    func_0x00010006c00c(uVar8,uVar7);
    *puVar1 = uVar8;
    puVar1[1] = uVar7;
  }
  else {
    uVar8 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar8;
  }
  iVar3 = *(int *)(param_3 + 0x20);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar8 = *(undefined8 *)(param_2 + iVar3);
  *(undefined8 *)(param_1 + iVar3) = uVar8;
  lVar9 = (long)*(int *)(param_3 + 0x24);
  func_0x000107c61434();
  func_0x000107c61434(uVar8);
  lVar5 = param_2 + lVar9;
  (*pcVar11)(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 0x10))(param_1 + lVar9,param_2 + lVar9,lVar4);
    (**(code **)(lVar10 + 0x38))(param_1 + lVar9,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4(param_1 + lVar9,param_2 + lVar9,
                        *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x2c);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x28));
  uVar8 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  uVar6 = *(undefined8 *)(param_2 + iVar3);
  *(undefined8 *)(param_1 + iVar3) = uVar6;
  uVar8 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x30));
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x30)) = uVar8;
  func_0x000107c61434();
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar8);
  return param_1;
}



/* Entry: 101482b5c; end: 101482f63;  */

long FUN_101482b5c(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar4 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar5 = param_2;
  (*pcVar7)(param_2,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar6 + 0x20))(param_1,param_2,lVar4);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x18);
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar9 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar9;
  puVar2 = (undefined8 *)(param_2 + iVar1);
  uVar9 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar9;
  iVar1 = *(int *)(param_3 + 0x20);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  *(undefined8 *)(param_1 + iVar1) = *(undefined8 *)(param_2 + iVar1);
  lVar8 = (long)*(int *)(param_3 + 0x24);
  lVar5 = param_2 + lVar8;
  (*pcVar7)(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar6 + 0x20))(param_1 + lVar8,param_2 + lVar8,lVar4);
    (**(code **)(lVar6 + 0x38))(param_1 + lVar8,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4(param_1 + lVar8,param_2 + lVar8,
                        *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x2c);
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x28));
  uVar9 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x28));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar9;
  *(undefined8 *)(param_1 + iVar1) = *(undefined8 *)(param_2 + iVar1);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x30)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x30));
  return param_1;
}



/* Entry: 101482f64; end: 101482f7b;  */

void FUN_101482f64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 101482f7c; end: 10148307f;  */

void FUN_101482f7c(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_68 = *(long *)(lVar1 + -8) + 0x40;
    puStack_60 = &UNK_10d945aa8;
    puStack_50 = PTR___sBbWV_11034d660 + 0x40;
    puStack_58 = &UNK_10d945ac0;
    puStack_38 = &UNK_10d945aa8;
    puStack_48 = puStack_50;
    lStack_40 = lStack_68;
    puStack_30 = puStack_50;
    puStack_28 = puStack_50;
    func_0x000107c6153c(param_1,0x100,9,&lStack_68,param_1 + 0x10);
  }
  return;
}



/* Entry: 101483080; end: 1014831b7;  */

undefined8 * FUN_101483080(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  uVar2 = param_2[4];
  func_0x000107c61434();
  if (uVar2 >> 0x3c < 0xf) {
    uVar1 = param_2[3];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[3] = uVar1;
    param_1[4] = uVar2;
  }
  else {
    uVar1 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar1;
  }
  return param_1;
}



/* Entry: 1014831b8; end: 101483237;  */

undefined8 * FUN_1014831b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar1);
  if ((ulong)param_1[4] >> 0x3c < 0xf) {
    uVar2 = param_2[4];
    if (uVar2 >> 0x3c < 0xf) {
      uVar1 = param_1[3];
      param_1[3] = param_2[3];
      param_1[4] = uVar2;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    func_0x0001006e5814(param_1 + 3);
  }
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  return param_1;
}



/* Entry: 101483238; end: 1014835ab;  */

int FUN_101483238(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1014835ac; end: 1014835eb;  */

void FUN_1014835ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1f20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945b7c;
  func_0x000107c61520(&UNK_10d945b7c,&UNK_1103c4a78);
  puRam0000000112da1f20 = puVar1;
  return;
}



/* Entry: 1014835ec; end: 1014835ef;  */

void FUN_1014835ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1f28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945c34;
  func_0x000107c61520(&UNK_10d945c34,&UNK_1103c49e8);
  puRam0000000112da1f28 = puVar1;
  return;
}



/* Entry: 1014835f0; end: 10148362f;  */

void FUN_1014835f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1f28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945c34;
  func_0x000107c61520(&UNK_10d945c34,&UNK_1103c49e8);
  puRam0000000112da1f28 = puVar1;
  return;
}



/* Entry: 101483630; end: 101483633;  */

void FUN_101483630(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1f30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945bcc;
  func_0x000107c61520(&UNK_10d945bcc,&UNK_1103c49e8);
  puRam0000000112da1f30 = puVar1;
  return;
}



/* Entry: 101483634; end: 101483673;  */

void FUN_101483634(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1f30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945bcc;
  func_0x000107c61520(&UNK_10d945bcc,&UNK_1103c49e8);
  puRam0000000112da1f30 = puVar1;
  return;
}



/* Entry: 101483674; end: 101483677;  */

void FUN_101483674(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1f38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945ba4;
  func_0x000107c61520(&UNK_10d945ba4,&UNK_1103c49e8);
  puRam0000000112da1f38 = puVar1;
  return;
}



/* Entry: 101483678; end: 1014836b7;  */

void FUN_101483678(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1f38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945ba4;
  func_0x000107c61520(&UNK_10d945ba4,&UNK_1103c49e8);
  puRam0000000112da1f38 = puVar1;
  return;
}



/* Entry: 1014836b8; end: 1014836bb;  */

void FUN_1014836b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1f40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945b14;
  func_0x000107c61520(&UNK_10d945b14,&UNK_1103c4a78);
  puRam0000000112da1f40 = puVar1;
  return;
}



/* Entry: 1014836bc; end: 1014836fb;  */

void FUN_1014836bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1f40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945b14;
  func_0x000107c61520(&UNK_10d945b14,&UNK_1103c4a78);
  puRam0000000112da1f40 = puVar1;
  return;
}



/* Entry: 1014836fc; end: 1014836ff;  */

void FUN_1014836fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1f48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945aec;
  func_0x000107c61520(&UNK_10d945aec,&UNK_1103c4a78);
  puRam0000000112da1f48 = puVar1;
  return;
}



/* Entry: 101483700; end: 10148377f;  */

void FUN_101483700(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1f48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945aec;
  func_0x000107c61520(&UNK_10d945aec,&UNK_1103c4a78);
  puRam0000000112da1f48 = puVar1;
  return;
}



/* Entry: 101483780; end: 1014838d7;  */

int FUN_101483780(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1014837fc;
        goto LAB_1014837e0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1014837e0:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_1014837fc:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1014838d8; end: 101483917;  */

void FUN_1014838d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1f68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945da0;
  func_0x000107c61520(&UNK_10d945da0,&UNK_1103c4b08);
  puRam0000000112da1f68 = puVar1;
  return;
}



/* Entry: 101483918; end: 10148391b;  */

void FUN_101483918(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1f70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945d38;
  func_0x000107c61520(&UNK_10d945d38,&UNK_1103c4b08);
  puRam0000000112da1f70 = puVar1;
  return;
}



/* Entry: 10148391c; end: 10148395b;  */

void FUN_10148391c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1f70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945d38;
  func_0x000107c61520(&UNK_10d945d38,&UNK_1103c4b08);
  puRam0000000112da1f70 = puVar1;
  return;
}



/* Entry: 10148395c; end: 10148395f;  */

void FUN_10148395c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1f78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945d10;
  func_0x000107c61520(&UNK_10d945d10,&UNK_1103c4b08);
  puRam0000000112da1f78 = puVar1;
  return;
}



/* Entry: 101483960; end: 10148399f;  */

void FUN_101483960(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1f78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945d10;
  func_0x000107c61520(&UNK_10d945d10,&UNK_1103c4b08);
  puRam0000000112da1f78 = puVar1;
  return;
}



/* Entry: 1014839a0; end: 101483a17;  */

undefined1 FUN_1014839a0(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 101483a18; end: 101483ab7;  */

undefined8 FUN_101483a18(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c61434(unaff_x20[1]);
  return uVar1;
}



/* Entry: 101483ab8; end: 101483b13;  */

void FUN_101483ab8(undefined8 param_1,undefined8 param_2,char param_3)

{
  if ((param_3 != '\x01') && (param_2 = param_1, param_3 != '\x04')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 101483b14; end: 101483bbf;  */

void FUN_101483b14(void)

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



/* Entry: 101483bc0; end: 101483c33;  */

undefined1  [16] FUN_101483bc0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar5 = *unaff_x20;
  uVar1 = 0x656d616e;
  if (bVar5 != 2) {
    uVar1 = 0x65756c6176;
  }
  uVar2 = 0xe400000000000000;
  if (bVar5 != 2) {
    uVar2 = 0xe500000000000000;
  }
  uVar3 = 0x79726f6765746163;
  if (bVar5 != 0) {
    uVar3 = 0x697463656c6c6f63;
  }
  uVar4 = 0xe800000000000000;
  if (bVar5 != 0) {
    uVar4 = 0xea00000000006e6f;
  }
  if (bVar5 < 2) {
    uVar2 = uVar4;
    uVar1 = uVar3;
  }
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = uVar1;
  return auVar6;
}



/* Entry: 101483c34; end: 101483c57;  */

void FUN_101483c34(undefined1 *param_1,undefined1 param_2)

{
  FUN_101484158();
  *param_1 = param_2;
  return;
}



/* Entry: 101483c58; end: 101483c6f;  */

undefined1  [16] FUN_101483c58(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101483c70; end: 101483cbf;  */

void FUN_101483c70(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101483e6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101483cc0; end: 101483e6b;  */

/* WARNING: Removing unreachable block (ram,0x000101483df8) */

void FUN_101483cc0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_80 [15];
  undefined1 uStack_71;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  
  lVar2 = 0x112da1f80;
  func_0x0001000285a8(0x112da1f80,&UNK_10d945e80);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_80 + -extraout_x8;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar3);
  FUN_101483e6c();
  func_0x000107c606ec(puVar4,&UNK_1103c4da0,&UNK_1103c4da0,param_1,uVar3,uVar1);
  uStack_70 = uStack_70 & 0xffffffffffffff00;
  func_0x000107c6053c(*unaff_x20,unaff_x20[1],&uStack_70,lVar2);
  if (unaff_x21 == 0) {
    uStack_70._0_1_ = 1;
    func_0x000107c6053c(unaff_x20[2],unaff_x20[3],&uStack_70,lVar2);
    uVar3 = unaff_x20[4];
    uStack_70 = CONCAT71(uStack_70._1_7_,2);
    func_0x000107c6053c(uVar3,unaff_x20[5],&uStack_70,lVar2);
    uStack_68 = unaff_x20[7];
    uStack_70 = unaff_x20[6];
    uStack_60 = *(undefined1 *)(unaff_x20 + 8);
    uStack_71 = 3;
    func_0x000101483eac();
    func_0x000107c60530(&uStack_70,&uStack_71,lVar2,&UNK_1103c4d10,uVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar2);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar2);
  }
  return;
}



/* Entry: 101483e6c; end: 101483eeb;  */

void FUN_101483e6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1f88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d946014;
  func_0x000107c61520(&UNK_10d946014,&UNK_1103c4da0);
  puRam0000000112da1f88 = puVar1;
  return;
}



/* Entry: 101483eec; end: 101483f3b;  */

void FUN_101483eec(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  FUN_1014842bc(&uStack_68);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_40;
    param_1[4] = uStack_48;
    param_1[7] = uStack_30;
    param_1[6] = uStack_38;
    *(undefined1 *)(param_1 + 8) = uStack_28;
    param_1[1] = uStack_60;
    *param_1 = uStack_68;
    param_1[3] = uStack_50;
    param_1[2] = uStack_58;
  }
  return;
}



/* Entry: 101483f3c; end: 101483f4f;  */

void FUN_101483f3c(void)

{
  FUN_101483cc0();
  return;
}



/* Entry: 101483f50; end: 10148410f;  */

void FUN_101483f50(long param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  func_0x000107c606e8(auStack_78,uVar1,uVar2);
  if (param_4 < 2) {
    if (param_4 == 0) {
      func_0x0001000c6518(auStack_78,uStack_60);
      func_0x000107c605e8((uint)param_2 & 1,uStack_60,uStack_58);
    }
    else {
      func_0x0001000c6518(auStack_78,uStack_60);
      func_0x000107c605e4(param_2,param_3,uStack_60,uStack_58);
    }
  }
  else if (param_4 == 2) {
    func_0x0001000c6518(auStack_78,uStack_60);
    func_0x000107c605f0(param_2,uStack_60,uStack_58);
  }
  else if (param_4 == 3) {
    func_0x0001000c6518(auStack_78,uStack_60);
    func_0x000107c605ec(param_2,uStack_60,uStack_58);
  }
  else {
    uStack_80 = param_2;
    func_0x0001000c6518(auStack_78,uStack_60);
    uVar1 = 0x112d3d588;
    func_0x0001000285a8(0x112d3d588,&UNK_10da29ed0);
    uVar2 = 0x112da1f98;
    FUN_101484fc8(0x112da1f98,PTR___sSdSEsWP_11034dd98,PTR___sSayxGSEsSERzlMc_11034dce0);
    func_0x000107c605f4(&uStack_80,uVar1,uVar2,uStack_60,uStack_58);
  }
  func_0x0001000834e4(auStack_78);
  return;
}



/* Entry: 101484110; end: 10148413b;  */

void FUN_101484110(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x21;
  
  FUN_101484570();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    *(undefined1 *)(param_1 + 2) = param_4;
  }
  return;
}



/* Entry: 10148413c; end: 101484157;  */

void FUN_10148413c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101483f50(param_1,*unaff_x20,unaff_x20[1],*(undefined1 *)(unaff_x20 + 2));
  return;
}



/* Entry: 101484158; end: 1014842bb;  */

undefined4 FUN_101484158(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0x79726f6765746163;
  if ((param_1 == 0x79726f6765746163 && param_2 == -0x1800000000000000) ||
     (func_0x000107c605b8(0x79726f6765746163,0xe800000000000000,param_1,param_2,0), (uVar2 & 1) != 0
     )) {
    func_0x000107c6142c(param_2);
    uVar1 = 0;
  }
  else {
    uVar2 = 0x697463656c6c6f63;
    if (((param_1 == 0x697463656c6c6f63) && (param_2 == -0x15ffffffffff9191)) ||
       (func_0x000107c605b8(0x697463656c6c6f63,0xea00000000006e6f,param_1,param_2,0),
       (uVar2 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      uVar1 = 1;
    }
    else {
      if ((param_1 != 0x656d616e) || (param_2 != -0x1c00000000000000)) {
        uVar2 = 0;
        func_0x000107c605b8(0x656d616e,0xe400000000000000,param_1,param_2,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if ((param_1 == 0x65756c6176) && (param_2 == -0x1b00000000000000)) {
            func_0x000107c6142c(0xe500000000000000);
            return 3;
          }
          func_0x000107c605b8(0x65756c6176,0xe500000000000000,param_1,param_2,0);
          func_0x000107c6142c(param_2);
          if ((uVar2 & 1) != 0) {
            return 3;
          }
          return 4;
        }
      }
      func_0x000107c6142c(param_2);
      uVar1 = 2;
    }
  }
  return uVar1;
}



/* Entry: 1014842bc; end: 10148456f;  */

/* WARNING: Removing unreachable block (ram,0x0001014844ac) */
/* WARNING: Removing unreachable block (ram,0x0001014843fc) */
/* WARNING: Removing unreachable block (ram,0x00010148444c) */
/* WARNING: Removing unreachable block (ram,0x0001014844c0) */
/* WARNING: Removing unreachable block (ram,0x0001014844d4) */
/* WARNING: Removing unreachable block (ram,0x0001014844e0) */
/* WARNING: Removing unreachable block (ram,0x0001014844e4) */
/* WARNING: Removing unreachable block (ram,0x000101484390) */

void FUN_1014842bc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  long lVar7;
  long extraout_x8;
  long unaff_x21;
  long lVar8;
  undefined1 auStack_180 [8];
  long lStack_178;
  long lStack_170;
  undefined1 auStack_168 [72];
  undefined8 ***pppuStack_120;
  long lStack_118;
  undefined8 ***pppuStack_110;
  long lStack_108;
  undefined8 ***pppuStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 ***pppuStack_b0;
  long lStack_a8;
  undefined8 ***pppuStack_a0;
  long lStack_98;
  undefined8 ***pppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_51;
  
  lVar3 = 0x112da1fd0;
  func_0x0001000285a8(0x112da1fd0,&UNK_10d946070);
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_101483e6c();
  func_0x000107c606e0(auStack_180 + -extraout_x8,&UNK_1103c4da0,&UNK_1103c4da0,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    pppuStack_120 = (undefined8 ***)((ulong)pppuStack_120 & 0xffffffffffffff00);
    ppppuVar5 = &pppuStack_120;
    lVar4 = lVar3;
    func_0x000107c604f4();
    pppuStack_120._0_1_ = 1;
    ppppuVar6 = &pppuStack_120;
    lVar7 = lVar3;
    pppuStack_b0 = ppppuVar5;
    lStack_a8 = lVar4;
    func_0x000107c604f4();
    pppuStack_120._0_1_ = 2;
    ppppuVar5 = &pppuStack_120;
    lVar4 = lVar3;
    lStack_170 = lVar7;
    pppuStack_a0 = ppppuVar6;
    lStack_98 = lVar7;
    func_0x000107c604f4();
    uStack_51 = 3;
    lStack_178 = lVar4;
    pppuStack_90 = ppppuVar5;
    lStack_88 = lVar4;
    FUN_101485030();
    func_0x000107c604e8(&uStack_d0,&UNK_1103c4d10,&uStack_51,lVar3,&UNK_1103c4d10,ppppuVar5);
    (**(code **)(lVar8 + 8))(auStack_180 + -extraout_x8,lVar3);
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    uStack_70 = uStack_c0;
    uStack_e0 = uStack_c0;
    lStack_118 = lStack_a8;
    pppuStack_120 = pppuStack_b0;
    lStack_108 = lStack_98;
    pppuStack_110 = pppuStack_a0;
    lStack_f8 = lStack_88;
    pppuStack_100 = pppuStack_90;
    uStack_e8 = uStack_c8;
    uStack_f0 = uStack_d0;
    func_0x000101483a48(&pppuStack_120,auStack_168);
    func_0x0001000834e4(param_2);
    func_0x000101483a84(&pppuStack_b0);
    param_1[5] = lStack_f8;
    param_1[4] = pppuStack_100;
    param_1[7] = uStack_e8;
    param_1[6] = uStack_f0;
    *(undefined1 *)(param_1 + 8) = uStack_e0;
    param_1[1] = lStack_118;
    *param_1 = pppuStack_120;
    param_1[3] = lStack_108;
    param_1[2] = pppuStack_110;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 101484570; end: 101484843;  */

/* WARNING: Removing unreachable block (ram,0x0001014846d4) */
/* WARNING: Removing unreachable block (ram,0x000101484800) */
/* WARNING: Removing unreachable block (ram,0x000101484628) */
/* WARNING: Removing unreachable block (ram,0x0001014847e0) */
/* WARNING: Removing unreachable block (ram,0x00010148465c) */
/* WARNING: Removing unreachable block (ram,0x0001014847f0) */
/* WARNING: Removing unreachable block (ram,0x000101484708) */
/* WARNING: Removing unreachable block (ram,0x0001014845f4) */

ulong FUN_101484570(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x21;
  undefined1 auStack_68 [24];
  ulong uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  func_0x000107c606dc(auStack_68,uVar1,uVar2);
  if (unaff_x21 == 0) {
    func_0x0001000a8868(auStack_68,uStack_50);
    func_0x000107c605c8(uStack_50,uStack_48);
    uVar3 = uStack_50 & 1;
    func_0x0001000834e4(auStack_68);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return uVar3;
}



/* Entry: 101484844; end: 1014848bf;  */

long FUN_101484844(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1014848c0; end: 10148495b;  */

undefined8 * FUN_1014848c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  cVar2 = *(char *)(param_2 + 8);
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar1);
  if (cVar2 == -1) {
    uVar3 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar3;
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  }
  else {
    uVar3 = param_2[6];
    uVar1 = param_2[7];
    FUN_101483ab8(uVar3,uVar1,cVar2);
    param_1[6] = uVar3;
    param_1[7] = uVar1;
    *(char *)(param_1 + 8) = cVar2;
  }
  return param_1;
}



/* Entry: 10148495c; end: 101484a7f;  */

undefined8 * FUN_10148495c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar5 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  param_1[2] = param_2[2];
  uVar5 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  param_1[4] = param_2[4];
  uVar5 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  cVar3 = *(char *)(param_2 + 8);
  if (*(char *)(param_1 + 8) == -1) {
    if (cVar3 == -1) {
      uVar6 = param_2[7];
      uVar5 = param_2[6];
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
      param_1[7] = uVar6;
      param_1[6] = uVar5;
    }
    else {
      uVar5 = param_2[6];
      uVar6 = param_2[7];
      FUN_101483ab8(uVar5,uVar6,cVar3);
      param_1[6] = uVar5;
      param_1[7] = uVar6;
      *(char *)(param_1 + 8) = cVar3;
    }
  }
  else if (cVar3 == -1) {
    FUN_101484a80(param_1 + 6);
    uVar4 = *(undefined1 *)(param_2 + 8);
    uVar5 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar5;
    *(undefined1 *)(param_1 + 8) = uVar4;
  }
  else {
    uVar5 = param_2[6];
    uVar1 = param_2[7];
    FUN_101483ab8(uVar5,uVar1,cVar3);
    uVar6 = param_1[6];
    uVar2 = param_1[7];
    param_1[6] = uVar5;
    param_1[7] = uVar1;
    uVar4 = *(undefined1 *)(param_1 + 8);
    *(char *)(param_1 + 8) = cVar3;
    func_0x000101483adc(uVar6,uVar2,uVar4);
  }
  return param_1;
}



/* Entry: 101484a80; end: 101484b4b;  */

undefined8 * FUN_101484a80(undefined8 *param_1)

{
  func_0x000101483adc(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return param_1;
}



/* Entry: 101484b4c; end: 101484c07;  */

int FUN_101484b4c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x41) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101484c08; end: 101484ca3;  */

undefined8 * FUN_101484c08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_101483ab8(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 101484ca4; end: 101484ce7;  */

undefined8 * FUN_101484ca4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x000101483adc(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 101484ce8; end: 101484eff;  */

int FUN_101484ce8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfb < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfc;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 5) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101484f00; end: 101484f3f;  */

void FUN_101484f00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1fa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945fec;
  func_0x000107c61520(&UNK_10d945fec,&UNK_1103c4da0);
  puRam0000000112da1fa8 = puVar1;
  return;
}



/* Entry: 101484f40; end: 101484f43;  */

void FUN_101484f40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1fb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945f84;
  func_0x000107c61520(&UNK_10d945f84,&UNK_1103c4da0);
  puRam0000000112da1fb0 = puVar1;
  return;
}



/* Entry: 101484f44; end: 101484f83;  */

void FUN_101484f44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1fb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945f84;
  func_0x000107c61520(&UNK_10d945f84,&UNK_1103c4da0);
  puRam0000000112da1fb0 = puVar1;
  return;
}



/* Entry: 101484f84; end: 101484f87;  */

void FUN_101484f84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1fb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945f5c;
  func_0x000107c61520(&UNK_10d945f5c,&UNK_1103c4da0);
  puRam0000000112da1fb8 = puVar1;
  return;
}



/* Entry: 101484f88; end: 101484fc7;  */

void FUN_101484f88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1fb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945f5c;
  func_0x000107c61520(&UNK_10d945f5c,&UNK_1103c4da0);
  puRam0000000112da1fb8 = puVar1;
  return;
}



/* Entry: 101484fc8; end: 10148502f;  */

void FUN_101484fc8(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0x112d3d588;
    func_0x00010002969c(0x112d3d588,&UNK_10da29ed0);
    uStack_38 = param_2;
    func_0x000107c61520(param_3,uVar1,&uStack_38);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101485030; end: 10148506f;  */

void FUN_101485030(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1fd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945ee8;
  func_0x000107c61520(&UNK_10d945ee8,&UNK_1103c4d10);
  puRam0000000112da1fd8 = puVar1;
  return;
}



/* Entry: 101485070; end: 101485097;  */

undefined8 * FUN_101485070(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_101483ab8(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 101485098; end: 1014850f3;  */

void FUN_101485098(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126a7178;
  func_0x000107c610f8();
  func_0x000107c48278();
  func_0x000107c615e8(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 1014850f4; end: 10148519b;  */

undefined1  [16] FUN_1014850f4(void)

{
  return ZEXT816(0x1103c4fb0);
}



/* Entry: 10148519c; end: 1014851cf;  */

void FUN_10148519c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1014851d0; end: 10148520f;  */

undefined1  [16] FUN_1014851d0(void)

{
  return ZEXT816(0x1103c5298);
}



/* Entry: 101485210; end: 101485277;  */

undefined8 FUN_101485210(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c45270(uStack_28);
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  uVar2 = uVar1;
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101485278; end: 1014852af;  */

void FUN_101485278(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1014852b0; end: 1014852d7;  */

void FUN_1014852b0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000106cbfc00();
  func_0x000107c61180();
  if (lVar2 != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014852d8);
  (*pcVar1)();
}



/* Entry: 1014852d8; end: 1014852df;  */

void FUN_1014852d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1014852e0; end: 101485313;  */

void FUN_1014852e0(void)

{
  long unaff_x20;
  
  func_0x000106cbfc18(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010bff91f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101485314; end: 10148531b;  */

void FUN_101485314(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10148531c; end: 101485373;  */

undefined8 FUN_10148531c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  func_0x0001000b714c(param_1,param_2);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  return uVar1;
}



/* Entry: 101485374; end: 1014853d3; -[_TtC29LocalizedStringLookupProvider25LazyLocalizedStringLookup init] */

void FUN_101485374(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LocalizedStringLookupProvider.LazyLocalizedStringLookup",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014853a0);
  (*pcVar1)();
}



/* Entry: 1014853d4; end: 101485403; -[_TtC29LocalizedStringLookupProvider25LazyLocalizedStringLookup .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014853d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112da2128));
  return;
}



/* Entry: 101485404; end: 10148547b;  */

void FUN_101485404(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112da2148,&UNK_10d946610);
  func_0x000107c6157c(param_2);
  pcVar1 = FUN_101485494;
  func_0x0001000823a8(FUN_101485494,param_2);
  func_0x000100096d40(0);
  func_0x000107c610f8();
  func_0x00010148556c();
  *param_1 = pcVar1;
  return;
}



/* Entry: 10148547c; end: 101485493;  */

void FUN_10148547c(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112da2148,&UNK_10d946610);
  func_0x000107c6157c();
  pcVar1 = FUN_101485494;
  func_0x0001000823a8();
  func_0x000100096d40(0);
  func_0x000107c610f8();
  func_0x00010148556c();
  *param_1 = pcVar1;
  return;
}



/* Entry: 101485494; end: 1014854ff;  */

void FUN_101485494(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 101485500; end: 10148551f;  */

undefined1  [16] FUN_101485500(void)

{
  return ZEXT816(0x1103c5718);
}



/* Entry: 101485520; end: 1014855b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101485520(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112da21e0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014855b8; end: 1014855ff; -[_TtC22SCLocalizationServices22SCLocalizationServices localizedStringLookup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014855b8(undefined8 param_1)

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



/* Entry: 101485600; end: 101485633;  */

void FUN_101485600(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101485634; end: 101485643; -[_TtC22SCLocalizationServices22SCLocalizationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101485634(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112da21e0));
  return;
}



/* Entry: 101485644; end: 10148568b;  */

long FUN_101485644(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126a71a0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  return unaff_x20;
}



/* Entry: 10148568c; end: 1014856f7;  */

void FUN_10148568c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1014856f8,uVar1,uVar2);
  return;
}



/* Entry: 1014856f8; end: 101485863;  */

void FUN_1014856f8(float param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x22;
  
  iVar1 = *(int *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  puVar4 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x000107c40efc();
  func_0x000107c61180();
  func_0x000107c49a9c();
  func_0x000107c52c24(puVar5);
  bVar3 = true;
  func_0x000107c52c24(puVar5);
  func_0x000107c3e70c(puVar5);
  puVar6 = puVar5;
  func_0x000107c3e720();
  if (puVar6 != (undefined *)0x2) {
    func_0x000107c40efc(puVar4);
    func_0x000107c61180();
    puVar6 = puVar4;
    func_0x000107c3e720();
    func_0x000107c61170(puVar4);
    bVar3 = puVar6 == (undefined *)0x3;
  }
  lVar7 = *(long *)(unaff_x22 + 0x18);
  func_0x000107c52c24(puVar5);
  lVar7 = *(long *)(lVar7 + 0x18);
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101485864);
    (*pcVar2)();
  }
  func_0x0001052f9d50(lVar7,iVar1 == 3,bVar3,1);
  param_1 = param_1 * 100.0;
  if (0x7f7fffff < (uint)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101485858);
    (*pcVar2)();
  }
  if (-9.223373e+18 < param_1) {
    if (param_1 < 9.223372e+18) {
      func_0x0001052f9ed4(lVar7,iVar1 == 3,(long)param_1);
      func_0x000107c61170(puVar5);
                    /* WARNING: Could not recover jumptable at 0x000101485850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101485860);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10148585c);
  (*pcVar2)();
}



/* Entry: 101485864; end: 10148588f;  */

void FUN_101485864(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101485890; end: 1014858db;  */

void FUN_101485890(void)

{
  return;
}


