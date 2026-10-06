/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1032ff59c; end: 1032ff5ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ff59c(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_112f57b48) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + _DAT_112f57b48) + _DAT_1130828e8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5a8ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1032ff600; end: 1032ff607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ff600(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f57b48);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + _DAT_1130828e8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5a8ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1032ff608; end: 1032ff627;  */

void FUN_1032ff608(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1032ff628; end: 1032ff643;  */

void FUN_1032ff628(long param_1,long param_2)

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



/* Entry: 1032ff644; end: 1032ff7ff;  */

/* WARNING: Possible PIC construction at 0x0001032ff6d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032ff76c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032ff6dc) */
/* WARNING: Removing unreachable block (ram,0x0001032ff770) */
/* WARNING: Removing unreachable block (ram,0x0001032ff774) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ff644(void)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x20;
  
  dVar4 = dRam0000000112f57b90;
  lVar3 = _DAT_112f57ae8;
  lVar2 = _DAT_112f57ad8;
  if ((*(char *)(*(long *)(unaff_x20 + _DAT_112f57b38) + _DAT_113082a30) == '\x01') &&
     ((*(byte *)(unaff_x20 + _DAT_112f57ad8) & 1) == 0)) {
    if (dRam0000000112f57b90 <= 0.0) {
      puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c4c194();
      func_0x000107c61180();
      func_0x000107c3ec60();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar5);
      return;
    }
    *(double *)(unaff_x20 + _DAT_112f57ae8) = dRam0000000112f57b90;
    FUN_1032fffbc(dVar4);
    uVar6 = 1;
    FUN_103300280();
    if ((uVar6 & 1) == 0) {
      *(undefined8 *)(unaff_x20 + lVar3) = 0;
    }
    else {
      pdVar1 = (double *)(unaff_x20 + _DAT_112f57ae0);
      *pdVar1 = dVar4;
      *(undefined1 *)(pdVar1 + 1) = 0;
      *(undefined1 *)(unaff_x20 + lVar2) = 1;
      puVar5 = (undefined *)(unaff_x20 + _DAT_112f57a90);
      func_0x000107c61618();
      if (puVar5 != (undefined *)0x0) {
        func_0x000107c5c734();
        func_0x000107c61180();
        goto code_r0x000107c61170;
      }
    }
  }
  return;
}



/* Entry: 1032ff800; end: 1032ffbab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ff800(ulong param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar10 = _DAT_112f57b30;
  func_0x000107c61428(unaff_x20 + _DAT_112f57b30,auStack_78,1,0);
  *(undefined1 *)(unaff_x20 + lVar10) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f57ad8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f57ae0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f57ae8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f57af0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f57af8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f57b08);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar5 = &UNK_11063b9b0;
  func_0x000107c613fc(&UNK_11063b9b0,0x18,7);
  *(long *)(puVar5 + 0x10) = unaff_x20;
  puVar6 = &UNK_11063b9d8;
  func_0x000107c613fc(&UNK_11063b9d8,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_103300acc;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = (code *)0x1033011e0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_11063b9f0;
  ppuVar7 = &puStack_a8;
  puStack_80 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar8 = puStack_80;
  func_0x000107c61174();
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar8);
  func_0x000107c4e5fc(puVar4);
  func_0x000107c60bd0(ppuVar7);
  puVar8 = puVar6;
  func_0x000107c61544(puVar6,"",0x70,0xb6,0x28,1);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar8 & 1) == 0) {
    lVar10 = unaff_x20 + _DAT_112f57a90;
    func_0x000107c61618();
    if (lVar10 != 0) {
      lVar9 = lVar10;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      if (lVar9 != 0) {
        puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112f57b38) + _DAT_113082a18);
        uVar11 = *puVar1;
        uVar12 = puVar1[1];
        func_0x000107c61434(uVar12);
        func_0x000107c5fadc(uVar11,uVar12);
        func_0x000107c6142c(uVar12);
        func_0x000107c5e36c(lVar9);
        func_0x000107c615e8(lVar9);
        func_0x000107c61170(uVar11);
      }
    }
    if (((param_1 & 1) != 0) && (*(long *)(unaff_x20 + _DAT_112f57b50) != 0)) {
      func_0x0001000d224c(&puStack_a8);
      puVar6 = puStack_a8;
      func_0x000107c41810(0x3fd3333333333333,puStack_a8);
      func_0x000107c615e8(puVar6);
    }
    lVar9 = _DAT_112f57b28;
    lVar10 = 0;
    if (*(long *)(unaff_x20 + _DAT_112f57b28) != 0) {
      func_0x000107c4ff34();
      lVar10 = *(long *)(unaff_x20 + lVar9);
    }
    *(undefined8 *)(unaff_x20 + lVar9) = 0;
    func_0x000107c61170();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f57b10);
    if (*(char *)(puVar1 + 4) != '\x01') {
      uVar12 = puVar1[1];
      uVar11 = *puVar1;
      uVar14 = puVar1[3];
      uVar13 = puVar1[2];
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 &
                   **(ulong **)(unaff_x20 + _DAT_112f57b38)) + 0x98))();
      if (lVar10 != 0) {
        puVar6 = &UNK_11063ba28;
        func_0x000107c613fc(&UNK_11063ba28,0x40,7);
        *(long *)(puVar6 + 0x10) = lVar10;
        *(undefined8 *)(puVar6 + 0x30) = uVar14;
        *(undefined8 *)(puVar6 + 0x28) = uVar13;
        *(undefined8 *)(puVar6 + 0x20) = uVar12;
        *(undefined8 *)(puVar6 + 0x18) = uVar11;
        *(long *)(puVar6 + 0x38) = unaff_x20;
        pcStack_88 = FUN_103301094;
        puStack_a8 = puVar2;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f6b44;
        puStack_90 = &UNK_11063ba40;
        ppuVar7 = &puStack_a8;
        puStack_80 = puVar6;
        func_0x000107c60bc4(ppuVar7);
        puVar6 = puStack_80;
        func_0x000107c61174(unaff_x20);
        func_0x000107c61174(lVar10);
        func_0x000107c61574(puVar6);
        func_0x000107c3dcd4(0x3fd0000000000000,0,puVar4);
        func_0x000107c61170(lVar10);
        func_0x000107c60bd0(ppuVar7);
      }
    }
    func_0x000107c61574(puVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1032ffbac);
  (*pcVar3)();
}



/* Entry: 1032ffbac; end: 1032ffc0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ffbac(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_112f57b48) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + _DAT_112f57b48) + _DAT_1130828e8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5a8ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1032ffc10; end: 1032ffca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ffc10(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_112f57aa0);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(param_2);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 1032ffca4; end: 1032ffedb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ffca4(void)

{
  double *pdVar1;
  undefined8 *puVar2;
  char cVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  double *pdVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long unaff_x20;
  double dVar10;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  double dStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_68 [24];
  
  lVar4 = _DAT_112f57b30;
  pdVar1 = (double *)(unaff_x20 + _DAT_112f57ae0);
  dVar10 = *pdVar1;
  cVar3 = *(char *)(pdVar1 + 1);
  puVar5 = (undefined1 *)(unaff_x20 + _DAT_112f57b30);
  puVar8 = auStack_68;
  func_0x000107c61428(puVar5,puVar8,0,0);
  if (*(char *)(unaff_x20 + lVar4) != '\x01') {
    return;
  }
  if (*(char *)(unaff_x20 + _DAT_112f57ad8) == '\x01' && cVar3 == '\x01') {
    return;
  }
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f57b08);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  func_0x000107c5eba8();
  if (puVar5 == (undefined1 *)0x0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    uVar6 = *(undefined8 *)PTR__UIKeyboardFrameEndUserInfoKey_110345d08;
    func_0x000107c5faec();
    uStack_c8 = uVar6;
    puStack_c0 = puVar8;
    func_0x000107c61434(puVar8);
    puVar9 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&dStack_b8,&uStack_c8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (*(long *)(puVar5 + 0x10) == 0) {
LAB_1032ffdd8:
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c61434(puVar5);
      pdVar7 = &dStack_b8;
      func_0x000100df95d0(pdVar7);
      if (((ulong)puVar9 & 1) == 0) {
        func_0x000107c6142c(puVar5);
        goto LAB_1032ffdd8;
      }
      func_0x0001000bb420(*(long *)(puVar5 + 0x38) + (long)pdVar7 * 0x20,&uStack_90);
      func_0x000107c6142c(puVar8);
      puVar8 = puVar5;
    }
    func_0x000107c6142c(puVar8);
    func_0x000107c6142c(puVar5);
    func_0x0001007bbff0(&dStack_b8);
    if (lStack_78 != 0) {
      uVar6 = 0;
      func_0x000100f6e390(0);
      pdVar7 = &dStack_b8;
      func_0x000107c6147c(pdVar7,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar6,6);
      if (((ulong)pdVar7 & 1) != 0) {
        func_0x000107c609b0(dStack_b8,uStack_b0,uStack_a8,uStack_a0);
        dRam0000000112f57b90 = dStack_b8;
        if (cVar3 == '\x01') {
          *(double *)(unaff_x20 + _DAT_112f57ae8) = dStack_b8;
          FUN_1032fffbc();
          FUN_1032ffedc();
          return;
        }
        *pdVar1 = 0.0;
        *(undefined1 *)(pdVar1 + 1) = 1;
        if (dStack_b8 == dVar10) {
          return;
        }
        *(double *)(unaff_x20 + _DAT_112f57ae8) = dStack_b8;
        FUN_1032fffbc();
        FUN_103300280(0);
        return;
      }
      goto LAB_1032ffe6c;
    }
  }
  func_0x00010006e7f4(&uStack_90);
LAB_1032ffe6c:
  if (cVar3 == '\x01') {
    FUN_1032ffedc(0x3fe0000000000000);
  }
  else {
    *pdVar1 = 0.0;
    *(undefined1 *)(pdVar1 + 1) = 1;
  }
  return;
}



/* Entry: 1032ffedc; end: 1032fffbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ffedc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar3 = 1;
  FUN_103300280(param_1,0x3fd0000000000000);
  if ((uVar3 & 1) != 0) {
    lVar4 = unaff_x20 + _DAT_112f57a90;
    func_0x000107c61618();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (lVar5 != 0) {
        puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112f57b38) + _DAT_113082a18);
        uVar6 = *puVar1;
        uVar2 = puVar1[1];
        func_0x000107c61434(uVar2);
        func_0x000107c5fadc(uVar6,uVar2);
        func_0x000107c6142c(uVar2);
        func_0x000107c5e368(param_1,lVar5);
        func_0x000107c615e8(lVar5);
        func_0x000107c61170(uVar6);
      }
    }
    *(undefined1 *)(unaff_x20 + _DAT_112f57ad8) = 1;
  }
  return;
}



/* Entry: 1032fffbc; end: 10330027f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1032fffbc(double param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  double *pdVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar11 = param_1;
  FUN_103300ad4();
  puVar6 = *(ulong **)(unaff_x20 + _DAT_112f57b38);
  dVar7 = dVar11;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0x98))();
  dVar10 = 12.0;
  if (param_5 != 0) {
    uVar3 = param_5;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    func_0x000107c61170();
    if (uVar3 != 0) {
      func_0x000107c515a0(uVar3);
      func_0x000107c61170();
      dVar10 = dVar7 + 12.0;
      param_5 = uVar3;
    }
  }
  dVar8 = param_2;
  dVar12 = param_3;
  dVar9 = param_4;
  func_0x000107c609e0(dVar11,param_2,param_3,param_4);
  dVar7 = 0.5;
  if ((param_5 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    puVar5 = puVar4;
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c3ec60();
    func_0x000107c61170(puVar5);
    func_0x000107c609b0(dVar7,dVar8,dVar12,dVar9);
    lVar2 = _DAT_113082a30;
    dVar8 = 0.0;
    if (*(char *)((long)puVar6 + _DAT_113082a30) == '\x01') {
      if (*(double *)(unaff_x20 + _DAT_112f57af8) <= 0.0) {
        dVar8 = 40.0;
      }
      else {
        dVar8 = *(double *)(unaff_x20 + _DAT_112f57af0) - *(double *)(unaff_x20 + _DAT_112f57af8);
        if (dVar8 < 0.0) {
          dVar8 = 0.0;
        }
        dVar8 = dVar8 + 40.0;
      }
    }
    dVar12 = dVar11;
    func_0x000107c609b0(dVar11,param_2,param_3,param_4);
    dVar12 = ((((dVar7 - dVar10) - param_1) + -48.0 + -58.0 + -24.0) - dVar8) / dVar12;
    if ((*(char *)((long)puVar6 + lVar2) == '\x01') && (param_1 <= 0.0)) {
      pdVar1 = (double *)(unaff_x20 + _DAT_112f57b10);
      if (*(char *)(pdVar1 + 4) != '\x01') {
        param_3 = pdVar1[2];
        param_4 = pdVar1[3];
        dVar11 = *pdVar1;
        param_2 = pdVar1[1];
      }
      func_0x000107c609cc(dVar11,param_2,param_3,param_4);
      if (0.0 < dVar11) {
        dVar7 = dVar11;
        func_0x000107c4c194(puVar4);
        func_0x000107c61180();
        func_0x000107c3ec60();
        func_0x000107c61170(puVar4);
        func_0x000107c609cc(dVar7,param_2,param_3,param_4);
        dVar12 = (dVar7 * 0.92) / dVar11;
      }
    }
    dVar7 = 0.2;
    if (0.2 < dVar12) {
      dVar7 = dVar12;
    }
    if (1.0 < dVar7) {
      dVar7 = 1.0;
    }
  }
  return dVar7;
}



/* Entry: 103300280; end: 1033007b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103300280(double param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  double *pdVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long lVar15;
  long unaff_x20;
  ulong *puVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  
  ppuVar10 = &puStack_d0;
  ppuVar12 = &puStack_d0;
  ppuVar14 = &puStack_d0;
  puVar16 = *(ulong **)(unaff_x20 + _DAT_112f57b38);
  uVar3 = param_5;
  dVar19 = param_1;
  dVar20 = param_2;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar16) + 0x98))();
  if (uVar3 != 0) {
    pdVar1 = (double *)(unaff_x20 + _DAT_112f57b10);
    if (*(char *)(pdVar1 + 4) == '\x01') {
      func_0x000107c438d4(uVar3);
      *pdVar1 = dVar19;
      pdVar1[1] = dVar20;
      pdVar1[2] = param_3;
      pdVar1[3] = param_4;
      *(undefined1 *)(pdVar1 + 4) = 0;
    }
    else {
      dVar19 = *pdVar1;
      dVar20 = pdVar1[1];
      param_3 = pdVar1[2];
      param_4 = pdVar1[3];
    }
    uVar4 = uVar3;
    func_0x000107c5c42c();
    func_0x000107c61180();
    if (uVar4 != 0) {
      uVar5 = uVar3;
      func_0x000107c5e3f8();
      func_0x000107c61180();
      if (uVar5 != 0) {
        dVar17 = 1.0;
        if (param_1 == 1.0) {
          func_0x000107c61170(uVar3);
          func_0x000107c61170(uVar4);
          uVar4 = uVar5;
        }
        else {
          if ((param_5 & 1) != 0) {
            FUN_1033010e0();
          }
          if (((*(char *)((long)puVar16 + _DAT_113082a30) != '\x01') ||
              (dVar17 = *(double *)(unaff_x20 + _DAT_112f57ae8), 0.0 < dVar17)) ||
             (*(char *)(unaff_x20 + _DAT_112f57b08 + 8) != '\x01')) {
            dVar21 = 0.0;
          }
          else {
            dVar21 = 44.0;
          }
          func_0x000107c515a0(uVar5);
          dVar21 = dVar21 + dVar17 + 12.0;
          uVar18 = 0;
          func_0x000107c40718(uVar4);
          uVar6 = uVar3;
          func_0x000107c4aba4(uVar3);
          func_0x000107c61180();
          func_0x000107c407dc();
          func_0x000107c61170(uVar6);
          *(undefined8 *)(unaff_x20 + _DAT_112f57b18) = uVar18;
          uVar6 = uVar3;
          func_0x000107c4aba4();
          func_0x000107c61180();
          uVar7 = uVar6;
          func_0x000107c4c54c();
          func_0x000107c61170(uVar6);
          *(char *)(unaff_x20 + _DAT_112f57b20) = (char)uVar7;
          func_0x000107c609b0(dVar19,dVar20,param_3,param_4);
          dVar20 = param_1 * dVar19;
          func_0x000107c3ec60(uVar4);
          func_0x000107c609cc();
          puVar8 = &UNK_11063ba78;
          func_0x000107c613fc(&UNK_11063ba78,0x30,7);
          *(ulong *)(puVar8 + 0x10) = uVar3;
          *(double *)(puVar8 + 0x18) = param_1;
          *(double *)(puVar8 + 0x20) = dVar19 * 0.5;
          *(double *)(puVar8 + 0x28) = dVar21 + dVar20 * 0.5;
          puVar9 = PTR__OBJC_CLASS___UIView_1126aec20;
          func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
          puVar13 = PTR___NSConcreteStackBlock_11034bd00;
          if (0.0 < param_2) {
            pcStack_b0 = FUN_1033010c8;
            puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_c8 = 0x42000000;
            puStack_c0 = &UNK_1000f6b44;
            puStack_b8 = &UNK_11063bae0;
            puStack_a8 = puVar8;
            func_0x000107c60bc4(&puStack_d0);
            puVar11 = puStack_a8;
            func_0x000107c61174(uVar3);
            func_0x000107c6157c(puVar8);
            func_0x000107c61574(puVar11);
            func_0x000107c3dcd4(param_2,0,puVar9);
            func_0x000107c60bd0(ppuVar10);
            dVar19 = 0.0;
            if (0.0 < param_2 + -0.1) {
              dVar19 = param_2 + -0.1;
            }
            uVar18 = NEON_fminnm(param_2,0x3fb999999999999a);
            puVar11 = &UNK_11063bb18;
            func_0x000107c613fc(&UNK_11063bb18,0x18,7);
            func_0x000107c61614(puVar11 + 0x10);
            pcStack_b0 = (code *)0x1033010d8;
            puStack_d0 = puVar13;
            uStack_c8 = 0x42000000;
            puStack_c0 = &UNK_1000f6b44;
            puStack_b8 = &UNK_11063bb30;
            puStack_a8 = puVar11;
            func_0x000107c60bc4(&puStack_d0);
            func_0x000107c61574(puStack_a8);
            func_0x000107c3dcd4(dVar19,uVar18,puVar9);
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar4);
            func_0x000107c60bd0(ppuVar12);
            func_0x000107c61574(puVar8);
            return;
          }
          puVar13 = &UNK_11063baa0;
          func_0x000107c613fc(&UNK_11063baa0,0x20,7);
          *(code **)(puVar13 + 0x10) = FUN_1033010c8;
          *(undefined **)(puVar13 + 0x18) = puVar8;
          pcStack_b0 = (code *)0x1033011e4;
          puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_c8 = 0x42000000;
          puStack_c0 = &UNK_10006eb60;
          puStack_b8 = &UNK_11063bab8;
          puStack_a8 = puVar13;
          func_0x000107c60bc4(&puStack_d0);
          puVar11 = puStack_a8;
          func_0x000107c61174(uVar3);
          func_0x000107c6157c(puVar8);
          func_0x000107c6157c(puVar13);
          func_0x000107c61574(puVar11);
          func_0x000107c4e5fc(puVar9);
          func_0x000107c60bd0(ppuVar14);
          puVar9 = puVar13;
          func_0x000107c61544(puVar13,"",0x70,0x1ed,0x2c,1);
          func_0x000107c61574(puVar13);
          if (((ulong)puVar9 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1033007b4);
            (*pcVar2)();
          }
          lVar15 = *(long *)(unaff_x20 + _DAT_112f57b28);
          if (lVar15 == 0) {
            func_0x000107c61578(puVar8,2);
          }
          else {
            func_0x000107c61174();
            func_0x000107c526c0(0x3ff0000000000000);
            func_0x000107c61578(puVar8,2);
            func_0x000107c61170(lVar15);
          }
          func_0x000107c61170(uVar5);
          func_0x000107c61170(uVar3);
        }
        func_0x000107c61170(uVar4);
        return;
      }
      func_0x000107c61170(uVar4);
    }
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 1033007b4; end: 1033007bf; -[_TtC28SCInLensCreationTrendingList29ImagineLensActiveStateManager keyboardWillShow:] */

void FUN_1033007b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ebac();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eba0(puVar2,param_3);
  func_0x000107c61174(param_1);
  FUN_1032ffca4(puVar2);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 1033007c0; end: 1033008a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033007c0(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = _DAT_112f57b30;
  func_0x000107c61428(unaff_x20 + _DAT_112f57b30,auStack_38,0,0);
  if ((*(char *)(unaff_x20 + lVar2) == '\x01') &&
     (*(char *)(*(long *)(unaff_x20 + _DAT_112f57b38) + _DAT_113082a30) == '\x01')) {
    if (*(char *)(unaff_x20 + _DAT_112f57ad8) == '\x01') {
      *(undefined1 *)(unaff_x20 + _DAT_112f57ad8) = 0;
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f57ae0);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined8 *)(unaff_x20 + _DAT_112f57ae8) = 0;
      *(undefined8 *)(unaff_x20 + _DAT_112f57af0) = 0;
      *(undefined8 *)(unaff_x20 + _DAT_112f57af8) = 0;
      if (*(char *)(unaff_x20 + _DAT_112f57b08 + 8) == '\x01') {
        FUN_1032fffbc(0);
        FUN_103300280(0);
      }
    }
  }
  return;
}



/* Entry: 1033008a8; end: 1033008b3; -[_TtC28SCInLensCreationTrendingList29ImagineLensActiveStateManager keyboardWillHide:] */

void FUN_1033008a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ebac();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eba0(puVar2,param_3);
  func_0x000107c61174(param_1);
  FUN_1033007c0(puVar2);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 1033008b4; end: 10330095b;  */

void FUN_1033008b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ebac();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eba0(puVar2,param_3);
  func_0x000107c61174(param_1);
  (*param_4)(puVar2);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 10330095c; end: 103300acb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10330095c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  
  dVar5 = param_1;
  FUN_103300ad4();
  uVar6 = param_2;
  uVar7 = param_3;
  uVar8 = param_4;
  func_0x000107c609e0();
  dVar3 = 0.5;
  if ((param_5 & 1) == 0) {
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + _DAT_112f57b38))
                + 0x98))();
    dVar9 = 12.0;
    dVar4 = dVar3;
    if (param_5 != 0) {
      uVar1 = param_5;
      func_0x000107c5e3f8();
      func_0x000107c61180();
      func_0x000107c61170(param_5);
      dVar4 = dVar3;
      if (uVar1 != 0) {
        func_0x000107c515a0(uVar1);
        func_0x000107c61170(uVar1);
        dVar4 = 12.0;
        dVar9 = dVar3 + 12.0;
      }
    }
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c3ec60();
    func_0x000107c61170(puVar2);
    func_0x000107c609b0(dVar4,uVar6,uVar7,uVar8);
    func_0x000107c609b0(dVar5,param_2,param_3,param_4);
    dVar5 = (((dVar4 - dVar9) - param_1) + -8.0) / dVar5;
    dVar3 = 0.2;
    if (0.2 < dVar5) {
      dVar3 = dVar5;
    }
    if (1.0 < dVar3) {
      dVar3 = 1.0;
    }
  }
  return dVar3;
}



/* Entry: 103300acc; end: 103300ad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103300acc(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f57b48);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + _DAT_1130828e8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5a8ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 103300ad4; end: 103300c87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103300ad4(ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long unaff_x20;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar3 = *(ulong **)(unaff_x20 + _DAT_112f57b38);
  puVar1 = (undefined8 *)((long)puVar3 + _DAT_113082a20);
  uVar10 = *puVar1;
  uVar9 = puVar1[1];
  uVar8 = puVar1[2];
  uVar7 = puVar1[3];
  uVar11 = uVar10;
  uVar4 = uVar9;
  uVar5 = uVar8;
  uVar6 = uVar7;
  func_0x000107c609e0(uVar10,uVar9,uVar8,uVar7);
  if (((int)param_1 != 0) &&
     ((**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar3) + 0x90))(), param_1 != 0)) {
    func_0x000107c4abec();
    func_0x000107c61170();
    uVar7 = uVar6;
    uVar8 = uVar5;
    uVar9 = uVar4;
    uVar10 = uVar11;
  }
  uVar11 = uVar10;
  func_0x000107c609e0(uVar10,uVar9,uVar8,uVar7);
  if (((int)param_1 != 0) && (*(char *)((long)puVar3 + _DAT_113082a30) == '\x01')) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f57b10);
    if (*(char *)(puVar1 + 4) != '\x01') {
      uVar11 = *puVar1;
      func_0x000107c609e0(uVar11,puVar1[1],puVar1[2],puVar1[3]);
      if ((int)param_1 == 0) {
        return uVar11;
      }
    }
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar3) + 0x98))();
    if (param_1 != 0) {
      uVar2 = param_1;
      func_0x000107c438d4();
      func_0x000107c609e0();
      if ((uVar2 & 1) == 0) {
        func_0x000107c438d4(param_1);
        func_0x000107c61170(param_1);
        uVar10 = uVar11;
      }
      else {
        func_0x000107c61170(param_1);
      }
    }
  }
  return uVar10;
}



/* Entry: 103300c88; end: 103300d3b;  */

void FUN_103300c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [48];
  
  func_0x000107c6088c(auStack_60,param_1,param_1);
  func_0x000107c5a03c(param_4,param_5,auStack_60);
  func_0x000107c532b4(param_2,param_3,param_4);
  uVar1 = param_4;
  func_0x000107c4aba4(param_4);
  func_0x000107c61180();
  func_0x000107c539d4(0x403a000000000000);
  func_0x000107c61170(uVar1);
  func_0x000107c4aba4(param_4);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 103300d3c; end: 103300dbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103300d3c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112f57b28);
    if (lVar1 != 0) {
      func_0x000107c61174(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c526c0(0x3ff0000000000000,lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 103300dbc; end: 103300e93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103300dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_80 = 0x3ff0000000000000;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x000107c5a03c(param_5,param_6,&uStack_80);
  func_0x000107c54b80(param_1,param_2,param_3,param_4,param_5);
  uVar1 = param_5;
  func_0x000107c4aba4(param_5);
  func_0x000107c61180();
  func_0x000107c539d4(*(undefined8 *)(param_6 + _DAT_112f57b18));
  func_0x000107c61170(uVar1);
  func_0x000107c4aba4(param_5);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(param_5);
  return;
}



/* Entry: 103300e94; end: 103300f17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103300e94(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_112f57a98));
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c41570();
  func_0x000107c61180();
  func_0x000107c4ffa0();
  func_0x000107c61170(puVar1);
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103300f18; end: 103300fab; -[_TtC28SCInLensCreationTrendingList29ImagineLensActiveStateManager dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103300f18(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f57a98);
  func_0x000107c61174();
  func_0x000107c42194(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c41570();
  func_0x000107c61180();
  func_0x000107c4ffa0();
  func_0x000107c61170(puVar2);
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103300fac; end: 103301067; -[_TtC28SCInLensCreationTrendingList29ImagineLensActiveStateManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103300fc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103300fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103301018: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103300fec) */
/* WARNING: Removing unreachable block (ram,0x000103300fcc) */
/* WARNING: Removing unreachable block (ram,0x00010330101c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103300fac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f57b38));
  return;
}



/* Entry: 103301068; end: 103301093; -[_TtC28SCInLensCreationTrendingList29ImagineLensActiveStateManager init] */

void FUN_103301068(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCInLensCreationTrendingList.ImagineLensActiveStateManager",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103301094);
  (*pcVar1)();
}



/* Entry: 103301094; end: 1033010a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103301094(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar2 = *(long *)(unaff_x20 + 0x38);
  uStack_80 = 0x3ff0000000000000;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x000107c5a03c(uVar1,lVar2,&uStack_80);
  func_0x000107c54b80(uVar3,uVar4,uVar5,uVar6,uVar1);
  uVar3 = uVar1;
  func_0x000107c4aba4(uVar1);
  func_0x000107c61180();
  func_0x000107c539d4(*(undefined8 *)(lVar2 + _DAT_112f57b18));
  func_0x000107c61170(uVar3);
  func_0x000107c4aba4(uVar1);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1033010a8; end: 1033010c7;  */

void FUN_1033010a8(void)

{
  func_0x000107c61168(&PTR_PTR_1128cc930);
  return;
}



/* Entry: 1033010c8; end: 1033010df;  */

void FUN_1033010c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [48];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c6088c(auStack_60,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000107c5a03c(uVar1,param_2,auStack_60);
  func_0x000107c532b4(uVar2,uVar3,uVar1);
  uVar2 = uVar1;
  func_0x000107c4aba4(uVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x403a000000000000);
  func_0x000107c61170(uVar2);
  func_0x000107c4aba4(uVar1);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1033010e0; end: 1033011a7;  */

/* WARNING: Possible PIC construction at 0x00010330118c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103301190) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033010e0(long param_1)

{
  long unaff_x20;
  
  if (((*(char *)((long)*(ulong **)(unaff_x20 + _DAT_112f57b38) + _DAT_113082a28) == '\x01') &&
      (*(long *)(unaff_x20 + _DAT_112f57b28) == 0)) &&
     ((**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 &
                   **(ulong **)(unaff_x20 + _DAT_112f57b38)) + 0x98))(), param_1 != 0)) {
    FUN_10330186c(0);
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c526c0(0);
    FUN_1033011e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1033011a8; end: 1033011e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033011a8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112f57aa0);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1033011e8; end: 1033013e7;  */

/* WARNING: Possible PIC construction at 0x000103301294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033012e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010330133c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103301390: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103301340) */
/* WARNING: Removing unreachable block (ram,0x0001033012ec) */
/* WARNING: Removing unreachable block (ram,0x000103301298) */
/* WARNING: Removing unreachable block (ram,0x000103301394) */

void FUN_1033011e8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  func_0x000107c3d89c();
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar1 + 0x18) = 9;
  *(undefined8 *)(puVar1 + 0x10) = 4;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c5cbe4(param_1);
  func_0x000107c61180();
  func_0x000107c40280(unaff_x20);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 1033013e8; end: 10330151b;  */

undefined * FUN_1033013e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c61168(PTR__OBJC_CLASS___UIButton_1126aec48);
  func_0x000107c3ee98();
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5a050();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar3 = puVar2;
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(puVar1,param_2,puVar3);
  func_0x000107c61170(puVar3);
  puVar3 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x4050000000000000);
  func_0x000107c61170(puVar3);
  puVar3 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c52e0c(0x4024000000000000);
  func_0x000107c61170(puVar3);
  puVar3 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c5e2ac(puVar2);
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c52df8(puVar3,param_2,puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 10330151c; end: 103301713;  */

/* WARNING: Possible PIC construction at 0x0001033015e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103301614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103301660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033016b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103301664) */
/* WARNING: Removing unreachable block (ram,0x000103301618) */
/* WARNING: Removing unreachable block (ram,0x0001033015e4) */
/* WARNING: Removing unreachable block (ram,0x0001033016bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330151c(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107c5a050();
  func_0x000107c5a378();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f57b98);
  func_0x000107c3d89c();
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar1 + 0x18) = 9;
  *(undefined8 *)(puVar1 + 0x10) = 4;
  func_0x000107c5e308(uVar2);
  func_0x000107c61180();
  func_0x000107c40290(0x4060000000000000);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 103301714; end: 1033017b7; -[_TtC28SCInLensCreationTrendingList33ImagineLensActiveStateOverlayView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103301714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  lVar2 = param_5;
  func_0x000107c614f0();
  lVar1 = _DAT_112f57b98;
  lVar3 = lVar2;
  FUN_1033013e8();
  *(long *)(param_5 + lVar1) = lVar3;
  lStack_60 = param_5;
  lStack_58 = lVar2;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_60,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_10330151c();
  func_0x000107c61170(plVar4);
  return (undefined1 *)plVar4;
}



/* Entry: 1033017b8; end: 103301827; -[_TtC28SCInLensCreationTrendingList33ImagineLensActiveStateOverlayView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033017b8(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  lVar1 = _DAT_112f57b98;
  lVar3 = param_1;
  FUN_1033013e8();
  *(long *)(param_1 + lVar1) = lVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCInLensCreationTrendingList/ImagineLensActiveStateOverlayView.swift",0x44,2,
                      0x22,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103301828);
  (*pcVar2)();
}



/* Entry: 103301828; end: 10330185b;  */

void FUN_103301828(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10330185c; end: 10330186b; -[_TtC28SCInLensCreationTrendingList33ImagineLensActiveStateOverlayView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330185c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f57b98));
  return;
}



/* Entry: 10330186c; end: 10330188b;  */

void FUN_10330186c(void)

{
  func_0x000107c61168(&PTR_PTR_1128ccac0);
  return;
}



/* Entry: 10330188c; end: 1033018ef;  */

undefined * FUN_10330188c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x68);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
    *(undefined **)(unaff_x20 + 0x68) = puVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar1);
  return puVar2;
}



/* Entry: 1033018f0; end: 10330198b;  */

void FUN_1033018f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  return;
}



/* Entry: 10330198c; end: 103301a7b;  */

void FUN_10330198c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  char *pcVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5de74();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = &UNK_11063bb90;
    func_0x000107c613fc(&UNK_11063bb90,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    pcStack_40 = FUN_103301c40;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_10126562c;
    puStack_48 = &UNK_11063bba8;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    pcVar4 = "begin()";
    func_0x0001000c10c0("begin()");
    func_0x000107c61180();
    func_0x000107c5dc64(lVar1);
    func_0x000107c615e8(pcVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103301a7c; end: 103301c3f;  */

void FUN_103301a7c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    puVar1 = *(undefined **)(param_3 + 0x10);
    func_0x000107c4b1dc();
    func_0x000107c61180();
    if (puVar1 == (undefined *)0x0) {
      func_0x000107c61574(param_3);
    }
    else {
      if ((param_1 == 0) || (*(long *)(param_3 + 0x70) != 0)) {
        func_0x000107c61574(param_3);
      }
      else {
        func_0x000107c61174();
        lVar2 = param_1;
        FUN_103301c48();
        puVar3 = PTR_PTR_1126b0820;
        func_0x000107c610f8(PTR_PTR_1126b0820);
        func_0x000107c453e4();
        puVar4 = puVar3;
        func_0x000107c5e650();
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar1);
        puVar3 = PTR_PTR_1126bb828;
        func_0x000107c610f8(PTR_PTR_1126bb828);
        func_0x000107c48ee4();
        puVar1 = puVar4;
        func_0x000107c5e4f0(puVar4);
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar3);
        if (lVar2 != 0) {
          lVar5 = lVar2;
          func_0x000107c61174(lVar2);
          puVar3 = puVar1;
          func_0x000107c3ecc8(puVar1);
          func_0x000107c61180();
          FUN_1032faa10();
          func_0x000107c61170(lVar5);
          func_0x000107c61170(puVar3);
          func_0x000107c61174(lVar5);
          FUN_1032fa688(0);
          func_0x000107c61170(lVar5);
        }
        uVar6 = *(undefined8 *)(param_3 + 0x70);
        *(long *)(param_3 + 0x70) = lVar2;
        func_0x000107c61174(lVar2);
        func_0x000107c61170(uVar6);
        FUN_103302220();
        func_0x000107c61574(param_3);
        func_0x000107c61170(param_1);
        func_0x000107c61170(lVar2);
      }
      func_0x000107c61170(puVar1);
    }
  }
  return;
}



/* Entry: 103301c40; end: 103301c47;  */

void FUN_103301c40(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    puVar2 = *(undefined **)(lVar1 + 0x10);
    func_0x000107c4b1dc();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      func_0x000107c61574(lVar1);
    }
    else {
      if ((param_1 == 0) || (*(long *)(lVar1 + 0x70) != 0)) {
        func_0x000107c61574(lVar1);
      }
      else {
        func_0x000107c61174();
        lVar3 = param_1;
        FUN_103301c48();
        puVar4 = PTR_PTR_1126b0820;
        func_0x000107c610f8(PTR_PTR_1126b0820);
        func_0x000107c453e4();
        puVar5 = puVar4;
        func_0x000107c5e650();
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar2);
        puVar4 = PTR_PTR_1126bb828;
        func_0x000107c610f8(PTR_PTR_1126bb828);
        func_0x000107c48ee4();
        puVar2 = puVar5;
        func_0x000107c5e4f0(puVar5);
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar4);
        if (lVar3 != 0) {
          lVar6 = lVar3;
          func_0x000107c61174(lVar3);
          puVar4 = puVar2;
          func_0x000107c3ecc8(puVar2);
          func_0x000107c61180();
          FUN_1032faa10();
          func_0x000107c61170(lVar6);
          func_0x000107c61170(puVar4);
          func_0x000107c61174(lVar6);
          FUN_1032fa688(0);
          func_0x000107c61170(lVar6);
        }
        uVar7 = *(undefined8 *)(lVar1 + 0x70);
        *(long *)(lVar1 + 0x70) = lVar3;
        func_0x000107c61174(lVar3);
        func_0x000107c61170(uVar7);
        FUN_103302220();
        func_0x000107c61574(lVar1);
        func_0x000107c61170(param_1);
        func_0x000107c61170(lVar3);
      }
      func_0x000107c61170(puVar2);
    }
  }
  return;
}



/* Entry: 103301c48; end: 10330221f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103301c48(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 auStack_90 [24];
  long lStack_78;
  long lStack_70;
  
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x28) + _DAT_113083898);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x30) + _DAT_113083868);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = *(long *)(unaff_x20 + 0x38);
      func_0x000107c44588();
      func_0x000107c61180();
      lVar6 = lVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar6 == 0) {
        func_0x000107c615e8(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar7 = *(long *)(unaff_x20 + 0x18);
        func_0x000107c5dbd4();
        func_0x000107c61180();
        lVar5 = lVar7;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar7);
        if (lVar5 == 0) {
          func_0x000107c615e8(lVar6);
          func_0x000107c615e8(lVar4);
          func_0x000107c615e8(lVar3);
          return 0;
        }
        lVar7 = lVar5;
        func_0x000107c509b4();
        func_0x000107c61180();
        func_0x000107c615e8(lVar5);
        if (lVar7 == 0) {
          func_0x000107c615e8(lVar6);
          func_0x000107c615e8(lVar4);
        }
        else {
          lVar20 = *(long *)(unaff_x20 + 0x10);
          lVar5 = lVar20;
          func_0x000107c42418();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar8 = lVar5;
            func_0x000107c5faec();
            func_0x000107c61170(lVar5);
            lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + _DAT_113093a98);
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar5 == 0) {
              func_0x000107c615e8(lVar3);
              func_0x000107c615e8(lVar4);
              func_0x000107c615e8(lVar6);
              func_0x000107c615e8(lVar7);
              func_0x000107c6142c(param_2);
              return 0;
            }
            uVar9 = 0xd000000000000021;
            func_0x000107c5fadc(0xd000000000000021,0x800000010f13d4d0);
            lVar10 = lVar5;
            func_0x000107c4e60c();
            func_0x000107c61180();
            func_0x000107c615e8(lVar5);
            func_0x000107c61170(uVar9);
            lVar5 = *(long *)(unaff_x20 + 0x50);
            func_0x000107c3fa08();
            func_0x000107c61180();
            if (lVar5 != 0) {
              lVar11 = lVar5;
              func_0x000107c5c734();
              func_0x000107c61180();
              func_0x000107c61170(lVar5);
              if (lVar11 == 0) {
                func_0x000107c615e8(lVar3);
                func_0x000107c615e8(lVar4);
                func_0x000107c615e8(lVar6);
                func_0x000107c615e8(lVar7);
                func_0x000107c615e8(lVar10);
                func_0x000107c6142c(param_2);
                return 0;
              }
              iVar2 = 2;
              func_0x000100029b9c(2,0x1a,0,0);
              if (iVar2 != 0) {
                uVar9 = 0xd000000000000027;
                func_0x000107c5fadc(0xd000000000000027,0x800000010f13d570);
                func_0x000107c3ebd4();
                func_0x000107c61170(uVar9);
              }
              func_0x000107c5ba40();
              uVar18 = *(undefined8 *)(unaff_x20 + 0x40);
              uVar9 = uVar18;
              func_0x000107c5c848();
              func_0x000107c61180();
              uVar12 = uVar18;
              func_0x000107c5c884();
              func_0x000107c61180();
              uVar13 = uVar18;
              func_0x000107c5dfc0();
              func_0x000107c61180();
              lVar14 = 0;
              FUN_10330464c();
              lVar15 = lVar14;
              func_0x000107c610f8();
              lVar5 = _DAT_112f57cc8;
              func_0x000107c61614(lVar15 + _DAT_112f57cc8,0);
              *(undefined8 *)(lVar15 + _DAT_112f57cd0) = 0;
              func_0x000107c61604(lVar15 + lVar5,param_1);
              plVar16 = &lStack_78;
              lStack_78 = lVar15;
              lStack_70 = lVar14;
              func_0x000107c61154(plVar16,PTR_s_init_1125d9248);
              uVar21 = *(undefined8 *)(*(long *)(unaff_x20 + 0x58) + _DAT_113091b70);
              func_0x000107c615f0(uVar21);
              uVar17 = uVar18;
              func_0x000107c3d19c();
              func_0x000107c61180();
              func_0x000107c3fb74();
              func_0x000107c61180();
              lVar5 = lVar20;
              func_0x000107c4a064();
              uVar19 = 0;
              if ((int)lVar5 != 0) {
                uVar19 = *(undefined8 *)(unaff_x20 + 0x60);
                func_0x000107c61174(uVar19);
              }
              func_0x000107c4e730();
              func_0x000107c40658();
              func_0x000107c61180();
              FUN_1032fcea4();
              func_0x000107c610f8();
              lVar5 = lVar7;
              FUN_103302670(lVar7,lVar3,lVar4,lVar10,lVar6,uVar9,uVar12,uVar13,0,plVar16,lVar8,
                            param_2,0);
              func_0x000107c615e8(lVar11);
              func_0x000107c615e8(lVar7);
              func_0x000107c615e8(lVar3);
              func_0x000107c615e8(lVar4);
              func_0x000107c615e8(lVar10);
              func_0x000107c615e8(lVar6);
              func_0x000107c61170(uVar9);
              func_0x000107c61170(uVar12);
              func_0x000107c61170(uVar13);
              func_0x000107c61170(plVar16);
              func_0x000107c615e8(uVar21);
              func_0x000107c61170(uVar17);
              func_0x000107c61170(uVar18);
              func_0x000107c61170(lVar20);
              func_0x000107c61170(uVar19);
              lVar3 = lVar5 + _DAT_112f578b8;
              func_0x000107c61428(lVar3,auStack_90,1,0);
              *(undefined ***)(lVar3 + 8) = &PTR_DAT_11063bbe8;
              func_0x000107c61604(lVar3);
              return lVar5;
            }
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103302220);
            (*pcVar1)();
          }
          func_0x000107c615e8(lVar3);
          func_0x000107c615e8(lVar4);
          func_0x000107c615e8(lVar6);
          lVar3 = lVar7;
        }
      }
    }
    func_0x000107c615e8(lVar3);
  }
  return 0;
}



/* Entry: 103302220; end: 10330235b;  */

void FUN_103302220(void)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5bcdc();
  func_0x000107c61180();
  if (lVar1 != 0) {
    pcVar2 = "startObservingAIModeState()";
    func_0x0001000c10c0("startObservingAIModeState()");
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x000107c4da88(lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(pcVar2);
    puVar4 = &UNK_11063bb90;
    func_0x000107c613fc(&UNK_11063bb90,0x18,7);
    func_0x000107c61644(puVar4 + 0x10);
    pcStack_40 = FUN_103302668;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    uStack_50 = 0x10330248c;
    puStack_48 = &UNK_11063bc00;
    puStack_38 = puVar4;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    lVar1 = lVar3;
    func_0x000107c5c320(lVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar3);
    FUN_10330188c();
    func_0x000107c3e924(lVar1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 10330235c; end: 103302377;  */

void FUN_10330235c(long param_1,long param_2)

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



/* Entry: 103302378; end: 1033023d7;  */

undefined8 FUN_103302378(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  FUN_10330188c();
  func_0x000107c42194();
  func_0x000107c61170(param_1);
  lVar1 = *(long *)(unaff_x20 + 0x70);
  if (lVar1 != 0) {
    func_0x000107c61174();
    FUN_1032fa688(1);
    func_0x000107c61170(lVar1);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
    *(undefined8 *)(unaff_x20 + 0x70) = 0;
    func_0x000107c61170(uVar2);
  }
  return 0;
}



/* Entry: 1033023d8; end: 1033024d7;  */

void FUN_1033023d8(ulong param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 0x70);
    if (lVar1 == 0) {
      func_0x000107c61574();
    }
    else {
      func_0x000107c61174(lVar1);
      func_0x000107c4f2fc();
      if (param_1 < 5) {
        FUN_1032fa688((1L << (param_1 & 0x3f) & 0x16U) != 0);
      }
      func_0x000107c61574(param_2);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 1033024d8; end: 103302573;  */

void FUN_1033024d8(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 103302574; end: 103302647;  */

void FUN_103302574(void)

{
  FUN_10330198c();
  return;
}



/* Entry: 103302648; end: 103302667;  */

void FUN_103302648(void)

{
  func_0x000107c61168(&PTR_PTR_112f57c08);
  return;
}



/* Entry: 103302668; end: 10330266f;  */

void FUN_103302668(ulong param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x70);
    if (lVar2 == 0) {
      func_0x000107c61574();
    }
    else {
      func_0x000107c61174(lVar2);
      func_0x000107c4f2fc();
      if (param_1 < 5) {
        FUN_1032fa688((1L << (param_1 & 0x3f) & 0x16U) != 0);
      }
      func_0x000107c61574(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 103302670; end: 103303243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103302670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,long param_7,long param_8,long param_9,
                    undefined8 param_10,undefined8 param_11,undefined8 param_12,uint param_13,
                    undefined4 param_14,undefined8 param_15,long param_16,undefined8 param_17,
                    undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21,
                    byte param_22,undefined4 param_23,undefined8 param_24,undefined4 param_25,
                    undefined4 param_26,undefined8 param_27,long param_28)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar4 = param_28;
  func_0x000107c614f0();
  *(undefined8 *)(param_28 + _DAT_112f578e8) = 0;
  lVar13 = _DAT_112f578c8;
  *(undefined8 *)(param_28 + _DAT_112f578c8) = 0;
  *(undefined8 *)(param_28 + _DAT_112f578f0) = 0;
  *(undefined8 *)(param_28 + _DAT_112f578f8) = 0;
  *(undefined8 *)(param_28 + _DAT_112f57900) = 0;
  *(undefined8 *)(param_28 + _DAT_112f57908) = 0;
  *(undefined8 *)(param_28 + _DAT_112f57948) = 0;
  *(undefined8 *)(param_28 + _DAT_112f57950) = 0;
  lVar16 = _DAT_112f57910;
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_28 + lVar16) = puVar5;
  *(undefined8 *)(param_28 + _DAT_112f578c0) = 0;
  lVar3 = _DAT_112f57990;
  puVar5 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_28 + lVar3) = puVar5;
  lVar2 = _DAT_112f578d8;
  puVar5 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_28 + lVar2) = puVar5;
  lVar16 = param_28 + _DAT_112f579a8;
  func_0x000107c61614(lVar16,0);
  lVar10 = param_28 + _DAT_112f578b8;
  *(undefined8 *)(lVar10 + 8) = 0;
  func_0x000107c61614(lVar10,0);
  *(undefined8 *)(param_28 + _DAT_112f579a0) = param_2;
  *(undefined8 *)(param_28 + _DAT_112f579b0) = param_3;
  puVar1 = (undefined8 *)(param_28 + _DAT_112f579b8);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  *(undefined8 *)(param_28 + _DAT_112f578d0) = param_10;
  *(undefined8 *)(param_28 + _DAT_112f57940) = param_1;
  *(undefined8 *)(param_28 + _DAT_112f57998) = param_20;
  puVar5 = PTR_PTR_1126afe50;
  func_0x000107c610f8();
  func_0x000107c61174(param_20);
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61434(param_12);
  func_0x000107c61174(param_10);
  func_0x000107c615f0(param_1);
  func_0x000107c4842c();
  if ((param_13 & 0x100) != 0) {
    func_0x0001032f6ed4(0);
    func_0x000107c614e8();
    func_0x000107c537e0(puVar5);
  }
  puVar6 = PTR_PTR_1126ae728;
  func_0x000107c61168();
  func_0x000107c3edf4();
  func_0x000107c61180();
  uVar7 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef1b1f0);
  puVar8 = puVar6;
  func_0x000107c545b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar7);
  puVar9 = puVar8;
  func_0x000107c57f3c();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  uVar7 = 0x646e657254434c49;
  func_0x000107c5fadc(0x646e657254434c49,0xef7473694c676e69);
  func_0x000107c4c1b4();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  puVar6 = PTR_PTR_1126a6178;
  func_0x000107c610f8();
  func_0x000107c615f0(param_2);
  func_0x000107c61174();
  func_0x000107c615f0(param_5);
  func_0x000107c5fadc(param_11,param_12);
  func_0x000107c6142c(param_12);
  func_0x000107c47a08();
  func_0x000107c61170(puVar5);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_11);
  lVar10 = _DAT_112f57938;
  *(undefined **)(param_28 + _DAT_112f57938) = puVar6;
  uVar7 = *(undefined8 *)(param_28 + lVar3);
  func_0x000107c61174(puVar6);
  func_0x000107c5cb24(uVar7);
  func_0x000107c61180();
  func_0x000107c52214(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(param_28 + lVar10);
  uVar15 = *(undefined8 *)(param_28 + lVar2);
  func_0x000107c61174(uVar7);
  func_0x000107c5cb24(uVar15);
  func_0x000107c61180();
  func_0x000107c58cb4(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar15);
  *(undefined8 *)(param_28 + _DAT_112f57918) = param_6;
  *(long *)(param_28 + _DAT_112f57930) = param_9;
  uVar7 = *(undefined8 *)(param_28 + lVar13);
  *(undefined8 *)(param_28 + lVar13) = 0;
  func_0x000107c61174();
  lVar10 = param_9;
  func_0x000107c61174();
  func_0x000107c61170(uVar7);
  *(long *)(param_28 + _DAT_112f57920) = param_7;
  *(long *)(param_28 + _DAT_112f57928) = param_8;
  *(byte *)(param_28 + _DAT_112f57958) = (byte)param_13 & 1;
  *(byte *)(param_28 + _DAT_112f57960) = param_13._2_1_ & 1;
  *(byte *)(param_28 + _DAT_112f57968) = param_13._3_1_ & 1;
  *(long *)(param_28 + _DAT_112f57978) = param_16;
  *(undefined8 *)(param_28 + _DAT_112f57980) = param_17;
  *(undefined8 *)(param_28 + _DAT_112f578e0) = param_18;
  *(undefined8 *)(param_28 + _DAT_112f57988) = param_19;
  func_0x000107c61604(lVar16,param_21);
  *(byte *)(param_28 + _DAT_112f579c0) = param_22 & 1;
  *(undefined8 *)(param_28 + _DAT_112f579c8) = param_24;
  *(byte *)(param_28 + _DAT_112f579d0) = (byte)param_25 & 1;
  *(byte *)(param_28 + _DAT_112f579d8) = param_25._1_1_ & 1;
  *(byte *)(param_28 + _DAT_112f579e0) = param_25._2_1_ & 1;
  *(undefined8 *)(param_28 + _DAT_112f579e8) = param_27;
  *(undefined8 *)(param_28 + _DAT_112f57970) = param_15;
  puVar6 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_88 = param_28;
  lStack_80 = lVar4;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_27);
  plVar11 = &lStack_88;
  func_0x000107c61154(plVar11,puVar6,0,0);
  uVar7 = *(undefined8 *)((long)plVar11 + _DAT_112f57938);
  puVar6 = &UNK_11063bc38;
  func_0x000107c613fc(&UNK_11063bc38,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,plVar11);
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_98 = FUN_103303244;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  pcStack_a8 = FUN_1032f7c54;
  puStack_a0 = &UNK_11063bc50;
  ppuVar12 = &puStack_b8;
  puStack_90 = puVar6;
  func_0x000107c60bc4();
  puVar6 = puStack_90;
  func_0x000107c61174();
  func_0x000107c61574(puVar6);
  func_0x000107c533e0(uVar7);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c61170(uVar7);
  FUN_1032f7cb4();
  lVar16 = param_7;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar16 == 0) {
    lVar16 = 0;
  }
  else {
    lVar13 = lVar16;
    func_0x000107c5ae88();
    func_0x000107c61180();
    func_0x000107c615e8(lVar16);
    puVar6 = &UNK_11063bc38;
    func_0x000107c613fc(&UNK_11063bc38,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,plVar11);
    pcStack_98 = (code *)0x10330326c;
    puStack_b8 = puVar8;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)&UNK_10101bff4;
    puStack_a0 = &UNK_11063bd40;
    ppuVar12 = &puStack_b8;
    puStack_90 = puVar6;
    func_0x000107c60bc4(ppuVar12);
    func_0x000107c61574(puStack_90);
    lVar16 = lVar13;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61170(lVar13);
  }
  uVar7 = *(undefined8 *)((long)plVar11 + _DAT_112f578f0);
  *(long *)((long)plVar11 + _DAT_112f578f0) = lVar16;
  func_0x000107c61170(uVar7);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_8 == 0) {
    lVar16 = 0;
  }
  else {
    lVar13 = param_8;
    func_0x000107c40dec();
    func_0x000107c61180();
    func_0x000107c615e8(param_8);
    puVar6 = &UNK_11063bc38;
    func_0x000107c613fc(&UNK_11063bc38,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,plVar11);
    pcStack_98 = (code *)0x103303264;
    puStack_b8 = puVar8;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)0x1032fe008;
    puStack_a0 = &UNK_11063bd18;
    ppuVar12 = &puStack_b8;
    puStack_90 = puVar6;
    func_0x000107c60bc4(ppuVar12);
    func_0x000107c61574(puStack_90);
    lVar16 = lVar13;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61170(lVar13);
  }
  uVar7 = *(undefined8 *)((long)plVar11 + _DAT_112f578f8);
  *(long *)((long)plVar11 + _DAT_112f578f8) = lVar16;
  func_0x000107c61170(uVar7);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_7 == 0) {
    lVar16 = 0;
  }
  else {
    lVar13 = param_7;
    func_0x000107c5d014();
    func_0x000107c61180();
    func_0x000107c615e8(param_7);
    puVar6 = &UNK_11063bc38;
    func_0x000107c613fc(&UNK_11063bc38,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,plVar11);
    pcStack_98 = (code *)0x10330325c;
    puStack_b8 = puVar8;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)0x1032fe00c;
    puStack_a0 = &UNK_11063bcf0;
    ppuVar12 = &puStack_b8;
    puStack_90 = puVar6;
    func_0x000107c60bc4(ppuVar12);
    func_0x000107c61574(puStack_90);
    lVar16 = lVar13;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61170(lVar13);
  }
  uVar7 = *(undefined8 *)((long)plVar11 + _DAT_112f57900);
  *(long *)((long)plVar11 + _DAT_112f57900) = lVar16;
  func_0x000107c61170(uVar7);
  if (param_16 != 0) {
    func_0x000107c6157c(param_16);
    func_0x0001000d224c(&uStack_c0);
    func_0x000107c61574(param_16);
    uVar7 = uStack_c0;
    func_0x000107c3d1ac(uStack_c0);
    func_0x000107c61180();
    func_0x000107c615e8(uStack_c0);
    puVar6 = &UNK_11063bc38;
    func_0x000107c613fc(&UNK_11063bc38,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,plVar11);
    pcStack_98 = (code *)0x103303254;
    puStack_b8 = puVar8;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)&UNK_100b5fdac;
    puStack_a0 = &UNK_11063bcc8;
    ppuVar12 = &puStack_b8;
    puStack_90 = puVar6;
    func_0x000107c60bc4(ppuVar12);
    func_0x000107c61574(puStack_90);
    uVar15 = uVar7;
    func_0x000107c5c320(uVar7);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61170(uVar7);
    func_0x000107c3e924(uVar15);
    func_0x000107c61170(uVar15);
  }
  FUN_1032f8f50();
  if (param_9 != 0) {
    func_0x000107c41198(lVar10);
    func_0x000107c61180();
    func_0x000107c61170();
    puVar14 = PTR_PTR_1126ae820;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar6 = puVar14;
    func_0x000107c5cb24();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)((long)plVar11 + _DAT_112f57948);
    *(undefined **)((long)plVar11 + _DAT_112f57948) = puVar6;
    func_0x000107c61170(uVar7);
    func_0x000107c41194(lVar10);
    func_0x000107c61180();
    puVar6 = &UNK_11063bc88;
    func_0x000107c613fc(&UNK_11063bc88,0x20,7);
    *(undefined **)(puVar6 + 0x10) = puVar14;
    *(long *)(puVar6 + 0x18) = lVar4;
    pcStack_98 = (code *)0x10330324c;
    puStack_b8 = puVar8;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_103305040;
    puStack_a0 = &UNK_11063bca0;
    ppuVar12 = &puStack_b8;
    puStack_90 = puVar6;
    func_0x000107c60bc4(ppuVar12);
    puVar6 = puStack_90;
    func_0x000107c61174(puVar14);
    func_0x000107c61574(puVar6);
    func_0x000107c5dc64(lVar10);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61170(lVar10);
    FUN_1032f9174();
    func_0x000107c61170(puVar14);
  }
  func_0x000107c561c0(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar9);
  func_0x000107c615e8(param_5);
  return plVar11;
}



/* Entry: 103303244; end: 1033032ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103303244(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = param_1;
    FUN_1032f70cc(param_1,param_2);
    if (((lVar2 == 0) && (lVar2 = param_1, func_0x0001032f76a8(param_1,param_2), lVar2 == 0)) &&
       (lVar2 = *(long *)(lVar1 + _DAT_112f578e0), lVar2 != 0)) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        func_0x000107c5fadc(param_1,param_2);
        func_0x000107c5e36c(lVar2);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(param_1);
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1033032ac; end: 10330339b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1033032ac(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  lVar1 = _DAT_112f57cc8;
  func_0x000107c61614(unaff_x20 + _DAT_112f57cc8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f57cd0) = 0;
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 10330339c; end: 1033033d7; -[_TtC28SCInLensCreationTrendingList45InLensCreationTrendingListAIModeViewContainer appendSubview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330339c(long param_1)

{
  param_1 = param_1 + _DAT_112f57cc8;
  func_0x000107c61618(param_1);
  func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033033d8; end: 10330360f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033033d8(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  
  uVar3 = param_2;
  FUN_103303610(param_2,param_3);
  if (param_3 == 0) {
    lVar9 = 0;
  }
  else {
    func_0x000103303334();
    uVar7 = uVar3;
    func_0x000107c61558();
    uVar4 = param_2;
    uVar6 = param_3;
    func_0x000100029284();
    uVar8 = (ulong)~(uint)uVar6 & 1;
    lVar9 = *(long *)(uVar3 + 0x10) + uVar8;
    if (SCARRY8(*(long *)(uVar3 + 0x10),uVar8)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033035b0);
      (*pcVar2)();
    }
    if (*(long *)(uVar3 + 0x18) < lVar9) {
      FUN_1033043b0(lVar9,uVar7);
      uVar4 = param_2;
      uVar7 = param_3;
      func_0x000100029284();
      if (((uint)uVar6 & 1) != ((uint)uVar7 & 1)) {
        func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1033034a4);
        (*pcVar2)();
      }
    }
    else if ((uVar7 & 1) == 0) {
      func_0x000103304240();
    }
    if ((uVar6 & 1) == 0) {
      lVar9 = uVar3 + (uVar4 >> 6) * 8;
      *(ulong *)(lVar9 + 0x40) = *(ulong *)(lVar9 + 0x40) | 1L << (uVar4 & 0x3f);
      puVar1 = (ulong *)(*(long *)(uVar3 + 0x30) + uVar4 * 0x10);
      *puVar1 = param_2;
      puVar1[1] = param_3;
      *(undefined **)(*(long *)(uVar3 + 0x38) + uVar4 * 8) = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (SCARRY8(*(long *)(uVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103303610);
        (*pcVar2)();
      }
      *(long *)(uVar3 + 0x10) = *(long *)(uVar3 + 0x10) + 1;
      func_0x000107c61434(param_3);
    }
    puVar1 = (ulong *)(*(long *)(uVar3 + 0x38) + uVar4 * 8);
    func_0x0001023b5794();
    uVar6 = *puVar1;
    uVar7 = uVar6 & 0xffffffffffffff8;
    uVar4 = *(ulong *)(uVar7 + 0x10);
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar4) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_103303f34(uVar7,uVar4 + 1,1,uVar6,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,
                    0x112d36e80,&UNK_10d904c70);
      *puVar1 = uVar7;
      uVar7 = uVar7 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar7 + 0x10) = uVar4 + 1;
    *(undefined8 *)(uVar7 + uVar4 * 8 + 0x20) = param_1;
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f57cd0);
    *(ulong *)(unaff_x20 + _DAT_112f57cd0) = uVar3;
    func_0x000107c61174(param_1);
    func_0x000107c6142c(uVar10);
    lVar9 = 0x10330503c;
  }
  lVar5 = unaff_x20 + _DAT_112f57cc8;
  func_0x000107c61618(lVar5);
  func_0x000107c3d89c();
  func_0x000107c61170(lVar5);
  if (lVar9 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(0);
  return;
}



/* Entry: 103303610; end: 103303843;  */

/* WARNING: Possible PIC construction at 0x000103303690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033037e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103303694) */
/* WARNING: Removing unreachable block (ram,0x0001033037e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103303610(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  if (param_2 == 0) {
    return;
  }
  uVar8 = param_1;
  func_0x000103303334();
  lVar10 = 0;
  uVar6 = 1L << ((ulong)*(byte *)(uVar8 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((*(byte *)(uVar8 + 0x20) & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(uVar8 + 0x40);
  do {
    while (uVar7 != 0) {
      uVar5 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 - 1 & uVar7;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | lVar10 << 6;
      puVar1 = (ulong *)(*(long *)(uVar8 + 0x30) + uVar5 * 0x10);
      uVar9 = *puVar1;
      uVar2 = puVar1[1];
      if (uVar9 != param_1 || param_2 != uVar2) {
        uVar5 = *(ulong *)(*(long *)(uVar8 + 0x38) + uVar5 * 8);
        func_0x000107c605b8(uVar9,uVar2,param_1,param_2,0);
        if ((uVar9 & 1) == 0) {
          if (uVar5 >> 0x3e == 0) {
            uVar7 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar7 = uVar5 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar5) {
              uVar7 = uVar5;
            }
            func_0x000107c60480();
          }
          func_0x000107c61434(uVar5);
          if (uVar7 != 0) {
            uVar8 = 0;
            do {
              if ((uVar5 & 0xc000000000000001) == 0) {
                if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x103303844);
                  (*pcVar3)();
                }
                uVar6 = *(ulong *)(uVar5 + uVar8 * 8 + 0x20);
                func_0x000107c61174(uVar6);
              }
              else {
                uVar6 = uVar8;
                func_0x000100f040d0(uVar8,uVar5);
              }
              if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x103303840);
                (*pcVar3)();
              }
              uVar9 = uVar8 + 1;
              func_0x000107c4ff34();
              func_0x000107c61170(uVar6);
              uVar8 = uVar8 + 1;
            } while (uVar9 != uVar7);
          }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
          return;
        }
      }
    }
    bVar4 = SCARRY8(lVar10,1);
    lVar10 = lVar10 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10330383c);
      (*pcVar3)();
    }
    if ((long)(uVar6 + 0x3f >> 6) <= lVar10) {
      func_0x000107c61574(uVar8);
      uVar5 = *(ulong *)(unaff_x20 + _DAT_112f57cd0);
      func_0x000107c61434(param_2);
      func_0x000107c61434(uVar5);
      FUN_103304d94();
      goto code_r0x000107c6142c;
    }
    uVar7 = ((ulong *)(uVar8 + 0x40))[lVar10];
  } while( true );
}



/* Entry: 103303844; end: 103303853;  */

void FUN_103303844(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 103303854; end: 10330385f; -[_TtC28SCInLensCreationTrendingList45InLensCreationTrendingListAIModeViewContainer appendSubview:groupId:] */

void FUN_103303854(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1033033d8(param_3,param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103303860; end: 1033039cf;  */

/* WARNING: Possible PIC construction at 0x000103303950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103303998: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103303954) */
/* WARNING: Removing unreachable block (ram,0x00010330399c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103303860(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f57cc8;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c3d89c();
    func_0x000107c5a050(param_1);
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar2 = 0x112d360b8;
    FUN_103303e98(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                  &UNK_10d9011a0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 3;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    func_0x000107c3ec1c(param_1);
    func_0x000107c61180();
    func_0x000107c3ec1c(lVar1);
    func_0x000107c61180();
    func_0x000107c40280(param_1);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1033039d0; end: 103303a1f; -[_TtC28SCInLensCreationTrendingList45InLensCreationTrendingListAIModeViewContainer prependSubview:] */

/* WARNING: Possible PIC construction at 0x000103303a08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103303a0c) */

void FUN_1033039d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103303860(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103303a20; end: 103303d63;  */

/* WARNING: Possible PIC construction at 0x000103303cb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103303cbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103303a20(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  undefined8 uVar10;
  
  uVar4 = param_2;
  FUN_103303610(param_2,param_3);
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
  }
  else {
    func_0x000103303334();
    uVar8 = uVar4;
    func_0x000107c61558();
    uVar5 = param_2;
    uVar7 = param_3;
    func_0x000100029284();
    uVar9 = (ulong)~(uint)uVar7 & 1;
    lVar6 = *(long *)(uVar4 + 0x10) + uVar9;
    if (SCARRY8(*(long *)(uVar4 + 0x10),uVar9)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103303d04);
      (*pcVar2)();
    }
    if (*(long *)(uVar4 + 0x18) < lVar6) {
      FUN_1033043b0(lVar6,uVar8);
      uVar5 = param_2;
      uVar8 = param_3;
      func_0x000100029284();
      if (((uint)uVar7 & 1) != ((uint)uVar8 & 1)) {
        func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103303af0);
        (*pcVar2)();
      }
    }
    else if ((uVar8 & 1) == 0) {
      func_0x000103304240();
    }
    if ((uVar7 & 1) == 0) {
      lVar6 = uVar4 + (uVar5 >> 6) * 8;
      *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1L << (uVar5 & 0x3f);
      puVar1 = (ulong *)(*(long *)(uVar4 + 0x30) + uVar5 * 0x10);
      *puVar1 = param_2;
      puVar1[1] = param_3;
      *(undefined **)(*(long *)(uVar4 + 0x38) + uVar5 * 8) = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (SCARRY8(*(long *)(uVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103303d64);
        (*pcVar2)();
      }
      *(long *)(uVar4 + 0x10) = *(long *)(uVar4 + 0x10) + 1;
      func_0x000107c61434(param_3);
    }
    puVar1 = (ulong *)(*(long *)(uVar4 + 0x38) + uVar5 * 8);
    func_0x0001023b5794();
    uVar7 = *puVar1;
    uVar8 = uVar7 & 0xffffffffffffff8;
    uVar5 = *(ulong *)(uVar8 + 0x10);
    if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar5) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
      FUN_103303f34(uVar8,uVar5 + 1,1,uVar7,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,
                    0x112d36e80,&UNK_10d904c70);
      *puVar1 = uVar8;
      uVar8 = uVar8 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar8 + 0x10) = uVar5 + 1;
    *(undefined8 *)(uVar8 + uVar5 * 8 + 0x20) = param_1;
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f57cd0);
    *(ulong *)(unaff_x20 + _DAT_112f57cd0) = uVar4;
    func_0x000107c61174(param_1);
    func_0x000107c6142c(uVar10);
    pcVar2 = FUN_103305038;
  }
  lVar6 = unaff_x20 + _DAT_112f57cc8;
  func_0x000107c61618();
  if (lVar6 == 0) {
    if (pcVar2 == (code *)0x0) {
      return;
    }
    lVar3 = 0;
  }
  else {
    func_0x000107c3d89c();
    func_0x000107c5a050(param_1);
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar3 = 0x112d360b8;
    FUN_103303e98(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                  &UNK_10d9011a0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 3;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c3ec1c(lVar6);
    func_0x000107c61180();
    uVar10 = param_1;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar3 + 0x20) = uVar10;
    uVar10 = 0;
    FUN_10330466c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x000107c5fc48(lVar3,uVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar3);
  return;
}



/* Entry: 103303d64; end: 103303d6f; -[_TtC28SCInLensCreationTrendingList45InLensCreationTrendingListAIModeViewContainer prependSubview:groupId:] */

void FUN_103303d64(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103303a20(param_3,param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103303d70; end: 103303dff;  */

void FUN_103303d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *param_5)

{
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*param_5)(param_3,param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103303e00; end: 103303e5f; -[_TtC28SCInLensCreationTrendingList45InLensCreationTrendingListAIModeViewContainer init] */

void FUN_103303e00(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCInLensCreationTrendingList.InLensCreationTrendingListAIModeViewContainer",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103303e2c);
  (*pcVar1)();
}



/* Entry: 103303e60; end: 103303e97; -[_TtC28SCInLensCreationTrendingList45InLensCreationTrendingListAIModeViewContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103303e60(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f57cc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f57cd0));
  return;
}



/* Entry: 103303e98; end: 103303f0f;  */

void FUN_103303e98(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10330466c(0,param_1,param_2);
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



/* Entry: 103303f10; end: 103303f33;  */

ulong FUN_103303f10(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103304094);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_103304094(uVar2,uVar4,0x112de7658,&PTR_PTR_1126a83c8,0x112f57d00,&UNK_10dbaf640);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103304090);
      (*pcVar1)();
    }
    FUN_103304124(0,uVar2,uVar3 + 0x20,param_4,0x112de7658,&PTR_PTR_1126a83c8);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103303f34; end: 103304093;  */

ulong FUN_103303f34(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103304094);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_103304094(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103304090);
      (*pcVar1)();
    }
    FUN_103304124(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103304094; end: 103304123;  */

undefined *
FUN_103304094(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_103303e98(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 103304124; end: 1033043af;  */

long FUN_103304124(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10330423c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103304240);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_10330466c(0,param_5,param_6);
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
      FUN_10330466c(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103304238);
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



/* Entry: 1033043b0; end: 10330464b;  */

void FUN_1033043b0(long param_1,ulong param_2)

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
  uVar6 = 0x112f57d08;
  func_0x0001000285a8(0x112f57d08,&UNK_10dbaf648);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_103304618:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103304648);
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
          goto LAB_103304618;
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10330464c);
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



/* Entry: 10330464c; end: 10330466b;  */

void FUN_10330464c(void)

{
  func_0x000107c61168(&PTR_PTR_1128ccb78);
  return;
}



/* Entry: 10330466c; end: 1033046ab;  */

void FUN_10330466c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1033046ac; end: 10330483f;  */

void FUN_1033046ac(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x21;
  long lVar9;
  undefined8 uVar10;
  long lStack_90;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  lStack_90 = 0;
  uVar7 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uStack_78 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uStack_78 = ~(-1L << (uVar7 & 0x3f));
  }
  uStack_78 = uStack_78 & *(ulong *)(param_3 + 0x40);
  lVar6 = 0;
  do {
    if (uStack_78 == 0) {
      do {
        lVar9 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103304840);
          (*pcVar2)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar9) {
          FUN_103304840(param_1,param_2,lStack_90,param_3);
          return;
        }
        uStack_78 = ((ulong *)(param_3 + 0x40))[lVar9];
        lVar6 = lVar6 + 1;
      } while (uStack_78 == 0);
      uVar5 = (uStack_78 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_78 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uStack_78 = uStack_78 - 1 & uStack_78;
    }
    else {
      uVar5 = (uStack_78 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_78 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uStack_78 = uStack_78 - 1 & uStack_78;
      lVar9 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5);
    uVar8 = uVar5 | lVar9 << 6;
    puVar4 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar8 * 0x10);
    uStack_70 = *puVar4;
    uVar1 = puVar4[1];
    uVar10 = *(undefined8 *)(*(long *)(param_3 + 0x38) + uVar8 * 8);
    uStack_68 = uVar1;
    uStack_58 = uVar10;
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar10);
    puVar4 = &uStack_70;
    (*param_4)(puVar4,&uStack_58);
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(uVar10);
    if (unaff_x21 != 0) {
      return;
    }
    lVar6 = lVar9;
    if (((ulong)puVar4 & 1) != 0) {
      uVar8 = (uVar5 & 0xffffffffffffffc0 | lVar9 << 6) >> 3;
      *(ulong *)(param_1 + uVar8) = *(ulong *)(param_1 + uVar8) | 1L << (uVar5 & 0x3f);
      bVar3 = SCARRY8(lStack_90,1);
      lStack_90 = lStack_90 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103304804);
        (*pcVar2)();
      }
    }
  } while( true );
}



/* Entry: 103304840; end: 103304a7f;  */

undefined * FUN_103304840(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined1 auStack_a8 [72];
  
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      func_0x000107c6157c(param_4);
      puVar6 = param_4;
    }
    else {
      func_0x0001000285a8(0x112f57d08,&UNK_10dbaf648);
      puVar6 = param_3;
      func_0x000107c60498();
      if (param_2 < 1) {
        uVar15 = 0;
      }
      else {
        uVar15 = *param_1;
      }
      lVar9 = 0;
      do {
        if (uVar15 == 0) {
          do {
            lVar13 = lVar9 + 1;
            if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103304a78);
              (*pcVar4)();
            }
            if (param_2 <= lVar13) {
              return puVar6;
            }
            uVar15 = param_1[lVar13];
            lVar9 = lVar9 + 1;
          } while (uVar15 == 0);
          uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar15 = uVar15 - 1 & uVar15;
        }
        else {
          uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar15 = uVar15 - 1 & uVar15;
          lVar13 = lVar9;
        }
        uVar8 = LZCOUNT(uVar8) | lVar13 << 6;
        puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar8 * 0x10);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        uVar14 = *(undefined8 *)(*(long *)(param_4 + 0x38) + uVar8 * 8);
        func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar6 + 0x28));
        func_0x000107c61434(uVar3);
        func_0x000107c61434(uVar14);
        puVar7 = auStack_a8;
        func_0x000107c5fb58(puVar7,uVar2,uVar3);
        func_0x000107c606a8();
        uVar12 = -1L << ((ulong)(byte)puVar6[0x20] & 0x3f);
        uVar11 = (ulong)puVar7 & (uVar12 ^ 0xffffffffffffffff);
        uVar10 = uVar11 >> 6;
        uVar8 = -1L << (uVar11 & 0x3f) &
                (*(ulong *)(puVar6 + uVar10 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar8 == 0) {
          bVar5 = false;
          uVar8 = 0x3f - uVar12 >> 6;
          do {
            uVar11 = uVar10 + 1;
            if ((uVar11 == uVar8) && (bVar5)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103304a7c);
              (*pcVar4)();
            }
            uVar10 = 0;
            if (uVar11 != uVar8) {
              uVar10 = uVar11;
            }
            bVar5 = (bool)(uVar11 == uVar8 | bVar5);
          } while (*(ulong *)(puVar6 + uVar10 * 8 + 0x40) == 0xffffffffffffffff);
          uVar8 = ~*(ulong *)(puVar6 + uVar10 * 8 + 0x40);
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar10 << 6;
        }
        else {
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar11 & 0x7fffffffffffffc0;
        }
        uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar6 + uVar10 + 0x40) =
             1L << (uVar8 & 0x3f) | *(ulong *)(puVar6 + uVar10 + 0x40);
        puVar1 = (undefined8 *)(*(long *)(puVar6 + 0x30) + uVar8 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        *(undefined8 *)(*(long *)(puVar6 + 0x38) + uVar8 * 8) = uVar14;
        *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
        bVar5 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103304a80);
          (*pcVar4)();
        }
        lVar9 = lVar13;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar6;
}



/* Entry: 103304a80; end: 103304b4b;  */

void FUN_103304a80(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long *param_7)

{
  code *pcVar1;
  long unaff_x21;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103304b4c);
    (*pcVar1)();
  }
  if (-1 < param_3) {
    if (param_3 != 0) {
      func_0x000107c60ee4(param_2,param_3 << 3);
    }
    func_0x000107c6157c(param_4);
    FUN_1033046ac(param_2,param_3,param_4,param_5,param_6);
    func_0x000107c61574(param_4);
    if (unaff_x21 == 0) {
      *param_1 = param_2;
      func_0x000107c61574(param_4);
    }
    else {
      *param_7 = unaff_x21;
      func_0x000107c61574(param_4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103304b48);
  (*pcVar1)();
}



/* Entry: 103304b4c; end: 103304c47;  */

undefined * FUN_103304b4c(long param_1)

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
    func_0x0001000285a8(0x112f57d08,&UNK_10dbaf648);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103304c44);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103304c48);
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



/* Entry: 103304c48; end: 103304d93;  */

void FUN_103304c48(long param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = 0;
  uVar8 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar9 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *(ulong *)(param_3 + 0x40);
  lVar7 = 0;
  do {
    if (uVar9 == 0) {
      do {
        lVar11 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103304d94);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar11) {
          FUN_103304840(param_1,param_2,lVar10,param_3);
          return;
        }
        uVar9 = ((ulong *)(param_3 + 0x40))[lVar11];
        lVar7 = lVar7 + 1;
      } while (uVar9 == 0);
      uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
    }
    else {
      uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      lVar11 = lVar7;
    }
    uVar6 = LZCOUNT(uVar5);
    puVar1 = (ulong *)(*(long *)(param_3 + 0x30) + (uVar6 | lVar11 << 6) * 0x10);
    uVar5 = *puVar1;
    uVar2 = puVar1[1];
    lVar7 = lVar11;
    if ((uVar5 == param_4 && uVar2 == param_5) ||
       (func_0x000107c605b8(uVar5,uVar2,param_4,param_5,0), (uVar5 & 1) != 0)) {
      uVar5 = (uVar6 & 0xffffffffffffffc0 | lVar11 << 6) >> 3;
      *(ulong *)(param_1 + uVar5) = *(ulong *)(param_1 + uVar5) | 1L << (uVar6 & 0x3f);
      bVar4 = SCARRY8(lVar10,1);
      lVar10 = lVar10 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103304d5c);
        (*pcVar3)();
      }
    }
  } while( true );
}



/* Entry: 103304d94; end: 103304fe7;  */

undefined1 * FUN_103304d94(long *param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *unaff_x21;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  undefined1 *apuStack_90 [2];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long *plStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = (1L << ((ulong)*(byte *)(param_1 + 4) & 0x3f)) + 0x3fU >> 6;
  uVar7 = uVar6 * 8;
  uStack_70 = param_2;
  plStack_68 = param_3;
  if ((*(byte *)(param_1 + 4) & 0x3f) < 0xe) {
    func_0x000107c61434(param_3);
    func_0x000107c6157c(param_1);
  }
  else {
    iVar1 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c61434(param_3);
    func_0x000107c6157c(param_1);
    if ((iVar1 == 0) || (uVar3 = uVar7, func_0x000107c61594(uVar7,8), (uVar3 & 1) == 0)) {
      func_0x000107c6158c(uVar7,0xffffffffffffffff);
      func_0x000107c6157c(param_1);
      FUN_103304a80(apuStack_90,uVar7,uVar6,param_1,FUN_103304fe8,auStack_80,&puStack_98);
      puVar5 = apuStack_90[0];
      if (unaff_x21 != (undefined1 *)0x0) {
        puVar5 = puStack_98;
      }
      func_0x000107c61590(uVar7,0xffffffffffffffff,0xffffffffffffffff);
      goto joined_r0x000103304f94;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = auStack_a0 + -(uVar7 + 0xf & 0x3ffffffffffffff0);
  func_0x000107c60ee4(puVar5,uVar7);
  func_0x000107c61434(param_3);
  FUN_103304c48(puVar5,uVar6,param_1,param_2,param_3);
  if (unaff_x21 != (undefined1 *)0x0) {
    puVar5 = unaff_x21;
  }
  func_0x000107c6142c(param_3);
joined_r0x000103304f94:
  if (unaff_x21 == (undefined1 *)0x0) {
    func_0x000107c6142c(param_3);
    param_3 = param_1;
    func_0x000107c61574();
  }
  else {
    iVar1 = 2;
    puStack_98 = puVar5;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&puStack_98,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(param_1);
    func_0x000107c6142c();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar5;
  }
  func_0x000107c60e78();
  lVar4 = *param_3;
  if (lVar4 == param_1[2] && param_3[1] == param_1[3]) {
    puVar5 = (undefined1 *)0x1;
  }
  else {
    func_0x000107c605b8();
    puVar5 = (undefined1 *)(ulong)((uint)lVar4 & 1);
  }
  return puVar5;
}



/* Entry: 103304fe8; end: 103305037;  */

uint FUN_103304fe8(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == *(long *)(unaff_x20 + 0x10) && param_1[1] == *(long *)(unaff_x20 + 0x18)) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 103305038; end: 10330503f;  */

void FUN_103305038(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  return;
}



/* Entry: 103305040; end: 1033050b7;  */

/* WARNING: Possible PIC construction at 0x00010330509c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033050a0) */

void FUN_103305040(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1033050b8; end: 1033058bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1033050b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_12 + _DAT_113082920);
  func_0x000107c61174();
  func_0x000107c61170(param_12);
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x68) = param_11;
  *(undefined8 *)(unaff_x20 + 0x70) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x80) = param_14;
  *(undefined8 *)(unaff_x20 + 0x78) = param_13;
  *(undefined8 *)(unaff_x20 + 0x88) = param_15;
  *(undefined8 *)(unaff_x20 + 0x90) = param_16;
  return unaff_x20;
}



/* Entry: 1033058c0; end: 103305903;  */

void FUN_1033058c0(void)

{
  long unaff_x20;
  
  FUN_1032fe024(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 103305904; end: 10330590b;  */

void FUN_103305904(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1032fe794(uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10330590c; end: 103305a3f;  */

/* WARNING: Possible PIC construction at 0x000103305968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033059a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010330596c) */
/* WARNING: Removing unreachable block (ram,0x0001033059c4) */
/* WARNING: Removing unreachable block (ram,0x000103305970) */
/* WARNING: Removing unreachable block (ram,0x000103305988) */
/* WARNING: Removing unreachable block (ram,0x0001033059a8) */
/* WARNING: Removing unreachable block (ram,0x000103305a28) */
/* WARNING: Removing unreachable block (ram,0x000103305a30) */
/* WARNING: Removing unreachable block (ram,0x0001033059b0) */
/* WARNING: Removing unreachable block (ram,0x0001033059b8) */
/* WARNING: Removing unreachable block (ram,0x0001033059c8) */
/* WARNING: Removing unreachable block (ram,0x0001033059e8) */
/* WARNING: Removing unreachable block (ram,0x0001033059f0) */
/* WARNING: Removing unreachable block (ram,0x0001033059f8) */

void FUN_10330590c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a8b18;
  func_0x000107c610f8(PTR_PTR_1126a8b18);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c53d9c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103305a40; end: 103305a87;  */

undefined8 FUN_103305a40(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = 0;
  if (lVar1 != 0) {
    func_0x000107c61174();
    FUN_1032fe6a8();
    func_0x000107c61170(lVar1);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  func_0x000107c61170(uVar2);
  return 0;
}



/* Entry: 103305a88; end: 103305b43;  */

void FUN_103305a88(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 103305b44; end: 103305b87;  */

void FUN_103305b44(void)

{
  func_0x000103305274();
  return;
}



/* Entry: 103305b88; end: 103305d2f;  */

/* WARNING: Possible PIC construction at 0x000103305bd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103305c40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103305ce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103305cf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103305c44) */
/* WARNING: Removing unreachable block (ram,0x000103305bdc) */
/* WARNING: Removing unreachable block (ram,0x000103305bf0) */
/* WARNING: Removing unreachable block (ram,0x000103305bf8) */
/* WARNING: Removing unreachable block (ram,0x000103305d14) */
/* WARNING: Removing unreachable block (ram,0x000103305c18) */
/* WARNING: Removing unreachable block (ram,0x000103305cec) */

void FUN_103305b88(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107c61174(param_2);
    func_0x000107c41198();
    func_0x000107c61180();
    func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 103305d30; end: 103305d83;  */

void FUN_103305d30(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 in_x6;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  puVar2 = *(undefined8 **)(unaff_x20 + 0x18);
  func_0x000107c452a4();
  func_0x000107c61180();
  uVar3 = *puVar1;
  *puVar1 = in_x6;
  func_0x000107c61170(uVar3);
  func_0x000107c5b3f0();
  *puVar2 = param_1;
  return;
}



/* Entry: 103305d84; end: 103305da3;  */

void FUN_103305d84(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103305da4; end: 103305dbf;  */

void FUN_103305da4(long param_1,long param_2)

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



/* Entry: 103305dc0; end: 103305ddf;  */

void FUN_103305dc0(void)

{
  func_0x000107c61168(&PTR_PTR_112f57d58);
  return;
}



/* Entry: 103305de0; end: 103305deb;  */

/* WARNING: Possible PIC construction at 0x000103305968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033059a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010330596c) */
/* WARNING: Removing unreachable block (ram,0x0001033059c4) */
/* WARNING: Removing unreachable block (ram,0x000103305970) */
/* WARNING: Removing unreachable block (ram,0x000103305988) */
/* WARNING: Removing unreachable block (ram,0x0001033059a8) */
/* WARNING: Removing unreachable block (ram,0x000103305a28) */
/* WARNING: Removing unreachable block (ram,0x000103305a30) */
/* WARNING: Removing unreachable block (ram,0x0001033059b0) */
/* WARNING: Removing unreachable block (ram,0x0001033059b8) */
/* WARNING: Removing unreachable block (ram,0x0001033059c8) */
/* WARNING: Removing unreachable block (ram,0x0001033059e8) */
/* WARNING: Removing unreachable block (ram,0x0001033059f0) */
/* WARNING: Removing unreachable block (ram,0x0001033059f8) */

void FUN_103305de0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = PTR_PTR_1126a8b18;
  func_0x000107c610f8(PTR_PTR_1126a8b18);
  func_0x000107c453e4();
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c53d9c(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 103305dec; end: 103305e2f;  */

void FUN_103305dec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f57a18 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126caca0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f57a18 = puVar1;
  return;
}



/* Entry: 103305e30; end: 103305e37;  */

void FUN_103305e30(long param_1,long param_2)

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


