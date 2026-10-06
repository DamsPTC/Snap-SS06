/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036deec8; end: 1036deed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036deec8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar9 = &lStack_60;
  func_0x000107c3fa08();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar6 = 0;
    func_0x000100773f98();
    lVar7 = lVar6;
    func_0x000107c610f8();
    *(undefined8 *)(lVar7 + _DAT_112f87be8) = 0;
    *(long *)(lVar7 + _DAT_112f87bc0) = lVar5;
    *(undefined8 *)(lVar7 + _DAT_112f87bc8) = uVar8;
    func_0x000107c61174(lVar5);
    func_0x000107c615f0();
    func_0x000107c400d4();
    func_0x000107c61180();
    *(undefined8 *)(lVar7 + _DAT_112f87bd0) = uVar8;
    *(undefined8 *)(lVar7 + _DAT_112f87bd8) = uVar1;
    *(undefined8 *)(lVar7 + _DAT_112f87be0) = uVar2;
    puVar3 = PTR_s_init_1125d9248;
    lStack_60 = lVar7;
    lStack_58 = lVar6;
    func_0x000107c615f0(uVar1);
    func_0x000107c61174(uVar2);
    func_0x000107c61154(&lStack_60,puVar3);
    func_0x000107c61170(lVar5);
    *param_1 = plVar9;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1036deec8);
  (*pcVar4)();
}



/* Entry: 1036deed4; end: 1036def67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036deed4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  func_0x000107c5c360();
  func_0x000107c61180();
  lVar2 = 0;
  FUN_1036ded18();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f88020) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f88028) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1036def68; end: 1036def6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036def68(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  func_0x000107c5c360();
  func_0x000107c61180();
  lVar4 = 0;
  FUN_1036ded18();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112f88020) = uVar3;
  *(undefined8 *)(lVar5 + _DAT_112f88028) = uVar1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(uVar1);
  func_0x000107c61154(&lStack_40,puVar2);
  *param_1 = plVar6;
  return;
}



/* Entry: 1036def70; end: 1036defab;  */

/* WARNING: Possible PIC construction at 0x0001036def7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036def8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036def9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036def90) */
/* WARNING: Removing unreachable block (ram,0x0001036def80) */
/* WARNING: Removing unreachable block (ram,0x0001036defa0) */

void FUN_1036def70(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1036defac; end: 1036df07b;  */

void FUN_1036defac(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036df07c; end: 1036df16b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1036df07c(void)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  lVar1 = _DAT_112f88180;
  uVar3 = (uint)*(byte *)(unaff_x20 + _DAT_112f88180);
  if (*(byte *)(unaff_x20 + _DAT_112f88180) == 2) {
    func_0x0001000d224c(&uStack_38);
    uVar2 = uStack_38;
    func_0x000107c4f160();
    uVar3 = (uint)uVar2;
    func_0x000107c615e8(uStack_38);
    *(char *)(unaff_x20 + lVar1) = (char)uVar2;
  }
  return uVar3 & 1;
}



/* Entry: 1036df16c; end: 1036df28f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036df16c(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puStack_48;
  
  func_0x0001000d224c(&puStack_48);
  puVar3 = puStack_48;
  puVar2 = puStack_48;
  func_0x000107c49f98();
  func_0x000107c615e8(puVar3);
  if ((int)puVar2 == 0) {
LAB_1036df264:
    uVar5 = 0;
  }
  else {
    if (param_3 != 0) {
      func_0x0001000d224c(&puStack_48);
      puVar3 = puStack_48;
      func_0x000107c43ea4();
      func_0x000107c61180();
      func_0x000107c615e8(puStack_48);
      if (puVar3 != (ulong *)0x0) {
        uVar4 = *(ulong *)((long)puVar3 + _DAT_113036370);
        uVar1 = ((ulong *)((long)puVar3 + _DAT_113036370))[1];
        if ((uVar4 == param_2 && param_3 == uVar1) ||
           (func_0x000107c605b8(uVar4,uVar1,param_2,param_3,0), (uVar4 & 1) != 0)) {
          (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar3) + 0x70))();
          func_0x000107c61170(puVar3);
          if ((uVar4 & 1) != 0) goto LAB_1036df264;
        }
        else {
          func_0x000107c61170(puVar3);
        }
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}



/* Entry: 1036df290; end: 1036df30f; -[_TtC32SCLensPlusServicesImplementation23LensPlusTierServiceImpl isLensLockedWithIsSnapchatExclusiveLens:lensId:] */

uint FUN_1036df290(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_1);
  FUN_1036df16c(param_3,param_4,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 1036df310; end: 1036df47f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1036df310(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uStack_48;
  
  lVar2 = param_1;
  func_0x000107c4fe18();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c4fe2c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1036df480);
      (*pcVar1)();
    }
    lVar2 = lVar3;
    func_0x000107c5fe10(lVar3,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c61170(lVar3);
    if (lRam0000000112f881c0 != -1) {
      func_0x000107c61568(0x112f881c0,FUN_1036df4dc);
    }
    uVar4 = uRam0000000112f881c8;
    param_2 = uRam0000000112f881d0;
    func_0x0001000f66f0(uRam0000000112f881c8,uRam0000000112f881d0,lVar2);
    func_0x000107c6142c(lVar2);
    if ((uVar4 & 1) != 0) {
      func_0x0001000d224c(&uStack_48);
      uVar4 = uStack_48;
      func_0x000107c4b324();
      func_0x000107c615e8(uStack_48);
      if ((uVar4 & 1) != 0) {
        uVar5 = 0;
        goto LAB_1036df448;
      }
    }
  }
  lVar2 = param_1;
  func_0x000107c4a4c0(param_1);
  func_0x000107c4b1dc(param_1);
  func_0x000107c61180();
  lVar3 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  FUN_1036df16c(lVar2,lVar3,param_2);
  uVar5 = (uint)lVar2;
  func_0x000107c6142c(param_2);
LAB_1036df448:
  return uVar5 & 1;
}



/* Entry: 1036df480; end: 1036df4db; -[_TtC32SCLensPlusServicesImplementation23LensPlusTierServiceImpl isLensLocked:] */

uint FUN_1036df480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1036df310(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1036df4dc; end: 1036df4ff;  */

void FUN_1036df4dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 9;
  func_0x0001044e388c();
  uRam0000000112f881c8 = uVar1;
  uRam0000000112f881d0 = param_2;
  return;
}



/* Entry: 1036df500; end: 1036df603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036df500(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_38;
  
  func_0x000107c4fe18();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c4fe2c();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1036df604);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c5fe10(lVar2,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c61170(lVar2);
    if (lRam0000000112f881c0 != -1) {
      func_0x000107c61568(0x112f881c0,FUN_1036df4dc);
    }
    uVar4 = uRam0000000112f881c8;
    func_0x0001000f66f0(uRam0000000112f881c8,uRam0000000112f881d0,lVar3);
    func_0x000107c6142c(lVar3);
    if ((uVar4 & 1) != 0) {
      func_0x0001000d224c(&uStack_38);
      func_0x000107c4b324(uStack_38);
      func_0x000107c615e8(uStack_38);
    }
  }
  return;
}



/* Entry: 1036df604; end: 1036df65f; -[_TtC32SCLensPlusServicesImplementation23LensPlusTierServiceImpl drivesItsOwnUpsell:] */

uint FUN_1036df604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1036df500(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1036df660; end: 1036df82b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036df660(ulong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uStack_48;
  
  uVar3 = param_1;
  func_0x000107c4fe18();
  func_0x000107c61180();
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c4fe2c();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036df82c);
      (*pcVar2)();
    }
    uVar3 = uVar4;
    func_0x000107c5fe10(uVar4,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c61170(uVar4);
    if (lRam0000000112f881c0 != -1) {
      func_0x000107c61568(0x112f881c0,FUN_1036df4dc);
    }
    uVar4 = uRam0000000112f881c8;
    uVar7 = uRam0000000112f881d0;
    func_0x0001000f66f0(uRam0000000112f881c8,uRam0000000112f881d0,uVar3);
    func_0x000107c6142c(uVar3);
    if ((uVar4 & 1) != 0) {
      func_0x0001000d224c(&uStack_48);
      uVar1 = uStack_48;
      uVar5 = uStack_48;
      func_0x000107c4b324();
      func_0x000107c615e8(uVar1);
      if ((int)uVar5 != 0) {
        uVar3 = param_1;
        func_0x000107c4a4c0();
        uVar4 = param_1;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar6 = uVar4;
        func_0x000107c5faec();
        func_0x000107c61170(uVar4);
        FUN_1036df16c(uVar3,uVar6,uVar7);
        func_0x000107c6142c(uVar7);
        if ((uVar3 & 1) != 0) {
          func_0x000107c4a4c0(param_1);
          func_0x0001000d224c(&uStack_48);
          uVar7 = uStack_48;
          func_0x000107c49f98();
          func_0x000107c615e8(uStack_48);
          if ((int)uVar7 != 0) {
            func_0x0001036dfd00(param_1);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1036df82c; end: 1036df8ff; -[_TtC32SCLensPlusServicesImplementation23LensPlusTierServiceImpl handlesCaptureUpsellFor:] */

uint FUN_1036df82c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1036df660(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1036df900; end: 1036df963; -[_TtC32SCLensPlusServicesImplementation23LensPlusTierServiceImpl isLensLocked:stage:] */

uint FUN_1036df900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001036df888(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1036df964; end: 1036dfa83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1036df964(ulong param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  uVar3 = uStack_48;
  uVar2 = uStack_48;
  func_0x000107c49e5c();
  func_0x000107c615e8(uVar3);
  if ((uVar2 & 1) == 0) {
    if (param_2 == 0) {
      FUN_1036df310();
      if ((param_1 & 1) != 0) {
        func_0x0001000d224c(&uStack_48);
        uVar3 = uStack_48;
        func_0x000107c44098();
        func_0x000107c61180();
        func_0x000107c615e8(uStack_48);
        lVar4 = *(long *)(uVar3 + _DAT_113036378 + 8);
        func_0x000107c61434(lVar4);
        func_0x000107c61170(uVar3);
        uVar1 = (uint)(lVar4 == 0);
        if (lVar4 != 0) {
          func_0x000107c6142c(lVar4);
          uVar1 = (uint)(lVar4 == 0);
        }
        goto LAB_1036dfa68;
      }
    }
    else if (param_2 == 1) {
      FUN_1036df310(param_1);
      uVar1 = (uint)param_1;
      goto LAB_1036dfa68;
    }
  }
  uVar1 = 0;
LAB_1036dfa68:
  return uVar1 & 1;
}



/* Entry: 1036dfa84; end: 1036dfae7; -[_TtC32SCLensPlusServicesImplementation23LensPlusTierServiceImpl isLockedAtPreview:appliedAt:] */

uint FUN_1036dfa84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1036df964(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1036dfae8; end: 1036dfbaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1036dfae8(long param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uStack_48;
  
  uVar2 = (uint)param_2;
  func_0x000107c4a4c0();
  func_0x0001000d224c(&uStack_48);
  uVar1 = uStack_48;
  func_0x000107c49f98();
  func_0x000107c615e8(uStack_48);
  if ((int)uVar1 != 0) {
    if (param_2 == 1) {
      func_0x0001036dfd00(param_1);
      return (uVar2 & 0xff) != 1;
    }
    if (param_2 == 0) {
      func_0x0001036dfd00(param_1);
      if ((uVar2 & 0xff) == 1) {
        return false;
      }
      return param_1 == 0;
    }
  }
  return false;
}



/* Entry: 1036dfbb0; end: 1036dfc8f; -[_TtC32SCLensPlusServicesImplementation23LensPlusTierServiceImpl isLensLockedBySubscriptionTierOnly:stage:] */

uint FUN_1036dfbb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1036dfae8(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1036dfc90; end: 1036dfe0b; -[_TtC32SCLensPlusServicesImplementation23LensPlusTierServiceImpl isLensLocked:stage:snapFromMemories:] */

uint FUN_1036dfc90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001036dfc14(param_3,param_4,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1036dfe0c; end: 1036dfe7b; -[_TtC32SCLensPlusServicesImplementation23LensPlusTierServiceImpl isLensLockedBySubscriptionTierOnly:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036dfe0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c49f98(uStack_38,param_2,param_3);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1036dfe7c; end: 1036e00ab;  */

undefined1  [16] FUN_1036dfe7c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_58 [8];
  
  uVar2 = param_1;
  uVar5 = param_2;
  func_0x000107c4a4c0();
  FUN_1036e12f4(param_2);
  func_0x000107c4b1dc(param_1);
  func_0x000107c61180();
  uVar3 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  func_0x000107c61614(auStack_58);
  func_0x0001036e0600(uVar2,(uint)param_2 & 1,param_3);
  uVar1 = (uint)uVar2 & 0xff;
  if (uVar1 < 4) {
    if (1 < uVar1 - 1) {
      if ((uVar2 & 0xff) == 0) {
        func_0x000107c6142c(uVar5);
        uVar5 = 0x800000010f15a2b0;
        uVar6 = 0xd000000000000010;
        goto LAB_1036e001c;
      }
LAB_1036e0004:
      func_0x000107c6142c(uVar5);
      uVar5 = 0xe500000000000000;
      uVar6 = 0x2b736e654c;
      goto LAB_1036e001c;
    }
LAB_1036dff94:
    puVar4 = auStack_58;
    func_0x0001036e0504(puVar4,uVar3,uVar5);
    if (((ulong)puVar4 & 1) == 0) {
      if (uVar1 < 4) {
        if (uVar1 == 1) {
          func_0x000107c6142c(uVar5);
          uVar5 = 0xee00737265626972;
          uVar6 = 0x63736275536e6f4e;
          goto LAB_1036e001c;
        }
        if (uVar1 == 2) {
          func_0x000107c6142c(uVar5);
          uVar5 = 0xe90000000000002b;
          uVar6 = 0x7461686370616e53;
          goto LAB_1036e001c;
        }
        goto LAB_1036e0004;
      }
      if (uVar1 == 4) goto LAB_1036dff4c;
      if (uVar1 != 5) {
        func_0x000107c6142c(uVar5);
        uVar5 = 0xec00000064657369;
        uVar6 = 0x726f687475616e55;
        goto LAB_1036e001c;
      }
    }
  }
  else {
    if (5 < uVar1) {
      if (uVar1 == 7) {
        func_0x000107c6142c(uVar5);
        uVar5 = 0xe700000000000000;
        uVar6 = 0x7972656c6c6147;
        goto LAB_1036e001c;
      }
      goto LAB_1036dff94;
    }
    if (uVar1 == 4) {
LAB_1036dff4c:
      func_0x000107c6142c(uVar5);
      uVar5 = 0xe800000000000000;
      uVar6 = 0x6d756e6974616c50;
      goto LAB_1036e001c;
    }
  }
  func_0x000107c6142c(uVar5);
  uVar5 = 0xe800000000000000;
  uVar6 = 0x6d75696d65657246;
LAB_1036e001c:
  func_0x000107c61610(auStack_58);
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = uVar6;
  return auVar7;
}



/* Entry: 1036e00ac; end: 1036e0147; -[_TtC32SCLensPlusServicesImplementation23LensPlusTierServiceImpl lensLockReason:eventClass:snapFromMemories:] */

void FUN_1036e00ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c614ec(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1036dfe7c(param_3,param_4,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(uVar1,param_4);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036e0148; end: 1036e01f7; -[_TtC32SCLensPlusServicesImplementation23LensPlusTierServiceImpl lensLockReasonWithIsSnapchatExclusiveLens:eventClass:lensId:] */

void FUN_1036e0148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  
  func_0x000107c614ec(param_4);
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_1);
  FUN_1036e12f4(param_4);
  uVar1 = (ulong)((uint)param_4 & 1);
  FUN_1036e01f8(param_3,uVar1,param_5,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c5fadc(param_3,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1036e01f8; end: 1036e0467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1036e01f8(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  ulong *puStack_60;
  undefined1 auStack_58 [8];
  
  uVar6 = 0x6d75696d65657246;
  func_0x000107c61614(auStack_58);
  func_0x0001036e0600(param_1,param_2,0);
  uVar1 = (uint)param_1 & 0xff;
  if (uVar1 < 4) {
    if (uVar1 - 1 < 2) {
LAB_1036e02bc:
      puVar3 = auStack_58;
      func_0x000107c61618();
      if (puVar3 != (undefined1 *)0x0) {
        func_0x0001000d224c(&puStack_60);
        puVar4 = puStack_60;
        func_0x000107c43ea4();
        func_0x000107c61180();
        func_0x000107c615e8(puStack_60);
        if (puVar4 != (ulong *)0x0) {
          uVar5 = *(ulong *)((long)puVar4 + _DAT_113036370);
          uVar2 = ((ulong *)((long)puVar4 + _DAT_113036370))[1];
          if ((uVar5 == param_3 && uVar2 == param_4) ||
             (func_0x000107c605b8(uVar5,uVar2,param_3,param_4,0), (uVar5 & 1) != 0)) {
            (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar4) + 0x70))();
            func_0x000107c61170(puVar3);
            func_0x000107c61170(puVar4);
            if ((uVar5 & 1) != 0) goto LAB_1036e036c;
            goto LAB_1036e0384;
          }
          func_0x000107c61170(puVar4);
        }
        func_0x000107c61170(puVar3);
      }
LAB_1036e0384:
      if (3 < uVar1) {
        if (uVar1 != 4) {
          if (uVar1 != 5) {
            uVar6 = 0x726f687475616e55;
          }
          uVar7 = 0xe800000000000000;
          if (uVar1 != 5) {
            uVar7 = 0xec00000064657369;
          }
          goto LAB_1036e043c;
        }
        goto LAB_1036e0404;
      }
      if (uVar1 == 1) {
        uVar6 = 0x63736275536e6f4e;
        uVar7 = 0xee00737265626972;
        goto LAB_1036e043c;
      }
      if (uVar1 == 2) {
        uVar6 = 0x7461686370616e53;
        uVar7 = 0xe90000000000002b;
        goto LAB_1036e043c;
      }
    }
    else if ((param_1 & 0xff) == 0) {
      uVar6 = 0xd000000000000010;
      uVar7 = 0x800000010f15a2b0;
      goto LAB_1036e043c;
    }
    uVar6 = 0x2b736e654c;
    uVar7 = 0xe500000000000000;
  }
  else {
    if (5 < uVar1) {
      if (uVar1 == 7) {
        uVar6 = 0x7972656c6c6147;
        uVar7 = 0xe700000000000000;
        goto LAB_1036e043c;
      }
      goto LAB_1036e02bc;
    }
    if (uVar1 != 4) {
LAB_1036e036c:
      uVar7 = 0xe800000000000000;
      goto LAB_1036e043c;
    }
LAB_1036e0404:
    uVar6 = 0x6d756e6974616c50;
    uVar7 = 0xe800000000000000;
  }
LAB_1036e043c:
  func_0x000107c61610(auStack_58);
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



/* Entry: 1036e0468; end: 1036e0753; -[_TtC32SCLensPlusServicesImplementation23LensPlusTierServiceImpl lensLockReasonWithIsSnapchatExclusiveLens:isLensUsed:lensId:] */

void FUN_1036e0468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_1);
  FUN_1036e01f8(param_3,param_4,param_5,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1036e0754; end: 1036e07c7; -[_TtC32SCLensPlusServicesImplementation23LensPlusTierServiceImpl isFreemiumLensLockReason:] */

uint FUN_1036e0754(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  
  func_0x000107c5faec();
  if ((param_3 == 0x6d75696d65657246) && (param_2 == -0x1800000000000000)) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)param_3;
  }
  func_0x000107c6142c(param_2);
  return uVar1 & 1;
}



/* Entry: 1036e07c8; end: 1036e0a33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1036e07c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8();
  uVar2 = 0x73756c50736e654c;
  func_0x000107c5fadc(0x73756c50736e654c,0xef65636976726553);
  func_0x000107c466bc();
  func_0x000107c61170(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f88168);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c41574();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      puVar8 = PTR_PTR_1126ae560;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c5fadc(param_1,param_2);
      lVar4 = lVar5;
      func_0x000107c4b288(lVar5);
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      puVar7 = &UNK_1106829f8;
      func_0x000107c613fc(&UNK_1106829f8,0x20,7);
      *(undefined **)(puVar7 + 0x10) = puVar8;
      *(undefined **)(puVar7 + 0x18) = puVar1;
      uStack_60 = 0x1036e1268;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1016c1d3c;
      puStack_68 = &UNK_110682a10;
      puStack_58 = puVar7;
      func_0x000107c60bc4(&puStack_80);
      puVar7 = puStack_58;
      func_0x000107c61174(puVar8);
      func_0x000107c61174(puVar1);
      func_0x000107c61574(puVar7);
      func_0x000107c5dc64(lVar4);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(lVar4);
      puVar7 = puVar8;
      func_0x000107c43bf4(puVar8);
      func_0x000107c61180();
      func_0x000107c61170(puVar1);
      func_0x000107c615e8(lVar3);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(puVar8);
      return puVar7;
    }
    func_0x000107c615e8(lVar3);
  }
  puVar7 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  func_0x000107c61174(puVar1);
  puVar8 = puVar1;
  func_0x000107c5ed2c();
  func_0x000107c61170(puVar1);
  func_0x000107c451ac(puVar7);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar8);
  return puVar7;
}



/* Entry: 1036e0a34; end: 1036e0c23;  */

/* WARNING: Possible PIC construction at 0x0001036e0bc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036e0bc4) */

void FUN_1036e0a34(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar6 = &puStack_90;
  if (param_1 == 0) {
    param_1 = param_4;
    if (param_2 != 0) {
      param_1 = param_2;
    }
    func_0x000107c5ed2c(param_1);
    func_0x000107c3fef8(param_3);
  }
  else {
    puVar2 = &UNK_110682a48;
    func_0x000107c613fc(&UNK_110682a48,0x18,7);
    *(undefined8 *)(puVar2 + 0x10) = param_3;
    puVar3 = &UNK_110682a70;
    func_0x000107c613fc(&UNK_110682a70,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x1036e1270;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_1036e127c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100fe2610;
    puStack_78 = &UNK_110682a88;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_110682ac0;
    func_0x000107c613fc(&UNK_110682ac0,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = param_3;
    puVar5 = &UNK_110682ae8;
    func_0x000107c613fc(&UNK_110682ae8,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = 0x1036e129c;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    pcStack_70 = (code *)0x1036e12d4;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100fe2654;
    puStack_78 = &UNK_110682b00;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    puVar5 = puStack_68;
    func_0x000107c61174(param_3);
    func_0x000107c61574(puVar5);
    func_0x000107c4c744(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036e0c24; end: 1036e0c8f; -[_TtC32SCLensPlusServicesImplementation23LensPlusTierServiceImpl lensMetadataWithLensId:featureAttribution:] */

void FUN_1036e0c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1036e07c8(param_3,param_2,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1036e0c90; end: 1036e0cff; -[_TtC32SCLensPlusServicesImplementation23LensPlusTierServiceImpl getActiveLensFreemiumState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e0c90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c43ea4(uStack_38);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036e0d00; end: 1036e0d33; -[_TtC32SCLensPlusServicesImplementation23LensPlusTierServiceImpl tierChangeObservable] */

void FUN_1036e0d00(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1036e0d34();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036e0d34; end: 1036e0e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1036e0d34(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  lVar1 = _DAT_112f88190;
  ppuVar4 = &puStack_70;
  lVar6 = *(long *)(unaff_x20 + _DAT_112f88190);
  lVar2 = lVar6;
  if (lVar6 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f88158);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5d6fc();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 != 0) {
        pcStack_50 = FUN_1036e0e68;
        uStack_48 = 0;
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0x42000000;
        puStack_60 = &UNK_1012ec594;
        puStack_58 = &UNK_1106829c0;
        func_0x000107c60bc4(&puStack_70);
        lVar5 = lVar3;
        func_0x000107c4c280(lVar3,param_2,ppuVar4);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar4);
        lVar2 = lVar5;
        func_0x000107c421ac();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar3);
        uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
        *(long *)(unaff_x20 + lVar1) = lVar2;
        func_0x000107c61174(lVar2);
        func_0x000107c61170(uVar7);
        goto LAB_1036e0e44;
      }
    }
    lVar2 = 0;
  }
LAB_1036e0e44:
  func_0x000107c61174(lVar6);
  return lVar2;
}



/* Entry: 1036e0e68; end: 1036e0f87;  */

void FUN_1036e0e68(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5c370();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d4();
  uVar2 = 0;
  FUN_1036e13d8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  param_1[3] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 1036e0f88; end: 1036e0fbb; -[_TtC32SCLensPlusServicesImplementation23LensPlusTierServiceImpl shouldShowExclusiveCaptureStyleForAllLenses] */

uint FUN_1036e0f88(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001036e0ecc();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1036e0fbc; end: 1036e10fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1036e0fbc(ulong param_1)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uStack_38;
  
  uVar3 = param_1;
  func_0x000107c4fe18();
  func_0x000107c61180();
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c4fe2c();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1036e10fc);
      (*pcVar1)();
    }
    uVar3 = uVar4;
    func_0x000107c5fe10(uVar4,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c61170(uVar4);
    if (lRam0000000112f881c0 != -1) {
      func_0x000107c61568(0x112f881c0,FUN_1036df4dc);
    }
    uVar4 = uRam0000000112f881c8;
    func_0x0001000f66f0(uRam0000000112f881c8,uRam0000000112f881d0,uVar3);
    func_0x000107c6142c();
    if ((uVar4 & 1) != 0) {
      func_0x0001000d224c(&uStack_38);
      uVar4 = uStack_38;
      func_0x000107c4b324();
      func_0x000107c615e8();
      uVar3 = uStack_38;
      if ((uVar4 & 1) != 0) {
        uVar2 = 0;
        goto LAB_1036e10c8;
      }
    }
  }
  FUN_1036df07c();
  if (((uVar3 & 1) == 0) || (func_0x0001036df0f4(), (uVar3 & 1) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  FUN_1036dfae8(param_1,uVar5);
  uVar2 = (uint)param_1;
LAB_1036e10c8:
  return uVar2 & 1;
}



/* Entry: 1036e10fc; end: 1036e1157; -[_TtC32SCLensPlusServicesImplementation23LensPlusTierServiceImpl shouldShowCameraCTA:] */

uint FUN_1036e10fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1036e0fbc(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1036e1158; end: 1036e11b3; -[_TtC32SCLensPlusServicesImplementation23LensPlusTierServiceImpl init] */

void FUN_1036e1158(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPlusServicesImplementation.LensPlusTierServiceImpl",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036e1184);
  (*pcVar1)();
}



/* Entry: 1036e11b4; end: 1036e122b; -[_TtC32SCLensPlusServicesImplementation23LensPlusTierServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036e11d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e11f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036e11d4) */
/* WARNING: Removing unreachable block (ram,0x0001036e11f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e11b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f88158));
  return;
}



/* Entry: 1036e122c; end: 1036e124b;  */

void FUN_1036e122c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e2f38);
  return;
}



/* Entry: 1036e124c; end: 1036e127b;  */

void FUN_1036e124c(long param_1,long param_2)

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



/* Entry: 1036e127c; end: 1036e12f3;  */

void FUN_1036e127c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1036e12f4; end: 1036e13d7;  */

uint FUN_1036e12f4(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  
  lVar1 = 0x112d7e128;
  func_0x0001000285a8(0x112d7e128,&UNK_10d93c3b0);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  uVar2 = 0;
  FUN_1036e13d8(0,0x112f881d8,&PTR_PTR_1126c8c30);
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uVar3 = 0;
  FUN_1036e13d8(0,0x112f881e0,&PTR_PTR_1126a7968);
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
  func_0x000107c614e8();
  func_0x000107c614e8(uVar2);
  uVar4 = param_1;
  func_0x000107c4a560();
  if ((uVar4 & 1) == 0) {
    func_0x000107c614e8(*(undefined8 *)(lVar1 + 0x28));
    func_0x000107c4a560(param_1);
    uVar5 = (uint)param_1 ^ 1;
  }
  else {
    uVar5 = 0;
  }
  func_0x000107c61574(lVar1);
  return uVar5;
}



/* Entry: 1036e13d8; end: 1036e1417;  */

void FUN_1036e13d8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1036e1418; end: 1036e142f;  */

void FUN_1036e1418(long param_1,long param_2)

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



/* Entry: 1036e1430; end: 1036e14db;  */

/* WARNING: Possible PIC construction at 0x0001036e149c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036e14a0) */
/* WARNING: Removing unreachable block (ram,0x0001036e14b4) */
/* WARNING: Removing unreachable block (ram,0x0001036e14c8) */

void FUN_1036e1430(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c54bc0(param_1,param_2,0);
  puVar1 = PTR_PTR_1126afde0;
  func_0x000107c61168(PTR_PTR_1126afde0);
  uVar2 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f15a310);
  func_0x000107c40930(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1036e14dc; end: 1036e187b;  */

void FUN_1036e14dc(undefined *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined8 unaff_x22;
  undefined *puVar6;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  ulong unaff_x27;
  undefined **unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined ***)((long)register0x00000008 + -0x60) = unaff_x28;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    puVar2 = param_1;
    func_0x000107c43944(param_1,param_2,(undefined1 *)((long)register0x00000008 + -0x78));
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x19 = param_2;
    if (puVar2 == (undefined *)0x0) {
      uVar5 = uVar3;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(uVar5);
      func_0x000107c61654();
      *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0xe000000000000000;
      func_0x000107c602fc(0x29);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      *(undefined8 *)((long)register0x00000008 + -0x70) =
           *(undefined8 *)((long)register0x00000008 + -0x70);
      func_0x000107c5fb78(0xd000000000000027,0x800000010f15a340);
      *(undefined8 *)((long)register0x00000008 + -0x88) = uVar3;
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c603d0((undefined1 *)((long)register0x00000008 + -0x88),
                          (undefined1 *)((long)register0x00000008 + -0x78),uVar5,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      unaff_x24 = *(undefined **)((long)register0x00000008 + -0x78);
      unaff_x20 = *(undefined **)((long)register0x00000008 + -0x70);
      unaff_x23 = PTR_PTR_1126afde0;
      func_0x000107c61168();
      func_0x000107c5fadc(unaff_x24,unaff_x20);
      puVar2 = unaff_x23;
      func_0x000107c409d8();
      func_0x000107c61180();
      func_0x000107c61170(unaff_x24);
      func_0x000107c5c734();
      func_0x000107c61180();
      unaff_x22 = uVar3;
      if (unaff_x19 == 0) {
        func_0x000107c6142c(unaff_x20);
        func_0x000107c614ac(uVar3);
        unaff_x19 = param_2;
        unaff_x21 = puVar2;
      }
      else {
        func_0x000107c61174();
        func_0x000107c5c2e0(unaff_x19);
        func_0x000107c6142c(unaff_x20);
        func_0x000107c614ac(uVar3);
        func_0x000107c615e8(unaff_x19);
        func_0x000107c61170(puVar2);
        unaff_x21 = puVar2;
      }
    }
    else {
      func_0x000107c61174();
      puVar6 = puVar2;
      func_0x000107c40850();
      func_0x000107c61180();
      unaff_x20 = puVar2;
      unaff_x21 = param_1;
      if (puVar6 != (undefined *)0x0) {
        *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
        uVar3 = 0;
        FUN_1036e1894(0);
        func_0x000107c5fc50(puVar6,(undefined1 *)((long)register0x00000008 + -0x78),uVar3);
        func_0x000107c61170(puVar6);
        puVar6 = *(undefined **)((long)register0x00000008 + -0x78);
        unaff_x22 = 0;
        if (puVar6 != (undefined *)0x0) {
          if ((ulong)puVar6 >> 0x3e == 0) {
            unaff_x23 = *(undefined **)((undefined *)((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
          }
          else {
            unaff_x23 = puVar6;
            if (-1 < (long)puVar6) {
              unaff_x23 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
            }
            func_0x000107c60480();
          }
          if (unaff_x23 != (undefined *)0x0) {
            if ((long)unaff_x23 < 1) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1036e1878);
              (*pcVar1)();
            }
            unaff_x24 = (undefined *)0x0;
            unaff_x27 = (ulong)puVar6 & 0xc000000000000001;
            unaff_x28 = &PTR_PTR_1126b0000;
            do {
              if (unaff_x27 == 0) {
                unaff_x25 = *(undefined **)(puVar6 + (long)unaff_x24 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                unaff_x25 = unaff_x24;
                func_0x0001036c8b9c(unaff_x24,puVar6);
              }
              puVar4 = unaff_x25;
              func_0x000107c4084c();
              if (0 < (int)puVar4) {
                unaff_x26 = PTR_PTR_1126b0458;
                func_0x000107c610f8();
                func_0x000107c48cfc(0x3ff0000000000000);
                func_0x000107c55aa8(unaff_x25);
                func_0x000107c61170(unaff_x26);
              }
              unaff_x24 = unaff_x24 + 1;
              func_0x000107c61170(unaff_x25);
            } while (unaff_x23 != unaff_x24);
          }
          func_0x000107c6142c(puVar6);
          func_0x000107c54bc0(param_1);
          unaff_x21 = PTR_PTR_1126afde0;
          func_0x000107c61168();
          unaff_x22 = 0xd00000000000003e;
          func_0x000107c5fadc(0xd00000000000003e,0x800000010f15a370);
          func_0x000107c40930();
          func_0x000107c61180();
          func_0x000107c61170(unaff_x22);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (param_2 != 0) {
            func_0x000107c61174();
            func_0x000107c5c2e0(param_2);
            func_0x000107c615e8(param_2);
            func_0x000107c61170(unaff_x21);
            unaff_x19 = param_2;
          }
          func_0x000107c61170(unaff_x21);
        }
      }
    }
    func_0x000107c61170(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68))
    break;
    unaff_x30 = FUN_1036e187c;
    func_0x000107c60e78();
    param_1 = *(undefined **)(unaff_x20 + 0x10);
    param_2 = *(long *)(unaff_x20 + 0x18);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  }
  return;
}



/* Entry: 1036e187c; end: 1036e1893;  */

void FUN_1036e187c(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x19;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *puVar9;
  undefined8 unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  ulong unaff_x27;
  undefined **unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar7 = *(undefined **)(unaff_x20 + 0x10);
    lVar8 = *(long *)(unaff_x20 + 0x18);
    *(undefined ***)((long)register0x00000008 + -0x60) = unaff_x28;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    puVar2 = puVar7;
    func_0x000107c43944(puVar7,lVar8,(undefined1 *)((long)register0x00000008 + -0x78));
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)register0x00000008 + -0x78);
    if (puVar2 == (undefined *)0x0) {
      uVar5 = uVar3;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(uVar5);
      func_0x000107c61654();
      *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0xe000000000000000;
      func_0x000107c602fc(0x29);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      *(undefined8 *)((long)register0x00000008 + -0x70) =
           *(undefined8 *)((long)register0x00000008 + -0x70);
      func_0x000107c5fb78(0xd000000000000027,0x800000010f15a340);
      *(undefined8 *)((long)register0x00000008 + -0x88) = uVar3;
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c603d0((undefined1 *)((long)register0x00000008 + -0x88),
                          (undefined1 *)((long)register0x00000008 + -0x78),uVar5,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      unaff_x24 = *(undefined **)((long)register0x00000008 + -0x78);
      unaff_x20 = *(undefined **)((long)register0x00000008 + -0x70);
      unaff_x23 = PTR_PTR_1126afde0;
      func_0x000107c61168();
      func_0x000107c5fadc(unaff_x24,unaff_x20);
      puVar2 = unaff_x23;
      func_0x000107c409d8();
      func_0x000107c61180();
      func_0x000107c61170(unaff_x24);
      lVar6 = lVar8;
      func_0x000107c5c734();
      func_0x000107c61180();
      unaff_x22 = uVar3;
      if (lVar6 == 0) {
        func_0x000107c6142c(unaff_x20);
        func_0x000107c614ac(uVar3);
        puVar7 = puVar2;
      }
      else {
        func_0x000107c61174();
        func_0x000107c5c2e0(lVar6);
        func_0x000107c6142c(unaff_x20);
        func_0x000107c614ac(uVar3);
        func_0x000107c615e8(lVar6);
        func_0x000107c61170(puVar2);
        lVar8 = lVar6;
        puVar7 = puVar2;
      }
    }
    else {
      func_0x000107c61174();
      puVar9 = puVar2;
      func_0x000107c40850();
      func_0x000107c61180();
      unaff_x20 = puVar2;
      if (puVar9 != (undefined *)0x0) {
        *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
        uVar3 = 0;
        FUN_1036e1894(0);
        func_0x000107c5fc50(puVar9,(undefined1 *)((long)register0x00000008 + -0x78),uVar3);
        func_0x000107c61170(puVar9);
        puVar9 = *(undefined **)((long)register0x00000008 + -0x78);
        unaff_x22 = 0;
        if (puVar9 != (undefined *)0x0) {
          if ((ulong)puVar9 >> 0x3e == 0) {
            unaff_x23 = *(undefined **)((undefined *)((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
          }
          else {
            unaff_x23 = puVar9;
            if (-1 < (long)puVar9) {
              unaff_x23 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
            }
            func_0x000107c60480();
          }
          if (unaff_x23 != (undefined *)0x0) {
            if ((long)unaff_x23 < 1) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1036e1878);
              (*pcVar1)();
            }
            unaff_x24 = (undefined *)0x0;
            unaff_x27 = (ulong)puVar9 & 0xc000000000000001;
            unaff_x28 = &PTR_PTR_1126b0000;
            do {
              if (unaff_x27 == 0) {
                unaff_x25 = *(undefined **)(puVar9 + (long)unaff_x24 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                unaff_x25 = unaff_x24;
                func_0x0001036c8b9c(unaff_x24,puVar9);
              }
              puVar4 = unaff_x25;
              func_0x000107c4084c();
              if (0 < (int)puVar4) {
                unaff_x26 = PTR_PTR_1126b0458;
                func_0x000107c610f8();
                func_0x000107c48cfc(0x3ff0000000000000);
                func_0x000107c55aa8(unaff_x25);
                func_0x000107c61170(unaff_x26);
              }
              unaff_x24 = unaff_x24 + 1;
              func_0x000107c61170(unaff_x25);
            } while (unaff_x23 != unaff_x24);
          }
          func_0x000107c6142c(puVar9);
          func_0x000107c54bc0(puVar7);
          puVar7 = PTR_PTR_1126afde0;
          func_0x000107c61168();
          unaff_x22 = 0xd00000000000003e;
          func_0x000107c5fadc(0xd00000000000003e,0x800000010f15a370);
          func_0x000107c40930();
          func_0x000107c61180();
          func_0x000107c61170(unaff_x22);
          lVar6 = lVar8;
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar6 != 0) {
            func_0x000107c61174();
            func_0x000107c5c2e0(lVar6);
            func_0x000107c615e8(lVar6);
            func_0x000107c61170(puVar7);
            lVar8 = lVar6;
          }
          func_0x000107c61170(puVar7);
        }
      }
    }
    func_0x000107c61170(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68))
    break;
    unaff_x30 = FUN_1036e187c;
    func_0x000107c60e78();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
    unaff_x19 = lVar8;
    unaff_x21 = puVar7;
  }
  return;
}



/* Entry: 1036e1894; end: 1036e18d7;  */

void FUN_1036e1894(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f874a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ad478;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f874a8 = puVar1;
  return;
}



/* Entry: 1036e18d8; end: 1036e18db;  */

void FUN_1036e18d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1036e18dc; end: 1036e1abf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1036e18dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  uVar1 = *(undefined8 *)(param_3 + _DAT_113070fc8);
  func_0x000107c61174();
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return unaff_x20;
}



/* Entry: 1036e1ac0; end: 1036e1d4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e1ac0(long *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c5c360();
  func_0x000107c61180();
  lVar3 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar3 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = lVar3;
    func_0x000107c5d6fc();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
  }
  uVar11 = *(undefined8 *)(param_3 + _DAT_113036488);
  uVar12 = *(undefined8 *)(param_4 + _DAT_113070f60);
  uVar13 = *(undefined8 *)(param_3 + _DAT_113036458);
  lVar4 = 0;
  FUN_1036de174();
  lVar3 = lVar4;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112f87e40);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  *(undefined8 *)(lVar3 + _DAT_112f87e48) = uVar13;
  *(long *)(lVar3 + _DAT_112f87e50) = lVar9;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar4;
  func_0x000107c61580(uVar11,2);
  func_0x000107c61580(uVar12,2);
  lVar4 = lVar9;
  func_0x000107c61174(lVar9);
  func_0x000107c6157c(uVar13);
  plVar5 = &lStack_70;
  func_0x000107c61154(plVar5,puVar2);
  func_0x000107c3fb74(param_5);
  func_0x000107c61180();
  lVar6 = 0;
  FUN_1036c2878();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar3 = _DAT_112f871e8;
  func_0x000107c61614(lVar7 + _DAT_112f871e8,0);
  func_0x000107c61604(lVar7 + lVar3,param_5);
  *(undefined8 *)(lVar7 + _DAT_112f871f0) = uVar13;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112f871f8);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  *(long *)(lVar7 + _DAT_112f87200) = lVar9;
  puVar2 = PTR_s_init_1125d9248;
  lStack_80 = lVar7;
  lStack_78 = lVar6;
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar12);
  func_0x000107c61174(lVar4);
  func_0x000107c6157c(uVar13);
  plVar8 = &lStack_80;
  func_0x000107c61154(plVar8,puVar2);
  func_0x000107c61170(param_5);
  lVar9 = 0;
  FUN_1036bf854();
  lVar3 = lVar9;
  func_0x000107c610f8();
  *(long **)(lVar3 + _DAT_112f870b8) = plVar5;
  *(long **)(lVar3 + _DAT_112f870c0) = plVar8;
  puVar2 = PTR_s_init_1125d9248;
  lStack_90 = lVar3;
  lStack_88 = lVar9;
  func_0x000107c61174(plVar5);
  func_0x000107c61174(plVar8);
  plVar10 = &lStack_90;
  func_0x000107c61154(plVar10,puVar2);
  func_0x000107c61170(plVar8);
  func_0x000107c61170(plVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar11);
  *param_1 = (long)plVar10;
  return;
}



/* Entry: 1036e1d50; end: 1036e1d5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e1d50(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar13 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c5c360();
  func_0x000107c61180();
  lVar3 = lVar13;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar13);
  if (lVar3 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = lVar3;
    func_0x000107c5d6fc();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
  }
  uVar11 = *(undefined8 *)(lVar4 + _DAT_113036488);
  uVar12 = *(undefined8 *)(lVar9 + _DAT_113070f60);
  uVar14 = *(undefined8 *)(lVar4 + _DAT_113036458);
  lVar4 = 0;
  FUN_1036de174();
  lVar9 = lVar4;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar9 + _DAT_112f87e40);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  *(undefined8 *)(lVar9 + _DAT_112f87e48) = uVar14;
  *(long *)(lVar9 + _DAT_112f87e50) = lVar13;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar9;
  lStack_68 = lVar4;
  func_0x000107c61580(uVar11,2);
  func_0x000107c61580(uVar12,2);
  lVar4 = lVar13;
  func_0x000107c61174(lVar13);
  func_0x000107c6157c(uVar14);
  plVar5 = &lStack_70;
  func_0x000107c61154(plVar5,puVar2);
  func_0x000107c3fb74(uVar6);
  func_0x000107c61180();
  lVar7 = 0;
  FUN_1036c2878();
  lVar3 = lVar7;
  func_0x000107c610f8();
  lVar9 = _DAT_112f871e8;
  func_0x000107c61614(lVar3 + _DAT_112f871e8,0);
  func_0x000107c61604(lVar3 + lVar9,uVar6);
  *(undefined8 *)(lVar3 + _DAT_112f871f0) = uVar14;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112f871f8);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  *(long *)(lVar3 + _DAT_112f87200) = lVar13;
  puVar2 = PTR_s_init_1125d9248;
  lStack_80 = lVar3;
  lStack_78 = lVar7;
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar12);
  func_0x000107c61174(lVar4);
  func_0x000107c6157c(uVar14);
  plVar8 = &lStack_80;
  func_0x000107c61154(plVar8,puVar2);
  func_0x000107c61170(uVar6);
  lVar9 = 0;
  FUN_1036bf854();
  lVar13 = lVar9;
  func_0x000107c610f8();
  *(long **)(lVar13 + _DAT_112f870b8) = plVar5;
  *(long **)(lVar13 + _DAT_112f870c0) = plVar8;
  puVar2 = PTR_s_init_1125d9248;
  lStack_90 = lVar13;
  lStack_88 = lVar9;
  func_0x000107c61174(plVar5);
  func_0x000107c61174(plVar8);
  plVar10 = &lStack_90;
  func_0x000107c61154(plVar10,puVar2);
  func_0x000107c61170(plVar8);
  func_0x000107c61170(plVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar11);
  *param_1 = (long)plVar10;
  return;
}



/* Entry: 1036e1d5c; end: 1036e1d87;  */

/* WARNING: Possible PIC construction at 0x0001036e1d68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e1d78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036e1d6c) */
/* WARNING: Removing unreachable block (ram,0x0001036e1d7c) */

void FUN_1036e1d5c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1036e1d88; end: 1036e1de3;  */

void FUN_1036e1d88(void)

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



/* Entry: 1036e1de4; end: 1036e1e63;  */

void FUN_1036e1de4(undefined8 param_1)

{
  if (lRam0000000112f88258 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e775024);
  return;
}



/* Entry: 1036e1e64; end: 1036e1e87;  */

void FUN_1036e1e64(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001036e19c8();
  *param_1 = param_2;
  return;
}



/* Entry: 1036e1e88; end: 1036e206b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1036e1e88(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  uVar1 = *(undefined8 *)(param_3 + _DAT_113070ff8);
  func_0x000107c61174();
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return unaff_x20;
}



/* Entry: 1036e206c; end: 1036e22fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e206c(long *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c5c360();
  func_0x000107c61180();
  lVar3 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar3 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = lVar3;
    func_0x000107c5d6fc();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
  }
  uVar11 = *(undefined8 *)(param_3 + _DAT_113036488);
  uVar12 = *(undefined8 *)(param_4 + _DAT_113070f60);
  uVar13 = *(undefined8 *)(param_3 + _DAT_113036458);
  lVar4 = 0;
  FUN_1036de174();
  lVar3 = lVar4;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112f87e40);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  *(undefined8 *)(lVar3 + _DAT_112f87e48) = uVar13;
  *(long *)(lVar3 + _DAT_112f87e50) = lVar9;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar4;
  func_0x000107c61580(uVar11,2);
  func_0x000107c61580(uVar12,2);
  lVar4 = lVar9;
  func_0x000107c61174(lVar9);
  func_0x000107c6157c(uVar13);
  plVar5 = &lStack_70;
  func_0x000107c61154(plVar5,puVar2);
  func_0x000107c3fb74(param_5);
  func_0x000107c61180();
  lVar6 = 0;
  FUN_1036c2878();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar3 = _DAT_112f871e8;
  func_0x000107c61614(lVar7 + _DAT_112f871e8,0);
  func_0x000107c61604(lVar7 + lVar3,param_5);
  *(undefined8 *)(lVar7 + _DAT_112f871f0) = uVar13;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112f871f8);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  *(long *)(lVar7 + _DAT_112f87200) = lVar9;
  puVar2 = PTR_s_init_1125d9248;
  lStack_80 = lVar7;
  lStack_78 = lVar6;
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar12);
  func_0x000107c61174(lVar4);
  func_0x000107c6157c(uVar13);
  plVar8 = &lStack_80;
  func_0x000107c61154(plVar8,puVar2);
  func_0x000107c61170(param_5);
  lVar9 = 0;
  FUN_1036bf854();
  lVar3 = lVar9;
  func_0x000107c610f8();
  *(long **)(lVar3 + _DAT_112f870b8) = plVar5;
  *(long **)(lVar3 + _DAT_112f870c0) = plVar8;
  puVar2 = PTR_s_init_1125d9248;
  lStack_90 = lVar3;
  lStack_88 = lVar9;
  func_0x000107c61174(plVar5);
  func_0x000107c61174(plVar8);
  plVar10 = &lStack_90;
  func_0x000107c61154(plVar10,puVar2);
  func_0x000107c61170(plVar8);
  func_0x000107c61170(plVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar11);
  *param_1 = (long)plVar10;
  return;
}



/* Entry: 1036e22fc; end: 1036e2307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e22fc(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar13 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c5c360();
  func_0x000107c61180();
  lVar3 = lVar13;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar13);
  if (lVar3 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = lVar3;
    func_0x000107c5d6fc();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
  }
  uVar11 = *(undefined8 *)(lVar4 + _DAT_113036488);
  uVar12 = *(undefined8 *)(lVar9 + _DAT_113070f60);
  uVar14 = *(undefined8 *)(lVar4 + _DAT_113036458);
  lVar4 = 0;
  FUN_1036de174();
  lVar9 = lVar4;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar9 + _DAT_112f87e40);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  *(undefined8 *)(lVar9 + _DAT_112f87e48) = uVar14;
  *(long *)(lVar9 + _DAT_112f87e50) = lVar13;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar9;
  lStack_68 = lVar4;
  func_0x000107c61580(uVar11,2);
  func_0x000107c61580(uVar12,2);
  lVar4 = lVar13;
  func_0x000107c61174(lVar13);
  func_0x000107c6157c(uVar14);
  plVar5 = &lStack_70;
  func_0x000107c61154(plVar5,puVar2);
  func_0x000107c3fb74(uVar6);
  func_0x000107c61180();
  lVar7 = 0;
  FUN_1036c2878();
  lVar3 = lVar7;
  func_0x000107c610f8();
  lVar9 = _DAT_112f871e8;
  func_0x000107c61614(lVar3 + _DAT_112f871e8,0);
  func_0x000107c61604(lVar3 + lVar9,uVar6);
  *(undefined8 *)(lVar3 + _DAT_112f871f0) = uVar14;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112f871f8);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  *(long *)(lVar3 + _DAT_112f87200) = lVar13;
  puVar2 = PTR_s_init_1125d9248;
  lStack_80 = lVar3;
  lStack_78 = lVar7;
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar12);
  func_0x000107c61174(lVar4);
  func_0x000107c6157c(uVar14);
  plVar8 = &lStack_80;
  func_0x000107c61154(plVar8,puVar2);
  func_0x000107c61170(uVar6);
  lVar9 = 0;
  FUN_1036bf854();
  lVar13 = lVar9;
  func_0x000107c610f8();
  *(long **)(lVar13 + _DAT_112f870b8) = plVar5;
  *(long **)(lVar13 + _DAT_112f870c0) = plVar8;
  puVar2 = PTR_s_init_1125d9248;
  lStack_90 = lVar13;
  lStack_88 = lVar9;
  func_0x000107c61174(plVar5);
  func_0x000107c61174(plVar8);
  plVar10 = &lStack_90;
  func_0x000107c61154(plVar10,puVar2);
  func_0x000107c61170(plVar8);
  func_0x000107c61170(plVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar11);
  *param_1 = (long)plVar10;
  return;
}



/* Entry: 1036e2308; end: 1036e2333;  */

/* WARNING: Possible PIC construction at 0x0001036e2314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e2324: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036e2318) */
/* WARNING: Removing unreachable block (ram,0x0001036e2328) */

void FUN_1036e2308(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1036e2334; end: 1036e238f;  */

void FUN_1036e2334(void)

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



/* Entry: 1036e2390; end: 1036e240f;  */

void FUN_1036e2390(undefined8 param_1)

{
  if (lRam0000000112f88340 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e775088);
  return;
}



/* Entry: 1036e2410; end: 1036e2433;  */

void FUN_1036e2410(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001036e1f74();
  *param_1 = param_2;
  return;
}



/* Entry: 1036e2434; end: 1036e284b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1036e2434(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f88408) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f88410) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f88400);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar4 = PTR_s_initWithFrame__1125e2948;
  func_0x000107c6157c(param_3);
  puVar3 = &stack0xffffffffffffffa0;
  func_0x000107c61154(0,0,0,0,puVar3,puVar4);
  func_0x0001036e25d8();
  if (param_1 == 0) {
    func_0x000107c61574(param_3);
  }
  else {
    puVar4 = &UNK_110682c58;
    func_0x000107c613fc(&UNK_110682c58,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,puVar3);
    puVar5 = &UNK_110682c80;
    func_0x000107c613fc(&UNK_110682c80,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(long *)(puVar5 + 0x18) = lVar2;
    pcStack_70 = FUN_1036e2b9c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100c81aa4;
    puStack_78 = &UNK_110682c98;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    puVar4 = puStack_68;
    func_0x000107c61174();
    func_0x000107c61574(puVar4);
    lVar2 = param_1;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61574(param_3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(param_1);
    param_1 = lVar2;
  }
  uVar7 = *(undefined8 *)(puVar3 + _DAT_112f88408);
  *(long *)(puVar3 + _DAT_112f88408) = param_1;
  func_0x000107c61170(uVar7);
  return puVar3;
}



/* Entry: 1036e284c; end: 1036e291f;  */

void FUN_1036e284c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = 0;
  func_0x000107c60714(param_3,0);
  uStack_50 = 0x1036e2bc0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110682cc0;
  uStack_48 = param_2;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar1);
  func_0x000107c5fb28(param_3,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000100162d98(param_3 + 0x20,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(param_3);
  return;
}



/* Entry: 1036e2920; end: 1036e2973;  */

void FUN_1036e2920(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x0001036e25d8();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1036e2974; end: 1036e29e3; -[_TtC32SCLensPlusServicesImplementation28SubscriptionAwareLensCTAView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e2974(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112f88408) = 0;
  *(undefined8 *)(param_1 + _DAT_112f88410) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCLensPlusServicesImplementation/SubscriptionAwareLensCTAView.swift",0x43,2,
                      0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036e29e4);
  (*pcVar1)();
}



/* Entry: 1036e29e4; end: 1036e2a37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e29e4(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  if (*(long *)(unaff_x20 + _DAT_112f88408) != 0) {
    func_0x000107c4218c();
  }
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036e2a38; end: 1036e2aab; -[_TtC32SCLensPlusServicesImplementation28SubscriptionAwareLensCTAView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e2a38(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = *(long *)(param_1 + _DAT_112f88408);
  if (lVar2 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c4218c(lVar2);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036e2aac; end: 1036e2af7; -[_TtC32SCLensPlusServicesImplementation28SubscriptionAwareLensCTAView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036e2adc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036e2ae0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e2aac(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f88400 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f88408));
  return;
}



/* Entry: 1036e2af8; end: 1036e2b4f; -[_TtC32SCLensPlusServicesImplementation28SubscriptionAwareLensCTAView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1036e2af8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  long lStack_30;
  long lStack_28;
  
  if (*(long *)(param_3 + _DAT_112f88410) != 0) {
    lVar1 = param_3;
    func_0x000107c614f0();
    lStack_30 = param_3;
    lStack_28 = lVar1;
    func_0x000107c61154(&lStack_30,PTR_s_intrinsicContentSize_1125f8080);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = param_1;
    return auVar2;
  }
  return ZEXT816(0);
}



/* Entry: 1036e2b50; end: 1036e2b9b; -[_TtC32SCLensPlusServicesImplementation28SubscriptionAwareLensCTAView initWithFrame:] */

void FUN_1036e2b50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPlusServicesImplementation.SubscriptionAwareLensCTAView",0x3d,
                      "init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036e2b7c);
  (*pcVar1)();
}



/* Entry: 1036e2b9c; end: 1036e2bcf;  */

void FUN_1036e2b9c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_70;
  uVar5 = 0;
  func_0x000107c60714(lVar3,0);
  uStack_50 = 0x1036e2bc0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110682cc0;
  uStack_48 = uVar1;
  func_0x000107c60bc4(&puStack_70);
  uVar2 = uStack_48;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c5fb28(lVar3,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000100162d98(lVar3 + 0x20,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(lVar3);
  return;
}



/* Entry: 1036e2bd0; end: 1036e3093;  */

undefined1  [16] FUN_1036e2bd0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x5f726f665f797274;
  func_0x000107c5fadc(0x5f726f665f797274,0xec00000065657266);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f15a4f0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036e2c9c);
  (*pcVar1)();
}



/* Entry: 1036e3094; end: 1036e30a3;  */

undefined1  [16] FUN_1036e3094(void)

{
  return ZEXT816(0x110682cf8);
}



/* Entry: 1036e30a4; end: 1036e324b;  */

undefined1  [16] FUN_1036e30a4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  lVar5 = -0x2fffffffffffffea;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f15a5d0);
  uVar10 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f15a5b0);
  uVar6 = 0;
  func_0x000107c5fe40(0);
  lVar7 = lVar5;
  uVar9 = uVar10;
  func_0x0001000f6108(lVar5,uVar10,uVar6);
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  if (lVar7 == 0) {
    uVar10 = 0xe000000000000000;
  }
  else {
    lVar5 = lVar7;
    func_0x000107c5faec();
    func_0x000107c61170(lVar7);
    lVar7 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    puVar1 = PTR___sSiN_11034deb0;
    *(undefined8 *)(lVar7 + 0x18) = 2;
    *(undefined8 *)(lVar7 + 0x10) = 1;
    puVar2 = PTR___sSis7CVarArgsWP_11034df08;
    *(undefined **)(lVar7 + 0x38) = puVar1;
    *(undefined **)(lVar7 + 0x40) = puVar2;
    *(undefined8 *)(lVar7 + 0x20) = param_1;
    uVar6 = uVar9;
    func_0x000107c5fae0(lVar5,uVar9,lVar7);
    func_0x000107c6142c(uVar9);
    func_0x000107c61574();
    iVar4 = (int)lVar7;
    func_0x000107c31300();
    uVar10 = uVar6;
    lVar7 = lVar5;
    if (iVar4 != 0) {
      func_0x000107c5fadc(lVar5,uVar6);
      lVar8 = lVar5;
      func_0x000107c312fc();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1036e324c);
        (*pcVar3)();
      }
      lVar7 = lVar8;
      func_0x000107c5faec(lVar8);
      func_0x000107c6142c(uVar6);
      func_0x000107c61170(lVar8);
    }
  }
  auVar11._8_8_ = uVar10;
  auVar11._0_8_ = lVar7;
  return auVar11;
}



/* Entry: 1036e324c; end: 1036e326b;  */

undefined1  [16] FUN_1036e324c(void)

{
  return ZEXT816(0x110682d18);
}



/* Entry: 1036e326c; end: 1036e328b;  */

void FUN_1036e326c(void)

{
  func_0x000107c61168(&PTR_PTR_112f88480);
  return;
}



/* Entry: 1036e328c; end: 1036e3373;  */

void FUN_1036e328c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  FUN_1036e326c();
  func_0x000107c614e8();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c3ee00();
  func_0x000107c61180();
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f15a5f0);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450d0();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c61168(PTR__OBJC_CLASS___CIImage_1126b3128);
    func_0x000107c4253c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c45b00();
    func_0x000107c61170(puVar1);
  }
  puRam000000011380bab8 = puVar3;
  return;
}



/* Entry: 1036e3374; end: 1036e33bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e3374(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f884e0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036e33c0; end: 1036e341f; -[_TtC20GenAICreditsServices20GenAICreditsServices init] */

void FUN_1036e33c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GenAICreditsServices.GenAICreditsServices",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036e33ec);
  (*pcVar1)();
}



/* Entry: 1036e3420; end: 1036e342f; -[_TtC20GenAICreditsServices20GenAICreditsServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e3420(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f884e0));
  return;
}



/* Entry: 1036e3430; end: 1036e34db;  */

void FUN_1036e3430(void)

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



/* Entry: 1036e34dc; end: 1036e34ef;  */

bool FUN_1036e34dc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1036e34f0; end: 1036e3527;  */

void FUN_1036e34f0(undefined8 param_1)

{
  if (lRam0000000112f88570 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e775218);
  return;
}



/* Entry: 1036e3528; end: 1036e36a3;  */

uint FUN_1036e3528(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar5;
  uint uVar6;
  char *unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  code *pcVar9;
  long lVar10;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar7 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar7 - extraout_x12;
  func_0x000107c5eea0(lVar5);
  if (*unaff_x20 == '\0') {
    lVar2 = 0;
    FUN_1036e34f0();
    func_0x0001009f0578(unaff_x20 + *(int *)(lVar2 + 0x18),puVar8);
    puVar3 = puVar8;
    (**(code **)(lVar10 + 0x30))(puVar8,1,lVar1);
    if ((int)puVar3 == 1) {
      uVar6 = 0;
      pcVar9 = *(code **)(lVar10 + 8);
    }
    else {
      (**(code **)(lVar10 + 0x20))(lVar7,puVar8,lVar1);
      uVar4 = 0x112d58e60;
      func_0x0001036e4108(0x112d58e60,PTR___s10Foundation4DateVSLAAMc_110350bd8);
      lVar2 = lVar5;
      func_0x000107c5fa8c(lVar5,lVar7,lVar1,uVar4);
      uVar6 = (uint)lVar2;
      pcVar9 = *(code **)(lVar10 + 8);
      (*pcVar9)(lVar7,lVar1);
    }
  }
  else {
    pcVar9 = *(code **)(lVar10 + 8);
    uVar6 = 1;
  }
  (*pcVar9)(lVar5,lVar1);
  return uVar6 & 1;
}



/* Entry: 1036e36a4; end: 1036e36ab;  */

bool FUN_1036e36a4(char *param_1,char *param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar9 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar10 = (long)puVar9 - extraout_x8_00;
  lVar11 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = uVar10 - extraout_x8_01;
  if ((*param_1 == *param_2) && (*(long *)(param_1 + 8) == *(long *)(param_2 + 8))) {
    lVar4 = 0;
    FUN_1036e34f0();
    iVar1 = *(int *)(lVar4 + 0x18);
    lVar11 = (long)*(int *)(lVar11 + 0x30);
    func_0x0001009f0578(param_1 + iVar1,lVar8);
    func_0x0001009f0578(param_2 + iVar1,lVar8 + lVar11);
    pcVar13 = *(code **)(lVar12 + 0x30);
    lVar5 = lVar8;
    (*pcVar13)(lVar8,1,lVar3);
    if ((int)lVar5 == 1) {
      lVar11 = lVar8 + lVar11;
      (*pcVar13)(lVar11,1,lVar3);
      if ((int)lVar11 != 1) {
LAB_1036e3854:
        FUN_1036e40c8(lVar8,0x112d373d0,&UNK_10d90f8f0);
        goto LAB_1036e386c;
      }
      FUN_1036e40c8(lVar8,0x112d373d8,&UNK_10d9014c0);
    }
    else {
      func_0x0001009f0578(lVar8,uVar10);
      lVar5 = lVar8 + lVar11;
      (*pcVar13)(lVar5,1,lVar3);
      if ((int)lVar5 == 1) {
        (**(code **)(lVar12 + 8))(uVar10,lVar3);
        goto LAB_1036e3854;
      }
      (**(code **)(lVar12 + 0x20))(puVar9,lVar8 + lVar11,lVar3);
      uVar6 = 0x112d373e0;
      func_0x0001036e4108(0x112d373e0,PTR___s10Foundation4DateVSQAAMc_110350be0);
      uVar7 = uVar10;
      func_0x000107c5fab8(uVar10,puVar9,lVar3,uVar6);
      pcVar13 = *(code **)(lVar12 + 8);
      (*pcVar13)(puVar9,lVar3);
      (*pcVar13)(uVar10,lVar3);
      FUN_1036e40c8(lVar8,0x112d373d8,&UNK_10d9014c0);
      if ((uVar7 & 1) == 0) goto LAB_1036e386c;
    }
    bVar2 = *(long *)(param_1 + *(int *)(lVar4 + 0x1c)) ==
            *(long *)(param_2 + *(int *)(lVar4 + 0x1c));
  }
  else {
LAB_1036e386c:
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 1036e36ac; end: 1036e391f;  */

bool FUN_1036e36ac(char *param_1,char *param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar9 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar10 = (long)puVar9 - extraout_x8_00;
  lVar11 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = uVar10 - extraout_x8_01;
  if ((*param_1 == *param_2) && (*(long *)(param_1 + 8) == *(long *)(param_2 + 8))) {
    lVar4 = 0;
    FUN_1036e34f0();
    iVar1 = *(int *)(lVar4 + 0x18);
    lVar11 = (long)*(int *)(lVar11 + 0x30);
    func_0x0001009f0578(param_1 + iVar1,lVar8);
    func_0x0001009f0578(param_2 + iVar1,lVar8 + lVar11);
    pcVar13 = *(code **)(lVar12 + 0x30);
    lVar5 = lVar8;
    (*pcVar13)(lVar8,1,lVar3);
    if ((int)lVar5 == 1) {
      lVar11 = lVar8 + lVar11;
      (*pcVar13)(lVar11,1,lVar3);
      if ((int)lVar11 != 1) {
LAB_1036e3854:
        FUN_1036e40c8(lVar8,0x112d373d0,&UNK_10d90f8f0);
        goto LAB_1036e386c;
      }
      FUN_1036e40c8(lVar8,0x112d373d8,&UNK_10d9014c0);
    }
    else {
      func_0x0001009f0578(lVar8,uVar10);
      lVar5 = lVar8 + lVar11;
      (*pcVar13)(lVar5,1,lVar3);
      if ((int)lVar5 == 1) {
        (**(code **)(lVar12 + 8))(uVar10,lVar3);
        goto LAB_1036e3854;
      }
      (**(code **)(lVar12 + 0x20))(puVar9,lVar8 + lVar11,lVar3);
      uVar6 = 0x112d373e0;
      func_0x0001036e4108(0x112d373e0,PTR___s10Foundation4DateVSQAAMc_110350be0);
      uVar7 = uVar10;
      func_0x000107c5fab8(uVar10,puVar9,lVar3,uVar6);
      pcVar13 = *(code **)(lVar12 + 8);
      (*pcVar13)(puVar9,lVar3);
      (*pcVar13)(uVar10,lVar3);
      FUN_1036e40c8(lVar8,0x112d373d8,&UNK_10d9014c0);
      if ((uVar7 & 1) == 0) goto LAB_1036e386c;
    }
    bVar2 = *(long *)(param_1 + *(int *)(lVar4 + 0x1c)) ==
            *(long *)(param_2 + *(int *)(lVar4 + 0x1c));
  }
  else {
LAB_1036e386c:
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 1036e3920; end: 1036e3923;  */

void FUN_1036e3920(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f88510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbfc098;
  func_0x000107c61520(&UNK_10dbfc098,&UNK_110682de0);
  puRam0000000112f88510 = puVar1;
  return;
}



/* Entry: 1036e3924; end: 1036e3963;  */

void FUN_1036e3924(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f88510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbfc098;
  func_0x000107c61520(&UNK_10dbfc098,&UNK_110682de0);
  puRam0000000112f88510 = puVar1;
  return;
}



/* Entry: 1036e3964; end: 1036e3a67;  */

long * FUN_1036e3964(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    *(char *)param_1 = (char)*param_2;
    param_1[1] = param_2[1];
    lVar5 = (long)*(int *)(param_3 + 0x18);
    lVar2 = 0;
    func_0x000107c5eea4();
    lVar6 = *(long *)(lVar2 + -8);
    puVar3 = (undefined1 *)((long)param_2 + lVar5);
    (**(code **)(lVar6 + 0x30))(puVar3,1,lVar2);
    if ((int)puVar3 == 0) {
      (**(code **)(lVar6 + 0x10))
                ((undefined1 *)((long)param_1 + lVar5),(undefined1 *)((long)param_2 + lVar5),lVar2);
      (**(code **)(lVar6 + 0x38))((undefined1 *)((long)param_1 + lVar5),0,1,lVar2);
    }
    else {
      lVar2 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      func_0x000107c610b4((undefined1 *)((long)param_1 + lVar5),
                          (undefined1 *)((long)param_2 + lVar5),
                          *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  }
  else {
    lVar2 = *param_2;
    *param_1 = lVar2;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar2 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1036e3a68; end: 1036e3ad3;  */

void FUN_1036e3a68(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001036e3ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 1036e3ad4; end: 1036e3bab;  */

undefined1 * FUN_1036e3ad4(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  iVar1 = *(int *)(param_3 + 0x18);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar2 + -8);
  puVar3 = param_2 + iVar1;
  (**(code **)(lVar4 + 0x30))(puVar3,1,lVar2);
  if ((int)puVar3 == 0) {
    (**(code **)(lVar4 + 0x10))(param_1 + iVar1,param_2 + iVar1,lVar2);
    (**(code **)(lVar4 + 0x38))(param_1 + iVar1,0,1,lVar2);
  }
  else {
    lVar2 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4(param_1 + iVar1,param_2 + iVar1,
                        *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  return param_1;
}



/* Entry: 1036e3bac; end: 1036e3ccf;  */

undefined1 * FUN_1036e3bac(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  code *pcVar6;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  iVar1 = *(int *)(param_3 + 0x18);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar2 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  puVar3 = param_1 + iVar1;
  (*pcVar6)(puVar3,1,lVar2);
  puVar4 = param_2 + iVar1;
  (*pcVar6)(puVar4,1,lVar2);
  if ((int)puVar3 == 0) {
    if ((int)puVar4 == 0) {
      (**(code **)(lVar5 + 0x18))(param_1 + iVar1,param_2 + iVar1,lVar2);
      goto LAB_1036e3c90;
    }
    (**(code **)(lVar5 + 8))(param_1 + iVar1,lVar2);
  }
  else if ((int)puVar4 == 0) {
    (**(code **)(lVar5 + 0x10))(param_1 + iVar1,param_2 + iVar1,lVar2);
    (**(code **)(lVar5 + 0x38))(param_1 + iVar1,0,1,lVar2);
    goto LAB_1036e3c90;
  }
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  func_0x000107c610b4(param_1 + iVar1,param_2 + iVar1,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40))
  ;
LAB_1036e3c90:
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  return param_1;
}



/* Entry: 1036e3cd0; end: 1036e3da7;  */

undefined1 * FUN_1036e3cd0(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  iVar1 = *(int *)(param_3 + 0x18);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar2 + -8);
  puVar3 = param_2 + iVar1;
  (**(code **)(lVar4 + 0x30))(puVar3,1,lVar2);
  if ((int)puVar3 == 0) {
    (**(code **)(lVar4 + 0x20))(param_1 + iVar1,param_2 + iVar1,lVar2);
    (**(code **)(lVar4 + 0x38))(param_1 + iVar1,0,1,lVar2);
  }
  else {
    lVar2 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4(param_1 + iVar1,param_2 + iVar1,
                        *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  return param_1;
}



/* Entry: 1036e3da8; end: 1036e3ecb;  */

undefined1 * FUN_1036e3da8(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  code *pcVar6;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  iVar1 = *(int *)(param_3 + 0x18);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar2 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  puVar3 = param_1 + iVar1;
  (*pcVar6)(puVar3,1,lVar2);
  puVar4 = param_2 + iVar1;
  (*pcVar6)(puVar4,1,lVar2);
  if ((int)puVar3 == 0) {
    if ((int)puVar4 == 0) {
      (**(code **)(lVar5 + 0x28))(param_1 + iVar1,param_2 + iVar1,lVar2);
      goto LAB_1036e3e8c;
    }
    (**(code **)(lVar5 + 8))(param_1 + iVar1,lVar2);
  }
  else if ((int)puVar4 == 0) {
    (**(code **)(lVar5 + 0x20))(param_1 + iVar1,param_2 + iVar1,lVar2);
    (**(code **)(lVar5 + 0x38))(param_1 + iVar1,0,1,lVar2);
    goto LAB_1036e3e8c;
  }
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  func_0x000107c610b4(param_1 + iVar1,param_2 + iVar1,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40))
  ;
LAB_1036e3e8c:
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  return param_1;
}



/* Entry: 1036e3ecc; end: 1036e3ee3;  */

void FUN_1036e3ecc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1036e3ee4; end: 1036e3f63;  */

void FUN_1036e3ee4(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_40 = &UNK_10dbfc108;
  lVar2 = 0x13f;
  puStack_38 = puVar1;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar2 + -8) + 0x40;
    puStack_28 = puVar1;
    func_0x000107c6153c(param_1,0x100,4,&puStack_40,param_1 + 0x10);
  }
  return;
}


