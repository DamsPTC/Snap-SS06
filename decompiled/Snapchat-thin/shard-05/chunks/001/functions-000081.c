/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103af7dd4; end: 103af7e6b;  */

undefined8 FUN_103af7dd4(undefined8 param_1,long param_2)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    FUN_103af7af8();
    func_0x000107c61170(param_2);
  }
  return param_1;
}



/* Entry: 103af7e6c; end: 103af7f23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af7e6c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112fe98a8;
  if (param_1 != 0) {
    if ((*(long *)(param_1 + _DAT_112fe98a0) != 0) &&
       ((*(byte *)(param_1 + _DAT_112fe98a8) & 1) == 0)) {
      uVar2 = param_1 + _DAT_112fe98b0;
      func_0x000107c61618();
      if (uVar2 != 0) {
        uVar3 = uVar2;
        func_0x000107c49f30();
        if ((uVar3 & 1) == 0) {
          *(undefined1 *)(param_1 + lVar1) = 1;
          func_0x000107c5038c(uVar2);
        }
        func_0x000107c615e8(uVar2);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 103af7f24; end: 103af7faf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af7f24(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (((*(long *)(param_1 + _DAT_112fe98a0) != 0) &&
        ((*(byte *)(param_1 + _DAT_112fe98a8) & 1) == 0)) &&
       ((*(byte *)(param_1 + _DAT_112fe98f0) & 1) == 0)) {
      FUN_103af7768(1,0);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103af7fb0; end: 103af80d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af7fb0(long param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if ((*(long *)(param_1 + _DAT_112fe98a0) == 0) ||
       ((*(byte *)(param_1 + _DAT_112fe98a8) & 1) != 0)) {
      func_0x000107c61170();
    }
    else {
      pcVar1 = "handleInterfaceSizeChange()";
      func_0x0001000c10c0("handleInterfaceSizeChange()");
      func_0x000107c61180();
      puVar2 = &UNK_1106cf5c0;
      func_0x000107c613fc(&UNK_1106cf5c0,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_1);
      uStack_58 = 0x103af9270;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000f6b44;
      puStack_60 = &UNK_1106cf6c8;
      ppuVar3 = &puStack_78;
      puStack_50 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      func_0x000107c61574(puStack_50);
      func_0x000107c4e524(pcVar1);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(param_1);
      func_0x000107c615e8(pcVar1);
    }
  }
  return;
}



/* Entry: 103af80d8; end: 103af8173;  */

void FUN_103af80d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_58,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    FUN_103af7af8();
    func_0x000107c61170(param_5);
    FUN_103af4bac(param_1,param_2,param_3,param_4);
  }
  return;
}



/* Entry: 103af8174; end: 103af8233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af8174(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (((*(long *)(param_1 + _DAT_112fe98a0) != 0) &&
        ((*(byte *)(param_1 + _DAT_112fe98a8) & 1) == 0)) &&
       (*(char *)(param_1 + _DAT_112fe98e8) == '\x01')) {
      uVar1 = param_1 + _DAT_112fe98b0;
      func_0x000107c61618();
      if (uVar1 != 0) {
        uVar2 = uVar1;
        func_0x000107c49f30();
        if ((uVar2 & 1) == 0) {
          func_0x000107c4e598(uVar1);
          FUN_103af7768(1,1);
        }
        func_0x000107c615e8(uVar1);
      }
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103af8234; end: 103af8523;  */

/* WARNING: Possible PIC construction at 0x000103af837c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af8234(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  lVar1 = _DAT_112fe98f0;
  lVar4 = _DAT_112fe98a0;
  ppuVar6 = &puStack_60;
  if ((((*(long *)(unaff_x20 + _DAT_112fe98a0) != 0) &&
       ((*(byte *)(unaff_x20 + _DAT_112fe98a8) & 1) == 0)) &&
      (*(char *)(unaff_x20 + _DAT_112fe98e8) == '\x01')) &&
     ((*(byte *)(unaff_x20 + _DAT_112fe98f0) & 1) == 0)) {
    uVar2 = unaff_x20 + _DAT_112fe98b0;
    func_0x000107c61618();
    if (uVar2 != 0) {
      uVar3 = uVar2;
      func_0x000107c49f30();
      if ((uVar3 & 1) == 0) {
        *(undefined1 *)(unaff_x20 + lVar1) = 1;
        lVar4 = *(long *)(unaff_x20 + lVar4);
        if (lVar4 != 0) {
          func_0x000107c61174();
          FUN_103af5c5c();
          func_0x000107c61170(lVar4);
        }
        puVar5 = &UNK_1106cf5c0;
        func_0x000107c613fc(&UNK_1106cf5c0,0x18,7);
        func_0x000107c61614(puVar5 + 0x10,unaff_x20);
        uStack_40 = 0x103af9268;
        puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_58 = 0x42000000;
        puStack_50 = &UNK_100f7177c;
        puStack_48 = &UNK_1106cf6a0;
        puStack_38 = puVar5;
        func_0x000107c60bc4(&puStack_60);
        func_0x000107c61574(puStack_38);
        func_0x000107c3e798(uVar2);
        func_0x000107c60bd0(ppuVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 103af8524; end: 103af854f;  */

void FUN_103af8524(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c49820();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 103af8550; end: 103af86ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af8550(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = param_2 + 0x10;
  if (*param_1 == 2) {
    func_0x000107c61428(lVar1,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    lVar1 = _DAT_112fe98a8;
    if (param_2 == 0) {
      return;
    }
    if ((*(long *)(param_2 + _DAT_112fe98a0) != 0) &&
       ((*(byte *)(param_2 + _DAT_112fe98a8) & 1) == 0)) {
      uVar2 = param_2 + _DAT_112fe98b0;
      func_0x000107c61618();
      if (uVar2 != 0) {
        uVar3 = uVar2;
        func_0x000107c49f30();
        if ((uVar3 & 1) == 0) {
          *(undefined1 *)(param_2 + lVar1) = 1;
          func_0x000107c5038c(uVar2);
        }
        else {
          FUN_103af7768(0,0);
        }
        func_0x000107c61170(param_2);
        func_0x000107c615e8(uVar2);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    func_0x000107c61428(lVar1,auStack_48,0,0);
    lVar1 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + _DAT_112fe98e8) = 1;
      func_0x000107c61170();
    }
    func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
    lVar1 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      if (*(long *)(lVar1 + _DAT_112fe98d8) != 0) {
        func_0x000107c61174(*(long *)(lVar1 + _DAT_112fe98d8));
        func_0x000107c61170(lVar1);
        FUN_103af3e30(1);
      }
      func_0x000107c61170();
    }
    func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    FUN_103af8700();
  }
  else {
    func_0x000107c61428(lVar1,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    FUN_103af7768(0,0);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 103af8700; end: 103af8a53;  */

/* WARNING: Possible PIC construction at 0x000103af8950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103af89fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103af8a24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103af8a00) */
/* WARNING: Removing unreachable block (ram,0x000103af8954) */
/* WARNING: Removing unreachable block (ram,0x000103af8a28) */
/* WARNING: Removing unreachable block (ram,0x000103af8a34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af8700(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  lVar9 = *(long *)(unaff_x20 + _DAT_112fe98a0);
  if ((lVar9 != 0) && ((*(byte *)(unaff_x20 + _DAT_112fe98a8) & 1) == 0)) {
    lVar1 = unaff_x20 + _DAT_112fe98b0;
    func_0x000107c61618();
    if (lVar1 != 0) {
      if ((*(byte *)(unaff_x20 + _DAT_112fe98e0) & 1) == 0) {
        *(undefined1 *)(unaff_x20 + _DAT_112fe98e0) = 1;
        func_0x000107c61174();
        lVar2 = lVar1;
        func_0x000107c497a4();
        func_0x000107c61180();
        lVar10 = *(long *)(unaff_x20 + _DAT_112fe98d8);
        lVar3 = lVar10;
        func_0x000107c61174(lVar10);
        lVar4 = lVar2;
        func_0x000107c4aba4(lVar2);
        func_0x000107c61180();
        func_0x000107c539d4(0x4048000000000000);
        func_0x000107c61170(lVar4);
        lVar4 = lVar2;
        func_0x000107c4aba4(lVar2);
        func_0x000107c61180();
        func_0x000107c562fc();
        func_0x000107c61170(lVar4);
        func_0x000107c6088c(&puStack_80,0x3fdae147ae147ae1,0x3fdae147ae147ae1);
        func_0x000107c5a03c(lVar2);
        if (lVar10 != 0) {
          lVar4 = lVar3;
          func_0x000107c61174(lVar3);
          FUN_103af3a80();
          func_0x000107c61170(lVar4);
        }
        lVar4 = lVar2;
        func_0x000107c5e3f8();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c526c0(0x3ff0000000000000,lVar2);
          puVar6 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
          func_0x000107c61168();
          func_0x000107c40efc();
          func_0x000107c61180();
          puVar7 = puVar6;
          func_0x000107c5d9bc();
          func_0x000107c61170(puVar6);
          uVar8 = 0x3fe3333333333333;
          if (puVar7 != (undefined *)0x1) {
            uVar8 = 0x3fe0000000000000;
          }
          func_0x000107c6088c(&puStack_80,uVar8,uVar8);
          func_0x000107c5a03c(lVar2);
          if (lVar10 != 0) {
            func_0x000107c61174(lVar3);
            FUN_103af3c90();
          }
        }
        else {
          func_0x000107c61170();
          puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
          func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
          puVar6 = &UNK_1106cf660;
          func_0x000107c613fc(&UNK_1106cf660,0x28,7);
          *(long *)(puVar6 + 0x10) = lVar9;
          *(long *)(puVar6 + 0x18) = lVar2;
          *(long *)(puVar6 + 0x20) = lVar10;
          pcStack_60 = FUN_103af925c;
          puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_78 = 0x42000000;
          puStack_70 = &UNK_1000f6b44;
          puStack_68 = &UNK_1106cf678;
          puStack_58 = puVar6;
          func_0x000107c60bc4(&puStack_80);
          puVar6 = puStack_58;
          func_0x000107c61174(lVar9);
          func_0x000107c61174(lVar3);
          func_0x000107c61174(lVar2);
          func_0x000107c61574(puVar6);
          func_0x000107c3dcd8(0x3fb999999999999a,0,0x3fe999999999999a,0x3fc999999999999a,puVar7);
          func_0x000107c60bd0(ppuVar5);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 103af8a54; end: 103af8aab;  */

void FUN_103af8a54(long param_1,code *param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    (*param_2)();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103af8aac; end: 103af8b5b;  */

void FUN_103af8aac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [48];
  
  func_0x000107c526c0(0x3ff0000000000000,param_2);
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c61168();
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5d9bc();
  func_0x000107c61170(puVar1);
  uVar3 = 0x3fe3333333333333;
  if (puVar2 != (undefined *)0x1) {
    uVar3 = 0x3fe0000000000000;
  }
  func_0x000107c6088c(auStack_60,uVar3,uVar3);
  func_0x000107c5a03c(param_2);
  if (param_3 != 0) {
    FUN_103af3c90();
  }
  return;
}



/* Entry: 103af8b5c; end: 103af8bb7;  */

void FUN_103af8b5c(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_103af7768(0,0);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103af8bb8; end: 103af8c57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af8bb8(undefined8 param_1,long param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if ((*(char *)(param_2 + _DAT_112fe98f0) == '\x01') &&
       (*(long *)(param_2 + _DAT_112fe98d8) != 0)) {
      func_0x000107c61174(*(long *)(param_2 + _DAT_112fe98d8));
      FUN_103af3fb8(param_1,1);
      func_0x000107c61170(param_2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 103af8c58; end: 103af8d43; -[SCSnapBackPresenter handleExpandTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af8c58(long param_1)

{
  if (((*(long *)(param_1 + _DAT_112fe98a0) != 0) &&
      ((*(byte *)(param_1 + _DAT_112fe98a8) & 1) == 0)) &&
     (*(char *)(param_1 + _DAT_112fe98f0) != '\x01')) {
    func_0x000107c61174();
    FUN_103af7768(1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 103af8d44; end: 103af8df3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af8d44(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,long param_5)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  if (param_2 != 0) {
    func_0x000107c4aba4(param_3);
    func_0x000107c61180();
    func_0x000107c562fc();
    func_0x000107c61170(param_3);
  }
  if ((param_4 & 1) != 0) {
    func_0x000107c61428(param_5 + 0x10,auStack_48,0,0);
    param_5 = param_5 + 0x10;
    func_0x000107c61618();
    if (param_5 != 0) {
      lVar1 = param_5 + _DAT_112fe98b0;
      func_0x000107c61618();
      func_0x000107c61170(param_5);
      if (lVar1 != 0) {
        func_0x000107c5cf48(lVar1);
        func_0x000107c615e8(lVar1);
      }
    }
  }
  return;
}



/* Entry: 103af8df4; end: 103af8e53; -[SCSnapBackPresenter init] */

void FUN_103af8df4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraSnapBackPresentation.SnapBackPresenter",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103af8e20);
  (*pcVar1)();
}



/* Entry: 103af8e54; end: 103af8f0b; -[SCSnapBackPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103af8eb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103af8eb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af8e54(long param_1)

{
  FUN_103af9124(param_1 + _DAT_112fe98b0);
  func_0x000107c61610(param_1 + _DAT_112fe98b8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fe9918));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fe9920));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fe9930));
  return;
}



/* Entry: 103af8f0c; end: 103af8f13; -[SCSnapBackPresenter gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_103af8f0c(void)

{
  return 1;
}



/* Entry: 103af8f14; end: 103af9123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af8f14(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000107c614f0();
  lVar5 = _DAT_112fe98b0;
  func_0x000107c61614(unaff_x20 + _DAT_112fe98b0,0);
  lVar2 = _DAT_112fe98b8;
  func_0x000107c61614(unaff_x20 + _DAT_112fe98b8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fe98a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fe98c0) = 0;
  lVar3 = _DAT_112fe98c8;
  uVar4 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar4;
  *(undefined1 *)(unaff_x20 + _DAT_112fe98a8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fe98d0) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112fe98d8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fe98e0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fe98e8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fe98f0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe98f8);
  uVar4 = *(undefined8 *)PTR__CGRectNull_1103475e8;
  uVar7 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
  uVar6 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
  puVar1[1] = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
  *puVar1 = uVar4;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe9900);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe9908);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112fe9910) = 2;
  func_0x000107c61604(unaff_x20 + lVar5,param_1);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  *(long *)(unaff_x20 + _DAT_112fe9918) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fe9920) = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_3;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c615e8(param_3);
  }
  *(long *)(unaff_x20 + _DAT_112fe9928) = lVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112fe9930) = param_5;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103af9124; end: 103af9147;  */

undefined8 FUN_103af9124(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103af9148; end: 103af9167;  */

void FUN_103af9148(void)

{
  func_0x000107c61168(&PTR_PTR_112926cf8);
  return;
}



/* Entry: 103af9168; end: 103af91d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af9168(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    uStack_50 = 0x3ff0000000000000;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0x3ff0000000000000;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c5a03c(uVar1,uVar1,&uStack_50);
    func_0x000107c4aba4(uVar1);
    func_0x000107c61180();
    func_0x000107c539d4(0);
    func_0x000107c61170(uVar1);
  }
  if (lVar2 != 0) {
    func_0x000107c526c0(0,*(undefined8 *)(lVar2 + _DAT_112fe9780));
  }
  return;
}



/* Entry: 103af91d8; end: 103af91f7;  */

void FUN_103af91d8(void)

{
  FUN_103af8a54();
  return;
}



/* Entry: 103af91f8; end: 103af9207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af91f8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112fe98f0;
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + _DAT_112fe98f0) == '\x01') {
      lVar2 = lVar1 + _DAT_112fe98b0;
      func_0x000107c61618();
      if (lVar2 != 0) {
        *(undefined1 *)(lVar1 + lVar3) = 0;
        lVar3 = *(long *)(lVar1 + _DAT_112fe98d8);
        if (lVar3 != 0) {
          uVar4 = *(undefined8 *)(lVar3 + _DAT_112fe9788);
          func_0x000107c61174();
          func_0x000107c550d8(uVar4);
          func_0x000107c4fe68(*(undefined8 *)(lVar3 + _DAT_112fe9780));
          func_0x000107c61170(lVar3);
        }
        func_0x000107c42830(lVar2);
        FUN_103af7768(1,1);
        func_0x000107c615e8(lVar2);
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103af9208; end: 103af925b;  */

void FUN_103af9208(void)

{
  FUN_103af8a54();
  return;
}



/* Entry: 103af925c; end: 103af92b3;  */

void FUN_103af925c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_60 [48];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c526c0(0x3ff0000000000000,uVar1);
  puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c61168();
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5d9bc();
  func_0x000107c61170(puVar2);
  uVar5 = 0x3fe3333333333333;
  if (puVar3 != (undefined *)0x1) {
    uVar5 = 0x3fe0000000000000;
  }
  func_0x000107c6088c(auStack_60,uVar5,uVar5);
  func_0x000107c5a03c(uVar1);
  if (lVar4 != 0) {
    FUN_103af3c90();
  }
  return;
}



/* Entry: 103af92b4; end: 103af935f;  */

void FUN_103af92b4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103af9360; end: 103af9397;  */

void FUN_103af9360(long *param_1,long *param_2)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = *param_2;
  uVar1 = (undefined1)(0x100 >> (ulong)(((uint)(lVar2 + 1U) & 3) << 3));
  if (3 < lVar2 + 1U) {
    lVar2 = 0;
    uVar1 = 1;
  }
  *param_1 = lVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}



/* Entry: 103af9398; end: 103af940b;  */

void FUN_103af9398(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000103af9f6c(uVar1,param_2[1],0x112fe9d80);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103af940c; end: 103af9417; +[SCCameraSnapBackFromFriendsFeedExperiment isEnabledWithCircumstanceEngine:] */

uint FUN_103af940c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  FUN_103af9c9c(param_3);
  func_0x000107c615e8(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 103af9418; end: 103af9497;  */

double FUN_103af9418(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  double dVar3;
  
  if (param_1 == 0) {
    dVar3 = -1.0;
  }
  else {
    func_0x000107c615f0();
    uVar1 = 0xd000000000000039;
    func_0x000107c5fadc(0xd000000000000039,0x800000010f19dcb0);
    fVar2 = -1.0;
    func_0x000107c436e4(0xbf800000,param_1);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(param_1);
    dVar3 = (double)fVar2;
  }
  return dVar3;
}



/* Entry: 103af9498; end: 103af951b; +[SCCameraSnapBackFromFriendsFeedExperiment snapBackQuickTapDismissTimeoutWithCircumstanceEngine:] */

double FUN_103af9498(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  if (param_3 != 0) {
    func_0x000107c615f0(param_3);
    uVar1 = 0xd000000000000039;
    func_0x000107c5fadc(0xd000000000000039,0x800000010f19dcb0);
    fVar2 = -1.0;
    func_0x000107c436e4(0xbf800000,param_3);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(param_3);
    return (double)fVar2;
  }
  return -1.0;
}



/* Entry: 103af951c; end: 103af958f;  */

void FUN_103af951c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000103af9f6c(uVar1,param_2[1],0x112fe9d10);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103af9590; end: 103af9593;  */

long FUN_103af9590(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112fe99b0,auStack_48,0,0);
  if (cRam0000000112fe99b0 != '\0') {
    if (cRam0000000112fe99b0 == '\x01') {
      return 1;
    }
    if (param_1 != 0) {
      func_0x000107c615f0(param_1);
      uVar1 = 0xd000000000000033;
      func_0x000107c5fadc(0xd000000000000033,0x800000010f19dd80);
      lVar2 = param_1;
      func_0x000107c3ebd4(param_1);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(uVar1);
      return lVar2;
    }
  }
  return 0;
}



/* Entry: 103af9594; end: 103af959f; +[SCCameraSnapBackFromFriendsFeedExperiment snapBackFasterDismissEnabledWithCircumstanceEngine:] */

uint FUN_103af9594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  (*(code *)0x103af9d5c)(param_3);
  func_0x000107c615e8(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 103af95a0; end: 103af9807;  */

void FUN_103af95a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0xea00000000007765;
  uVar5 = 0x6976207465736e49;
  if (bVar4 != 2) {
    uVar3 = 0xeb00000000422f41;
    uVar5 = 0x2074636570736552;
  }
  uVar1 = 0x64656c6261736944;
  if (bVar4 != 0) {
    uVar1 = 0x746c7561666544;
  }
  uVar2 = 0xe800000000000000;
  if (bVar4 != 0) {
    uVar2 = 0xe700000000000000;
  }
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 103af9808; end: 103af991b;  */

void FUN_103af9808(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar3 = 0xea00000000007765;
  uVar5 = 0x6976207465736e49;
  if (bVar4 != 2) {
    uVar3 = 0xeb00000000422f41;
    uVar5 = 0x2074636570736552;
  }
  uVar1 = 0x64656c6261736944;
  if (bVar4 != 0) {
    uVar1 = 0x746c7561666544;
  }
  uVar2 = 0xe800000000000000;
  if (bVar4 != 0) {
    uVar2 = 0xe700000000000000;
  }
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  *param_1 = uVar5;
  param_1[1] = uVar3;
  return;
}



/* Entry: 103af991c; end: 103af995b;  */

void FUN_103af991c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112fe99f0;
  func_0x0001000285a8(0x112fe99f0,&UNK_10dc51b40);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103af995c; end: 103af995f;  */

undefined8 FUN_103af995c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112fe99f8,auStack_48,0,0);
  if (bRam0000000112fe99f8 < 2) {
    uVar2 = 0xffffffffffffffff;
    if (bRam0000000112fe99f8 != 0) {
      uVar2 = 1;
    }
  }
  else if (bRam0000000112fe99f8 == 2) {
    uVar2 = 2;
  }
  else if (param_1 == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    func_0x000107c615f0(param_1);
    uVar2 = 0xd00000000000002f;
    func_0x000107c5fadc(0xd00000000000002f,0x800000010f19dd30);
    lVar3 = param_1;
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(param_1);
    uVar1 = 0xffffffffffffffff;
    if ((int)lVar3 == 1) {
      uVar1 = 1;
    }
    uVar2 = 2;
    if ((int)lVar3 != 2) {
      uVar2 = uVar1;
    }
  }
  return uVar2;
}



/* Entry: 103af9960; end: 103af9bdf; +[SCCameraSnapBackFromFriendsFeedExperiment snapBackPresentationStyleWithCircumstanceEngine:] */

undefined8 FUN_103af9960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  FUN_103af9e80(param_3);
  func_0x000107c615e8(param_3);
  return uVar1;
}



/* Entry: 103af9be0; end: 103af9beb; +[SCCameraSnapBackFromFriendsFeedExperiment snapBackDefaultFrontPositionEnabledWithCircumstanceEngine:] */

uint FUN_103af9be0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  (*(code *)0x103af9fd8)(param_3);
  func_0x000107c615e8(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 103af9bec; end: 103af9c2b;  */

uint FUN_103af9bec(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  (*param_4)(param_3);
  func_0x000107c615e8(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 103af9c2c; end: 103af9c67; -[SCCameraSnapBackFromFriendsFeedExperiment init] */

void FUN_103af9c2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103afa098();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103af9c68; end: 103af9c97;  */

void FUN_103af9c68(void)

{
  FUN_103afa098();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103af9c98; end: 103af9c9b; -[SCCameraSnapBackFromFriendsFeedExperiment .cxx_destruct] */

void FUN_103af9c98(void)

{
  return;
}



/* Entry: 103af9c9c; end: 103af9e1b;  */

long FUN_103af9c9c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112fe9968,auStack_48,0,0);
  if (cRam0000000112fe9968 != '\0') {
    if (cRam0000000112fe9968 == '\x01') {
      return 1;
    }
    if (param_1 != 0) {
      func_0x000107c615f0(param_1);
      uVar1 = 0xd000000000000024;
      func_0x000107c5fadc(0xd000000000000024,0x800000010f19ddc0);
      lVar2 = param_1;
      func_0x000107c3ebd4(param_1);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(uVar1);
      return lVar2;
    }
  }
  return 0;
}



/* Entry: 103af9e1c; end: 103af9e7f;  */

ulong FUN_103af9e1c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 103af9e80; end: 103afa097;  */

undefined8 FUN_103af9e80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112fe99f8,auStack_48,0,0);
  if (bRam0000000112fe99f8 < 2) {
    uVar2 = 0xffffffffffffffff;
    if (bRam0000000112fe99f8 != 0) {
      uVar2 = 1;
    }
  }
  else if (bRam0000000112fe99f8 == 2) {
    uVar2 = 2;
  }
  else if (param_1 == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    func_0x000107c615f0(param_1);
    uVar2 = 0xd00000000000002f;
    func_0x000107c5fadc(0xd00000000000002f,0x800000010f19dd30);
    lVar3 = param_1;
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(param_1);
    uVar1 = 0xffffffffffffffff;
    if ((int)lVar3 == 1) {
      uVar1 = 1;
    }
    uVar2 = 2;
    if ((int)lVar3 != 2) {
      uVar2 = uVar1;
    }
  }
  return uVar2;
}



/* Entry: 103afa098; end: 103afa0b7;  */

void FUN_103afa098(void)

{
  func_0x000107c61168(&PTR_PTR_112926e48);
  return;
}



/* Entry: 103afa0b8; end: 103afa0bb;  */

void FUN_103afa0b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe9a80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc51b60;
  func_0x000107c61520(&UNK_10dc51b60,&UNK_1106cf800);
  puRam0000000112fe9a80 = puVar1;
  return;
}



/* Entry: 103afa0bc; end: 103afa0fb;  */

void FUN_103afa0bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe9a80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc51b60;
  func_0x000107c61520(&UNK_10dc51b60,&UNK_1106cf800);
  puRam0000000112fe9a80 = puVar1;
  return;
}



/* Entry: 103afa0fc; end: 103afa0ff;  */

void FUN_103afa0fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe9a88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc51c00;
  func_0x000107c61520(&UNK_10dc51c00,&UNK_1106cf8b0);
  puRam0000000112fe9a88 = puVar1;
  return;
}



/* Entry: 103afa100; end: 103afa13f;  */

void FUN_103afa100(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe9a88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc51c00;
  func_0x000107c61520(&UNK_10dc51c00,&UNK_1106cf8b0);
  puRam0000000112fe9a88 = puVar1;
  return;
}



/* Entry: 103afa140; end: 103afa153;  */

void FUN_103afa140(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103afa154();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103afa194)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103afa154; end: 103afa1ff;  */

void FUN_103afa154(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe9a90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc51cc8;
  func_0x000107c61520(&UNK_10dc51cc8,&UNK_1106cf8b0);
  puRam0000000112fe9a90 = puVar1;
  return;
}



/* Entry: 103afa200; end: 103afa203;  */

void FUN_103afa200(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe9ab0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc51d00;
  func_0x000107c61520(&UNK_10dc51d00,&UNK_1106cf960);
  puRam0000000112fe9ab0 = puVar1;
  return;
}



/* Entry: 103afa204; end: 103afa243;  */

void FUN_103afa204(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe9ab0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc51d00;
  func_0x000107c61520(&UNK_10dc51d00,&UNK_1106cf960);
  puRam0000000112fe9ab0 = puVar1;
  return;
}



/* Entry: 103afa244; end: 103afa257;  */

void FUN_103afa244(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103afa258();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103afa298)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103afa258; end: 103afa303;  */

void FUN_103afa258(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe9ab8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc51dc8;
  func_0x000107c61520(&UNK_10dc51dc8,&UNK_1106cf960);
  puRam0000000112fe9ab8 = puVar1;
  return;
}



/* Entry: 103afa304; end: 103afa307;  */

void FUN_103afa304(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe9ad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc51e00;
  func_0x000107c61520(&UNK_10dc51e00,&UNK_1106cfa10);
  puRam0000000112fe9ad8 = puVar1;
  return;
}



/* Entry: 103afa308; end: 103afa347;  */

void FUN_103afa308(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe9ad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc51e00;
  func_0x000107c61520(&UNK_10dc51e00,&UNK_1106cfa10);
  puRam0000000112fe9ad8 = puVar1;
  return;
}



/* Entry: 103afa348; end: 103afa35b;  */

void FUN_103afa348(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103afa35c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103afa39c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103afa35c; end: 103afa407;  */

void FUN_103afa35c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe9ae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc51ec8;
  func_0x000107c61520(&UNK_10dc51ec8,&UNK_1106cfa10);
  puRam0000000112fe9ae0 = puVar1;
  return;
}



/* Entry: 103afa408; end: 103afa40b;  */

void FUN_103afa408(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe9b00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc51f00;
  func_0x000107c61520(&UNK_10dc51f00,&UNK_1106cfac0);
  puRam0000000112fe9b00 = puVar1;
  return;
}



/* Entry: 103afa40c; end: 103afa44b;  */

void FUN_103afa40c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe9b00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc51f00;
  func_0x000107c61520(&UNK_10dc51f00,&UNK_1106cfac0);
  puRam0000000112fe9b00 = puVar1;
  return;
}



/* Entry: 103afa44c; end: 103afa45f;  */

void FUN_103afa44c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103afa490();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103afa4d0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103afa460; end: 103afa48f;  */

void FUN_103afa460(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103afa490; end: 103afa53b;  */

void FUN_103afa490(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe9b08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc51fc8;
  func_0x000107c61520(&UNK_10dc51fc8,&UNK_1106cfac0);
  puRam0000000112fe9b08 = puVar1;
  return;
}



/* Entry: 103afa53c; end: 103afa57f;  */

void FUN_103afa53c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103afa580; end: 103afa923;  */

undefined1  [16] FUN_103afa580(void)

{
  return ZEXT816(0x1106cf800);
}



/* Entry: 103afa924; end: 103afa9cb; -[SCModularCallOnCameraHandler isModularCallUIShown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103afa924(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = _DAT_112fe9de8;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112fe9de8);
  lVar3 = param_1;
  func_0x000107c61174();
  func_0x000107c4b940(uVar4);
  uVar1 = *(undefined1 *)(lVar3 + _DAT_112fe9df0);
  func_0x000107c5d278(*(undefined8 *)(param_1 + lVar2));
  func_0x000107c61170(lVar3);
  return uVar1;
}



/* Entry: 103afa9cc; end: 103afaa73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afa9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fe9de8);
  func_0x000107c4b940(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fe9e10);
  *(undefined8 *)(unaff_x20 + _DAT_112fe9e10) = param_1;
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fe9e18);
  *(undefined8 *)(unaff_x20 + _DAT_112fe9e18) = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fe9e20);
  *(undefined8 *)(unaff_x20 + _DAT_112fe9e20) = param_3;
  func_0x000107c61174(param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 103afaa74; end: 103afab03; -[SCModularCallOnCameraHandler setRecordedVideo:captureConfiguration:managedCapturerState:] */

/* WARNING: Possible PIC construction at 0x000103afaad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103afaae8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103afaadc) */
/* WARNING: Removing unreachable block (ram,0x000103afaaec) */

void FUN_103afaa74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_103afa9cc(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103afab04; end: 103afabbb;  */

/* WARNING: Possible PIC construction at 0x000103afab3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103afab40) */
/* WARNING: Removing unreachable block (ram,0x000103afab54) */
/* WARNING: Removing unreachable block (ram,0x000103afab64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afab04(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fe9de8);
  func_0x000107c4b940(uVar1);
  *(undefined1 *)(unaff_x20 + _DAT_112fe9df0) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 103afabbc; end: 103afac1b; -[SCModularCallOnCameraHandler init] */

void FUN_103afabbc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCModularCallOnCameraHandler.SCModularCallOnCameraHandler",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103afabe8);
  (*pcVar1)();
}



/* Entry: 103afac1c; end: 103afacb3; -[SCModularCallOnCameraHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103afac48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103afac78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103afac98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103afac7c) */
/* WARNING: Removing unreachable block (ram,0x000103afac4c) */
/* WARNING: Removing unreachable block (ram,0x000103afac9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afac1c(long param_1)

{
  func_0x000100d66700(param_1 + _DAT_112fe9df8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe9e28));
  return;
}



/* Entry: 103afacb4; end: 103afacd3;  */

void FUN_103afacb4(void)

{
  func_0x000107c61168(&PTR_PTR_112926ef8);
  return;
}



/* Entry: 103afacd4; end: 103afacf7;  */

void FUN_103afacd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 103afacf8; end: 103afafff;  */

void FUN_103afacf8(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
    func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[2]);
    return;
  }
  return;
}



/* Entry: 103afb000; end: 103afb0ab;  */

void FUN_103afb000(void)

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



/* Entry: 103afb0ac; end: 103afb0eb;  */

void FUN_103afb0ac(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 103afb0ec; end: 103afb147; -[SCMemoriesSnapFeedNotficationModel description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afb0ec(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_112fe9e58) != '\x01') {
    if (*(long *)(param_1 + _DAT_112fe9e60) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103afb144);
      (*pcVar1)();
    }
    if (*(long *)(param_1 + _DAT_112fe9e68 + 8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103afb148);
      (*pcVar1)();
    }
  }
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103afb148; end: 103afb18f; -[SCMemoriesSnapFeedNotficationModel init] */

void FUN_103afb148(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMemoriesSnapFeedNotficationModel/MemoriesSnapFeedNotficationModelWrapper.swift"
                      ,0x50,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103afb190);
  (*pcVar1)();
}



/* Entry: 103afb190; end: 103afb193; -[SCMemoriesSnapFeedNotficationModel copyWithZone:] */

void FUN_103afb190(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103afb194; end: 103afb22b; +[SCMemoriesSnapFeedNotficationModel itemNotificationModelWithThumbnail:playbackItemId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afb194(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  func_0x000107c5faec();
  lVar3 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_112fe9e58) = 0;
  *(undefined8 *)(lVar3 + _DAT_112fe9e60) = param_3;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112fe9e68);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103afb22c; end: 103afb30f; +[SCMemoriesSnapFeedNotficationModel resetNotificationModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afb22c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112fe9e58) = 1;
  *(undefined8 *)(lVar2 + _DAT_112fe9e60) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112fe9e68);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103afb310; end: 103afb3d3; -[SCMemoriesSnapFeedNotficationModel matchItemNotificationModel:resetNotificationModel:] */

/* WARNING: Possible PIC construction at 0x000103afb3b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103afb3b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afb310(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + _DAT_112fe9e58) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103afb350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4);
    return;
  }
  lVar2 = *(long *)(param_1 + _DAT_112fe9e60);
  if (lVar2 != 0) {
    lVar3 = ((undefined8 *)(param_1 + _DAT_112fe9e68))[1];
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + _DAT_112fe9e68);
      func_0x000107c61174();
      func_0x000107c5fadc(uVar4,lVar3);
      (**(code **)(param_3 + 0x10))(param_3,lVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103afb3d4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103afb3d0);
  (*pcVar1)();
}



/* Entry: 103afb3d4; end: 103afb407;  */

void FUN_103afb3d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103afb408; end: 103afb443; -[SCMemoriesSnapFeedNotficationModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afb408(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fe9e60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fe9e68 + 8))
  ;
  return;
}



/* Entry: 103afb444; end: 103afb5ab;  */

int FUN_103afb444(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103afb4c0;
        goto LAB_103afb4a4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103afb4a4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103afb4c0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103afb5ac; end: 103afb5eb;  */

void FUN_103afb5ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe9e98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc521f8;
  func_0x000107c61520(&UNK_10dc521f8,&UNK_1106cfe80);
  puRam0000000112fe9e98 = puVar1;
  return;
}



/* Entry: 103afb5ec; end: 103afb7df;  */

void FUN_103afb5ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 < -0x4000000000000000) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRetain_11034f540)(param_3);
    return;
  }
  return;
}



/* Entry: 103afb7e0; end: 103afb843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afb7e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fe9ea0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fe9ea8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103afb844; end: 103afb8a3; -[_TtC28CameraModeActivationServices28CameraModeActivationServices init] */

void FUN_103afb844(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameraModeActivationServices.CameraModeActivationServices",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103afb870);
  (*pcVar1)();
}



/* Entry: 103afb8a4; end: 103afb8db; -[_TtC28CameraModeActivationServices28CameraModeActivationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afb8a4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fe9ea0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe9ea8));
  return;
}



/* Entry: 103afb8dc; end: 103afb8f3;  */

bool FUN_103afb8dc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103afb8f4; end: 103afb933;  */

void FUN_103afb8f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe9ed8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc52320;
  func_0x000107c61520(&UNK_10dc52320,&UNK_1106d00d0);
  puRam0000000112fe9ed8 = puVar1;
  return;
}



/* Entry: 103afb934; end: 103afb9df;  */

void FUN_103afb934(void)

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



/* Entry: 103afb9e0; end: 103afbb57;  */

void FUN_103afb9e0(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}


