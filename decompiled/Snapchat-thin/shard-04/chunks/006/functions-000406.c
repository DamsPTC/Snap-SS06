/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036cb714; end: 1036cb733;  */

void FUN_1036cb714(void)

{
  func_0x000107c61168(&PTR_PTR_1128e1d70);
  return;
}



/* Entry: 1036cb734; end: 1036cb78b; -[_TtC32SCLensPlusServicesImplementation42ImagineLensInteractiveDismissalUIContainer attachUI:] */

/* WARNING: Possible PIC construction at 0x0001036cb774: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036cb778) */

void FUN_1036cb734(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036cb12c(param_3,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036cb78c; end: 1036cb813;  */

void FUN_1036cb78c(long param_1,long param_2)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_50,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      FUN_1036cb814();
      func_0x000107c61170(param_1);
      param_1 = param_2;
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1036cb814; end: 1036cbbc7;  */

/* WARNING: Possible PIC construction at 0x0001036cb914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036cb93c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036cb99c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036cb9c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036cbb0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036cbb80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036cbb10) */
/* WARNING: Removing unreachable block (ram,0x0001036cb9cc) */
/* WARNING: Removing unreachable block (ram,0x0001036cb9a0) */
/* WARNING: Removing unreachable block (ram,0x0001036cbbc0) */
/* WARNING: Removing unreachable block (ram,0x0001036cb9b4) */
/* WARNING: Removing unreachable block (ram,0x0001036cb940) */
/* WARNING: Removing unreachable block (ram,0x0001036cbbbc) */
/* WARNING: Removing unreachable block (ram,0x0001036cb954) */
/* WARNING: Removing unreachable block (ram,0x0001036cb918) */
/* WARNING: Removing unreachable block (ram,0x0001036cbbb8) */
/* WARNING: Removing unreachable block (ram,0x0001036cb92c) */
/* WARNING: Removing unreachable block (ram,0x0001036cbb84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cb814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar3 = _DAT_112f87690;
  lVar4 = *(long *)(unaff_x20 + _DAT_112f87688);
  if ((((lVar4 != 0) &&
       (*(long *)(unaff_x20 + _DAT_112f87690) != 0 &&
        param_5 == *(long *)(unaff_x20 + _DAT_112f87690))) &&
      ((*(byte *)(unaff_x20 + _DAT_112f876b8) & 1) == 0)) &&
     ((*(byte *)(unaff_x20 + _DAT_112f876d8) & 1) == 0)) {
    func_0x000107c61174();
    lVar2 = lVar4;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar3 = *(long *)(unaff_x20 + lVar3);
      if (lVar3 != 0) {
        func_0x000107c5de64();
        func_0x000107c61180();
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1036cbbc8);
          (*pcVar1)();
        }
        func_0x000107c5c42c();
        func_0x000107c61180();
        lVar4 = lVar3;
      }
    }
    else {
      func_0x000107c4abfc(lVar2);
      func_0x000107c3ec60(lVar2);
      func_0x000107c3d614(lVar4,param_6,param_5);
      func_0x000107c3e748(param_5,param_6,1,1);
      func_0x000107c5de64();
      func_0x000107c61180();
      if (param_5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1036cbbb8);
        (*pcVar1)();
      }
      func_0x000107c54b80(param_1,param_2,param_3,param_4);
      lVar4 = param_5;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 1036cbbc8; end: 1036cbed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cbbc8(code *param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  long lVar9;
  int iVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar8 = &puStack_90;
  lVar9 = *(long *)(unaff_x20 + _DAT_112f87688);
  if (lVar9 == 0) {
    if (param_1 != (code *)0x0) {
      (*param_1)();
    }
  }
  else {
    puVar3 = &UNK_110681570;
    func_0x000107c613fc(&UNK_110681570,0x20,7);
    *(code **)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    iVar10 = (int)*(undefined8 *)(unaff_x20 + _DAT_112f87678);
    func_0x000107c61174();
    func_0x000100b64c10(param_1,param_2);
    func_0x000107c50648();
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    if (iVar10 == 0) {
      puVar6 = &UNK_110681598;
      func_0x000107c613fc(&UNK_110681598,0x20,7);
      *(long *)(puVar6 + 0x10) = unaff_x20;
      *(long *)(puVar6 + 0x18) = lVar9;
      puVar7 = &UNK_1106815c0;
      func_0x000107c613fc(&UNK_1106815c0,0x20,7);
      *(code **)(puVar7 + 0x10) = FUN_1036cd9f0;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      uStack_70 = 0x1036cdde4;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_10006eb60;
      puStack_78 = &UNK_1106815d8;
      puStack_68 = puVar7;
      func_0x000107c60bc4(&puStack_90);
      puVar1 = puStack_68;
      func_0x000107c61174(lVar9);
      func_0x000107c61174();
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar1);
      func_0x000107c4e5fc(puVar4);
      func_0x000107c60bd0(ppuVar8);
      puVar4 = puVar7;
      func_0x000107c61544(puVar7,"",0x86,0x9e,0x2c,1);
      func_0x000107c61574(puVar7);
      if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1036cbed4);
        (*pcVar2)();
      }
      if (param_1 != (code *)0x0) {
        (*param_1)();
      }
      func_0x000107c61574(puVar6);
      func_0x000107c61170(lVar9);
      func_0x000107c61574(puVar3);
    }
    else {
      puVar6 = &UNK_110681610;
      func_0x000107c613fc(&UNK_110681610,0x30,7);
      *(long *)(puVar6 + 0x10) = unaff_x20;
      *(long *)(puVar6 + 0x18) = lVar9;
      *(code **)(puVar6 + 0x20) = FUN_1036cd9c4;
      *(undefined **)(puVar6 + 0x28) = puVar3;
      puVar7 = &UNK_110681638;
      func_0x000107c613fc(&UNK_110681638,0x20,7);
      *(undefined8 *)(puVar7 + 0x10) = 0x1036cda04;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      uStack_70 = 0x1036cdde8;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_10006eb60;
      puStack_78 = &UNK_110681650;
      puStack_68 = puVar7;
      func_0x000107c60bc4(&puStack_90);
      puVar1 = puStack_68;
      func_0x000107c61174(lVar9);
      func_0x000107c61174();
      func_0x000107c6157c(puVar3);
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar1);
      func_0x000107c4e5fc(puVar4);
      func_0x000107c61574(puVar3);
      func_0x000107c61170(lVar9);
      func_0x000107c60bd0(ppuVar5);
      puVar3 = puVar7;
      func_0x000107c61544(puVar7,"",0x86,0x9a,0x2c,1);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar6);
      if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1036cbd8c);
        (*pcVar2)();
      }
    }
  }
  return;
}



/* Entry: 1036cbed4; end: 1036cbf7f; -[_TtC32SCLensPlusServicesImplementation42ImagineLensInteractiveDismissalUIContainer attachUI:completion:] */

/* WARNING: Possible PIC construction at 0x0001036cbf64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036cbf68) */

void FUN_1036cbed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_1106818e0;
    func_0x000107c613fc(&UNK_1106818e0,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    uVar2 = 0x1036cdddc;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036cb12c(param_3,uVar2,puVar1);
  func_0x00010058d43c(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036cbf80; end: 1036cc0d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cbf80(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  
  lVar1 = _DAT_112f87690;
  lVar3 = *(long *)(unaff_x20 + _DAT_112f87690);
  if (lVar3 == 0) {
    FUN_1036ccc50(&DAT_112f876a8);
  }
  else {
    *(undefined1 *)(unaff_x20 + _DAT_112f876b8) = 1;
    func_0x000107c61174();
    FUN_1036cccf8();
    if ((param_1 & 1) == 0) {
      func_0x000107c5e37c(lVar3);
      func_0x000107c3e748(lVar3);
    }
    lVar4 = lVar3;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036cc0d4);
      (*pcVar2)();
    }
    func_0x000107c4ff34();
    func_0x000107c61170(lVar4);
    lVar4 = lVar3;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036cc0d8);
      (*pcVar2)();
    }
    func_0x000107c5a03c();
    func_0x000107c61170(lVar4);
    func_0x000107c427e0(lVar3);
    func_0x000107c4ff2c(lVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    func_0x000107c61170(uVar5);
    puVar6 = &UNK_110681368;
    func_0x000107c613fc(&UNK_110681368,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    func_0x000107c6157c(puVar6);
    FUN_1036cd6dc(FUN_1036cd920,puVar6);
    func_0x000107c61170(lVar3);
    func_0x000107c61578(puVar6,2);
  }
  return;
}



/* Entry: 1036cc0d8; end: 1036cc39b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cc0d8(void)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = _DAT_112f87690;
  ppuVar8 = &puStack_90;
  ppuVar10 = &puStack_90;
  lVar11 = *(long *)(unaff_x20 + _DAT_112f87690);
  if (lVar11 == 0) {
LAB_1036cc36c:
    FUN_1036ccc50(&DAT_112f876a8);
  }
  else {
    lVar12 = *(long *)(unaff_x20 + _DAT_112f87688);
    if (lVar12 == 0) {
      func_0x000107c61174(lVar11);
      lVar4 = lVar11;
LAB_1036cc154:
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1036cc39c);
        (*pcVar3)();
      }
      lVar12 = lVar4;
      func_0x000107c5c42c();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (lVar12 == 0) {
LAB_1036cc364:
        func_0x000107c61170(lVar11);
        goto LAB_1036cc36c;
      }
    }
    else {
      func_0x000107c61174(lVar11);
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar12 == 0) {
        lVar4 = *(long *)(unaff_x20 + lVar2);
        if (*(long *)(unaff_x20 + lVar2) != 0) goto LAB_1036cc154;
        goto LAB_1036cc364;
      }
    }
    *(undefined1 *)(unaff_x20 + _DAT_112f876b8) = 1;
    *(undefined1 *)(unaff_x20 + _DAT_112f876c0) = 1;
    FUN_1036cccf8();
    func_0x000107c5e37c(lVar11);
    func_0x000107c3e748(lVar11);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar9 = &UNK_110681458;
    puVar6 = puVar9;
    func_0x000107c613fc(&UNK_110681458,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,lVar11);
    puVar7 = &UNK_110681480;
    func_0x000107c613fc(&UNK_110681480,0x20,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(long *)(puVar7 + 0x18) = lVar12;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_1036cd970;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110681498;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    puVar7 = puStack_68;
    func_0x000107c61174(lVar11);
    func_0x000107c61174(lVar12);
    func_0x000107c61574(puVar7);
    puVar7 = &UNK_110681368;
    func_0x000107c613fc(&UNK_110681368,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    func_0x000107c613fc(&UNK_110681458,0x18,7);
    func_0x000107c61614(puVar9 + 0x10,lVar11);
    func_0x000107c61170(lVar11);
    puVar6 = &UNK_1106814d0;
    func_0x000107c613fc(&UNK_1106814d0,0x20,7);
    *(undefined **)(puVar6 + 0x10) = puVar7;
    *(undefined **)(puVar6 + 0x18) = puVar9;
    pcStack_70 = FUN_1036cd988;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100288f10;
    puStack_78 = &UNK_1106814e8;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c3dcd4(0x3fc3333333333333,0,puVar5);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar11);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar8);
  }
  return;
}



/* Entry: 1036cc39c; end: 1036cc427; -[_TtC32SCLensPlusServicesImplementation42ImagineLensInteractiveDismissalUIContainer detachUI:] */

void FUN_1036cc39c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_1106818b8;
    func_0x000107c613fc(&UNK_1106818b8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_1036cdd64;
  }
  func_0x000107c61174(param_1);
  FUN_1036cb398(pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036cc428; end: 1036cc6db;  */

/* WARNING: Possible PIC construction at 0x0001036cc5ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036cc670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036cc4d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036cc674) */
/* WARNING: Removing unreachable block (ram,0x0001036cc5f0) */
/* WARNING: Removing unreachable block (ram,0x0001036cc4d4) */
/* WARNING: Removing unreachable block (ram,0x0001036cc6ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cc428(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = _DAT_112f87690;
  lVar7 = *(long *)(unaff_x20 + _DAT_112f87690);
  if (lVar7 == 0) {
    return;
  }
  lVar8 = *(long *)(unaff_x20 + _DAT_112f87688);
  if (lVar8 == 0) {
    func_0x000107c61174(lVar7);
  }
  else {
    lVar3 = lVar7;
    func_0x000107c61174(lVar7);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar8 != 0) {
      *(undefined1 *)(unaff_x20 + _DAT_112f876c0) = 1;
      FUN_1036cccf8();
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar6 = &UNK_110681458;
      puVar4 = puVar6;
      func_0x000107c613fc(&UNK_110681458,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,lVar7);
      puVar5 = &UNK_110681728;
      func_0x000107c613fc(&UNK_110681728,0x20,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(long *)(puVar5 + 0x18) = lVar8;
      uStack_70 = 0x1036cddec;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_110681740;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      puVar5 = puStack_68;
      func_0x000107c61174(lVar7);
      func_0x000107c61174(lVar8);
      func_0x000107c61574(puVar5);
      puVar5 = &UNK_110681368;
      func_0x000107c613fc(&UNK_110681368,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      func_0x000107c613fc(&UNK_110681458,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,lVar7);
      lVar3 = lVar7;
      goto code_r0x000107c61170;
    }
    lVar7 = *(long *)(unaff_x20 + lVar1);
    if (*(long *)(unaff_x20 + lVar1) == 0) goto code_r0x000107c61170;
  }
  lVar3 = lVar7;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1036cc6dc);
    (*pcVar2)();
  }
  func_0x000107c5c42c();
  func_0x000107c61180();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1036cc6dc; end: 1036cc707; -[_TtC32SCLensPlusServicesImplementation42ImagineLensInteractiveDismissalUIContainer init] */

void FUN_1036cc6dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPlusServicesImplementation.ImagineLensInteractiveDismissalUIContainer",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036cc708);
  (*pcVar1)();
}



/* Entry: 1036cc708; end: 1036cc70b;  */

void FUN_1036cc708(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036cc70c; end: 1036cc73f;  */

void FUN_1036cc70c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036cc740; end: 1036cc7cb; -[_TtC32SCLensPlusServicesImplementation42ImagineLensInteractiveDismissalUIContainer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036cc7b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036cc7b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cc740(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f87678));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f87680 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f87688));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f87690));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f87698));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f876a0));
  return;
}



/* Entry: 1036cc7cc; end: 1036cc7eb;  */

void FUN_1036cc7cc(void)

{
  func_0x000107c61168(&PTR_PTR_1128e1e20);
  return;
}



/* Entry: 1036cc7ec; end: 1036cc8c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1036cc7ec(double param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f87698);
  if ((lVar1 == 0 || param_3 != lVar1) || ((*(byte *)(unaff_x20 + _DAT_112f876b8) & 1) != 0)) {
    uVar4 = 0;
  }
  else {
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      func_0x000107c5dc98(lVar1);
      if ((param_2 <= 0.0) || (param_2 <= ABS(param_1) * 1.2)) {
        uVar4 = 0;
        lVar3 = lVar2;
      }
      else {
        lVar3 = lVar1;
        FUN_1036cdccc(lVar1,lVar2);
        uVar4 = (uint)lVar3;
        lVar3 = lVar1;
        lVar1 = lVar2;
      }
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170(lVar1);
  }
  return uVar4 & 1;
}



/* Entry: 1036cc8c8; end: 1036cc923; -[_TtC32SCLensPlusServicesImplementation42ImagineLensInteractiveDismissalUIContainer gestureRecognizerShouldBegin:] */

uint FUN_1036cc8c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1036cc7ec(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1036cc924; end: 1036cc9ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cc924(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  ulong uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_70;
  uVar4 = *(ulong *)(param_1 + _DAT_112f87678);
  uVar2 = uVar4;
  func_0x000107c61150(uVar4,PTR_s_respondsToSelector__11262c7e0,PTR_s_attachUI_completion__1125a0c10
                     );
  if ((uVar2 & 1) != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000b0c7c;
    puStack_58 = &UNK_110681678;
    uStack_50 = param_3;
    uStack_48 = param_4;
    func_0x000107c60bc4(&puStack_70);
    uVar1 = uStack_48;
    func_0x000107c615f0(uVar4);
    func_0x000107c6157c(param_4);
    func_0x000107c61574(uVar1);
    func_0x000107c3e2c4(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 1036cca00; end: 1036cca8b;  */

void FUN_1036cca00(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1036cca8c);
      (*pcVar1)();
    }
    func_0x000107c5a03c(lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1036cca8c; end: 1036ccc4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cca8c(undefined8 param_1,long param_2,long param_3)

{
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_60,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      if (((param_3 == *(long *)(param_2 + _DAT_112f87690)) &&
          ((*(byte *)(param_2 + _DAT_112f876b8) & 1) == 0)) &&
         ((*(byte *)(param_2 + _DAT_112f876d8) & 1) == 0)) {
        func_0x000107c427e0(param_3);
        func_0x000107c41c30(param_3);
        *(undefined1 *)(param_2 + _DAT_112f876b0) = 0;
        func_0x0001036ccb88();
        FUN_1036ccc50(&DAT_112f876a0);
      }
      func_0x000107c61170(param_2);
      param_2 = param_3;
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1036ccc50; end: 1036cccf7;  */

void FUN_1036ccc50(long *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_58 [24];
  
  lVar4 = *param_1;
  func_0x000107c61428(unaff_x20 + lVar4,auStack_58,1,0);
  lVar3 = *(long *)(unaff_x20 + lVar4);
  *(undefined **)(unaff_x20 + lVar4) = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = *(ulong *)(lVar3 + 0x10);
  if (uVar5 != 0) {
    uVar6 = 0;
    puVar7 = (undefined8 *)(lVar3 + 0x28);
    do {
      if (*(ulong *)(lVar3 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1036cccf8);
        (*pcVar2)();
      }
      uVar6 = uVar6 + 1;
      pcVar2 = (code *)puVar7[-1];
      uVar1 = *puVar7;
      func_0x000107c6157c(uVar1);
      (*pcVar2)();
      func_0x000107c61574(uVar1);
      puVar7 = puVar7 + 2;
    } while (uVar5 != uVar6);
  }
  func_0x000107c6142c(lVar3);
  return;
}



/* Entry: 1036cccf8; end: 1036ccd87;  */

/* WARNING: Possible PIC construction at 0x0001036ccd40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036ccd54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036ccd44) */
/* WARNING: Removing unreachable block (ram,0x0001036ccd58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cccf8(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f87698);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c4ff3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1036ccd88; end: 1036cd03b;  */

/* WARNING: Possible PIC construction at 0x0001036ccff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036ccfa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036cd0b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036cd0f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036cd294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036ccf40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036cd298) */
/* WARNING: Removing unreachable block (ram,0x0001036cd0f4) */
/* WARNING: Removing unreachable block (ram,0x0001036cd104) */
/* WARNING: Removing unreachable block (ram,0x0001036cd108) */
/* WARNING: Removing unreachable block (ram,0x0001036cd114) */
/* WARNING: Removing unreachable block (ram,0x0001036cd118) */
/* WARNING: Removing unreachable block (ram,0x0001036cd174) */
/* WARNING: Removing unreachable block (ram,0x0001036cd178) */
/* WARNING: Removing unreachable block (ram,0x0001036cd188) */
/* WARNING: Removing unreachable block (ram,0x0001036cd11c) */
/* WARNING: Removing unreachable block (ram,0x0001036cd120) */
/* WARNING: Removing unreachable block (ram,0x0001036cd130) */
/* WARNING: Removing unreachable block (ram,0x0001036cd144) */
/* WARNING: Removing unreachable block (ram,0x0001036cd158) */
/* WARNING: Removing unreachable block (ram,0x0001036cd2d0) */
/* WARNING: Removing unreachable block (ram,0x0001036cd0bc) */
/* WARNING: Removing unreachable block (ram,0x0001036cd0c0) */
/* WARNING: Removing unreachable block (ram,0x0001036ccfac) */
/* WARNING: Removing unreachable block (ram,0x0001036ccff4) */
/* WARNING: Removing unreachable block (ram,0x0001036ccf44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ccd88(undefined8 param_1,double param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  double dVar8;
  undefined *unaff_d8;
  undefined8 unaff_d9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar3 = param_3;
  func_0x000107c5bcc0();
  lVar7 = _DAT_112f87690;
  if (lVar3 - 4U < 2) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112f87690);
    if (lVar3 != 0) {
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar3 != 0) {
        puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
        puVar6 = &UNK_1106817c8;
        func_0x000107c613fc(&UNK_1106817c8,0x18,7);
        *(long *)(puVar6 + 0x10) = lVar3;
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_60 = FUN_1036cdb7c;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        puStack_70 = &UNK_1000f6b44;
        puStack_68 = &UNK_1106817e0;
        puStack_58 = puVar6;
        func_0x000107c60bc4(&puStack_80);
        puVar6 = puStack_58;
        func_0x000107c61174(lVar3);
        func_0x000107c61574(puVar6);
        puVar6 = &UNK_110681368;
        func_0x000107c613fc(&UNK_110681368,0x18,7);
        func_0x000107c61614(puVar6 + 0x10);
        pcStack_60 = FUN_1036cdb7c;
        puStack_80 = puVar1;
        uStack_78 = 0x42000000;
        puStack_70 = &UNK_100288f10;
        puStack_68 = &UNK_110681808;
        puStack_58 = puVar6;
        func_0x000107c60bc4(&puStack_80);
        func_0x000107c61574(puStack_58);
        func_0x000107c3dcd4(0x3fd0000000000000,0,puVar5);
        goto code_r0x000107c61170;
      }
    }
  }
  else {
    if (lVar3 == 3) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112f87688);
      pcStack_60 = (code *)unaff_d9;
      puStack_58 = unaff_d8;
      if (lVar3 != 0) {
        func_0x000107c5de64();
        func_0x000107c61180();
        if (lVar3 != 0) {
          func_0x000107c61174();
          func_0x000107c5cf78(param_3);
          func_0x000107c5dc98(param_3);
          goto code_r0x000107c61170;
        }
      }
      lVar3 = *(long *)(unaff_x20 + _DAT_112f87690);
      if (lVar3 == 0) {
        return;
      }
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1036cd2f8);
        (*pcVar2)();
      }
      func_0x000107c5c42c();
      func_0x000107c61180();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
    if ((lVar3 == 2) && (lVar3 = *(long *)(unaff_x20 + _DAT_112f87690), lVar3 != 0)) {
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = *(long *)(unaff_x20 + _DAT_112f87688);
        if (lVar4 != 0) {
          func_0x000107c5de64();
          func_0x000107c61180();
          if (lVar4 != 0) {
            func_0x000107c5cf78(param_3);
            dVar8 = 0.0;
            if (0.0 < param_2) {
              dVar8 = param_2;
            }
            func_0x000107c60890(&puStack_80,0,dVar8);
            func_0x000107c5a03c(lVar3);
            goto code_r0x000107c61170;
          }
        }
        lVar7 = *(long *)(unaff_x20 + lVar7);
        if (lVar7 != 0) {
          func_0x000107c5de64();
          func_0x000107c61180();
          if (lVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1036cd03c);
            (*pcVar2)();
          }
          func_0x000107c5c42c();
          func_0x000107c61180();
          lVar3 = lVar7;
        }
        goto code_r0x000107c61170;
      }
    }
  }
  return;
}



/* Entry: 1036cd03c; end: 1036cd2f7;  */

/* WARNING: Possible PIC construction at 0x0001036cd0b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036cd0f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036cd294: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036cd0f4) */
/* WARNING: Removing unreachable block (ram,0x0001036cd104) */
/* WARNING: Removing unreachable block (ram,0x0001036cd108) */
/* WARNING: Removing unreachable block (ram,0x0001036cd114) */
/* WARNING: Removing unreachable block (ram,0x0001036cd118) */
/* WARNING: Removing unreachable block (ram,0x0001036cd174) */
/* WARNING: Removing unreachable block (ram,0x0001036cd178) */
/* WARNING: Removing unreachable block (ram,0x0001036cd188) */
/* WARNING: Removing unreachable block (ram,0x0001036cd11c) */
/* WARNING: Removing unreachable block (ram,0x0001036cd120) */
/* WARNING: Removing unreachable block (ram,0x0001036cd130) */
/* WARNING: Removing unreachable block (ram,0x0001036cd144) */
/* WARNING: Removing unreachable block (ram,0x0001036cd158) */
/* WARNING: Removing unreachable block (ram,0x0001036cd2d0) */
/* WARNING: Removing unreachable block (ram,0x0001036cd0bc) */
/* WARNING: Removing unreachable block (ram,0x0001036cd0c0) */
/* WARNING: Removing unreachable block (ram,0x0001036cd298) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cd03c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f87688);
  if (lVar2 != 0) {
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c61174();
      func_0x000107c5cf78(param_1,param_2,lVar2);
      func_0x000107c5dc98(param_1,param_2,lVar2);
      goto code_r0x000107c61170;
    }
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112f87690);
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1036cd2f8);
    (*pcVar1)();
  }
  func_0x000107c5c42c();
  func_0x000107c61180();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1036cd2f8; end: 1036cd347; -[_TtC32SCLensPlusServicesImplementation42ImagineLensInteractiveDismissalUIContainer handleDismissPan:] */

/* WARNING: Possible PIC construction at 0x0001036cd330: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036cd334) */

void FUN_1036cd2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036ccd88(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036cd348; end: 1036cd4c7;  */

void FUN_1036cd348(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1036cd4c8; end: 1036cd57b;  */

void FUN_1036cd4c8(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_80 [56];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar2 = param_2;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1036cd57c);
      (*pcVar1)();
    }
    func_0x000107c3ec60(param_3);
    func_0x000107c609b0();
    func_0x000107c60890(auStack_80,0,param_1);
    func_0x000107c5a03c(lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1036cd57c; end: 1036cd6db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cd57c(undefined8 param_1,long param_2,long param_3)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_50,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      *(undefined1 *)(param_2 + _DAT_112f876c0) = 0;
      *(undefined1 *)(param_2 + _DAT_112f876c8) = 1;
      if (param_3 == *(long *)(param_2 + _DAT_112f87690)) {
        FUN_1036cbf80(1);
      }
      func_0x000107c61170(param_2);
      param_2 = param_3;
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1036cd6dc; end: 1036cd883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cd6dc(code *param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_90;
  if (*(long *)(unaff_x20 + _DAT_112f87688) == 0) {
    if (param_1 != (code *)0x0) {
      (*param_1)();
    }
  }
  else {
    puVar3 = &UNK_110681390;
    func_0x000107c613fc(&UNK_110681390,0x20,7);
    *(code **)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar5 = &UNK_1106813b8;
    func_0x000107c613fc(&UNK_1106813b8,0x28,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar5 + 0x18) = 0x1036cddf8;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    puVar6 = &UNK_1106813e0;
    func_0x000107c613fc(&UNK_1106813e0,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = 0x1036cd928;
    *(undefined **)(puVar6 + 0x18) = puVar5;
    pcStack_70 = FUN_1036cd934;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_10006eb60;
    puStack_78 = &UNK_1106813f8;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    puVar1 = puStack_68;
    func_0x000100b64c10(param_1,param_2);
    func_0x000107c61174();
    func_0x000107c6157c(puVar3);
    func_0x000107c6157c(puVar6);
    func_0x000107c61574(puVar1);
    func_0x000107c4e5fc(puVar4);
    func_0x000107c61574(puVar3);
    func_0x000107c60bd0(ppuVar7);
    puVar3 = puVar6;
    func_0x000107c61544(puVar6,"",0x86,0x18a,0x28,1);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(puVar5);
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036cd858);
      (*pcVar2)();
    }
  }
  return;
}



/* Entry: 1036cd884; end: 1036cd91f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cd884(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f87678);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000b0c7c;
  puStack_48 = &UNK_110681420;
  uStack_40 = param_2;
  uStack_38 = param_3;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(uVar1);
  func_0x000107c41864(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1036cd920; end: 1036cd933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cd920(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f87688);
    *(undefined8 *)(lVar1 + _DAT_112f87688) = 0;
    func_0x000107c61170(uVar2);
    *(undefined1 *)(lVar1 + _DAT_112f876b8) = 0;
    *(undefined1 *)(lVar1 + _DAT_112f876c0) = 0;
    *(undefined1 *)(lVar1 + _DAT_112f876c8) = 1;
    *(undefined1 *)(lVar1 + _DAT_112f876d8) = 1;
    FUN_1036ccc50(&DAT_112f876a8);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1036cd934; end: 1036cd953;  */

void FUN_1036cd934(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1036cd954; end: 1036cd96f;  */

void FUN_1036cd954(long param_1,long param_2)

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



/* Entry: 1036cd970; end: 1036cd987;  */

void FUN_1036cd970(void)

{
  long unaff_x20;
  
  FUN_1036cd4c8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1036cd988; end: 1036cd997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cd988(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_50,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      *(undefined1 *)(lVar1 + _DAT_112f876c0) = 0;
      *(undefined1 *)(lVar1 + _DAT_112f876c8) = 1;
      if (lVar2 == *(long *)(lVar1 + _DAT_112f87690)) {
        FUN_1036cbf80(1);
      }
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1036cd998; end: 1036cd9c3;  */

void FUN_1036cd998(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036cd9c4; end: 1036cd9c7;  */

void FUN_1036cd9c4(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 1036cd9c8; end: 1036cd9ef;  */

void FUN_1036cd9c8(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 1036cd9f0; end: 1036cda1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cd9f0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f87678),PTR_s_attachUI__1125a0c08
             ,*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1036cda20; end: 1036cda77;  */

void FUN_1036cda20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036cda78; end: 1036cda7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cda78(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_50,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      if ((lVar2 == *(long *)(lVar1 + _DAT_112f87690)) &&
         ((*(byte *)(lVar1 + _DAT_112f876d8) & 1) == 0)) {
        *(undefined1 *)(lVar1 + _DAT_112f876c0) = 0;
        *(undefined1 *)(lVar1 + _DAT_112f876c8) = 1;
        if (*(char *)(lVar1 + _DAT_112f876d0) == '\x01') {
          FUN_1036cbf80(0);
        }
      }
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1036cda80; end: 1036cdb7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cda80(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_4;
  func_0x000107c614f0();
  *(undefined8 *)(param_4 + _DAT_112f87688) = 0;
  *(undefined8 *)(param_4 + _DAT_112f87690) = 0;
  *(undefined8 *)(param_4 + _DAT_112f87698) = 0;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(param_4 + _DAT_112f876a0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(param_4 + _DAT_112f876a8) = puVar2;
  *(undefined1 *)(param_4 + _DAT_112f876b0) = 0;
  *(undefined1 *)(param_4 + _DAT_112f876b8) = 0;
  *(undefined1 *)(param_4 + _DAT_112f876c0) = 0;
  *(undefined1 *)(param_4 + _DAT_112f876c8) = 0;
  *(undefined1 *)(param_4 + _DAT_112f876d0) = 0;
  *(undefined1 *)(param_4 + _DAT_112f876d8) = 0;
  *(undefined8 *)(param_4 + _DAT_112f87678) = param_1;
  puVar1 = (undefined8 *)(param_4 + _DAT_112f87680);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  lStack_40 = param_4;
  lStack_38 = lVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036cdb7c; end: 1036cdb87;  */

void FUN_1036cdb7c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_40 = 0x3ff0000000000000;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0x3ff0000000000000;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x000107c5a03c(*(undefined8 *)(unaff_x20 + 0x10),param_2,&uStack_40);
  return;
}



/* Entry: 1036cdb88; end: 1036cdbbb;  */

void FUN_1036cdb88(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_40 = 0x3ff0000000000000;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0x3ff0000000000000;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x000107c5a03c(*(undefined8 *)(unaff_x20 + 0x10),param_2,&uStack_40);
  return;
}



/* Entry: 1036cdbbc; end: 1036cdccb;  */

ulong FUN_1036cdbbc(double param_1,double param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  
  func_0x000107c61174();
  do {
    func_0x000107c61174();
    puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScrollView_1126af098);
    uVar2 = param_3;
    func_0x000107c6148c(param_3,puVar1);
    dVar5 = param_2;
    if (uVar2 != 0) {
      uVar3 = param_3;
      func_0x000107c61174(param_3);
      uVar4 = uVar2;
      func_0x000107c4a3a8();
      dVar5 = param_2;
      if ((((int)uVar4 == 0) ||
          (uVar4 = uVar2, func_0x000107c49eac(), dVar5 = param_2, (uVar4 & 1) != 0)) ||
         (func_0x000107c3dc40(uVar2), dVar5 = param_2, param_1 <= 0.01)) {
        func_0x000107c61170(uVar3);
      }
      else {
        func_0x000107c404f0(uVar2);
        dVar5 = param_2;
        func_0x000107c3ec60(uVar2);
        func_0x000107c609b0();
        func_0x000107c61170(uVar3);
        param_1 = param_1 + 2.0;
        if (param_1 < param_2) {
          func_0x000107c61170(uVar3);
          return uVar2;
        }
      }
    }
    uVar2 = param_3;
    func_0x000107c5c42c();
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    param_3 = uVar2;
    param_2 = dVar5;
  } while (uVar2 != 0);
  return 0;
}



/* Entry: 1036cdccc; end: 1036cdd63;  */

bool FUN_1036cdccc(double param_1,double param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  func_0x000107c4b8b8(param_3,param_4,param_4);
  func_0x000107c44ec4();
  func_0x000107c61180();
  if (param_4 != 0) {
    lVar1 = param_4;
    FUN_1036cdbbc();
    if (lVar1 != 0) {
      func_0x000107c404a0();
      func_0x000107c3d9b4(lVar1);
      func_0x000107c61170(param_4);
      func_0x000107c61170(lVar1);
      return param_2 <= 2.0 - param_1;
    }
    func_0x000107c61170(param_4);
  }
  return true;
}



/* Entry: 1036cdd64; end: 1036cddff;  */

void FUN_1036cdd64(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100f4d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1036cde00; end: 1036cdf03;  */

/* WARNING: Possible PIC construction at 0x0001036cdec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036cded4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036cdee8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036cded8) */
/* WARNING: Removing unreachable block (ram,0x0001036cdec8) */
/* WARNING: Removing unreachable block (ram,0x0001036cdeec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cde00(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f87710);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f87718);
    func_0x000107c61174();
    FUN_1036cdf04(param_1,param_2);
    func_0x00010439a550(0);
    func_0x0001043998c4(0);
    func_0x000107c3eda8(uVar2);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1036cdf04; end: 1036ce093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cdf04(long param_1,ulong *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  ulong *puVar8;
  
  lVar7 = param_1;
  puVar8 = param_2;
  func_0x000107c5d2d8();
  func_0x000107c61180();
  if (lVar7 != 0) {
    lVar3 = lVar7;
    func_0x000107c4f8bc();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar3 != 0) {
      lVar7 = lVar3;
      func_0x000107c5faec(lVar3);
      func_0x000107c61170(lVar3);
      uVar2 = (uint)lVar3;
      goto LAB_1036cdf80;
    }
  }
  uVar2 = (uint)lVar7;
  lVar7 = 0;
  puVar8 = (ulong *)0x0;
LAB_1036cdf80:
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_2) + 0x80))();
  uVar5 = *(undefined8 *)((long)param_2 + _DAT_113036378);
  uVar1 = ((undefined8 *)((long)param_2 + _DAT_113036378))[1];
  func_0x00010439c8f8(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar1);
  uVar4 = 0;
  uVar6 = 0;
  func_0x00010439c2b8(0,0,lVar7,puVar8,0,uVar2 & 1,uVar5,uVar1,0,0,0,0);
  lVar7 = 0x3a;
  if (*(long *)(unaff_x20 + _DAT_112f87720) != -1) {
    lVar7 = *(long *)(unaff_x20 + _DAT_112f87720);
  }
  func_0x000107c4b1dc(param_1);
  func_0x000107c61180();
  lVar3 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  uVar5 = 0;
  func_0x00010439c014(0);
  func_0x000107c610f8();
  func_0x00010439b9d8(uVar5,0x51,0,0,lVar7,lVar3,uVar6,0x25,uVar4);
  return;
}



/* Entry: 1036ce094; end: 1036ce0f3; -[_TtC32SCLensPlusServicesImplementation26ImagineLensPaywallLauncher init] */

void FUN_1036ce094(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPlusServicesImplementation.ImagineLensPaywallLauncher",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036ce0c0);
  (*pcVar1)();
}



/* Entry: 1036ce0f4; end: 1036ce12b; -[_TtC32SCLensPlusServicesImplementation26ImagineLensPaywallLauncher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036ce110: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036ce114) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ce0f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f87710));
  return;
}



/* Entry: 1036ce12c; end: 1036ce14b;  */

void FUN_1036ce12c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e1f40);
  return;
}



/* Entry: 1036ce14c; end: 1036ce197; -[_TtC32SCLensPlusServicesImplementation26ImagineLensPaywallLauncher plusSubscribeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ce14c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f87710);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1036ce198; end: 1036ce19b;  */

void FUN_1036ce198(void)

{
  return;
}



/* Entry: 1036ce19c; end: 1036ce247;  */

void FUN_1036ce19c(void)

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



/* Entry: 1036ce248; end: 1036ce25f;  */

void FUN_1036ce248(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036ce260,0,0);
  return;
}



/* Entry: 1036ce260; end: 1036ce46b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ce260(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  long unaff_x22;
  ulong uVar10;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar10 = *(ulong *)(unaff_x22 + 0x10);
  iVar9 = (int)uVar10;
  func_0x000107c451a0();
  func_0x000107c615e8();
  if ((iVar9 != 0) && (FUN_1036ce830(), (uVar10 & 1) == 0)) {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x28) + _DAT_112f87828);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x30) = lVar2;
    if (lVar2 != 0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar3 = lVar2;
      func_0x000100fe4188();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = 3;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      *(undefined8 *)(lVar3 + 0x20) = uVar7;
      uVar4 = 0;
      func_0x000100c70ba8(0);
      func_0x000107c61174();
      lVar5 = lVar3;
      func_0x000107c5fc48(lVar3,uVar4);
      func_0x000107c61574(lVar3);
      func_0x000107c43164();
      func_0x000107c61180();
      *(long *)(unaff_x22 + 0x38) = lVar2;
      func_0x000107c61170(lVar5);
      func_0x0001000285a8(0x112f878c8,&UNK_10dbfb7b8);
      puVar6 = &UNK_110681ea8;
      func_0x000107c613fc(&UNK_110681ea8,0x28,7);
      *(long *)(puVar6 + 0x10) = lVar2;
      *(undefined8 *)(puVar6 + 0x18) = uVar1;
      *(undefined8 *)(puVar6 + 0x20) = uVar7;
      func_0x000107c61174(uVar7);
      func_0x000107c61174(lVar2);
      func_0x000107c61174(uVar1);
      uVar7 = 0;
      func_0x0001048897a0(0,1,0,FUN_1036d3e98,puVar6);
      *(undefined8 *)(unaff_x22 + 0x40) = uVar7;
      func_0x000107c61574(puVar6);
      plVar8 = (long *)0x80;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x48) = plVar8;
      *plVar8 = unaff_x22;
      plVar8[1] = (long)FUN_1036ce46c;
                    /* WARNING: Could not recover jumptable at 0x0001036ce440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      FUN_1036d3b80();
      return;
    }
  }
  func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001036ce468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1036ce46c; end: 1036ce4bf;  */

void FUN_1036ce46c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x50) = param_1;
  *(undefined1 *)(lVar1 + 0x58) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036ce4c0,0,0);
  return;
}



/* Entry: 1036ce4c0; end: 1036ce59b;  */

void FUN_1036ce4c0(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x58) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x50);
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x18,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001036ce55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001036ce598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Entry: 1036ce59c; end: 1036ce693;  */

void FUN_1036ce59c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = &UNK_1106819a8;
  func_0x000107c613fc(&UNK_1106819a8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_3);
  puVar2 = &UNK_110681ed0;
  func_0x000107c613fc(&UNK_110681ed0,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  pcStack_50 = FUN_1036d3ee4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101286f34;
  puStack_58 = &UNK_110681ee8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61174(param_4);
  func_0x000107c61574(puVar1);
  func_0x000107c5dc64(param_2);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 1036ce694; end: 1036ce82f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ce694(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 auStack_68 [3];
  
  if (param_2 == 0) {
    auStack_68[0] = param_5;
    func_0x000107c61174(param_5);
    func_0x000100b60084(auStack_68);
    func_0x000107c61170(param_5);
  }
  else {
    func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 == 0) {
      func_0x000107c614b0(param_2);
    }
    else {
      uVar6 = *(undefined8 *)(param_3 + _DAT_112f87870);
      func_0x000107c614cc(param_2,auStack_70,auStack_88);
      func_0x000107c614b0(param_2);
      lVar2 = lStack_78;
      func_0x000107c60640(uStack_80);
      uVar1 = uStack_80;
      lVar3 = lVar2;
      func_0x000107c5fadc();
      func_0x000107c6142c();
      func_0x000100773cf0();
      if (lVar3 == 0) {
        lVar7 = 0;
        lVar3 = lVar2;
      }
      else {
        func_0x000107c5fadc();
        func_0x000107c6142c();
        lVar7 = lVar2;
      }
      func_0x000100773c70();
      puVar4 = PTR___sSiN_11034deb0;
      puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar5);
      func_0x000106bddd8c(uVar6,uVar1,lVar7,puVar4,0,1,param_7,param_8,lVar3);
      func_0x000107c61170(param_3);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(puVar4);
    }
    func_0x00010488ade0(param_2);
    func_0x000107c614ac(param_2);
  }
  return;
}



/* Entry: 1036ce830; end: 1036ce8b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036ce830(void)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4517c();
  func_0x000107c615e8(uStack_38);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x0001000d224c(&uStack_40);
    uVar1 = uStack_40;
    func_0x000107c45178(uStack_40);
    func_0x000107c615e8(uStack_40);
  }
  return uVar1;
}



/* Entry: 1036ce8b4; end: 1036ce8cf;  */

void FUN_1036ce8b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036ce8d0,0,0);
  return;
}



/* Entry: 1036ce8d0; end: 1036ce9bb;  */

void FUN_1036ce8d0(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x40) = lVar3;
  if (lVar3 != 0) {
    plVar2 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = 0x1036ce95c;
    lVar1 = *(long *)(unaff_x22 + 0x30);
    plVar2[9] = *(long *)(unaff_x22 + 0x38);
    plVar2[10] = lVar3;
    plVar2[8] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1036d229c,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001036ce958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1036ce9bc; end: 1036cea2b;  */

void FUN_1036ce9bc(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x50);
  if (lVar2 != 0) {
    plVar1 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1036cea2c;
    lVar3 = *(long *)(unaff_x22 + 0x40);
    plVar1[4] = lVar2;
    plVar1[5] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1036ce260,0,0);
    return;
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0001036cea28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1036cea2c; end: 1036cea8b;  */

void FUN_1036cea2c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x68) = param_1;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1036cea8c;
  }
  else {
    pcVar1 = FUN_1036ceb2c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1036cea8c; end: 1036ceaef;  */

void FUN_1036cea8c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar2 = *(long *)(unaff_x22 + 0x40);
  if (lVar3 != 0) {
    func_0x0001036d2e58(lVar3);
    func_0x000107c61170(lVar2);
    lVar2 = lVar3;
  }
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001036ceaec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1036ceaf0; end: 1036ceb2b;  */

void FUN_1036ceaf0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001036ceb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1036ceb2c; end: 1036ceb73;  */

void FUN_1036ceb2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61170(uVar1);
  func_0x000107c614ac(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001036ceb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1036ceb74; end: 1036cec8b;  */

undefined8 FUN_1036ceb74(undefined8 param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_58;
  
  uStack_58 = 0;
  uVar3 = 0;
  func_0x000100c70ba8(0);
  func_0x000107c5fc50(param_1,&uStack_58,uVar3);
  uVar1 = uStack_58;
  if (uStack_58 == 0) {
    uVar3 = 0;
  }
  else {
    uVar8 = uStack_58 & 0xffffffffffffff8;
    if (uStack_58 >> 0x3e == 0) {
      uVar6 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar6 = uStack_58;
      if (-1 < (long)uStack_58) {
        uVar6 = uVar8;
      }
      func_0x000107c60480();
    }
    uVar7 = 0;
    do {
      if (uVar6 == uVar7) {
        func_0x000107c6142c(uVar1);
        return 0;
      }
      if ((uVar1 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar8 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1036cec78);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(uVar1 + uVar7 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar7;
        func_0x000100ff3f88(uVar7,uVar1);
      }
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1036cec34);
        (*pcVar2)();
      }
      uVar5 = uVar4;
      func_0x000107c4a144();
      func_0x000107c61170(uVar4);
      uVar7 = uVar7 + 1;
    } while ((uVar5 & 1) != 0);
    func_0x000107c6142c(uVar1);
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 1036cec8c; end: 1036cece3;  */

uint FUN_1036cec8c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  uVar3 = param_2;
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  return (uint)uVar3 & 1;
}



/* Entry: 1036cece4; end: 1036cee03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cece4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_58 [24];
  
  puVar5 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar5,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x000100773cf0();
    if (puVar5 != (undefined1 *)0x0) {
      puVar2 = &UNK_1106819a8;
      func_0x000107c613fc(&UNK_1106819a8,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_2);
      puVar3 = &UNK_110681e80;
      func_0x000107c613fc(&UNK_110681e80,0x28,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(long *)(puVar3 + 0x18) = lVar1;
      *(undefined1 **)(puVar3 + 0x20) = puVar5;
      uVar4 = 10;
      func_0x0001001ca524(10,4,0x38,4,0,0,&UNK_10dbfb7d8,puVar3,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(uVar4);
    }
    lVar1 = _DAT_112f87780;
    func_0x000107c4218c(*(undefined8 *)(param_2 + _DAT_112f87780));
    uVar4 = *(undefined8 *)(param_2 + lVar1);
    *(undefined8 *)(param_2 + lVar1) = 0;
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 1036cee04; end: 1036cee77; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl imagineLensSideButtoIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036cee04(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(&lStack_38);
  lVar2 = lStack_38;
  func_0x000107c451a4();
  func_0x000107c615e8(lStack_38);
  func_0x000107c61170(param_1);
  uVar1 = 0x16c;
  if (lVar2 != 1) {
    uVar1 = 0x275;
  }
  return uVar1;
}



/* Entry: 1036cee78; end: 1036cee87; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl imagineLensSideButtonAvailability] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cee78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f87798));
  return;
}



/* Entry: 1036cee88; end: 1036ceebf; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl isImagineLensEnabledInToolbar] */

bool FUN_1036cee88(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100773c70();
  func_0x000107c61170(param_1);
  return (int)uVar1 == 3;
}



/* Entry: 1036ceec0; end: 1036ceef7; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl isImagineLensEnabledInARBar] */

bool FUN_1036ceec0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100773c70();
  func_0x000107c61170(param_1);
  return (int)uVar1 == 4;
}



/* Entry: 1036ceef8; end: 1036cef07; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl imagineLensToolbarAvailability] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ceef8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f877a0));
  return;
}



/* Entry: 1036cef08; end: 1036cef2f; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl imagineLensSideButtonVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cef08(long param_1)

{
  func_0x000107c421ac(*(undefined8 *)(param_1 + _DAT_112f877a8));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036cef30; end: 1036cef57; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl imagineLensToolbarVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cef30(long param_1)

{
  func_0x000107c421ac(*(undefined8 *)(param_1 + _DAT_112f877b0));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036cef58; end: 1036cef67; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl activeStateTriggerObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cef58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f877b8));
  return;
}



/* Entry: 1036cef68; end: 1036cf0a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1036cef68(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112f87788);
  if (uVar2 == 0) {
    uVar4 = *(ulong *)(unaff_x20 + _DAT_112f87830);
    if (uVar4 != 0) {
      uVar2 = 0;
      uVar7 = 0;
      uVar3 = uVar4;
      uVar4 = param_2;
      goto LAB_1036cefe0;
    }
    goto LAB_1036cf07c;
  }
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar7 = uVar2;
  func_0x000107c5faec();
  uVar4 = param_2;
  func_0x000107c61170(uVar2);
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112f87830);
  uVar2 = param_2;
  if (uVar3 == 0) {
joined_r0x0001036cf054:
    uVar2 = param_2;
    uVar4 = uVar3;
    if (uVar2 == 0) {
LAB_1036cf07c:
      func_0x000100773c70();
      bVar1 = uVar4 - 4 < 0xfffffffffffffffd;
      uVar2 = (ulong)bVar1;
      lVar6 = 0;
      if (!bVar1) {
        lVar6 = uVar4 + 0xe8;
      }
      goto LAB_1036cf094;
    }
LAB_1036cf058:
    func_0x000107c6142c(uVar2);
  }
  else {
LAB_1036cefe0:
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar5 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170();
    param_2 = uVar4;
    if (uVar2 == 0) goto joined_r0x0001036cf054;
    if (uVar4 == 0) goto LAB_1036cf058;
    if (uVar7 == uVar5 && uVar2 == uVar4) {
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c();
      goto LAB_1036cf07c;
    }
    func_0x000107c605b8(uVar7,uVar2,uVar5,uVar4,0);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c();
    if ((uVar7 & 1) != 0) goto LAB_1036cf07c;
  }
  uVar2 = 1;
  lVar6 = 0;
LAB_1036cf094:
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = lVar6;
  return auVar8;
}



/* Entry: 1036cf0a8; end: 1036cf0b3; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl activeStateSourceSourceValue] */

void FUN_1036cf0a8(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  
  func_0x000107c61174();
  FUN_1036cf1ac();
  if ((param_2 & 0xff) == 1) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1036cf0b4; end: 1036cf13b; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl activeStateCameraSourceValue] */

void FUN_1036cf0b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001036cf0e8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036cf13c; end: 1036cf147; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl activeStatePlusSourceValue] */

void FUN_1036cf13c(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  
  func_0x000107c61174();
  FUN_1036cef68();
  if ((param_2 & 0xff) == 1) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1036cf148; end: 1036cf1ab;  */

void FUN_1036cf148(undefined8 param_1,uint param_2,code *param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174();
  (*param_3)();
  if ((param_2 & 0xff) == 1) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1036cf1ac; end: 1036cf30f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1036cf1ac(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112f87788);
  if (uVar1 == 0) {
    uVar1 = *(ulong *)(unaff_x20 + _DAT_112f87830);
    if (uVar1 != 0) {
      uVar6 = 0;
      uVar7 = 0;
      uVar3 = param_2;
      goto LAB_1036cf224;
    }
    goto LAB_1036cf2bc;
  }
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar7 = uVar1;
  func_0x000107c5faec();
  uVar3 = param_2;
  func_0x000107c61170(uVar1);
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112f87830);
  uVar6 = param_2;
  if (uVar1 == 0) {
    if (param_2 == 0) goto LAB_1036cf2bc;
LAB_1036cf290:
    func_0x000107c6142c(uVar6);
  }
  else {
LAB_1036cf224:
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170();
    if (uVar6 == 0) {
      if (uVar3 == 0) goto LAB_1036cf2bc;
      func_0x000107c6142c(uVar3);
    }
    else {
      if (uVar3 == 0) goto LAB_1036cf290;
      if (uVar7 == uVar2 && uVar6 == uVar3) {
        func_0x000107c6142c(uVar6);
        func_0x000107c6142c();
        uVar1 = uVar3;
      }
      else {
        func_0x000107c605b8(uVar7,uVar6,uVar2,uVar3,0);
        func_0x000107c6142c(uVar6);
        func_0x000107c6142c();
        uVar1 = uVar3;
        if ((uVar7 & 1) == 0) goto LAB_1036cf2f4;
      }
LAB_1036cf2bc:
      if (*(char *)(unaff_x20 + _DAT_112f87838) == '\x02') {
        func_0x000100773c70();
        if (uVar1 - 1 < 3) {
          uVar5 = 0;
          uVar4 = *(undefined8 *)(&UNK_10dbfb948 + (uVar1 - 1) * 8);
          goto LAB_1036cf2fc;
        }
      }
    }
  }
LAB_1036cf2f4:
  uVar4 = 0;
  uVar5 = 1;
LAB_1036cf2fc:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = uVar4;
  return auVar8;
}



/* Entry: 1036cf310; end: 1036cf3a3; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl imagineLensLockReason] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cf310(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + _DAT_112f87848) & 1) == 0) {
    if (*(char *)(param_1 + _DAT_112f87850) != '\x01') {
      uVar1 = 0;
      goto LAB_1036cf394;
    }
    uVar2 = 0x800000010f159a10;
    uVar1 = 0xd00000000000001b;
  }
  else {
    uVar2 = 0xeb000000004d5549;
    uVar1 = 0x4d454552465f4f4e;
  }
  func_0x000107c5fadc(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
LAB_1036cf394:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036cf3a4; end: 1036cf46b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1036cf3a4(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long alStack_40 [2];
  
  uVar1 = param_1;
  lVar2 = param_2;
  func_0x000100773cf0();
  if (lVar2 != 0) {
    if ((uVar1 == param_1) && (lVar2 == param_2)) {
      func_0x000107c6142c(lVar2);
    }
    else {
      func_0x000107c605b8();
      func_0x000107c6142c(lVar2);
      if ((uVar1 & 1) == 0) goto LAB_1036cf450;
    }
    func_0x0001000d224c(alStack_40);
    if (alStack_40[0] != 0) {
      uVar3 = 0;
      func_0x0001036c5efc(0);
      FUN_1036c5f3c();
      func_0x000107c615e8(alStack_40[0]);
      goto LAB_1036cf454;
    }
  }
LAB_1036cf450:
  uVar3 = 0;
LAB_1036cf454:
  return uVar3 & 1;
}



/* Entry: 1036cf46c; end: 1036cf477; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl isAiCreationFlowPresentedFor:] */

uint FUN_1036cf46c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1036cf3a4(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 1036cf478; end: 1036cf4ab; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl isAICreationFlowPresented] */

uint FUN_1036cf478(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1036cf4ac();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1036cf4ac; end: 1036cf523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1036cf4ac(void)

{
  uint uVar1;
  long alStack_40 [2];
  
  func_0x0001000d224c(alStack_40);
  if (alStack_40[0] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    func_0x0001036c5efc(0);
    FUN_1036c5f3c();
    func_0x000107c615e8(alStack_40[0]);
  }
  return uVar1 & 1;
}



/* Entry: 1036cf524; end: 1036cf5af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cf524(void)

{
  long lVar1;
  long unaff_x20;
  long alStack_30 [2];
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f87788);
  if (lVar1 != 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112f87838) = 1;
    func_0x000107c61174();
    FUN_1036d3288(1,0x40,0);
    func_0x0001000d224c(alStack_30);
    if (alStack_30[0] != 0) {
      FUN_1036c2a80(lVar1);
      func_0x000107c615e8(alStack_30[0]);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1036cf5b0; end: 1036cf5d7; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl presentAiCreationFlow] */

void FUN_1036cf5b0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1036cf524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036cf5d8; end: 1036cf72f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cf5d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [16];
  long lStack_70;
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112f87788);
  if (lVar6 != 0) {
    func_0x000100773b04(0);
    func_0x000107c61174();
    lVar4 = lVar6;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f877f0);
    uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f877f0))[1];
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f877f8);
    uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112f877f8))[1];
    func_0x000107c6157c(uVar2);
    func_0x000107c6157c(uVar3);
    func_0x00010450db68(0,0,0,0,lVar5,param_2,uVar7,uVar2,uVar1,uVar3);
    func_0x000107c61170(lVar6);
    if (lVar5 != 0) {
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f877c0);
      lStack_70 = lVar5;
      func_0x000107c6157c(uVar7);
      func_0x000100075034(FUN_1036d3de0,auStack_80,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61170(lVar5);
      func_0x000107c61574(uVar7);
      *(undefined1 *)(unaff_x20 + _DAT_112f87840) = 1;
    }
  }
  return;
}



/* Entry: 1036cf730; end: 1036cf757; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl selectLeftCarouselImagineLens] */

void FUN_1036cf730(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1036cf5d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036cf758; end: 1036cf837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cf758(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long alStack_40 [2];
  
  func_0x0001000d224c(alStack_40);
  lVar2 = alStack_40[0];
  lVar1 = alStack_40[0];
  func_0x000107c4517c();
  func_0x000107c615e8(lVar2);
  if ((int)lVar1 == 0) {
    FUN_1036cf888(param_1);
  }
  else {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f87788);
    if (lVar2 != 0) {
      *(undefined1 *)(unaff_x20 + _DAT_112f87838) = 1;
      func_0x000107c61174();
      FUN_1036d3288(1,0x40,0);
      func_0x0001000d224c(alStack_40);
      if (alStack_40[0] != 0) {
        FUN_1036c2a80(lVar2);
        func_0x000107c615e8(alStack_40[0]);
      }
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 1036cf838; end: 1036cf887; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl selectImagineLens:] */

/* WARNING: Possible PIC construction at 0x0001036cf870: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036cf874) */

void FUN_1036cf838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036cf758(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036cf888; end: 1036cfbff;  */

/* WARNING: Possible PIC construction at 0x0001036cf934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036cf98c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036cfb18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036cfbb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036cf990) */
/* WARNING: Removing unreachable block (ram,0x0001036cf9d4) */
/* WARNING: Removing unreachable block (ram,0x0001036cf994) */
/* WARNING: Removing unreachable block (ram,0x0001036cf998) */
/* WARNING: Removing unreachable block (ram,0x0001036cf99c) */
/* WARNING: Removing unreachable block (ram,0x0001036cfa84) */
/* WARNING: Removing unreachable block (ram,0x0001036cf9a0) */
/* WARNING: Removing unreachable block (ram,0x0001036cf9dc) */
/* WARNING: Removing unreachable block (ram,0x0001036cfb20) */
/* WARNING: Removing unreachable block (ram,0x0001036cfa40) */
/* WARNING: Removing unreachable block (ram,0x0001036cfa58) */
/* WARNING: Removing unreachable block (ram,0x0001036cfa70) */
/* WARNING: Removing unreachable block (ram,0x0001036cf9d0) */
/* WARNING: Removing unreachable block (ram,0x0001036cfa94) */
/* WARNING: Removing unreachable block (ram,0x0001036cfbd4) */
/* WARNING: Removing unreachable block (ram,0x0001036cfaa4) */
/* WARNING: Removing unreachable block (ram,0x0001036cfb18) */
/* WARNING: Removing unreachable block (ram,0x0001036cf938) */
/* WARNING: Removing unreachable block (ram,0x0001036cfb1c) */
/* WARNING: Removing unreachable block (ram,0x0001036cfba4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cf888(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x0001036d115c();
  lVar1 = *(long *)(unaff_x20 + _DAT_112f877c8);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar1 = *(long *)(unaff_x20 + _DAT_112f87788);
      if (lVar1 != 0) {
        *(undefined1 *)(unaff_x20 + _DAT_112f87838) = 1;
        lVar2 = *(long *)(unaff_x20 + _DAT_112f87830);
        if (lVar2 == 0) {
          func_0x000107c61174(lVar1);
          func_0x000107c4b1dc(lVar1);
          func_0x000107c61180();
          func_0x000107c5faec();
        }
        else {
          func_0x000107c61174(lVar1);
          func_0x000107c4b1dc(lVar2);
          func_0x000107c61180();
          func_0x000107c5faec();
          lVar1 = lVar2;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar1);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
      return;
    }
  }
  return;
}



/* Entry: 1036cfc00; end: 1036cfcb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cfc00(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [24];
  
  puVar1 = auStack_48;
  func_0x000107c61428(param_1 + 0x10,puVar1,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (*(char *)(param_1 + _DAT_112f877d8) == '\x01') {
      func_0x000107c4b1dc();
      func_0x000107c61180();
      if (param_3 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar1);
      }
      func_0x000107c51c34(param_2);
      func_0x000107c61170(param_1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1036cfcb8; end: 1036cfe23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036cfcb8(ulong param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uStack_58;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112f87788);
  uVar6 = 0;
  if (uVar2 != 0) {
    lVar5 = param_2;
    func_0x000107c61174();
    uVar3 = uVar2;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    if (uVar4 == param_1 && lVar5 == param_2) {
      func_0x000107c6142c(lVar5);
    }
    else {
      func_0x000107c605b8(uVar4,lVar5,param_1,param_2,0);
      func_0x000107c6142c(lVar5);
      if ((uVar4 & 1) == 0) {
        func_0x000107c61170(uVar2);
        return 0;
      }
    }
    uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f87808) + _DAT_113036458);
    func_0x000107c6157c(uVar6);
    func_0x0001000d224c(&uStack_58);
    func_0x000107c61574(uVar6);
    uVar1 = uStack_58;
    uVar6 = uStack_58;
    func_0x000107c49f90();
    if ((int)uVar6 == 0) {
      func_0x0001000d224c(&uStack_58);
      uVar6 = uStack_58;
      func_0x000107c45190(uStack_58);
      func_0x000107c615e8(uStack_58);
      func_0x000107c615e8(uVar1);
      func_0x000107c61170(uVar2);
    }
    else {
      func_0x000107c61170(uVar2);
      func_0x000107c615e8(uVar1);
      uVar6 = 1;
    }
  }
  return uVar6;
}


