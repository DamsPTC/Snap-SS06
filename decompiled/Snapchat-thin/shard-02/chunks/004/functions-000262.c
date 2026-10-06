/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c6a804; end: 101c6a833;  */

void FUN_101c6a804(undefined8 param_1)

{
  func_0x000101c6aee0();
  func_0x000107c613fc(param_1,0x20,7);
  func_0x000101c6af08();
  FUN_101c6a834();
  return;
}



/* Entry: 101c6a834; end: 101c6a92f;  */

/* WARNING: Removing unreachable block (ram,0x000101c6a908) */

void FUN_101c6a834(long *param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_48;
  
  (**(code **)(*param_1 + 0x350))(param_2);
  if (unaff_x21 == 0) {
    func_0x000101c6ae5c();
    func_0x000101c6ae78(&uStack_48,param_2,0,0x101c6adb0);
    *(undefined8 *)(unaff_x20 + 0x10) = uStack_48;
    func_0x000101c6ae78(&uStack_48,param_2,1,FUN_101c6aa20);
    *(undefined8 *)(unaff_x20 + 0x18) = uStack_48;
    (**(code **)(*param_1 + 0x90))();
    func_0x000101c6ae70();
  }
  else {
    func_0x000107c61574(param_1);
    func_0x000101c6a608();
    func_0x000107c61464();
  }
  return;
}



/* Entry: 101c6a930; end: 101c6aa1f;  */

void FUN_101c6a930(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000100e779e8();
  func_0x000101c6ae08();
  *(undefined8 *)(param_1 + 0x18) = 5;
  *(undefined8 *)(param_1 + 0x10) = 2;
  lVar1 = param_1;
  func_0x000101c6aec0();
  func_0x000101c6adfc();
  uVar2 = 0xd000000000000012;
  func_0x000101c6aeb4(0xd000000000000012,0x800000010efbad70);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  func_0x000101c6adfc(lVar1);
  uVar2 = 0x746142776f4c7369;
  func_0x000101c6aeb4(0x746142776f4c7369,0xec00000079726574);
  func_0x000101c6ae2c();
  func_0x000107c61538();
  func_0x000101c6ae9c();
  func_0x000101c6ae24();
  func_0x000103c31164(param_1,lVar1,1,uVar2);
  return;
}



/* Entry: 101c6aa20; end: 101c6aa7b;  */

void FUN_101c6aa20(void)

{
  func_0x000100ccbe88();
  return;
}



/* Entry: 101c6aa7c; end: 101c6aa7f;  */

void FUN_101c6aa7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0d860 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e7d20;
  func_0x000107c61520(&UNK_10d9e7d20,&UNK_110460228);
  puRam0000000112e0d860 = puVar1;
  return;
}



/* Entry: 101c6aa80; end: 101c6aabf;  */

void FUN_101c6aa80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0d860 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e7d20;
  func_0x000107c61520(&UNK_10d9e7d20,&UNK_110460228);
  puRam0000000112e0d860 = puVar1;
  return;
}



/* Entry: 101c6aac0; end: 101c6ab0f;  */

void FUN_101c6aac0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000101c6a3a8();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000101c6a3e8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101c6ab10; end: 101c6ab13;  */

void FUN_101c6ab10(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e0d868 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e0d870;
  func_0x00010002969c(0x112e0d870,&UNK_10d9e7e08);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112e0d868 = puVar2;
  return;
}



/* Entry: 101c6ab14; end: 101c6abcb;  */

void FUN_101c6ab14(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e0d868 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e0d870;
  func_0x00010002969c(0x112e0d870,&UNK_10d9e7e08);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112e0d868 = puVar2;
  return;
}



/* Entry: 101c6abcc; end: 101c6abf3;  */

void FUN_101c6abcc(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_101c6a804();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 101c6abf4; end: 101c6ac0f;  */

void FUN_101c6abf4(undefined8 param_1,undefined8 param_2)

{
  FUN_101c6a488(param_1,param_2,&PTR_DAT_110460140);
  return;
}



/* Entry: 101c6ac10; end: 101c6ad77;  */

int FUN_101c6ac10(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = -1;
    goto LAB_101c6ac90;
  }
  if (param_2 < 0xfd) {
LAB_101c6ac84:
    iVar2 = *param_1 - 4;
    if (*param_1 < 4) {
      iVar2 = -1;
    }
  }
  else {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
joined_r0x000101c6ac68:
      if (uVar1 == 0) goto LAB_101c6ac84;
    }
    else {
      if (iVar2 != 2) {
        uVar1 = (uint)param_1[1];
        goto joined_r0x000101c6ac68;
      }
      uVar1 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) == 0) goto LAB_101c6ac84;
    }
    iVar2 = ((uint)*param_1 | uVar1 << 8) - 4;
  }
LAB_101c6ac90:
  return iVar2 + 1;
}



/* Entry: 101c6ad78; end: 101c6adc3;  */

void FUN_101c6ad78(void)

{
  long unaff_x20;
  
  FUN_101c6a628(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101c6adc4; end: 101c6af3f;  */

void FUN_101c6adc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 101c6af40; end: 101c6af5b;  */

void FUN_101c6af40(void)

{
  func_0x000107c610f8(PTR_PTR_1126a8cf0);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101c6af5c; end: 101c6af93;  */

void FUN_101c6af5c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101c6af94; end: 101c6af9b;  */

void FUN_101c6af94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101c6af9c; end: 101c6b363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101c6af9c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  if (param_3 == 0) {
    uVar8 = 0x800000010ef86090;
    lVar9 = -0x2fffffffffffffe3;
  }
  else {
    uVar2 = 0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010f006ee0);
    uVar8 = 0x800000010ef86090;
    uVar3 = 0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010ef86090);
    func_0x000107c5c1dc(param_3);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    lVar9 = param_3;
    func_0x000107c5faec(param_3);
    func_0x000107c61170(param_3);
  }
  lVar4 = *(long *)(param_2 + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar2 = 0xd000000000000031;
    func_0x000107c5fadc(0xd000000000000031,0x800000010f006e80);
    lVar5 = lVar4;
    func_0x000107c4e60c(lVar4);
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar2);
    puVar6 = PTR_PTR_1126ae728;
    func_0x000107c61168(PTR_PTR_1126ae728);
    func_0x000107c3edf4();
    func_0x000107c61180();
    func_0x000107c5fadc(lVar9,uVar8);
    func_0x000107c6142c(uVar8);
    puVar7 = puVar6;
    func_0x000107c545b8(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    func_0x000107c61170(puVar7);
    func_0x000107c59d5c(puVar6);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c57f3c(puVar6);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c5343c(puVar6);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c44580();
    func_0x000107c61180();
    lVar9 = param_1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar9 != 0) {
      uVar8 = 0xd000000000000016;
      func_0x000107c5fadc(0xd000000000000016,0x800000010f006ec0);
      lVar4 = lVar9;
      func_0x000107c40a28(lVar9);
      func_0x000107c61180();
      func_0x000107c615e8(lVar9);
      func_0x000107c61170(uVar8);
      puVar7 = PTR_PTR_1126b8a80;
      func_0x000107c610f8(PTR_PTR_1126b8a80);
      func_0x000107c49088();
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(lVar4);
      return puVar7;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c6b258);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c6b254);
  (*pcVar1)();
}



/* Entry: 101c6b364; end: 101c6b3b3;  */

void FUN_101c6b364(undefined8 *param_1,undefined8 param_2)

{
  FUN_101c6af9c();
  *param_1 = param_2;
  return;
}



/* Entry: 101c6b3b4; end: 101c6b3e7;  */

void FUN_101c6b3b4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c6b3e8; end: 101c6b607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101c6b3e8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x000107c614f0();
  puVar3 = PTR_PTR_1126b8ab0;
  func_0x000107c610f8(PTR_PTR_1126b8ab0);
  func_0x000107c453e4();
  lVar4 = param_1;
  func_0x000107c4d440();
  func_0x000107c61180();
  uVar8 = param_2;
  if (lVar4 == 0) {
    func_0x000107c5faec();
    uVar8 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c57360(puVar3);
  func_0x000107c61170(lVar4);
  lVar4 = param_1;
  func_0x000107c40888();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar8);
  }
  func_0x000107c5a3e0(puVar3);
  func_0x000107c61170(lVar4);
  lVar4 = param_1;
  func_0x000107c5d830();
  iVar2 = (int)lVar4;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    func_0x000107c5a298(puVar3);
    func_0x000107c4ce5c();
    iVar2 = (int)param_1;
    if (iVar2 == 0) {
      func_0x000107c5a4d8(puVar3);
      puVar5 = PTR_PTR_1126b1588;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x0001000d224c(&uStack_48);
      puVar6 = &UNK_110460460;
      func_0x000107c613fc(&UNK_110460460,0x20,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(undefined8 *)(puVar6 + 0x18) = unaff_x20;
      pcStack_58 = FUN_101c6b72c;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      uStack_68 = 0x101c6bd00;
      puStack_60 = &UNK_110460478;
      ppuVar7 = &puStack_78;
      puStack_50 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      puVar6 = puStack_50;
      func_0x000107c61174(puVar5);
      func_0x000107c61574(puVar6);
      func_0x000107c57364(uStack_48);
      func_0x000107c61170(puVar3);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(uStack_48);
      return puVar5;
    }
    func_0x000101c6b61c(0);
  }
  else {
    func_0x000101c6b608(0);
  }
  puStack_78 = (undefined *)CONCAT44(puStack_78._4_4_,iVar2);
  func_0x000107c60614();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c6b608);
  (*pcVar1)();
}



/* Entry: 101c6b608; end: 101c6b62f;  */

void FUN_101c6b608(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110460548;
  if (lRam0000000112e0db10 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e0db10 = param_1;
  }
  return;
}



/* Entry: 101c6b630; end: 101c6b673;  */

void FUN_101c6b630(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101c6b674; end: 101c6b72b;  */

/* WARNING: Possible PIC construction at 0x000101c6b708: Changing call to branch */

void FUN_101c6b674(undefined *param_1,long param_2,undefined8 param_3)

{
  if (param_2 == 0) {
    if (param_1 != (undefined *)0x0) {
      func_0x000107c61174();
      func_0x000107c5bd10();
      func_0x000107c610f8(PTR_PTR_1126a8d00);
      func_0x000107c47094();
      goto code_r0x000107c61170;
    }
    param_1 = PTR_PTR_1126a8d00;
    func_0x000107c610f8(PTR_PTR_1126a8d00);
  }
  else {
    param_1 = PTR_PTR_1126a8d00;
    func_0x000107c610f8(PTR_PTR_1126a8d00);
  }
  func_0x000107c47094();
  func_0x000107c43b74(param_3);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101c6b72c; end: 101c6b74f;  */

/* WARNING: Possible PIC construction at 0x000101c6b708: Changing call to branch */

void FUN_101c6b72c(undefined *param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    if (param_1 != (undefined *)0x0) {
      func_0x000107c61174();
      func_0x000107c5bd10();
      func_0x000107c610f8(PTR_PTR_1126a8d00);
      func_0x000107c47094();
      goto code_r0x000107c61170;
    }
    param_1 = PTR_PTR_1126a8d00;
    func_0x000107c610f8(PTR_PTR_1126a8d00,0,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  }
  else {
    param_1 = PTR_PTR_1126a8d00;
    func_0x000107c610f8(PTR_PTR_1126a8d00,param_2,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  }
  func_0x000107c47094();
  func_0x000107c43b74(uVar1);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101c6b750; end: 101c6b7ab; -[_TtC21ComposerPhoneVerifier21ComposerPhoneVerifier sendCodeWithRequest:] */

void FUN_101c6b750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101c6b3e8(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101c6b7ac; end: 101c6b95f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101c6b7ac(long param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x000107c614f0();
  puVar3 = PTR_PTR_1126b8ac0;
  func_0x000107c610f8(PTR_PTR_1126b8ac0);
  func_0x000107c453e4();
  lVar4 = param_1;
  func_0x000107c4e0e8();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c570f0(puVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c5d830();
  iVar2 = (int)param_1;
  if ((iVar2 != 0) && (iVar2 != 1)) {
    FUN_101c6b608(0);
    puStack_78 = (undefined *)CONCAT44(puStack_78._4_4_,iVar2);
    func_0x000107c60614();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c6b960);
    (*pcVar1)();
  }
  func_0x000107c5a298(puVar3);
  puVar5 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x0001000d224c(&uStack_48);
  puVar6 = &UNK_1104604b0;
  func_0x000107c613fc(&UNK_1104604b0,0x20,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = unaff_x20;
  pcStack_58 = FUN_101c6ba18;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  uStack_68 = 0x101c6bcfc;
  puStack_60 = &UNK_1104604c8;
  ppuVar7 = &puStack_78;
  puStack_50 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar6 = puStack_50;
  func_0x000107c61174(puVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c401c4(uStack_48);
  func_0x000107c61170(puVar3);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uStack_48);
  return puVar5;
}



/* Entry: 101c6b960; end: 101c6ba17;  */

/* WARNING: Possible PIC construction at 0x000101c6b9f4: Changing call to branch */

void FUN_101c6b960(undefined *param_1,long param_2,undefined8 param_3)

{
  if (param_2 == 0) {
    if (param_1 != (undefined *)0x0) {
      func_0x000107c61174();
      func_0x000107c5bd10();
      func_0x000107c610f8(PTR_PTR_1126a8cf8);
      func_0x000107c47094();
      goto code_r0x000107c61170;
    }
    param_1 = PTR_PTR_1126a8cf8;
    func_0x000107c610f8(PTR_PTR_1126a8cf8);
  }
  else {
    param_1 = PTR_PTR_1126a8cf8;
    func_0x000107c610f8(PTR_PTR_1126a8cf8);
  }
  func_0x000107c47094();
  func_0x000107c43b74(param_3);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101c6ba18; end: 101c6ba1f;  */

/* WARNING: Possible PIC construction at 0x000101c6b9f4: Changing call to branch */

void FUN_101c6ba18(undefined *param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    if (param_1 != (undefined *)0x0) {
      func_0x000107c61174();
      func_0x000107c5bd10();
      func_0x000107c610f8(PTR_PTR_1126a8cf8);
      func_0x000107c47094();
      goto code_r0x000107c61170;
    }
    param_1 = PTR_PTR_1126a8cf8;
    func_0x000107c610f8(PTR_PTR_1126a8cf8,0,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  }
  else {
    param_1 = PTR_PTR_1126a8cf8;
    func_0x000107c610f8(PTR_PTR_1126a8cf8,param_2,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  }
  func_0x000107c47094();
  func_0x000107c43b74(uVar1);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101c6ba20; end: 101c6bb8f; -[_TtC21ComposerPhoneVerifier21ComposerPhoneVerifier verifyCodeWithRequest:] */

void FUN_101c6ba20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101c6b7ac(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101c6bb90; end: 101c6bb93;  */

void FUN_101c6bb90(void)

{
  return;
}



/* Entry: 101c6bb94; end: 101c6bc0b;  */

/* WARNING: Possible PIC construction at 0x000101c6bbf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c6bbf4) */

void FUN_101c6bb94(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 101c6bc0c; end: 101c6bc5b; -[_TtC21ComposerPhoneVerifier21ComposerPhoneVerifier reportExitWithRequest:] */

/* WARNING: Possible PIC construction at 0x000101c6bc44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c6bc48) */

void FUN_101c6bc0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000101c6ba7c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101c6bc5c; end: 101c6bcbb; -[_TtC21ComposerPhoneVerifier21ComposerPhoneVerifier init] */

void FUN_101c6bc5c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerPhoneVerifier.ComposerPhoneVerifier",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c6bc88);
  (*pcVar1)();
}



/* Entry: 101c6bcbc; end: 101c6bccb; -[_TtC21ComposerPhoneVerifier21ComposerPhoneVerifier .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c6bcbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e0dad8));
  return;
}



/* Entry: 101c6bccc; end: 101c6bceb;  */

void FUN_101c6bccc(void)

{
  func_0x000107c61168(&PTR_PTR_1127fe4a0);
  return;
}



/* Entry: 101c6bcec; end: 101c6bd07;  */

void FUN_101c6bcec(long param_1,long param_2)

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



/* Entry: 101c6bd08; end: 101c6be63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c6bd08(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  uVar1 = uStack_68;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  lVar2 = 0;
  FUN_101c6bccc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar4 = &UNK_1104605b0;
  func_0x000107c613fc(&UNK_1104605b0,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uStack_58;
  *(undefined8 *)(puVar4 + 0x18) = uStack_60;
  *(undefined8 *)(puVar4 + 0x20) = uVar1;
  func_0x0001000285a8(0x112e0dad0,&UNK_10d9e7f70);
  func_0x000107c613fc();
  uVar5 = uStack_58;
  func_0x000107c61174(uStack_58);
  uVar6 = uStack_60;
  func_0x000107c61174(uStack_60);
  func_0x000107c615f0(uVar1);
  uVar7 = 0x101c6be80;
  func_0x0001000bdd8c(0x101c6be80,puVar4);
  *(undefined8 *)(lVar3 + _DAT_112e0dad8) = uVar7;
  plVar8 = &lStack_78;
  lStack_78 = lVar3;
  lStack_70 = lVar2;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c615e8(uVar1);
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 101c6be64; end: 101c6be8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c6be64(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  uVar1 = uStack_68;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  lVar2 = 0;
  FUN_101c6bccc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar4 = &UNK_1104605b0;
  func_0x000107c613fc(&UNK_1104605b0,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uStack_58;
  *(undefined8 *)(puVar4 + 0x18) = uStack_60;
  *(undefined8 *)(puVar4 + 0x20) = uVar1;
  func_0x0001000285a8(0x112e0dad0,&UNK_10d9e7f70);
  func_0x000107c613fc();
  uVar5 = uStack_58;
  func_0x000107c61174(uStack_58);
  uVar6 = uStack_60;
  func_0x000107c61174(uStack_60);
  func_0x000107c615f0(uVar1);
  uVar7 = 0x101c6be80;
  func_0x0001000bdd8c(0x101c6be80,puVar4);
  *(undefined8 *)(lVar3 + _DAT_112e0dad8) = uVar7;
  plVar8 = &lStack_78;
  lStack_78 = lVar3;
  lStack_70 = lVar2;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c615e8(uVar1);
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 101c6be8c; end: 101c6c06b;  */

long FUN_101c6be8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x000100964194();
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = param_1;
  func_0x0001009641b4();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    *(undefined **)(unaff_x20 + 0x50) = puVar2;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c6c06c);
  (*pcVar1)();
}



/* Entry: 101c6c06c; end: 101c6c0e7;  */

void FUN_101c6c06c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101c6c0e8; end: 101c6c12b;  */

undefined1  [16] FUN_101c6c0e8(void)

{
  return ZEXT816(0x1104606e8);
}



/* Entry: 101c6c12c; end: 101c6c157;  */

undefined8 FUN_101c6c12c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 101c6c158; end: 101c6c40b;  */

void FUN_101c6c158(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100296a7c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a8d08;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f006f00);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef12d70);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 101c6c40c; end: 101c6c417;  */

void FUN_101c6c40c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100296a7c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a8d08;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f006f00);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef12d70);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 101c6c418; end: 101c6c47b;  */

undefined8
FUN_101c6c418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101c6c47c(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 101c6c47c; end: 101c6c6df;  */

void FUN_101c6c47c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126a8d08;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f006f00);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef12d70);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return;
}



/* Entry: 101c6c6e0; end: 101c6c723;  */

void FUN_101c6c6e0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c6c724; end: 101c6c777;  */

void FUN_101c6c724(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c6c778; end: 101c6c77f;  */

void FUN_101c6c778(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c6c780; end: 101c6c7cf;  */

undefined8 FUN_101c6c780(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c6c7d0; end: 101c6c813;  */

undefined1  [16] FUN_101c6c7d0(void)

{
  return ZEXT816(0x1104607b0);
}



/* Entry: 101c6c814; end: 101c6c83b;  */

void FUN_101c6c814(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c6c83c; end: 101c6c843;  */

undefined8 FUN_101c6c83c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c6c844; end: 101c6c8a7;  */

undefined8
FUN_101c6c844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101c6c8a8(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 101c6c8a8; end: 101c6cb0b;  */

void FUN_101c6c8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126a8d10;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1ae00);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef220b0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return;
}



/* Entry: 101c6cb0c; end: 101c6cb4f;  */

void FUN_101c6cb0c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c6cb50; end: 101c6cb9f;  */

undefined8 FUN_101c6cb50(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c6cba0; end: 101c6cbe3;  */

undefined1  [16] FUN_101c6cba0(void)

{
  return ZEXT816(0x110460878);
}



/* Entry: 101c6cbe4; end: 101c6cc0b;  */

void FUN_101c6cbe4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c6cc0c; end: 101c6cc13;  */

undefined8 FUN_101c6cc0c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c6cc14; end: 101c6cfe7;  */

long FUN_101c6cc14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  puVar1 = PTR_PTR_1126a8d18;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar1);
  uVar2 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efbb870);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f006f20);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef26b50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f006f40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  return unaff_x20;
}



/* Entry: 101c6cfe8; end: 101c6d053;  */

void FUN_101c6cfe8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 101c6d054; end: 101c6d0a3;  */

undefined8 FUN_101c6d054(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c6d0a4; end: 101c6d0df;  */

undefined1  [16] FUN_101c6d0a4(void)

{
  return ZEXT816(0x110460940);
}



/* Entry: 101c6d0e0; end: 101c6d14f;  */

undefined8 FUN_101c6d0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x00010098b720(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 101c6d150; end: 101c6d183;  */

void FUN_101c6d150(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c6d184; end: 101c6d1d3;  */

undefined8 FUN_101c6d184(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c6d1d4; end: 101c6d20f;  */

undefined1  [16] FUN_101c6d1d4(void)

{
  return ZEXT816(0x1104609e8);
}



/* Entry: 101c6d210; end: 101c6d8bf;  */

void FUN_101c6d210(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
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
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x0001002b8dc4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  puVar1 = PTR_PTR_1126a8d28;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar7 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar13 = 0x7265536f69647561;
  func_0x000107c5fadc(0x7265536f69647561,0xed00007365636976);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar13);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef220b0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar13 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f006f80);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef252f0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  uVar13 = uVar14;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  *(undefined8 *)(param_2 + 0x68) = uVar13;
  *param_1 = param_2;
  return;
}



/* Entry: 101c6d8c0; end: 101c6d8fb;  */

void FUN_101c6d8c0(void)

{
  long unaff_x20;
  
  FUN_101c6d210(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 101c6d8fc; end: 101c6ded7;  */

void FUN_101c6d8fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  puVar1 = PTR_PTR_1126a8d28;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x7265536f69647561;
  func_0x000107c5fadc(0x7265536f69647561,0xed00007365636976);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef220b0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f006f80);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef252f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  *(undefined **)(unaff_x20 + 0x68) = puVar3;
  return;
}



/* Entry: 101c6ded8; end: 101c6df6b;  */

void FUN_101c6ded8(void)

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
  return;
}



/* Entry: 101c6df6c; end: 101c6dfbf;  */

void FUN_101c6df6c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c6dfc0; end: 101c6dfc7;  */

void FUN_101c6dfc0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c6dfc8; end: 101c6e017;  */

undefined8 FUN_101c6dfc8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c6e018; end: 101c6e05b;  */

undefined1  [16] FUN_101c6e018(void)

{
  return ZEXT816(0x110460a90);
}



/* Entry: 101c6e05c; end: 101c6e083;  */

void FUN_101c6e05c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c6e084; end: 101c6e08b;  */

undefined8 FUN_101c6e084(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c6e08c; end: 101c6e113;  */

undefined8
FUN_101c6e08c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x0001007e5678(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return uVar1;
}



/* Entry: 101c6e114; end: 101c6e197;  */

void FUN_101c6e114(void)

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
  return;
}



/* Entry: 101c6e198; end: 101c6e23f;  */

void FUN_101c6e198(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c6e240; end: 101c6e28f;  */

undefined8 FUN_101c6e240(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c6e290; end: 101c6e303;  */

void FUN_101c6e290(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c6e304; end: 101c6e32b;  */

void FUN_101c6e304(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c6e32c; end: 101c6e333;  */

undefined8 FUN_101c6e32c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c6e334; end: 101c6e3b3;  */

void FUN_101c6e334(long param_1,code *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    (*param_2)();
  }
  else {
    FUN_101c6e3b4(param_2,param_3);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 101c6e3b4; end: 101c6e74f;  */

/* WARNING: Possible PIC construction at 0x000101c6e464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c6e4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c6e57c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c6e590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c6e5b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c6e6a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c6e6b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c6e6c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c6e728: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c6e6b8) */
/* WARNING: Removing unreachable block (ram,0x000101c6e6a8) */
/* WARNING: Removing unreachable block (ram,0x000101c6e5bc) */
/* WARNING: Removing unreachable block (ram,0x000101c6e6e8) */
/* WARNING: Removing unreachable block (ram,0x000101c6e5e0) */
/* WARNING: Removing unreachable block (ram,0x000101c6e594) */
/* WARNING: Removing unreachable block (ram,0x000101c6e580) */
/* WARNING: Removing unreachable block (ram,0x000101c6e4c0) */
/* WARNING: Removing unreachable block (ram,0x000101c6e468) */
/* WARNING: Removing unreachable block (ram,0x000101c6e72c) */

void FUN_101c6e3b4(code *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100bc7fa4();
  if ((*(byte *)(unaff_x20 + 0x58) & 1) != 0) {
    (*param_1)(0,0,2);
    return;
  }
  *(undefined1 *)(unaff_x20 + 0x58) = 1;
  func_0x000107c4bc78(*(undefined8 *)(unaff_x20 + 0x50));
  lVar1 = *(long *)(unaff_x20 + 0x40);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = *(long *)(unaff_x20 + 0x48);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar4 = lVar1;
      func_0x000107c5c198();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      if (lVar4 != 0) {
        func_0x000107c5faec(lVar4);
        goto code_r0x000107c61170;
      }
    }
    func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
    puVar2 = &UNK_110460cb8;
    func_0x000107c613fc(&UNK_110460cb8,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    puVar3 = &UNK_110460d08;
    func_0x000107c613fc(&UNK_110460d08,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(code **)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = param_2;
    puVar3 = PTR_PTR_1126a8d38;
    func_0x000107c610f8(PTR_PTR_1126a8d38);
    func_0x000107c61580(puVar2,2);
    func_0x000107c61580(param_2,2);
    func_0x000107c453e4(puVar3);
    lVar4 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000106b236f4();
    func_0x000107c61180();
  }
  else {
    lVar4 = lVar1;
    func_0x000107c43f7c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c5faec();
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 101c6e750; end: 101c6e793;  */

void FUN_101c6e750(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c6e794; end: 101c6e857;  */

/* WARNING: Possible PIC construction at 0x000101c6e838: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c6e83c) */

void FUN_101c6e794(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *unaff_x20;
  uVar4 = *(undefined8 *)(lVar3 + 0x38);
  func_0x000107c614f0(uVar4);
  puVar1 = &UNK_110460cb8;
  func_0x000107c613fc(&UNK_110460cb8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,lVar3);
  puVar2 = &UNK_110460ce0;
  func_0x000107c613fc(&UNK_110460ce0,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_2);
  func_0x00010090569c(FUN_101c6e858,puVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101c6e858; end: 101c6e863;  */

void FUN_101c6e858(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    (*pcVar1)();
  }
  else {
    FUN_101c6e3b4(pcVar1,uVar3);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 101c6e864; end: 101c6e88f;  */

void FUN_101c6e864(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c6e890; end: 101c6e89b;  */

void FUN_101c6e890(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  puVar9 = auStack_68;
  func_0x000107c61428(lVar2 + 0x10,puVar9,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    (*pcVar1)();
    return;
  }
  uVar7 = *(undefined8 *)(lVar2 + 0x38);
  uVar5 = uVar7;
  func_0x000107c614f0(uVar7);
  func_0x000107c615f0(uVar7);
  func_0x000100bc7fa4(uVar5);
  func_0x000107c615e8(uVar7);
  *(undefined1 *)(lVar2 + 0x58) = 0;
  if (param_1 == 0) {
    (*pcVar1)(0,0,1);
    uVar5 = *(undefined8 *)(lVar2 + 0x50);
    func_0x000107c615f0(uVar5);
    param_1 = 0x6f707365725f6f6e;
    func_0x000107c5fadc(0x6f707365725f6f6e,0xeb0000000065736e);
    func_0x000107c4bc74(uVar5);
    func_0x000107c61574(lVar2);
    func_0x000107c615e8(uVar5);
  }
  else {
    func_0x000107c61174();
    uVar8 = param_1;
    func_0x000107c44aa4();
    if ((uVar8 & 1) == 0) {
      (*pcVar1)(0,0,1);
      uVar7 = *(undefined8 *)(lVar2 + 0x50);
      func_0x000107c615f0(uVar7);
      uVar5 = 0x6c757365725f6f6e;
      func_0x000107c5fadc(0x6c757365725f6f6e,0xe900000000000074);
      func_0x000107c4bc74(uVar7);
      func_0x000107c61574(lVar2);
      func_0x000107c615e8(uVar7);
    }
    else {
      uVar8 = param_1;
      func_0x000107c506c8();
      func_0x000107c61180();
      if (uVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c6ec9c);
        (*pcVar1)();
      }
      uVar3 = uVar8;
      func_0x000107c5bd10();
      func_0x000107c61170(uVar8);
      if ((int)uVar3 == 1) {
        uVar8 = param_1;
        func_0x000107c4e40c();
        func_0x000107c61180();
        if (uVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101c6eca0);
          (*pcVar1)();
        }
        uVar3 = uVar8;
        func_0x000101c70c98();
        func_0x000107c61170(uVar8);
        uVar8 = param_1;
        func_0x000107c506c8();
        func_0x000107c61180();
        if (uVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101c6eca8);
          (*pcVar1)();
        }
        uVar4 = uVar8;
        func_0x000107c4c8c0();
        func_0x000107c61170(uVar8);
        (*pcVar1)(uVar3,(long)(int)uVar4,0);
        func_0x000107c6142c(uVar3);
        func_0x000107c4bc7c(*(undefined8 *)(lVar2 + 0x50));
        func_0x000107c61574(lVar2);
        goto LAB_101c6ec74;
      }
      uVar8 = param_1;
      func_0x000107c506c8();
      func_0x000107c61180();
      if (uVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c6eca4);
        (*pcVar1)();
      }
      uVar3 = uVar8;
      func_0x000107c44f70();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      if (uVar3 == 0) {
        uVar8 = 0;
        puVar9 = (undefined1 *)0x0;
      }
      else {
        uVar8 = uVar3;
        func_0x000107c5faec(uVar3);
        func_0x000107c61170(uVar3);
      }
      func_0x000107c61434(puVar9);
      (*pcVar1)(uVar8,puVar9,1);
      func_0x000107c6142c(puVar9);
      uVar7 = *(undefined8 *)(lVar2 + 0x50);
      func_0x000107c615f0(uVar7);
      uVar8 = param_1;
      func_0x000107c506c8();
      func_0x000107c61180();
      if (uVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c6ecac);
        (*pcVar1)();
      }
      func_0x000107c5bd10();
      func_0x000107c61170(uVar8);
      puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
      func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                          PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar6);
      uVar5 = 0x635f737574617473;
      func_0x000107c5fadc(0x635f737574617473,0xec0000005f65646f);
      func_0x000107c6142c(0xec0000005f65646f);
      func_0x000107c4bc74(uVar7);
      func_0x000107c6142c(puVar9);
      func_0x000107c61574(lVar2);
      func_0x000107c615e8(uVar7);
    }
    func_0x000107c61170(uVar5);
  }
LAB_101c6ec74:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101c6e89c; end: 101c6e913;  */

/* WARNING: Possible PIC construction at 0x000101c6e8f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c6e8fc) */

void FUN_101c6e89c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 101c6e914; end: 101c6ecab;  */

void FUN_101c6e914(ulong param_1,long param_2,code *param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 auStack_68 [24];
  
  puVar8 = auStack_68;
  func_0x000107c61428(param_2 + 0x10,puVar8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    (*param_3)();
    return;
  }
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  uVar4 = uVar6;
  func_0x000107c614f0(uVar6);
  func_0x000107c615f0(uVar6);
  func_0x000100bc7fa4(uVar4);
  func_0x000107c615e8(uVar6);
  *(undefined1 *)(param_2 + 0x58) = 0;
  if (param_1 == 0) {
    (*param_3)(0,0,1);
    uVar4 = *(undefined8 *)(param_2 + 0x50);
    func_0x000107c615f0(uVar4);
    param_1 = 0x6f707365725f6f6e;
    func_0x000107c5fadc(0x6f707365725f6f6e,0xeb0000000065736e);
    func_0x000107c4bc74(uVar4);
    func_0x000107c61574(param_2);
    func_0x000107c615e8(uVar4);
  }
  else {
    func_0x000107c61174();
    uVar7 = param_1;
    func_0x000107c44aa4();
    if ((uVar7 & 1) == 0) {
      (*param_3)(0,0,1);
      uVar6 = *(undefined8 *)(param_2 + 0x50);
      func_0x000107c615f0(uVar6);
      uVar4 = 0x6c757365725f6f6e;
      func_0x000107c5fadc(0x6c757365725f6f6e,0xe900000000000074);
      func_0x000107c4bc74(uVar6);
      func_0x000107c61574(param_2);
      func_0x000107c615e8(uVar6);
    }
    else {
      uVar7 = param_1;
      func_0x000107c506c8();
      func_0x000107c61180();
      if (uVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c6ec9c);
        (*pcVar1)();
      }
      uVar2 = uVar7;
      func_0x000107c5bd10();
      func_0x000107c61170(uVar7);
      if ((int)uVar2 == 1) {
        uVar7 = param_1;
        func_0x000107c4e40c();
        func_0x000107c61180();
        if (uVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101c6eca0);
          (*pcVar1)();
        }
        uVar2 = uVar7;
        func_0x000101c70c98();
        func_0x000107c61170(uVar7);
        uVar7 = param_1;
        func_0x000107c506c8();
        func_0x000107c61180();
        if (uVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101c6eca8);
          (*pcVar1)();
        }
        uVar3 = uVar7;
        func_0x000107c4c8c0();
        func_0x000107c61170(uVar7);
        (*param_3)(uVar2,(long)(int)uVar3,0);
        func_0x000107c6142c(uVar2);
        func_0x000107c4bc7c(*(undefined8 *)(param_2 + 0x50));
        func_0x000107c61574(param_2);
        goto LAB_101c6ec74;
      }
      uVar7 = param_1;
      func_0x000107c506c8();
      func_0x000107c61180();
      if (uVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c6eca4);
        (*pcVar1)();
      }
      uVar2 = uVar7;
      func_0x000107c44f70();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      if (uVar2 == 0) {
        uVar7 = 0;
        puVar8 = (undefined1 *)0x0;
      }
      else {
        uVar7 = uVar2;
        func_0x000107c5faec(uVar2);
        func_0x000107c61170(uVar2);
      }
      func_0x000107c61434(puVar8);
      (*param_3)(uVar7,puVar8,1);
      func_0x000107c6142c(puVar8);
      uVar6 = *(undefined8 *)(param_2 + 0x50);
      func_0x000107c615f0(uVar6);
      uVar7 = param_1;
      func_0x000107c506c8();
      func_0x000107c61180();
      if (uVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c6ecac);
        (*pcVar1)();
      }
      func_0x000107c5bd10();
      func_0x000107c61170(uVar7);
      puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
      func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                          PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar5);
      uVar4 = 0x635f737574617473;
      func_0x000107c5fadc(0x635f737574617473,0xec0000005f65646f);
      func_0x000107c6142c(0xec0000005f65646f);
      func_0x000107c4bc74(uVar6);
      func_0x000107c6142c(puVar8);
      func_0x000107c61574(param_2);
      func_0x000107c615e8(uVar6);
    }
    func_0x000107c61170(uVar4);
  }
LAB_101c6ec74:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101c6ecac; end: 101c6ecc7;  */

void FUN_101c6ecac(long param_1,long param_2)

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



/* Entry: 101c6ecc8; end: 101c6eceb;  */

void FUN_101c6ecc8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c6ecec; end: 101c6ed8f; -[_TtC26SCPasskeyStoreServicesImpl16PasskeyStoreImpl passkeys] */

void FUN_101c6ecec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c6157c();
  func_0x000107c6157c(uVar2);
  uVar1 = 0x112e0e4a0;
  func_0x0001000285a8(0x112e0e4a0,&UNK_10dbbc510);
  func_0x000100075034(&uStack_38,FUN_101c6ed90,0,uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(param_1);
  uVar2 = 0;
  FUN_101c6fd8c(0);
  uVar1 = uStack_38;
  func_0x000107c5fc48(uStack_38,uVar2);
  func_0x000107c6142c(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101c6ed90; end: 101c6edab;  */

void FUN_101c6ed90(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c61434();
  return;
}



/* Entry: 101c6edac; end: 101c6edb3; -[_TtC26SCPasskeyStoreServicesImpl16PasskeyStoreImpl passkeysObservable] */

void FUN_101c6edac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x58));
  return;
}


