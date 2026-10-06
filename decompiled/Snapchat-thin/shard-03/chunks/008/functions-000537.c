/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102d2d9b8; end: 102d2da1f;  */

undefined8 FUN_102d2d9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  func_0x000102d3255c(param_1,param_2,param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102d2da20; end: 102d2daab; -[AdLifecycleWatermarkEventsTracker initWithLogger:adConfigProvider:flipper:] */

undefined8
FUN_102d2da20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000102d3255c(param_3,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(param_5);
  return param_3;
}



/* Entry: 102d2daac; end: 102d2dabb; -[AdLifecycleWatermarkEventsTracker adCreationLifecyleEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d2daac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f0e5e0));
  return;
}



/* Entry: 102d2dabc; end: 102d2db83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d2dabc(long param_1,long param_2)

{
  int iVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    iVar1 = *(int *)(param_2 + _DAT_113011058);
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        FUN_102d2db84(param_2);
      }
      else if (iVar1 == 1) {
        FUN_102d2dd34(param_2);
      }
    }
    else if (iVar1 == 2) {
      FUN_102d2de78(param_2);
    }
    else if (iVar1 == 3) {
      FUN_102d2dfb0(param_2);
    }
    else if (iVar1 == 4) {
      FUN_102d2e210(param_2);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102d2db84; end: 102d2dd33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d2db84(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_68 [24];
  
  lVar6 = _DAT_112f0e620;
  uVar4 = ((ulong *)(param_1 + _DAT_113011050))[1];
  if (uVar4 != 0) {
    uVar7 = *(ulong *)(param_1 + _DAT_113011050);
    uVar1 = uVar7 & 0xffffffffffff;
    if ((uVar4 & 0x2000000000000000) != 0) {
      uVar1 = uVar4 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      func_0x000107c61428(unaff_x20 + _DAT_112f0e620,auStack_68,0x20,0);
      lVar6 = *(long *)(unaff_x20 + lVar6);
      if (*(long *)(lVar6 + 0x10) != 0) {
        func_0x000107c61434(lVar6);
        func_0x000100029284();
        if ((uVar4 & 1) != 0) {
          lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + uVar7 * 8);
          func_0x000107c6157c(lVar5);
          func_0x000107c614a8(auStack_68);
          func_0x000107c6142c(lVar6);
          if (*(long *)(lVar5 + 0x110) == 0) {
            puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8();
            func_0x000107c45a48();
            uVar3 = *(undefined8 *)(lVar5 + 0x110);
            *(undefined **)(lVar5 + 0x110) = puVar2;
            func_0x000107c61170(uVar3);
          }
          if (*(long *)(lVar5 + 0x118) == 0) {
            puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8();
            func_0x000107c45a48();
            uVar3 = *(undefined8 *)(lVar5 + 0x118);
            *(undefined **)(lVar5 + 0x118) = puVar2;
            func_0x000107c61170(uVar3);
          }
          if (*(long *)(lVar5 + 0x120) != 0) {
            func_0x000107c61574(lVar5);
            return;
          }
          uVar3 = *(undefined8 *)(param_1 + _DAT_113011070);
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8();
          func_0x000107c466c0(uVar3);
          uVar3 = *(undefined8 *)(lVar5 + 0x120);
          *(undefined **)(lVar5 + 0x120) = puVar2;
          func_0x000107c61574(lVar5);
          func_0x000107c61170(uVar3);
          return;
        }
        func_0x000107c6142c(lVar6);
      }
      func_0x000107c614a8(auStack_68);
    }
  }
  return;
}



/* Entry: 102d2dd34; end: 102d2de77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d2dd34(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  lVar4 = _DAT_112f0e620;
  uVar2 = ((ulong *)(param_1 + _DAT_113011050))[1];
  if (uVar2 != 0) {
    uVar5 = *(ulong *)(param_1 + _DAT_113011050);
    uVar1 = uVar5 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      func_0x000107c61428(unaff_x20 + _DAT_112f0e620,auStack_58,0x20,0);
      lVar4 = *(long *)(unaff_x20 + lVar4);
      if (*(long *)(lVar4 + 0x10) != 0) {
        func_0x000107c61434(lVar4);
        func_0x000100029284();
        if ((uVar2 & 1) != 0) {
          lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + uVar5 * 8);
          func_0x000107c6157c(lVar3);
          func_0x000107c614a8(auStack_58);
          func_0x000107c6142c(lVar4);
          *(undefined8 *)(lVar3 + 0xf0) = *(undefined8 *)(param_1 + _DAT_113011080);
          *(undefined8 *)(lVar3 + 0xf8) = *(undefined8 *)(param_1 + _DAT_113011088);
          *(undefined8 *)(lVar3 + 0x100) = *(undefined8 *)(param_1 + _DAT_113011090);
          *(undefined8 *)(lVar3 + 0xe8) = *(undefined8 *)(param_1 + _DAT_113011078);
          *(undefined8 *)(lVar3 + 0x108) = *(undefined8 *)(param_1 + _DAT_113011098);
          func_0x000107c61574(lVar3);
          return;
        }
        func_0x000107c6142c(lVar4);
      }
      func_0x000107c614a8(auStack_58);
    }
  }
  return;
}



/* Entry: 102d2de78; end: 102d2dfaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d2de78(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_68 [24];
  
  lVar5 = _DAT_112f0e620;
  uVar2 = ((long *)(param_1 + _DAT_113011050))[1];
  if (uVar2 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_113011050);
    func_0x000107c61428(unaff_x20 + _DAT_112f0e620,auStack_68,0x20,0);
    lVar5 = *(long *)(unaff_x20 + lVar5);
    if (*(long *)(lVar5 + 0x10) != 0) {
      func_0x000107c61434(lVar5);
      lVar6 = lVar3;
      uVar1 = uVar2;
      func_0x000100029284();
      if ((uVar1 & 1) != 0) {
        lVar6 = *(long *)(*(long *)(lVar5 + 0x38) + lVar6 * 8);
        func_0x000107c6157c(lVar6);
        func_0x000107c614a8(auStack_68);
        func_0x000107c6142c(lVar5);
        *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)(param_1 + _DAT_1130110a0);
        uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0e5e0);
        func_0x000103e02d6c(0);
        func_0x000107c61434(uVar2);
        func_0x000103e01428(lVar3,uVar2,2);
        func_0x000107c4d664(uVar4);
        func_0x000107c61574(lVar6);
        func_0x000107c61170(lVar3);
        return;
      }
      func_0x000107c6142c(lVar5);
    }
    func_0x000107c614a8(auStack_68);
  }
  return;
}



/* Entry: 102d2dfb0; end: 102d2e20f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d2dfb0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_60 [16];
  
  lVar7 = ((undefined8 *)(param_1 + _DAT_113011050))[1];
  if ((lVar7 != 0) && (*(int *)(param_1 + _DAT_1130110b0) == 3)) {
    uVar9 = *(undefined8 *)(param_1 + _DAT_113011050);
    lVar4 = 0;
    FUN_102d2cae8();
    func_0x000107c613fc();
    FUN_102d2c994();
    func_0x000107c61168(PTR_PTR_1126afec0);
    uVar10 = *(undefined8 *)(param_1 + _DAT_1130110b8);
    func_0x000107c51b38();
    *(undefined8 *)(lVar4 + 0x20) = uVar10;
    puVar1 = (undefined8 *)(param_1 + _DAT_1130110a8);
    uVar8 = *(undefined8 *)(lVar4 + 0x160);
    uVar10 = puVar1[1];
    uVar11 = *puVar1;
    *(undefined8 *)(lVar4 + 0x160) = puVar1[1];
    *(undefined8 *)(lVar4 + 0x158) = uVar11;
    func_0x000107c61434(uVar10);
    func_0x000107c6142c(uVar8);
    uVar10 = *(undefined8 *)(lVar4 + 0x150);
    *(undefined8 *)(lVar4 + 0x148) = uVar9;
    *(long *)(lVar4 + 0x150) = lVar7;
    func_0x000107c61434(lVar7);
    func_0x000107c6142c(uVar10);
    uVar10 = 0;
    if (*(long *)(param_1 + _DAT_1130110d8) != 0) {
      uVar10 = *(undefined8 *)(*(long *)(param_1 + _DAT_1130110d8) + _DAT_113090e78);
    }
    *(undefined8 *)(lVar4 + 0x90) = uVar10;
    puVar5 = PTR_PTR_1126b7410;
    func_0x000107c61168();
    func_0x000107c5a9bc();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102d2e210);
      (*pcVar3)();
    }
    puVar6 = puVar5;
    func_0x000107c42248();
    func_0x000107c61170(puVar5);
    *(undefined **)(lVar4 + 0x30) = puVar6;
    lVar2 = _DAT_112f0e620;
    func_0x000107c61428(unaff_x20 + _DAT_112f0e620,auStack_60,0x21,0);
    func_0x000107c61434(lVar7);
    func_0x000107c6157c(lVar4);
    uVar10 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c61558(uVar10);
    uVar8 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined8 *)(unaff_x20 + lVar2) = 0x8000000000000000;
    FUN_102d31e50(lVar4,uVar9,lVar7,uVar10);
    func_0x000107c6142c(lVar7);
    *(undefined8 *)(unaff_x20 + lVar2) = uVar8;
    func_0x000107c614a8(auStack_60);
    if (*(char *)(unaff_x20 + _DAT_112f0e5f0) == '\x01') {
      func_0x000100087bd4(0x102d33440,auStack_60,PTR___sytN_11034f1b0 + 8);
    }
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f0e5e0);
    func_0x000103e02d6c(0);
    func_0x000107c61434(lVar7);
    func_0x000103e01428(uVar9,lVar7,8);
    func_0x000107c4d664(uVar10);
    func_0x000107c61574(lVar4);
    func_0x000107c61170(uVar9);
  }
  return;
}



/* Entry: 102d2e210; end: 102d2e38f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d2e210(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  
  lVar5 = _DAT_112f0e620;
  uVar2 = ((long *)(param_1 + _DAT_113011050))[1];
  if (uVar2 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_113011050);
    func_0x000107c61428(unaff_x20 + _DAT_112f0e620,auStack_68,0x20,0);
    lVar5 = *(long *)(unaff_x20 + lVar5);
    if (*(long *)(lVar5 + 0x10) != 0) {
      func_0x000107c61434(lVar5);
      lVar4 = lVar3;
      uVar1 = uVar2;
      func_0x000100029284();
      if ((uVar1 & 1) != 0) {
        lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + lVar4 * 8);
        func_0x000107c6157c(lVar4);
        func_0x000107c614a8(auStack_68);
        func_0x000107c6142c(lVar5);
        if (*(int *)(param_1 + _DAT_1130110b0) == 3) {
          func_0x000107c61168(PTR_PTR_1126afec0);
          uVar6 = *(undefined8 *)(param_1 + _DAT_1130110c0);
          func_0x000107c51b38();
          *(undefined8 *)(lVar4 + 0x28) = uVar6;
          *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(param_1 + _DAT_1130110d0);
          uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f0e5e0);
          func_0x000103e02d6c(0);
          func_0x000107c61434(uVar2);
          func_0x000103e01428(lVar3,uVar2,1);
          func_0x000107c4d664(uVar6);
          func_0x000107c61574(lVar4);
          func_0x000107c61170(lVar3);
          return;
        }
        func_0x000107c61574(lVar4);
        return;
      }
      func_0x000107c6142c(lVar5);
    }
    func_0x000107c614a8(auStack_68);
  }
  return;
}



/* Entry: 102d2e390; end: 102d2e3f7; -[AdLifecycleWatermarkEventsTracker onAdOperationEvent:] */

/* WARNING: Possible PIC construction at 0x000102d2e3e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d2e3e4) */

void FUN_102d2e390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102d2e3f8(param_3,&UNK_1105c4fd8,FUN_102d32884,&UNK_1105c4ff0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d2e3f8; end: 102d2e4df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d2e3f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar3 = &puStack_80;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0e5e8);
  puVar2 = &UNK_1105c4fb0;
  func_0x000107c613fc(&UNK_1105c4fb0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  func_0x000107c613fc(param_2,0x20,7);
  *(undefined **)(param_2 + 0x10) = puVar2;
  *(undefined8 *)(param_2 + 0x18) = param_1;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  uStack_68 = param_4;
  uStack_60 = param_3;
  lStack_58 = param_2;
  func_0x000107c60bc4(&puStack_80);
  lVar1 = lStack_58;
  func_0x000107c61174(param_1);
  func_0x000107c61574(lVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 102d2e4e0; end: 102d2e53b;  */

void FUN_102d2e4e0(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102d2e53c(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102d2e53c; end: 102d2e883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d2e53c(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 auStack_68 [24];
  
  lVar7 = _DAT_112f0e620;
  lVar6 = *(long *)(param_1 + _DAT_11308f130);
  uVar2 = ((long *)(param_1 + _DAT_11308f130))[1];
  func_0x000107c61428(unaff_x20 + _DAT_112f0e620,auStack_68,0x20,0);
  lVar7 = *(long *)(unaff_x20 + lVar7);
  if (*(long *)(lVar7 + 0x10) == 0) {
LAB_102d2e748:
    func_0x000107c614a8(auStack_68);
    return;
  }
  func_0x000107c61434(lVar7);
  lVar10 = lVar6;
  uVar9 = uVar2;
  func_0x000100029284();
  if ((uVar9 & 1) == 0) {
    func_0x000107c6142c(lVar7);
    goto LAB_102d2e748;
  }
  lVar10 = *(long *)(*(long *)(lVar7 + 0x38) + lVar10 * 8);
  func_0x000107c6157c(lVar10);
  func_0x000107c614a8(auStack_68);
  func_0x000107c6142c(lVar7);
  *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(param_1 + _DAT_11308f108);
  puVar1 = (undefined8 *)(param_1 + _DAT_11308f138);
  uVar8 = *(undefined8 *)(lVar10 + 0x130);
  uVar4 = puVar1[1];
  uVar12 = *puVar1;
  *(undefined8 *)(lVar10 + 0x130) = puVar1[1];
  *(undefined8 *)(lVar10 + 0x128) = uVar12;
  func_0x000107c61434(uVar4);
  func_0x000107c6142c(uVar8);
  puVar1 = (undefined8 *)(param_1 + _DAT_11308f150);
  uVar8 = *(undefined8 *)(lVar10 + 0x140);
  uVar4 = puVar1[1];
  uVar12 = *puVar1;
  *(undefined8 *)(lVar10 + 0x140) = puVar1[1];
  *(undefined8 *)(lVar10 + 0x138) = uVar12;
  func_0x000107c61434(uVar4);
  func_0x000107c6142c(uVar8);
  uVar4 = *(undefined8 *)(param_1 + _DAT_113815200);
  func_0x000103bfd6b4();
  uVar8 = *(undefined8 *)(lVar10 + 0x170);
  *(undefined8 *)(lVar10 + 0x168) = uVar4;
  *(ulong *)(lVar10 + 0x170) = uVar9;
  func_0x000107c6142c(uVar8);
  uVar9 = *(ulong *)(param_1 + _DAT_113815208);
  if (uVar9 != 0) {
    uVar11 = uVar9 & 0xffffffffffffff8;
    if (uVar9 >> 0x3e == 0) {
      uVar5 = *(ulong *)(uVar11 + 0x10);
    }
    else {
      uVar5 = uVar9;
      if (-1 < (long)uVar9) {
        uVar5 = uVar11;
      }
      func_0x000107c60480();
    }
    if (uVar5 != 0) {
      if ((uVar9 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar11 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102d2e7a4);
          (*pcVar3)();
        }
        uVar9 = *(ulong *)(*(long *)(uVar9 + 0x20) + _DAT_11308f220);
        if (uVar9 != 0) {
          func_0x000107c61434(uVar9);
LAB_102d2e6c0:
          if (uVar9 >> 0x3e == 0) {
            uVar11 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar11 = uVar9 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar9) {
              uVar11 = uVar9;
            }
            func_0x000107c60480();
          }
          if (uVar11 != 0) {
            if ((uVar9 & 0xc000000000000001) == 0) {
              if (*(long *)((uVar9 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102d2e884);
                (*pcVar3)();
              }
              lVar7 = *(long *)(uVar9 + 0x20);
              func_0x000107c61174();
            }
            else {
              lVar7 = 0;
              func_0x000101542dd0(0,uVar9);
            }
            func_0x000107c6142c(uVar9);
            *(bool *)(lVar10 + 0xe0) = *(int *)(lVar7 + _DAT_11308f310) == 0;
            *(undefined8 *)(lVar10 + 0x178) = *(undefined8 *)(param_1 + _DAT_11308f128);
            uVar4 = *(undefined8 *)(lVar7 + _DAT_11308f308);
            goto LAB_102d2e7e4;
          }
          func_0x000107c6142c(uVar9);
        }
      }
      else {
        lVar7 = 0;
        func_0x000100e471e4(0,uVar9);
        uVar9 = *(ulong *)(lVar7 + _DAT_11308f220);
        func_0x000107c61434(uVar9);
        func_0x000107c615e8(lVar7);
        if (uVar9 != 0) goto LAB_102d2e6c0;
      }
    }
  }
  lVar7 = 0;
  *(undefined1 *)(lVar10 + 0xe0) = 1;
  *(undefined8 *)(lVar10 + 0x178) = *(undefined8 *)(param_1 + _DAT_11308f128);
  uVar4 = 0;
LAB_102d2e7e4:
  *(undefined8 *)(lVar10 + 0x50) = uVar4;
  func_0x000107c61168(PTR_PTR_1126afec0);
  func_0x000107c41018();
  *(undefined8 *)(lVar10 + 0x188) = uVar4;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0e5e0);
  func_0x000103e02d6c(0);
  func_0x000107c61434(uVar2);
  func_0x000103e01428(lVar6,uVar2,3);
  func_0x000107c4d664(uVar4);
  func_0x000107c61574(lVar10);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  return;
}



/* Entry: 102d2e884; end: 102d2e8eb; -[AdLifecycleWatermarkEventsTracker onAdResponseResolved:] */

/* WARNING: Possible PIC construction at 0x000102d2e8d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d2e8d8) */

void FUN_102d2e884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102d2e3f8(param_3,&UNK_1105c5028,FUN_102d328f4,&UNK_1105c5040);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d2e8ec; end: 102d2e96b;  */

void FUN_102d2e8ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102d2e96c(param_1,param_3,param_4);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102d2e96c; end: 102d2eb67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d2e96c(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112f0e620;
  func_0x000107c61428(unaff_x20 + _DAT_112f0e620,auStack_68,0x20,0);
  lVar7 = *(long *)(unaff_x20 + lVar1);
  if (*(long *)(lVar7 + 0x10) != 0) {
    func_0x000107c61434(lVar7);
    lVar9 = param_2;
    uVar5 = param_3;
    func_0x000100029284();
    if ((uVar5 & 1) != 0) {
      lVar9 = *(long *)(*(long *)(lVar7 + 0x38) + lVar9 * 8);
      func_0x000107c6157c(lVar9);
      func_0x000107c614a8(auStack_68);
      func_0x000107c6142c(lVar7);
      func_0x000107c6157c(lVar9);
      goto LAB_102d2eab8;
    }
    func_0x000107c6142c(lVar7);
  }
  func_0x000107c614a8(auStack_68);
  lVar9 = 0;
  FUN_102d2cae8();
  func_0x000107c613fc();
  FUN_102d2c994();
  func_0x000107c61428(unaff_x20 + lVar1,auStack_68,0x21,0);
  func_0x000107c61580(lVar9,2);
  func_0x000107c61434(param_3);
  uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61558(uVar8);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
  FUN_102d31e50(lVar9,param_2,param_3,uVar8);
  func_0x000107c6142c(param_3);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar6;
  func_0x000107c614a8(auStack_68);
  uVar8 = *(undefined8 *)(lVar9 + 0x150);
  *(long *)(lVar9 + 0x148) = param_2;
  *(ulong *)(lVar9 + 0x150) = param_3;
  func_0x000107c6142c(uVar8);
  func_0x000107c61434(param_3);
LAB_102d2eab8:
  *(undefined8 *)(lVar9 + 0x58) = param_1;
  puVar3 = PTR_PTR_1126b7410;
  func_0x000107c61168();
  func_0x000107c5a9bc();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    puVar4 = puVar3;
    func_0x000107c42248();
    func_0x000107c61170(puVar3);
    *(undefined **)(lVar9 + 0x68) = puVar4;
    func_0x000107c61574(lVar9);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f0e5e0);
    func_0x000103e02d6c(0);
    func_0x000107c61434(param_3);
    func_0x000103e01428(param_2,param_3,4);
    func_0x000107c4d664(uVar8);
    func_0x000107c61574(lVar9);
    func_0x000107c61170(param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102d2eb68);
  (*pcVar2)();
}



/* Entry: 102d2eb68; end: 102d2eb83; -[AdLifecycleWatermarkEventsTracker onAdMediaStartDownload:mediaStartDownloadTimestamp:] */

void FUN_102d2eb68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  FUN_102d2fb80(param_1,param_4,param_3,&UNK_1105c5078,0x102d328fc,&UNK_1105c5090);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102d2eb84; end: 102d2ef0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d2eb84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0e5e8);
  puVar1 = &UNK_1105c4fb0;
  func_0x000107c613fc(&UNK_1105c4fb0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1105c50c8;
  func_0x000107c613fc(&UNK_1105c50c8,0x6a,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  puVar2[0x38] = param_5;
  puVar2[0x39] = param_6;
  *(undefined8 *)(puVar2 + 0x40) = param_7;
  *(undefined8 *)(puVar2 + 0x48) = param_8;
  *(undefined8 *)(puVar2 + 0x50) = param_9;
  *(undefined8 *)(puVar2 + 0x58) = param_10;
  *(undefined8 *)(puVar2 + 0x60) = param_11;
  puVar2[0x68] = (undefined1)param_12;
  puVar2[0x69] = param_12._1_1_;
  pcStack_80 = FUN_102d3290c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1105c50e0;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar1 = puStack_78;
  func_0x000107c61434(param_10);
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_8);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 102d2ef0c; end: 102d2f01b; -[AdLifecycleWatermarkEventsTracker onAdMediaFinishDownload:mediaFinishDownloadTimestamp:errorCode:mediaCacheHit:mediaDownloadSuccess:mediaURL:adServeItemId:mediaLocationType:enableMediaDownloadMetricV1:enableMediaDownloadMetricV2:] */

/* WARNING: Possible PIC construction at 0x000102d2efe8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d2efec) */

void FUN_102d2ef0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,long param_8,long param_9
                  ,undefined8 param_10,undefined1 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_4);
  uVar2 = param_3;
  if (param_8 == 0) {
    param_8 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_8);
    uVar1 = uVar2;
  }
  if (param_9 == 0) {
    param_9 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_9);
  }
  func_0x000107c61174(param_2);
  FUN_102d2eb84(param_1,param_4,param_3,param_5,param_6,param_7,param_8,uVar1,param_9,uVar2,param_10
                ,param_11);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102d2f01c; end: 102d2f723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d2f01c(long param_1,undefined1 *param_2,ulong param_3,undefined8 param_4,
                  undefined1 *param_5,undefined *param_6,undefined1 *param_7,undefined8 param_8,
                  byte param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long unaff_x20;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined1 *puStack_a0;
  undefined1 auStack_88 [40];
  
  ppuVar10 = &PTR_PTR_1126ca9a8;
  if ((param_3 & 1) == 0) {
    ppuVar10 = &PTR_PTR_1126ca9b0;
  }
  ppuVar1 = &PTR_PTR_1126ca9a0;
  if ((param_9 & 1) == 0) {
    ppuVar1 = ppuVar10;
  }
  puVar6 = *ppuVar1;
  puVar16 = param_2;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar18 = *(undefined1 **)(param_1 + 0x130);
  if (puVar18 == (undefined1 *)0x0) {
    func_0x000107c61174(puVar6);
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined8 *)(param_1 + 0x128);
    func_0x000107c61174(puVar6);
    func_0x000107c61434(puVar18);
    puVar16 = puVar18;
    func_0x000107c5fadc(uVar17);
    func_0x000107c6142c(puVar18);
  }
  func_0x000107c522e0(puVar6);
  func_0x000107c61170(uVar17);
  if (param_7 == (undefined1 *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = param_6;
    puVar16 = param_7;
    func_0x000107c5fadc(param_6);
  }
  func_0x000107c523d0(puVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c522c0(puVar6);
  puVar18 = *(undefined1 **)(param_1 + 0x140);
  if (puVar18 == (undefined1 *)0x0) {
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined8 *)(param_1 + 0x138);
    func_0x000107c61434(puVar18);
    puVar16 = puVar18;
    func_0x000107c5fadc(uVar17);
    func_0x000107c6142c(puVar18);
  }
  func_0x000107c57dd8(puVar6);
  func_0x000107c61170(uVar17);
  puVar18 = *(undefined1 **)(param_1 + 0x170);
  if (puVar18 == (undefined1 *)0x0) {
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined8 *)(param_1 + 0x168);
    func_0x000107c61434(puVar18);
    puVar16 = puVar18;
    func_0x000107c5fadc(uVar17);
    func_0x000107c6142c(puVar18);
  }
  func_0x000107c52444(puVar6);
  func_0x000107c61170(uVar17);
  puVar7 = *(undefined **)(param_1 + 0x178);
  func_0x0001084b952c();
  func_0x000107c52384(puVar6);
  func_0x000107c52328(puVar6);
  FUN_102d3369c(*(undefined8 *)(param_1 + 0x50));
  func_0x000107c52330(puVar6);
  FUN_102d3369c(*(double *)(param_1 + 0x60) - *(double *)(param_1 + 0x58));
  func_0x000107c5232c(puVar6);
  if (param_5 == (undefined1 *)0x0) {
    param_4 = 0;
  }
  else {
    func_0x000107c5fadc(param_4);
    puVar16 = param_5;
  }
  func_0x000107c52334(puVar6);
  func_0x000107c61170(param_4);
  func_0x000107c542a4(puVar6);
  func_0x000107c56498(puVar6);
  func_0x0001084b9504(param_8);
  func_0x000107c56448(puVar6);
  func_0x000107c61170(puVar6);
  if (((param_3 & 1) == 0) && (0 < (long)param_2)) {
    func_0x000107c59860(puVar6);
  }
  lVar8 = *(long *)(unaff_x20 + _DAT_112f0e600);
  if (lVar8 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar8 != 0) {
      func_0x000107c4bfb0();
      func_0x000107c615e8(lVar8);
    }
  }
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0();
  puVar15 = *(undefined1 **)(param_1 + 0x130);
  puVar18 = puVar16;
  if (puVar15 != (undefined1 *)0x0) {
    puVar14 = *(undefined **)(param_1 + 0x128);
    uVar2 = (ulong)puVar14 & 0xffffffffffff;
    if (((ulong)puVar15 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar15 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110e4fbf8;
      func_0x000107c5faec();
      ppuStack_a8 = ppuVar10;
      puStack_a0 = puVar16;
      func_0x000107c61434(puVar15);
      func_0x000107c61434(puVar16);
      puVar3 = PTR___sSSN_11034da80;
      func_0x000107c602d4(auStack_88,&ppuStack_a8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      puStack_b0 = puVar3;
      puStack_c8 = puVar14;
      puStack_c0 = puVar15;
      func_0x000100102924(&puStack_c8,&ppuStack_a8);
      puVar14 = puVar9;
      func_0x000107c61558(puVar9);
      puVar18 = auStack_88;
      puStack_c8 = puVar9;
      func_0x00010192c094(&ppuStack_a8,puVar18,puVar14);
      func_0x0001007bbff0(auStack_88);
      func_0x000107c6142c(puVar16);
      puVar9 = puStack_c8;
    }
  }
  func_0x000107c31154();
  func_0x000107c61180();
  if (puVar7 != (undefined *)0x0) {
    puVar14 = puVar7;
    func_0x000107c5faec();
    puVar16 = puVar18;
    func_0x000107c61170(puVar7);
    uVar2 = (ulong)puVar14 & 0xffffffffffff;
    if (((ulong)puVar18 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar18 >> 0x38 & 0xf;
    }
    if (uVar2 == 0) {
      func_0x000107c6142c(puVar18);
      puVar18 = puVar16;
    }
    else {
      ppuVar10 = &PTR____CFConstantStringClassReference_110e4fc38;
      func_0x000107c5faec();
      ppuStack_a8 = ppuVar10;
      puStack_a0 = puVar16;
      func_0x000107c61434(puVar16);
      puVar7 = PTR___sSSN_11034da80;
      func_0x000107c602d4(auStack_88,&ppuStack_a8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      puStack_b0 = puVar7;
      puStack_c8 = puVar14;
      puStack_c0 = puVar18;
      func_0x000100102924(&puStack_c8,&ppuStack_a8);
      puVar7 = puVar9;
      func_0x000107c61558(puVar9);
      puVar18 = auStack_88;
      puStack_c8 = puVar9;
      func_0x00010192c094(&ppuStack_a8,puVar18,puVar7);
      func_0x0001007bbff0(auStack_88);
      func_0x000107c6142c(puVar16);
      puVar9 = puStack_c8;
    }
  }
  if (param_7 != (undefined1 *)0x0) {
    uVar2 = (ulong)param_6 & 0xffffffffffff;
    if (((ulong)param_7 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)param_7 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110e4fc78;
      func_0x000107c5faec();
      ppuStack_a8 = ppuVar10;
      puStack_a0 = puVar18;
      func_0x000107c61434(param_7);
      func_0x000107c61434(puVar18);
      puVar7 = PTR___sSSN_11034da80;
      func_0x000107c602d4(auStack_88,&ppuStack_a8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      puStack_b0 = puVar7;
      puStack_c8 = param_6;
      puStack_c0 = param_7;
      func_0x000100102924(&puStack_c8,&ppuStack_a8);
      puVar7 = puVar9;
      func_0x000107c61558(puVar9);
      puVar16 = auStack_88;
      puStack_c8 = puVar9;
      func_0x00010192c094(&ppuStack_a8,puVar16,puVar7);
      func_0x0001007bbff0(auStack_88);
      func_0x000107c6142c(puVar18);
      puVar18 = puVar16;
      puVar9 = puStack_c8;
    }
  }
  puVar16 = *(undefined1 **)(param_1 + 0x170);
  if (puVar16 != (undefined1 *)0x0) {
    puVar7 = *(undefined **)(param_1 + 0x168);
    uVar2 = (ulong)puVar7 & 0xffffffffffff;
    if (((ulong)puVar16 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar16 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110e4fc18;
      func_0x000107c5faec();
      ppuStack_a8 = ppuVar10;
      puStack_a0 = puVar18;
      func_0x000107c61434(puVar16);
      func_0x000107c61434(puVar18);
      puVar14 = PTR___sSSN_11034da80;
      func_0x000107c602d4(auStack_88,&ppuStack_a8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      puStack_b0 = puVar14;
      puStack_c8 = puVar7;
      puStack_c0 = puVar16;
      func_0x000100102924(&puStack_c8,&ppuStack_a8);
      puVar7 = puVar9;
      func_0x000107c61558(puVar9);
      puStack_c8 = puVar9;
      func_0x00010192c094(&ppuStack_a8,auStack_88,puVar7);
      func_0x0001007bbff0(auStack_88);
      func_0x000107c6142c(puVar18);
      puVar9 = puStack_c8;
    }
  }
  lVar8 = *(long *)(unaff_x20 + _DAT_112f0e618);
  if (lVar8 != 0) {
    puVar7 = puVar6;
    func_0x000107c44044();
    func_0x000107c61180();
    if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102d2f720);
      (*pcVar5)();
    }
    ppuVar10 = &PTR____CFConstantStringClassReference_110e4fcd8;
    func_0x000107c61174();
    func_0x000107c5fadc(param_11,param_12);
    puVar4 = PTR___sypN_11034f1a8;
    puVar11 = puVar9;
    func_0x000107c5f9dc(puVar9,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    puVar12 = puVar6;
    func_0x000107c3e1c4();
    func_0x000107c61180();
    puVar3 = PTR___ss11AnyHashableVSHsWP_11034e450;
    puVar14 = PTR___ss11AnyHashableVN_11034e448;
    if (puVar12 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102d2f724);
      (*pcVar5)();
    }
    puVar13 = puVar12;
    func_0x000107c5f9e8();
    func_0x000107c61170(puVar12);
    puVar12 = puVar13;
    func_0x000107c5f9dc(puVar13,puVar14,puVar4 + 8,puVar3);
    func_0x000107c6142c(puVar13);
    func_0x000107c4e12c(lVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(ppuVar10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar12);
  }
  func_0x000107c61170(puVar6);
  func_0x000107c6142c(puVar9);
  return;
}



/* Entry: 102d2f724; end: 102d2f953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d2f724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0e5e8);
  puVar1 = &UNK_1105c4fb0;
  func_0x000107c613fc(&UNK_1105c4fb0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1105c5118;
  func_0x000107c613fc(&UNK_1105c5118,0x38,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  *(undefined8 *)(puVar2 + 0x30) = param_1;
  pcStack_60 = FUN_102d32964;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1105c5130;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c61434(param_3);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 102d2f954; end: 102d2fadb; -[AdLifecycleWatermarkEventsTracker onAdOpportunity:adOpportunityType:adOpportunityTimestamp:] */

void FUN_102d2f954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  FUN_102d2f724(param_1,param_4,param_3,param_5);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102d2fadc; end: 102d2faf7; -[AdLifecycleWatermarkEventsTracker onAdShown:adShowTimestamp:] */

void FUN_102d2fadc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  FUN_102d2fb80(param_1,param_4,param_3,&UNK_1105c5168,0x102d32974,&UNK_1105c5180);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102d2faf8; end: 102d2fb7f;  */

void FUN_102d2faf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  FUN_102d2fb80(param_1,param_4,param_3,param_5,param_6,param_7);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102d2fb80; end: 102d2fc7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d2fb80(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  ppuVar3 = &puStack_90;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0e5e8);
  puVar2 = &UNK_1105c4fb0;
  func_0x000107c613fc(&UNK_1105c4fb0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  func_0x000107c613fc(param_4,0x30,7);
  *(undefined **)(param_4 + 0x10) = puVar2;
  *(undefined8 *)(param_4 + 0x18) = param_2;
  *(undefined8 *)(param_4 + 0x20) = param_3;
  *(undefined8 *)(param_4 + 0x28) = param_1;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  uStack_78 = param_6;
  uStack_70 = param_5;
  lStack_68 = param_4;
  func_0x000107c60bc4(&puStack_90);
  lVar1 = lStack_68;
  func_0x000107c61434(param_3);
  func_0x000107c61574(lVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 102d2fc80; end: 102d2fd97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d2fc80(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112f0e620;
  if (param_2 != 0) {
    uVar1 = param_3 & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar1 = param_4 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      func_0x000107c61428(param_2 + _DAT_112f0e620,auStack_70,0x20,0);
      lVar3 = *(long *)(param_2 + lVar3);
      if (*(long *)(lVar3 + 0x10) != 0) {
        func_0x000107c61434(lVar3);
        func_0x000100029284();
        if ((param_4 & 1) != 0) {
          lVar2 = *(long *)(*(long *)(lVar3 + 0x38) + param_3 * 8);
          func_0x000107c6157c(lVar2);
          func_0x000107c614a8(auStack_70);
          func_0x000107c61170(param_2);
          func_0x000107c6142c(lVar3);
          if (*(double *)(lVar2 + 0x88) == 0.0) {
            *(undefined8 *)(lVar2 + 0x88) = param_1;
          }
          func_0x000107c61574(lVar2);
          return;
        }
        func_0x000107c6142c(lVar3);
      }
      func_0x000107c614a8(auStack_70);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102d2fd98; end: 102d2fdb3; -[AdLifecycleWatermarkEventsTracker onAdHidden:adHiddenTimestamp:] */

void FUN_102d2fd98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  FUN_102d2fb80(param_1,param_4,param_3,&UNK_1105c51b8,0x102d32984,&UNK_1105c51d0);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102d2fdb4; end: 102d2feeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d2fdb4(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f0e620;
  if (param_1 != 0) {
    uVar2 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar2 = param_3 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      func_0x000107c61428(param_1 + _DAT_112f0e620,auStack_70,0x20,0);
      lVar4 = *(long *)(param_1 + lVar1);
      if (*(long *)(lVar4 + 0x10) != 0) {
        func_0x000107c61434(lVar4);
        uVar2 = param_2;
        uVar3 = param_3;
        func_0x000100029284();
        if ((uVar3 & 1) != 0) {
          uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar2 * 8);
          func_0x000107c6157c(uVar5);
          func_0x000107c614a8(auStack_70);
          func_0x000107c61574(uVar5);
          func_0x000107c6142c(lVar4);
          func_0x000107c61428(param_1 + lVar1,auStack_70,0x21,0);
          FUN_102d31d94(param_2,param_3);
          func_0x000107c614a8(auStack_70);
          func_0x000107c61170(param_1);
          func_0x000107c61574(param_2);
          return;
        }
        func_0x000107c6142c(lVar4);
      }
      func_0x000107c614a8(auStack_70);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102d2feec; end: 102d2ff07; -[AdLifecycleWatermarkEventsTracker adExpired:] */

void FUN_102d2feec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102d2ff08(param_3,param_2,&UNK_1105c5208,0x102d32994,&UNK_1105c5220);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d2ff08; end: 102d2fff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d2ff08(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar3 = &puStack_80;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0e5e8);
  puVar2 = &UNK_1105c4fb0;
  func_0x000107c613fc(&UNK_1105c4fb0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  func_0x000107c613fc(param_3,0x28,7);
  *(undefined **)(param_3 + 0x10) = puVar2;
  *(undefined8 *)(param_3 + 0x18) = param_1;
  *(undefined8 *)(param_3 + 0x20) = param_2;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  uStack_68 = param_5;
  uStack_60 = param_4;
  lStack_58 = param_3;
  func_0x000107c60bc4(&puStack_80);
  lVar1 = lStack_58;
  func_0x000107c61434(param_2);
  func_0x000107c61574(lVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 102d2fff8; end: 102d3012b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d2fff8(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112f0e620;
  if (param_1 == 0) {
    return;
  }
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112f0e620,auStack_70,0x20,0);
    lVar3 = *(long *)(param_1 + lVar3);
    if (*(long *)(lVar3 + 0x10) != 0) {
      func_0x000107c61434(lVar3);
      func_0x000100029284();
      if ((param_3 & 1) != 0) {
        lVar2 = *(long *)(*(long *)(lVar3 + 0x38) + param_2 * 8);
        func_0x000107c6157c(lVar2);
        func_0x000107c614a8(auStack_70);
        func_0x000107c6142c(lVar3);
        dVar4 = *(double *)(lVar2 + 0x180);
        if (dVar4 == 0.0) {
          func_0x000107c61168(PTR_PTR_1126afec0);
          func_0x000107c41018();
          func_0x000107c61170(param_1);
          *(double *)(lVar2 + 0x180) = dVar4;
          func_0x000107c61574(lVar2);
          return;
        }
        func_0x000107c61574(lVar2);
        goto LAB_102d30100;
      }
      func_0x000107c6142c(lVar3);
    }
    func_0x000107c614a8(auStack_70);
  }
LAB_102d30100:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102d3012c; end: 102d30147; -[AdLifecycleWatermarkEventsTracker onAdInserted:] */

void FUN_102d3012c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102d2ff08(param_3,param_2,&UNK_1105c5258,FUN_102d329d8,&UNK_1105c5270);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d30148; end: 102d301bf;  */

void FUN_102d30148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102d2ff08(param_3,param_2,param_4,param_5,param_6);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d301c0; end: 102d302ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d301c0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  uVar7 = 0;
  if (uVar1 != 0) {
    lStack_58 = 0;
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f0e5e8);
    puVar3 = &UNK_1105c52a8;
    func_0x000107c613fc(&UNK_1105c52a8,0x30,7);
    *(long **)(puVar3 + 0x10) = &lStack_58;
    *(long *)(puVar3 + 0x18) = unaff_x20;
    *(ulong *)(puVar3 + 0x20) = param_1;
    *(ulong *)(puVar3 + 0x28) = param_2;
    puVar4 = &UNK_1105c52d0;
    func_0x000107c613fc(&UNK_1105c52d0,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x102d329e4;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    pcStack_68 = FUN_102d329f0;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_10006eb60;
    puStack_70 = &UNK_1105c52e8;
    ppuVar5 = &puStack_88;
    puStack_60 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_60;
    func_0x000107c61174();
    func_0x000107c61434(param_2);
    func_0x000107c61574(puVar4);
    func_0x000107c4e530(uVar6);
    func_0x000107c60bd0(ppuVar5);
    lVar2 = lStack_58;
    func_0x000107c61574(puVar3);
    if (lVar2 != 0) {
      uVar7 = *(undefined8 *)(lVar2 + 0x180);
      func_0x000107c61574(lVar2);
    }
  }
  return uVar7;
}



/* Entry: 102d30300; end: 102d3042f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d30300(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uStack_48 = 0;
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f0e5e8);
      puVar2 = &UNK_1105c53e8;
      func_0x000107c613fc(&UNK_1105c53e8,0x30,7);
      *(undefined8 **)(puVar2 + 0x10) = &uStack_48;
      *(long *)(puVar2 + 0x18) = unaff_x20;
      *(ulong *)(puVar2 + 0x20) = param_1;
      *(ulong *)(puVar2 + 0x28) = param_2;
      puVar3 = &UNK_1105c5410;
      func_0x000107c613fc(&UNK_1105c5410,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = 0x102d33428;
      *(undefined **)(puVar3 + 0x18) = puVar2;
      uStack_58 = 0x102d3349c;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_10006eb60;
      puStack_60 = &UNK_1105c5428;
      ppuVar4 = &puStack_78;
      puStack_50 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar3 = puStack_50;
      func_0x000107c61434(param_2);
      func_0x000107c61174();
      func_0x000107c61574(puVar3);
      func_0x000107c4e530(uVar5);
      func_0x000107c60bd0(ppuVar4);
      uVar5 = uStack_48;
      func_0x000107c61574(puVar2);
    }
  }
  return uVar5;
}



/* Entry: 102d30430; end: 102d3043b; -[AdLifecycleWatermarkEventsTracker adInsertionTimestampInMillisForAdIdentifier:] */

undefined8
FUN_102d30430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  FUN_102d301c0(param_4,param_3);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
  return param_1;
}



/* Entry: 102d3043c; end: 102d3057b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d3043c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  uVar7 = 0;
  if (uVar1 != 0) {
    lStack_58 = 0;
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f0e5e8);
    puVar3 = &UNK_1105c5320;
    func_0x000107c613fc(&UNK_1105c5320,0x30,7);
    *(long **)(puVar3 + 0x10) = &lStack_58;
    *(long *)(puVar3 + 0x18) = unaff_x20;
    *(ulong *)(puVar3 + 0x20) = param_1;
    *(ulong *)(puVar3 + 0x28) = param_2;
    puVar4 = &UNK_1105c5348;
    func_0x000107c613fc(&UNK_1105c5348,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x102d33424;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    pcStack_68 = FUN_102d33498;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_10006eb60;
    puStack_70 = &UNK_1105c5360;
    ppuVar5 = &puStack_88;
    puStack_60 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_60;
    func_0x000107c61174();
    func_0x000107c61434(param_2);
    func_0x000107c61574(puVar4);
    func_0x000107c4e530(uVar6);
    func_0x000107c60bd0(ppuVar5);
    lVar2 = lStack_58;
    func_0x000107c61574(puVar3);
    if (lVar2 != 0) {
      uVar7 = *(undefined8 *)(lVar2 + 0x188);
      func_0x000107c61574(lVar2);
    }
  }
  return uVar7;
}



/* Entry: 102d3057c; end: 102d30587; -[AdLifecycleWatermarkEventsTracker adResponseParseCompleteTimestampInMillisForAdIdentifier:] */

undefined8
FUN_102d3057c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  FUN_102d3043c(param_4,param_3);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
  return param_1;
}



/* Entry: 102d30588; end: 102d3070b;  */

undefined8
FUN_102d30588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             code *param_5)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  (*param_5)(param_4,param_3);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
  return param_1;
}



/* Entry: 102d3070c; end: 102d30897; -[AdLifecycleWatermarkEventsTracker logAdLifecycleAdPrefetchEventWithAdResponse:adPrefetchStartTimestamp:adPrefetchEndTimestamp:adPrefetchCacheHit:] */

/* WARNING: Possible PIC construction at 0x000102d30760: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d30764) */

void FUN_102d3070c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  func_0x000102d305f8(param_1,param_2,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 102d30898; end: 102d308f7; -[AdLifecycleWatermarkEventsTracker logAdLifecycleAdInsertionEventWithAdResponse:adInsertionTimestampInMillis:] */

/* WARNING: Possible PIC construction at 0x000102d308dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d308e0) */

void FUN_102d30898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  func_0x000102d3077c(param_1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 102d308f8; end: 102d30a73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d308f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_3d0 [112];
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_2d0;
  undefined1 auStack_2c0 [120];
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined1 auStack_170 [272];
  
  FUN_102d32b20(auStack_2c0);
  uStack_178 = uStack_1c0;
  uStack_1a8 = uStack_240;
  uStack_1b0 = uStack_248;
  uStack_198 = uStack_230;
  uStack_1a0 = uStack_238;
  uStack_188 = uStack_220;
  uStack_190 = uStack_228;
  func_0x000107c610b4(auStack_3d0,auStack_2c0,0x110);
  uStack_358 = param_1;
  uStack_350 = param_4;
  uStack_348 = param_5;
  uStack_340 = param_2;
  uStack_338 = param_6;
  uStack_330 = param_7;
  func_0x000107c61434(param_7);
  func_0x000107c61434(param_5);
  func_0x000102d32e10(&uStack_1b0,0x112f0e608,&UNK_10db41af8);
  uStack_360 = 3;
  func_0x0001084c6dd0();
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x000107c5fc54();
  func_0x000107c61170(param_3);
  func_0x000102d32e10(&uStack_178,0x112d445a8,&UNK_10d990150);
  uStack_2d0 = uVar1;
  func_0x000107c610b4(auStack_170,auStack_3d0,0x110);
  puVar2 = auStack_170;
  FUN_102d2d59c(puVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0e600);
  if (lVar3 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c4bfb0();
      func_0x000107c615e8(lVar3);
    }
  }
  func_0x000107c61170(puVar2);
  func_0x000102d32ddc(auStack_3d0);
  return;
}



/* Entry: 102d30a74; end: 102d30b47; -[AdLifecycleWatermarkEventsTracker logAdLifecycleAdCacheEventWithAdResponse:adCacheCreationCause:adCacheCreationTime:adCacheEvictionCause:adCacheEvictionTime:] */

/* WARNING: Possible PIC construction at 0x000102d30b28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d30b2c) */

void FUN_102d30a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  
  if (param_6 == 0) {
    param_6 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
    uVar1 = param_4;
  }
  if (param_7 == 0) {
    param_7 = 0;
    param_4 = 0;
  }
  else {
    func_0x000107c5faec(param_7);
  }
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  FUN_102d308f8(param_1,param_2,param_5,param_6,uVar1,param_7,param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 102d30b48; end: 102d30c9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d30b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_3b0 [72];
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined *puStack_358;
  undefined8 uStack_340;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 uStack_2d0;
  undefined1 auStack_2a0 [72];
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined1 auStack_170 [272];
  
  FUN_102d32b20(auStack_2a0);
  uStack_178 = uStack_248;
  uStack_188 = uStack_250;
  uStack_190 = uStack_258;
  func_0x000107c610b4(auStack_3b0,auStack_2a0,0x110);
  uStack_340 = 4;
  uStack_368 = param_4;
  uStack_360 = param_5;
  func_0x000107c61434(param_5);
  func_0x000102d32e10(&uStack_190,0x112d35ff8,&UNK_10d900cd0);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  func_0x000102d32e10(&uStack_178,0x112dc3de0,&UNK_10d9813c0);
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  puStack_358 = puVar1;
  uStack_2f0 = param_1;
  uStack_2d8 = param_3;
  uStack_2d0 = param_7;
  func_0x000107c610b4(auStack_170,auStack_3b0,0x110);
  puVar2 = auStack_170;
  FUN_102d2d59c(puVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0e600);
  if (lVar3 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c4bfb0();
      func_0x000107c615e8(lVar3);
    }
  }
  func_0x000107c61170(puVar2);
  func_0x000102d32ddc(auStack_3b0);
  return;
}



/* Entry: 102d30c9c; end: 102d30d4b; -[AdLifecycleWatermarkEventsTracker logAdLifecycleAdTrackAttemptEventWithAdResponse:adTrackStartTimestamp:adTrackAttempt:sessionId:trackSeqNumber:adTrackAttachmentTriggered:] */

void FUN_102d30c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x000107c5faec(param_6);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  FUN_102d30b48(param_1,param_4,param_5,param_6,param_3,param_7,param_8);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102d30d4c; end: 102d30e73; -[AdLifecycleWatermarkEventsTracker logAdLifecycleAdTrackAttemptEventWithAdServeItemId:adServeTimestamp:adId:adType:adProductType:adTrackStartTimestamp:adTrackRetro:adTrackAttempt:sessionId:trackSeqNumber:] */

/* WARNING: Possible PIC construction at 0x000102d30e38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d30e48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d30e3c) */
/* WARNING: Removing unreachable block (ram,0x000102d30e4c) */

void FUN_102d30d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5faec();
  uVar2 = param_4;
  func_0x000107c5faec(param_6);
  uVar3 = uVar2;
  func_0x000107c5faec(param_7);
  if (param_11 == 0) {
    param_11 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = uVar3;
    func_0x000107c5faec();
  }
  uVar1 = param_12;
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_3);
  FUN_102d32e50(param_1,param_2,param_5,param_4,param_6,uVar2,param_7,uVar3,param_8,param_10,
                param_11,uVar4,param_12);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 102d30e74; end: 102d30fbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d30e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_398 [112];
  undefined8 uStack_328;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 uStack_2b8;
  undefined8 uStack_298;
  undefined1 auStack_288 [256];
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined1 auStack_170 [272];
  
  FUN_102d32b20(auStack_288);
  uStack_178 = uStack_188;
  func_0x000107c610b4(auStack_398,auStack_288,0x110);
  uStack_2c8 = 0x100;
  if ((param_5 & 1) == 0) {
    uStack_2c8 = 0;
  }
  uStack_2c8 = uStack_2c8 | param_4 & 1;
  uStack_328 = 2;
  uStack_2d8 = param_1;
  uStack_2d0 = param_2;
  uStack_2c0 = param_6;
  uStack_2b8 = param_7;
  func_0x0001084c6dd0();
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x000107c5fc54();
  func_0x000107c61170(param_3);
  func_0x000102d32e10(&uStack_178,0x112d445a8,&UNK_10d990150);
  uStack_298 = uVar1;
  func_0x000107c610b4(auStack_170,auStack_398,0x110);
  puVar2 = auStack_170;
  FUN_102d2d59c(puVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0e600);
  if (lVar3 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c4bfb0();
      func_0x000107c615e8(lVar3);
    }
  }
  func_0x000107c61170(puVar2);
  func_0x000102d32ddc(auStack_398);
  return;
}



/* Entry: 102d30fbc; end: 102d3104f; -[AdLifecycleWatermarkEventsTracker logAdLifecycleAdTrackEventWithAdResponse:adTrackStartTimestamp:adTrackEndTimestamp:adTrackRetro:adTrackSuccess:adTrackAttempt:adTrackAttachmentTriggered:] */

/* WARNING: Possible PIC construction at 0x000102d31030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d31034) */

void FUN_102d30fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  FUN_102d30e74(param_1,param_2,param_5,param_6,param_7,param_8,param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 102d31050; end: 102d3117b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d31050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,ulong param_11,byte param_12,
                  undefined4 param_13,undefined8 param_14)

{
  undefined1 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [272];
  
  uStack_260 = 0;
  uStack_258 = 0;
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 1;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 1;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 2;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_208 = 0;
  uStack_190 = 0x100;
  if ((param_12 & 1) == 0) {
    uStack_190 = 0;
  }
  uStack_190 = uStack_190 | param_11 & 1;
  uStack_188 = param_14;
  uStack_180 = 0;
  uStack_1f0 = 2;
  uStack_1f8 = 0;
  uStack_250 = param_4;
  uStack_248 = param_5;
  uStack_240 = param_1;
  uStack_238 = param_6;
  uStack_230 = param_7;
  uStack_228 = param_8;
  uStack_220 = param_9;
  uStack_200 = param_10;
  uStack_1a0 = param_2;
  uStack_198 = param_3;
  func_0x000107c610b4(auStack_150,&uStack_260,0x110);
  func_0x000107c61434(param_9);
  func_0x000107c61434(param_7);
  func_0x000107c61434(param_5);
  puVar1 = auStack_150;
  FUN_102d2d59c(puVar1);
  lVar2 = *(long *)(unaff_x20 + _DAT_112f0e600);
  if (lVar2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c4bfb0();
      func_0x000107c615e8(lVar2);
    }
  }
  func_0x000107c61170(puVar1);
  FUN_102d32ddc(&uStack_260);
  return;
}



/* Entry: 102d3117c; end: 102d31287; -[AdLifecycleWatermarkEventsTracker logAdLifecycleAdTrackEventWithAdServeItemId:adServeTimestamp:adId:adType:adProductType:adTrackStartTimestamp:adTrackEndTimestamp:adTrackRetro:adTrackSuccess:adTrackAttempt:] */

/* WARNING: Possible PIC construction at 0x000102d31250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d31254) */

void FUN_102d3117c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined1 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_6);
  uVar1 = param_5;
  func_0x000107c5faec(param_7);
  uVar2 = uVar1;
  func_0x000107c5faec(param_8);
  func_0x000107c61174(param_4);
  FUN_102d31050(param_1,param_2,param_3,param_6,param_5,param_7,uVar1,param_8,uVar2,param_9,param_10
                ,param_11);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_5);
  return;
}



/* Entry: 102d31288; end: 102d312fb; -[AdLifecycleWatermarkEventsTracker getLifecycleInfoMetadataForAdResponse:adSnap:] */

void FUN_102d31288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102d32f90(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102d312fc; end: 102d3140b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d312fc(ulong param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f0e5e8);
    puVar2 = &UNK_1105c4fb0;
    func_0x000107c613fc(&UNK_1105c4fb0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_1105c5398;
    func_0x000107c613fc(&UNK_1105c5398,0x30,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(ulong *)(puVar3 + 0x18) = param_1;
    *(ulong *)(puVar3 + 0x20) = param_2;
    *(undefined8 *)(puVar3 + 0x28) = param_3;
    pcStack_50 = FUN_102d332a4;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_1105c53b0;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c61434(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar5);
    func_0x000107c60bd0(ppuVar4);
  }
  return;
}



/* Entry: 102d3140c; end: 102d31593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3140c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f0e620;
  if (param_1 != 0) {
    lVar6 = *(long *)(param_4 + _DAT_11308f130);
    uVar3 = ((long *)(param_4 + _DAT_11308f130))[1];
    func_0x000107c61428(param_1 + _DAT_112f0e620,auStack_80,0x20,0);
    lVar5 = *(long *)(param_1 + lVar1);
    lVar7 = *(long *)(lVar5 + 0x10);
    func_0x000107c61434(param_3);
    if (lVar7 == 0) {
      lVar6 = 0;
    }
    else {
      func_0x000107c61434(lVar5);
      func_0x000100029284();
      if ((uVar3 & 1) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(long *)(*(long *)(lVar5 + 0x38) + lVar6 * 8);
        func_0x000107c6157c(lVar6);
      }
      func_0x000107c6142c(lVar5);
    }
    func_0x000107c614a8(auStack_80);
    func_0x000107c61428(param_1 + lVar1,auStack_80,0x21,0);
    if (lVar6 == 0) {
      FUN_102d31d94(param_2,param_3);
      func_0x000107c6142c(param_3);
      func_0x000107c61574(param_2);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + lVar1);
      func_0x000107c61558(uVar2);
      uVar4 = *(undefined8 *)(param_1 + lVar1);
      *(undefined8 *)(param_1 + lVar1) = 0x8000000000000000;
      FUN_102d31e50(lVar6,param_2,param_3,uVar2);
      func_0x000107c6142c(param_3);
      *(undefined8 *)(param_1 + lVar1) = uVar4;
    }
    func_0x000107c614a8(auStack_80);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102d31594; end: 102d31607; -[AdLifecycleWatermarkEventsTracker updateAdIdentifier:forAdResponse:] */

void FUN_102d31594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102d312fc(param_3,param_2,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d31608; end: 102d316d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d31608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  
  if (*(char *)(unaff_x20 + _DAT_112f0e5f0) == '\x01') {
    func_0x000100087bd4(param_3,auStack_60,PTR___sytN_11034f1b0 + 8);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f0e5e0);
  func_0x000103e02d6c(0);
  func_0x000107c61434(param_2);
  func_0x000103e01428(param_1,param_2,param_4);
  func_0x000107c4d664(uVar1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102d316d4; end: 102d316e3; -[AdLifecycleWatermarkEventsTracker didStartAdRequestForAdPodIdentifier:] */

void FUN_102d316d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_102d31608(param_3,param_2,FUN_102d332b0,0);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d316e4; end: 102d316eb; -[AdLifecycleWatermarkEventsTracker didCreatedPendingAdPodForIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d316e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f0e5e0);
  func_0x000103e02d6c(0);
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_2);
  func_0x000103e01428(param_3,param_2,6);
  func_0x000107c4d664(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d316ec; end: 102d316f3; -[AdLifecycleWatermarkEventsTracker didInsertAdPodForIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d316ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f0e5e0);
  func_0x000103e02d6c(0);
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_2);
  func_0x000103e01428(param_3,param_2,7);
  func_0x000107c4d664(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d316f4; end: 102d3179f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d316f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f0e5e0);
  func_0x000103e02d6c(0);
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_2);
  func_0x000103e01428(param_3,param_2,param_4);
  func_0x000107c4d664(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d317a0; end: 102d3184f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d317a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_50 [16];
  
  if (*(char *)(unaff_x20 + _DAT_112f0e5f0) == '\x01') {
    func_0x000100087bd4(0x102d332d0,auStack_50,PTR___sytN_11034f1b0 + 8);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f0e5e0);
  func_0x000103e02d6c(0);
  uVar1 = 0;
  func_0x000103e01428(0,0,9);
  func_0x000107c4d664(uVar2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102d31850; end: 102d31877; -[AdLifecycleWatermarkEventsTracker didEnterSurface] */

void FUN_102d31850(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102d317a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d31878; end: 102d31937;  */

void FUN_102d31878(long param_1,long *param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long lVar3;
  double dVar4;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  lVar2 = *param_2;
  dVar4 = *(double *)(param_1 + lVar2);
  if (dVar4 == 0.0) {
    func_0x000107c5eea0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee8c();
    (**(code **)(lVar3 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    *(double *)(param_1 + lVar2) = dVar4 * 1000.0;
  }
  return;
}



/* Entry: 102d31938; end: 102d31947; -[AdLifecycleWatermarkEventsTracker didSubmitAdRequestForAdPodIdentifier:] */

void FUN_102d31938(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_102d31608(param_3,param_2,FUN_102d328a8,8);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d31948; end: 102d319cb;  */

void FUN_102d31948(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_102d31608(param_3,param_2,param_4,param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d319cc; end: 102d31aab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d319cc(double param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5eea0(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(double *)(param_2 + _DAT_112f0e628) = param_1 * 1000.0;
  if (*(char *)(param_2 + _DAT_112f0e5f0) == '\x01') {
    *(undefined8 *)(param_2 + _DAT_112f0e638) = 0;
    *(undefined8 *)(param_2 + _DAT_112f0e640) = 0;
  }
  return;
}



/* Entry: 102d31aac; end: 102d31b53; -[AdLifecycleWatermarkEventsTracker didTileTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d31aac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  long lStack_40;
  
  lStack_40 = param_1;
  func_0x000107c61174();
  func_0x000100087bd4(FUN_102d3342c,auStack_50,PTR___sytN_11034f1b0 + 8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f0e5e0);
  func_0x000103e02d6c(0);
  uVar1 = 1;
  func_0x000103e01428(1,0,9);
  func_0x000107c4d664(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102d31b54; end: 102d31b5f; -[AdLifecycleWatermarkEventsTracker consumeTileTapTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d31b54(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  func_0x000107c61174();
  func_0x000100087bd4(&uStack_38,FUN_102d33484,auStack_50,PTR___sSdN_11034dd90);
  func_0x000107c61170(param_1);
  return uStack_38;
}



/* Entry: 102d31b60; end: 102d31b6b; -[AdLifecycleWatermarkEventsTracker consumeSurfaceEnteredTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d31b60(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  func_0x000107c61174();
  func_0x000100087bd4(&uStack_38,0x102d334c8,auStack_50,PTR___sSdN_11034dd90);
  func_0x000107c61170(param_1);
  return uStack_38;
}



/* Entry: 102d31b6c; end: 102d31b77; -[AdLifecycleWatermarkEventsTracker consumeRequestStartTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d31b6c(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  func_0x000107c61174();
  func_0x000100087bd4(&uStack_38,0x102d334b4,auStack_50,PTR___sSdN_11034dd90);
  func_0x000107c61170(param_1);
  return uStack_38;
}



/* Entry: 102d31b78; end: 102d31b83; -[AdLifecycleWatermarkEventsTracker consumeRequestSubmittedTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d31b78(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  func_0x000107c61174();
  func_0x000100087bd4(&uStack_38,FUN_102d334a0,auStack_50,PTR___sSdN_11034dd90);
  func_0x000107c61170(param_1);
  return uStack_38;
}



/* Entry: 102d31b84; end: 102d31bef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d31b84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  func_0x000107c61174();
  func_0x000100087bd4(&uStack_38,param_3,auStack_50,PTR___sSdN_11034dd90);
  func_0x000107c61170(param_1);
  return uStack_38;
}



/* Entry: 102d31bf0; end: 102d31cab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d31bf0(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112f0e620;
  func_0x000107c61428(param_2 + _DAT_112f0e620,auStack_58,0x20,0);
  lVar2 = *(long *)(param_2 + lVar2);
  if (*(long *)(lVar2 + 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c61434(lVar2);
    func_0x000100029284();
    if ((param_4 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_3 * 8);
      func_0x000107c6157c(uVar3);
    }
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c614a8(auStack_58);
  uVar1 = *param_1;
  *param_1 = uVar3;
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 102d31cac; end: 102d31d0b; -[AdLifecycleWatermarkEventsTracker init] */

void FUN_102d31cac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdLifecycleWatermarkEventsTrackingImplSwift.AdLifecycleWatermarkEventsTracker"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d31cd8);
  (*pcVar1)();
}



/* Entry: 102d31d0c; end: 102d31d93; -[AdLifecycleWatermarkEventsTracker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d31d0c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0e600));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0e610));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0e618));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0e5e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0e5e8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f0e5f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f0e620));
  return;
}



/* Entry: 102d31d94; end: 102d31e4f;  */

undefined8 FUN_102d31d94(long param_1,ulong param_2)

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
      func_0x000102d31fa0();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    func_0x000102d323ac(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 102d31e50; end: 102d3210f;  */

void FUN_102d31e50(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102d31f28);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_102d32110(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d31ef0);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000102d31fa0();
    lVar6 = *unaff_x20;
    goto joined_r0x000102d31f3c;
  }
  lVar6 = *unaff_x20;
joined_r0x000102d31f3c:
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102d31fa0);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102d32110; end: 102d32883;  */

void FUN_102d32110(long param_1,ulong param_2)

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
  uVar6 = 0x112f0e5c8;
  func_0x0001000285a8(0x112f0e5c8,&UNK_10db41a10);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_102d32378:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102d323a8);
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
          goto LAB_102d32378;
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102d323ac);
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



/* Entry: 102d32884; end: 102d328a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d32884(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_38,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar1 + _DAT_113011058);
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        FUN_102d2db84(lVar1);
      }
      else if (iVar2 == 1) {
        FUN_102d2dd34(lVar1);
      }
    }
    else if (iVar2 == 2) {
      FUN_102d2de78(lVar1);
    }
    else if (iVar2 == 3) {
      FUN_102d2dfb0(lVar1);
    }
    else if (iVar2 == 4) {
      FUN_102d2e210(lVar1);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102d328a8; end: 102d328f3;  */

void FUN_102d328a8(void)

{
  long unaff_x20;
  
  FUN_102d31878(*(undefined8 *)(unaff_x20 + 0x10),&DAT_112f0e640);
  return;
}



/* Entry: 102d328f4; end: 102d3290b;  */

void FUN_102d328f4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_102d2e53c(uVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102d3290c; end: 102d32963;  */

void FUN_102d3290c(void)

{
  long unaff_x20;
  
  func_0x000102d2ecfc(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                      *(undefined1 *)(unaff_x20 + 0x39),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                      *(undefined1 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 102d32964; end: 102d3299f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d32964(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(ulong *)(unaff_x20 + 0x18);
  uVar5 = *(ulong *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar7 + 0x10,auStack_68,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112f0e620;
  if (lVar7 == 0) {
    return;
  }
  if ((int)uVar2 != 0) {
    uVar1 = uVar4 & 0xffffffffffff;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar1 = uVar5 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      func_0x000107c61428(lVar7 + _DAT_112f0e620,auStack_80,0x20,0);
      lVar7 = *(long *)(lVar7 + lVar3);
      if (*(long *)(lVar7 + 0x10) != 0) {
        func_0x000107c61434(lVar7);
        func_0x000100029284();
        if ((uVar5 & 1) != 0) {
          uVar6 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar4 * 8);
          func_0x000107c6157c(uVar6);
          func_0x000107c614a8(auStack_80);
          func_0x000107c6142c(lVar7);
          FUN_102d3369c(uVar8);
          func_0x000102d32a10(uVar2,lVar7,uVar6);
          func_0x000107c61574(uVar6);
          goto LAB_102d2f934;
        }
        func_0x000107c6142c(lVar7);
      }
      func_0x000107c614a8(auStack_80);
    }
  }
LAB_102d2f934:
  func_0x000107c61170();
  return;
}



/* Entry: 102d329a0; end: 102d329d7;  */

void FUN_102d329a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102d329d8; end: 102d329ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d329d8(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  double dVar7;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x18);
  uVar4 = *(ulong *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  lVar6 = _DAT_112f0e620;
  if (lVar2 == 0) {
    return;
  }
  uVar1 = uVar3 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    func_0x000107c61428(lVar2 + _DAT_112f0e620,auStack_70,0x20,0);
    lVar6 = *(long *)(lVar2 + lVar6);
    if (*(long *)(lVar6 + 0x10) != 0) {
      func_0x000107c61434(lVar6);
      func_0x000100029284();
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
        func_0x000107c6157c(lVar5);
        func_0x000107c614a8(auStack_70);
        func_0x000107c6142c(lVar6);
        dVar7 = *(double *)(lVar5 + 0x180);
        if (dVar7 == 0.0) {
          func_0x000107c61168(PTR_PTR_1126afec0);
          func_0x000107c41018();
          func_0x000107c61170(lVar2);
          *(double *)(lVar5 + 0x180) = dVar7;
          func_0x000107c61574(lVar5);
          return;
        }
        func_0x000107c61574(lVar5);
        goto LAB_102d30100;
      }
      func_0x000107c6142c(lVar6);
    }
    func_0x000107c614a8(auStack_70);
  }
LAB_102d30100:
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 102d329f0; end: 102d32b1f;  */

void FUN_102d329f0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102d32b20; end: 102d32ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d32b20(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_3a8 [272];
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11308f130);
  uVar4 = ((undefined8 *)(param_2 + _DAT_11308f130))[1];
  uVar15 = *(undefined8 *)(param_2 + _DAT_11308f108);
  uVar2 = *(undefined8 *)(param_2 + _DAT_11308f140);
  uVar5 = ((undefined8 *)(param_2 + _DAT_11308f140))[1];
  uVar3 = *(undefined8 *)(param_2 + _DAT_11308f138);
  uVar6 = ((undefined8 *)(param_2 + _DAT_11308f138))[1];
  uVar11 = *(undefined8 *)(param_2 + _DAT_113815200);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar6);
  func_0x000103bfd6b4();
  uVar13 = *(undefined8 *)(param_2 + _DAT_11308f128);
  uVar14 = *(undefined8 *)(param_2 + _DAT_1138152d0);
  uVar12 = *(ulong *)(param_2 + _DAT_113815208);
  uVar9 = 0;
  if (uVar12 != 0) {
    uVar10 = uVar12 & 0xffffffffffffff8;
    if (uVar12 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar10 + 0x10);
    }
    else {
      uVar8 = uVar12;
      if (-1 < (long)uVar12) {
        uVar8 = uVar10;
      }
      func_0x000107c60480();
    }
    if (uVar8 == 0) {
      uVar9 = 0;
    }
    else if ((uVar12 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar10 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102d32ddc);
        (*pcVar7)();
      }
      uVar9 = *(undefined8 *)(uVar12 + 0x20);
      func_0x000107c61174(uVar9);
    }
    else {
      uVar9 = 0;
      func_0x000100e471e4(0,uVar12);
    }
  }
  func_0x0001084c6f7c(param_2,uVar9);
  func_0x000107c61170(uVar9);
  uStack_250 = 0;
  uStack_248 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_210 = 1;
  uStack_200 = 0;
  uStack_208 = 0;
  uStack_1f0 = 0;
  uStack_1f8 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 1;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1c0 = 0;
  uStack_1c8 = 2;
  uStack_1b8 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1a0 = 2;
  uStack_198 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_100 = 1;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d8 = 0;
  uStack_d0 = 1;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_b8 = 2;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 2;
  uStack_88 = 0;
  uStack_298 = uVar1;
  uStack_290 = uVar4;
  uStack_288 = uVar2;
  uStack_280 = uVar5;
  uStack_278 = uVar15;
  uStack_270 = uVar3;
  uStack_268 = uVar6;
  uStack_260 = uVar11;
  uStack_258 = param_3;
  uStack_238 = uVar13;
  uStack_230 = uVar14;
  lStack_190 = param_2;
  uStack_188 = uVar1;
  uStack_180 = uVar4;
  uStack_178 = uVar2;
  uStack_170 = uVar5;
  uStack_168 = uVar15;
  uStack_160 = uVar3;
  uStack_158 = uVar6;
  uStack_150 = uVar11;
  uStack_148 = param_3;
  uStack_128 = uVar13;
  uStack_120 = uVar14;
  lStack_80 = param_2;
  FUN_102d3338c(&uStack_298,auStack_3a8);
  FUN_102d32ddc(&uStack_188);
  func_0x000107c610b4(param_1,&uStack_298,0x110);
  return;
}



/* Entry: 102d32ddc; end: 102d32e4f;  */

undefined8 FUN_102d32ddc(undefined8 param_1)

{
  (*(code *)(undefined *)0x102d2cd84)();
  return param_1;
}



/* Entry: 102d32e50; end: 102d32f8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d32e50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined1 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [272];
  
  uStack_270 = 0;
  uStack_268 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 1;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 1;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_178 = 2;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_200 = 4;
  uStack_208 = 0;
  uStack_228 = param_11;
  uStack_220 = param_12;
  uStack_218 = param_13;
  uStack_1a0 = 1;
  uStack_1a8 = 0;
  uStack_190 = 0;
  uStack_260 = param_3;
  uStack_258 = param_4;
  uStack_250 = param_1;
  uStack_248 = param_5;
  uStack_240 = param_6;
  uStack_238 = param_7;
  uStack_230 = param_8;
  uStack_210 = param_9;
  uStack_1b0 = param_2;
  uStack_198 = param_10;
  func_0x000107c610b4(auStack_160,&uStack_270,0x110);
  func_0x000107c61434(param_12);
  func_0x000107c61434(param_8);
  func_0x000107c61434(param_6);
  func_0x000107c61434(param_4);
  func_0x000107c61174(param_13);
  puVar1 = auStack_160;
  FUN_102d2d59c(puVar1);
  lVar2 = *(long *)(unaff_x20 + _DAT_112f0e600);
  if (lVar2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c4bfb0();
      func_0x000107c615e8(lVar2);
    }
  }
  func_0x000107c61170(puVar1);
  FUN_102d32ddc(&uStack_270);
  return;
}



/* Entry: 102d32f90; end: 102d332a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_102d32f90(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar1 = *(long *)(param_1 + _DAT_11308f130);
  lVar11 = ((long *)(param_1 + _DAT_11308f130))[1];
  FUN_102d30300();
  uVar18 = 0;
  if (lVar1 == 0) {
    uStack_128 = 0;
    uStack_120 = 0;
    uVar19 = 0;
  }
  else {
    uStack_120 = *(undefined8 *)(lVar1 + 0x158);
    uStack_128 = *(undefined8 *)(lVar1 + 0x160);
    uVar19 = *(undefined8 *)(lVar1 + 0x20);
    func_0x000107c61434();
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c466c0(uVar19);
  puVar3 = puVar2;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar3;
  func_0x000107c5faec();
  lVar12 = lVar11;
  func_0x000107c61170(puVar3);
  if (lVar1 != 0) {
    uVar18 = *(undefined8 *)(lVar1 + 0x28);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c466c0(uVar18);
  puVar4 = puVar3;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c5faec();
  lVar13 = lVar12;
  func_0x000107c61170(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  puVar5 = puVar4;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = puVar5;
  func_0x000107c5faec();
  lVar14 = lVar13;
  func_0x000107c61170(puVar5);
  uVar18 = 0;
  uVar19 = 0;
  if (lVar1 != 0) {
    uVar19 = *(undefined8 *)(lVar1 + 0x50);
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c466c0(uVar19);
  puVar6 = puVar5;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar5 = puVar6;
  func_0x000107c5faec();
  lVar15 = lVar14;
  func_0x000107c61170(puVar6);
  if (lVar1 != 0) {
    uVar18 = *(undefined8 *)(lVar1 + 0x180);
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c466c0(uVar18);
  puVar7 = puVar6;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  puVar6 = puVar7;
  func_0x000107c5faec();
  lVar16 = lVar15;
  func_0x000107c61170(puVar7);
  uVar18 = 0;
  uVar19 = 0;
  if (lVar1 != 0) {
    uVar19 = *(undefined8 *)(lVar1 + 0x80);
  }
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c466c0(uVar19);
  puVar8 = puVar7;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  puVar7 = puVar8;
  func_0x000107c5faec();
  lVar17 = lVar16;
  func_0x000107c61170(puVar8);
  if (lVar1 != 0) {
    uVar18 = *(undefined8 *)(lVar1 + 0x88);
  }
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c466c0(uVar18);
  puVar9 = puVar8;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  puVar8 = puVar9;
  func_0x000107c5faec();
  func_0x000107c61170(puVar9);
  uStack_110 = uStack_120;
  uStack_108 = uStack_128;
  uStack_c0 = 0;
  uStack_b8 = 0;
  puStack_100 = puVar2;
  lStack_f8 = lVar11;
  puStack_f0 = puVar3;
  lStack_e8 = lVar12;
  puStack_e0 = puVar4;
  lStack_d8 = lVar13;
  puStack_d0 = puVar5;
  lStack_c8 = lVar14;
  puStack_b0 = puVar6;
  lStack_a8 = lVar15;
  puStack_a0 = puVar7;
  lStack_98 = lVar16;
  puStack_90 = puVar8;
  lStack_88 = lVar17;
  lStack_80 = param_1;
  func_0x000103e03b1c(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  puVar10 = &uStack_110;
  func_0x000103e035e8(puVar10);
  func_0x000107c61574(lVar1);
  return puVar10;
}



/* Entry: 102d332a4; end: 102d332af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d332a4(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar10 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112f0e620;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar10 + _DAT_11308f130);
    lVar10 = *plVar1;
    uVar7 = plVar1[1];
    func_0x000107c61428(lVar4 + _DAT_112f0e620,auStack_80,0x20,0);
    lVar9 = *(long *)(lVar4 + lVar3);
    lVar11 = *(long *)(lVar9 + 0x10);
    func_0x000107c61434(uVar2);
    if (lVar11 == 0) {
      lVar10 = 0;
    }
    else {
      func_0x000107c61434(lVar9);
      func_0x000100029284();
      if ((uVar7 & 1) == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + lVar10 * 8);
        func_0x000107c6157c(lVar10);
      }
      func_0x000107c6142c(lVar9);
    }
    func_0x000107c614a8(auStack_80);
    func_0x000107c61428(lVar4 + lVar3,auStack_80,0x21,0);
    if (lVar10 == 0) {
      FUN_102d31d94(uVar6,uVar2);
      func_0x000107c6142c(uVar2);
      func_0x000107c61574(uVar6);
    }
    else {
      uVar5 = *(undefined8 *)(lVar4 + lVar3);
      func_0x000107c61558(uVar5);
      uVar8 = *(undefined8 *)(lVar4 + lVar3);
      *(undefined8 *)(lVar4 + lVar3) = 0x8000000000000000;
      FUN_102d31e50(lVar10,uVar6,uVar2,uVar5);
      func_0x000107c6142c(uVar2);
      *(undefined8 *)(lVar4 + lVar3) = uVar8;
    }
    func_0x000107c614a8(auStack_80);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 102d332b0; end: 102d33307;  */

void FUN_102d332b0(void)

{
  long unaff_x20;
  
  FUN_102d31878(*(undefined8 *)(unaff_x20 + 0x10),&DAT_112f0e638);
  return;
}



/* Entry: 102d33308; end: 102d3336b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d33308(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f0e628);
  *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f0e628) = 0;
  *param_1 = uVar1;
  return;
}



/* Entry: 102d3336c; end: 102d3338b;  */

void FUN_102d3336c(void)

{
  func_0x000107c61168(&PTR_PTR_1128a1830);
  return;
}



/* Entry: 102d3338c; end: 102d333c7;  */

undefined8 FUN_102d3338c(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x102d2cdec)(param_2,param_1);
  return param_2;
}



/* Entry: 102d333c8; end: 102d333f3;  */

void FUN_102d333c8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102d333f4; end: 102d3342b;  */

void FUN_102d333f4(long param_1,long param_2)

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



/* Entry: 102d3342c; end: 102d33453;  */

void FUN_102d3342c(void)

{
  func_0x000102d332f0();
  return;
}



/* Entry: 102d33454; end: 102d33483;  */

void FUN_102d33454(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 102d33484; end: 102d33497;  */

void FUN_102d33484(void)

{
  FUN_102d33308();
  return;
}



/* Entry: 102d33498; end: 102d3349f;  */

void FUN_102d33498(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}


