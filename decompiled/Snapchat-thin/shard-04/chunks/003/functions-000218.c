/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10333f394; end: 10333f55f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10333f394(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  double dVar5;
  double dVar6;
  
  func_0x000107c4b7a0();
  if ((char)((long *)(unaff_x20 + _DAT_112f5ae88))[1] == '\x01') {
    lVar4 = *(long *)(unaff_x20 + _DAT_112f5ae88);
    lVar2 = lVar4;
    func_0x000107c61174();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10333f560);
      (*pcVar1)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(lVar2);
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    if (param_1 <= 0.0) {
      puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c4c194();
      func_0x000107c61180();
      func_0x000107c3ec60();
      func_0x000107c61170(puVar3);
      func_0x000107c609cc(param_1,param_2,param_3,param_4);
    }
    func_0x00010331da00(lVar4,1);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c3ec60();
    func_0x000107c61170(puVar3);
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
  }
  func_0x000107c5de64();
  func_0x000107c61180();
  if (param_5 != 0) {
    dVar6 = *(double *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8);
    func_0x000107c5c614(param_1,dVar6,0x447a0000,0x42480000);
    func_0x000107c61170(param_5);
    dVar5 = dVar6 + 23.0 + 10.0;
    dVar6 = 180.0;
    if (180.0 < dVar5) {
      dVar6 = dVar5;
    }
    return dVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10333f55c);
  (*pcVar1)();
}



/* Entry: 10333f560; end: 10333f6bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10333f560(code *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  undefined1 auStack_68 [24];
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112f5ae68);
  if (lVar6 == 0) {
    if (param_1 != (code *)0x0) {
      (*param_1)();
    }
  }
  else {
    if (param_1 == (code *)0x0) {
      func_0x000107c61174(lVar6);
    }
    else {
      puVar3 = &UNK_110640450;
      func_0x000107c613fc(&UNK_110640450,0x20,7);
      *(code **)(puVar3 + 0x10) = param_1;
      *(undefined8 *)(puVar3 + 0x18) = param_2;
      lVar2 = _DAT_112f5ae70;
      func_0x000107c61428(unaff_x20 + _DAT_112f5ae70,auStack_68,0x21,0);
      uVar7 = *(ulong *)(unaff_x20 + lVar2);
      func_0x000107c61174(lVar6);
      func_0x000100b64c10(param_1,param_2);
      uVar4 = uVar7;
      func_0x000107c61558();
      *(ulong *)(unaff_x20 + lVar2) = uVar7;
      uVar5 = uVar7;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
        func_0x0001016cbf48(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
        *(ulong *)(unaff_x20 + lVar2) = uVar5;
      }
      uVar4 = *(ulong *)(uVar5 + 0x10);
      uVar7 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
        uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        func_0x0001016cbf48(uVar7,uVar4 + 1,1,uVar5);
      }
      *(ulong *)(uVar7 + 0x10) = uVar4 + 1;
      lVar1 = uVar7 + uVar4 * 0x10;
      *(code **)(lVar1 + 0x20) = FUN_10333fbdc;
      *(undefined **)(lVar1 + 0x28) = puVar3;
      *(ulong *)(unaff_x20 + lVar2) = uVar7;
      func_0x000107c614a8(auStack_68);
    }
    func_0x000107c42018(lVar6);
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 10333f6bc; end: 10333f747; -[_TtC26LensInfoCardImplementation22InfoCardTrayController detachUI:] */

void FUN_10333f6bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uVar2 = 0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_110640518;
    func_0x000107c613fc(&UNK_110640518,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    uVar2 = 0x10333fd68;
  }
  func_0x000107c61174(param_1);
  FUN_10333f560(uVar2,puVar1);
  func_0x00010058d43c(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10333f748; end: 10333f777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10333f748(void)

{
  long unaff_x20;
  
  if ((*(long *)(unaff_x20 + _DAT_112f5ae68) != 0) &&
     (*(long *)(unaff_x20 + _DAT_112f5ae78) == 0x10)) {
                    /* WARNING: Could not recover jumptable at 0x00010c1dee90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + _DAT_112f5ae68),PTR_s_setPosition__1126555c8,8);
    return;
  }
  return;
}



/* Entry: 10333f778; end: 10333f7d7; -[_TtC26LensInfoCardImplementation22InfoCardTrayController init] */

void FUN_10333f778(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardImplementation.InfoCardTrayController",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10333f7a4);
  (*pcVar1)();
}



/* Entry: 10333f7d8; end: 10333f847; -[_TtC26LensInfoCardImplementation22InfoCardTrayController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10333f7d8(long param_1)

{
  func_0x00010331da00(*(undefined8 *)(param_1 + _DAT_112f5ae88),
                      *(undefined1 *)((undefined8 *)(param_1 + _DAT_112f5ae88) + 1));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5ae60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f5ae68));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f5ae70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112f5ae80);
  return;
}



/* Entry: 10333f848; end: 10333f877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10333f848(void)

{
  long unaff_x20;
  
  if ((*(long *)(unaff_x20 + _DAT_112f5ae68) != 0) &&
     (*(long *)(unaff_x20 + _DAT_112f5ae78) == 0x10)) {
                    /* WARNING: Could not recover jumptable at 0x00010c1dee90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + _DAT_112f5ae68),PTR_s_setPosition__1126555c8,8);
    return;
  }
  return;
}



/* Entry: 10333f878; end: 10333f953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10333f878(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long unaff_x20;
  ulong uVar2;
  undefined1 uStack_41;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112f5ae68);
  if (uVar2 != 0) {
    func_0x0001011cba3c(0);
    func_0x000107c61174();
    func_0x000107c61174(param_1);
    uVar1 = uVar2;
    func_0x000107c60118(uVar2,param_1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_1);
    if ((uVar1 & 1) != 0) {
      if (1 < param_2 - 1U) {
        *(long *)(unaff_x20 + _DAT_112f5ae78) = param_2;
      }
      uStack_41 = 2;
      if (param_2 != 0x10) {
        uStack_41 = 0;
      }
      if (param_2 == 8) {
        uStack_41 = 1;
      }
      func_0x0001002a64a8(&uStack_41);
    }
  }
  return;
}



/* Entry: 10333f954; end: 10333f9ab; -[_TtC26LensInfoCardImplementation22InfoCardTrayController tray:positionDidChange:] */

/* WARNING: Possible PIC construction at 0x00010333f994: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010333f998) */

void FUN_10333f954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10333f878(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10333f9ac; end: 10333fa3b; -[_TtC26LensInfoCardImplementation22InfoCardTrayController tray:heightForPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10333f9ac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  
  if (((*(byte *)(param_2 + _DAT_112f5ae90) & 1) == 0) && (param_5 == 8)) {
    lVar1 = param_2 + _DAT_112f5ae80;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c61174(param_2);
      FUN_10333f394(lVar1);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(param_2);
      return param_1;
    }
  }
  return 0xbff0000000000000;
}



/* Entry: 10333fa3c; end: 10333fb8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10333fa3c(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 uStack_69;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112f5ae68;
  uVar4 = *(ulong *)(unaff_x20 + _DAT_112f5ae68);
  if (uVar4 != 0) {
    func_0x0001011cba3c(0);
    func_0x000107c61174();
    func_0x000107c61174(param_1);
    uVar6 = uVar4;
    func_0x000107c60118(uVar4,param_1);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(param_1);
    if ((uVar6 & 1) != 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
      *(undefined8 *)(unaff_x20 + lVar1) = 0;
      func_0x000107c61170(uVar3);
      lVar1 = _DAT_112f5ae70;
      func_0x000107c61428(unaff_x20 + _DAT_112f5ae70,auStack_68,1,0);
      lVar5 = *(long *)(unaff_x20 + lVar1);
      uVar4 = *(ulong *)(lVar5 + 0x10);
      func_0x000107c61434(lVar5);
      if (uVar4 != 0) {
        uVar6 = 0;
        puVar7 = (undefined8 *)(lVar5 + 0x28);
        do {
          if (*(ulong *)(lVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10333fb8c);
            (*pcVar2)();
          }
          uVar6 = uVar6 + 1;
          pcVar2 = (code *)puVar7[-1];
          uVar3 = *puVar7;
          func_0x000107c6157c(uVar3);
          (*pcVar2)();
          func_0x000107c61574(uVar3);
          puVar7 = puVar7 + 2;
        } while (uVar4 != uVar6);
      }
      func_0x000107c6142c(lVar5);
      uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
      *(undefined **)(unaff_x20 + lVar1) = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c6142c(uVar3);
      uStack_69 = 4;
      func_0x0001002a64a8(&uStack_69);
    }
  }
  return;
}



/* Entry: 10333fb8c; end: 10333fbdb; -[_TtC26LensInfoCardImplementation22InfoCardTrayController trayDidDismiss:] */

/* WARNING: Possible PIC construction at 0x00010333fbc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010333fbc8) */

void FUN_10333fb8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10333fa3c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10333fbdc; end: 10333fbfb;  */

void FUN_10333fbdc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10333fbfc; end: 10333fc1b;  */

void FUN_10333fbfc(void)

{
  func_0x000107c61168(&PTR_PTR_1128cf3c8);
  return;
}



/* Entry: 10333fc1c; end: 10333fc2b;  */

void FUN_10333fc1c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*param_1);
  return;
}



/* Entry: 10333fc2c; end: 10333fc7b;  */

undefined8 * FUN_10333fc2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_10331d9d8(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x00010331da00(uVar3,uVar2);
  return param_1;
}



/* Entry: 10333fc7c; end: 10333fcb7;  */

undefined8 * FUN_10333fc7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x00010331da00(uVar3,uVar2);
  return param_1;
}



/* Entry: 10333fcb8; end: 10333fd7b;  */

int FUN_10333fcb8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10333fd7c; end: 10333ff03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10333fd7c(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = 0x112f59e40;
  func_0x0001000285a8(0x112f59e40,&UNK_10dbb2500);
  func_0x000103324f28();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0xb;
  *(undefined8 *)(lVar1 + 0x10) = 5;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(unaff_x20 + _DAT_112f5aee0);
  func_0x000107c6157c();
  puVar2 = &DAT_112f5af10;
  FUN_103340028(&DAT_112f5af10,FUN_10333861c,FUN_103337ba4);
  uVar4 = *(undefined8 *)(puVar2 + _DAT_112f5aaf8);
  func_0x000107c6157c(uVar4);
  func_0x000107c61170();
  *(undefined8 *)(lVar1 + 0x28) = uVar4;
  FUN_10333ff04();
  uVar4 = *(undefined8 *)(puVar2 + _DAT_112f5abd8);
  func_0x000107c6157c(uVar4);
  func_0x000107c61170(puVar2);
  *(undefined8 *)(lVar1 + 0x30) = uVar4;
  puVar2 = &DAT_112f5af20;
  FUN_103340028(&DAT_112f5af20,FUN_1033361f0,FUN_103335688);
  uVar4 = *(undefined8 *)(puVar2 + _DAT_112f5aa28);
  func_0x000107c6157c(uVar4);
  func_0x000107c61170(puVar2);
  *(undefined8 *)(lVar1 + 0x38) = uVar4;
  puVar2 = &DAT_112f5af08;
  FUN_103340028(&DAT_112f5af08,FUN_103343e60,FUN_1033437f8);
  uVar4 = *(undefined8 *)(puVar2 + _DAT_112f5af98);
  func_0x000107c6157c(uVar4);
  func_0x000107c61170(puVar2);
  *(undefined8 *)(lVar1 + 0x40) = uVar4;
  lVar3 = lVar1;
  func_0x0001000c19f0(lVar1);
  func_0x000107c61574(lVar1);
  return lVar3;
}



/* Entry: 10333ff04; end: 103340027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10333ff04(void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  
  lVar3 = _DAT_112f5af18;
  ppuVar6 = &puStack_60;
  puVar4 = *(undefined1 **)(unaff_x20 + _DAT_112f5af18);
  puVar5 = puVar4;
  if (puVar4 == (undefined1 *)0x0) {
    uVar1 = *(undefined1 *)(unaff_x20 + _DAT_112f5aed0);
    FUN_10333ac6c();
    puVar5 = puVar4;
    func_0x000107c610f8();
    lVar2 = _DAT_112f5abd8;
    uVar7 = 0x112f59a00;
    func_0x0001000285a8(0x112f59a00,&UNK_10dbb1a70);
    func_0x000107c613fc();
    func_0x0001000c2754();
    *(undefined8 *)(puVar5 + lVar2) = uVar7;
    *(undefined **)(puVar5 + _DAT_112f5abe8) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined8 *)(puVar5 + _DAT_112f5abf0) = 0;
    puVar5[_DAT_112f5abe0] = uVar1;
    puStack_60 = puVar5;
    puStack_58 = puVar4;
    func_0x000107c61154(0,0,0,0,&puStack_60,PTR_s_initWithFrame__1125e2948);
    func_0x000107c61180();
    FUN_10333a6d0();
    FUN_10333a2d0();
    uVar7 = *(undefined8 *)(unaff_x20 + lVar3);
    *(undefined1 ***)(unaff_x20 + lVar3) = ppuVar6;
    func_0x000107c61170(uVar7);
    puVar4 = (undefined1 *)0x0;
    puVar5 = (undefined1 *)ppuVar6;
  }
  func_0x000107c61174(puVar4);
  return puVar5;
}



/* Entry: 103340028; end: 1033400ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_103340028(long *param_1,code *param_2,code *param_3)

{
  ulong uVar1;
  long unaff_x20;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  uVar1 = *(ulong *)(unaff_x20 + lVar4);
  uVar3 = uVar1;
  if (uVar1 == 0) {
    uVar3 = (ulong)*(byte *)(unaff_x20 + _DAT_112f5aed0);
    (*param_2)();
    func_0x000107c610f8();
    (*param_3)(uVar3,uVar1);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar4);
    *(ulong *)(unaff_x20 + lVar4) = uVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar2);
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  return uVar3;
}



/* Entry: 1033400ac; end: 10334021f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1033400ac(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  
  bVar3 = *(byte *)(param_1 + _DAT_112f5aed0);
  uVar7 = (ulong)bVar3;
  FUN_10333d648(0);
  func_0x000107c610f8();
  FUN_10333c7c8();
  if (bVar3 == 0) {
    puVar4 = &UNK_110640590;
    func_0x000107c613fc(&UNK_110640590,0x18,7);
    func_0x000107c61644(puVar4 + 0x10,*(undefined8 *)(param_1 + _DAT_112f5aee0));
    puVar1 = (undefined8 *)(uVar7 + _DAT_112f5ace0);
    uVar5 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = 0x103342c7c;
    puVar1[1] = puVar4;
    func_0x000107c61580(puVar4,2);
    func_0x00010058d43c(uVar5,uVar2);
    FUN_10333d390();
    func_0x000107c550d8();
    func_0x000107c61578(puVar4,2);
    func_0x000107c61170(uVar5);
  }
  puVar4 = &UNK_110640590;
  func_0x000107c613fc(&UNK_110640590,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,*(undefined8 *)(param_1 + _DAT_112f5aee0));
  puVar6 = puVar4;
  func_0x000107c6157c();
  FUN_10333c744();
  puVar1 = (undefined8 *)(puVar6 + _DAT_112f5ac30);
  uVar5 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = 0x103342c60;
  puVar1[1] = puVar4;
  func_0x000107c6157c(puVar4);
  func_0x00010058d43c(uVar5,uVar2);
  func_0x000107c61578(puVar4,2);
  func_0x000107c61170(puVar6);
  return uVar7;
}



/* Entry: 103340220; end: 1033404af;  */

long FUN_103340220(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar2;
}



/* Entry: 1033404b0; end: 103340673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1033404b0(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  lVar1 = _DAT_112f5aee0;
  uVar2 = 0x112f59a00;
  func_0x0001000285a8(0x112f59a00,&UNK_10dbb1a70);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_112f5aee8;
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_112f5aef0) = 0;
  lVar1 = _DAT_112f5aef8;
  func_0x0001000285a8(0x112f5af80,&UNK_10dbb3118);
  func_0x000107c613fc();
  uVar2 = 0;
  func_0x00010095c380();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112f5af00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5af08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5af10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5af18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5af20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5af28) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5af30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5af38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5af40) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5af48) = 0;
  FUN_103343044(param_1,unaff_x20 + _DAT_112f5aec8);
  *(undefined1 *)(unaff_x20 + _DAT_112f5aed0) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112f5aed8) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x0001000834e4(param_1);
  return puVar3;
}



/* Entry: 103340674; end: 10334069b; -[_TtC26LensInfoCardImplementation22InfoCardViewController initWithCoder:] */

void FUN_103340674(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_103342ec8();
  return;
}



/* Entry: 10334069c; end: 103341183;  */

/* WARNING: Possible PIC construction at 0x0001033406e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340780: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033407b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033407fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033408c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033408f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340a04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340a24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340a74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340aec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340b28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340e08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340ea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340f14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340f68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340fbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103341014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103341080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033410a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334111c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340bfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340ce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340d60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340d80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103340d90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103340d84) */
/* WARNING: Removing unreachable block (ram,0x000103340d64) */
/* WARNING: Removing unreachable block (ram,0x000103340d04) */
/* WARNING: Removing unreachable block (ram,0x000103341180) */
/* WARNING: Removing unreachable block (ram,0x000103340d48) */
/* WARNING: Removing unreachable block (ram,0x000103340ce4) */
/* WARNING: Removing unreachable block (ram,0x000103340c94) */
/* WARNING: Removing unreachable block (ram,0x000103341178) */
/* WARNING: Removing unreachable block (ram,0x000103340cc8) */
/* WARNING: Removing unreachable block (ram,0x000103340c74) */
/* WARNING: Removing unreachable block (ram,0x000103340c00) */
/* WARNING: Removing unreachable block (ram,0x000103341170) */
/* WARNING: Removing unreachable block (ram,0x000103340c58) */
/* WARNING: Removing unreachable block (ram,0x000103340be4) */
/* WARNING: Removing unreachable block (ram,0x000103340b7c) */
/* WARNING: Removing unreachable block (ram,0x000103341120) */
/* WARNING: Removing unreachable block (ram,0x0001033410a4) */
/* WARNING: Removing unreachable block (ram,0x000103341084) */
/* WARNING: Removing unreachable block (ram,0x000103341018) */
/* WARNING: Removing unreachable block (ram,0x000103341168) */
/* WARNING: Removing unreachable block (ram,0x000103341050) */
/* WARNING: Removing unreachable block (ram,0x000103340fc0) */
/* WARNING: Removing unreachable block (ram,0x000103340f6c) */
/* WARNING: Removing unreachable block (ram,0x000103340f18) */
/* WARNING: Removing unreachable block (ram,0x000103340ef4) */
/* WARNING: Removing unreachable block (ram,0x000103340ea4) */
/* WARNING: Removing unreachable block (ram,0x000103341164) */
/* WARNING: Removing unreachable block (ram,0x000103340ed8) */
/* WARNING: Removing unreachable block (ram,0x000103340e80) */
/* WARNING: Removing unreachable block (ram,0x000103340e30) */
/* WARNING: Removing unreachable block (ram,0x000103341160) */
/* WARNING: Removing unreachable block (ram,0x000103340e64) */
/* WARNING: Removing unreachable block (ram,0x000103340e0c) */
/* WARNING: Removing unreachable block (ram,0x000103340b2c) */
/* WARNING: Removing unreachable block (ram,0x000103340af0) */
/* WARNING: Removing unreachable block (ram,0x000103340a98) */
/* WARNING: Removing unreachable block (ram,0x000103340a78) */
/* WARNING: Removing unreachable block (ram,0x000103340a28) */
/* WARNING: Removing unreachable block (ram,0x00010334117c) */
/* WARNING: Removing unreachable block (ram,0x000103340a5c) */
/* WARNING: Removing unreachable block (ram,0x000103340a08) */
/* WARNING: Removing unreachable block (ram,0x000103340978) */
/* WARNING: Removing unreachable block (ram,0x000103341174) */
/* WARNING: Removing unreachable block (ram,0x0001033409ec) */
/* WARNING: Removing unreachable block (ram,0x000103340958) */
/* WARNING: Removing unreachable block (ram,0x0001033408fc) */
/* WARNING: Removing unreachable block (ram,0x000103340b34) */
/* WARNING: Removing unreachable block (ram,0x000103340918) */
/* WARNING: Removing unreachable block (ram,0x00010334116c) */
/* WARNING: Removing unreachable block (ram,0x00010334093c) */
/* WARNING: Removing unreachable block (ram,0x0001033408cc) */
/* WARNING: Removing unreachable block (ram,0x000103341158) */
/* WARNING: Removing unreachable block (ram,0x0001033408e0) */
/* WARNING: Removing unreachable block (ram,0x000103340898) */
/* WARNING: Removing unreachable block (ram,0x00010334084c) */
/* WARNING: Removing unreachable block (ram,0x000103340820) */
/* WARNING: Removing unreachable block (ram,0x000103340800) */
/* WARNING: Removing unreachable block (ram,0x0001033407b4) */
/* WARNING: Removing unreachable block (ram,0x000103340784) */
/* WARNING: Removing unreachable block (ram,0x000103341154) */
/* WARNING: Removing unreachable block (ram,0x000103340798) */
/* WARNING: Removing unreachable block (ram,0x00010334076c) */
/* WARNING: Removing unreachable block (ram,0x00010334073c) */
/* WARNING: Removing unreachable block (ram,0x000103341150) */
/* WARNING: Removing unreachable block (ram,0x000103340750) */
/* WARNING: Removing unreachable block (ram,0x000103340714) */
/* WARNING: Removing unreachable block (ram,0x0001033406e4) */
/* WARNING: Removing unreachable block (ram,0x00010334114c) */
/* WARNING: Removing unreachable block (ram,0x0001033406f8) */
/* WARNING: Removing unreachable block (ram,0x000103340d94) */
/* WARNING: Removing unreachable block (ram,0x000103340d98) */
/* WARNING: Removing unreachable block (ram,0x00010334115c) */
/* WARNING: Removing unreachable block (ram,0x000103340df0) */

void FUN_10334069c(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_112f5af00;
  FUN_103340220(&DAT_112f5af00,FUN_1033400ac);
  func_0x000107c5a050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 103341184; end: 103341243;  */

/* WARNING: Possible PIC construction at 0x0001033411e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103341228: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033411e8) */
/* WARNING: Removing unreachable block (ram,0x00010334122c) */

void FUN_103341184(void)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c5fadc(0x746f6f725f63696c,0xed0000776569765f);
    func_0x000107c520f4(unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103341244);
  (*pcVar1)();
}



/* Entry: 103341244; end: 10334175b;  */

/* WARNING: Possible PIC construction at 0x00010334131c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033413bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033414c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103341564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103341604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033416a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103341608) */
/* WARNING: Removing unreachable block (ram,0x000103341568) */
/* WARNING: Removing unreachable block (ram,0x0001033414c8) */
/* WARNING: Removing unreachable block (ram,0x0001033413c0) */
/* WARNING: Removing unreachable block (ram,0x000103341320) */
/* WARNING: Removing unreachable block (ram,0x0001033416a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103341244(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f5aec8;
  plVar3 = *(long **)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,plVar3);
  (**(code **)(lVar2 + 0x10))(plVar3,lVar2);
  puVar4 = &UNK_110640540;
  func_0x000107c613fc(&UNK_110640540,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  pcVar5 = FUN_103342bb0;
  puVar7 = puVar4;
  (**(code **)(*plVar3 + 0x60))(FUN_103342bb0);
  func_0x000107c61574(plVar3);
  func_0x000107c61574(puVar4);
  pcVar6 = pcVar5;
  func_0x000107c614f0(pcVar5);
  (**(code **)(puVar7 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f5aee8),pcVar6,puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar5);
  return;
}



/* Entry: 10334175c; end: 1033417f3; -[_TtC26LensInfoCardImplementation22InfoCardViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334175c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174();
  puVar3 = &uStack_40;
  func_0x000107c61154(puVar3,puVar1);
  FUN_10334069c();
  FUN_103341184();
  FUN_103341244();
  func_0x0001033403bc();
  puStack_48 = puVar3;
  func_0x000100b60084(&puStack_48);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 1033417f4; end: 103341883;  */

void FUN_1033417f4(byte *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_58 [24];
  
  bVar1 = *param_1;
  bVar2 = param_1[1];
  bVar3 = param_1[2];
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar4 = 0x10000;
    if (bVar3 == 0) {
      uVar4 = 0;
    }
    uVar5 = 0x100;
    if (bVar2 == 0) {
      uVar5 = 0;
    }
    FUN_103341884(uVar5 | bVar1 | uVar4);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103341884; end: 103341b23;  */

/* WARNING: Possible PIC construction at 0x0001033418f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103341af8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033418f8) */
/* WARNING: Removing unreachable block (ram,0x000103341908) */
/* WARNING: Removing unreachable block (ram,0x000103341914) */
/* WARNING: Removing unreachable block (ram,0x000103341928) */
/* WARNING: Removing unreachable block (ram,0x00010334192c) */
/* WARNING: Removing unreachable block (ram,0x000103341930) */
/* WARNING: Removing unreachable block (ram,0x000103341938) */
/* WARNING: Removing unreachable block (ram,0x000103341aac) */
/* WARNING: Removing unreachable block (ram,0x000103341ab8) */
/* WARNING: Removing unreachable block (ram,0x000103341abc) */
/* WARNING: Removing unreachable block (ram,0x000103341ae0) */
/* WARNING: Removing unreachable block (ram,0x000103341ae4) */
/* WARNING: Removing unreachable block (ram,0x0001033419a8) */
/* WARNING: Removing unreachable block (ram,0x000103341afc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103341884(ulong param_1)

{
  long unaff_x20;
  
  if ((((uint)param_1 & 0xff) == 1) ||
     (*(char *)(unaff_x20 + _DAT_112f5aed8) == '\x01' && (param_1 & 0x100) != 0)) {
    func_0x00010334043c();
    func_0x000107c5be00();
  }
  else {
    func_0x00010334043c();
    func_0x000107c5ba54();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103341b24; end: 103341c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103341b24(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_150 [80];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_58 = (undefined1)param_1[7];
  uStack_4f = *(undefined8 *)((long)param_1 + 0x41);
  uStack_57 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  func_0x000107c61428(param_2 + 0x10,auStack_a8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar2 = &DAT_112f5af00;
    FUN_103340220(&DAT_112f5af00,FUN_1033400ac);
    func_0x000107c61170(param_2);
    puVar1 = (undefined8 *)(puVar2 + _DAT_112f5acd8);
    uStack_f8 = puVar1[1];
    uStack_100 = *puVar1;
    uStack_d8 = puVar1[5];
    uStack_e0 = puVar1[4];
    uStack_d0 = puVar1[6];
    uStack_bf = *(undefined8 *)((long)puVar1 + 0x41);
    uStack_e8 = puVar1[3];
    uStack_f0 = puVar1[2];
    uStack_c0 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x39) >> 0x38);
    uStack_c8 = (undefined1)puVar1[7];
    uStack_c7 = (undefined7)((ulong)puVar1[7] >> 8);
    uVar3 = param_1[4];
    uVar5 = param_1[7];
    uVar4 = param_1[6];
    puVar1[5] = param_1[5];
    puVar1[4] = uVar3;
    puVar1[7] = uVar5;
    puVar1[6] = uVar4;
    uVar3 = *(undefined8 *)((long)param_1 + 0x39);
    *(undefined8 *)((long)puVar1 + 0x41) = *(undefined8 *)((long)param_1 + 0x41);
    *(undefined8 *)((long)puVar1 + 0x39) = uVar3;
    uVar5 = *param_1;
    uVar4 = param_1[3];
    uVar3 = param_1[2];
    puVar1[1] = param_1[1];
    *puVar1 = uVar5;
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    FUN_103342d90(&uStack_90,auStack_150);
    FUN_103342d90(&uStack_90,auStack_150);
    func_0x000103342dcc(&uStack_100);
    FUN_10333c424();
    func_0x000103342e14(&uStack_90);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 103341c40; end: 103341cb3;  */

void FUN_103341c40(undefined8 param_1,uint param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_103341cb4(param_1,param_2 & 0x101ff);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 103341cb4; end: 103341d4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103341cb4(long param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar2 = &DAT_112f5af10;
  FUN_103340028(&DAT_112f5af10,FUN_10333861c,FUN_103337ba4);
  uVar3 = *(undefined8 *)(puVar2 + _DAT_112f5ab08);
  *(long *)(puVar2 + _DAT_112f5ab08) = param_1;
  func_0x000107c61434(param_1);
  func_0x000107c6142c(uVar3);
  FUN_1033374d4();
  func_0x000107c61170(puVar2);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar1 = param_2 >> 8 & 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112f5af10),PTR_s_setHidden__1126479f8,uVar1);
  return;
}



/* Entry: 103341d50; end: 103341dab;  */

void FUN_103341d50(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_103341dac(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103341dac; end: 103341fa3;  */

/* WARNING: Possible PIC construction at 0x000103341f48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103341f4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103341dac(undefined *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  puVar3 = param_1;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    uVar7 = 0;
    do {
      lVar10 = uVar6 - uVar7;
      lVar9 = 0;
      if (uVar7 <= uVar6) {
        lVar9 = lVar10;
      }
      puVar8 = (undefined8 *)(param_1 + uVar7 * 0x10 + 0x28);
      while( true ) {
        uVar7 = uVar7 + 1;
        if (lVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103341fa4);
          (*pcVar2)();
        }
        puVar3 = (undefined *)puVar8[-1];
        uVar5 = *puVar8;
        func_0x00010332658c(puVar3,uVar5);
        FUN_103339e60(&uStack_d8,puVar3,uVar5);
        FUN_103325284(puVar3,uVar5);
        if (lStack_d0 != 0) break;
        lVar9 = lVar9 + -1;
        puVar8 = puVar8 + 2;
        lVar10 = lVar10 + -1;
        if (lVar10 == 0) goto LAB_103341f10;
      }
      puVar3 = puVar4;
      func_0x000107c61558();
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = (undefined *)0x0;
        FUN_1033319f0(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
        puVar4 = puVar3;
      }
      uVar1 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        puVar3 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        FUN_1033319f0(puVar3,uVar1 + 1,1,puVar4);
        puVar4 = puVar3;
      }
      *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar4 + uVar1 * 0x68 + 0x38) = uStack_c0;
      *(undefined8 *)(puVar4 + uVar1 * 0x68 + 0x30) = uStack_c8;
      *(undefined8 *)(puVar4 + uVar1 * 0x68 + 0x48) = uStack_b0;
      *(undefined8 *)(puVar4 + uVar1 * 0x68 + 0x40) = uStack_b8;
      *(undefined8 *)(puVar4 + uVar1 * 0x68 + 0x80) = uStack_78;
      *(undefined8 *)(puVar4 + uVar1 * 0x68 + 0x68) = uStack_90;
      *(undefined8 *)(puVar4 + uVar1 * 0x68 + 0x60) = uStack_98;
      *(undefined8 *)(puVar4 + uVar1 * 0x68 + 0x78) = uStack_80;
      *(undefined8 *)(puVar4 + uVar1 * 0x68 + 0x70) = uStack_88;
      *(undefined8 *)(puVar4 + uVar1 * 0x68 + 0x58) = uStack_a0;
      *(undefined8 *)(puVar4 + uVar1 * 0x68 + 0x50) = uStack_a8;
      *(long *)(puVar4 + uVar1 * 0x68 + 0x28) = lStack_d0;
      *(undefined8 *)(puVar4 + uVar1 * 0x68 + 0x20) = uStack_d8;
    } while (lVar10 != 1);
  }
LAB_103341f10:
  FUN_10333ff04();
  uVar5 = *(undefined8 *)(puVar3 + _DAT_112f5abe8);
  *(undefined **)(puVar3 + _DAT_112f5abe8) = puVar4;
  func_0x000107c61434(puVar4);
  func_0x000107c6142c(uVar5);
  FUN_10333a2d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 103341fa4; end: 1033420d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103341fa4(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_68 [24];
  
  lVar6 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar6 = *(long *)(lVar6 + 0x10);
    puVar3 = &DAT_112f5af00;
    FUN_103340220(&DAT_112f5af00,FUN_1033400ac);
    if (lVar6 == 0) {
      pcVar7 = (code *)0x0;
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = &UNK_110640590;
      func_0x000107c613fc(&UNK_110640590,0x18,7);
      func_0x000107c61644(puVar4 + 0x10,*(undefined8 *)(param_2 + _DAT_112f5aee0));
      pcVar7 = FUN_103342c44;
    }
    puVar1 = (undefined8 *)(puVar3 + _DAT_112f5ace8);
    uVar5 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = pcVar7;
    puVar1[1] = puVar4;
    func_0x000100b64c10(pcVar7,puVar4);
    func_0x00010058d43c(uVar5,uVar2);
    func_0x00010333d3a8();
    func_0x000107c550d8();
    func_0x000107c61170(uVar5);
    func_0x00010058d43c(pcVar7,puVar4);
    func_0x000107c61170(param_2);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 1033420d4; end: 1033421ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033420d4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = *(undefined1 *)(param_1 + 2);
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar5 = &DAT_112f5af20;
    FUN_103340028(&DAT_112f5af20,FUN_1033361f0,FUN_103335688);
    puVar1 = (undefined8 *)(puVar5 + _DAT_112f5aa38);
    uVar6 = puVar1[1];
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    *(undefined1 *)(puVar1 + 2) = uVar4;
    func_0x000107c6142c(uVar6);
    func_0x000107c61434(uVar3);
    FUN_103335570();
    func_0x000107c61170(puVar5);
    func_0x000107c550d8(*(undefined8 *)(param_2 + _DAT_112f5af20));
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1033421ac; end: 10334225f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033421ac(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar2 = &DAT_112f5af08;
    FUN_103340028(&DAT_112f5af08,FUN_103343e60,FUN_1033437f8);
    puVar2[_DAT_112f5afa0] = uVar1;
    FUN_1033430c8();
    func_0x000107c61170(puVar2);
    func_0x000107c550d8(*(undefined8 *)(param_2 + _DAT_112f5af08));
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103342260; end: 10334234b;  */

void FUN_103342260(code *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  (*param_1)();
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar2 = param_3;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033422e0);
      (*pcVar1)();
    }
    func_0x000107c4abfc(lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10334234c; end: 1033423ab; -[_TtC26LensInfoCardImplementation22InfoCardViewController initWithNibName:bundle:] */

void FUN_10334234c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardImplementation.InfoCardViewController",0x31,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103342378);
  (*pcVar1)();
}



/* Entry: 1033423ac; end: 1033424a3; -[_TtC26LensInfoCardImplementation22InfoCardViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103342408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103342428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103342448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103342468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103342488: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010334246c) */
/* WARNING: Removing unreachable block (ram,0x00010334244c) */
/* WARNING: Removing unreachable block (ram,0x00010334242c) */
/* WARNING: Removing unreachable block (ram,0x00010334240c) */
/* WARNING: Removing unreachable block (ram,0x00010334248c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033423ac(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112f5aec8);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5aee0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5aee8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5aef8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5af00));
  return;
}



/* Entry: 1033424a4; end: 1033424c3;  */

void FUN_1033424a4(void)

{
  func_0x000107c61168(&PTR_PTR_1128cf4c0);
  return;
}



/* Entry: 1033424c4; end: 10334262f;  */

ulong FUN_1033424c4(void)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x20;
  ulong uVar7;
  ulong uVar8;
  undefined *puStack_68;
  
  func_0x000107c3f9e0();
  func_0x000107c61180();
  uVar3 = 0;
  func_0x000103343088(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
  uVar4 = unaff_x20;
  func_0x000107c5fc54(unaff_x20,uVar3);
  func_0x000107c61170(unaff_x20);
  if (uVar4 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar7 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1033425ec);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(uVar4 + uVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar8;
        func_0x000103342830(uVar8,uVar4,&PTR__OBJC_CLASS___UIViewController_1126af898,0x112d4ccd8);
      }
      uVar1 = uVar8 + 1;
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1033425e8);
        (*pcVar2)();
      }
      puStack_68 = PTR_DAT_11269caf8;
      uVar6 = uVar5;
      func_0x000107c61494(uVar5,1,&puStack_68);
      if (uVar6 != 0) {
        func_0x000107c6142c(uVar4);
        return uVar6;
      }
      func_0x000107c61170(uVar5);
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar7);
  }
  func_0x000107c6142c(uVar4);
  return 0;
}



/* Entry: 103342630; end: 1033426ef; -[_TtC26LensInfoCardImplementation22InfoCardViewController tray:canUseGestureToExpandOrCollapse:] */

ulong FUN_103342630(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1033424c4();
  if (uVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = uVar1;
    func_0x000107c61150();
    if ((uVar2 & 1) == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = uVar1;
      func_0x000107c5cf88(uVar1);
    }
    func_0x000107c615e8(uVar1);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 1033426f0; end: 103342793; -[_TtC26LensInfoCardImplementation22InfoCardViewController scrollViewForTray:] */

void FUN_1033426f0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1033424c4();
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x000107c61150();
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar1;
      func_0x000107c51a70(uVar1);
      func_0x000107c61180();
    }
    func_0x000107c615e8(uVar1);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103342794; end: 1033429eb; -[_TtC26LensInfoCardImplementation22InfoCardViewController trayCanExpandWhenScrollAtBottom:] */

ulong FUN_103342794(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1033424c4();
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x000107c61150();
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar1;
      func_0x000107c5cf98(uVar1);
    }
    func_0x000107c615e8(uVar1);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 1033429ec; end: 1033429ff;  */

ulong FUN_1033429ec(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103342914);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103342918);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126ccd78;
    func_0x000107c61168(PTR_PTR_1126ccd78);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126ccd78;
    func_0x000107c61168(PTR_PTR_1126ccd78);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000103343088(0,0x112ea2a98,&PTR_PTR_1126ccd78);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1033429ec);
  (*pcVar2)();
}



/* Entry: 103342a00; end: 103342baf;  */

ulong FUN_103342a00(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103342adc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103342ae0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
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
    func_0x000107c61494();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x746e6f4349554353,0xed000072656e6961);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103342bb0);
  (*pcVar2)();
}



/* Entry: 103342bb0; end: 103342bcf;  */

void FUN_103342bb0(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  bVar1 = *param_1;
  bVar2 = param_1[1];
  bVar3 = param_1[2];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    uVar5 = 0x10000;
    if (bVar3 == 0) {
      uVar5 = 0;
    }
    uVar6 = 0x100;
    if (bVar2 == 0) {
      uVar6 = 0;
    }
    FUN_103341884(uVar6 | bVar1 | uVar5);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 103342bd0; end: 103342c23;  */

void FUN_103342bd0(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  long unaff_x20;
  
  uVar2 = 0x10000;
  if (*(char *)((long)param_1 + 10) == '\0') {
    uVar2 = 0;
  }
  uVar1 = 0x100;
  if (*(char *)((long)param_1 + 9) == '\0') {
    uVar1 = 0;
  }
  (**(code **)(unaff_x20 + 0x10))(*param_1,uVar1 | *(byte *)(param_1 + 1) | uVar2);
  return;
}



/* Entry: 103342c24; end: 103342c43;  */

void FUN_103342c24(undefined8 *param_1)

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
    FUN_103341dac(uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103342c44; end: 103342c97;  */

void FUN_103342c44(void)

{
  func_0x0001033422e0();
  return;
}



/* Entry: 103342c98; end: 103342d8f;  */

void FUN_103342c98(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103342d84);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_1033317c0();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103342d88);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103342d8c);
      (*pcVar1)();
    }
    func_0x000107c6140c(lVar4 + *(long *)(lVar4 + 0x10) * 0x10 + 0x20,param_1 + 0x20,uVar5,
                        &UNK_11063f070);
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103342d90);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 103342d90; end: 103342e47;  */

undefined8 FUN_103342d90(undefined8 param_1,undefined8 param_2)

{
  FUN_103325d44(param_2,param_1);
  return param_2;
}



/* Entry: 103342e48; end: 103342e9f;  */

/* WARNING: Possible PIC construction at 0x000103342e7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103342e80) */
/* WARNING: Removing unreachable block (ram,0x000103342e84) */
/* WARNING: Removing unreachable block (ram,0x000103342e88) */

void FUN_103342e48(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = 0x3ff0000000000000;
  if (*(char *)(unaff_x20 + 0x19) == '\0') {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(unaff_x20 + 0x10),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 103342ea0; end: 103342ec7;  */

void FUN_103342ea0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x20);
  (**(code **)(unaff_x20 + 0x10))(*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61428(lVar3 + 0x10,auStack_38,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033422e0);
      (*pcVar1)();
    }
    func_0x000107c4abfc(lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 103342ec8; end: 103343043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103342ec8(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112f5aee0;
  uVar3 = 0x112f59a00;
  func_0x0001000285a8(0x112f59a00,&UNK_10dbb1a70);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_112f5aee8;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112f5aef0) = 0;
  lVar1 = _DAT_112f5aef8;
  func_0x0001000285a8(0x112f5af80,&UNK_10dbb3118);
  func_0x000107c613fc();
  uVar3 = 0;
  func_0x00010095c380();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f5af00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5af08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5af10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5af18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5af20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5af28) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5af30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5af38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5af40) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5af48) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "LensInfoCardImplementation/InfoCardViewController.swift",0x37,2,0x56,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103343044);
  (*pcVar2)();
}



/* Entry: 103343044; end: 1033430c7;  */

long FUN_103343044(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1033430c8; end: 1033437f7;  */

/* WARNING: Possible PIC construction at 0x000103343114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103343134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103343198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103343200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103343224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334328c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103343228) */
/* WARNING: Removing unreachable block (ram,0x000103343264) */
/* WARNING: Removing unreachable block (ram,0x000103343204) */
/* WARNING: Removing unreachable block (ram,0x00010334319c) */
/* WARNING: Removing unreachable block (ram,0x0001033432ac) */
/* WARNING: Removing unreachable block (ram,0x0001033431b4) */
/* WARNING: Removing unreachable block (ram,0x000103343138) */
/* WARNING: Removing unreachable block (ram,0x000103343118) */
/* WARNING: Removing unreachable block (ram,0x000103343290) */
/* WARNING: Removing unreachable block (ram,0x000103343298) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033430c8(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = &DAT_112f5afb8;
  if (*(char *)(unaff_x20 + _DAT_112f5afa0) == '\0' ||
      *(char *)(unaff_x20 + _DAT_112f5afa0) == '\x03') {
    func_0x000103343618(&DAT_112f5afb8,0x1033433b4);
    func_0x000107c59c6c();
  }
  else {
    func_0x000103343618(&DAT_112f5afb8,0x1033433b4);
    func_0x000107c5fadc(0x6e654c2079736145,0xe900000000000073);
    func_0x000107c6142c(0xe900000000000073);
    func_0x000107c59c6c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1033437f8; end: 103343993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1033437f8(undefined1 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  lVar1 = _DAT_112f5af90;
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_112f5af98;
  uVar2 = 0x112f59a00;
  func_0x0001000285a8(0x112f59a00,&UNK_10dbb1a70);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_112f5afa0) = 3;
  *(undefined8 *)(unaff_x20 + _DAT_112f5afa8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5afb0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5afb8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5afc0) = 0;
  puVar4 = &DAT_112f5afc8;
  *(undefined8 *)(unaff_x20 + _DAT_112f5afc8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5afd0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5afd8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f5af88) = param_1;
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffffb0,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_103343994();
  func_0x000103343618(&DAT_112f5afc8,0x10334350c);
  puVar5 = puVar4;
  func_0x00010334377c();
  func_0x000107c3d6fc(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c5a378(*(undefined8 *)(puVar3 + _DAT_112f5afc8));
  func_0x000107c61170(puVar3);
  return puVar3;
}



/* Entry: 103343994; end: 103343c8b;  */

/* WARNING: Possible PIC construction at 0x0001033439d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103343a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103343ac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103343b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103343b50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103343b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103343ba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103343bd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103343bf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103343c30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103343bfc) */
/* WARNING: Removing unreachable block (ram,0x000103343bdc) */
/* WARNING: Removing unreachable block (ram,0x000103343bac) */
/* WARNING: Removing unreachable block (ram,0x000103343b74) */
/* WARNING: Removing unreachable block (ram,0x000103343b54) */
/* WARNING: Removing unreachable block (ram,0x000103343b1c) */
/* WARNING: Removing unreachable block (ram,0x000103343ac8) */
/* WARNING: Removing unreachable block (ram,0x000103343a74) */
/* WARNING: Removing unreachable block (ram,0x0001033439d8) */
/* WARNING: Removing unreachable block (ram,0x000103343c34) */

void FUN_103343994(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_112f5afd0;
  func_0x000103343618(&DAT_112f5afd0,0x103343678);
  func_0x000107c5a050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 103343c8c; end: 103343d2f; -[_TtC26LensInfoCardImplementation29LensStudioAttributionLinkView initWithCoder:] */

void FUN_103343c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_103343e80();
  return;
}



/* Entry: 103343d30; end: 103343d57; -[_TtC26LensInfoCardImplementation29LensStudioAttributionLinkView handleTap] */

void FUN_103343d30(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000103343cb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103343d58; end: 103343db7; -[_TtC26LensInfoCardImplementation29LensStudioAttributionLinkView initWithFrame:] */

void FUN_103343d58(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardImplementation.LensStudioAttributionLinkView",0x38,"init(frame:)"
                      ,0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103343d84);
  (*pcVar1)();
}



/* Entry: 103343db8; end: 103343e5f; -[_TtC26LensInfoCardImplementation29LensStudioAttributionLinkView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103343df4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103343e14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103343e34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103343e18) */
/* WARNING: Removing unreachable block (ram,0x000103343df8) */
/* WARNING: Removing unreachable block (ram,0x000103343e38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103343db8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5af90));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5af98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5afa8));
  return;
}



/* Entry: 103343e60; end: 103343e7f;  */

void FUN_103343e60(void)

{
  func_0x000107c61168(&PTR_PTR_1128cf600);
  return;
}



/* Entry: 103343e80; end: 103343fa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103343e80(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112f5af90;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_112f5af98;
  uVar3 = 0x112f59a00;
  func_0x0001000285a8(0x112f59a00,&UNK_10dbb1a70);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112f5afa0) = 3;
  *(undefined8 *)(unaff_x20 + _DAT_112f5afa8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5afb0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5afb8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5afc0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5afc8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5afd0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5afd8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "LensInfoCardImplementation/LensStudioAttributionLinkView.swift",0x3e,2,0x61,0
                     );
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103343fa4);
  (*pcVar2)();
}



/* Entry: 103343fa4; end: 103343fe3;  */

void FUN_103343fa4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103343fe4; end: 1033440cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103343fe4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = _DAT_112f5b038;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f5b038);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = 0x112f59a00;
    func_0x0001000285a8(0x112f59a00,&UNK_10dbb1a70);
    func_0x000107c613fc();
    func_0x0001000c2754();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f5b028);
    *(undefined8 *)(unaff_x20 + _DAT_112f5b028) = param_1;
    func_0x000107c615e8(uVar4);
    uVar4 = param_1;
    func_0x000107c615f0();
    FUN_1033440d0();
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f5b030);
    *(undefined8 *)(unaff_x20 + _DAT_112f5b030) = uVar4;
    func_0x000107c61174();
    func_0x000107c61170(uVar5);
    func_0x000107c3e2c0(param_1);
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar3;
}



/* Entry: 1033440d0; end: 10334430b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1033440d0(void)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x20;
  
  uVar6 = 0;
  FUN_103344f28(0,0x112d360a8,&PTR_PTR_1126aed70);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5b018);
  uVar8 = *puVar1;
  uVar13 = puVar1[1];
  uVar12 = puVar1[7];
  uVar3 = puVar1[8];
  puVar9 = &UNK_1106406d0;
  puVar7 = puVar9;
  func_0x000107c613fc(&UNK_1106406d0,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar13);
  FUN_10334452c(uVar8,uVar13,uVar12,uVar3,FUN_103344e7c,puVar7);
  plVar2 = (long *)(unaff_x20 + _DAT_112f5b020);
  lVar10 = *plVar2;
  lVar14 = plVar2[1];
  lVar11 = plVar2[7];
  lVar4 = plVar2[8];
  func_0x000107c613fc(&UNK_1106406d0,0x18,7);
  func_0x000107c61614(puVar9 + 0x10);
  func_0x000107c61434(lVar4);
  func_0x000107c61434(lVar14);
  FUN_10334452c(lVar10,lVar14,lVar11,lVar4,0x103344eb4,puVar9);
  lVar11 = lVar10;
  func_0x000100de9c28();
  func_0x000107c613fc();
  *(undefined8 *)(lVar11 + 0x18) = 5;
  *(undefined8 *)(lVar11 + 0x10) = 2;
  *(undefined8 *)(lVar11 + 0x20) = uVar8;
  *(long *)(lVar11 + 0x28) = lVar10;
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f5b008);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112f5b008))[1];
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f5b010);
  uVar5 = ((undefined8 *)(unaff_x20 + _DAT_112f5b010))[1];
  puVar9 = PTR_PTR_1126aed78;
  func_0x000107c610f8(PTR_PTR_1126aed78);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(lVar10);
  func_0x000107c5fadc(uVar12,uVar3);
  func_0x000107c5fadc(uVar13,uVar5);
  lVar14 = lVar11;
  func_0x000107c5fc48(lVar11,uVar6);
  func_0x000107c61574(lVar11);
  func_0x000107c454c0(puVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(lVar14);
  func_0x000107c53fcc(puVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lVar10);
  return puVar9;
}



/* Entry: 10334430c; end: 103344407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334430c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  lVar4 = *(long *)(unaff_x20 + _DAT_112f5b028);
  if (lVar4 != 0) {
    puVar1 = &UNK_1106406d0;
    func_0x000107c613fc(&UNK_1106406d0,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    puVar2 = &UNK_1106406f8;
    func_0x000107c613fc(&UNK_1106406f8,0x39,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined8 *)(puVar2 + 0x28) = 0;
    puVar2[0x38] = 0xff;
    pcStack_40 = FUN_103344e0c;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_110640710;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    puVar1 = puStack_38;
    func_0x000107c615f0(lVar4);
    func_0x000107c61574(puVar1);
    func_0x000107c41864(lVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar4);
  }
  return;
}



/* Entry: 103344408; end: 10334452b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103344408(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char cStack_80;
  undefined1 auStack_78 [24];
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  cVar5 = *(char *)(param_2 + 4);
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar6 = _DAT_112f5b038;
  if (param_1 != 0) {
    lVar7 = *(long *)(param_1 + _DAT_112f5b038);
    if (lVar7 != 0) {
      uVar8 = *(undefined8 *)(param_1 + _DAT_112f5b028);
      *(undefined8 *)(param_1 + _DAT_112f5b028) = 0;
      func_0x000107c6157c(lVar7);
      func_0x000107c615e8(uVar8);
      uVar8 = *(undefined8 *)(param_1 + _DAT_112f5b030);
      *(undefined8 *)(param_1 + _DAT_112f5b030) = 0;
      func_0x000107c61170(uVar8);
      uVar8 = *(undefined8 *)(param_1 + lVar6);
      *(undefined8 *)(param_1 + lVar6) = 0;
      func_0x000107c61574(uVar8);
      if (cVar5 != -1) {
        uStack_98 = param_2[1];
        uStack_a0 = *param_2;
        uStack_88 = param_2[3];
        uStack_90 = param_2[2];
        cStack_80 = cVar5;
        func_0x00010332dc0c(uVar1,uVar3,uVar2,uVar4,cVar5);
        func_0x0001002a64a8(&uStack_a0);
        FUN_103344e34(param_2);
      }
      func_0x000100c7f490();
      func_0x000107c61574(lVar7);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10334452c; end: 10334462f;  */

undefined8
FUN_10334452c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar1 = &puStack_80;
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  if (param_4 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c6142c(param_4);
  }
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100de205c;
  puStack_68 = &UNK_110640788;
  uStack_60 = param_5;
  uStack_58 = param_6;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c614e8();
  func_0x000107c3dac8();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61574(uStack_58);
  return unaff_x20;
}



/* Entry: 103344630; end: 10334493b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103344630(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar9 = *(long *)(param_2 + _DAT_112f5b028);
    if (lVar9 == 0) {
      func_0x000107c61170();
    }
    else {
      lVar1 = param_2 + *param_3;
      uVar2 = *(undefined8 *)(lVar1 + 0x20);
      uVar4 = *(undefined8 *)(lVar1 + 0x28);
      uVar3 = *(undefined8 *)(lVar1 + 0x10);
      uVar5 = *(undefined8 *)(lVar1 + 0x18);
      uVar6 = *(undefined1 *)(lVar1 + 0x30);
      puVar7 = &UNK_1106406d0;
      func_0x000107c613fc(&UNK_1106406d0,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,param_2);
      func_0x000107c613fc(param_4,0x39,7);
      *(undefined **)(param_4 + 0x10) = puVar7;
      *(undefined8 *)(param_4 + 0x18) = uVar3;
      *(undefined8 *)(param_4 + 0x20) = uVar5;
      *(undefined8 *)(param_4 + 0x28) = uVar2;
      *(undefined8 *)(param_4 + 0x30) = uVar4;
      *(undefined1 *)(param_4 + 0x38) = uVar6;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000b0c7c;
      ppuVar8 = &puStack_a8;
      uStack_90 = param_6;
      uStack_88 = param_5;
      lStack_80 = param_4;
      func_0x000107c60bc4(ppuVar8);
      lVar1 = lStack_80;
      func_0x00010332dc0c(uVar3,uVar5,uVar2,uVar4,uVar6);
      func_0x00010332dc0c(uVar3,uVar5,uVar2,uVar4,uVar6);
      func_0x000107c615f0(lVar9);
      func_0x000107c61574(lVar1);
      func_0x000107c41864(lVar9);
      FUN_10332dcdc(uVar3,uVar5,uVar2,uVar4,uVar6);
      func_0x000107c61170(param_2);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c615e8(lVar9);
    }
  }
  return;
}



/* Entry: 10334493c; end: 10334498b; -[_TtC26LensInfoCardImplementation29InfoCardAlertDialogController dialogDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000103344974: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103344978) */

void FUN_10334493c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001033447d8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10334498c; end: 1033449eb; -[_TtC26LensInfoCardImplementation29InfoCardAlertDialogController init] */

void FUN_10334498c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardImplementation.InfoCardAlertDialogController",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033449b8);
  (*pcVar1)();
}



/* Entry: 1033449ec; end: 103344afb; -[_TtC26LensInfoCardImplementation29InfoCardAlertDialogController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033449ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f5b008 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f5b010 + 8));
  lVar1 = param_1 + _DAT_112f5b018;
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  uVar4 = *(undefined8 *)(lVar1 + 0x20);
  uVar6 = *(undefined8 *)(lVar1 + 0x28);
  uVar7 = *(undefined8 *)(lVar1 + 0x40);
  uVar5 = *(undefined1 *)(lVar1 + 0x30);
  func_0x000107c6142c(*(undefined8 *)(lVar1 + 8));
  FUN_10332dcdc(uVar3,uVar2,uVar4,uVar6,uVar5);
  func_0x000107c6142c(uVar7);
  lVar1 = param_1 + _DAT_112f5b020;
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  uVar4 = *(undefined8 *)(lVar1 + 0x20);
  uVar6 = *(undefined8 *)(lVar1 + 0x28);
  uVar7 = *(undefined8 *)(lVar1 + 0x40);
  uVar5 = *(undefined1 *)(lVar1 + 0x30);
  func_0x000107c6142c(*(undefined8 *)(lVar1 + 8));
  FUN_10332dcdc(uVar3,uVar2,uVar4,uVar6,uVar5);
  func_0x000107c6142c(uVar7);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f5b028));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f5b030));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5b038));
  return;
}



/* Entry: 103344afc; end: 103344b1b;  */

void FUN_103344afc(void)

{
  func_0x000107c61168(&PTR_PTR_1128cf710);
  return;
}



/* Entry: 103344b1c; end: 103344b7f;  */

long FUN_103344b1c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103344b80; end: 103344cbf;  */

undefined8 * FUN_103344b80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar1 = param_2[4];
  uVar4 = param_2[5];
  uVar5 = *(undefined1 *)(param_2 + 6);
  func_0x000107c61434();
  func_0x00010332dc0c(uVar2,uVar3,uVar1,uVar4,uVar5);
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar1;
  param_1[5] = uVar4;
  *(undefined1 *)(param_1 + 6) = uVar5;
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103344cc0; end: 103344d23;  */

undefined8 * FUN_103344cc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = param_2[1];
  uVar6 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar6);
  uVar4 = *(undefined1 *)(param_2 + 6);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_2[2];
  uVar9 = param_2[5];
  uVar8 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar7;
  param_1[5] = uVar9;
  param_1[4] = uVar8;
  uVar5 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar4;
  FUN_10332dcdc(uVar1,uVar2,uVar6,uVar3,uVar5);
  uVar1 = param_2[8];
  uVar6 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  func_0x000107c6142c(uVar6);
  return param_1;
}



/* Entry: 103344d24; end: 103344dcb;  */

int FUN_103344d24(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103344dcc; end: 103344e0b;  */

void FUN_103344dcc(void)

{
  FUN_103343fe4();
  return;
}



/* Entry: 103344e0c; end: 103344e33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103344e0c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char cStack_80;
  undefined1 auStack_78 [24];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  puVar1 = (undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *puVar1;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  cVar6 = *(char *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar8 + 0x10,auStack_78,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  lVar7 = _DAT_112f5b038;
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar8 + _DAT_112f5b038);
    if (lVar9 != 0) {
      uVar10 = *(undefined8 *)(lVar8 + _DAT_112f5b028);
      *(undefined8 *)(lVar8 + _DAT_112f5b028) = 0;
      func_0x000107c6157c(lVar9);
      func_0x000107c615e8(uVar10);
      uVar10 = *(undefined8 *)(lVar8 + _DAT_112f5b030);
      *(undefined8 *)(lVar8 + _DAT_112f5b030) = 0;
      func_0x000107c61170(uVar10);
      uVar10 = *(undefined8 *)(lVar8 + lVar7);
      *(undefined8 *)(lVar8 + lVar7) = 0;
      func_0x000107c61574(uVar10);
      if (cVar6 != -1) {
        uStack_98 = *(undefined8 *)(unaff_x20 + 0x20);
        uStack_a0 = *puVar1;
        uStack_88 = *(undefined8 *)(unaff_x20 + 0x30);
        uStack_90 = *(undefined8 *)(unaff_x20 + 0x28);
        cStack_80 = cVar6;
        func_0x00010332dc0c(uVar2,uVar4,uVar3,uVar5,cVar6);
        func_0x0001002a64a8(&uStack_a0);
        FUN_103344e34(puVar1);
      }
      func_0x000100c7f490();
      func_0x000107c61574(lVar9);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 103344e34; end: 103344e7b;  */

undefined8 FUN_103344e34(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f5b068;
  func_0x0001000285a8(0x112f5b068,&UNK_10dbb3180);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103344e7c; end: 103344f27;  */

void FUN_103344e7c(void)

{
  FUN_103344630();
  return;
}



/* Entry: 103344f28; end: 103344f67;  */

void FUN_103344f28(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103344f68; end: 10334523f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103344f68(long param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_70;
  long lStack_68;
  
  func_0x000103346aec();
  lVar3 = param_1;
  lVar8 = param_2;
  func_0x000103346bb8();
  lVar4 = lVar3;
  lVar9 = lVar8;
  func_0x000103346c84();
  lVar5 = lVar4;
  lVar10 = lVar9;
  func_0x000107c309dc();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x000107c5faec();
    func_0x000107c61170();
    FUN_103344afc();
    lVar7 = lVar5;
    func_0x000107c610f8();
    *(undefined8 *)(lVar7 + _DAT_112f5b028) = 0;
    *(undefined8 *)(lVar7 + _DAT_112f5b030) = 0;
    *(undefined8 *)(lVar7 + _DAT_112f5b038) = 0;
    plVar1 = (long *)(lVar7 + _DAT_112f5b008);
    *plVar1 = param_1;
    plVar1[1] = param_2;
    plVar1 = (long *)(lVar7 + _DAT_112f5b010);
    *plVar1 = lVar3;
    plVar1[1] = lVar8;
    plVar1 = (long *)(lVar7 + _DAT_112f5b018);
    *plVar1 = lVar4;
    plVar1[1] = lVar9;
    plVar1[2] = 1;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0;
    *(undefined1 *)(plVar1 + 6) = 0xb;
    plVar1[7] = -0x2fffffffffffffe4;
    plVar1[8] = -0x7ffffffef0ec0920;
    plVar1 = (long *)(lVar7 + _DAT_112f5b020);
    *plVar1 = lVar6;
    plVar1[1] = lVar10;
    plVar1[3] = 0;
    plVar1[2] = 0;
    plVar1[5] = 0;
    plVar1[4] = 0;
    *(undefined1 *)(plVar1 + 6) = 0xb;
    plVar1[7] = -0x2fffffffffffffe8;
    plVar1[8] = -0x7ffffffef0ec0940;
    lStack_70 = lVar7;
    lStack_68 = lVar5;
    func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1033450d4);
  (*pcVar2)();
}



/* Entry: 103345240; end: 10334525f;  */

void FUN_103345240(long param_1,long param_2)

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



/* Entry: 103345260; end: 1033452ab;  */

void FUN_103345260(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x00010058d43c(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033452ac; end: 103345357;  */

void FUN_1033452ac(void)

{
  long *unaff_x20;
  
  (**(code **)(*unaff_x20 + 0x10))();
  return;
}



/* Entry: 103345358; end: 1033454d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103345358(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  uint7 uStack_ff;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f5b128);
  *(undefined8 *)(unaff_x20 + _DAT_112f5b128) = param_1;
  func_0x000107c61434();
  func_0x000107c6142c(uVar7);
  lVar2 = *(long *)(unaff_x20 + _DAT_112f5b130);
  if (lVar2 != 0) {
    func_0x000107c61174();
    lVar3 = lVar2;
    func_0x0001033456ec();
    uVar7 = 0;
    FUN_10334676c(0,0x112d56ea0,&PTR_PTR_1126b10a0);
    lVar4 = lVar3;
    func_0x000107c5fc48(lVar3);
    func_0x000107c6142c();
    func_0x000107c309d8();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033454d4);
      (*pcVar1)();
    }
    lVar5 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0xd;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0xd;
    uStack_d0 = 0xd00000000000001d;
    uStack_c8 = 0x800000010f13f700;
    uStack_60 = 0x800000010f13f700;
    uStack_70 = CONCAT71(uStack_d7,0xd);
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0xd00000000000001d;
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = (ulong)uStack_ff << 8;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0xd;
    plVar6 = &lStack_c0;
    lStack_128 = lVar5;
    uStack_120 = uVar7;
    lStack_c0 = lVar5;
    uStack_b8 = uVar7;
    FUN_103345be0(plVar6);
    func_0x00010333acf8(&lStack_128);
    func_0x000107c5017c(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(plVar6);
  }
  return;
}



/* Entry: 1033454d4; end: 1033459c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1033454d4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x20;
  long lStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  uint7 uStack_10f;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar4 = _DAT_112f5b138;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f5b138);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = 0x112f59a00;
    func_0x0001000285a8(0x112f59a00,&UNK_10dbb1a70);
    uVar9 = (ulong)*(uint *)(lVar3 + 0x30);
    func_0x000107c613fc();
    func_0x0001000c2754();
    lVar2 = *(long *)(unaff_x20 + lVar4);
    *(long *)(unaff_x20 + lVar4) = lVar3;
    func_0x000107c6157c();
    func_0x000107c61574();
    func_0x0001033456ec();
    lVar4 = lVar2;
    func_0x000107c309d8();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033456ec);
      (*pcVar1)();
    }
    lVar5 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0xd;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0xd;
    uStack_e0 = 0xd00000000000001d;
    uStack_d8 = 0x800000010f13f700;
    uStack_70 = 0x800000010f13f700;
    uStack_80 = CONCAT71(uStack_e7,0xd);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0xd00000000000001d;
    uStack_b8 = 0;
    uStack_c0 = 0;
    lStack_a8 = (ulong)uStack_10f << 8;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0xd;
    plVar6 = &lStack_d0;
    lStack_138 = lVar5;
    uStack_130 = uVar9;
    lStack_d0 = lVar5;
    uStack_c8 = uVar9;
    FUN_103345be0(plVar6);
    func_0x00010333acf8(&lStack_138);
    puVar7 = PTR_PTR_1126b10a8;
    func_0x000107c610f8();
    uVar8 = 0;
    FUN_10334676c(0,0x112d56ea0,&PTR_PTR_1126b10a0);
    lVar4 = lVar2;
    func_0x000107c5fc48(lVar2,uVar8);
    func_0x000107c6142c(lVar2);
    func_0x000107c46c9c();
    func_0x000107c61170(plVar6);
    func_0x000107c61170(lVar4);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f5b130);
    *(undefined **)(unaff_x20 + _DAT_112f5b130) = puVar7;
    func_0x000107c61174(puVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c53fcc(puVar7);
    func_0x000107c4ef00(puVar7);
    func_0x000107c61170(puVar7);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar3;
}



/* Entry: 1033459c8; end: 103345a9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033459c8(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  lVar3 = *(long *)(unaff_x20 + _DAT_112f5b130);
  if (lVar3 != 0) {
    puVar1 = &UNK_110640850;
    func_0x000107c613fc(&UNK_110640850,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    pcStack_40 = FUN_103346268;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_110640868;
    puStack_38 = puVar1;
    func_0x000107c60bc4(&puStack_60);
    puVar1 = puStack_38;
    func_0x000107c61174(lVar3);
    func_0x000107c61574(puVar1);
    func_0x000107c42010(lVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 103345a9c; end: 103345af7;  */

void FUN_103345a9c(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_103345af8(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103345af8; end: 103345bdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103345af8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112f5b138);
  if (lVar6 != 0) {
    *(undefined8 *)(unaff_x20 + _DAT_112f5b138) = 0;
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f5b130);
    *(undefined8 *)(unaff_x20 + _DAT_112f5b130) = 0;
    func_0x000107c61170(uVar5);
    lVar7 = *(long *)(param_1 + 0x10);
    func_0x000107c6157c(lVar6);
    if (lVar7 != 0) {
      puVar8 = (undefined1 *)(param_1 + 0x40);
      do {
        uVar5 = *(undefined8 *)(puVar8 + -0x10);
        uVar2 = *(undefined8 *)(puVar8 + -8);
        uVar1 = *(undefined8 *)(puVar8 + -0x20);
        uVar3 = *(undefined8 *)(puVar8 + -0x18);
        uVar4 = *puVar8;
        uStack_78 = uVar1;
        uStack_70 = uVar3;
        uStack_68 = uVar5;
        uStack_60 = uVar2;
        uStack_58 = uVar4;
        func_0x00010332dc0c(uVar1,uVar3,uVar5,uVar2,uVar4);
        func_0x0001002a64a8(&uStack_78);
        FUN_10332dcdc(uVar1,uVar3,uVar5,uVar2,uVar4);
        lVar7 = lVar7 + -1;
        puVar8 = puVar8 + 0x28;
      } while (lVar7 != 0);
    }
    func_0x000107c61574(lVar6);
    func_0x000100c7f490();
    func_0x000107c61574(lVar6);
  }
  return;
}



/* Entry: 103345be0; end: 103345de7;  */

undefined * FUN_103345be0(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_d8 [104];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  bVar1 = *(byte *)(param_1 + 5);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x000107c61168(PTR_PTR_1126b10a0);
  uVar7 = *param_1;
  func_0x000107c5fadc(uVar7,param_1[1]);
  if ((bVar1 & 1) == 0) {
    func_0x000107c4dfcc(puVar2);
  }
  else {
    func_0x000107c41858();
  }
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  lVar6 = param_1[3];
  if (lVar6 == 0) {
    func_0x000107c61174(puVar2);
    uVar7 = 0;
  }
  else {
    uVar7 = param_1[2];
    func_0x000107c61174(puVar2);
    func_0x000107c5fadc(uVar7,lVar6);
  }
  func_0x000107c5405c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  puVar3 = &UNK_110640850;
  func_0x000107c613fc(&UNK_110640850,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_1106408a0;
  func_0x000107c613fc(&UNK_1106408a0,0x80,7);
  uVar9 = param_1[5];
  uVar8 = param_1[4];
  uVar7 = param_1[6];
  *(undefined8 *)(puVar4 + 0x50) = param_1[7];
  *(undefined8 *)(puVar4 + 0x48) = uVar7;
  uVar7 = param_1[8];
  uVar11 = param_1[0xb];
  uVar10 = param_1[10];
  *(undefined8 *)(puVar4 + 0x60) = param_1[9];
  *(undefined8 *)(puVar4 + 0x58) = uVar7;
  *(undefined8 *)(puVar4 + 0x70) = uVar11;
  *(undefined8 *)(puVar4 + 0x68) = uVar10;
  uVar7 = *param_1;
  uVar11 = param_1[3];
  uVar10 = param_1[2];
  *(undefined8 *)(puVar4 + 0x20) = param_1[1];
  *(undefined8 *)(puVar4 + 0x18) = uVar7;
  *(undefined8 *)(puVar4 + 0x30) = uVar11;
  *(undefined8 *)(puVar4 + 0x28) = uVar10;
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x78) = param_1[0xc];
  *(undefined8 *)(puVar4 + 0x40) = uVar9;
  *(undefined8 *)(puVar4 + 0x38) = uVar8;
  uStack_50 = 0x10334628c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101054b14;
  puStack_58 = &UNK_1106408b8;
  ppuVar5 = &puStack_70;
  puStack_48 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar3 = puStack_48;
  FUN_10333acbc(param_1,auStack_d8);
  func_0x000107c61574(puVar3);
  func_0x000107c3eae8(puVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c60bd0(ppuVar5);
  lVar6 = param_1[0xc];
  if (lVar6 == 0) {
    func_0x000107c61174(puVar2);
    uVar7 = 0;
  }
  else {
    uVar7 = param_1[0xb];
    func_0x000107c61174(puVar2);
    func_0x000107c5fadc(uVar7,lVar6);
  }
  func_0x000107c520f4(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  return puVar2;
}



/* Entry: 103345de8; end: 103345f93;  */

void FUN_103345de8(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_d0 [40];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uStack_58 = *(undefined8 *)(param_3 + 0x38);
    uStack_60 = *(undefined8 *)(param_3 + 0x30);
    uStack_48 = *(undefined8 *)(param_3 + 0x48);
    uStack_50 = *(undefined8 *)(param_3 + 0x40);
    uStack_40 = *(undefined1 *)(param_3 + 0x50);
    lVar1 = 0x112f5b168;
    func_0x0001000285a8(0x112f5b168,&UNK_10dbb3228);
    func_0x000107c613fc();
    uVar6 = *(undefined8 *)(param_3 + 0x38);
    uVar5 = *(undefined8 *)(param_3 + 0x30);
    uVar8 = *(undefined8 *)(param_3 + 0x48);
    uVar7 = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)(lVar1 + 0x18) = 4;
    *(undefined8 *)(lVar1 + 0x10) = 2;
    *(undefined8 *)(lVar1 + 0x28) = uVar6;
    *(undefined8 *)(lVar1 + 0x20) = uVar5;
    *(undefined8 *)(lVar1 + 0x38) = uVar8;
    *(undefined8 *)(lVar1 + 0x30) = uVar7;
    *(undefined1 *)(lVar1 + 0x40) = *(undefined1 *)(param_3 + 0x50);
    *(undefined8 *)(lVar1 + 0x48) = 0xd;
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    *(undefined8 *)(lVar1 + 0x60) = 0;
    *(undefined1 *)(lVar1 + 0x68) = 0xd;
    if (param_1 == 0) {
      FUN_10332df84(&uStack_60,&puStack_a8);
      FUN_103345af8(lVar1);
      func_0x000107c61170(param_2);
      func_0x000107c61574(lVar1);
    }
    else {
      puVar2 = &UNK_110640850;
      func_0x000107c613fc(&UNK_110640850,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_2);
      puVar3 = &UNK_1106408f0;
      func_0x000107c613fc(&UNK_1106408f0,0x20,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(long *)(puVar3 + 0x18) = lVar1;
      uStack_88 = 0x103346298;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_110640908;
      ppuVar4 = &puStack_a8;
      puStack_80 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar2 = puStack_80;
      FUN_10332df84(&uStack_60,auStack_d0);
      func_0x000107c61174(param_1);
      func_0x000107c61574(puVar2);
      func_0x000107c42010(param_1);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 103345f94; end: 103345fef;  */

void FUN_103345f94(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_103345af8(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}


