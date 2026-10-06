/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102cc1de0; end: 102cc1e2b; -[SCOperaScrollView setContentOffset:animated:] */

void FUN_102cc1de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174();
  FUN_102cc1ac4(param_1,param_2,param_5,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102cc1e2c; end: 102cc1f0b; -[SCOperaScrollView setContentOffset:animationConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc1e2c(double param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112f0a808;
  dVar2 = param_1;
  func_0x000107c61428(param_3 + _DAT_112f0a808,auStack_68,0,0);
  dVar3 = *(double *)(param_3 + lVar1);
  lVar1 = param_3;
  if (param_5 != 0) {
    lVar1 = *(long *)(param_5 + _DAT_113079e20);
    if (lVar1 != 0) {
      func_0x000107c61174(param_3);
      func_0x000107c61174(param_5);
      func_0x000107c4223c(lVar1);
      dVar3 = dVar2;
      goto LAB_102cc1ec8;
    }
    func_0x000107c61174(param_3);
    lVar1 = param_5;
  }
  func_0x000107c61174(lVar1);
LAB_102cc1ec8:
  FUN_102cc1ac4(param_1,param_2,0.0 < dVar3,param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 102cc1f0c; end: 102cc20eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102cc1f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_b0 [24];
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  
  lVar6 = _DAT_112f0a818;
  func_0x000107c61428(unaff_x20 + _DAT_112f0a818,auStack_88,1,0);
  lVar7 = *(long *)(unaff_x20 + lVar6);
  if (lVar7 != 0) {
    uVar2 = 0;
    FUN_102cbfd8c(0);
    func_0x000107c61480(lVar7,uVar2);
    if (lVar7 != 0) {
      func_0x000107c3f478();
      uVar2 = *(undefined8 *)(unaff_x20 + lVar6);
      *(undefined8 *)(unaff_x20 + lVar6) = 0;
      func_0x000107c615e8(uVar2);
    }
  }
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f0a850);
  uVar8 = ((undefined8 *)(unaff_x20 + _DAT_112f0a850))[1];
  lVar3 = 0;
  FUN_102cbfd8c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar7 = lVar4 + _DAT_112f0a7c8;
  *(undefined8 *)(lVar7 + 8) = 0;
  func_0x000107c61614(lVar7,0);
  *(undefined8 *)(lVar4 + _DAT_112f0a7a8) = param_5;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f0a7b0);
  *puVar1 = uVar2;
  puVar1[1] = uVar8;
  *(undefined ***)(lVar7 + 8) = &PTR_DAT_1105be5b0;
  func_0x000107c61604();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f0a7b8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f0a7c0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  plVar5 = &lStack_98;
  lStack_98 = lVar4;
  lStack_90 = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  *(undefined1 *)(unaff_x20 + _DAT_112f0a828) = 2;
  uVar2 = *(undefined8 *)(unaff_x20 + lVar6);
  *(long **)(unaff_x20 + lVar6) = plVar5;
  func_0x000107c61174();
  func_0x000107c615e8(uVar2);
  lVar6 = _DAT_112f0a888;
  func_0x000107c61428(unaff_x20 + _DAT_112f0a888,auStack_b0,0,0);
  lVar6 = unaff_x20 + lVar6;
  func_0x000107c61618();
  if (lVar6 != 0) {
    func_0x000107c4df50(param_1,param_2,param_3,param_4);
    func_0x000107c615e8(lVar6);
  }
  return plVar5;
}



/* Entry: 102cc20ec; end: 102cc2157; -[SCOperaScrollView startInteractiveTransitionInDirection:velocity:touchPoint:] */

void FUN_102cc20ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c61174();
  FUN_102cc1f0c(param_1,param_2,param_3,param_4,param_7);
  func_0x000107c61170(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_7);
  return;
}



/* Entry: 102cc2158; end: 102cc227b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cc2158(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + _DAT_112f0a8b8,auStack_68,0,0);
  lVar2 = _DAT_112f0a888;
  func_0x000107c61428(unaff_x20 + _DAT_112f0a888,auStack_80,0,0);
  lVar2 = unaff_x20 + lVar2;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar3 = 1;
  }
  else {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a8b0);
    func_0x000107c61428(puVar1,auStack_98,0,0);
    lVar3 = lVar2;
    func_0x000107c4df58(*puVar1,puVar1[1],lVar2);
    func_0x000107c615e8(lVar2);
  }
  return lVar3;
}



/* Entry: 102cc227c; end: 102cc2337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc227c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  *(undefined1 *)(unaff_x20 + _DAT_112f0a828) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a830);
  *puVar1 = 3;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a838);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 4) = 1;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f0a850);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a858);
  puVar1[1] = ((undefined8 *)(unaff_x20 + _DAT_112f0a850))[1];
  *puVar1 = uVar3;
  lVar2 = _DAT_112f0a888;
  func_0x000107c61428(unaff_x20 + _DAT_112f0a888,auStack_38,0,0);
  lVar2 = unaff_x20 + lVar2;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c4df44();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102cc2338; end: 102cc26af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cc2338(double param_1,double param_2,double param_3,double param_4,ulong param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong unaff_x20;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_98 [24];
  
  uVar7 = unaff_x20;
  func_0x000107c5c3b0();
  func_0x000107c61180();
  uVar5 = 0;
  FUN_102cc5cd8(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar6 = uVar7;
  func_0x000107c5fc54(uVar7,uVar5);
  func_0x000107c61170(uVar7);
  if (uVar6 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    func_0x000107c60480();
  }
  if (uVar7 == 0) {
    func_0x000107c6142c(uVar6);
    dVar13 = 0.0;
    param_2 = 0.0;
    lVar10 = _DAT_112f0a808;
  }
  else {
    if ((uVar6 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102cc2680);
        (*pcVar4)();
      }
      uVar5 = *(undefined8 *)(uVar6 + 0x20);
      func_0x000107c61174(uVar5);
    }
    else {
      uVar5 = 0;
      func_0x000100f040d0(0,uVar6);
    }
    func_0x000107c6142c(uVar6);
    func_0x000107c438d4(uVar5);
    dVar14 = param_1;
    func_0x000107c61170(uVar5);
    dVar13 = param_1;
    param_1 = dVar14;
    lVar10 = _DAT_112f0a808;
  }
  _DAT_112f0a808 = lVar10;
  if ((param_6 == 0) || (*(long *)(param_6 + _DAT_113079e20) == 0)) {
    func_0x000107c61428(unaff_x20 + lVar10,auStack_98,0,0);
    param_1 = *(double *)(unaff_x20 + lVar10);
  }
  else {
    func_0x000107c4223c();
  }
  pdVar1 = (double *)(unaff_x20 + _DAT_112f0a848);
  dVar14 = *pdVar1;
  dVar15 = pdVar1[1];
  func_0x000107c3ec60();
  dVar14 = ABS(dVar14 - dVar13);
  dVar15 = ABS(dVar15 - param_2);
  if (dVar14 < dVar15) {
    param_3 = param_4;
  }
  if (0.0 < param_3) {
    if (dVar14 < dVar15) {
      dVar14 = dVar15;
    }
    dVar14 = dVar14 / param_3;
    if (1.0 <= dVar14) {
      if (param_1 <= 0.032) {
        param_1 = 0.032;
      }
    }
    else {
      if (dVar14 <= 0.5) {
        param_1 = param_1 * 0.5;
      }
      else {
        param_1 = param_1 * dVar14;
      }
      if (param_1 <= 0.032) {
        param_1 = 0.032;
      }
    }
  }
  dVar14 = *pdVar1;
  dVar15 = pdVar1[1];
  FUN_102cc2744();
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f0a8a8);
  puVar8 = &UNK_1105be7f0;
  func_0x000107c613fc(&UNK_1105be7f0,0x18,7);
  func_0x000107c61614(puVar8 + 0x10);
  puVar9 = &UNK_1105be868;
  func_0x000107c613fc(&UNK_1105be868,0x28,7);
  *(undefined **)(puVar9 + 0x10) = puVar8;
  *(undefined8 *)(puVar9 + 0x18) = param_7;
  *(undefined8 *)(puVar9 + 0x20) = param_8;
  lVar10 = 0;
  func_0x000102cc61e4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar10 + 0x48) = 0;
  *(undefined8 *)(lVar10 + 0x28) = 0;
  *(undefined8 *)(lVar10 + 0x30) = 0;
  *(undefined1 *)(lVar10 + 0x50) = 1;
  *(undefined8 *)(lVar10 + 0x58) = 0;
  *(undefined8 *)(lVar10 + 0x60) = 0;
  *(undefined2 *)(lVar10 + 0x98) = 0;
  *(double *)(lVar10 + 0x10) = param_1;
  *(code **)(lVar10 + 0x18) = FUN_102cc5d18;
  *(undefined **)(lVar10 + 0x20) = puVar9;
  *(double *)(lVar10 + 0x68) = dVar13;
  *(double *)(lVar10 + 0x70) = param_2;
  *(double *)(lVar10 + 0x78) = dVar14;
  *(double *)(lVar10 + 0x80) = dVar15;
  *(double *)(lVar10 + 0x88) = dVar14 - dVar13;
  *(double *)(lVar10 + 0x90) = dVar15 - param_2;
  if (param_6 == 0) {
    func_0x000107c615f0(uVar5);
    func_0x000100d2349c(param_7,param_8);
    lVar3 = lRam0000000112f0aa48;
    lVar2 = lRam0000000112f0aa40;
    if ((param_5 & 1) == 0) {
      func_0x000107c6157c(puVar9);
      if (lVar3 != -1) {
        func_0x000107c61568(0x112f0aa48,FUN_102cc5eec);
      }
      puVar12 = (undefined8 *)0x112f0aa38;
    }
    else {
      func_0x000107c6157c(puVar9);
      if (lVar2 != -1) {
        func_0x000107c61568(0x112f0aa40,0x102cc5f1c);
      }
      puVar12 = (undefined8 *)0x112f0aa30;
    }
    uVar11 = *puVar12;
    func_0x000107c61174();
    func_0x000107c61574(puVar9);
    *(undefined8 *)(lVar10 + 0x38) = uVar11;
  }
  else {
    *(long *)(lVar10 + 0x38) = param_6;
    func_0x000107c615f0(uVar5);
    func_0x000100d2349c(param_7,param_8);
  }
  *(undefined8 *)(lVar10 + 0x40) = uVar5;
  return lVar10;
}



/* Entry: 102cc26b0; end: 102cc2743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc26b0(uint param_1,long param_2,code *param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_3 != (code *)0x0) {
      (*param_3)(param_1 & 1);
    }
    if ((param_1 & 1) != 0) {
      FUN_102cc19e4(*(undefined8 *)(param_2 + _DAT_112f0a848),
                    ((undefined8 *)(param_2 + _DAT_112f0a848))[1]);
    }
    FUN_102cc227c();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102cc2744; end: 102cc2917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cc2744(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_88 [24];
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + _DAT_113079e28);
    lVar5 = lVar6;
    if (lVar6 != 0) {
      lVar2 = lVar6;
      FUN_102cc550c();
      lVar1 = _DAT_112f0a878;
      puVar4 = auStack_88;
      func_0x000107c61428(unaff_x20 + _DAT_112f0a878,puVar4,0x20,0);
      lVar5 = *(long *)(unaff_x20 + lVar1);
      if ((*(long *)(lVar5 + 0x10) == 0) ||
         (lVar3 = lVar2, func_0x000100f89a68(), ((ulong)puVar4 & 1) == 0)) {
        func_0x000107c614a8(auStack_88);
        func_0x000103c1cbac(0);
        uVar7 = *(undefined8 *)(lVar6 + _DAT_113079e58);
        uVar8 = ((undefined8 *)(lVar6 + _DAT_113079e58))[1];
        uVar9 = *(undefined8 *)(lVar6 + _DAT_113079e60);
        uVar10 = ((undefined8 *)(lVar6 + _DAT_113079e60))[1];
        func_0x000107c61174(lVar6);
        lVar5 = lVar6;
        func_0x000103c1cb20(uVar7,uVar8,uVar9,uVar10);
        func_0x000107c61428(unaff_x20 + lVar1,auStack_88,0x21,0);
        lVar3 = lVar5;
        func_0x000107c61174(lVar5);
        func_0x000107c61174();
        uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
        func_0x000107c61558(uVar7);
        uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
        *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
        FUN_102cc501c(lVar3,lVar2,uVar7);
        *(undefined8 *)(unaff_x20 + lVar1) = uVar8;
        func_0x000107c614a8(auStack_88);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar3);
        lVar6 = *(long *)(unaff_x20 + lVar1);
        if (100 < *(ulong *)(lVar6 + 0x10)) {
          func_0x000107c61428(unaff_x20 + lVar1,auStack_88,1,0);
          *(undefined **)(unaff_x20 + lVar1) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
          func_0x000107c6142c(lVar6);
        }
      }
      else {
        lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + lVar3 * 8);
        func_0x000107c614a8(auStack_88);
        func_0x000107c61174(lVar5);
      }
    }
  }
  return lVar5;
}



/* Entry: 102cc2918; end: 102cc2a97;  */

uint FUN_102cc2918(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  uVar2 = param_3 + 0x10;
  func_0x000107c61618();
  if (uVar2 == 0) {
    uVar6 = 0;
    goto LAB_102cc2a64;
  }
  uVar5 = uVar2;
  func_0x000107c5c3b0();
  func_0x000107c61180();
  uVar3 = 0;
  FUN_102cc5cd8(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar4 = uVar5;
  func_0x000107c5fc54(uVar5,uVar3);
  func_0x000107c61170(uVar5);
  if (uVar4 >> 0x3e == 0) {
    if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) != 0) goto LAB_102cc29c0;
LAB_102cc2a28:
    func_0x000107c6142c();
  }
  else {
    uVar5 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar5 = uVar4;
    }
    func_0x000107c60480();
    if (uVar5 == 0) goto LAB_102cc2a28;
LAB_102cc29c0:
    if ((uVar4 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc2a98);
        (*pcVar1)();
      }
      uVar5 = *(ulong *)(uVar4 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar5 = 0;
      func_0x000100f040d0(0,uVar4);
    }
    func_0x000107c6142c(uVar4);
    func_0x000107c438d4(uVar5);
    func_0x000107c54b80(param_1,param_2,uVar5);
    func_0x000107c61170();
    uVar4 = uVar5;
  }
  FUN_102cc19e4(param_1,param_2);
  uVar6 = (uint)uVar4;
  if (((uVar4 & 1) != 0) && (param_4 != (code *)0x0)) {
    (*param_4)(param_1,param_2);
  }
  func_0x000107c61170(uVar2);
LAB_102cc2a64:
  return uVar6 & 1;
}



/* Entry: 102cc2a98; end: 102cc2a9b; +[SCOperaScrollView adaptedAnimationDurationWithBaseDuration:from:to:pageSize:] */

double FUN_102cc2a98(double param_1,double param_2,double param_3,double param_4,double param_5,
                    double param_6,double param_7)

{
  double dVar1;
  double dVar2;
  
  dVar1 = ABS(param_4 - param_2);
  dVar2 = ABS(param_5 - param_3);
  if (dVar1 < dVar2) {
    param_6 = param_7;
  }
  if (0.0 < param_6) {
    if (dVar1 < dVar2) {
      dVar1 = dVar2;
    }
    dVar1 = dVar1 / param_6;
    if (dVar1 < 1.0) {
      if (dVar1 <= 0.5) {
        param_1 = param_1 * 0.5;
      }
      else {
        param_1 = param_1 * dVar1;
      }
    }
    if (param_1 <= 0.032) {
      param_1 = 0.032;
    }
  }
  return param_1;
}



/* Entry: 102cc2a9c; end: 102cc2f03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc2a9c(undefined8 param_1,double param_2,ulong param_3)

{
  char *pcVar1;
  double *pdVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong unaff_x20;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c5bcc0();
  lVar12 = _DAT_112f0a8d8;
  if (2 < (long)param_3) {
    if (param_3 == 3) {
      func_0x000107c61428(unaff_x20 + _DAT_112f0a8d8,auStack_68,0,0);
      func_0x000107c5cf78(*(undefined8 *)(unaff_x20 + lVar12));
      uVar8 = *(ulong *)(unaff_x20 + lVar12);
      func_0x000107c5dc98();
      FUN_102cc32bc();
      if ((uVar8 & 1) != 0) {
        func_0x000102cc3504();
      }
    }
    else if ((param_3 == 4) && (pcVar1 = (char *)(unaff_x20 + _DAT_112f0a830), *pcVar1 != '\x03')) {
      dVar15 = *(double *)(pcVar1 + 0x28);
      dVar13 = *(double *)(pcVar1 + 0x30);
      uVar8 = unaff_x20;
      func_0x000107c5c3b0();
      func_0x000107c61180();
      uVar10 = 0;
      FUN_102cc5cd8(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
      uVar7 = uVar8;
      func_0x000107c5fc54(uVar8,uVar10);
      func_0x000107c61170(uVar8);
      if (uVar7 >> 0x3e == 0) {
        uVar8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar8 = uVar7 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar7) {
          uVar8 = uVar7;
        }
        func_0x000107c60480();
      }
      if (uVar8 == 0) {
        func_0x000107c6142c(uVar7);
      }
      else {
        if ((uVar7 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar7 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102cc2ce4);
            (*pcVar4)();
          }
          uVar10 = *(undefined8 *)(uVar7 + 0x20);
          func_0x000107c61174(uVar10);
        }
        else {
          uVar10 = 0;
          func_0x000100f040d0(0,uVar7);
        }
        dVar16 = *(double *)PTR__CGPointZero_110347540;
        dVar17 = *(double *)(PTR__CGPointZero_110347540 + 8);
        func_0x000107c6142c(uVar7);
        func_0x000107c438d4(uVar10);
        func_0x000107c54b80(dVar15 + dVar16,dVar13 + dVar17,uVar10);
        func_0x000107c61170(uVar10);
      }
      FUN_102cc19e4(dVar15,dVar13);
      *(undefined1 *)(unaff_x20 + _DAT_112f0a828) = 0;
      puVar3 = (undefined8 *)(unaff_x20 + _DAT_112f0a830);
      *puVar3 = 3;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[1] = 0;
      puVar3 = (undefined8 *)(unaff_x20 + _DAT_112f0a838);
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      *(undefined1 *)(puVar3 + 4) = 1;
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f0a850);
      puVar3 = (undefined8 *)(unaff_x20 + _DAT_112f0a858);
      puVar3[1] = ((undefined8 *)(unaff_x20 + _DAT_112f0a850))[1];
      *puVar3 = uVar10;
      lVar12 = _DAT_112f0a888;
      func_0x000107c61428(unaff_x20 + _DAT_112f0a888,&stack0xffffffffffffffc8,0,0);
      lVar12 = unaff_x20 + lVar12;
      func_0x000107c61618();
      if (lVar12 != 0) {
        func_0x000107c4df44();
        func_0x000107c615e8(lVar12);
      }
      return;
    }
    return;
  }
  if (param_3 != 1) {
    if (param_3 != 2) {
      return;
    }
    FUN_102cc32bc();
    lVar12 = _DAT_112f0a8d8;
    if ((param_3 & 1) != 0) {
      return;
    }
    func_0x000107c61428(unaff_x20 + _DAT_112f0a8d8,auStack_68,0,0);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar12);
    func_0x000107c61174();
    uVar10 = uVar6;
    func_0x000107c49cd8();
    if ((int)uVar10 != 0) {
      func_0x000107c54514(uVar6);
      func_0x000107c54514(uVar6);
    }
    func_0x000107c61170(uVar6);
    return;
  }
  pdVar2 = (double *)(unaff_x20 + _DAT_112f0a8c0);
  func_0x000107c61428(pdVar2,auStack_68,0,0);
  lVar12 = _DAT_112f0a8d8;
  if (*pdVar2 == 0.0) {
    return;
  }
  dVar13 = pdVar2[1];
  if (dVar13 == 0.0) {
    return;
  }
  func_0x000107c61428(unaff_x20 + _DAT_112f0a8d8,auStack_80,0,0);
  func_0x000107c5dc98(*(undefined8 *)(unaff_x20 + lVar12));
  lVar9 = *(long *)(unaff_x20 + lVar12);
  dVar15 = dVar13;
  dVar16 = param_2;
  func_0x000107c4d940();
  if (lVar9 < 1) {
    func_0x000107c4b8b8(*(undefined8 *)(unaff_x20 + lVar12));
  }
  else {
    func_0x000107c4b8c8();
  }
  lVar9 = _DAT_112f0a828;
  lVar12 = _DAT_112f0a818;
  if (*(char *)(unaff_x20 + _DAT_112f0a828) == '\x02') {
    func_0x000107c61428(unaff_x20 + _DAT_112f0a818,auStack_b0,0,0);
    lVar12 = *(long *)(unaff_x20 + lVar12);
    if (lVar12 != 0) {
      uVar10 = 0;
      FUN_102cbfd8c(0);
      lVar11 = lVar12;
      func_0x000107c61480(lVar12,uVar10);
      if (lVar11 != 0) {
        func_0x000107c615f0(lVar12);
        FUN_102cc2f54(dVar15,dVar16,dVar13,param_2,lVar11);
        goto LAB_102cc2ee0;
      }
    }
  }
  *(undefined1 *)(unaff_x20 + lVar9) = 1;
  lVar12 = *(long *)(unaff_x20 + _DAT_112f0a870);
  if (lVar12 == 0) {
    bVar5 = ABS(param_2) < ABS(dVar13);
  }
  else {
    func_0x000107c60ed4(-param_2,dVar13);
    func_0x000107c51a6c();
    bVar5 = (lVar12 - 1U & 0xfffffffffffffffd) == 0;
  }
  uVar10 = 1;
  if (!bVar5) {
    uVar10 = 2;
  }
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112f0a830);
  uVar14 = ((undefined8 *)(unaff_x20 + _DAT_112f0a850))[1];
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f0a850);
  *puVar3 = uVar10;
  puVar3[1] = dVar15;
  puVar3[2] = dVar16;
  puVar3[3] = dVar13;
  puVar3[4] = param_2;
  puVar3[6] = uVar14;
  puVar3[5] = uVar6;
  lVar12 = _DAT_112f0a888;
  func_0x000107c61428(unaff_x20 + _DAT_112f0a888,auStack_98,0,0);
  lVar12 = unaff_x20 + lVar12;
  func_0x000107c61618();
  if (lVar12 == 0) {
    return;
  }
  func_0x000107c4df50(dVar13,param_2,dVar15,dVar16);
LAB_102cc2ee0:
  func_0x000107c615e8(lVar12);
  return;
}



/* Entry: 102cc2f04; end: 102cc2f53; -[SCOperaScrollView onPanWithPanGestureRecogizer:] */

/* WARNING: Possible PIC construction at 0x000102cc2f3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cc2f40) */

void FUN_102cc2f04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102cc2a9c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102cc2f54; end: 102cc30cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc2f54(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_78 [24];
  
  lVar2 = _DAT_112f0a840;
  dVar8 = ((double *)(unaff_x20 + _DAT_112f0a850))[1];
  dVar5 = *(double *)(param_5 + _DAT_112f0a7b0);
  dVar6 = ((double *)(param_5 + _DAT_112f0a7b0))[1];
  dVar7 = *(double *)(unaff_x20 + _DAT_112f0a850) - dVar5;
  *(undefined1 *)(unaff_x20 + _DAT_112f0a840) = 1;
  func_0x000107c3f478(param_5,param_6,0,0,0);
  *(undefined1 *)(unaff_x20 + lVar2) = 0;
  uVar4 = *(ulong *)(unaff_x20 + _DAT_112f0a870);
  if (uVar4 == 0) {
    if (ABS(param_3) <= ABS(param_4)) goto LAB_102cc3020;
  }
  else {
    func_0x000107c60ed4(-param_4,param_3);
    func_0x000107c51a6c();
    if ((uVar4 | 2) != 3) {
LAB_102cc3020:
      dVar8 = dVar8 - dVar6;
      dVar7 = 0.0;
      uVar3 = 2;
      goto LAB_102cc302c;
    }
  }
  dVar8 = 0.0;
  uVar3 = 1;
LAB_102cc302c:
  *(undefined1 *)(unaff_x20 + _DAT_112f0a828) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a830);
  *puVar1 = uVar3;
  puVar1[1] = param_1 - dVar7;
  puVar1[2] = param_2 - dVar8;
  puVar1[3] = param_3;
  puVar1[4] = param_4;
  puVar1[5] = dVar5;
  puVar1[6] = dVar6;
  lVar2 = _DAT_112f0a888;
  func_0x000107c61428(unaff_x20 + _DAT_112f0a888,auStack_78,0,0);
  lVar2 = unaff_x20 + lVar2;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c4df50(param_3,param_4,param_1 - dVar7,param_2 - dVar8);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102cc30cc; end: 102cc314b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cc30cc(double param_1,double param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f0a870);
  if (lVar2 != 0) {
    func_0x000107c60ed4(-param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_scrollView_swipeDirectionForAngl_112632498);
    return lVar2;
  }
  lVar2 = 2;
  if (param_2 <= 0.0) {
    lVar2 = 0;
  }
  lVar1 = -1;
  if (param_2 != 0.0) {
    lVar1 = lVar2;
  }
  lVar2 = 3;
  if (param_1 <= 0.0) {
    lVar2 = 1;
  }
  if (ABS(param_2) < ABS(param_1)) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 102cc314c; end: 102cc323b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc314c(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar5 = _DAT_112f0a818;
  if (*(char *)(unaff_x20 + _DAT_112f0a828) == '\x02') {
    func_0x000107c61428(unaff_x20 + _DAT_112f0a818,auStack_48,0,0);
    lVar5 = *(long *)(unaff_x20 + lVar5);
    if (lVar5 != 0) {
      uVar3 = 0;
      FUN_102cbfd8c(0);
      lVar4 = lVar5;
      func_0x000107c61480(lVar5,uVar3);
      lVar1 = _DAT_112f0a8d8;
      if (lVar4 != 0) {
        func_0x000107c61428(unaff_x20 + _DAT_112f0a8d8,auStack_60,0,0);
        iVar2 = (int)*(undefined8 *)(unaff_x20 + lVar1);
        func_0x000107c615f0(lVar5);
        func_0x000107c5dc98();
        FUN_102cc30cc();
        if (iVar2 == -1) {
          func_0x000107c615e8(lVar5);
        }
        else {
          func_0x000107c615e8(lVar5);
        }
      }
    }
  }
  return;
}



/* Entry: 102cc323c; end: 102cc32bb; -[SCOperaScrollView handleTakeoverFromProgrammaticDraggingWithInteractiveTransition:locationInSelf:velocityInSelf:] */

/* WARNING: Possible PIC construction at 0x000102cc329c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cc32a0) */

void FUN_102cc323c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_5);
  FUN_102cc2f54(param_1,param_2,param_3,param_4,param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 102cc32bc; end: 102cc3a33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102cc32bc(double param_1,double param_2)

{
  char *pcVar1;
  double *pdVar2;
  char cVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong unaff_x20;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = _DAT_112f0a8d8;
  pcVar1 = (char *)(unaff_x20 + _DAT_112f0a830);
  cVar3 = *pcVar1;
  if (cVar3 != '\x03') {
    dVar16 = *(double *)(pcVar1 + 0x28);
    dVar15 = *(double *)(pcVar1 + 0x30);
    dVar13 = *(double *)(pcVar1 + 8);
    dVar12 = *(double *)(pcVar1 + 0x10);
    func_0x000107c61428(unaff_x20 + _DAT_112f0a8d8,auStack_78,0,0);
    lVar6 = *(long *)(unaff_x20 + lVar4);
    func_0x000107c4d940();
    if (lVar6 < 1) {
      func_0x000107c4b8b8(*(undefined8 *)(unaff_x20 + lVar4));
    }
    else {
      func_0x000107c4b8c8();
    }
    dVar11 = param_1 - dVar13;
    if (cVar3 != '\x01') {
      dVar11 = 0.0;
    }
    dVar10 = 0.0;
    if (cVar3 != '\x01') {
      dVar10 = param_2 - dVar12;
    }
    dVar14 = param_2 - dVar12;
    dVar12 = param_1 - dVar13;
    if (cVar3 != '\0') {
      dVar14 = dVar10;
      dVar12 = dVar11;
    }
    pdVar2 = (double *)(unaff_x20 + _DAT_112f0a8c0);
    func_0x000107c61428(pdVar2,auStack_90,0,0);
    dVar13 = *pdVar2;
    func_0x000107c3ec60();
    dVar13 = (dVar10 - dVar13) - dVar16;
    if (dVar13 < dVar12) {
      dVar13 = dVar12;
    }
    dVar12 = -dVar16;
    if (dVar13 <= -dVar16) {
      dVar12 = dVar13;
    }
    dVar13 = pdVar2[1];
    uVar7 = unaff_x20;
    func_0x000107c3ec60();
    dVar13 = (dVar11 - dVar13) - dVar15;
    if (dVar13 < dVar14) {
      dVar13 = dVar14;
    }
    dVar11 = -dVar15;
    if (dVar13 <= -dVar15) {
      dVar11 = dVar13;
    }
    FUN_102cc19e4(dVar16 + dVar12,dVar15 + dVar11);
    if ((uVar7 & 1) != 0) {
      if (*pcVar1 != '\x03') {
        dVar15 = *(double *)(pcVar1 + 0x28);
        dVar13 = *(double *)(pcVar1 + 0x30);
        func_0x000107c5c3b0();
        func_0x000107c61180();
        uVar8 = 0;
        FUN_102cc5cd8(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
        uVar7 = unaff_x20;
        func_0x000107c5fc54(unaff_x20,uVar8);
        func_0x000107c61170(unaff_x20);
        if (uVar7 >> 0x3e == 0) {
          uVar9 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar9 = uVar7 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar7) {
            uVar9 = uVar7;
          }
          func_0x000107c60480();
        }
        if (uVar9 == 0) {
          func_0x000107c6142c(uVar7);
        }
        else {
          if ((uVar7 & 0xc000000000000001) == 0) {
            if (*(long *)((uVar7 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x102cc3504);
              (*pcVar5)();
            }
            uVar8 = *(undefined8 *)(uVar7 + 0x20);
            func_0x000107c61174(uVar8);
          }
          else {
            uVar8 = 0;
            func_0x000100f040d0(0,uVar7);
          }
          func_0x000107c6142c(uVar7);
          func_0x000107c438d4(uVar8);
          func_0x000107c54b80(dVar12 + dVar15,dVar11 + dVar13,uVar8);
          func_0x000107c61170(uVar8);
        }
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 102cc3a34; end: 102cc3a93; -[SCOperaScrollView initWithFrame:] */

void FUN_102cc3a34(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCOperaScrollViewImpl.OperaScrollView",0x25,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc3a60);
  (*pcVar1)();
}



/* Entry: 102cc3a94; end: 102cc3b4b; -[SCOperaScrollView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102cc3b30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cc3b34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc3a94(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f0a820));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f0a810));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0a860));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0a870));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0a8a8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f0a878));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0a818));
  FUN_102cc5760(param_1 + _DAT_112f0a888);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f0a8d8));
  return;
}



/* Entry: 102cc3b4c; end: 102cc3cd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102cc3b4c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  FUN_102cc5cd8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  lVar5 = _DAT_112f0a8d8;
  func_0x000107c61428(unaff_x20 + _DAT_112f0a8d8,auStack_58,0,0);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar5);
  func_0x000107c61174(uVar3);
  uVar4 = param_3;
  func_0x000107c60118(param_3,uVar3);
  func_0x000107c61170(uVar3);
  lVar5 = _DAT_112f0a8c8;
  if ((uVar4 & 1) != 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112f0a8c8,auStack_70,0,0);
    if (*(char *)(unaff_x20 + lVar5) != '\x01') {
      return 0;
    }
    uVar4 = 0;
    bVar2 = *(byte *)(unaff_x20 + _DAT_112f0a828);
    if (bVar2 < 2) {
      if (bVar2 != 0) {
        return 0;
      }
    }
    else {
      if (bVar2 != 2) {
        return 0;
      }
      FUN_102cc314c();
      if ((uVar4 & 1) == 0) {
        return 0;
      }
    }
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112f0a898);
  if (lVar5 != 0) {
    FUN_102cc5cd8(0,0x112daba28,&PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0);
    func_0x000107c61174();
    func_0x000107c61174(lVar5);
    uVar4 = param_3;
    func_0x000107c60118(param_3,lVar5);
    func_0x000107c61170(param_3);
    func_0x000107c61170(lVar5);
    if ((uVar4 & 1) != 0) {
      func_0x000107c4b8b8(param_3);
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a8a0);
      *puVar1 = param_1;
      puVar1[1] = param_2;
    }
  }
  return 1;
}



/* Entry: 102cc3cd4; end: 102cc3d2f; -[SCOperaScrollView gestureRecognizerShouldBegin:] */

uint FUN_102cc3cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102cc3b4c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cc3d30; end: 102cc3eff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102cc3d30(double param_1,double param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112f0a898);
  if (lVar5 != 0) {
    FUN_102cc5cd8(0,0x112daba28,&PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0);
    uVar1 = param_3;
    func_0x000107c61174();
    func_0x000107c61174(lVar5);
    uVar2 = uVar1;
    func_0x000107c60118(uVar1,lVar5);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(lVar5);
    if ((uVar2 & 1) != 0) {
      FUN_102cc5cd8(0,0x112f0a8f0,&PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
      func_0x000107c614e8();
      func_0x000107c49f68();
      if ((int)param_4 != 0) {
        func_0x000107c4b8b8(uVar1);
        return 0;
      }
      return 1;
    }
  }
  lVar5 = param_4;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 != 0) {
    FUN_102cc5cd8(0,0x112f0a8e0,&PTR__OBJC_CLASS___WKWebView_1126b4f60);
    func_0x000107c614e8();
    lVar3 = lVar5;
    func_0x000107c49f68();
    func_0x000107c61170(lVar5);
    if ((int)lVar3 != 0) {
      FUN_102cc5cd8(0,0x112f0a8e8,&PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
      func_0x000107c614e8();
      lVar5 = param_4;
      func_0x000107c49f68();
      if ((int)lVar5 != 0) {
        puVar4 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
        func_0x000107c61168(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
        func_0x000107c61490(param_4,puVar4,0,0,0);
        func_0x000107c5dc98();
        if ((param_1 == 0.0) && (param_2 == 0.0)) {
          return 1;
        }
      }
    }
  }
  if ((*(char *)(unaff_x20 + _DAT_112f0a868) == '\x01') &&
     (FUN_102cc6c18(param_3,param_4,0), (param_3 & 1) != 0)) {
    return 1;
  }
  return 0;
}



/* Entry: 102cc3f00; end: 102cc3f77; -[SCOperaScrollView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

uint FUN_102cc3f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102cc3d30(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cc3f78; end: 102cc405b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc3f78(ulong param_1,int param_2)

{
  ulong uVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f0a898);
  if (lVar2 != 0) {
    FUN_102cc5cd8(0,0x112daba28,&PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0);
    func_0x000107c61174();
    func_0x000107c61174(lVar2);
    uVar1 = param_1;
    func_0x000107c60118(param_1,lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar2);
    if ((uVar1 & 1) != 0) {
      FUN_102cc5cd8(0,0x112f0a8f0,&PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
      func_0x000107c614e8();
      func_0x000107c49f68();
      if (param_2 != 0) {
        func_0x000107c4b8b8(param_1);
      }
    }
  }
  return;
}



/* Entry: 102cc405c; end: 102cc40d3; -[SCOperaScrollView gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

uint FUN_102cc405c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102cc3f78(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cc40d4; end: 102cc43af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102cc40d4(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112f0a898);
  if (lVar4 != 0) {
    FUN_102cc5cd8(0,0x112daba28,&PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0);
    func_0x000107c61174();
    func_0x000107c61174(lVar4);
    uVar6 = param_1;
    func_0x000107c60118(param_1,lVar4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar4);
    lVar4 = _DAT_112f0a810;
    if ((uVar6 & 1) != 0) {
      func_0x000107c61428(unaff_x20 + _DAT_112f0a810,auStack_58,0,0);
      lVar4 = *(long *)(unaff_x20 + lVar4);
      uVar6 = *(ulong *)(lVar4 + 0x10);
      if (uVar6 != 0) {
        func_0x000107c61434(lVar4);
        uVar7 = 0;
        do {
          if (*(ulong *)(lVar4 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc43b0);
            (*pcVar1)();
          }
          uVar5 = *(undefined8 *)(lVar4 + uVar7 * 8 + 0x20);
          uVar2 = param_2;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (uVar2 != 0) {
            func_0x000107c614e8(uVar5);
            uVar3 = uVar2;
            func_0x000107c49f68();
            func_0x000107c61170(uVar2);
            if ((int)uVar3 != 0) {
              func_0x000107c6142c(lVar4);
              return 0;
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar6 != uVar7);
        func_0x000107c6142c(lVar4);
      }
    }
  }
  uVar6 = param_2;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (uVar6 == 0) {
LAB_102cc4260:
    uVar6 = param_2;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (uVar6 != 0) {
      uVar7 = uVar6;
      func_0x000107c5c42c();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      if (uVar7 != 0) {
        FUN_102cc5cd8(0,0x112f0a8f8,&PTR__OBJC_CLASS___UITableView_1126aed40);
        func_0x000107c614e8();
        uVar6 = uVar7;
        func_0x000107c49f68();
        func_0x000107c61170(uVar7);
        if ((uVar6 & 1) != 0) goto LAB_102cc4388;
      }
    }
    uVar6 = param_2;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (uVar6 != 0) {
      FUN_102cc5cd8(0,0x112d62a98,&PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
      func_0x000107c614e8();
      uVar7 = uVar6;
      func_0x000107c49f68();
      func_0x000107c61170(uVar6);
      if ((uVar7 & 1) != 0) goto LAB_102cc4388;
    }
    func_0x000107c5de64();
    func_0x000107c61180();
    if (param_2 != 0) {
      uVar6 = param_2;
      func_0x000107c5c42c();
      func_0x000107c61180();
      func_0x000107c61170(param_2);
      if (uVar6 != 0) {
        FUN_102cc5cd8(0,0x112d6cd90,&PTR__OBJC_CLASS___UICollectionView_1126afd20);
        func_0x000107c614e8();
        uVar7 = uVar6;
        func_0x000107c49f68();
        func_0x000107c61170(uVar6);
        if ((uVar7 & 1) != 0) goto LAB_102cc4388;
      }
    }
    uVar5 = 1;
  }
  else {
    FUN_102cc5cd8(0,0x112f0a8f8,&PTR__OBJC_CLASS___UITableView_1126aed40);
    func_0x000107c614e8();
    uVar7 = uVar6;
    func_0x000107c49f68();
    func_0x000107c61170(uVar6);
    if ((uVar7 & 1) == 0) goto LAB_102cc4260;
LAB_102cc4388:
    uVar5 = 0;
  }
  return uVar5;
}



/* Entry: 102cc43b0; end: 102cc4427; -[SCOperaScrollView gestureRecognizer:shouldReceiveTouch:] */

uint FUN_102cc43b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102cc40d4(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cc4428; end: 102cc45e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc4428(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong unaff_x20;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_78 [24];
  
  dVar8 = *(double *)(param_5 + _DAT_112f0a7b0);
  dVar7 = ((double *)(param_5 + _DAT_112f0a7b0))[1];
  pdVar1 = (double *)(unaff_x20 + _DAT_112f0a8c0);
  func_0x000107c61428(pdVar1,auStack_78,0,0);
  dVar9 = *pdVar1;
  func_0x000107c3ec60();
  dVar9 = (param_3 - dVar9) - dVar8;
  if (dVar9 < param_1) {
    dVar9 = param_1;
  }
  dVar6 = -dVar8;
  if (dVar9 <= -dVar8) {
    dVar6 = dVar9;
  }
  dVar9 = pdVar1[1];
  func_0x000107c3ec60();
  dVar9 = (param_4 - dVar9) - dVar7;
  if (dVar9 < param_2) {
    dVar9 = param_2;
  }
  dVar10 = -dVar7;
  if (dVar9 <= -dVar7) {
    dVar10 = dVar9;
  }
  func_0x000107c5c3b0();
  func_0x000107c61180();
  uVar3 = 0;
  FUN_102cc5cd8(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar4 = unaff_x20;
  func_0x000107c5fc54(unaff_x20,uVar3);
  func_0x000107c61170(unaff_x20);
  if (uVar4 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar5 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar5 == 0) {
    func_0x000107c6142c(uVar4);
  }
  else {
    if ((uVar4 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102cc45e4);
        (*pcVar2)();
      }
      uVar3 = *(undefined8 *)(uVar4 + 0x20);
      func_0x000107c61174(uVar3);
    }
    else {
      uVar3 = 0;
      func_0x000100f040d0(0,uVar4);
    }
    func_0x000107c6142c(uVar4);
    func_0x000107c438d4(uVar3);
    func_0x000107c54b80(dVar8 + dVar6,dVar7 + dVar10,uVar3);
    func_0x000107c61170(uVar3);
  }
  FUN_102cc19e4(dVar8 + dVar6,dVar7 + dVar10);
  return;
}



/* Entry: 102cc45e4; end: 102cc464b; -[SCOperaScrollView operaInteractiveTransition:updateTransition:] */

/* WARNING: Possible PIC construction at 0x000102cc4630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cc4634) */

void FUN_102cc45e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  FUN_102cc4428(param_1,param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 102cc464c; end: 102cc48a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc464c(long param_1,ulong param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [24];
  
  lVar2 = _DAT_112f0a818;
  func_0x000107c61428(unaff_x20 + _DAT_112f0a818,auStack_78,1,0);
  if (*(long *)(unaff_x20 + lVar2) == 0 || param_1 != *(long *)(unaff_x20 + lVar2)) {
    return;
  }
  if ((param_2 & 1) == 0) {
    if (*(char *)(unaff_x20 + _DAT_112f0a840) == '\x01') {
      if (param_3 != (code *)0x0) {
        (*param_3)(0);
      }
      if (param_5 != (code *)0x0) {
        (*param_5)(1);
      }
      uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
      *(undefined8 *)(unaff_x20 + lVar2) = 0;
      func_0x000107c615e8(uVar4);
      return;
    }
    uVar8 = *(undefined8 *)(param_1 + _DAT_112f0a7b0);
    uVar9 = ((undefined8 *)(param_1 + _DAT_112f0a7b0))[1];
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a838);
    uVar7 = ((undefined8 *)(param_1 + _DAT_112f0a7c0))[1];
    uVar4 = *(undefined8 *)(param_1 + _DAT_112f0a7c0);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    puVar1[3] = uVar7;
    puVar1[2] = uVar4;
    *(undefined1 *)(puVar1 + 4) = 0;
    if (param_3 != (code *)0x0) {
      (*param_3)(0);
    }
    if (param_5 != (code *)0x0) {
      (*param_5)(1);
    }
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
    func_0x000107c615e8(uVar4);
    func_0x000107c5c3b0();
    func_0x000107c61180();
    uVar4 = 0;
    FUN_102cc5cd8(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    uVar5 = unaff_x20;
    func_0x000107c5fc54(unaff_x20,uVar4);
    func_0x000107c61170(unaff_x20);
    if (uVar5 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar6 = uVar5;
      }
      func_0x000107c60480();
    }
    if (uVar6 == 0) {
      func_0x000107c6142c(uVar5);
    }
    else {
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc48a4);
          (*pcVar3)();
        }
        uVar4 = *(undefined8 *)(uVar5 + 0x20);
        func_0x000107c61174(uVar4);
      }
      else {
        uVar4 = 0;
        func_0x000100f040d0(0,uVar5);
      }
      func_0x000107c6142c(uVar5);
      func_0x000107c438d4(uVar4);
      func_0x000107c54b80(uVar8,uVar9,uVar4);
      func_0x000107c61170(uVar4);
    }
    FUN_102cc19e4(uVar8,uVar9);
    FUN_102cc227c();
    return;
  }
  FUN_102cc48a4(param_1,1,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 102cc48a4; end: 102cc4d97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc48a4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  ulong param_6,undefined8 param_7,undefined8 param_8,code *param_9,
                  undefined8 param_10)

{
  double *pdVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  long lStack_e0;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  dVar14 = *(double *)(param_5 + _DAT_112f0a7b0);
  dVar15 = ((double *)(param_5 + _DAT_112f0a7b0))[1];
  dVar13 = ((double *)(param_5 + _DAT_112f0a7c0))[1];
  dVar12 = *(double *)(param_5 + _DAT_112f0a7c0);
  pdVar1 = (double *)(unaff_x20 + _DAT_112f0a838);
  *pdVar1 = dVar14;
  pdVar1[1] = dVar15;
  pdVar1[3] = dVar13;
  pdVar1[2] = dVar12;
  *(undefined1 *)(pdVar1 + 4) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f0a828) = 3;
  lVar11 = _DAT_112f0a818;
  func_0x000107c61428(unaff_x20 + _DAT_112f0a818,auStack_88,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar11);
  *(undefined8 *)(unaff_x20 + lVar11) = 0;
  func_0x000107c615e8(uVar2);
  if ((param_6 & 1) == 0) {
    lVar11 = *(long *)(param_5 + _DAT_112f0a7a8);
    func_0x000107c3ec60();
    if (lVar11 < 2) {
      if (lVar11 == 0) {
        dVar15 = dVar15 - param_4;
      }
      else if (lVar11 == 1) {
        dVar14 = dVar14 - param_3;
      }
    }
    else if (lVar11 == 2) {
      dVar15 = dVar15 + param_4;
    }
    else if (lVar11 == 3) {
      dVar14 = dVar14 + param_3;
    }
  }
  pdVar1 = (double *)(unaff_x20 + _DAT_112f0a848);
  *pdVar1 = dVar14;
  pdVar1[1] = dVar15;
  pdVar1 = (double *)(unaff_x20 + _DAT_112f0a8b0);
  func_0x000107c61428(pdVar1,auStack_a0,1,0);
  *pdVar1 = -dVar14;
  pdVar1[1] = -dVar15;
  lVar11 = _DAT_112f0a888;
  if ((param_6 & 1) == 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112f0a888,auStack_b8,0,0);
    lVar11 = unaff_x20 + lVar11;
    func_0x000107c61618();
  }
  else {
    func_0x000107c61428(unaff_x20 + _DAT_112f0a888,auStack_b8,0,0);
    lVar11 = unaff_x20 + lVar11;
    func_0x000107c61618();
  }
  if (lVar11 != 0) {
    func_0x000107c4df54();
    func_0x000107c615e8(lVar11);
  }
  lStack_e0 = *(long *)(unaff_x20 + _DAT_112f0a870);
  if (lStack_e0 == 0) {
    lStack_e0 = 0;
  }
  else {
    func_0x000107c51a64();
    func_0x000107c61180();
  }
  puVar3 = &UNK_1105be7c8;
  func_0x000107c613fc(&UNK_1105be7c8,0x28,7);
  *(long *)(puVar3 + 0x10) = param_5;
  *(undefined8 *)(puVar3 + 0x18) = param_7;
  *(undefined8 *)(puVar3 + 0x20) = param_8;
  puVar4 = &UNK_1105be7f0;
  func_0x000107c613fc(&UNK_1105be7f0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_1105be818;
  func_0x000107c613fc(&UNK_1105be818,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(code **)(puVar5 + 0x18) = param_9;
  *(undefined8 *)(puVar5 + 0x20) = param_10;
  lVar11 = _DAT_112f0a820;
  lVar10 = *(long *)(unaff_x20 + _DAT_112f0a820);
  if (lVar10 == 0) {
    func_0x000107c6157c(puVar4);
    func_0x000100d2349c(param_9,param_10);
    func_0x000107c6157c(puVar4);
    func_0x000100d2349c(param_9,param_10);
    func_0x000107c61174(param_5);
    func_0x000100d2349c(param_7,param_8);
  }
  else {
    func_0x000107c6157c(puVar4);
    func_0x000100d2349c(param_9,param_10);
    func_0x000107c6157c(puVar4);
    func_0x000100d2349c(param_9,param_10);
    func_0x000107c61174(param_5);
    func_0x000100d2349c(param_7,param_8);
    func_0x000107c6157c(lVar10);
    FUN_102cc5d70();
    func_0x000107c61574(lVar10);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar11);
    *(undefined8 *)(unaff_x20 + lVar11) = 0;
    func_0x000107c61574(uVar2);
  }
  uVar2 = 1;
  FUN_102cc2338(1,lStack_e0,FUN_102cc5c64,puVar3);
  uVar9 = *(undefined8 *)(unaff_x20 + lVar11);
  *(undefined8 *)(unaff_x20 + lVar11) = uVar2;
  func_0x000107c61574(uVar9);
  uVar6 = 1;
  FUN_102cc2158();
  if ((uVar6 & 1) == 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + lVar11);
    *(undefined8 *)(unaff_x20 + lVar11) = 0;
    func_0x000107c61574(uVar2);
    FUN_102cc227c();
    func_0x000107c61428(puVar4 + 0x10,auStack_d0,0,0);
    puVar8 = puVar4 + 0x10;
    func_0x000107c61618();
    if ((puVar8 != (undefined *)0x0) && (func_0x000107c61170(), param_9 != (code *)0x0)) {
      (*param_9)(0);
    }
    func_0x000107c61574(puVar5);
    func_0x000107c61170(lStack_e0);
    func_0x000107c61574(puVar4);
    func_0x000100d2340c(param_9,param_10);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar3);
  }
  else {
    func_0x000107c61574(puVar4);
    func_0x000100d2340c(param_9,param_10);
    lVar11 = *(long *)(unaff_x20 + lVar11);
    if (lVar11 != 0) {
      puVar8 = &UNK_1105be7f0;
      func_0x000107c613fc(&UNK_1105be7f0,0x18,7);
      func_0x000107c61614(puVar8 + 0x10);
      puVar7 = &UNK_1105be840;
      func_0x000107c613fc(&UNK_1105be840,0x28,7);
      *(undefined **)(puVar7 + 0x10) = puVar8;
      *(code **)(puVar7 + 0x18) = FUN_102cc5cc0;
      *(undefined **)(puVar7 + 0x20) = puVar5;
      func_0x000107c6157c(lVar11);
      func_0x000107c6157c(puVar8);
      func_0x000107c6157c(puVar5);
      FUN_102cc5de8(0x102cc5ccc,puVar7);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar8);
      func_0x000107c61574(lVar11);
      puVar4 = puVar7;
    }
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c61170(lStack_e0);
  }
  return;
}



/* Entry: 102cc4d98; end: 102cc4ea7; -[SCOperaScrollView operaInteractiveTransitionCancel:animated:progressBlock:completionBlock:] */

/* WARNING: Possible PIC construction at 0x000102cc4e88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cc4e8c) */

void FUN_102cc4d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar2 = &UNK_1105be8b8;
    func_0x000107c613fc(&UNK_1105be8b8,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    uVar1 = 0x102cc5d5c;
  }
  if (param_6 == 0) {
    puVar4 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar4 = &UNK_1105be890;
    func_0x000107c613fc(&UNK_1105be890,0x18,7);
    *(long *)(puVar4 + 0x10) = param_6;
    pcVar3 = FUN_102cc5d58;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102cc464c(param_3,param_4,uVar1,puVar2,pcVar3,puVar4);
  func_0x000100d2340c(pcVar3,puVar4);
  func_0x000100d2340c(uVar1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102cc4ea8; end: 102cc4fb3; -[SCOperaScrollView operaInteractiveTransitionComplete:progressBlock:completionBlock:] */

/* WARNING: Possible PIC construction at 0x000102cc4f7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cc4f80) */

void FUN_102cc4ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar2 = &UNK_1105be7a0;
    func_0x000107c613fc(&UNK_1105be7a0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    uVar1 = 0x102cc5c58;
  }
  if (param_5 == 0) {
    puVar4 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar4 = &UNK_1105be778;
    func_0x000107c613fc(&UNK_1105be778,0x18,7);
    *(long *)(puVar4 + 0x10) = param_5;
    pcVar3 = FUN_102cc5c44;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102cc48a4(param_3,0,uVar1,puVar2,pcVar3,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cc4fb4; end: 102cc501b;  */

void FUN_102cc4fb4(uint param_1,long param_2,code *param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if ((param_2 != 0) && (func_0x000107c61170(), param_3 != (code *)0x0)) {
    (*param_3)(param_1 & 1);
  }
  return;
}



/* Entry: 102cc501c; end: 102cc514b;  */

void FUN_102cc501c(undefined8 param_1,ulong param_2,uint param_3)

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
  func_0x000100f89a68();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc50e0);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_102cc52a8(lVar5);
    uVar2 = param_2;
    func_0x000100f89a68();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___ss5Int64VN_11034ee50);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc50ac);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_102cc514c();
    lVar5 = *unaff_x20;
    goto joined_r0x000102cc50f4;
  }
  lVar5 = *unaff_x20;
joined_r0x000102cc50f4:
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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc514c);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 102cc514c; end: 102cc52a7;  */

void FUN_102cc514c(void)

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
  
  func_0x0001000285a8(0x112f0a7f8,&UNK_10db3d880);
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
    if (uVar6 == 0) goto LAB_102cc5228;
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
        func_0x000107c61174();
        if (uVar6 != 0) break;
LAB_102cc5228:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc52a8);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_102cc5280;
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
LAB_102cc5280:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 102cc52a8; end: 102cc550b;  */

void FUN_102cc52a8(long param_1,ulong param_2)

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
  uVar13 = 0x112f0a7f8;
  func_0x0001000285a8(0x112f0a7f8,&UNK_10db3d880);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar13);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_102cc54d8:
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
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc5508);
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
          goto LAB_102cc54d8;
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
      func_0x000107c61174(uVar13);
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
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc550c);
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



/* Entry: 102cc550c; end: 102cc575f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cc550c(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = *(double *)(param_1 + _DAT_113079e58);
  dVar6 = dVar5;
  if (dVar5 < 0.0) {
    dVar6 = 0.0;
  }
  dVar6 = dVar6 * 100.0;
  if (1.0 <= dVar5) {
    dVar6 = 100.0;
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar6)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc571c);
    (*pcVar3)();
  }
  if (dVar6 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc5720);
    (*pcVar3)();
  }
  if (9.223372036854776e+18 <= dVar6) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc5724);
    (*pcVar3)();
  }
  dVar7 = ((double *)(param_1 + _DAT_113079e58))[1];
  dVar5 = dVar7;
  if (dVar7 < 0.0) {
    dVar5 = 0.0;
  }
  dVar5 = dVar5 * 100.0;
  if (1.0 <= dVar7) {
    dVar5 = 100.0;
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc5728);
    (*pcVar3)();
  }
  if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc572c);
    (*pcVar3)();
  }
  if (9.223372036854776e+18 <= dVar5) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc5730);
    (*pcVar3)();
  }
  lVar4 = (long)dVar5 * 1000;
  if (SUB168(SEXT816((long)dVar5) * SEXT816(1000),8) != lVar4 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc5734);
    (*pcVar3)();
  }
  lVar1 = (long)dVar6 + lVar4;
  if (SCARRY8((long)dVar6,lVar4)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc5738);
    (*pcVar3)();
  }
  dVar5 = *(double *)(param_1 + _DAT_113079e60);
  dVar6 = dVar5;
  if (dVar5 < 0.0) {
    dVar6 = 0.0;
  }
  dVar6 = dVar6 * 100.0;
  if (1.0 <= dVar5) {
    dVar6 = 100.0;
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar6)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc573c);
    (*pcVar3)();
  }
  if (dVar6 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc5740);
    (*pcVar3)();
  }
  if (9.223372036854776e+18 <= dVar6) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc5744);
    (*pcVar3)();
  }
  lVar4 = (long)dVar6 * 1000000;
  if (SUB168(SEXT816((long)dVar6) * SEXT816(1000000),8) != lVar4 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc5748);
    (*pcVar3)();
  }
  lVar2 = lVar1 + lVar4;
  if (SCARRY8(lVar1,lVar4)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc574c);
    (*pcVar3)();
  }
  dVar5 = ((double *)(param_1 + _DAT_113079e60))[1];
  dVar6 = dVar5;
  if (dVar5 < 0.0) {
    dVar6 = 0.0;
  }
  dVar6 = dVar6 * 100.0;
  if (1.0 <= dVar5) {
    dVar6 = 100.0;
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar6)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc5750);
    (*pcVar3)();
  }
  if (dVar6 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc5754);
    (*pcVar3)();
  }
  if (9.223372036854776e+18 <= dVar6) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc5758);
    (*pcVar3)();
  }
  lVar4 = (long)dVar6 * 1000000000;
  if (SUB168(SEXT816((long)dVar6) * SEXT816(1000000000),8) != lVar4 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc575c);
    (*pcVar3)();
  }
  if (!SCARRY8(lVar2,lVar4)) {
    return lVar2 + lVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc5760);
  (*pcVar3)();
}



/* Entry: 102cc5760; end: 102cc5923;  */

undefined8 FUN_102cc5760(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102cc5924; end: 102cc597b;  */

double FUN_102cc5924(double param_1,double param_2,double param_3,double param_4,double param_5,
                    double param_6,double param_7)

{
  double dVar1;
  double dVar2;
  
  dVar1 = ABS(param_4 - param_2);
  dVar2 = ABS(param_5 - param_3);
  if (dVar1 < dVar2) {
    param_6 = param_7;
  }
  if (0.0 < param_6) {
    if (dVar1 < dVar2) {
      dVar1 = dVar2;
    }
    dVar1 = dVar1 / param_6;
    if (dVar1 < 1.0) {
      if (dVar1 <= 0.5) {
        param_1 = param_1 * 0.5;
      }
      else {
        param_1 = param_1 * dVar1;
      }
    }
    if (param_1 <= 0.032) {
      param_1 = 0.032;
    }
  }
  return param_1;
}



/* Entry: 102cc597c; end: 102cc599b;  */

void FUN_102cc597c(void)

{
  func_0x000107c61168(&PTR_PTR_11289dba8);
  return;
}



/* Entry: 102cc599c; end: 102cc5c03;  */

int FUN_102cc599c(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 102cc5c04; end: 102cc5c43;  */

void FUN_102cc5c04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0a928 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3d9c4;
  func_0x000107c61520(&UNK_10db3d9c4,&UNK_1105be758);
  puRam0000000112f0a928 = puVar1;
  return;
}



/* Entry: 102cc5c44; end: 102cc5c63;  */

void FUN_102cc5c44(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102cc5c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 102cc5c64; end: 102cc5cbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc5c64(double param_1,double param_2)

{
  double *pdVar1;
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x18) != (code *)0x0) {
    pdVar1 = (double *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f0a7b0);
    param_1 = param_1 - *pdVar1;
    param_2 = param_2 - pdVar1[1];
    (**(code **)(unaff_x20 + 0x18))
              (*(undefined8 *)(unaff_x20 + 0x20),SQRT(param_1 * param_1 + param_2 * param_2));
  }
  return;
}



/* Entry: 102cc5cc0; end: 102cc5cd7;  */

void FUN_102cc5cc0(uint param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if ((lVar2 != 0) && (func_0x000107c61170(), pcVar1 != (code *)0x0)) {
    (*pcVar1)(param_1 & 1);
  }
  return;
}



/* Entry: 102cc5cd8; end: 102cc5d17;  */

void FUN_102cc5cd8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102cc5d18; end: 102cc5d23;  */

uint FUN_102cc5d18(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  uint uVar7;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0);
  uVar3 = lVar1 + 0x10;
  func_0x000107c61618();
  if (uVar3 == 0) {
    uVar7 = 0;
    goto LAB_102cc2a64;
  }
  uVar6 = uVar3;
  func_0x000107c5c3b0();
  func_0x000107c61180();
  uVar4 = 0;
  FUN_102cc5cd8(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar5 = uVar6;
  func_0x000107c5fc54(uVar6,uVar4);
  func_0x000107c61170(uVar6);
  if (uVar5 >> 0x3e == 0) {
    if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) != 0) goto LAB_102cc29c0;
LAB_102cc2a28:
    func_0x000107c6142c();
  }
  else {
    uVar6 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar6 = uVar5;
    }
    func_0x000107c60480();
    if (uVar6 == 0) goto LAB_102cc2a28;
LAB_102cc29c0:
    if ((uVar5 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102cc2a98);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(uVar5 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar6 = 0;
      func_0x000100f040d0(0,uVar5);
    }
    func_0x000107c6142c(uVar5);
    func_0x000107c438d4(uVar6);
    func_0x000107c54b80(param_1,param_2,uVar6);
    func_0x000107c61170();
    uVar5 = uVar6;
  }
  FUN_102cc19e4(param_1,param_2);
  uVar7 = (uint)uVar5;
  if (((uVar5 & 1) != 0) && (pcVar2 != (code *)0x0)) {
    (*pcVar2)(param_1,param_2);
  }
  func_0x000107c61170(uVar3);
LAB_102cc2a64:
  return uVar7 & 1;
}



/* Entry: 102cc5d24; end: 102cc5d57;  */

void FUN_102cc5d24(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102cc5d58; end: 102cc5d6f;  */

void FUN_102cc5d58(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102cc5c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 102cc5d70; end: 102cc5de7;  */

void FUN_102cc5d70(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  if (*(char *)(unaff_x20 + 0x98) == '\x01') {
    if (*(char *)(unaff_x20 + 0x50) != '\x01') {
      func_0x000107c4fd58(*(undefined8 *)(unaff_x20 + 0x40),param_2,
                          *(undefined8 *)(unaff_x20 + 0x48));
      *(undefined8 *)(unaff_x20 + 0x48) = 0;
      *(undefined1 *)(unaff_x20 + 0x50) = 1;
    }
    *(undefined1 *)(unaff_x20 + 0x98) = 0;
    pcVar1 = *(code **)(unaff_x20 + 0x28);
    if (pcVar1 != (code *)0x0) {
      uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
      func_0x000107c6157c(uVar2);
      (*pcVar1)(0);
      if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(uVar2);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 102cc5de8; end: 102cc5eeb;  */

void FUN_102cc5de8(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  if ((*(byte *)(unaff_x20 + 0x98) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x98) = 1;
    uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x28) = param_2;
    *(undefined8 *)(unaff_x20 + 0x30) = param_3;
    func_0x000101237350(uVar4,uVar1);
    func_0x000107c6157c(param_3);
    func_0x000107c6071c();
    *(double *)(unaff_x20 + 0x58) = param_1;
    *(double *)(unaff_x20 + 0x60) = param_1 + *(double *)(unaff_x20 + 0x10);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
    puVar2 = &UNK_1105be970;
    func_0x000107c613fc(&UNK_1105be970,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    pcStack_40 = FUN_102cc6204;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_102cc6228;
    puStack_48 = &UNK_1105be988;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c50344();
    func_0x000107c60bd0(ppuVar3);
    *(undefined8 *)(unaff_x20 + 0x48) = uVar4;
    *(undefined1 *)(unaff_x20 + 0x50) = 0;
  }
  return;
}



/* Entry: 102cc5eec; end: 102cc5fa7;  */

void FUN_102cc5eec(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000103c1cbac();
  func_0x000103c1c644();
  uRam0000000112f0aa38 = uVar1;
  return;
}



/* Entry: 102cc5fa8; end: 102cc60f7;  */

/* WARNING: Possible PIC construction at 0x000102cc60b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cc60b4) */

void FUN_102cc5fa8(double param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  char cVar3;
  ulong *puVar4;
  ulong uVar5;
  long unaff_x20;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar4 = *(ulong **)(unaff_x20 + 0x38);
  if (puVar4 != (ulong *)0x0) {
    cVar3 = *(char *)(unaff_x20 + 0x99);
    func_0x000107c61174();
    if (cVar3 == '\x01') {
      FUN_102cc60f8();
    }
    else {
      func_0x000107c5c750(param_2);
      if (*(double *)(unaff_x20 + 0x60) <= param_1) {
        pcVar1 = *(code **)(unaff_x20 + 0x18);
        uVar2 = *(ulong *)(unaff_x20 + 0x20);
        uVar11 = *(undefined8 *)(unaff_x20 + 0x78);
        uVar12 = *(undefined8 *)(unaff_x20 + 0x80);
        uVar5 = uVar2;
        func_0x000107c6157c();
        (*pcVar1)(uVar11,uVar12);
        func_0x000107c61574(uVar2);
      }
      else {
        dVar6 = (param_1 - *(double *)(unaff_x20 + 0x58)) / *(double *)(unaff_x20 + 0x10);
        (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar4) + 0x220))(dVar6);
        dVar7 = *(double *)(unaff_x20 + 0x88);
        dVar8 = *(double *)(unaff_x20 + 0x90);
        dVar9 = *(double *)(unaff_x20 + 0x68);
        dVar10 = *(double *)(unaff_x20 + 0x70);
        pcVar1 = *(code **)(unaff_x20 + 0x18);
        uVar2 = *(ulong *)(unaff_x20 + 0x20);
        uVar5 = uVar2;
        func_0x000107c6157c();
        (*pcVar1)(dVar9 + dVar6 * dVar7,dVar10 + dVar6 * dVar8);
        func_0x000107c61574(uVar2);
      }
      if ((uVar5 & 1) == 0) {
        FUN_102cc5d70();
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 102cc60f8; end: 102cc6163;  */

void FUN_102cc60f8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  if (*(char *)(unaff_x20 + 0x50) != '\x01') {
    func_0x000107c4fd58(*(undefined8 *)(unaff_x20 + 0x40),param_2,*(undefined8 *)(unaff_x20 + 0x48))
    ;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    *(undefined1 *)(unaff_x20 + 0x50) = 1;
  }
  *(undefined1 *)(unaff_x20 + 0x98) = 0;
  pcVar1 = *(code **)(unaff_x20 + 0x28);
  if (pcVar1 != (code *)0x0) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
    func_0x000107c6157c(uVar2);
    (*pcVar1)(1);
    if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(uVar2);
      return;
    }
    return;
  }
  return;
}



/* Entry: 102cc6164; end: 102cc61a7; -[_TtC21SCOperaScrollViewImpl24OperaScrollViewAnimation displayLinkTicked:] */

void FUN_102cc6164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_102cc5fa8(param_3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 102cc61a8; end: 102cc6203;  */

void FUN_102cc61a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000101237350(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102cc6204; end: 102cc6227;  */

void FUN_102cc6204(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_102cc5fa8(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102cc6228; end: 102cc6273;  */

void FUN_102cc6228(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102cc6274; end: 102cc62d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc6274(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _DAT_112f0aa68;
  if (*(long *)(unaff_x20 + _DAT_112f0aa68) != -1) {
    func_0x000107c4fd58();
    *(undefined8 *)(unaff_x20 + lVar1) = 0xffffffffffffffff;
  }
  FUN_102cc68c0();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cc62d8; end: 102cc6363; -[_TtC21SCOperaScrollViewImpl35OperaScrollViewPanGestureRecognizer dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc62d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = _DAT_112f0aa68;
  if (*(long *)(param_1 + _DAT_112f0aa68) == -1) {
    lVar2 = param_1;
    func_0x000107c61174();
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_112f0aa60);
    func_0x000107c61174(param_1);
    func_0x000107c4fd58();
    *(undefined8 *)(param_1 + lVar1) = 0xffffffffffffffff;
  }
  FUN_102cc68c0();
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cc6364; end: 102cc639b; -[_TtC21SCOperaScrollViewImpl35OperaScrollViewPanGestureRecognizer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc6364(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0aa60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f0aa70));
  return;
}



/* Entry: 102cc639c; end: 102cc6437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102cc639c(ulong param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong unaff_x20;
  ulong auStack_50 [2];
  ulong auStack_40 [2];
  ulong *puVar5;
  
  puVar5 = auStack_50;
  if (*(char *)(unaff_x20 + _DAT_112f0aa50) == '\x01') {
    bVar1 = *(byte *)(unaff_x20 + _DAT_112f0aa58);
    uVar3 = unaff_x20;
    FUN_102cc6c18();
    uVar2 = (uint)bVar1 | (uint)uVar3;
    uVar4 = (ulong)uVar2;
    if ((bVar1 != 1) || ((uVar3 & 1) != 0)) goto LAB_102cc6420;
  }
  else {
    puVar5 = auStack_40;
    uVar4 = param_1;
  }
  FUN_102cc68c0();
  *puVar5 = unaff_x20;
  puVar5[1] = uVar4;
  func_0x000107c61154(puVar5,PTR_s_canPreventGestureRecognizer__11252dff0,param_1);
  uVar2 = (uint)puVar5;
LAB_102cc6420:
  return uVar2 & 1;
}



/* Entry: 102cc6438; end: 102cc6493; -[_TtC21SCOperaScrollViewImpl35OperaScrollViewPanGestureRecognizer canPreventGestureRecognizer:] */

uint FUN_102cc6438(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102cc639c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cc6494; end: 102cc6563; -[_TtC21SCOperaScrollViewImpl35OperaScrollViewPanGestureRecognizer touchesBegan:withEvent:] */

void FUN_102cc6494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0;
  func_0x000102be1030(0);
  uVar2 = uVar1;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar1,uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar3 = param_3;
  func_0x000107c5fe08(param_3,uVar1,uVar2);
  uVar2 = uVar3;
  FUN_102cc68c0();
  uStack_50 = param_1;
  uStack_48 = uVar2;
  func_0x000107c61154(&uStack_50,PTR_s_touchesBegan_withEvent__11267b780,uVar3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c6142c(param_3);
  return;
}



/* Entry: 102cc6564; end: 102cc6663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc6564(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_70;
  uVar2 = 0;
  func_0x000102be1030(0);
  uVar4 = uVar2;
  func_0x000101107df4();
  func_0x000107c5fe08(param_1,uVar2,uVar4);
  FUN_102cc68c0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_touchesMoved_withEvent__11252ca58,param_1,
                      param_2);
  func_0x000107c61170(param_1);
  lVar1 = _DAT_112f0aa68;
  if (*(long *)(unaff_x20 + _DAT_112f0aa68) == -1) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0aa60);
    uStack_50 = 0x102cc6868;
    uStack_48 = 0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_102cc6228;
    puStack_58 = &UNK_1105be9b0;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c50344();
    func_0x000107c60bd0(ppuVar3);
    *(undefined8 *)(unaff_x20 + lVar1) = uVar4;
  }
  return;
}



/* Entry: 102cc6664; end: 102cc66eb; -[_TtC21SCOperaScrollViewImpl35OperaScrollViewPanGestureRecognizer touchesMoved:withEvent:] */

void FUN_102cc6664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000102be1030(0);
  uVar2 = uVar1;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar1,uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102cc6564(param_3,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102cc66ec; end: 102cc66f7; -[_TtC21SCOperaScrollViewImpl35OperaScrollViewPanGestureRecognizer touchesEnded:withEvent:] */

void FUN_102cc66ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000102be1030(0);
  uVar2 = uVar1;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar1,uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000102cc6790(param_3,param_4,&PTR_s_touchesEnded_withEvent__11267b788);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102cc66f8; end: 102cc685b;  */

void FUN_102cc66f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000102be1030(0);
  uVar2 = uVar1;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar1,uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000102cc6790(param_3,param_4,param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102cc685c; end: 102cc686b; -[_TtC21SCOperaScrollViewImpl35OperaScrollViewPanGestureRecognizer touchesCancelled:withEvent:] */

void FUN_102cc685c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000102be1030(0);
  uVar2 = uVar1;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar1,uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000102cc6790(param_3,param_4,&PTR_s_touchesCancelled_withEvent__112526c90);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102cc686c; end: 102cc68bf; -[_TtC21SCOperaScrollViewImpl35OperaScrollViewPanGestureRecognizer initWithTarget:action:] */

void FUN_102cc686c(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined1 auStack_40 [32];
  
  if (param_3 != 0) {
    func_0x000107c615f0(param_3);
    func_0x000107c60234(auStack_40);
    func_0x000107c615e8(param_3);
  }
  func_0x000107c60eb0("SCOperaScrollViewImpl.OperaScrollViewPanGestureRecognizer",0x39,
                      "init(target:action:)",0x14,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc68c0);
  (*pcVar1)();
}



/* Entry: 102cc68c0; end: 102cc68df;  */

void FUN_102cc68c0(void)

{
  func_0x000107c61168(&PTR_PTR_11289dd38);
  return;
}



/* Entry: 102cc68e0; end: 102cc696b;  */

long * FUN_102cc68e0(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    *param_1 = *param_2;
    lVar3 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = lVar3;
    iVar2 = *(int *)(param_3 + 0x18);
    lVar3 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))
              ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 102cc696c; end: 102cc69a3;  */

void FUN_102cc696c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x000102cc69a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 102cc69a4; end: 102cc6b2b;  */

undefined8 * FUN_102cc69a4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  iVar1 = *(int *)(param_3 + 0x18);
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  return param_1;
}



/* Entry: 102cc6b2c; end: 102cc6b43;  */

void FUN_102cc6b2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 102cc6b44; end: 102cc6b7b;  */

void FUN_102cc6b44(undefined8 param_1)

{
  if (lRam0000000112f0aaf8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7278b0);
  return;
}



/* Entry: 102cc6b7c; end: 102cc6bfb;  */

void FUN_102cc6b7c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_38 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_30 = &UNK_10db3dae8;
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c6153c(param_1,0x100,3,&puStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 102cc6bfc; end: 102cc6c17;  */

void FUN_102cc6bfc(long param_1,long param_2)

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



/* Entry: 102cc6c18; end: 102cc6f77;  */

undefined8 FUN_102cc6c18(double param_1,double param_2,ulong param_3,ulong param_4,ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar2 = param_3;
  func_0x000107c6148c(param_3,puVar1);
  if (uVar2 == 0) {
    return 0;
  }
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar3 = param_4;
  func_0x000107c6148c(param_4,puVar1);
  if (uVar3 == 0) {
    return 0;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar4 = uVar2;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (uVar4 == 0) {
    uVar12 = 0;
    goto LAB_102cc6f2c;
  }
  uVar5 = uVar3;
  func_0x000107c5de64();
  func_0x000107c61180();
  uVar10 = param_3;
  uVar11 = param_3;
  if (uVar5 == 0) {
LAB_102cc6cec:
    uVar5 = uVar3;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (uVar5 == 0) {
      uVar12 = 0;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___WKWebView_1126b4f60;
      func_0x000107c61168(PTR__OBJC_CLASS___WKWebView_1126b4f60);
      uVar6 = uVar5;
      func_0x000107c6148c(uVar5,puVar1);
      if (uVar6 == 0) {
        uVar12 = 0;
        uVar11 = uVar4;
        uVar8 = param_4;
        param_4 = uVar5;
        goto LAB_102cc6f18;
      }
      func_0x000107c51a60();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      uVar12 = 0;
      if (uVar6 != 0) goto LAB_102cc6d40;
    }
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScrollView_1126af098);
    uVar6 = uVar5;
    func_0x000107c6148c(uVar5,puVar1);
    if (uVar6 == 0) {
      func_0x000107c61170(uVar5);
      goto LAB_102cc6cec;
    }
LAB_102cc6d40:
    func_0x000107c61174();
    uVar5 = uVar6;
    do {
      uVar7 = uVar5;
      func_0x000107c5c42c();
      func_0x000107c61180();
      if (uVar7 != 0) {
        func_0x000100f115fc(0);
        func_0x000107c61174();
        uVar8 = uVar4;
        func_0x000107c61174(uVar4);
        uVar9 = uVar7;
        func_0x000107c60118(uVar7,uVar8);
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar7);
        if ((uVar9 & 1) != 0) {
          func_0x000107c61170(uVar5);
          func_0x000107c5dc98(uVar2);
          if (ABS(param_1) <= ABS(param_2)) {
            if ((0.0 < param_2) && (func_0x000107c404a0(uVar6), param_2 < 2.220446049250313e-16)) {
              func_0x000107c404a0(uVar6);
              func_0x000107c53848(uVar6);
              if ((param_5 & 1) == 0) goto LAB_102cc6f60;
              uVar2 = uVar3;
              func_0x000107c49cd8();
              if ((int)uVar2 != 0) goto LAB_102cc6ee0;
              goto LAB_102cc6efc;
            }
          }
          else if ((0.0 < param_1) && (func_0x000107c404a0(uVar6), param_1 < 2.220446049250313e-16))
          {
            func_0x000107c404a0(uVar6);
            func_0x000107c53848(0,uVar6);
            if ((param_5 & 1) == 0) {
LAB_102cc6f60:
              uVar12 = 1;
              uVar10 = uVar6;
              uVar11 = param_4;
              param_4 = param_3;
            }
            else {
              uVar2 = uVar3;
              func_0x000107c49cd8();
              if ((uVar2 & 1) != 0) {
LAB_102cc6ee0:
                func_0x000107c54514(uVar3);
                func_0x000107c54514(uVar3);
              }
LAB_102cc6efc:
              uVar12 = 1;
              uVar11 = uVar8;
              uVar8 = uVar6;
            }
            goto LAB_102cc6f18;
          }
          uVar12 = 0;
          uVar10 = uVar8;
          uVar8 = uVar6;
          goto LAB_102cc6f18;
        }
      }
      uVar8 = uVar5;
      func_0x000107c5c42c();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      uVar5 = uVar8;
    } while (uVar8 != 0);
    uVar12 = 0;
    uVar11 = param_4;
    uVar8 = uVar4;
    param_4 = uVar6;
LAB_102cc6f18:
    func_0x000107c61170(uVar10);
    uVar4 = uVar8;
  }
  param_3 = uVar4;
  func_0x000107c61170(uVar11);
LAB_102cc6f2c:
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return uVar12;
}



/* Entry: 102cc6f78; end: 102cc6f9b;  */

void FUN_102cc6f78(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102cc6f9c; end: 102cc70af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc6f9c(void)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  func_0x000107c614f0();
  lVar5 = _DAT_112f0ab38;
  func_0x000107c61428(unaff_x20 + _DAT_112f0ab38,auStack_68,0,0);
  lVar5 = *(long *)(unaff_x20 + lVar5);
  uVar4 = 1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar6 = 0xffffffffffffffff;
  if ((*(byte *)(lVar5 + 0x20) & 0x3f) < 6) {
    uVar6 = ~(-1L << (uVar4 & 0x3f));
  }
  uVar6 = uVar6 & *(ulong *)(lVar5 + 0x40);
  func_0x000107c61434(lVar5);
  lVar7 = 0;
  while( true ) {
    for (; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar1 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      func_0x000107c498f8(*(undefined8 *)
                           (*(long *)(lVar5 + 0x38) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                           lVar7 * 0x200));
    }
    bVar3 = SCARRY8(lVar7,1);
    lVar7 = lVar7 + 1;
    if (bVar3) break;
    if ((long)(uVar4 + 0x3f >> 6) <= lVar7) {
      func_0x000107c61574(lVar5);
      func_0x000107c61154(&stack0xffffffffffffff88,PTR_s_dealloc_112525b20);
      return;
    }
    uVar6 = ((ulong *)(lVar5 + 0x40))[lVar7];
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102cc70b0);
  (*pcVar2)();
}



/* Entry: 102cc70b0; end: 102cc70d3; -[SCOperaDisplayLinkProvider dealloc] */

void FUN_102cc70b0(void)

{
  func_0x000107c61174();
  FUN_102cc6f9c();
  return;
}



/* Entry: 102cc70d4; end: 102cc715f; -[SCOperaDisplayLinkProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc70d4(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f0ab38));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f0ab40));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f0ab48));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f0ab50));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f0ab58));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f0ab60));
  if (*(long *)(param_1 + _DAT_112f0ab68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112f0ab68))[1]);
    return;
  }
  return;
}



/* Entry: 102cc7160; end: 102cc7813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cc7160(ulong param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong auStack_78 [3];
  
  lVar13 = _DAT_112f0ab38;
  puVar4 = auStack_78;
  func_0x000107c61428(unaff_x20 + _DAT_112f0ab38,puVar4,0x20,0);
  lVar12 = *(long *)(unaff_x20 + lVar13);
  if ((*(long *)(lVar12 + 0x10) == 0) ||
     (uVar2 = param_1, func_0x000100d23580(), ((ulong)puVar4 & 1) == 0)) {
    func_0x000107c614a8(auStack_78);
    puVar15 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
    func_0x000107c61168(PTR__OBJC_CLASS___CADisplayLink_1126b94a8);
    func_0x000107c42110();
    func_0x000107c61180();
    pcVar1 = *(code **)(unaff_x20 + _DAT_112f0ab68);
    puVar16 = puVar15;
    if (pcVar1 != (code *)0x0) {
      puVar6 = (undefined *)((undefined8 *)(unaff_x20 + _DAT_112f0ab68))[1];
      puVar16 = puVar6;
      func_0x000107c6157c(puVar6);
      (*pcVar1)();
      FUN_102cca8c4(pcVar1,puVar6);
      func_0x000107c61170(puVar15);
    }
    if (param_1 != 0) {
      if (param_1 != 0x5a) {
        if (param_1 != 1000000) {
          auStack_78[0] = param_1;
          func_0x000107c60614(&UNK_1105bead8,auStack_78,&UNK_1105bead8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc7814);
          (*pcVar1)();
        }
        puVar15 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x000107c61168();
        func_0x000107c4c194();
        func_0x000107c61180();
        puVar6 = puVar15;
        func_0x000107c4c8b4();
        func_0x000107c61170(puVar15);
        if ((long)puVar6 < 1) goto LAB_102cc730c;
      }
      func_0x000107c576a4(puVar16);
    }
LAB_102cc730c:
    puVar15 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    func_0x000107c4c190();
    func_0x000107c61180();
    func_0x000107c3d8fc(puVar16);
    func_0x000107c61170(puVar15);
    func_0x000107c61428(unaff_x20 + lVar13,auStack_78,0x21,0);
    func_0x000107c61174(puVar16);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar13);
    func_0x000107c61558(uVar7);
    uVar10 = *(undefined8 *)(unaff_x20 + lVar13);
    *(undefined8 *)(unaff_x20 + lVar13) = 0x8000000000000000;
    func_0x000102cc9fa4(puVar16,param_1,uVar7);
    *(undefined8 *)(unaff_x20 + lVar13) = uVar10;
    func_0x000107c614a8(auStack_78);
    lVar13 = _DAT_112f0ab40;
    func_0x000107c61428(unaff_x20 + _DAT_112f0ab40,auStack_78,0x21,0);
    func_0x000107c61174(puVar16);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar13);
    func_0x000107c61558(uVar7);
    uVar10 = *(undefined8 *)(unaff_x20 + lVar13);
    *(undefined8 *)(unaff_x20 + lVar13) = 0x8000000000000000;
    func_0x000102cc9e78(param_1,puVar16,uVar7);
    func_0x000107c61170(puVar16);
    *(undefined8 *)(unaff_x20 + lVar13) = uVar10;
    func_0x000107c614a8(auStack_78);
  }
  else {
    puVar16 = *(undefined **)(*(long *)(lVar12 + 0x38) + uVar2 * 8);
    func_0x000107c614a8(auStack_78);
    lVar13 = _DAT_112f0ab50;
    puVar4 = auStack_78;
    func_0x000107c61428(unaff_x20 + _DAT_112f0ab50,puVar4,0x20,0);
    lVar13 = *(long *)(unaff_x20 + lVar13);
    if ((*(long *)(lVar13 + 0x10) == 0) ||
       (uVar2 = param_1, func_0x000100d23580(), ((ulong)puVar4 & 1) == 0)) {
      func_0x000107c614a8(auStack_78);
      func_0x000107c61174(puVar16);
    }
    else {
      lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + uVar2 * 8);
      func_0x000107c614a8(auStack_78);
      func_0x000107c61174(puVar16);
      if (lVar13 == 0) {
        func_0x000107c57280(puVar16);
      }
    }
  }
  lVar12 = _DAT_112f0ab50;
  puVar4 = auStack_78;
  func_0x000107c61428(unaff_x20 + _DAT_112f0ab50,puVar4,0x21,0);
  uVar3 = *(ulong *)(unaff_x20 + lVar12);
  func_0x000107c61558();
  lVar14 = *(long *)(unaff_x20 + lVar12);
  *(undefined8 *)(unaff_x20 + lVar12) = 0x8000000000000000;
  uVar2 = param_1;
  func_0x000100d23580();
  uVar11 = (ulong)~(uint)puVar4 & 1;
  lVar13 = *(long *)(lVar14 + 0x10) + uVar11;
  if (SCARRY8(*(long *)(lVar14 + 0x10),uVar11)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc7778);
    (*pcVar1)();
  }
  if (*(long *)(lVar14 + 0x18) < lVar13) {
    func_0x000102cc93c4(lVar13,uVar3,0x112e58fa0,&UNK_10db3db60);
    uVar8 = (uint)uVar3;
    uVar2 = param_1;
    func_0x000100d23580();
    if (((uint)puVar4 & 1) != (uVar8 & 1)) {
      func_0x000107c60624(PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc74d0);
      (*pcVar1)();
    }
  }
  else if ((uVar3 & 1) == 0) {
    FUN_102cc8b08(0x112e58fa0,&UNK_10db3db60);
    *(long *)(unaff_x20 + lVar12) = lVar14;
    goto joined_r0x000102cc77d0;
  }
  *(long *)(unaff_x20 + lVar12) = lVar14;
joined_r0x000102cc77d0:
  if (((ulong)puVar4 & 1) == 0) {
    lVar13 = lVar14 + (uVar2 >> 6) * 8;
    *(ulong *)(lVar13 + 0x40) = *(ulong *)(lVar13 + 0x40) | 1L << (uVar2 & 0x3f);
    *(ulong *)(*(long *)(lVar14 + 0x30) + uVar2 * 8) = param_1;
    *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar2 * 8) = 0;
    if (SCARRY8(*(long *)(lVar14 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc77dc);
      (*pcVar1)();
    }
    *(long *)(lVar14 + 0x10) = *(long *)(lVar14 + 0x10) + 1;
  }
  lVar13 = *(long *)(*(long *)(lVar14 + 0x38) + uVar2 * 8);
  if (!SCARRY8(lVar13,1)) {
    *(long *)(*(long *)(lVar14 + 0x38) + uVar2 * 8) = lVar13 + 1;
    puVar4 = auStack_78;
    func_0x000107c614a8();
    FUN_102cca8d4();
    func_0x000107c613fc();
    puVar4[2] = param_2;
    puVar4[3] = param_3;
    lVar13 = _DAT_112f0ab48;
    puVar9 = auStack_78;
    func_0x000107c61428(unaff_x20 + _DAT_112f0ab48,puVar9,0x20,0);
    lVar12 = *(long *)(unaff_x20 + lVar13);
    if ((*(long *)(lVar12 + 0x10) == 0) ||
       (uVar2 = param_1, func_0x000100d23580(), ((ulong)puVar9 & 1) == 0)) {
      func_0x000107c614a8(auStack_78);
      puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar15 = *(undefined **)(*(long *)(lVar12 + 0x38) + uVar2 * 8);
      func_0x000107c614a8(auStack_78);
      func_0x000107c61434(puVar15);
    }
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(puVar4);
    puVar6 = puVar15;
    func_0x000107c61550();
    if ((((int)puVar6 == 0) || ((long)puVar15 < 0)) ||
       (puVar6 = puVar15, ((ulong)puVar15 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar15 >> 0x3e == 0) {
        puVar5 = *(undefined **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar5 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar15) {
          puVar5 = puVar15;
        }
        func_0x000107c60480(puVar5);
      }
      puVar6 = (undefined *)0x0;
      FUN_102cc85b8(0,puVar5 + 1,1,puVar15);
    }
    uVar3 = (ulong)puVar6 & 0xffffffffffffff8;
    uVar2 = *(ulong *)(uVar3 + 0x10);
    puVar15 = puVar6;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      puVar15 = (undefined *)(ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_102cc85b8(puVar15,uVar2 + 1,1,puVar6);
      uVar3 = (ulong)puVar15 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar3 + 0x10) = uVar2 + 1;
    *(ulong **)(uVar3 + uVar2 * 8 + 0x20) = puVar4;
    func_0x000107c61428(unaff_x20 + lVar13,auStack_78,0x21,0);
    func_0x000107c61434(puVar15);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar13);
    func_0x000107c61558(uVar7);
    uVar10 = *(undefined8 *)(unaff_x20 + lVar13);
    *(undefined8 *)(unaff_x20 + lVar13) = 0x8000000000000000;
    func_0x000102cc9d48(puVar15,param_1,uVar7);
    *(undefined8 *)(unaff_x20 + lVar13) = uVar10;
    func_0x000107c614a8(auStack_78);
    lVar13 = *(long *)(unaff_x20 + _DAT_112f0ab70) + 1;
    if (!SCARRY8(*(long *)(unaff_x20 + _DAT_112f0ab70),1)) {
      *(long *)(unaff_x20 + _DAT_112f0ab70) = lVar13;
      lVar12 = _DAT_112f0ab58;
      func_0x000107c61428(unaff_x20 + _DAT_112f0ab58,auStack_78,0x21,0);
      uVar7 = *(undefined8 *)(unaff_x20 + lVar12);
      func_0x000107c61558(uVar7);
      uVar10 = *(undefined8 *)(unaff_x20 + lVar12);
      *(undefined8 *)(unaff_x20 + lVar12) = 0x8000000000000000;
      func_0x000102cc9c0c(param_1,lVar13,uVar7);
      *(undefined8 *)(unaff_x20 + lVar12) = uVar10;
      func_0x000107c614a8(auStack_78);
      lVar12 = _DAT_112f0ab60;
      func_0x000107c61428(unaff_x20 + _DAT_112f0ab60,auStack_78,0x21,0);
      func_0x000107c6157c(puVar4);
      uVar7 = *(undefined8 *)(unaff_x20 + lVar12);
      func_0x000107c61558(uVar7);
      uVar10 = *(undefined8 *)(unaff_x20 + lVar12);
      *(undefined8 *)(unaff_x20 + lVar12) = 0x8000000000000000;
      func_0x000102cc9adc(puVar4,lVar13,uVar7);
      *(undefined8 *)(unaff_x20 + lVar12) = uVar10;
      func_0x000107c614a8(auStack_78);
      func_0x000107c6142c(puVar15);
      func_0x000107c61574(puVar4);
      func_0x000107c61170(puVar16);
      return lVar13;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc77a4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc777c);
  (*pcVar1)();
}



/* Entry: 102cc7814; end: 102cc78cf;  */

void FUN_102cc7814(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  
  if (param_1 == 0) {
    uVar3 = param_2;
    func_0x000100d23580();
    if ((uVar3 & 1) != 0) {
      iVar1 = (int)*unaff_x20;
      func_0x000107c61558();
      lVar2 = *unaff_x20;
      if (iVar1 == 0) {
        FUN_102cc8850();
      }
      func_0x000107c61574(*(undefined8 *)(*(long *)(lVar2 + 0x38) + param_2 * 8));
      FUN_102cca0d4(param_2,lVar2);
      *unaff_x20 = lVar2;
    }
  }
  else {
    lVar2 = *unaff_x20;
    func_0x000107c61558(lVar2);
    lVar4 = *unaff_x20;
    FUN_102cc9adc(param_1,param_2,lVar2);
    *unaff_x20 = lVar4;
  }
  return;
}



/* Entry: 102cc78d0; end: 102cc7957; -[SCOperaDisplayLinkProvider requestCallbacksWith:callback:] */

undefined8
FUN_102cc78d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1105bea68;
  func_0x000107c613fc(&UNK_1105bea68,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  FUN_102cc7160(param_3,FUN_102cca958,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
  return param_3;
}



/* Entry: 102cc7958; end: 102cc7e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc7958(long param_1)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_78 [24];
  
  lVar9 = _DAT_112f0ab58;
  puVar5 = auStack_78;
  func_0x000107c61428(unaff_x20 + _DAT_112f0ab58,puVar5,0x20,0);
  lVar14 = *(long *)(unaff_x20 + lVar9);
  if ((*(long *)(lVar14 + 0x10) == 0) ||
     (lVar10 = param_1, func_0x000100d23580(), ((ulong)puVar5 & 1) == 0)) {
LAB_102cc7bf8:
    func_0x000107c614a8(auStack_78);
    return;
  }
  uVar13 = *(ulong *)(*(long *)(lVar14 + 0x38) + lVar10 * 8);
  func_0x000107c614a8(auStack_78);
  lVar14 = _DAT_112f0ab38;
  puVar5 = auStack_78;
  func_0x000107c61428(unaff_x20 + _DAT_112f0ab38,puVar5,0x20,0);
  lVar14 = *(long *)(unaff_x20 + lVar14);
  if ((*(long *)(lVar14 + 0x10) == 0) ||
     (uVar6 = uVar13, func_0x000100d23580(), ((ulong)puVar5 & 1) == 0)) goto LAB_102cc7bf8;
  uVar16 = *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar6 * 8);
  func_0x000107c614a8(auStack_78);
  lVar14 = _DAT_112f0ab60;
  puVar5 = auStack_78;
  func_0x000107c61428(unaff_x20 + _DAT_112f0ab60,puVar5,0x20,0);
  lVar10 = *(long *)(unaff_x20 + lVar14);
  if ((*(long *)(lVar10 + 0x10) == 0) ||
     (lVar11 = param_1, func_0x000100d23580(), ((ulong)puVar5 & 1) == 0)) goto LAB_102cc7bf8;
  uVar6 = *(ulong *)(*(long *)(lVar10 + 0x38) + lVar11 * 8);
  func_0x000107c614a8(auStack_78);
  lVar10 = _DAT_112f0ab48;
  puVar5 = auStack_78;
  func_0x000107c61428(unaff_x20 + _DAT_112f0ab48,puVar5,0x20,0);
  lVar11 = *(long *)(unaff_x20 + lVar10);
  if ((*(long *)(lVar11 + 0x10) == 0) ||
     (uVar15 = uVar13, func_0x000100d23580(), ((ulong)puVar5 & 1) == 0)) goto LAB_102cc7bf8;
  uVar15 = *(ulong *)(*(long *)(lVar11 + 0x38) + uVar15 * 8);
  func_0x000107c614a8(auStack_78);
  puVar5 = auStack_78;
  func_0x000107c61428(unaff_x20 + lVar9,puVar5,0x21,0);
  lVar11 = param_1;
  func_0x000100d23580(param_1);
  func_0x000107c61174(uVar16);
  func_0x000107c6157c(uVar6);
  func_0x000107c61434(uVar15);
  if (((ulong)puVar5 & 1) != 0) {
    iVar2 = (int)*(undefined8 *)(unaff_x20 + lVar9);
    func_0x000107c61558();
    uVar17 = *(undefined8 *)(unaff_x20 + lVar9);
    *(undefined8 *)(unaff_x20 + lVar9) = 0x8000000000000000;
    if (iVar2 == 0) {
      FUN_102cc8b08(0x112d4f350,&UNK_10d915190);
    }
    func_0x000102cca240(lVar11,uVar17);
    *(undefined8 *)(unaff_x20 + lVar9) = uVar17;
  }
  func_0x000107c614a8(auStack_78);
  func_0x000107c61428(unaff_x20 + lVar14,auStack_78,0x21,0);
  FUN_102cc7814(0,param_1);
  func_0x000107c614a8(auStack_78);
  lVar14 = _DAT_112f0ab50;
  puVar5 = auStack_78;
  func_0x000107c61428(unaff_x20 + _DAT_112f0ab50,puVar5,0x21,0);
  uVar3 = *(ulong *)(unaff_x20 + lVar14);
  func_0x000107c61558();
  lVar11 = *(long *)(unaff_x20 + lVar14);
  *(undefined8 *)(unaff_x20 + lVar14) = 0x8000000000000000;
  uVar12 = uVar13;
  func_0x000100d23580();
  uVar8 = (ulong)~(uint)puVar5 & 1;
  lVar9 = *(long *)(lVar11 + 0x10) + uVar8;
  if (SCARRY8(*(long *)(lVar11 + 0x10),uVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc7e00);
    (*pcVar1)();
  }
  if (*(long *)(lVar11 + 0x18) < lVar9) {
    func_0x000102cc93c4(lVar9,uVar3,0x112e58fa0,&UNK_10db3db60);
    uVar4 = (uint)uVar3;
    uVar12 = uVar13;
    func_0x000100d23580();
    if (((uint)puVar5 & 1) != (uVar4 & 1)) {
      func_0x000107c60624(PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc7bf8);
      (*pcVar1)();
    }
LAB_102cc7c24:
    *(long *)(unaff_x20 + lVar14) = lVar11;
  }
  else {
    if ((uVar3 & 1) != 0) goto LAB_102cc7c24;
    FUN_102cc8b08(0x112e58fa0,&UNK_10db3db60);
    *(long *)(unaff_x20 + lVar14) = lVar11;
  }
  if (((ulong)puVar5 & 1) == 0) {
    lVar9 = lVar11 + (uVar12 >> 6) * 8;
    *(ulong *)(lVar9 + 0x40) = *(ulong *)(lVar9 + 0x40) | 1L << (uVar12 & 0x3f);
    *(ulong *)(*(long *)(lVar11 + 0x30) + uVar12 * 8) = uVar13;
    *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar12 * 8) = 0;
    if (SCARRY8(*(long *)(lVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc7e80);
      (*pcVar1)();
    }
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
  }
  lVar9 = *(long *)(*(long *)(lVar11 + 0x38) + uVar12 * 8);
  if (SBORROW8(lVar9,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc7e04);
    (*pcVar1)();
  }
  *(long *)(*(long *)(lVar11 + 0x38) + uVar12 * 8) = lVar9 + -1;
  func_0x000107c614a8(auStack_78);
  if (uVar15 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = uVar15 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar15) {
      uVar12 = uVar15;
    }
    func_0x000107c60480();
  }
  if (uVar12 != 0) {
    if ((uVar15 & 0xc000000000000001) == 0) {
      uVar3 = 0;
      do {
        if (*(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10) == uVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc7dfc);
          (*pcVar1)();
        }
        if (*(ulong *)(uVar15 + uVar3 * 8 + 0x20) == uVar6) goto LAB_102cc7d0c;
        uVar3 = uVar3 + 1;
      } while (uVar12 != uVar3);
    }
    else {
      uVar3 = 0;
      do {
        uVar8 = uVar3;
        FUN_102cc8418(uVar3,uVar15);
        func_0x000107c615e8();
        if (uVar8 == uVar6) goto LAB_102cc7d0c;
        uVar8 = uVar3 + 1;
        if (SCARRY8(uVar3,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc7df8);
          (*pcVar1)();
        }
        uVar3 = uVar3 + 1;
      } while (uVar8 != uVar12);
    }
  }
LAB_102cc7d80:
  func_0x000107c6142c(uVar15);
  puVar5 = auStack_78;
  func_0x000107c61428(unaff_x20 + lVar14,puVar5,0x20,0);
  lVar9 = *(long *)(unaff_x20 + lVar14);
  if ((*(long *)(lVar9 + 0x10) == 0) || (func_0x000100d23580(), ((ulong)puVar5 & 1) == 0)) {
    func_0x000107c614a8(auStack_78);
  }
  else {
    lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + uVar13 * 8);
    func_0x000107c614a8(auStack_78);
    if (lVar9 == 0) {
      func_0x000107c57280(uVar16);
    }
  }
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar16);
  return;
LAB_102cc7d0c:
  FUN_102cc7e80(uVar3);
  func_0x000107c61574();
  func_0x000107c61428(unaff_x20 + lVar10,auStack_78,0x21,0);
  func_0x000107c61434(uVar15);
  uVar17 = *(undefined8 *)(unaff_x20 + lVar10);
  func_0x000107c61558(uVar17);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar10);
  *(undefined8 *)(unaff_x20 + lVar10) = 0x8000000000000000;
  func_0x000102cc9d48(uVar15,uVar13,uVar17);
  *(undefined8 *)(unaff_x20 + lVar10) = uVar7;
  func_0x000107c614a8(auStack_78);
  goto LAB_102cc7d80;
}



/* Entry: 102cc7e80; end: 102cc7f0b;  */

undefined8 FUN_102cc7e80(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar4 = *unaff_x20;
  uVar6 = uVar4;
  func_0x000107c61550();
  if ((((int)uVar6 == 0) || ((long)uVar4 < 0)) || ((uVar4 >> 0x3e & 1) != 0)) {
    FUN_102cca3ac();
  }
  uVar6 = uVar4 & 0xffffffffffffff8;
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 8;
    puVar3 = (undefined8 *)(lVar1 + 0x20);
    uVar5 = *puVar3;
    func_0x000107c610b8(puVar3,lVar1 + 0x28,(lVar7 - param_1) * 8);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar4;
    return uVar5;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102cc7f0c);
  (*pcVar2)();
}



/* Entry: 102cc7f0c; end: 102cc7f3b; -[SCOperaDisplayLinkProvider releaseCallbacksFor:] */

void FUN_102cc7f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102cc7958(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cc7f3c; end: 102cc80e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc7f3c(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auStack_68 [24];
  
  lVar4 = _DAT_112f0ab40;
  puVar3 = auStack_68;
  func_0x000107c61428(unaff_x20 + _DAT_112f0ab40,puVar3,0x20,0);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if (*(long *)(lVar4 + 0x10) != 0) {
    func_0x000107c61434(lVar4);
    lVar6 = param_1;
    FUN_102cc82c8();
    if (((ulong)puVar3 & 1) != 0) {
      lVar6 = *(long *)(*(long *)(lVar4 + 0x38) + lVar6 * 8);
      func_0x000107c614a8(auStack_68);
      func_0x000107c6142c(lVar4);
      lVar4 = _DAT_112f0ab48;
      puVar3 = auStack_68;
      func_0x000107c61428(unaff_x20 + _DAT_112f0ab48,puVar3,0x20,0);
      lVar4 = *(long *)(unaff_x20 + lVar4);
      if ((*(long *)(lVar4 + 0x10) == 0) || (func_0x000100d23580(), ((ulong)puVar3 & 1) == 0)) {
        func_0x000107c614a8(auStack_68);
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puVar5 = *(undefined **)(*(long *)(lVar4 + 0x38) + lVar6 * 8);
        func_0x000107c614a8(auStack_68);
        func_0x000107c61434(puVar5);
      }
      if ((ulong)puVar5 >> 0x3e == 0) {
        puVar7 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar7 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar5) {
          puVar7 = puVar5;
        }
        func_0x000107c60480();
      }
      if (puVar7 != (undefined *)0x0) {
        if ((long)puVar7 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102cc80e8);
          (*pcVar2)();
        }
        puVar8 = (undefined *)0x0;
        do {
          if (((ulong)puVar5 & 0xc000000000000001) == 0) {
            puVar9 = *(undefined **)(puVar5 + (long)puVar8 * 8 + 0x20);
            func_0x000107c6157c(puVar9);
          }
          else {
            puVar9 = puVar8;
            FUN_102cc8418(puVar8,puVar5);
          }
          puVar8 = puVar8 + 1;
          pcVar2 = *(code **)(puVar9 + 0x10);
          uVar1 = *(undefined8 *)(puVar9 + 0x18);
          func_0x000107c6157c(uVar1);
          (*pcVar2)(param_1);
          func_0x000107c61574(puVar9);
          func_0x000107c61574(uVar1);
        } while (puVar7 != puVar8);
      }
      func_0x000107c6142c(puVar5);
      return;
    }
    func_0x000107c6142c(lVar4);
  }
  func_0x000107c614a8(auStack_68);
  return;
}



/* Entry: 102cc80e8; end: 102cc824f; -[SCOperaDisplayLinkProvider displayLinkTick:] */

/* WARNING: Possible PIC construction at 0x000102cc8120: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cc8124) */

void FUN_102cc80e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102cc7f3c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102cc8250; end: 102cc826f; -[SCOperaDisplayLinkProvider init] */

void FUN_102cc8250(void)

{
  func_0x000102cc8138();
  return;
}



/* Entry: 102cc8270; end: 102cc82c7;  */

void FUN_102cc8270(void)

{
  ulong *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (((int)lVar3 == 0) || (FUN_102cca8d4(), lVar3 == 0)) {
    puVar1 = (ulong *)0x112f0ac58;
    plVar4 = (long *)&UNK_10db3db78;
  }
  else {
    puVar1 = (ulong *)0x112d36e60;
    plVar4 = (long *)&UNK_10d901170;
  }
  if (*puVar1 == 0 || (*puVar1 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar4 + (long)(int)*plVar4);
    func_0x000107c61518(puVar2,*plVar4 >> 0x20,0,0);
    *puVar1 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102cc82c8; end: 102cc82f7;  */

undefined1  [16] FUN_102cc82c8(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  uint uVar5;
  undefined1 auVar6 [16];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  func_0x000107c60114();
  uVar4 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    uVar5 = 0;
  }
  else {
    func_0x000102cca914(0);
    do {
      uVar2 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8);
      func_0x000107c61174();
      uVar3 = uVar2;
      func_0x000107c60118();
      uVar5 = (uint)uVar3;
      func_0x000107c61170(uVar2);
      if ((uVar3 & 1) != 0) break;
      uVar1 = uVar1 + 1 & ~uVar4;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  auVar6._8_4_ = uVar5 & 1;
  auVar6._0_8_ = uVar1;
  auVar6._12_4_ = 0;
  return auVar6;
}



/* Entry: 102cc82f8; end: 102cc83b3;  */

undefined1  [16] FUN_102cc82f8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  uint uVar4;
  undefined1 auVar5 [16];
  
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    func_0x000102cca914(0);
    do {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8);
      func_0x000107c61174();
      uVar2 = uVar1;
      func_0x000107c60118();
      uVar4 = (uint)uVar2;
      func_0x000107c61170(uVar1);
      if ((uVar2 & 1) != 0) break;
      param_2 = param_2 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar5._8_4_ = uVar4 & 1;
  auVar5._0_8_ = param_2;
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 102cc83b4; end: 102cc8417;  */

void FUN_102cc83b4(long param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(long *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 102cc8418; end: 102cc85b7;  */

ulong FUN_102cc8418(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cc84e4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cc84e8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_102cca8d4();
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar4 = param_1;
    FUN_102cca8d4();
    uVar5 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x6b6361626c6c6143,0xef72657070617257);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102cc85b8);
  (*pcVar2)();
}



/* Entry: 102cc85b8; end: 102cc86df;  */

ulong FUN_102cc85b8(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc86e0);
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
  FUN_102cc86e0(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc86dc);
      (*pcVar1)();
    }
    FUN_102cc8760(0,uVar2,uVar3 + 0x20,param_4);
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


