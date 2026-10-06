/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1018f1538; end: 1018f1597;  */

void FUN_1018f1538(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x22;
  
  func_0x0001041e66ac();
  *(undefined8 *)(unaff_x22 + 0x38) = *param_1;
  plVar2 = (long *)0x110;
  func_0x000107c6157c();
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1018f1598;
  plVar1 = (long *)(unaff_x22 + 0x10);
  plVar2[0x1c] = (long)plVar1;
  plVar2[0x1d] = unaff_x20;
  func_0x0001041e66ac();
  lVar3 = *plVar1;
  plVar2[0x1e] = lVar3;
  func_0x000107c6157c(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018f1148,lVar3,0);
  return;
}



/* Entry: 1018f1598; end: 1018f15f3;  */

void FUN_1018f1598(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x38);
  *(long *)(lVar3 + 0x48) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x40));
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1018f15f4;
  }
  else {
    pcVar2 = (code *)0x1018f1704;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar1,0);
  return;
}



/* Entry: 1018f15f4; end: 1018f166b;  */

void FUN_1018f15f4(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1018f166c;
                    /* WARNING: Could not recover jumptable at 0x0001018f1668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(uVar2,lVar3);
  return;
}



/* Entry: 1018f166c; end: 1018f16c7;  */

void FUN_1018f166c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1018f16c8;
  }
  else {
    pcVar1 = (code *)0x1018f1738;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0x38),0);
  return;
}



/* Entry: 1018f16c8; end: 1018f1773;  */

void FUN_1018f16c8(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  FUN_1018f25c0(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001018f1700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018f1774; end: 1018f17e3;  */

void FUN_1018f1774(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(long *)(unaff_x22 + 0x78) = unaff_x20;
  uVar2 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  plVar3 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1018f17e4;
  plVar1 = (long *)(unaff_x22 + 0x48);
  plVar3[0x1c] = (long)plVar1;
  plVar3[0x1d] = unaff_x20;
  func_0x0001041e66ac();
  lVar4 = *plVar1;
  plVar3[0x1e] = lVar4;
  func_0x000107c6157c(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018f1148,lVar4,0);
  return;
}



/* Entry: 1018f17e4; end: 1018f1867;  */

void FUN_1018f17e4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x90);
  uVar3 = *(undefined8 *)(lVar4 + 0x80);
  *(long *)(lVar4 + 0x98) = unaff_x20;
  func_0x000107c615c0();
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(lVar4 + 0xa0) = uVar3;
  *(undefined8 *)(lVar4 + 0xa8) = uVar1;
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1018f1868;
  }
  else {
    pcVar2 = (code *)0x1018f1a48;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar3,uVar1);
  return;
}



/* Entry: 1018f1868; end: 1018f19a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f1868(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  long lVar8;
  
  lVar8 = *(long *)(unaff_x22 + 0x78);
  lVar2 = 0x112dc78d0;
  func_0x0001000285a8(0x112dc78d0,&UNK_10d9881c0);
  lVar4 = unaff_x22 + 0x10;
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__SKStoreProductParameterITunesItemIdentifier_110347e80;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(long *)(lVar2 + 0x28) = lVar4;
  *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(lVar8 + _DAT_112dd16a8);
  lVar4 = lVar2;
  func_0x0001003d21d8();
  func_0x000107c61588(lVar2);
  func_0x0001018f2580((undefined8 *)(lVar2 + 0x20),0x112dc78d8,&UNK_10d9881c8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar2 = *(long *)(unaff_x22 + 0x68);
  func_0x0001000a8868(unaff_x22 + 0x48,uVar3);
  lVar5 = lVar4;
  FUN_1018f1ab8();
  *(long *)(unaff_x22 + 0xb0) = lVar5;
  func_0x000107c6142c(lVar4);
  lVar4 = _DAT_112dd16b8;
  piVar7 = *(int **)(lVar2 + 0x18);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1018f19a4;
                    /* WARNING: Could not recover jumptable at 0x0001018f19a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (*(undefined8 *)(unaff_x22 + 0x70),lVar5,lVar8 + lVar4,uVar3,lVar2);
  return;
}



/* Entry: 1018f19a4; end: 1018f1a0b;  */

void FUN_1018f19a4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xb0);
  *(long *)(lVar3 + 0xc0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xb8));
  func_0x000107c6142c(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1018f1a0c;
  }
  else {
    pcVar2 = (code *)0x1018f1a7c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar2,*(undefined8 *)(lVar3 + 0xa0),*(undefined8 *)(lVar3 + 0xa8));
  return;
}



/* Entry: 1018f1a0c; end: 1018f1ab7;  */

void FUN_1018f1a0c(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  FUN_1018f25c0(unaff_x22 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x0001018f1a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018f1ab8; end: 1018f1d3b;  */

undefined * FUN_1018f1ab8(long param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 auStack_d0 [32];
  ulong uStack_b0;
  ulong uStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  puVar12 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar11 != (undefined *)0x0) {
    uVar6 = 0x112d4b5f8;
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    func_0x000107c60498(puVar11,uVar6);
    puVar12 = puVar11;
  }
  uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_1 + 0x40);
  func_0x000107c6157c(puVar12);
  func_0x000107c61434(param_1);
  lVar14 = 0;
  while( true ) {
    while( true ) {
      while (uVar13 == 0) {
        bVar5 = SCARRY8(lVar14,1);
        lVar14 = lVar14 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1018f1d08);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar14) {
          func_0x000107c61574(puVar12);
          func_0x000107c61574(param_1);
          return puVar12;
        }
        uVar13 = ((ulong *)(param_1 + 0x40))[lVar14];
      }
      uVar3 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) | lVar14 << 6;
      puVar2 = (ulong *)(*(long *)(param_1 + 0x30) + uVar8 * 0x10);
      uStack_e0 = *puVar2;
      uVar3 = puVar2[1];
      uStack_e8 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar8 * 8);
      uStack_d8 = uVar3;
      func_0x000107c61438(uVar3,2);
      func_0x000107c6147c(auStack_d0,&uStack_e8,PTR___sSiN_11034deb0,PTR___sypN_11034f1a8 + 8,7);
      func_0x000107c6142c(uVar3);
      if (uStack_d8 == 0) {
        func_0x000107c61574(param_1);
        func_0x0001018f2580(&uStack_e0,0x112d74040,&UNK_10d934650);
        func_0x000107c61574(puVar12);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1018f1d3c);
        (*pcVar4)();
      }
      uVar13 = uVar13 - 1 & uVar13;
      uStack_b0 = uStack_e0;
      uStack_a8 = uStack_d8;
      func_0x000100102924(auStack_d0,auStack_a0);
      uVar8 = uStack_a8;
      uVar3 = uStack_b0;
      func_0x000100102924(auStack_a0,auStack_80);
      uVar7 = uVar3;
      uVar9 = uVar8;
      func_0x000100029284();
      if ((uVar9 & 1) == 0) break;
      puVar2 = (ulong *)(*(long *)(puVar12 + 0x30) + uVar7 * 0x10);
      uVar9 = puVar2[1];
      *puVar2 = uVar3;
      puVar2[1] = uVar8;
      func_0x000107c6142c(uVar9);
      lVar1 = *(long *)(puVar12 + 0x38) + uVar7 * 0x20;
      FUN_1018f25c0(lVar1);
      func_0x000100102924(auStack_80,lVar1);
    }
    if (*(ulong *)(puVar12 + 0x18) <= *(ulong *)(puVar12 + 0x10)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1018f1d0c);
      (*pcVar4)();
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(puVar12 + uVar9 + 0x40) = *(ulong *)(puVar12 + uVar9 + 0x40) | 1L << (uVar7 & 0x3f);
    puVar2 = (ulong *)(*(long *)(puVar12 + 0x30) + uVar7 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar8;
    func_0x000100102924(auStack_80,*(long *)(puVar12 + 0x38) + uVar7 * 0x20);
    if (SCARRY8(*(long *)(puVar12 + 0x10),1)) break;
    *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1018f1d10);
  (*pcVar4)();
}



/* Entry: 1018f1d3c; end: 1018f1d9f;  */

void FUN_1018f1d3c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x48) = unaff_x20;
  func_0x0001041e66ac();
  *(undefined8 *)(unaff_x22 + 0x50) = *param_1;
  plVar2 = (long *)0x110;
  func_0x000107c6157c();
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1018f1da0;
  plVar1 = (long *)(unaff_x22 + 0x10);
  plVar2[0x1c] = (long)plVar1;
  plVar2[0x1d] = unaff_x20;
  func_0x0001041e66ac();
  lVar3 = *plVar1;
  plVar2[0x1e] = lVar3;
  func_0x000107c6157c(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018f1148,lVar3,0);
  return;
}



/* Entry: 1018f1da0; end: 1018f1dfb;  */

void FUN_1018f1da0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x50);
  *(long *)(lVar3 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x58));
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1018f1dfc;
  }
  else {
    pcVar2 = FUN_1018f1eb4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar1,0);
  return;
}



/* Entry: 1018f1dfc; end: 1018f1eb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f1dfc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x48);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  lVar2 = _DAT_112dd16b8;
  lVar3 = 0;
  func_0x0001018f2430();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x0001018f24ec(unaff_x22 + 0x10,lVar4 + _DAT_112dd17a0);
  func_0x0001018f261c(lVar1 + lVar2,lVar4 + _DAT_112dd17a8,0x112d36580,&UNK_10d9016d0);
  plVar5 = (long *)(unaff_x22 + 0x38);
  *plVar5 = lVar4;
  *(long *)(unaff_x22 + 0x40) = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  FUN_1018f25c0(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001018f1eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(plVar5);
  return;
}



/* Entry: 1018f1eb4; end: 1018f1f7b;  */

void FUN_1018f1eb4(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x0001018f1ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018f1f7c; end: 1018f1f97;  */

void FUN_1018f1f7c(void)

{
  if (lRam0000000112dd16f8 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e657520);
  return;
}



/* Entry: 1018f1f98; end: 1018f203b;  */

void FUN_1018f1f98(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000100b92084();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = &UNK_10d992828;
    lVar1 = 0x13f;
    func_0x0001000ee934();
    if (param_2 < 0x40) {
      lStack_38 = *(long *)(lVar1 + -8) + 0x40;
      puStack_30 = &UNK_10d992840;
      puStack_28 = &UNK_10d992858;
      func_0x000107c61630(param_1,0x100,5,&lStack_48,param_1 + 0x50);
    }
  }
  return;
}



/* Entry: 1018f203c; end: 1018f20cb;  */

void FUN_1018f203c(void)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *unaff_x20;
  plVar2 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1018f2670;
  plVar1 = plVar2;
  func_0x0001041e66ac();
  plVar2[7] = *plVar1;
  puVar3 = (undefined8 *)0x110;
  func_0x000107c6157c();
  func_0x000107c615b8();
  plVar2[8] = (long)puVar3;
  *puVar3 = plVar2;
  puVar3[1] = FUN_1018f1408;
  plVar2 = plVar2 + 2;
  puVar3[0x1c] = plVar2;
  puVar3[0x1d] = uVar5;
  func_0x0001041e66ac();
  lVar4 = *plVar2;
  puVar3[0x1e] = lVar4;
  func_0x000107c6157c(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018f1148,lVar4,0);
  return;
}



/* Entry: 1018f20cc; end: 1018f211b;  */

void FUN_1018f20cc(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *unaff_x20;
  plVar3 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1018f2678;
  plVar3[0xe] = param_1;
  plVar3[0xf] = lVar4;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar3[0x10] = lVar1;
  func_0x000107c5fce8();
  plVar3[0x11] = lVar1;
  plVar2 = (long *)0x110;
  func_0x000107c615b8();
  plVar3[0x12] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = (long)FUN_1018f17e4;
  plVar3 = plVar3 + 9;
  plVar2[0x1c] = (long)plVar3;
  plVar2[0x1d] = lVar4;
  func_0x0001041e66ac();
  lVar1 = *plVar3;
  plVar2[0x1e] = lVar1;
  func_0x000107c6157c(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018f1148,lVar1,0);
  return;
}



/* Entry: 1018f211c; end: 1018f2163;  */

void FUN_1018f211c(void)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *unaff_x20;
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1018f2164;
  plVar2[9] = lVar4;
  plVar1 = plVar2;
  func_0x0001041e66ac();
  plVar2[10] = *plVar1;
  puVar3 = (undefined8 *)0x110;
  func_0x000107c6157c();
  func_0x000107c615b8();
  plVar2[0xb] = (long)puVar3;
  *puVar3 = plVar2;
  puVar3[1] = FUN_1018f1da0;
  plVar2 = plVar2 + 2;
  puVar3[0x1c] = plVar2;
  puVar3[0x1d] = lVar4;
  func_0x0001041e66ac();
  lVar4 = *plVar2;
  puVar3[0x1e] = lVar4;
  func_0x000107c6157c(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018f1148,lVar4,0);
  return;
}



/* Entry: 1018f2164; end: 1018f21ab;  */

void FUN_1018f2164(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001018f21a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1018f21ac; end: 1018f21db;  */

void FUN_1018f21ac(void)

{
  long unaff_x22;
  
  func_0x0001041e66ac();
                    /* WARNING: Could not recover jumptable at 0x0001018f21d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018f21dc; end: 1018f2217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1018f21dc(void)

{
  undefined1 auVar1 [16];
  long *unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(*unaff_x20 + _DAT_112dd16b0);
  func_0x000107c61434(*(undefined8 *)(*(undefined1 (*) [16])(*unaff_x20 + _DAT_112dd16b0) + 8));
  return auVar1;
}



/* Entry: 1018f2218; end: 1018f222f;  */

undefined1  [16] FUN_1018f2218(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe300000000000000;
  auVar1._0_8_ = 0x4b4141;
  return auVar1;
}



/* Entry: 1018f2230; end: 1018f237b; -[_TtC35AppImpressionServicesImplementation24AAKSKOverlayConfigurator applyTo:] */

/* WARNING: Possible PIC construction at 0x0001018f2328: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018f2358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018f232c) */
/* WARNING: Removing unreachable block (ram,0x0001018f235c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f2230(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long extraout_x8;
  code *pcVar5;
  
  lVar1 = param_1 + _DAT_112dd17a0;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar4 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  pcVar5 = *(code **)(lVar4 + 0x20);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*pcVar5)(param_3,uVar2,lVar4);
  iVar3 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  lVar1 = _DAT_112dd17a8;
  if (iVar3 != 0) {
    lVar4 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    func_0x0001018f261c(param_1 + lVar1,&stack0xffffffffffffffb0 + -extraout_x8,0x112d36580,
                        &UNK_10d9016d0);
    func_0x000107c60084(&stack0xffffffffffffffb0 + -extraout_x8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1018f237c; end: 1018f23db; -[_TtC35AppImpressionServicesImplementation24AAKSKOverlayConfigurator init] */

void FUN_1018f237c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AppImpressionServicesImplementation.AAKSKOverlayConfigurator",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018f23a8);
  (*pcVar1)();
}



/* Entry: 1018f23dc; end: 1018f2427; -[_TtC35AppImpressionServicesImplementation24AAKSKOverlayConfigurator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f23dc(long param_1)

{
  FUN_1018f25c0(param_1 + _DAT_112dd17a0);
  func_0x0001018f2580(param_1 + _DAT_112dd17a8,0x112d36580,&UNK_10d9016d0);
  return;
}



/* Entry: 1018f2428; end: 1018f2443;  */

void FUN_1018f2428(void)

{
  if (lRam0000000112dd17d8 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e657568);
  return;
}



/* Entry: 1018f2444; end: 1018f2473;  */

void FUN_1018f2444(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 1018f2474; end: 1018f25bf;  */

void FUN_1018f2474(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10d992840;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,2,&puStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 1018f25c0; end: 1018f25df;  */

void FUN_1018f25c0(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001018f25d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1018f25e0; end: 1018f2663;  */

undefined8 FUN_1018f25e0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100b92084();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1018f2664; end: 1018f2683;  */

void FUN_1018f2664(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0001018f1734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018f2684; end: 1018f286b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f2684(double param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  double *pdVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_58 [40];
  
  if (*(char *)(unaff_x20 + 0x10) == '\x01') {
    func_0x000107c3cf50(*(undefined8 *)(unaff_x20 + _DAT_112dd1808));
    if (*(double *)(unaff_x20 + _DAT_112dd1800) <= param_1) {
      if (*(char *)(unaff_x20 + 0x10) == '\x01') {
        func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x48));
        pdVar2 = (double *)(unaff_x20 + _DAT_112dd1820);
        *pdVar2 = param_1;
        *(undefined1 *)(pdVar2 + 1) = 0;
        func_0x0001018eb328(unaff_x20 + 0x18,auStack_58);
        puVar3 = &UNK_11040f610;
        func_0x000107c613fc(&UNK_11040f610,0x38,7);
        FUN_1018f427c(auStack_58,puVar3 + 0x10);
        FUN_1018f298c(&UNK_10d992a18,puVar3,1,param_2);
        func_0x000107c61574(puVar3);
        func_0x000107c4e454(*(undefined8 *)(unaff_x20 + _DAT_112dd1808));
        func_0x000107c4e454(*(undefined8 *)(unaff_x20 + _DAT_112dd1810));
        *(undefined1 *)(unaff_x20 + 0x10) = 3;
      }
      return;
    }
  }
  else {
    func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x48));
    pdVar2 = (double *)(unaff_x20 + _DAT_112dd1818);
    *pdVar2 = param_1;
    *(undefined1 *)(pdVar2 + 1) = 0;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dd1820);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    func_0x0001018eb328(unaff_x20 + 0x18,auStack_58);
    puVar3 = &UNK_11040f660;
    func_0x000107c613fc(&UNK_11040f660,0x38,7);
    FUN_1018f427c(auStack_58,puVar3 + 0x10);
    FUN_1018f298c(&UNK_10d992a48,puVar3,0,param_2);
    func_0x000107c61574(puVar3);
    func_0x000107c504f4(*(undefined8 *)(unaff_x20 + _DAT_112dd1808));
    func_0x000107c504f4(*(undefined8 *)(unaff_x20 + _DAT_112dd1810));
    *(undefined1 *)(unaff_x20 + 0x10) = 1;
  }
  return;
}



/* Entry: 1018f286c; end: 1018f28b7;  */

void FUN_1018f286c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  *(undefined8 **)(unaff_x22 + 0x10) = param_1;
  func_0x0001041e66ac();
  uVar1 = *param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  func_0x000107c6157c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018f28b8,uVar1,0);
  return;
}



/* Entry: 1018f28b8; end: 1018f292f;  */

void FUN_1018f28b8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1018f2930;
                    /* WARNING: Could not recover jumptable at 0x0001018f292c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar2,lVar3);
  return;
}



/* Entry: 1018f2930; end: 1018f298b;  */

void FUN_1018f2930(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x28) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x20));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1018f44fc;
  }
  else {
    pcVar1 = FUN_1018f44fc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0x18),0);
  return;
}



/* Entry: 1018f298c; end: 1018f2ac7;  */

/* WARNING: Possible PIC construction at 0x0001018f2aa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018f2aa8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f298c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  double dVar3;
  
  func_0x000107c3cf50(*(undefined8 *)(unaff_x20 + _DAT_112dd1808));
  dVar3 = 0.0;
  if ((*(char *)((double *)(unaff_x20 + _DAT_112dd1818) + 1) != '\x01') &&
     (*(char *)((double *)(unaff_x20 + _DAT_112dd1820) + 1) != '\x01')) {
    dVar3 = *(double *)(unaff_x20 + _DAT_112dd1820) - *(double *)(unaff_x20 + _DAT_112dd1818);
  }
  puVar1 = &UNK_11040f5e8;
  func_0x000107c613fc(&UNK_11040f5e8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_11040f638;
  func_0x000107c613fc(&UNK_11040f638,0x48,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  *(double *)(puVar2 + 0x30) = dVar3;
  *(undefined8 *)(puVar2 + 0x38) = param_1;
  *(undefined8 *)(puVar2 + 0x40) = param_5;
  func_0x000107c6157c(param_3);
  func_0x0001001ca524(0,0,8,2,0,0,&UNK_10d992a28,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1018f2ac8; end: 1018f2b47;  */

void FUN_1018f2ac8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_8;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_7;
  func_0x0001041e66ac();
  *(undefined8 *)(unaff_x22 + 0x70) = *param_3;
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  func_0x000107c6157c();
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1018f2b48;
                    /* WARNING: Could not recover jumptable at 0x0001018f2b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))();
  return;
}



/* Entry: 1018f2b48; end: 1018f2ba3;  */

void FUN_1018f2b48(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x70);
  *(long *)(lVar3 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x78));
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1018f2ba4;
  }
  else {
    pcVar2 = FUN_1018f2c30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar1,0);
  return;
}



/* Entry: 1018f2ba4; end: 1018f2c2f;  */

void FUN_1018f2ba4(void)

{
  long lVar1;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
  lVar1 = *(long *)(unaff_x22 + 0x48);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    func_0x000107c614ac();
  }
  else {
    FUN_1018f2d58(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60),
                  *(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x68),0);
    func_0x000107c614ac(0);
    func_0x000107c614ac(0);
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001018f2c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018f2c30; end: 1018f2d57;  */

void FUN_1018f2c30(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *(long *)(unaff_x22 + 0x80);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
  lVar4 = *(long *)(unaff_x22 + 0x48);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 == 0) {
    func_0x000107c614ac(lVar3);
  }
  else {
    if (lVar3 == 0) {
      lVar6 = 0;
    }
    else {
      func_0x000107c614cc(lVar3,unaff_x22 + 0x40,unaff_x22 + 0x28);
      lVar1 = *(long *)(unaff_x22 + 0x30);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
      lVar7 = *(long *)(lVar1 + -8);
      uVar2 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8(uVar2);
      (**(code **)(lVar7 + 0x10))();
      lVar6 = lVar1;
      func_0x0001030c15a4(lVar1,uVar5);
      (**(code **)(lVar7 + 8))(uVar2,lVar1);
      func_0x000107c615c0(uVar2);
    }
    FUN_1018f2d58(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60),
                  *(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x68),lVar6);
    func_0x000107c614ac(lVar3);
    func_0x000107c614ac(lVar6);
    func_0x000107c61574(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0001018f2d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018f2d58; end: 1018f37ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f2d58(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  undefined *puVar17;
  long extraout_x8;
  long lVar18;
  long extraout_x8_00;
  long lVar19;
  long extraout_x8_01;
  undefined8 uVar20;
  long extraout_x12;
  long unaff_x20;
  long lVar21;
  undefined8 *puVar22;
  code *pcVar23;
  long alStack_2a0 [6];
  ulong auStack_270 [7];
  long alStack_238 [3];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  long lStack_80;
  
  lVar15 = 0x112dd1600;
  func_0x0001000285a8(0x112dd1600,&UNK_10d992a30);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)auStack_270 - extraout_x8);
  lVar6 = 0;
  func_0x000100b922c8();
  lVar18 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar19 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar15 = 0x112dd1460;
  func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
  lVar21 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar22 = (undefined8 *)(lVar21 - extraout_x12);
  lVar15 = unaff_x20 + _DAT_112dd17f8;
  lVar7 = 0;
  func_0x000100b92084();
  iVar2 = *(int *)(lVar7 + 0x1c);
  func_0x0001018f442c(lVar15 + iVar2,puVar22,0x112dd1460,&UNK_10d9925f0);
  lVar7 = 0;
  func_0x000100b92194();
  pcVar23 = *(code **)(*(long *)(lVar7 + -8) + 0x30);
  puVar8 = puVar22;
  (*pcVar23)(puVar22,1,lVar7);
  if ((int)puVar8 == 1) {
    uVar10 = 0x112dd1460;
    puVar17 = &UNK_10d9925f0;
    puVar9 = puVar22;
  }
  else {
    alStack_238[2] = param_5;
    uVar10 = puVar22[1];
    uVar14 = puVar22[3];
    auStack_270[2] = *puVar22;
    auStack_270[3] = puVar22[2];
    uVar1 = puVar22[5];
    alStack_238[0] = puVar22[4];
    uVar20 = puVar22[6];
    auStack_270[1] = (ulong)*(byte *)(puVar22 + 7);
    func_0x000107c61434(uVar10);
    func_0x000107c61434(uVar14);
    func_0x000107c61434(uVar1);
    FUN_1018f44c0(puVar22,&SUB_100b92194);
    auStack_270[6] = lVar15;
    func_0x0001018f442c(lVar15 + iVar2,lVar21,0x112dd1460,&UNK_10d9925f0);
    lVar15 = lVar21;
    (*pcVar23)(lVar21,1,lVar7);
    if ((int)lVar15 == 1) {
      func_0x000107c6142c(uVar14);
      func_0x000107c6142c(uVar10);
      func_0x000107c6142c(uVar1);
      func_0x0001018f43ec(lVar21,0x112dd1460,&UNK_10d9925f0);
      (**(code **)(lVar18 + 0x38))(puVar9,1,1,lVar6);
    }
    else {
      auStack_270[4] = uVar14;
      auStack_270[5] = uVar10;
      alStack_238[1] = uVar1;
      func_0x0001018f442c(lVar21 + *(int *)(lVar7 + 0x14),puVar9,0x112dd1600,&UNK_10d992a30);
      FUN_1018f44c0(lVar21,&SUB_100b92194);
      puVar8 = puVar9;
      (**(code **)(lVar18 + 0x30))(puVar9,1,lVar6);
      if ((int)puVar8 != 1) {
        FUN_1018f085c(puVar9,lVar19);
        lVar15 = alStack_238[1];
        if (param_3 == 1) {
          lStack_88 = 0;
          lStack_80 = 0xe000000000000000;
          func_0x000107c602fc(0x11);
          lVar21 = lStack_80;
          lVar7 = *(long *)(unaff_x20 + 0x30);
          lVar18 = *(long *)(unaff_x20 + 0x38);
          func_0x0001000a8868(unaff_x20 + 0x18,lVar7);
          (**(code **)(lVar18 + 0x38))();
          func_0x000107c6142c(lVar21);
          uVar10 = 0x504d495f444e455f;
          uVar16 = 0xef4e4f4953534552;
          lStack_88 = lVar7;
          lStack_80 = lVar18;
        }
        else {
          if (param_3 != 0) {
            FUN_1018f44c0(lVar19,&SUB_100b922c8);
            goto LAB_1018f3640;
          }
          lStack_88 = 0;
          lStack_80 = 0xe000000000000000;
          func_0x000107c602fc(0x13);
          lVar21 = lStack_80;
          lVar7 = *(long *)(unaff_x20 + 0x30);
          lVar18 = *(long *)(unaff_x20 + 0x38);
          func_0x0001000a8868(unaff_x20 + 0x18,lVar7);
          (**(code **)(lVar18 + 0x38))();
          func_0x000107c6142c(lVar21);
          uVar16 = 0x800000010efbffc0;
          uVar10 = 0xd000000000000011;
          lStack_88 = lVar7;
          lStack_80 = lVar18;
        }
        func_0x000107c5fb78(uVar10);
        lVar4 = lStack_80;
        lVar21 = lStack_88;
        func_0x000104840e10();
        lStack_88 = 0;
        lStack_80 = 0xe000000000000000;
        auStack_270[0] = uVar16;
        func_0x000107c602fc(0x24);
        lVar5 = lStack_80;
        lVar7 = *(long *)(unaff_x20 + 0x30);
        lVar18 = *(long *)(unaff_x20 + 0x38);
        func_0x0001000a8868(unaff_x20 + 0x18,lVar7);
        (**(code **)(lVar18 + 0x38))();
        func_0x000107c6142c(lVar5);
        lStack_88 = lVar7;
        lStack_80 = lVar18;
        func_0x000107c5fb78(0xd000000000000010,0x800000010efbff20);
        uVar10 = 0x7472617473;
        if (param_3 != 0) {
          uVar10 = 0x646e65;
        }
        uVar14 = 0xe500000000000000;
        if (param_3 != 0) {
          uVar14 = 0xe300000000000000;
        }
        func_0x000107c5fb78(uVar10,uVar14);
        func_0x000107c6142c(uVar14);
        func_0x000107c5fb78(0xd000000000000010,0x800000010efbff40);
        func_0x000107c6142c(lStack_80);
        lStack_88 = 0;
        lStack_80 = 0xe000000000000000;
        func_0x000107c602fc(0x19);
        uStack_98 = *(undefined8 *)(auStack_270[6] + 0x10);
        uStack_a0 = *(undefined8 *)(auStack_270[6] + 8);
        uVar10 = 0x112d35ff8;
        func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
        func_0x000107c603d0(&uStack_a0,&lStack_88,uVar10,
                            PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        func_0x000107c5fb78(0xd000000000000014,0x800000010efbff60);
        lVar18 = alStack_238[0];
        func_0x000107c5fb78(alStack_238[0],lVar15);
        func_0x000107c5fb78(0x20,0xe100000000000000);
        func_0x000107c6142c(lStack_80);
        lStack_88 = 0;
        lStack_80 = 0xe000000000000000;
        func_0x000107c602fc(0x21);
        func_0x000107c6142c(lStack_80);
        lStack_88 = 0x6973736572706d69;
        lStack_80 = 0xec000000203a6e6f;
        uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
        lVar7 = *(long *)(unaff_x20 + 0x38);
        func_0x0001000a8868(unaff_x20 + 0x18,uVar10);
        (**(code **)(lVar7 + 0x30))(uVar10,lVar7);
        func_0x000107c5fb78();
        func_0x000107c6142c(lVar7);
        func_0x000107c5fb78(0xd000000000000011,0x800000010efbff80);
        uVar16 = auStack_270[0];
        func_0x000107c5fb78(uVar20,auStack_270[0]);
        func_0x000107c6142c(lStack_80);
        lVar7 = 0x112d39140;
        func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
        func_0x000107c61534();
        *(undefined8 *)(lVar7 + 0x18) = 8;
        *(undefined8 *)(lVar7 + 0x10) = 4;
        puVar3 = PTR___sSSSHsWP_11034da90;
        puVar17 = PTR___sSSN_11034da80;
        lStack_88 = -0x2fffffffffffffef;
        lStack_80 = 0x800000010efbffa0;
        func_0x000107c602d4(lVar7 + 0x20,&lStack_88,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
        *(undefined **)(lVar7 + 0x60) = puVar17;
        *(long *)(lVar7 + 0x48) = lVar18;
        *(long *)(lVar7 + 0x50) = lVar15;
        lStack_88 = 0x6973736572706d69;
        lStack_80 = 0xea00000000006e6f;
        func_0x000107c61434(lVar15);
        func_0x000107c602d4(lVar7 + 0x68,&lStack_88,puVar17,puVar3);
        uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
        lVar15 = *(long *)(unaff_x20 + 0x38);
        func_0x0001000a8868(unaff_x20 + 0x18,uVar10);
        (**(code **)(lVar15 + 0x30))();
        *(undefined **)(lVar7 + 0xa8) = puVar17;
        *(undefined8 *)(lVar7 + 0x90) = uVar10;
        *(long *)(lVar7 + 0x98) = lVar15;
        lStack_88 = 0x6375646f72506461;
        lStack_80 = 0xed00006570795474;
        func_0x000107c602d4(lVar7 + 0xb0,&lStack_88,puVar17,puVar3);
        *(undefined **)(lVar7 + 0xf0) = puVar17;
        *(undefined8 *)(lVar7 + 0xd8) = uVar20;
        *(ulong *)(lVar7 + 0xe0) = uVar16;
        lStack_88 = 0x646f43726f727265;
        lStack_80 = 0xe900000000000065;
        func_0x000107c602d4(lVar7 + 0xf8,&lStack_88,puVar17,puVar3);
        lVar15 = alStack_238[2];
        lStack_88 = alStack_238[2];
        func_0x000107c614b0(alStack_238[2]);
        uVar10 = 0x112d511f8;
        func_0x0001000285a8(0x112d511f8,&UNK_10d918df0);
        plVar11 = &lStack_88;
        func_0x000107c5fb18();
        *(undefined **)(lVar7 + 0x138) = puVar17;
        *(long **)(lVar7 + 0x120) = plVar11;
        *(undefined8 *)(lVar7 + 0x128) = uVar10;
        lVar18 = lVar7;
        func_0x000100dfa3f0(lVar7);
        func_0x000107c61588(lVar7);
        uVar10 = 0x112d377a0;
        func_0x0001000285a8(0x112d377a0,&UNK_10d9016e0);
        func_0x000107c61408(lVar7 + 0x20,4,uVar10);
        lVar7 = lVar18;
        func_0x000107c5f9dc(lVar18,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                            PTR___ss11AnyHashableVSHsWP_11034e450);
        func_0x000107c6142c(lVar18);
        func_0x000107c5fadc(lVar21,lVar4);
        func_0x000107c6142c(lVar4);
        func_0x000107c2c4c0(0x10000,lVar7,lVar21);
        func_0x000107c61170(lVar7);
        func_0x000107c61170(lVar21);
        lVar7 = *(long *)(unaff_x20 + 0x40);
        if (lVar7 != 0) {
          uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
          lVar18 = *(long *)(unaff_x20 + 0x38);
          func_0x0001000a8868(unaff_x20 + 0x18,uVar10);
          pcVar23 = *(code **)(lVar18 + 0x40);
          func_0x000107c615f0(lVar7);
          (*pcVar23)(uVar10,lVar18);
          uVar13 = auStack_270[5];
          uVar16 = auStack_270[4];
          if (lVar15 == 0) {
            lVar18 = 0;
          }
          else {
            lVar18 = lVar15;
            func_0x000107c5ed2c(lVar15);
          }
          func_0x000107c4bc04(lVar7);
          func_0x000107c61170(lVar18);
          uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
          lVar18 = *(long *)(unaff_x20 + 0x38);
          func_0x0001000a8868(unaff_x20 + 0x18,uVar10);
          (**(code **)(lVar18 + 0x40))(uVar10,lVar18);
          uVar12 = auStack_270[2];
          func_0x000107c5fadc(auStack_270[2],uVar13);
          uVar13 = auStack_270[3];
          func_0x000107c5fadc(auStack_270[3],uVar16);
          lVar18 = *(long *)(lVar19 + 0x38);
          uVar10 = 0;
          if (lVar18 != 0) {
            uVar10 = *(undefined8 *)(lVar19 + 0x30);
          }
          lVar21 = -0x2000000000000000;
          if (lVar18 != 0) {
            lVar21 = lVar18;
          }
          func_0x000107c61434();
          func_0x000107c5fadc(uVar10,lVar21);
          func_0x000107c6142c(lVar21);
          puVar8 = (undefined8 *)(lVar19 + *(int *)(lVar6 + 0x30));
          lVar6 = puVar8[1];
          uVar14 = 0;
          if (lVar6 != 0) {
            uVar14 = *puVar8;
          }
          lVar18 = -0x2000000000000000;
          if (lVar6 != 0) {
            lVar18 = lVar6;
          }
          func_0x000107c61434();
          func_0x000107c5fadc(uVar14,lVar18);
          func_0x000107c6142c(lVar18);
          uVar1 = *(undefined8 *)(lVar19 + 0x10);
          uVar20 = *(undefined8 *)(lVar19 + 0x18);
          if (lVar15 == 0) {
            lVar15 = 0;
          }
          else {
            func_0x000107c5ed2c();
          }
          puVar22[-3] = uVar20;
          puVar22[-2] = lVar15;
          puVar22[-5] = uVar14;
          puVar22[-4] = uVar1;
          puVar22[-6] = uVar10;
          func_0x000107c4be58(param_1,param_2,lVar7);
          func_0x000107c6142c(alStack_238[1]);
          func_0x000107c615e8(lVar7);
          func_0x000107c61170(uVar12);
          func_0x000107c61170(uVar13);
          func_0x000107c61170(uVar10);
          func_0x000107c61170(uVar14);
          func_0x000107c61170(lVar15);
          func_0x000107c6142c(auStack_270[4]);
          func_0x000107c6142c(auStack_270[5]);
          FUN_1018f44c0(lVar19,&SUB_100b922c8);
          return;
        }
        FUN_1018f44c0(lVar19,&SUB_100b922c8);
        lVar15 = alStack_238[1];
LAB_1018f3640:
        func_0x000107c6142c(lVar15);
        func_0x000107c6142c(auStack_270[4]);
        func_0x000107c6142c(auStack_270[5]);
        return;
      }
      func_0x000107c6142c(alStack_238[1]);
      func_0x000107c6142c(auStack_270[4]);
      func_0x000107c6142c(auStack_270[5]);
    }
    uVar10 = 0x112dd1600;
    puVar17 = &UNK_10d992a30;
  }
  func_0x0001018f43ec(puVar9,uVar10,puVar17);
  return;
}



/* Entry: 1018f37f0; end: 1018f386b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f37f0(double param_1,undefined8 param_2)

{
  double *pdVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  
  if (*(char *)(unaff_x20 + 0x10) == '\x01') {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112dd1808);
    func_0x000107c3cf50(uVar3);
    if (*(double *)(unaff_x20 + _DAT_112dd1800) <= param_1) {
      if (*(char *)(unaff_x20 + 0x10) == '\x01') {
        func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x48));
        pdVar1 = (double *)(unaff_x20 + _DAT_112dd1820);
        *pdVar1 = param_1;
        *(undefined1 *)(pdVar1 + 1) = 0;
        func_0x0001018eb328(unaff_x20 + 0x18,auStack_58);
        puVar2 = &UNK_11040f610;
        func_0x000107c613fc(&UNK_11040f610,0x38,7);
        FUN_1018f427c(auStack_58,puVar2 + 0x10);
        FUN_1018f298c(&UNK_10d992a18,puVar2,1,param_2);
        func_0x000107c61574(puVar2);
        func_0x000107c4e454(*(undefined8 *)(unaff_x20 + _DAT_112dd1808));
        func_0x000107c4e454(*(undefined8 *)(unaff_x20 + _DAT_112dd1810));
        *(undefined1 *)(unaff_x20 + 0x10) = 3;
      }
      return;
    }
    func_0x000107c4e454(uVar3);
    *(undefined1 *)(unaff_x20 + 0x10) = 2;
  }
  return;
}



/* Entry: 1018f386c; end: 1018f38b7;  */

void FUN_1018f386c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  *(undefined8 **)(unaff_x22 + 0x10) = param_1;
  func_0x0001041e66ac();
  uVar1 = *param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  func_0x000107c6157c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018f38b8,uVar1,0);
  return;
}



/* Entry: 1018f38b8; end: 1018f392f;  */

void FUN_1018f38b8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1018f3930;
                    /* WARNING: Could not recover jumptable at 0x0001018f392c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar2,lVar3);
  return;
}



/* Entry: 1018f3930; end: 1018f398b;  */

void FUN_1018f3930(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x28) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x20));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1018f398c;
  }
  else {
    pcVar1 = (code *)0x1018f39c0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0x18),0);
  return;
}



/* Entry: 1018f398c; end: 1018f3a3f;  */

void FUN_1018f398c(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001018f39bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018f3a40; end: 1018f3b13;  */

void FUN_1018f3a40(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x38,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar5 != 0) {
    func_0x0001018eb328(lVar5 + 0x18,unaff_x22 + 0x10);
    func_0x000107c61574(lVar5);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar5 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
    piVar4 = *(int **)(lVar5 + 0x28);
    iVar1 = *piVar4;
    plVar3 = (long *)(ulong)(uint)piVar4[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1018f3b14;
                    /* WARNING: Could not recover jumptable at 0x0001018f3af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar4))(uVar2,lVar5);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x0001018f3b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018f3b14; end: 1018f3b6f;  */

void FUN_1018f3b14(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1018f3b70;
  }
  else {
    pcVar1 = (code *)0x1018f3ba8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0x58),0);
  return;
}



/* Entry: 1018f3b70; end: 1018f3c5b;  */

void FUN_1018f3b70(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001018f3ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018f3c5c; end: 1018f3c63;  */

void FUN_1018f3c5c(void)

{
  if (lRam0000000112dd1850 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e6575b0);
  return;
}



/* Entry: 1018f3c64; end: 1018f3c9b;  */

void FUN_1018f3c64(undefined8 param_1)

{
  if (lRam0000000112dd1850 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6575b0);
  return;
}



/* Entry: 1018f3c9c; end: 1018f3e9b;  */

void FUN_1018f3c9c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_70 = &UNK_10d992968;
  puStack_68 = &UNK_10d992980;
  puStack_60 = &UNK_10d992998;
  puStack_58 = &UNK_10d9929b0;
  lVar1 = 0x13f;
  func_0x000100b92084();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_40 = PTR___sBOWV_11034d658 + 0x40;
    puStack_30 = &UNK_10d9929c8;
    puStack_28 = &UNK_10d9929c8;
    puStack_38 = puStack_40;
    func_0x000107c61630(param_1,0x100,10,&puStack_70,param_1 + 0x50);
  }
  return;
}



/* Entry: 1018f3e9c; end: 1018f3f0b;  */

void FUN_1018f3e9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018f3f0c,uVar1,uVar2);
  return;
}



/* Entry: 1018f3f0c; end: 1018f3f8f;  */

void FUN_1018f3f0c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(lVar5 + 0x30);
  lVar3 = *(long *)(lVar5 + 0x38);
  func_0x0001000a8868(lVar5 + 0x18,uVar2);
  piVar6 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1018f3f90;
                    /* WARNING: Could not recover jumptable at 0x0001018f3f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(unaff_x22 + 0x10),uVar2,lVar3);
  return;
}



/* Entry: 1018f3f90; end: 1018f3fe7;  */

void FUN_1018f3f90(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x40) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x38));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1018f3fe8;
  }
  else {
    pcVar1 = (code *)0x1018f401c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x30));
  return;
}



/* Entry: 1018f3fe8; end: 1018f409f;  */

void FUN_1018f3fe8(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001018f4018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018f40a0; end: 1018f411b;  */

void FUN_1018f40a0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar5 + 0x30);
  lVar3 = *(long *)(lVar5 + 0x38);
  func_0x0001000a8868(lVar5 + 0x18,uVar2);
  piVar6 = *(int **)(lVar3 + 0x20);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1018f411c;
                    /* WARNING: Could not recover jumptable at 0x0001018f4118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar2,lVar3);
  return;
}



/* Entry: 1018f411c; end: 1018f4187;  */

void FUN_1018f411c(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x28) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x20));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x30) = param_1;
    pcVar1 = FUN_1018f4188;
  }
  else {
    pcVar1 = (code *)0x1018f41c0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0x18),0);
  return;
}



/* Entry: 1018f4188; end: 1018f41f3;  */

void FUN_1018f4188(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001018f41bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x30));
  return;
}



/* Entry: 1018f41f4; end: 1018f4227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f41f4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010beed830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112dd1808),PTR_s_accumulatedTime_112598fb0);
  return;
}



/* Entry: 1018f4228; end: 1018f427b;  */

void FUN_1018f4228(long *param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1018f4508;
  plVar1[10] = unaff_x20;
  func_0x0001041e66ac();
  lVar2 = *param_1;
  plVar1[0xb] = lVar2;
  func_0x000107c6157c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018f3a40,lVar2,0);
  return;
}



/* Entry: 1018f427c; end: 1018f4293;  */

undefined8 * FUN_1018f427c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1018f4294; end: 1018f431b;  */

void FUN_1018f4294(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar2 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1018f42e0;
  plVar1 = (long *)(unaff_x20 + 0x10);
  plVar2[2] = (long)plVar1;
  func_0x0001041e66ac();
  lVar3 = *plVar1;
  plVar2[3] = lVar3;
  func_0x000107c6157c(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018f38b8,lVar3,0);
  return;
}



/* Entry: 1018f431c; end: 1018f43af;  */

void FUN_1018f431c(long *param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  long lVar9;
  long lVar10;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar9 = *(long *)(unaff_x20 + 0x30);
  lVar10 = *(long *)(unaff_x20 + 0x38);
  lVar8 = *(long *)(unaff_x20 + 0x40);
  plVar7 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1018f43b0;
  plVar7[0xd] = lVar8;
  plVar7[0xb] = lVar9;
  plVar7[0xc] = lVar10;
  plVar7[9] = lVar3;
  plVar7[10] = lVar5;
  func_0x0001041e66ac(param_1,piVar2,uVar4);
  plVar7[0xe] = *param_1;
  iVar1 = *piVar2;
  plVar6 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c6157c();
  func_0x000107c615b8();
  plVar7[0xf] = (long)plVar6;
  *plVar6 = (long)plVar7;
  plVar6[1] = (long)FUN_1018f2b48;
                    /* WARNING: Could not recover jumptable at 0x0001018f2b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 1018f43b0; end: 1018f43eb;  */

void FUN_1018f43b0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001018f43e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1018f43ec; end: 1018f4473;  */

undefined8 FUN_1018f43ec(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1018f4474; end: 1018f44bf;  */

void FUN_1018f4474(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar2 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1018f4504;
  plVar1 = (long *)(unaff_x20 + 0x10);
  plVar2[2] = (long)plVar1;
  func_0x0001041e66ac();
  lVar3 = *plVar1;
  plVar2[3] = lVar3;
  func_0x000107c6157c(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018f28b8,lVar3,0);
  return;
}



/* Entry: 1018f44c0; end: 1018f44fb;  */

undefined8 FUN_1018f44c0(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1018f44fc; end: 1018f450b;  */

void FUN_1018f44fc(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001018f39bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018f450c; end: 1018f45b7;  */

void FUN_1018f450c(void)

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



/* Entry: 1018f45b8; end: 1018f45bb;  */

void FUN_1018f45b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd1920 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d992ab0;
  func_0x000107c61520(&UNK_10d992ab0,&UNK_11040f700);
  puRam0000000112dd1920 = puVar1;
  return;
}



/* Entry: 1018f45bc; end: 1018f45fb;  */

void FUN_1018f45bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd1920 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d992ab0;
  func_0x000107c61520(&UNK_10d992ab0,&UNK_11040f700);
  puRam0000000112dd1920 = puVar1;
  return;
}



/* Entry: 1018f45fc; end: 1018f478b;  */

bool FUN_1018f45fc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1018f478c; end: 1018f488b;  */

void FUN_1018f478c(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0x88) + 0x10);
  *(long *)(unaff_x22 + 0x90) = lVar3;
  if (lVar3 != 0) {
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1018f488c;
    func_0x000107c615f0(lVar3);
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,1);
    puVar2 = &UNK_11040f808;
    func_0x000107c613fc(&UNK_11040f808,0x18,7);
    puVar4 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar2 + 0x10) = lVar1;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x1018f574c;
    *(undefined **)(unaff_x22 + 0x78) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_100ff4e10;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11040f820;
    func_0x000107c60bc4(puVar4);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c5bae8(lVar3);
    func_0x000107c60bd0(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001018f4888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018f488c; end: 1018f48ef;  */

void FUN_1018f488c(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x98) = lVar2;
  if (lVar2 == 0) {
    uVar1 = 0x1018f5744;
  }
  else {
    func_0x000107c61654();
    uVar1 = 0x1018f5740;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 1018f48f0; end: 1018f4907;  */

void FUN_1018f48f0(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018f4908,0,0);
  return;
}



/* Entry: 1018f4908; end: 1018f4a07;  */

void FUN_1018f4908(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0x88) + 0x10);
  *(long *)(unaff_x22 + 0x90) = lVar3;
  if (lVar3 != 0) {
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1018f4a08;
    func_0x000107c615f0(lVar3);
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,1);
    puVar2 = &UNK_11040f7b8;
    func_0x000107c613fc(&UNK_11040f7b8,0x18,7);
    puVar4 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar2 + 0x10) = lVar1;
    *(code **)(unaff_x22 + 0x70) = FUN_1018f56b8;
    *(undefined **)(unaff_x22 + 0x78) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_100ff4e10;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11040f7d0;
    func_0x000107c60bc4(puVar4);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c4282c(lVar3);
    func_0x000107c60bd0(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001018f4a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018f4a08; end: 1018f4a6b;  */

void FUN_1018f4a08(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x98) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_1018f4a6c;
  }
  else {
    func_0x000107c61654();
    pcVar1 = (code *)0x1018f4aa0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1018f4a6c; end: 1018f4ad3;  */

void FUN_1018f4a6c(void)

{
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x0001018f4a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018f4ad4; end: 1018f4b53;  */

void FUN_1018f4ad4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (param_1 != 0) {
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_1;
    func_0x000107c614b0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_2,uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_2);
  return;
}



/* Entry: 1018f4b54; end: 1018f4b97;  */

void FUN_1018f4b54(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018f4b98; end: 1018f4be7;  */

void FUN_1018f4b98(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1018f5730;
  plVar1[0x10] = param_1;
  plVar1[0x11] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018f478c,0,0);
  return;
}



/* Entry: 1018f4be8; end: 1018f4c37;  */

void FUN_1018f4be8(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1018f4c38;
  plVar1[0x10] = param_1;
  plVar1[0x11] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018f4908,0,0);
  return;
}



/* Entry: 1018f4c38; end: 1018f4cbb;  */

void FUN_1018f4c38(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001018f4c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1018f4cbc; end: 1018f4cd7;  */

void FUN_1018f4cbc(void)

{
  if (lRam0000000112dd1a00 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e657738);
  return;
}



/* Entry: 1018f4cd8; end: 1018f4d5b;  */

void FUN_1018f4cd8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_38 = PTR___sBOWV_11034d658 + 0x40;
  lVar1 = 0x13f;
  func_0x000100b92084();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10d992b68;
    func_0x000107c61630(param_1,0x100,3,&puStack_38,param_1 + 0x50);
  }
  return;
}



/* Entry: 1018f4d5c; end: 1018f4dab;  */

void FUN_1018f4d5c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = *unaff_x20;
  func_0x0001041e66ac();
  uVar1 = *param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  func_0x000107c6157c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018f4dac,uVar1,0);
  return;
}



/* Entry: 1018f4dac; end: 1018f4e3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f4dac(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)(unaff_x22 + 0x10);
  lVar1 = lVar7 + _DAT_112dd19d0;
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  lVar4 = *(long *)(lVar1 + 0x20);
  func_0x0001018f56ec(lVar1,uVar3);
  uVar8 = *(undefined8 *)(lVar7 + 0x10);
  piVar6 = *(int **)(lVar4 + 8);
  iVar2 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1018f4e3c;
                    /* WARNING: Could not recover jumptable at 0x0001018f4e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar6))(uVar8,uVar3,lVar4);
  return;
}



/* Entry: 1018f4e3c; end: 1018f4e97;  */

void FUN_1018f4e3c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x28) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x20));
  if (unaff_x20 == 0) {
    uVar1 = 0x1018f573c;
  }
  else {
    uVar1 = 0x1018f5748;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,*(undefined8 *)(lVar2 + 0x18),0);
  return;
}



/* Entry: 1018f4e98; end: 1018f4ee7;  */

void FUN_1018f4e98(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = *unaff_x20;
  func_0x0001041e66ac();
  uVar1 = *param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  func_0x000107c6157c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018f4ee8,uVar1,0);
  return;
}



/* Entry: 1018f4ee8; end: 1018f4f77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f4ee8(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)(unaff_x22 + 0x10);
  lVar1 = lVar7 + _DAT_112dd19d0;
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  lVar4 = *(long *)(lVar1 + 0x20);
  func_0x0001018f56ec(lVar1,uVar3);
  uVar8 = *(undefined8 *)(lVar7 + 0x10);
  piVar6 = *(int **)(lVar4 + 0x10);
  iVar2 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1018f4f78;
                    /* WARNING: Could not recover jumptable at 0x0001018f4f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar6))(uVar8,uVar3,lVar4);
  return;
}



/* Entry: 1018f4f78; end: 1018f4fd3;  */

void FUN_1018f4f78(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x28) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x20));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1018f4fd4;
  }
  else {
    pcVar1 = (code *)0x1018f5008;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0x18),0);
  return;
}



/* Entry: 1018f4fd4; end: 1018f503b;  */

void FUN_1018f4fd4(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001018f5004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018f503c; end: 1018f50ab;  */

void FUN_1018f503c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018f50ac,uVar1,uVar2);
  return;
}



/* Entry: 1018f50ac; end: 1018f5147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f50ac(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001018f56ec(lVar4,uVar2);
  func_0x0001030beda8(_DAT_112dd19c8);
  *(long *)(unaff_x22 + 0x38) = lVar4;
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1018f5148;
                    /* WARNING: Could not recover jumptable at 0x0001018f5144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(lVar4,uVar2,lVar3);
  return;
}



/* Entry: 1018f5148; end: 1018f51af;  */

void FUN_1018f5148(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x38);
  *(long *)(lVar3 + 0x48) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x40));
  func_0x000107c6142c(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1018f51b0;
  }
  else {
    pcVar2 = (code *)0x1018f51e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar2,*(undefined8 *)(lVar3 + 0x28),*(undefined8 *)(lVar3 + 0x30));
  return;
}



/* Entry: 1018f51b0; end: 1018f5257;  */

void FUN_1018f51b0(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001018f51e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018f5258; end: 1018f52d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f5258(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar1 = _DAT_112dd19c8;
  lVar4 = *(long *)(unaff_x22 + 0x20);
  lVar2 = 0;
  func_0x0001018f5608();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x0001018eb36c(lVar4 + lVar1,lVar3 + _DAT_112dd1a98);
  *(long *)(unaff_x22 + 0x10) = lVar3;
  *(long *)(unaff_x22 + 0x18) = lVar2;
  func_0x000107c61154((long *)(unaff_x22 + 0x10),PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x0001018f52d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


