/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036d5994; end: 1036d5abb;  */

void FUN_1036d5994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c526c0(0x3ff0000000000000);
  uStack_80 = 0x3ff0000000000000;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x000107c5a03c(param_5);
  uVar1 = param_1;
  func_0x000107c609bc(param_1,param_2,param_3,param_4);
  uVar2 = param_1;
  func_0x000107c609c0(param_1,param_2,param_3,param_4);
  func_0x000107c532b4(uVar1,uVar2,param_5);
  func_0x000107c4aba4(param_5);
  func_0x000107c61180();
  func_0x000107c539d4(0);
  func_0x000107c61170(param_5);
  func_0x000107c61428(param_6 + 0x10,&uStack_80,0,0);
  if (*(long *)(param_6 + 0x10) != 0) {
    func_0x000107c54b80(param_1,param_2,param_3,param_4);
  }
  func_0x000107c61428(param_6 + 0x10,auStack_98,0,0);
  if (*(long *)(param_6 + 0x10) != 0) {
    func_0x000107c526c0(0);
  }
  return;
}



/* Entry: 1036d5abc; end: 1036d5b47;  */

void FUN_1036d5abc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  if (*(long *)(param_2 + 0x10) != 0) {
    func_0x000107c4ff34();
  }
  func_0x000107c4aba4(param_3);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(param_3);
  func_0x000107c5cf60(param_4);
  func_0x000107c3fef0(param_4);
  return;
}



/* Entry: 1036d5b48; end: 1036d5b8f; -[_TtC32SCLensPlusServicesImplementation36ImagineLensSourceRectPresentAnimator animateTransition:] */

void FUN_1036d5b48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1036d5488(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036d5b90; end: 1036d5bef; -[_TtC32SCLensPlusServicesImplementation36ImagineLensSourceRectPresentAnimator init] */

void FUN_1036d5b90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPlusServicesImplementation.ImagineLensSourceRectPresentAnimator",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036d5bbc);
  (*pcVar1)();
}



/* Entry: 1036d5bf0; end: 1036d5bff; -[_TtC32SCLensPlusServicesImplementation36ImagineLensSourceRectPresentAnimator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1036d5bf0(long param_1)

{
  param_1 = param_1 + _DAT_112f87aa0;
  (*(code *)(undefined *)0x1036d5180)();
  return param_1;
}



/* Entry: 1036d5c00; end: 1036d5c1f;  */

void FUN_1036d5c00(void)

{
  func_0x000107c61168(&PTR_PTR_1128e2628);
  return;
}



/* Entry: 1036d5c20; end: 1036d5c63;  */

void FUN_1036d5c20(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar2 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c526c0(0x3ff0000000000000);
  uStack_80 = 0x3ff0000000000000;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x000107c5a03c(uVar1);
  uVar3 = uVar5;
  func_0x000107c609bc(uVar5,uVar6,uVar7,uVar8);
  uVar4 = uVar5;
  func_0x000107c609c0(uVar5,uVar6,uVar7,uVar8);
  func_0x000107c532b4(uVar3,uVar4,uVar1);
  func_0x000107c4aba4(uVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0);
  func_0x000107c61170(uVar1);
  func_0x000107c61428(lVar2 + 0x10,&uStack_80,0,0);
  if (*(long *)(lVar2 + 0x10) != 0) {
    func_0x000107c54b80(uVar5,uVar6,uVar7,uVar8);
  }
  func_0x000107c61428(lVar2 + 0x10,auStack_98,0,0);
  if (*(long *)(lVar2 + 0x10) != 0) {
    func_0x000107c526c0(0);
  }
  return;
}



/* Entry: 1036d5c64; end: 1036d5d9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d5c64(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar1 = unaff_x20;
  func_0x000107c4f090();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5cf40();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    puVar3 = &UNK_1106823a8;
    func_0x000107c613fc(&UNK_1106823a8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_1106823d0;
    func_0x000107c613fc(&UNK_1106823d0,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    pcStack_50 = FUN_1036d604c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1013c1f34;
    puStack_58 = &UNK_1106823e8;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x000107c3dcb8(lVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,*(undefined8 *)(unaff_x20 + _DAT_112f87ad0),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1036d5d9c; end: 1036d5e13; -[_TtC32SCLensPlusServicesImplementation43ImagineLensSourceRectPresentationController presentationTransitionWillBegin] */

/* WARNING: Possible PIC construction at 0x0001036d5dfc: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d5d9c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c403bc();
  func_0x000107c61180();
  lVar1 = _DAT_112f87ad0;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112f87ad0);
    func_0x000107c3ec60();
    func_0x000107c54b80(uVar3);
    func_0x000107c49778(lVar2,param_2,*(undefined8 *)(param_1 + lVar1),0);
    FUN_1036d5c64(0x3ff0000000000000);
    param_1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036d5e14; end: 1036d5e3f; -[_TtC32SCLensPlusServicesImplementation43ImagineLensSourceRectPresentationController dismissalTransitionWillBegin] */

void FUN_1036d5e14(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1036d5c64(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036d5e40; end: 1036d5e57; -[_TtC32SCLensPlusServicesImplementation43ImagineLensSourceRectPresentationController dismissalTransitionDidEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d5e40(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112f87ad0),PTR_s_removeFromSuperview_112628c78);
    return;
  }
  return;
}



/* Entry: 1036d5e58; end: 1036d5edf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d5e58(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + _DAT_112f87ad0);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_3);
    func_0x000107c526c0(param_1,uVar1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 1036d5ee0; end: 1036d5fe7; -[_TtC32SCLensPlusServicesImplementation43ImagineLensSourceRectPresentationController initWithPresentedViewController:presentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1036d5ee0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lStack_60;
  long lStack_58;
  
  plVar5 = &lStack_60;
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112f87ad0;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3ea80();
  func_0x000107c61180();
  func_0x000107c52b50(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c526c0(0,puVar3);
  func_0x000107c52ab8(puVar3);
  *(undefined **)(param_1 + lVar1) = puVar3;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_initWithPresentedViewController__1125ebc88,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)plVar5;
}



/* Entry: 1036d5fe8; end: 1036d601b;  */

void FUN_1036d5fe8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036d601c; end: 1036d602b; -[_TtC32SCLensPlusServicesImplementation43ImagineLensSourceRectPresentationController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d601c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f87ad0));
  return;
}



/* Entry: 1036d602c; end: 1036d604b;  */

void FUN_1036d602c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e26e8);
  return;
}



/* Entry: 1036d604c; end: 1036d6073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d604c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f87ad0);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c526c0(uVar3,uVar2);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1036d6074; end: 1036d613b;  */

bool FUN_1036d6074(ulong param_1,ulong param_2,double param_3,double param_4,ulong param_5)

{
  bool bVar1;
  
  func_0x000107c609e8();
  if ((param_5 & 1) == 0) {
    func_0x000107c609e4(param_1,param_2,param_3,param_4);
    bVar1 = false;
    if (((((param_5 & 1) == 0) && ((param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000)) &&
        ((param_2 & 0x7fffffffffffffff) < 0x7ff0000000000000)) &&
       ((ulong)ABS(param_3) < 0x7ff0000000000000)) {
      bVar1 = (ulong)ABS(param_4) < 0x7ff0000000000000 && (1.0 < param_4 && 1.0 < param_3);
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1036d613c; end: 1036d631b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d613c(undefined8 param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined1 auStack_98 [24];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = _DAT_112f87b28;
  lVar3 = unaff_x20 + _DAT_112f87b28;
  func_0x000107c61618();
  lVar2 = _DAT_112f87b48;
  if (lVar3 == 0) {
    if ((*(byte *)(unaff_x20 + _DAT_112f87b48) & 1) == 0) {
      lVar3 = unaff_x20 + _DAT_112f87b00;
      func_0x000107c61618();
      if (lVar3 != 0) {
        *(undefined1 *)(unaff_x20 + lVar2) = 1;
        func_0x000107c61604(unaff_x20 + lVar1,param_1);
        *(undefined1 *)(unaff_x20 + _DAT_112f87b50) = 0;
        *(undefined1 *)(unaff_x20 + _DAT_112f87b58) = 0;
        *(undefined1 *)(unaff_x20 + _DAT_112f87b60) = 0;
        FUN_1036d6374(&puStack_80);
        lVar1 = _DAT_112f87b30;
        func_0x000107c61428(unaff_x20 + _DAT_112f87b30,auStack_98,0x21,0);
        FUN_1036d7cc0(&puStack_80,unaff_x20 + lVar1);
        func_0x000107c614a8(auStack_98);
        func_0x000107c5677c(param_1);
        func_0x000107c5a048(param_1);
        puVar4 = &UNK_110682420;
        func_0x000107c613fc(&UNK_110682420,0x18,7);
        func_0x000107c61614(puVar4 + 0x10);
        puVar5 = &UNK_1106825b0;
        func_0x000107c613fc(&UNK_1106825b0,0x28,7);
        *(undefined **)(puVar5 + 0x10) = puVar4;
        *(code **)(puVar5 + 0x18) = param_2;
        *(undefined8 *)(puVar5 + 0x20) = param_3;
        pcStack_60 = FUN_1036d7cfc;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        puStack_70 = &UNK_1000f6b44;
        puStack_68 = &UNK_1106825c8;
        ppuVar6 = &puStack_80;
        puStack_58 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        puVar4 = puStack_58;
        func_0x000100b64c10(param_2,param_3);
        func_0x000107c61574(puVar4);
        func_0x000107c4f018(lVar3);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61170(lVar3);
        return;
      }
    }
  }
  else {
    func_0x000107c61170();
  }
  if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  return;
}



/* Entry: 1036d631c; end: 1036d6373; -[_TtC32SCLensPlusServicesImplementation42ImagineLensSourceRectTransitionUIContainer attachUI:] */

/* WARNING: Possible PIC construction at 0x0001036d635c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036d6360) */

void FUN_1036d631c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036d613c(param_3,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036d6374; end: 1036d64cb;  */

/* WARNING: Possible PIC construction at 0x0001036d63ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d6454: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036d63f0) */
/* WARNING: Removing unreachable block (ram,0x0001036d6458) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d6374(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = unaff_x20 + _DAT_112f87b00;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5e3f8();
      func_0x000107c61180();
      if (lVar1 != 0) goto code_r0x000107c61174;
      func_0x000107c61170(lVar2);
    }
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f87b10);
  uVar4 = *(undefined8 *)PTR__CGRectNull_1103475e8;
  uVar6 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
  uVar5 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
  param_1[1] = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
  *param_1 = uVar4;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  func_0x000107c61614(param_1 + 4,0);
  param_1[5] = uVar3;
code_r0x000107c61174:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1036d64cc; end: 1036d65e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d64cc(long param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    if (param_2 != (code *)0x0) {
      (*param_2)();
    }
  }
  else {
    *(undefined1 *)(param_1 + _DAT_112f87b48) = 0;
    lVar1 = _DAT_112f87b38;
    if (*(long *)(param_1 + _DAT_112f87b38) == 0) {
      lVar2 = param_1 + _DAT_112f87b28;
      func_0x000107c61618();
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x000107c5de64();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        if (lVar3 != 0) {
          puVar4 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
          func_0x000107c610f8();
          func_0x000107c48c2c();
          func_0x000107c53fcc();
          func_0x000107c3d6fc(lVar3);
          func_0x000107c61170(lVar3);
          uVar5 = *(undefined8 *)(param_1 + lVar1);
          *(undefined **)(param_1 + lVar1) = puVar4;
          func_0x000107c61170(uVar5);
        }
      }
    }
    if (param_2 != (code *)0x0) {
      (*param_2)();
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1036d65e8; end: 1036d68f7; -[_TtC32SCLensPlusServicesImplementation42ImagineLensSourceRectTransitionUIContainer attachUI:completion:] */

/* WARNING: Possible PIC construction at 0x0001036d6678: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036d667c) */

void FUN_1036d65e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_110682588;
    func_0x000107c613fc(&UNK_110682588,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    uVar2 = 0x1036d7d1c;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036d613c(param_3,uVar2,puVar1);
  func_0x000100d59ef0(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036d68f8; end: 1036d6a1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d68f8(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112f87b40;
  func_0x000107c61428(unaff_x20 + _DAT_112f87b40,auStack_68,1,0);
  lVar4 = *(long *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = &UNK_110682538;
  func_0x000107c613fc(&UNK_110682538,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar4;
  puVar8 = (undefined8 *)(unaff_x20 + _DAT_112f87b20);
  pcVar5 = (code *)*puVar8;
  if (pcVar5 == (code *)0x0) {
    uVar6 = *(ulong *)(lVar4 + 0x10);
    func_0x000107c61434(lVar4);
    if (uVar6 != 0) {
      uVar7 = 0;
      puVar8 = (undefined8 *)(lVar4 + 0x28);
      do {
        if (*(ulong *)(lVar4 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1036d6a1c);
          (*pcVar5)();
        }
        uVar7 = uVar7 + 1;
        pcVar5 = (code *)puVar8[-1];
        uVar3 = *puVar8;
        func_0x000107c6157c(uVar3);
        (*pcVar5)();
        func_0x000107c61574(uVar3);
        puVar8 = puVar8 + 2;
      } while (uVar6 != uVar7);
    }
    func_0x000107c6142c(lVar4);
    func_0x000107c61574(puVar2);
  }
  else {
    uVar3 = puVar8[1];
    *puVar8 = 0;
    puVar8[1] = 0;
    (*pcVar5)(0x1036d7cb0,puVar2);
    func_0x000107c61574(puVar2);
    func_0x000100d59ef0(pcVar5,uVar3);
  }
  return;
}



/* Entry: 1036d6a1c; end: 1036d6aab;  */

/* WARNING: Possible PIC construction at 0x0001036d6a64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d6a78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036d6a68) */
/* WARNING: Removing unreachable block (ram,0x0001036d6a7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d6a1c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f87b38);
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



/* Entry: 1036d6aac; end: 1036d6b2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d6aac(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c61604(param_1 + _DAT_112f87b28,0);
    *(undefined1 *)(param_1 + _DAT_112f87b50) = 0;
    *(undefined1 *)(param_1 + _DAT_112f87b60) = 1;
    FUN_1036d68f8();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1036d6b30; end: 1036d6bbb; -[_TtC32SCLensPlusServicesImplementation42ImagineLensSourceRectTransitionUIContainer detachUI:] */

void FUN_1036d6b30(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uVar2 = 0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_110682560;
    func_0x000107c613fc(&UNK_110682560,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    uVar2 = 0x1036d7cb8;
  }
  func_0x000107c61174(param_1);
  func_0x0001036d6694(uVar2,puVar1);
  func_0x000100d59ef0(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036d6bbc; end: 1036d6c1b; -[_TtC32SCLensPlusServicesImplementation42ImagineLensSourceRectTransitionUIContainer init] */

void FUN_1036d6bbc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPlusServicesImplementation.ImagineLensSourceRectTransitionUIContainer",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036d6be8);
  (*pcVar1)();
}



/* Entry: 1036d6c1c; end: 1036d6cbb; -[_TtC32SCLensPlusServicesImplementation42ImagineLensSourceRectTransitionUIContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d6c1c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f87b00);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f87b10));
  func_0x000100d59ef0(*(undefined8 *)(param_1 + _DAT_112f87b18),
                      ((undefined8 *)(param_1 + _DAT_112f87b18))[1]);
  func_0x000100d59ef0(*(undefined8 *)(param_1 + _DAT_112f87b20),
                      ((undefined8 *)(param_1 + _DAT_112f87b20))[1]);
  func_0x000107c61610(param_1 + _DAT_112f87b28);
  func_0x0001036d5118(param_1 + _DAT_112f87b30);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f87b38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f87b40));
  return;
}



/* Entry: 1036d6cbc; end: 1036d6cdb;  */

void FUN_1036d6cbc(void)

{
  func_0x000107c61168(&PTR_PTR_1128e27a0);
  return;
}



/* Entry: 1036d6cdc; end: 1036d6d5f; -[_TtC32SCLensPlusServicesImplementation42ImagineLensSourceRectTransitionUIContainer animationControllerForPresentedController:presentingController:sourceController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d6cdc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f87b30;
  func_0x000107c61428(param_1 + _DAT_112f87b30,auStack_48,0,0);
  lVar2 = 0;
  FUN_1036d5c00();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x0001036d7c64(param_1 + lVar1,lVar3 + _DAT_112f87aa0);
  lStack_58 = lVar3;
  lStack_50 = lVar2;
  func_0x000107c61154(&lStack_58,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036d6d60; end: 1036d6de3; -[_TtC32SCLensPlusServicesImplementation42ImagineLensSourceRectTransitionUIContainer animationControllerForDismissedController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d6d60(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f87b30;
  func_0x000107c61428(param_1 + _DAT_112f87b30,auStack_48,0,0);
  lVar2 = 0;
  FUN_1036d5090();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x0001036d7c64(param_1 + lVar1,lVar3 + _DAT_112f87a70);
  lStack_58 = lVar3;
  lStack_50 = lVar2;
  func_0x000107c61154(&lStack_58,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036d6de4; end: 1036d6e1b; -[_TtC32SCLensPlusServicesImplementation42ImagineLensSourceRectTransitionUIContainer presentationControllerForPresentedViewController:presentingViewController:sourceViewController:] */

void FUN_1036d6de4(void)

{
  FUN_1036d602c(0);
  func_0x000107c610f8();
  func_0x000107c4804c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036d6e1c; end: 1036d6f2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d6e1c(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = _DAT_112f87b38;
  if (((*(long *)(unaff_x20 + _DAT_112f87b38) != 0 &&
        param_1 == *(long *)(unaff_x20 + _DAT_112f87b38)) &&
      ((*(byte *)(unaff_x20 + _DAT_112f87b50) & 1) == 0)) &&
     ((*(byte *)(unaff_x20 + _DAT_112f87b58) & 1) == 0)) {
    lVar2 = unaff_x20 + _DAT_112f87b28;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5de64();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1036d6f2c);
        (*pcVar1)();
      }
      lVar2 = lVar3;
      func_0x000107c5c42c();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar2 != 0) {
        lVar4 = *(long *)(unaff_x20 + lVar4);
        if (lVar4 == 0) {
          func_0x000107c61170(lVar2);
        }
        else {
          func_0x000107c61174();
          func_0x000107c5dc98();
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar2);
        }
      }
    }
  }
  return;
}



/* Entry: 1036d6f2c; end: 1036d6f87; -[_TtC32SCLensPlusServicesImplementation42ImagineLensSourceRectTransitionUIContainer gestureRecognizerShouldBegin:] */

uint FUN_1036d6f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1036d6e1c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1036d6f88; end: 1036d701f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d6f88(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f87b28;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4f044();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    uVar3 = 0;
    if (lVar2 != 0) {
      FUN_1036d602c(0);
      lVar1 = lVar2;
      func_0x000107c61480(lVar2,uVar3);
      if (lVar1 == 0) {
        func_0x000107c61170(lVar2);
      }
      else {
        func_0x000107c61174(*(undefined8 *)(lVar1 + _DAT_112f87ad0));
        func_0x000107c61170(lVar2);
      }
    }
  }
  return;
}



/* Entry: 1036d7020; end: 1036d716b;  */

/* WARNING: Possible PIC construction at 0x0001036d71c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d71e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d7210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d7264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d72e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d73f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d7454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d7498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d74a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d70b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d70d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d7108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d7520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d7540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d756c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d76b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036d7570) */
/* WARNING: Removing unreachable block (ram,0x0001036d7574) */
/* WARNING: Removing unreachable block (ram,0x0001036d7544) */
/* WARNING: Removing unreachable block (ram,0x0001036d7548) */
/* WARNING: Removing unreachable block (ram,0x0001036d76e8) */
/* WARNING: Removing unreachable block (ram,0x0001036d7554) */
/* WARNING: Removing unreachable block (ram,0x0001036d7524) */
/* WARNING: Removing unreachable block (ram,0x0001036d7708) */
/* WARNING: Removing unreachable block (ram,0x0001036d7528) */
/* WARNING: Removing unreachable block (ram,0x0001036d710c) */
/* WARNING: Removing unreachable block (ram,0x0001036d7118) */
/* WARNING: Removing unreachable block (ram,0x0001036d711c) */
/* WARNING: Removing unreachable block (ram,0x0001036d7128) */
/* WARNING: Removing unreachable block (ram,0x0001036d712c) */
/* WARNING: Removing unreachable block (ram,0x0001036d714c) */
/* WARNING: Removing unreachable block (ram,0x0001036d7130) */
/* WARNING: Removing unreachable block (ram,0x0001036d7150) */
/* WARNING: Removing unreachable block (ram,0x0001036d70d4) */
/* WARNING: Removing unreachable block (ram,0x0001036d70d8) */
/* WARNING: Removing unreachable block (ram,0x0001036d70b4) */
/* WARNING: Removing unreachable block (ram,0x0001036d7168) */
/* WARNING: Removing unreachable block (ram,0x0001036d70b8) */
/* WARNING: Removing unreachable block (ram,0x0001036d7458) */
/* WARNING: Removing unreachable block (ram,0x0001036d749c) */
/* WARNING: Removing unreachable block (ram,0x0001036d7460) */
/* WARNING: Removing unreachable block (ram,0x0001036d7478) */
/* WARNING: Removing unreachable block (ram,0x0001036d747c) */
/* WARNING: Removing unreachable block (ram,0x0001036d7480) */
/* WARNING: Removing unreachable block (ram,0x0001036d7484) */
/* WARNING: Removing unreachable block (ram,0x0001036d7488) */
/* WARNING: Removing unreachable block (ram,0x0001036d748c) */
/* WARNING: Removing unreachable block (ram,0x0001036d73f8) */
/* WARNING: Removing unreachable block (ram,0x0001036d72ec) */
/* WARNING: Removing unreachable block (ram,0x0001036d7268) */
/* WARNING: Removing unreachable block (ram,0x0001036d7278) */
/* WARNING: Removing unreachable block (ram,0x0001036d727c) */
/* WARNING: Removing unreachable block (ram,0x0001036d7280) */
/* WARNING: Removing unreachable block (ram,0x0001036d7284) */
/* WARNING: Removing unreachable block (ram,0x0001036d731c) */
/* WARNING: Removing unreachable block (ram,0x0001036d732c) */
/* WARNING: Removing unreachable block (ram,0x0001036d7374) */
/* WARNING: Removing unreachable block (ram,0x0001036d7378) */
/* WARNING: Removing unreachable block (ram,0x0001036d737c) */
/* WARNING: Removing unreachable block (ram,0x0001036d72bc) */
/* WARNING: Removing unreachable block (ram,0x0001036d7214) */
/* WARNING: Removing unreachable block (ram,0x0001036d7218) */
/* WARNING: Removing unreachable block (ram,0x0001036d71e8) */
/* WARNING: Removing unreachable block (ram,0x0001036d71ec) */
/* WARNING: Removing unreachable block (ram,0x0001036d72f0) */
/* WARNING: Removing unreachable block (ram,0x0001036d71f8) */
/* WARNING: Removing unreachable block (ram,0x0001036d71c8) */
/* WARNING: Removing unreachable block (ram,0x0001036d74d4) */
/* WARNING: Removing unreachable block (ram,0x0001036d71cc) */
/* WARNING: Removing unreachable block (ram,0x0001036d76b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d7020(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c5bcc0();
  if (param_1 - 4U < 2) {
    lVar1 = unaff_x20 + _DAT_112f87b28;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    func_0x000107c5de64();
    func_0x000107c61180();
  }
  else if (param_1 == 3) {
    lVar1 = unaff_x20 + _DAT_112f87b28;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    func_0x000107c5de64();
    func_0x000107c61180();
  }
  else {
    if (param_1 != 2) {
      return;
    }
    lVar1 = unaff_x20 + _DAT_112f87b28;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    func_0x000107c5de64();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1036d716c; end: 1036d74d7;  */

/* WARNING: Possible PIC construction at 0x0001036d71c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d71e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d7210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d7264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d72e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d73f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d7454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d7498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d74a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036d73f8) */
/* WARNING: Removing unreachable block (ram,0x0001036d72ec) */
/* WARNING: Removing unreachable block (ram,0x0001036d7268) */
/* WARNING: Removing unreachable block (ram,0x0001036d7278) */
/* WARNING: Removing unreachable block (ram,0x0001036d727c) */
/* WARNING: Removing unreachable block (ram,0x0001036d7280) */
/* WARNING: Removing unreachable block (ram,0x0001036d7284) */
/* WARNING: Removing unreachable block (ram,0x0001036d731c) */
/* WARNING: Removing unreachable block (ram,0x0001036d732c) */
/* WARNING: Removing unreachable block (ram,0x0001036d7374) */
/* WARNING: Removing unreachable block (ram,0x0001036d7378) */
/* WARNING: Removing unreachable block (ram,0x0001036d737c) */
/* WARNING: Removing unreachable block (ram,0x0001036d72bc) */
/* WARNING: Removing unreachable block (ram,0x0001036d7214) */
/* WARNING: Removing unreachable block (ram,0x0001036d7218) */
/* WARNING: Removing unreachable block (ram,0x0001036d71e8) */
/* WARNING: Removing unreachable block (ram,0x0001036d71ec) */
/* WARNING: Removing unreachable block (ram,0x0001036d72f0) */
/* WARNING: Removing unreachable block (ram,0x0001036d71f8) */
/* WARNING: Removing unreachable block (ram,0x0001036d71c8) */
/* WARNING: Removing unreachable block (ram,0x0001036d74d4) */
/* WARNING: Removing unreachable block (ram,0x0001036d71cc) */
/* WARNING: Removing unreachable block (ram,0x0001036d7458) */
/* WARNING: Removing unreachable block (ram,0x0001036d749c) */
/* WARNING: Removing unreachable block (ram,0x0001036d7460) */
/* WARNING: Removing unreachable block (ram,0x0001036d7478) */
/* WARNING: Removing unreachable block (ram,0x0001036d747c) */
/* WARNING: Removing unreachable block (ram,0x0001036d7480) */
/* WARNING: Removing unreachable block (ram,0x0001036d7484) */
/* WARNING: Removing unreachable block (ram,0x0001036d7488) */
/* WARNING: Removing unreachable block (ram,0x0001036d748c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d716c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f87b28;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5de64();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1036d74d8; end: 1036d770b;  */

/* WARNING: Possible PIC construction at 0x0001036d7520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d7540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d756c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d76b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036d7570) */
/* WARNING: Removing unreachable block (ram,0x0001036d7574) */
/* WARNING: Removing unreachable block (ram,0x0001036d7544) */
/* WARNING: Removing unreachable block (ram,0x0001036d7548) */
/* WARNING: Removing unreachable block (ram,0x0001036d76e8) */
/* WARNING: Removing unreachable block (ram,0x0001036d7554) */
/* WARNING: Removing unreachable block (ram,0x0001036d7524) */
/* WARNING: Removing unreachable block (ram,0x0001036d7708) */
/* WARNING: Removing unreachable block (ram,0x0001036d7528) */
/* WARNING: Removing unreachable block (ram,0x0001036d76b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d74d8(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f87b28;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5de64();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1036d770c; end: 1036d775b; -[_TtC32SCLensPlusServicesImplementation42ImagineLensSourceRectTransitionUIContainer handleDismissPan:] */

/* WARNING: Possible PIC construction at 0x0001036d7744: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036d7748) */

void FUN_1036d770c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036d7020(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036d775c; end: 1036d7903;  */

double FUN_1036d775c(double param_1,ulong param_2,double param_3,double param_4,double param_5,
                    undefined8 param_6,undefined8 param_7,undefined8 param_8,uint param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  func_0x000107c609e8();
  if ((param_9 & 1) == 0) {
    func_0x000107c609e4(param_1,param_2,param_3,param_4);
    if ((param_9 & 1) != 0) {
      return 0.85;
    }
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
      return 0.85;
    }
    if (0x7fefffffffffffff < (param_2 & 0x7fffffffffffffff)) {
      return 0.85;
    }
    if (0x7fefffffffffffff < (ulong)ABS(param_3)) {
      return 0.85;
    }
    if (0x7fefffffffffffff < (ulong)ABS(param_4)) {
      return 0.85;
    }
    if (param_3 <= 1.0) {
      return 0.85;
    }
    if (param_4 <= 1.0) {
      return 0.85;
    }
    FUN_1036d6074(param_5,param_6,param_7,param_8);
    if ((param_9 & 1) != 0) {
      dVar1 = param_1;
      func_0x000107c609cc(param_1,param_2,param_3,param_4);
      dVar2 = param_5;
      func_0x000107c609cc(param_5,param_6,param_7,param_8);
      func_0x000107c609b0(param_1,param_2,param_3,param_4);
      func_0x000107c609b0(param_5,param_6,param_7,param_8);
      dVar3 = param_1 / param_5;
      if (param_1 / param_5 < dVar1 / dVar2) {
        dVar3 = dVar1 / dVar2;
      }
      if (0.85 < dVar3) {
        return dVar3;
      }
    }
  }
  return 0.85;
}



/* Entry: 1036d7904; end: 1036d79fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d7904(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  code *pcVar3;
  
  lVar1 = unaff_x20 + _DAT_112f87b28;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112f87b58) = 1;
    if (*(long *)(unaff_x20 + _DAT_112f87b38) != 0) {
      func_0x000107c54514();
    }
    pcVar3 = *(code **)(unaff_x20 + _DAT_112f87b18);
    if (pcVar3 == (code *)0x0) {
      func_0x0001036d6694(0,0);
    }
    else {
      uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f87b18))[1];
      func_0x000107c6157c(uVar2);
      (*pcVar3)(lVar1);
      func_0x000100d59ef0(pcVar3,uVar2);
    }
    func_0x000107c61168(PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c3f4cc();
    func_0x000107c4e5c0(0x3fe0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1036d79fc; end: 1036d7a77;  */

/* WARNING: Possible PIC construction at 0x0001036d7a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d7520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d7540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d756c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036d76b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036d7570) */
/* WARNING: Removing unreachable block (ram,0x0001036d7574) */
/* WARNING: Removing unreachable block (ram,0x0001036d7544) */
/* WARNING: Removing unreachable block (ram,0x0001036d7548) */
/* WARNING: Removing unreachable block (ram,0x0001036d76e8) */
/* WARNING: Removing unreachable block (ram,0x0001036d7554) */
/* WARNING: Removing unreachable block (ram,0x0001036d7524) */
/* WARNING: Removing unreachable block (ram,0x0001036d7708) */
/* WARNING: Removing unreachable block (ram,0x0001036d7528) */
/* WARNING: Removing unreachable block (ram,0x0001036d7a44) */
/* WARNING: Removing unreachable block (ram,0x0001036d7a58) */
/* WARNING: Removing unreachable block (ram,0x0001036d7a60) */
/* WARNING: Removing unreachable block (ram,0x0001036d74d8) */
/* WARNING: Removing unreachable block (ram,0x0001036d7508) */
/* WARNING: Removing unreachable block (ram,0x0001036d76b4) */
/* WARNING: Removing unreachable block (ram,0x0001036d76cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d79fc(void)

{
  long lVar1;
  long unaff_x20;
  
  if (((*(byte *)(unaff_x20 + _DAT_112f87b50) & 1) == 0) &&
     (*(char *)(unaff_x20 + _DAT_112f87b58) == '\x01')) {
    lVar1 = unaff_x20 + _DAT_112f87b28;
    func_0x000107c61618();
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
  }
  return;
}



/* Entry: 1036d7a78; end: 1036d7a9f; -[_TtC32SCLensPlusServicesImplementation42ImagineLensSourceRectTransitionUIContainer cancelPendingWorkflowDismissalIfNeeded] */

void FUN_1036d7a78(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1036d79fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036d7aa0; end: 1036d7bb3;  */

void FUN_1036d7aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_90 = 0x3ff0000000000000;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0x3ff0000000000000;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x000107c5a03c(param_5,param_6,&uStack_90);
  func_0x000107c3ec60(param_6);
  uVar2 = param_1;
  func_0x000107c609bc();
  func_0x000107c609c0(param_1,param_2,param_3,param_4);
  func_0x000107c532b4(uVar2,param_1,param_5);
  func_0x000107c4aba4(param_5);
  func_0x000107c61180();
  func_0x000107c539d4(0);
  func_0x000107c61170(param_5);
  func_0x000107c61428(param_7 + 0x10,&uStack_90,0,0);
  param_7 = param_7 + 0x10;
  func_0x000107c61618();
  if (param_7 != 0) {
    lVar1 = param_7;
    FUN_1036d6f88();
    func_0x000107c61170(param_7);
    func_0x000107c526c0(0x3ff0000000000000,lVar1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1036d7bb4; end: 1036d7c03;  */

void FUN_1036d7bb4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x28);
    do {
      pcVar1 = (code *)puVar4[-1];
      uVar2 = *puVar4;
      func_0x000107c6157c(uVar2);
      (*pcVar1)();
      func_0x000107c61574(uVar2);
      puVar4 = puVar4 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 1036d7c04; end: 1036d7c2b;  */

void FUN_1036d7c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uStack_90 = 0x3ff0000000000000;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0x3ff0000000000000;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x000107c5a03c(uVar1,uVar4,&uStack_90);
  func_0x000107c3ec60(uVar4);
  uVar4 = param_1;
  func_0x000107c609bc();
  func_0x000107c609c0(param_1,param_2,param_3,param_4);
  func_0x000107c532b4(uVar4,param_1,uVar1);
  func_0x000107c4aba4(uVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0);
  func_0x000107c61170(uVar1);
  func_0x000107c61428(lVar3 + 0x10,&uStack_90,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar2 = lVar3;
    FUN_1036d6f88();
    func_0x000107c61170(lVar3);
    func_0x000107c526c0(0x3ff0000000000000,lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1036d7c2c; end: 1036d7c9f;  */

void FUN_1036d7c2c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4aba4(uVar1);
  func_0x000107c61180();
  func_0x000107c562fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1036d7ca0; end: 1036d7cbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d7ca0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61604(lVar1 + _DAT_112f87b28,0);
    *(undefined1 *)(lVar1 + _DAT_112f87b50) = 0;
    *(undefined1 *)(lVar1 + _DAT_112f87b60) = 1;
    FUN_1036d68f8();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1036d7cc0; end: 1036d7cfb;  */

undefined8 FUN_1036d7cc0(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x1036d528c)(param_2,param_1);
  return param_2;
}



/* Entry: 1036d7cfc; end: 1036d7d23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d7cfc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
  }
  else {
    *(undefined1 *)(lVar3 + _DAT_112f87b48) = 0;
    lVar2 = _DAT_112f87b38;
    if (*(long *)(lVar3 + _DAT_112f87b38) == 0) {
      lVar4 = lVar3 + _DAT_112f87b28;
      func_0x000107c61618();
      if (lVar4 != 0) {
        lVar5 = lVar4;
        func_0x000107c5de64();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (lVar5 != 0) {
          puVar6 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
          func_0x000107c610f8();
          func_0x000107c48c2c();
          func_0x000107c53fcc();
          func_0x000107c3d6fc(lVar5);
          func_0x000107c61170(lVar5);
          uVar7 = *(undefined8 *)(lVar3 + lVar2);
          *(undefined **)(lVar3 + lVar2) = puVar6;
          func_0x000107c61170(uVar7);
        }
      }
    }
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1036d7d24; end: 1036d800f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1036d7d24(void)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  if (lRam0000000112f884d8 != -1) {
    func_0x000107c61568(0x112f884d8,FUN_1036e328c);
  }
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c46db4();
  *(undefined **)(unaff_x20 + _DAT_112f87b90) = puVar2;
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffffa0,PTR_s_initWithFrame__1125e2948);
  lVar1 = _DAT_112f87b90;
  uVar9 = *(undefined8 *)(puVar3 + _DAT_112f87b90);
  puVar4 = puVar3;
  func_0x000107c61174();
  func_0x000107c526c0(0,uVar9);
  func_0x000107c5a050(*(undefined8 *)(puVar3 + lVar1));
  func_0x000107c61174(puVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c3d89c();
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar5 = puVar2;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar5 + 0x18) = 9;
  *(undefined8 *)(puVar5 + 0x10) = 4;
  uVar6 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c4ace0();
  func_0x000107c61180();
  puVar7 = puVar4;
  func_0x000107c4ace0(puVar4);
  func_0x000107c61180();
  uVar9 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  *(undefined8 *)(puVar5 + 0x20) = uVar9;
  uVar6 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c50890();
  func_0x000107c61180();
  puVar7 = puVar4;
  func_0x000107c50890(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar9 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  *(undefined8 *)(puVar5 + 0x28) = uVar9;
  uVar6 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar7 = puVar4;
  func_0x000107c5cbe4(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar9 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  *(undefined8 *)(puVar5 + 0x30) = uVar9;
  uVar6 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar3 = puVar4;
  func_0x000107c3ec1c(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar9 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x38) = uVar9;
  uVar9 = 0;
  func_0x000100847984(0);
  puVar8 = puVar5;
  func_0x000107c5fc48(puVar5,uVar9);
  func_0x000107c61574(puVar5);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar8);
  return puVar4;
}



/* Entry: 1036d8010; end: 1036d802f; -[_TtC32SCLensPlusServicesImplementation23LensPlusCellOverlayView init] */

void FUN_1036d8010(void)

{
  FUN_1036d7d24();
  return;
}



/* Entry: 1036d8030; end: 1036d8087; -[_TtC32SCLensPlusServicesImplementation23LensPlusCellOverlayView initWithCoder:] */

void FUN_1036d8030(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCLensPlusServicesImplementation/LensPlusCellOverlayView.swift",0x3e,2,0x22,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036d8088);
  (*pcVar1)();
}



/* Entry: 1036d8088; end: 1036d80e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d8088(double param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  double dVar2;
  
  if (param_1 <= 0.3) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f87b90);
    dVar2 = 0.0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f87b90);
    if (0.8 <= param_1) {
      dVar2 = 1.0;
    }
    else {
      dVar2 = param_1 + -0.3 + param_1 + -0.3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(dVar2,uVar1,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1036d80e8; end: 1036d811f; -[_TtC32SCLensPlusServicesImplementation23LensPlusCellOverlayView applySelectionProgress:] */

void FUN_1036d80e8(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_1036d8088(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1036d8120; end: 1036d817f; -[_TtC32SCLensPlusServicesImplementation23LensPlusCellOverlayView initWithFrame:] */

void FUN_1036d8120(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPlusServicesImplementation.LensPlusCellOverlayView",0x38,"init(frame:)"
                      ,0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036d814c);
  (*pcVar1)();
}



/* Entry: 1036d8180; end: 1036d818f; -[_TtC32SCLensPlusServicesImplementation23LensPlusCellOverlayView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d8180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f87b90));
  return;
}



/* Entry: 1036d8190; end: 1036d81af;  */

void FUN_1036d8190(void)

{
  func_0x000107c61168(&PTR_PTR_1128e28c0);
  return;
}



/* Entry: 1036d81b0; end: 1036d833b; -[_TtC32SCLensPlusServicesImplementation22LensPlusCofServiceImpl lensPlusFetchLensMetadataForAnalyticsEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1036d81b0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112f87bc0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = 0xd000000000000033;
    func_0x000107c5fadc(0xd000000000000033,0x800000010f15a030);
    lVar3 = lVar2;
    func_0x000107c3ebd4(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_1);
  return lVar3;
}



/* Entry: 1036d833c; end: 1036d836f; -[_TtC32SCLensPlusServicesImplementation22LensPlusCofServiceImpl exclusiveLensTierType] */

undefined8 FUN_1036d833c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001036d8258();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1036d8370; end: 1036d83ef; -[_TtC32SCLensPlusServicesImplementation22LensPlusCofServiceImpl exclusiveCaptureStyleForAllLensesEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036d8370(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f87bd0);
  func_0x000107c61174();
  uVar1 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f159fa0);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1036d83f0; end: 1036d8497; -[_TtC32SCLensPlusServicesImplementation22LensPlusCofServiceImpl imagineLensIsNoActiveState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1036d83f0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112f87bc0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010f159f70);
    lVar3 = lVar2;
    func_0x000107c3ebd4(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_1);
  return lVar3;
}



/* Entry: 1036d8498; end: 1036d853f; -[_TtC32SCLensPlusServicesImplementation22LensPlusCofServiceImpl imagineLensShowAfterLensAssetsReady] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1036d8498(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112f87bc0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010f159ec0);
    lVar3 = lVar2;
    func_0x000107c3ebd4(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_1);
  return lVar3;
}



/* Entry: 1036d8540; end: 1036d85bf; -[_TtC32SCLensPlusServicesImplementation22LensPlusCofServiceImpl imagineLensAiCreationFlowSimpleCameraEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036d8540(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f87bd0);
  func_0x000107c61174();
  uVar1 = 0xd000000000000032;
  func_0x000107c5fadc(0xd000000000000032,0x800000010f159e80);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1036d85c0; end: 1036d863f; -[_TtC32SCLensPlusServicesImplementation22LensPlusCofServiceImpl imagineLensAiCreationFlowPrefetchLensEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036d85c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f87bd0);
  func_0x000107c61174();
  uVar1 = 0xd000000000000032;
  func_0x000107c5fadc(0xd000000000000032,0x800000010f159e40);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1036d8640; end: 1036d8723; -[_TtC32SCLensPlusServicesImplementation22LensPlusCofServiceImpl imagineLensDuetFriendSelectionEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036d8640(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f87bd0);
  func_0x000107c61174();
  uVar1 = 0xd00000000000003b;
  func_0x000107c5fadc(0xd00000000000003b,0x800000010f159e00);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1036d8724; end: 1036d87af; -[_TtC32SCLensPlusServicesImplementation22LensPlusCofServiceImpl previewCaptionShouldRemoveCaptionWithLensId:] */

uint FUN_1036d8724(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    func_0x000107c61174(param_1);
    uVar1 = param_1;
    func_0x0001036d86c0();
    func_0x000100077018(param_3,param_2,uVar1);
    uVar2 = (uint)param_3;
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(param_2);
    func_0x000107c61170(param_1);
  }
  return uVar2 & 1;
}



/* Entry: 1036d87b0; end: 1036d882f; -[_TtC32SCLensPlusServicesImplementation22LensPlusCofServiceImpl imagineLensSideButtonIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1036d87b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f87bd8);
  func_0x000107c61174();
  uVar1 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f159da0);
  func_0x000107c4980c(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  return (long)(int)uVar2;
}



/* Entry: 1036d8830; end: 1036d88d7; -[_TtC32SCLensPlusServicesImplementation22LensPlusCofServiceImpl imagineLensDeselectOnReturnFromPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1036d8830(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112f87bc0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = 0xd000000000000037;
    func_0x000107c5fadc(0xd000000000000037,0x800000010f159d60);
    lVar3 = lVar2;
    func_0x000107c3ebd4(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_1);
  return lVar3;
}



/* Entry: 1036d88d8; end: 1036d8947; -[_TtC32SCLensPlusServicesImplementation22LensPlusCofServiceImpl lensPlusUpsellGamesApiEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1036d88d8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112f87be0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c49fb0();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_1);
  return lVar2;
}



/* Entry: 1036d8948; end: 1036d8a67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1036d8948(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long unaff_x20;
  
  uVar1 = param_1;
  func_0x000107c4a63c();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x000107c49b94(), (uVar1 & 1) == 0)) {
    func_0x000107c4f220();
    func_0x000107c61180();
    if (param_1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar2 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      uVar1 = uVar2 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar1 = param_2 >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        uVar6 = 0;
      }
      else {
        puVar3 = *(undefined **)(unaff_x20 + _DAT_112f87be0);
        func_0x000107c5c734();
        func_0x000107c61180();
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar3 != (undefined *)0x0) {
          puVar4 = puVar3;
          func_0x000107c43bac();
          func_0x000107c61180();
          func_0x000107c615e8(puVar3);
          puVar5 = puVar4;
          func_0x000107c5fc54(puVar4,PTR___sSSN_11034da80);
          func_0x000107c61170(puVar4);
        }
        func_0x000100077018(uVar2,param_2,puVar5);
        uVar6 = (uint)uVar2;
        func_0x000107c6142c(puVar5);
      }
      func_0x000107c6142c(param_2);
    }
  }
  else {
    uVar6 = 1;
  }
  return uVar6 & 1;
}



/* Entry: 1036d8a68; end: 1036d8ac3; -[_TtC32SCLensPlusServicesImplementation22LensPlusCofServiceImpl isGameLens:] */

uint FUN_1036d8a68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1036d8948(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1036d8ac4; end: 1036d8b43; -[_TtC32SCLensPlusServicesImplementation22LensPlusCofServiceImpl chatToSongFreemiumEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036d8ac4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f87bd0);
  func_0x000107c61174();
  uVar1 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f159d30);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1036d8b44; end: 1036d8d87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1036d8b44(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  func_0x000107c5eb9c();
  lStack_a8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar10 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112f87bd0);
  uVar3 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f159dd0);
  uVar4 = 0;
  uVar6 = 0xe000000000000000;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c5c1dc(uVar8);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  uVar3 = uVar8;
  func_0x000107c5faec(uVar8);
  func_0x000107c61170(uVar8);
  puStack_70 = (undefined *)0x2c;
  uStack_68 = 0xe100000000000000;
  ppuStack_90 = &puStack_70;
  lVar5 = 0x7fffffffffffffff;
  func_0x0001014784b8(0x7fffffffffffffff,0,FUN_1036d8fe0,&uStack_a0,uVar3,uVar6);
  lVar11 = *(long *)(lVar5 + 0x10);
  if (lVar11 == 0) {
    func_0x000107c6142c(lVar5);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,lVar11,0);
    puVar9 = (undefined8 *)(lVar5 + 0x38);
    lStack_b0 = lVar5;
    do {
      puVar12 = puStack_70;
      ppuStack_90 = (undefined **)puVar9[-1];
      uVar3 = *puVar9;
      uStack_98 = puVar9[-2];
      uStack_a0 = puVar9[-3];
      uVar4 = uVar3;
      uStack_88 = uVar3;
      func_0x000107c61434(uVar3);
      func_0x000107c5eb88(lVar10);
      func_0x000101478db0();
      lVar5 = lVar10;
      puVar7 = PTR___sSsN_11034e1d8;
      func_0x000107c601f0(lVar10,PTR___sSsN_11034e1d8,uVar4);
      (**(code **)(lStack_a8 + 8))(lVar10,lVar2);
      func_0x000107c6142c(uVar3);
      uVar1 = *(ulong *)(puVar12 + 0x10);
      puStack_70 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
        func_0x000100403514(1 < *(ulong *)(puVar12 + 0x18),uVar1 + 1,1);
      }
      puVar12 = puStack_70;
      puVar9 = puVar9 + 4;
      *(ulong *)(puStack_70 + 0x10) = uVar1 + 1;
      *(long *)(puStack_70 + uVar1 * 0x10 + 0x20) = lVar5;
      *(undefined **)(puStack_70 + uVar1 * 0x10 + 0x28) = puVar7;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    func_0x000107c6142c(lStack_b0);
  }
  return puVar12;
}



/* Entry: 1036d8d88; end: 1036d8e07; -[_TtC32SCLensPlusServicesImplementation22LensPlusCofServiceImpl previewOnlyPaywallEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036d8d88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f87bd0);
  func_0x000107c61174();
  uVar1 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f159d00);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1036d8e08; end: 1036d8e87; -[_TtC32SCLensPlusServicesImplementation22LensPlusCofServiceImpl previewOnlyPaywallShowCTAEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1036d8e08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f87bd0);
  func_0x000107c61174();
  uVar1 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f159cd0);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 1036d8e88; end: 1036d8f07; -[_TtC32SCLensPlusServicesImplementation22LensPlusCofServiceImpl skipDiscardDialogEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036d8e88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f87bd0);
  func_0x000107c61174();
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f159ca0);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1036d8f08; end: 1036d8f67; -[_TtC32SCLensPlusServicesImplementation22LensPlusCofServiceImpl init] */

void FUN_1036d8f08(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPlusServicesImplementation.LensPlusCofServiceImpl",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036d8f34);
  (*pcVar1)();
}



/* Entry: 1036d8f68; end: 1036d8fdf; -[_TtC32SCLensPlusServicesImplementation22LensPlusCofServiceImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d8f68(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f87bc0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f87bc8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f87bd0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f87bd8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f87be0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f87be8));
  return;
}



/* Entry: 1036d8fe0; end: 1036d9033;  */

uint FUN_1036d8fe0(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 1036d9034; end: 1036d907b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1036d9034(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = _DAT_112f87ca8;
  lVar3 = *(long *)(unaff_x20 + _DAT_112f87ca8);
  lVar5 = lVar3;
  if (lVar3 == 1) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f87c80);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar2;
      (*(code *)&UNK_108c2bfdc)();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
    }
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar5;
    func_0x000107c61174(lVar5);
    FUN_1036db444(uVar4);
  }
  (*(code *)0x1036db450)(lVar3);
  return lVar5;
}



/* Entry: 1036d907c; end: 1036d912f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1036d907c(long *param_1,code *param_2,code *param_3,code *param_4)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  lVar2 = *(long *)(unaff_x20 + lVar5);
  lVar4 = lVar2;
  if (lVar2 == 1) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112f87c80);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar1;
      (*param_2)();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
    }
    uVar3 = *(undefined8 *)(unaff_x20 + lVar5);
    *(long *)(unaff_x20 + lVar5) = lVar4;
    func_0x000107c61174(lVar4);
    (*param_3)(uVar3);
  }
  (*param_4)(lVar2);
  return lVar4;
}



/* Entry: 1036d9130; end: 1036d916b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1036d9130(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  uint uVar4;
  
  lVar1 = _DAT_112f87cb8;
  uVar4 = (uint)*(byte *)(unaff_x20 + _DAT_112f87cb8);
  if (*(byte *)(unaff_x20 + _DAT_112f87cb8) == 2) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f87c80);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      lVar3 = lVar2;
      (*(code *)&UNK_108c2bfc4)();
      uVar4 = (uint)lVar3;
      func_0x000107c615e8(lVar2);
    }
    *(char *)(unaff_x20 + lVar1) = (char)uVar4;
  }
  return uVar4 & 1;
}



/* Entry: 1036d916c; end: 1036d91e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d916c(long *param_1,code *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  plVar1 = (long *)(unaff_x20 + *param_1);
  if ((char)plVar1[1] == '\x01') {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f87c80);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar3 = lVar2;
    if (lVar2 != 0) {
      (*param_2)();
      func_0x000107c615e8(lVar2);
    }
    *plVar1 = lVar3;
    *(undefined1 *)(plVar1 + 1) = 0;
  }
  return;
}



/* Entry: 1036d91e8; end: 1036d91fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1036d91e8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  uint uVar4;
  
  lVar1 = _DAT_112f87cd0;
  uVar4 = (uint)*(byte *)(unaff_x20 + _DAT_112f87cd0);
  if (*(byte *)(unaff_x20 + _DAT_112f87cd0) == 2) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f87c80);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      lVar3 = lVar2;
      (*(code *)&UNK_108c2c1dc)();
      uVar4 = (uint)lVar3;
      func_0x000107c615e8(lVar2);
    }
    *(char *)(unaff_x20 + lVar1) = (char)uVar4;
  }
  return uVar4 & 1;
}



/* Entry: 1036d91fc; end: 1036d9277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1036d91fc(long *param_1,code *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  uint uVar4;
  long lVar5;
  
  lVar5 = *param_1;
  bVar1 = *(byte *)(unaff_x20 + lVar5);
  uVar4 = (uint)bVar1;
  if (bVar1 == 2) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f87c80);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      lVar3 = lVar2;
      (*param_2)();
      uVar4 = (uint)lVar3;
      func_0x000107c615e8(lVar2);
    }
    *(char *)(unaff_x20 + lVar5) = (char)uVar4;
  }
  return uVar4 & 1;
}



/* Entry: 1036d9278; end: 1036d92ff; -[_TtC32SCLensPlusServicesImplementation27LensPlusFreemiumServiceImpl isLensFreemiumSessionAvailable:] */

uint FUN_1036d9278(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  puVar1 = param_3;
  FUN_1036da04c();
  puVar2 = puVar1;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar1) + 0x70))();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
  return (uint)puVar2 & 1;
}



/* Entry: 1036d9300; end: 1036d9353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d9300(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = _DAT_112f87ca0;
  if (*(long *)(param_1 + _DAT_112f87ca0) == 0) {
    FUN_1036da04c();
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    *(undefined8 *)(param_1 + lVar1) = param_2;
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1036d9354; end: 1036d935f; -[_TtC32SCLensPlusServicesImplementation27LensPlusFreemiumServiceImpl startFreemiumSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d9354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = param_1;
  uStack_48 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100087bd4(0x1036db42c,auStack_60,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1036d9360; end: 1036d946f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d9360(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  lVar2 = _DAT_112f87ca0;
  lVar3 = *(long *)(param_1 + _DAT_112f87ca0);
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar3 + _DAT_113036370);
    uVar1 = ((ulong *)(lVar3 + _DAT_113036370))[1];
    uVar7 = param_2;
    func_0x000107c61174();
    func_0x000107c61434(uVar1);
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar4 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
    if (uVar5 == uVar4 && uVar1 == uVar7) {
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(lVar3);
    }
    else {
      func_0x000107c605b8(uVar5,uVar1,uVar4,uVar7,0);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(lVar3);
      if ((uVar5 & 1) == 0) {
        return;
      }
    }
    uVar6 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 1036d9470; end: 1036d947b; -[_TtC32SCLensPlusServicesImplementation27LensPlusFreemiumServiceImpl endFreemiumSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d9470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = param_1;
  uStack_48 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100087bd4(FUN_1036db414,auStack_60,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1036d947c; end: 1036d9507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d947c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = param_1;
  uStack_48 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100087bd4(param_4,auStack_60,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1036d9508; end: 1036d99b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d9508(undefined8 param_1,ulong *param_2)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong *puVar5;
  undefined *puVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined *puVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  undefined8 ***pppuVar12;
  undefined8 ****ppppuVar13;
  long extraout_x8;
  long unaff_x20;
  undefined *puVar14;
  long lVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 ***pppuVar18;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  ulong *puStack_b0;
  ulong uStack_a8;
  undefined8 ***pppuStack_a0;
  long lStack_98;
  undefined8 **ppuStack_90;
  undefined8 ***pppuStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  if ((bRam0000000112f881e8 & 1) == 0) {
    lStack_98 = lVar3;
    FUN_1036da04c();
    puVar5 = param_2;
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_2) + 0x70))();
    if (((ulong)puVar5 & 1) != 0) {
      ppppuVar17 = (undefined8 ****)((undefined8 *)((long)param_2 + _DAT_113036378))[1];
      if (ppppuVar17 != (undefined8 ****)0x0) {
        ppuStack_90 = *(undefined8 ***)((long)param_2 + _DAT_113036378);
        puVar14 = *(undefined **)(unaff_x20 + _DAT_112f87c88);
        func_0x000107c61434(ppppuVar17);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (puVar14 != (undefined *)0x0) {
          pppuStack_80 = (undefined8 ****)0x0;
          puVar6 = puVar14;
          func_0x000107c43944();
          func_0x000107c61180();
          ppppuVar8 = (undefined8 ****)pppuStack_80;
          lStack_b8 = lVar15;
          puStack_b0 = param_2;
          if (puVar6 == (undefined *)0x0) {
            ppppuVar7 = (undefined8 ****)pppuStack_80;
            func_0x000107c61174();
            func_0x000107c5ed30(ppppuVar8);
            func_0x000107c61170(ppppuVar7);
            func_0x000107c61654();
            func_0x000107c614ac(ppppuVar8);
            puVar6 = PTR_PTR_1126d1350;
            func_0x000107c610f8();
            func_0x000107c453e4();
          }
          else {
            func_0x000107c61174();
          }
          puVar9 = puVar6;
          func_0x000107c40850();
          func_0x000107c61180();
          if (puVar9 != (undefined *)0x0) {
            pppuStack_80 = (undefined8 ****)0x0;
            uVar4 = 0;
            puStack_c0 = puVar6;
            FUN_1036db274(0,0x112f874a8,&PTR_PTR_1126ad478);
            ppppuVar8 = &pppuStack_80;
            func_0x000107c5fc50(puVar9,ppppuVar8,uVar4);
            func_0x000107c61170(puVar9);
            ppppuVar7 = (undefined8 ****)pppuStack_80;
            puVar6 = puStack_c0;
            if ((undefined8 ****)pppuStack_80 != (undefined8 ****)0x0) {
              ppppuVar16 = (undefined8 ****)((ulong)pppuStack_80 & 0xffffffffffffff8);
              puStack_c8 = puVar14;
              pppuStack_a0 = ppppuVar17;
              if ((ulong)pppuStack_80 >> 0x3e == 0) {
                ppppuVar17 = (undefined8 ****)ppppuVar16[2];
              }
              else {
                ppppuVar17 = (undefined8 ****)pppuStack_80;
                if (-1 < (long)pppuStack_80) {
                  ppppuVar17 = ppppuVar16;
                }
                func_0x000107c60480();
              }
              if (ppppuVar17 != (undefined8 ****)0x0) {
                pppuVar18 = (undefined8 ***)0x0;
                uStack_a8 = (ulong)ppppuVar7 & 0xc000000000000001;
                do {
                  if (uStack_a8 == 0) {
                    if (ppppuVar16[2] <= pppuVar18) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036d9848);
                      (*pcVar2)();
                    }
                    pppuVar10 = ppppuVar7[(long)((long)pppuVar18 + 4)];
                    func_0x000107c61174();
                    ppppuVar13 = ppppuVar8;
                  }
                  else {
                    pppuVar10 = pppuVar18;
                    ppppuVar13 = ppppuVar7;
                    func_0x0001036c8b9c();
                  }
                  ppppuVar1 = (undefined8 ****)((long)pppuVar18 + 1);
                  if (SCARRY8((long)pppuVar18,1)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1036d9844);
                    (*pcVar2)();
                  }
                  pppuVar11 = pppuVar10;
                  func_0x000107c4b1a8();
                  func_0x000107c61180();
                  ppppuVar8 = ppppuVar13;
                  if (pppuVar11 != (undefined8 ***)0x0) {
                    pppuVar12 = pppuVar11;
                    func_0x000107c5faec();
                    func_0x000107c61170(pppuVar11);
                    if ((pppuVar12 == (undefined8 ***)ppuStack_90) &&
                       ((undefined8 ****)pppuStack_a0 == ppppuVar13)) {
                      func_0x000107c6142c(ppppuVar7);
                      ppppuVar7 = ppppuVar13;
                    }
                    else {
                      ppppuVar8 = ppppuVar13;
                      func_0x000107c605b8(pppuVar12,ppppuVar13,ppuStack_90,pppuStack_a0,0);
                      func_0x000107c6142c(ppppuVar13);
                      if (((ulong)pppuVar12 & 1) == 0) goto LAB_1036d9778;
                    }
                    func_0x000107c6142c(ppppuVar7);
                    func_0x000107c61174(pppuVar10);
                    puVar6 = puStack_c0;
                    ppppuVar17 = (undefined8 ****)pppuStack_a0;
                    puVar14 = puStack_c8;
                    goto LAB_1036d98d8;
                  }
LAB_1036d9778:
                  func_0x000107c61170(pppuVar10);
                  pppuVar18 = (undefined8 ***)((long)pppuVar18 + 1);
                } while (ppppuVar1 != ppppuVar17);
              }
              func_0x000107c6142c(ppppuVar7);
              puVar6 = puStack_c0;
              ppppuVar17 = (undefined8 ****)pppuStack_a0;
              puVar14 = puStack_c8;
            }
          }
          pppuVar10 = (undefined8 ***)PTR_PTR_1126ad478;
          func_0x000107c610f8(PTR_PTR_1126ad478);
          func_0x000107c453e4();
          func_0x000107c61180();
          pppuVar18 = (undefined8 ***)ppuStack_90;
          func_0x000107c5fadc(ppuStack_90,ppppuVar17);
          func_0x000107c55d5c(pppuVar10);
          func_0x000107c61170(pppuVar18);
          puVar9 = puVar6;
          func_0x000107c40850();
          func_0x000107c61180();
          if (puVar9 == (undefined *)0x0) goto LAB_1036d99b0;
          func_0x000107c3d798();
          func_0x000107c61170(puVar9);
LAB_1036d98d8:
          puVar5 = puStack_b0;
          if (SCARRY4(*(int *)((long)puStack_b0 + _DAT_113036388),1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1036d99ac);
            (*pcVar2)();
          }
          func_0x000107c53a14(pppuVar10);
          func_0x000107c5eea0(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
          func_0x000107c5ee8c();
          (**(code **)(lStack_b8 + 8))
                    (auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lStack_98);
          puVar9 = PTR_PTR_1126b0458;
          func_0x000107c610f8(PTR_PTR_1126b0458);
          func_0x000107c48cfc(param_1);
          func_0x000107c55aa8(pppuVar10);
          func_0x000107c61170(puVar9);
          func_0x000107c61174(puVar6);
          func_0x000107c54bc0(puVar14);
          func_0x000107c61170(puVar5);
          func_0x000107c6142c(ppppuVar17);
          func_0x000107c61170(puVar14);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(pppuVar10);
          func_0x000107c61170(pppuVar10);
          uVar4 = 1;
          goto LAB_1036d964c;
        }
        func_0x000107c6142c(ppppuVar17);
      }
    }
    func_0x000107c61170(param_2);
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
LAB_1036d964c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  func_0x000107c60e78(uVar4);
LAB_1036d99b0:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1036d99b4);
  (*pcVar2)();
}



/* Entry: 1036d99b4; end: 1036d9a0f; -[_TtC32SCLensPlusServicesImplementation27LensPlusFreemiumServiceImpl claimFreemiumTry:] */

uint FUN_1036d99b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1036d9508(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1036d9a10; end: 1036d9a8b; -[_TtC32SCLensPlusServicesImplementation27LensPlusFreemiumServiceImpl getActiveLensFreemiumState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d9a10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  func_0x000107c61174();
  uVar1 = 0x112f87150;
  func_0x0001000285a8(0x112f87150,&UNK_10dbfb280);
  func_0x000100087bd4(&uStack_38,0x1036db47c,auStack_50,uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_38);
  return;
}



/* Entry: 1036d9a8c; end: 1036d9bc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036d9a8c(ulong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 auStack_70 [16];
  long lStack_58;
  
  uVar2 = 0x112f87150;
  func_0x0001000285a8(0x112f87150,&UNK_10dbfb280);
  puVar6 = auStack_70;
  func_0x000100087bd4(&lStack_58,0x1036db468,puVar6,uVar2);
  if (lStack_58 != 0) {
    uVar5 = *(ulong *)(lStack_58 + _DAT_113036370);
    puVar1 = (undefined1 *)((ulong *)(lStack_58 + _DAT_113036370))[1];
    func_0x000107c61434(puVar1);
    uVar3 = param_1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    if (uVar5 == uVar4 && puVar1 == puVar6) {
      func_0x000107c6142c(puVar1);
      func_0x000107c6142c(puVar6);
      return;
    }
    func_0x000107c605b8(uVar5,puVar1,uVar4,puVar6,0);
    func_0x000107c6142c(puVar1);
    func_0x000107c6142c(puVar6);
    if ((uVar5 & 1) != 0) {
      return;
    }
    func_0x000107c61170(lStack_58);
  }
  FUN_1036da04c(param_1);
  return;
}



/* Entry: 1036d9bc4; end: 1036d9d2f; -[_TtC32SCLensPlusServicesImplementation27LensPlusFreemiumServiceImpl getFreemiumState:] */

void FUN_1036d9bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1036d9a8c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036d9d30; end: 1036d9db7; -[_TtC32SCLensPlusServicesImplementation27LensPlusFreemiumServiceImpl freemiumCTAButtonTitle:] */

void FUN_1036d9d30(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001036d9c20(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036d9db8; end: 1036d9ec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1036d9db8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_60 [16];
  ulong *puStack_48;
  
  uVar2 = 0x112f87150;
  func_0x0001000285a8(0x112f87150,&UNK_10dbfb280);
  func_0x000100087bd4(&puStack_48,FUN_1036db454,auStack_60,uVar2);
  if (puStack_48 != (ulong *)0x0) {
    uVar3 = *(ulong *)((long)puStack_48 + _DAT_113036370);
    uVar1 = ((ulong *)((long)puStack_48 + _DAT_113036370))[1];
    if (((uVar3 == param_1 && uVar1 == param_2) ||
        (func_0x000107c605b8(uVar3,uVar1,param_1,param_2,0), (uVar3 & 1) != 0)) &&
       ((**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puStack_48) + 0x78))(),
       0 < (int)uVar3)) {
      func_0x0001036d9158();
      func_0x000107c61170(puStack_48);
      return uVar3 == 2;
    }
    func_0x000107c61170(puStack_48);
  }
  return false;
}


