/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1027bd6e4; end: 1027be10f;  */

/* WARNING: Possible PIC construction at 0x0001027bd760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bda20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bde90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bdee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bdf28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027be084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027be0a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027bdf2c) */
/* WARNING: Removing unreachable block (ram,0x0001027be10c) */
/* WARNING: Removing unreachable block (ram,0x0001027be008) */
/* WARNING: Removing unreachable block (ram,0x0001027be088) */
/* WARNING: Removing unreachable block (ram,0x0001027be074) */
/* WARNING: Removing unreachable block (ram,0x0001027bdee8) */
/* WARNING: Removing unreachable block (ram,0x0001027bde94) */
/* WARNING: Removing unreachable block (ram,0x0001027bdf14) */
/* WARNING: Removing unreachable block (ram,0x0001027bdf18) */
/* WARNING: Removing unreachable block (ram,0x0001027bdecc) */
/* WARNING: Removing unreachable block (ram,0x0001027bda24) */
/* WARNING: Removing unreachable block (ram,0x0001027bdb48) */
/* WARNING: Removing unreachable block (ram,0x0001027bdb60) */
/* WARNING: Removing unreachable block (ram,0x0001027be104) */
/* WARNING: Removing unreachable block (ram,0x0001027bdbcc) */
/* WARNING: Removing unreachable block (ram,0x0001027be108) */
/* WARNING: Removing unreachable block (ram,0x0001027bdcf4) */
/* WARNING: Removing unreachable block (ram,0x0001027bddf4) */
/* WARNING: Removing unreachable block (ram,0x0001027bddfc) */
/* WARNING: Removing unreachable block (ram,0x0001027bde0c) */
/* WARNING: Removing unreachable block (ram,0x0001027bde14) */
/* WARNING: Removing unreachable block (ram,0x0001027bde24) */
/* WARNING: Removing unreachable block (ram,0x0001027bde2c) */
/* WARNING: Removing unreachable block (ram,0x0001027bde3c) */
/* WARNING: Removing unreachable block (ram,0x0001027bde44) */
/* WARNING: Removing unreachable block (ram,0x0001027bde54) */
/* WARNING: Removing unreachable block (ram,0x0001027bde6c) */
/* WARNING: Removing unreachable block (ram,0x0001027bd764) */
/* WARNING: Removing unreachable block (ram,0x0001027bd768) */
/* WARNING: Removing unreachable block (ram,0x0001027bdeec) */
/* WARNING: Removing unreachable block (ram,0x0001027bd7a0) */
/* WARNING: Removing unreachable block (ram,0x0001027be0a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027bd6e4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ebfc08);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c509b4(lVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 1027be110; end: 1027be2cb;  */

/* WARNING: Possible PIC construction at 0x0001027be14c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027be160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027be198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027be1d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027be214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027be2a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027be218) */
/* WARNING: Removing unreachable block (ram,0x0001027be1d8) */
/* WARNING: Removing unreachable block (ram,0x0001027be19c) */
/* WARNING: Removing unreachable block (ram,0x0001027be150) */
/* WARNING: Removing unreachable block (ram,0x0001027be2ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027be110(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ebfc80);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112ebfb78);
    if (lVar1 == 0) {
      uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ebfbf0) + _DAT_1130733f8);
      func_0x000107c615f0(uVar3);
      lVar1 = lVar2;
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar1 == 0) {
        func_0x00010439c014();
        func_0x000107c610f8();
        func_0x00010439b9d8(lVar1,0x17,0,0,0xffffffffffffffff,0,0,param_1,0);
        func_0x000107c3eda8(*(undefined8 *)(unaff_x20 + _DAT_112ebfc78));
        func_0x000107c61180();
        func_0x000107c42c1c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar3);
        return;
      }
    }
    else {
      func_0x000107c61174();
      func_0x000107c4f078();
      func_0x000107c61180();
      if (lVar1 == 0) {
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c4807c();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1027be2cc; end: 1027be6a3;  */

/* WARNING: Possible PIC construction at 0x0001027be3d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027be3e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027be3f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027be430: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027be3f8) */
/* WARNING: Removing unreachable block (ram,0x0001027be3e8) */
/* WARNING: Removing unreachable block (ram,0x0001027be3d8) */
/* WARNING: Removing unreachable block (ram,0x0001027be434) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027be2cc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aaf68;
  func_0x000107c610f8(PTR_PTR_1126aaf68);
  func_0x000107c47630();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112ebfc18);
  func_0x000107c61174();
  func_0x000107c4d48c(uVar3);
  func_0x000107c61180();
  func_0x000107c42cb0(*(undefined8 *)(param_2 + _DAT_112ebfc48));
  func_0x000107c61180();
  func_0x000107c4c984(*(undefined8 *)(param_2 + _DAT_112ebfc20));
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126aaf70;
  func_0x000107c610f8(PTR_PTR_1126aaf70);
  func_0x000107c61434(param_4);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c6142c(param_4);
  func_0x000107c463dc(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1027be6a4; end: 1027beaa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1027be6a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + _DAT_112ebfcc0);
  func_0x000107c42e5c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c3f968(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar1;
    func_0x000107c5d6fc(lVar1);
    func_0x000107c61180();
    uStack_40 = 0x1027c0570;
    uStack_38 = 0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    uStack_50 = 0x1027c05d8;
    puStack_48 = &UNK_11054e128;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(uStack_38);
    lVar4 = lVar2;
    func_0x000107c4c280(lVar2,param_2,ppuVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar2);
    lVar2 = lVar4;
    func_0x000107c5cb24(lVar4);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar1);
  }
  return lVar2;
}



/* Entry: 1027beaa4; end: 1027bf56b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1027beaa4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ebfc60) + _DAT_1130806b8);
  uVar2 = 0;
  FUN_1027c0e88(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c6157c(uVar11);
  uVar10 = 0x1027c0f28;
  func_0x0001000cb480(0x1027c0f28,0,uVar2);
  func_0x000107c61574();
  func_0x0001003a5b88();
  func_0x000107c61574(uVar10);
  func_0x000103a76c9c();
  puVar3 = PTR_PTR_1126aaff0;
  func_0x000107c610f8();
  func_0x000107c476f8();
  func_0x000107c615e8(uVar10);
  puVar4 = PTR_PTR_1126aaff8;
  func_0x000107c610f8();
  func_0x000107c463d8();
  puVar5 = PTR_PTR_1126ab000;
  func_0x000107c610f8(PTR_PTR_1126ab000);
  func_0x000107c476f4();
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ebfc18);
  func_0x000107c4d48c(uVar6);
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ebfc48);
  func_0x000107c42cb0(uVar7);
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ebfc70) + _DAT_112fda3e8);
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112ebfbf0) + _DAT_1130733e0);
  uVar10 = *puVar1;
  uVar2 = puVar1[1];
  puVar8 = PTR_PTR_1126aaf58;
  func_0x000107c610f8();
  func_0x000107c61174(uVar12);
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar10,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c47970();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar10);
  puVar9 = PTR_PTR_1126aaf90;
  func_0x000107c610f8();
  func_0x000107c49568();
  func_0x000107c53e98(puVar8);
  func_0x000107c57cac(puVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar11);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ebfba0);
  *(undefined **)(unaff_x20 + _DAT_112ebfba0) = puVar8;
  func_0x000107c61170(uVar10);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ebfbc0);
  *(undefined **)(unaff_x20 + _DAT_112ebfbc0) = puVar9;
  func_0x000107c61174(puVar9);
  func_0x000107c61170(uVar10);
  return puVar9;
}



/* Entry: 1027bf56c; end: 1027bf943;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1027bf56c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ebfc18);
  func_0x000107c4d48c(uVar3);
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ebfc58);
  func_0x000107c5b034(uVar4);
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ebfc48);
  func_0x000107c42cb0(uVar5);
  func_0x000107c61180();
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112ebfbf0) + _DAT_1130733e0);
  uVar7 = *puVar1;
  uVar2 = puVar1[1];
  puVar6 = PTR_PTR_1126aafa8;
  func_0x000107c610f8();
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar7,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c47988();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c53e98(puVar6);
  func_0x000107c57cac(puVar6);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ebfb98);
  *(undefined **)(unaff_x20 + _DAT_112ebfb98) = puVar6;
  func_0x000107c61174(puVar6);
  func_0x000107c61170(uVar7);
  return puVar6;
}



/* Entry: 1027bf944; end: 1027bfaaf;  */

void FUN_1027bf944(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c5fadc();
  uVar1 = param_1;
  func_0x000107c311e4();
  func_0x000107c61170(param_1);
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_1027be110(uVar1);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1027bfab0; end: 1027bfaef;  */

void FUN_1027bfab0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  func_0x000107c4e714(*param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d4();
  *param_1 = puVar1;
  return;
}



/* Entry: 1027bfaf0; end: 1027bfc57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027bfaf0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  func_0x000107c61428(param_3 + 0x10,auStack_70,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x000107c4065c();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar2 = param_1;
      func_0x000107c3f95c();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x000107c4aaa4();
        lVar1 = _DAT_112ebfbd8;
        if (lVar3 != *(long *)(param_2 + _DAT_112ebfbd8)) {
          lVar3 = lVar2;
          func_0x000107c4aaa4();
          *(long *)(param_2 + lVar1) = lVar3;
          uVar4 = *(undefined8 *)(param_2 + _DAT_112ebfbe0);
          *(long *)(param_2 + _DAT_112ebfbe0) = lVar2;
          func_0x000107c61174(lVar2);
          func_0x000107c61170(uVar4);
          FUN_1027bfc58(lVar2,param_3);
        }
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_1);
        param_2 = lVar2;
        goto LAB_1027bfc3c;
      }
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_3);
      *(undefined8 *)(param_2 + _DAT_112ebfbd8) = 0;
      param_3 = *(long *)(param_2 + _DAT_112ebfbe0);
      *(undefined8 *)(param_2 + _DAT_112ebfbe0) = 0;
    }
    func_0x000107c61170(param_2);
    param_2 = param_3;
  }
LAB_1027bfc3c:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1027bfc58; end: 1027c0523;  */

/* WARNING: Possible PIC construction at 0x0001027bfca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bfcf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bfd10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bfd64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bfd7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bfdc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bfdd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bfdf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bfe34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bfe4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bfe84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bffc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c0060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c0154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c0170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bff10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bff48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bff74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027bff4c) */
/* WARNING: Removing unreachable block (ram,0x0001027bff14) */
/* WARNING: Removing unreachable block (ram,0x0001027c0174) */
/* WARNING: Removing unreachable block (ram,0x0001027c0158) */
/* WARNING: Removing unreachable block (ram,0x0001027c0064) */
/* WARNING: Removing unreachable block (ram,0x0001027bffc8) */
/* WARNING: Removing unreachable block (ram,0x0001027bfe88) */
/* WARNING: Removing unreachable block (ram,0x0001027bfecc) */
/* WARNING: Removing unreachable block (ram,0x0001027bfe8c) */
/* WARNING: Removing unreachable block (ram,0x0001027bffb0) */
/* WARNING: Removing unreachable block (ram,0x0001027bfeb4) */
/* WARNING: Removing unreachable block (ram,0x0001027bffb4) */
/* WARNING: Removing unreachable block (ram,0x0001027bfe50) */
/* WARNING: Removing unreachable block (ram,0x0001027c019c) */
/* WARNING: Removing unreachable block (ram,0x0001027bfe6c) */
/* WARNING: Removing unreachable block (ram,0x0001027bfe38) */
/* WARNING: Removing unreachable block (ram,0x0001027bfdf4) */
/* WARNING: Removing unreachable block (ram,0x0001027bfdd8) */
/* WARNING: Removing unreachable block (ram,0x0001027bfdf8) */
/* WARNING: Removing unreachable block (ram,0x0001027bfe00) */
/* WARNING: Removing unreachable block (ram,0x0001027bfddc) */
/* WARNING: Removing unreachable block (ram,0x0001027bfdc8) */
/* WARNING: Removing unreachable block (ram,0x0001027bfd80) */
/* WARNING: Removing unreachable block (ram,0x0001027bfd68) */
/* WARNING: Removing unreachable block (ram,0x0001027bfd14) */
/* WARNING: Removing unreachable block (ram,0x0001027bfcfc) */
/* WARNING: Removing unreachable block (ram,0x0001027bfca8) */
/* WARNING: Removing unreachable block (ram,0x0001027bff78) */

void FUN_1027bfc58(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c40488();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x000107c427c0();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c427c0();
      func_0x000107c61180();
      if (param_1 == 0) {
        func_0x0001064f2bec(0,0,0);
        func_0x000107c61180();
        param_1 = 0;
      }
      else {
        func_0x000107c4a804();
        func_0x000107c61180();
      }
    }
    else {
      func_0x000107c4a8c4();
      func_0x000107c61180();
      param_1 = lVar1;
    }
  }
  else {
    func_0x000107c5ee30();
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027c0524; end: 1027c065b;  */

void FUN_1027c0524(long param_1,undefined8 param_2)

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



/* Entry: 1027c065c; end: 1027c06bb; -[_TtC30ChatCustomizationHubEntryPoint30ChatCustomizationHubEntryPoint init] */

void FUN_1027c065c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatCustomizationHubEntryPoint.ChatCustomizationHubEntryPoint",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c0688);
  (*pcVar1)();
}



/* Entry: 1027c06bc; end: 1027c0963; -[_TtC30ChatCustomizationHubEntryPoint30ChatCustomizationHubEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027c06d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c06f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c0718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c0738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c0758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c0778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c0798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c07b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c07d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c07f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c0818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c0838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c0858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c0878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c0898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c08b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c08d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c08f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c0918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c0938: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027c091c) */
/* WARNING: Removing unreachable block (ram,0x0001027c08fc) */
/* WARNING: Removing unreachable block (ram,0x0001027c08dc) */
/* WARNING: Removing unreachable block (ram,0x0001027c08bc) */
/* WARNING: Removing unreachable block (ram,0x0001027c089c) */
/* WARNING: Removing unreachable block (ram,0x0001027c087c) */
/* WARNING: Removing unreachable block (ram,0x0001027c085c) */
/* WARNING: Removing unreachable block (ram,0x0001027c083c) */
/* WARNING: Removing unreachable block (ram,0x0001027c081c) */
/* WARNING: Removing unreachable block (ram,0x0001027c07fc) */
/* WARNING: Removing unreachable block (ram,0x0001027c07dc) */
/* WARNING: Removing unreachable block (ram,0x0001027c07bc) */
/* WARNING: Removing unreachable block (ram,0x0001027c079c) */
/* WARNING: Removing unreachable block (ram,0x0001027c077c) */
/* WARNING: Removing unreachable block (ram,0x0001027c075c) */
/* WARNING: Removing unreachable block (ram,0x0001027c073c) */
/* WARNING: Removing unreachable block (ram,0x0001027c071c) */
/* WARNING: Removing unreachable block (ram,0x0001027c06fc) */
/* WARNING: Removing unreachable block (ram,0x0001027c06dc) */
/* WARNING: Removing unreachable block (ram,0x0001027c093c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c06bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebfbf0));
  return;
}



/* Entry: 1027c0964; end: 1027c09db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c0964(long param_1)

{
  long *unaff_x20;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(*unaff_x20 + _DAT_112ebfbf0))
              + 0x98))();
  if (param_1 != 0) {
    FUN_1027bc540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  FUN_1027bcca0();
  return;
}



/* Entry: 1027c09dc; end: 1027c09e3;  */

undefined8 FUN_1027c09dc(void)

{
  return 0;
}



/* Entry: 1027c09e4; end: 1027c0aff; -[_TtC30ChatCustomizationHubEntryPoint30ChatCustomizationHubEntryPoint plusSubscribeDidDismiss] */

/* WARNING: Possible PIC construction at 0x0001027c0a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c0a3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027c0a24) */
/* WARNING: Removing unreachable block (ram,0x0001027c0a40) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c09e4(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1027c0b00; end: 1027c0b83; -[_TtC30ChatCustomizationHubEntryPoint30ChatCustomizationHubEntryPoint reportDidCompleteWithCancelled:] */

/* WARNING: Possible PIC construction at 0x0001027c0b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c0b58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027c0b40) */
/* WARNING: Removing unreachable block (ram,0x0001027c0b5c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c0b00(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1027c0b84; end: 1027c0b87; -[_TtC30ChatCustomizationHubEntryPoint30ChatCustomizationHubEntryPoint didCompleteRemixingWallpaperWithDidRemix:] */

void FUN_1027c0b84(void)

{
  return;
}



/* Entry: 1027c0b88; end: 1027c0bd7; -[_TtC30ChatCustomizationHubEntryPoint30ChatCustomizationHubEntryPoint cardToExpandTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c0b88(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = *(undefined **)(param_1 + _DAT_112ebfb78);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIViewController_1126af898);
    func_0x000107c453e4();
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1027c0bd8; end: 1027c0bf7; -[_TtC30ChatCustomizationHubEntryPoint30ChatCustomizationHubEntryPoint cardTransitionWillBeginWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c0bd8(long param_1)

{
  if (*(long *)(param_1 + _DAT_112ebfb78) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112ebfb78),PTR_s_dismissViewControllerAnimated_co_1125bec68,
               1,0);
    return;
  }
  return;
}



/* Entry: 1027c0bf8; end: 1027c0c67; -[_TtC30ChatCustomizationHubEntryPoint30ChatCustomizationHubEntryPoint cardTransitionShouldBeginWithView:touchLocation:] */

uint FUN_1027c0bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_1027c0ce0(param_1,param_2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 1027c0c68; end: 1027c0cdf;  */

void FUN_1027c0c68(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1027c0e88(0,param_1,param_2);
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



/* Entry: 1027c0ce0; end: 1027c0d7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1027c0ce0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ebfb78);
  if (lVar1 != 0) {
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c61494();
      if (lVar2 != 0) {
        func_0x000107c3f42c(param_1,param_2);
        func_0x000107c61170(lVar1);
        return (uint)lVar2 ^ 1;
      }
      func_0x000107c61170(lVar1);
    }
  }
  return 1;
}



/* Entry: 1027c0d80; end: 1027c0d9f;  */

void FUN_1027c0d80(void)

{
  func_0x000107c61168(&PTR_PTR_1128628e8);
  return;
}



/* Entry: 1027c0da0; end: 1027c0e03;  */

/* WARNING: Possible PIC construction at 0x0001027be3d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027be3e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027be3f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027be430: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027be3f8) */
/* WARNING: Removing unreachable block (ram,0x0001027be3e8) */
/* WARNING: Removing unreachable block (ram,0x0001027be3d8) */
/* WARNING: Removing unreachable block (ram,0x0001027be434) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c0da0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar4 = PTR_PTR_1126aaf68;
  func_0x000107c610f8(PTR_PTR_1126aaf68);
  func_0x000107c47630();
  uVar6 = *(undefined8 *)(lVar1 + _DAT_112ebfc18);
  func_0x000107c61174();
  func_0x000107c4d48c(uVar6);
  func_0x000107c61180();
  func_0x000107c42cb0(*(undefined8 *)(lVar1 + _DAT_112ebfc48));
  func_0x000107c61180();
  func_0x000107c4c984(*(undefined8 *)(lVar1 + _DAT_112ebfc20));
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126aaf70;
  func_0x000107c610f8(PTR_PTR_1126aaf70);
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c463dc(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1027c0e04; end: 1027c0e1b;  */

void FUN_1027c0e04(void)

{
  func_0x0001027be7d0();
  return;
}



/* Entry: 1027c0e1c; end: 1027c0e3b;  */

void FUN_1027c0e1c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1027bcf7c();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1027c0e3c; end: 1027c0e6f;  */

void FUN_1027c0e3c(void)

{
  long unaff_x20;
  
  func_0x000107c5057c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1027c0e70; end: 1027c0e87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c0e70(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c61428(lVar5 + 0x10,auStack_70,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    func_0x000107c4065c();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar3 = param_1;
      func_0x000107c3f95c();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x000107c4aaa4();
        lVar1 = _DAT_112ebfbd8;
        if (lVar4 != *(long *)(lVar2 + _DAT_112ebfbd8)) {
          lVar4 = lVar3;
          func_0x000107c4aaa4();
          *(long *)(lVar2 + lVar1) = lVar4;
          uVar6 = *(undefined8 *)(lVar2 + _DAT_112ebfbe0);
          *(long *)(lVar2 + _DAT_112ebfbe0) = lVar3;
          func_0x000107c61174(lVar3);
          func_0x000107c61170(uVar6);
          FUN_1027bfc58(lVar3,lVar5);
        }
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(param_1);
        lVar2 = lVar3;
        goto LAB_1027bfc3c;
      }
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar5);
      *(undefined8 *)(lVar2 + _DAT_112ebfbd8) = 0;
      lVar5 = *(long *)(lVar2 + _DAT_112ebfbe0);
      *(undefined8 *)(lVar2 + _DAT_112ebfbe0) = 0;
    }
    func_0x000107c61170(lVar2);
    lVar2 = lVar5;
  }
LAB_1027bfc3c:
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1027c0e88; end: 1027c0ec7;  */

void FUN_1027c0e88(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1027c0ec8; end: 1027c0f37;  */

void FUN_1027c0ec8(long param_1,long param_2)

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



/* Entry: 1027c0f38; end: 1027c102f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1027c0f38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  lVar1 = unaff_x20 + _DAT_112ebfd08;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ebfd10) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfd18) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfd20) = param_3;
  puVar2 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61154(&stack0xffffffffffffffb0,puVar2,0,0);
  func_0x000107c61180();
  func_0x000107c54394();
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return puVar3;
}



/* Entry: 1027c1030; end: 1027c109f; -[_TtC30ChatCustomizationHubEntryPoint34ChatCustomizationHubViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c1030(long param_1)

{
  code *pcVar1;
  
  param_1 = param_1 + _DAT_112ebfd08;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107c61614(param_1,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "ChatCustomizationHubEntryPoint/ChatCustomizationHubViewController.swift",0x47
                      ,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c10a0);
  (*pcVar1)();
}



/* Entry: 1027c10a0; end: 1027c113b; -[_TtC30ChatCustomizationHubEntryPoint34ChatCustomizationHubViewController loadView] */

/* WARNING: Possible PIC construction at 0x0001027c1120: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027c1124) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c10a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ebfd18);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ebfd20);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112ebfd10);
  puVar1 = PTR_PTR_1126ab010;
  func_0x000107c610f8(PTR_PTR_1126ab010);
  func_0x000107c61174(param_1);
  func_0x000107c49520(puVar1,param_2,uVar2,uVar3,uVar4);
  func_0x000107c5a568(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1027c113c; end: 1027c11cf; -[_TtC30ChatCustomizationHubEntryPoint34ChatCustomizationHubViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c113c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidDisappear__112684c48;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  lVar2 = param_1;
  func_0x000107c49aa0();
  if ((int)lVar2 != 0) {
    lVar2 = param_1 + _DAT_112ebfd08;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x0001027c0a68();
      func_0x000107c615e8(lVar2);
    }
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1027c11d0; end: 1027c12af;  */

void FUN_1027c11d0(undefined8 param_1,uint param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  ulong unaff_x20;
  undefined1 *puVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  ppuVar2 = &puStack_90;
  func_0x000107c614f0();
  func_0x000107c49aa0();
  if ((unaff_x20 & 1) == 0) {
    puVar3 = (undefined1 *)0x0;
    if (param_3 != 0) {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_11054e390;
      lStack_70 = param_3;
      uStack_68 = param_4;
      func_0x000107c60bc4(&puStack_90);
      uVar1 = uStack_68;
      func_0x000107c6157c(param_4);
      func_0x000107c61574(uVar1);
      puVar3 = (undefined1 *)ppuVar2;
    }
    func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_presentViewController_animated_c_112621588,
                        param_1,param_2 & 1,puVar3);
    func_0x000107c60bd0(puVar3);
  }
  return;
}



/* Entry: 1027c12b0; end: 1027c1363; -[_TtC30ChatCustomizationHubEntryPoint34ChatCustomizationHubViewController presentViewController:animated:completion:] */

/* WARNING: Possible PIC construction at 0x0001027c1348: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027c134c) */

void FUN_1027c12b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar1 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar1 = &UNK_11054e378;
    func_0x000107c613fc(&UNK_11054e378,0x18,7);
    *(long *)(puVar1 + 0x10) = param_5;
    pcVar2 = FUN_1027c143c;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1027c11d0(param_3,param_4,pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1027c1364; end: 1027c13c3; -[_TtC30ChatCustomizationHubEntryPoint34ChatCustomizationHubViewController initWithNibName:bundle:] */

void FUN_1027c1364(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatCustomizationHubEntryPoint.ChatCustomizationHubViewController",0x41,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c1390);
  (*pcVar1)();
}



/* Entry: 1027c13c4; end: 1027c141b; -[_TtC30ChatCustomizationHubEntryPoint34ChatCustomizationHubViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027c1400: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027c1404) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c13c4(long param_1)

{
  FUN_1027c1464(param_1 + _DAT_112ebfd08);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ebfd10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebfd18));
  return;
}



/* Entry: 1027c141c; end: 1027c143b;  */

void FUN_1027c141c(void)

{
  func_0x000107c61168(&PTR_PTR_112862af0);
  return;
}



/* Entry: 1027c143c; end: 1027c1463;  */

void FUN_1027c143c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001027c1444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1027c1464; end: 1027c1487;  */

undefined8 FUN_1027c1464(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1027c1488; end: 1027c14ff; -[_TtC30ChatCustomizationHubEntryPoint24DimmingComposerNavigator initWithRuntime:] */

undefined1 * FUN_1027c1488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar3 = &uStack_30;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_initWithRuntime__1125edce0;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&uStack_30,puVar1,param_3);
  func_0x0001027c1b68(0);
  func_0x000107c614e8();
  func_0x000107c537e0(puVar3);
  func_0x000107c615e8(param_3);
  return (undefined1 *)puVar3;
}



/* Entry: 1027c1500; end: 1027c15bb;  */

void FUN_1027c1500(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x000107c614f0();
  lVar1 = param_1;
  func_0x000107c4a16c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c3ebcc();
    func_0x000107c61170(lVar1);
    if ((int)lVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c59200(param_1);
      func_0x000107c61170(puVar3);
    }
  }
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_presentComponentWithPage_animate_112525e60,
                      param_1,param_2 & 1);
  return;
}



/* Entry: 1027c15bc; end: 1027c1613; -[_TtC30ChatCustomizationHubEntryPoint24DimmingComposerNavigator presentComponentWithPage:animated:] */

/* WARNING: Possible PIC construction at 0x0001027c15fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027c1600) */

void FUN_1027c15bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1027c1500(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1027c1614; end: 1027c163f; -[_TtC30ChatCustomizationHubEntryPoint24DimmingComposerNavigator init] */

void FUN_1027c1614(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatCustomizationHubEntryPoint.DimmingComposerNavigator",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c1640);
  (*pcVar1)();
}



/* Entry: 1027c1640; end: 1027c1643;  */

void FUN_1027c1640(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1027c1644; end: 1027c1663;  */

void FUN_1027c1644(void)

{
  func_0x000107c61168(&PTR_PTR_112862bc8);
  return;
}



/* Entry: 1027c1664; end: 1027c16df; -[_TtC30ChatCustomizationHubEntryPointP33_EEF743CCFDD9C23303429044EC60059734DismissableContainerViewController initWithValdiView:] */

undefined1 * FUN_1027c1664(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar3 = &uStack_30;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_initWithValdiView__1125f5a88;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_30,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c54394();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar3;
}



/* Entry: 1027c16e0; end: 1027c1737; -[_TtC30ChatCustomizationHubEntryPointP33_EEF743CCFDD9C23303429044EC60059734DismissableContainerViewController initWithCoder:] */

void FUN_1027c16e0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "ChatCustomizationHubEntryPoint/DimmingComposerNavigator.swift",0x3d,2,0x25,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c1738);
  (*pcVar1)();
}



/* Entry: 1027c1738; end: 1027c17d3;  */

void FUN_1027c1738(void)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_viewDidLoad_112684cd8);
  puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  func_0x000107c48c2c();
  func_0x000107c53fcc();
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3d6fc();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c17d4);
  (*pcVar1)();
}



/* Entry: 1027c17d4; end: 1027c17fb; -[_TtC30ChatCustomizationHubEntryPointP33_EEF743CCFDD9C23303429044EC60059734DismissableContainerViewController viewDidLoad] */

void FUN_1027c17d4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1027c1738();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027c17fc; end: 1027c1a5f;  */

void FUN_1027c17fc(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long unaff_x20;
  double dVar11;
  double dVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar10 = &puStack_90;
  lVar7 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c5cf78(param_5);
  dVar11 = param_2;
  func_0x000107c61170(lVar7);
  lVar7 = param_5;
  func_0x000107c5bcc0();
  if (lVar7 - 3U < 2) {
    lVar7 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c5dc98(param_5);
    dVar12 = dVar11;
    func_0x000107c61170(lVar7);
    lVar7 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c1a5c);
      (*pcVar1)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(lVar7);
    func_0x000107c609b0(param_1,dVar12,param_3,param_4);
    param_2 = param_2 / param_1;
    bVar2 = false;
    bVar4 = true;
    bVar5 = false;
    if (0.0 <= dVar11) {
      bVar2 = false;
      bVar4 = false;
      bVar5 = true;
      if (!NAN(param_2)) {
        bVar2 = param_2 < 0.2;
        bVar4 = param_2 == 0.2;
        bVar5 = false;
      }
    }
    bVar3 = false;
    bVar6 = false;
    if (bVar4 || bVar2 != bVar5) {
      bVar3 = false;
      bVar6 = true;
      if (!NAN(dVar11)) {
        bVar3 = dVar11 < 100.0;
        bVar6 = false;
      }
    }
    if (bVar3 == bVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
    puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar9 = &UNK_11054e3c8;
    func_0x000107c613fc(&UNK_11054e3c8,0x18,7);
    *(long *)(puVar9 + 0x10) = unaff_x20;
    pcStack_70 = FUN_1027c1d04;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_11054e3e0;
    puStack_68 = puVar9;
    func_0x000107c60bc4(&puStack_90);
    puVar9 = puStack_68;
    func_0x000107c61174();
    func_0x000107c61574(puVar9);
    func_0x000107c3dcd8(0x3fd3333333333333,0,0x3fe999999999999a,0,puVar8);
    func_0x000107c60bd0(ppuVar10);
  }
  else if (lVar7 == 2) {
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c1a60);
      (*pcVar1)();
    }
    dVar11 = 0.0;
    if (0.0 < param_2) {
      dVar11 = param_2;
    }
    func_0x000107c60890(&puStack_90,0,dVar11);
    func_0x000107c5a03c(unaff_x20);
    func_0x000107c61170(unaff_x20);
  }
  return;
}



/* Entry: 1027c1a60; end: 1027c1ab7;  */

void FUN_1027c1a60(long param_1)

{
  code *pcVar1;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c5a03c();
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c1ab8);
  (*pcVar1)();
}



/* Entry: 1027c1ab8; end: 1027c1b07; -[_TtC30ChatCustomizationHubEntryPointP33_EEF743CCFDD9C23303429044EC60059734DismissableContainerViewController handlePanGesture:] */

/* WARNING: Possible PIC construction at 0x0001027c1af0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027c1af4) */

void FUN_1027c1ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1027c17fc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1027c1b08; end: 1027c1b87; -[_TtC30ChatCustomizationHubEntryPointP33_EEF743CCFDD9C23303429044EC60059734DismissableContainerViewController initWithNibName:bundle:] */

void FUN_1027c1b08(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatCustomizationHubEntryPoint.DismissableContainerViewController",0x41,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c1b34);
  (*pcVar1)();
}



/* Entry: 1027c1b88; end: 1027c1ca7;  */

uint FUN_1027c1b88(double param_1,double param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  double dVar5;
  
  puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  lVar3 = param_3;
  func_0x000107c6148c(param_3,puVar2);
  if (lVar3 == 0) {
    uVar1 = 1;
  }
  else {
    func_0x000107c61174(param_3);
    uVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c5dc98(lVar3);
    dVar5 = param_2;
    func_0x000107c61170(uVar4);
    if ((param_2 <= 0.0) || (param_1 = ABS(param_1), param_2 <= param_1)) {
      func_0x000107c61170(param_3);
      uVar1 = 0;
    }
    else {
      uVar4 = unaff_x20;
      func_0x000107c5dbdc();
      func_0x000107c61180();
      func_0x000107c4b8b8(lVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c5dbdc();
      func_0x000107c61180();
      uVar4 = unaff_x20;
      func_0x000107c3f42c(param_1,dVar5);
      func_0x000107c61170(unaff_x20);
      func_0x000107c61170(param_3);
      uVar1 = (uint)uVar4 ^ 1;
    }
  }
  return uVar1;
}



/* Entry: 1027c1ca8; end: 1027c1d03; -[_TtC30ChatCustomizationHubEntryPointP33_EEF743CCFDD9C23303429044EC60059734DismissableContainerViewController gestureRecognizerShouldBegin:] */

uint FUN_1027c1ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1027c1b88(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1027c1d04; end: 1027c1d2b;  */

void FUN_1027c1d04(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5a03c();
    func_0x000107c61170(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c1ab8);
  (*pcVar1)();
}



/* Entry: 1027c1d2c; end: 1027c1d6b; -[_TtC30ChatCustomizationHubEntryPoint30WallpaperPreviewViewController didDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c1d2c(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112ebfda0);
  func_0x000107c61174();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027c1d6c; end: 1027c1dcb; -[_TtC30ChatCustomizationHubEntryPoint30WallpaperPreviewViewController initWithValdiView:presentationType:] */

void FUN_1027c1d6c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatCustomizationHubEntryPoint.WallpaperPreviewViewController",0x3d,
                      "init(valdiView:presentationType:)",0x21,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c1d98);
  (*pcVar1)();
}



/* Entry: 1027c1dcc; end: 1027c1e07; -[_TtC30ChatCustomizationHubEntryPoint30WallpaperPreviewViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c1dcc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebfda0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ebfda8));
  return;
}



/* Entry: 1027c1e08; end: 1027c1e27;  */

void FUN_1027c1e08(void)

{
  func_0x000107c61168(&PTR_PTR_112862d28);
  return;
}



/* Entry: 1027c1e28; end: 1027c1ef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1027c1e28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar3 = param_5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112ebfda8) = param_2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112ebfda0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar2 = PTR_s_initWithValdiView_presentationTy_1125272a0;
  lStack_50 = lVar3;
  lStack_48 = param_5;
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c61154(&lStack_50,puVar2,param_1,4);
  func_0x000107c61180();
  func_0x000107c54394();
  func_0x000107c61170(plVar4);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c61574(param_4);
  return (undefined1 *)plVar4;
}



/* Entry: 1027c1ef4; end: 1027c1f5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c1ef4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1027c22e8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ebfde0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1027c1f60; end: 1027c1fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c1f60(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebfde0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027c1fcc; end: 1027c202b; -[_TtC44ChatReactionMenuScopedFactoryServiceProvider30ChatReactionMenuScopedServices init] */

void FUN_1027c1fcc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatReactionMenuScopedFactoryServiceProvider.ChatReactionMenuScopedServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c1ff8);
  (*pcVar1)();
}



/* Entry: 1027c202c; end: 1027c203b; -[_TtC44ChatReactionMenuScopedFactoryServiceProvider30ChatReactionMenuScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c202c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebfde0));
  return;
}



/* Entry: 1027c203c; end: 1027c20a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c203c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11054e5d0;
  func_0x000107c613fc(&UNK_11054e5d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1027c2380,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1027c20a8; end: 1027c2143;  */

void FUN_1027c20a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11054e4e0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11054e4e0;
  return;
}



/* Entry: 1027c2144; end: 1027c217b;  */

void FUN_1027c2144(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1027c217c; end: 1027c2183;  */

undefined8 FUN_1027c217c(void)

{
  return 0x1b;
}



/* Entry: 1027c2184; end: 1027c22b7;  */

void FUN_1027c2184(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11054e5f8;
  func_0x000107c613fc(&UNK_11054e5f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1027c2358;
  func_0x00010058fa64(FUN_1027c2358,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1027c22b8; end: 1027c22e7;  */

undefined ** FUN_1027c22b8(void)

{
  return &PTR_DAT_1130665b0;
}



/* Entry: 1027c22e8; end: 1027c2307;  */

void FUN_1027c22e8(void)

{
  func_0x000107c61168(&PTR_PTR_112862df8);
  return;
}



/* Entry: 1027c2308; end: 1027c2357;  */

undefined1  [16] FUN_1027c2308(void)

{
  return ZEXT816(0x11054e530);
}



/* Entry: 1027c2358; end: 1027c237f;  */

void FUN_1027c2358(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1027c2380; end: 1027c2383;  */

void FUN_1027c2380(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1027c2384; end: 1027c24b3;  */

/* WARNING: Possible PIC construction at 0x0001027c2454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c2464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c2474: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c2484: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027c2478) */
/* WARNING: Removing unreachable block (ram,0x0001027c2468) */
/* WARNING: Removing unreachable block (ram,0x0001027c2458) */
/* WARNING: Removing unreachable block (ram,0x0001027c2488) */

void FUN_1027c2384(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_11054e680;
  func_0x000107c613fc(&UNK_11054e680,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  uVar2 = 0x112ebfe50;
  func_0x0001000285a8(0x112ebfe50,&UNK_10dadd660);
  func_0x000107c613fc();
  uVar3 = 0x1027c2954;
  func_0x0001000841fc(0x1027c2954,puVar1,uVar2);
  func_0x000100084214(&UNK_10dadd630,0x2c,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1027c24b4; end: 1027c24e7;  */

void FUN_1027c24b4(void)

{
  long unaff_x20;
  
  FUN_1027c2384(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1027c24e8; end: 1027c24f7;  */

undefined1  [16] FUN_1027c24e8(void)

{
  return ZEXT816(0x11054e660);
}



/* Entry: 1027c24f8; end: 1027c28ef;  */

void FUN_1027c24f8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112ebfe58,&UNK_10dadd668);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1027c3a58();
  func_0x000100082720("PlusSubscribeScopeExposerSubjectServiceProvider",0x2f,2);
  puVar3 = puVar2;
  FUN_1027c3ae4();
  func_0x000100082720("PlusSubscribeScopeExposerObservableServiceProvider",0x32,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1027c2144;
  func_0x0001000823a8(FUN_1027c2144,0);
  func_0x000100082720("ChatReactionMenuScopedServicesCleanupRelayServiceProvider",0x39,2);
  func_0x0001000285a8(0x112ebfe60,&UNK_10dadd680);
  puVar5 = &UNK_11054e6a8;
  func_0x000107c613fc(&UNK_11054e6a8,0x68,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 *)(puVar5 + 0x20) = param_4;
  *(undefined8 *)(puVar5 + 0x28) = param_5;
  *(undefined8 *)(puVar5 + 0x30) = param_6;
  *(undefined8 *)(puVar5 + 0x38) = param_7;
  *(undefined8 *)(puVar5 + 0x40) = param_8;
  *(undefined8 *)(puVar5 + 0x48) = param_9;
  *(undefined8 *)(puVar5 + 0x50) = param_10;
  *(undefined8 *)(puVar5 + 0x58) = param_11;
  *(undefined8 **)(puVar5 + 0x60) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x1027c2988;
  func_0x0001000823a8(0x1027c2988,puVar5);
  func_0x000100082720("ChatReactionMenuEntryPointWrapperServiceProvider",0x30,2);
  puVar6 = puVar2;
  FUN_1027c390c();
  func_0x000100082720("ChatReactionMenuScopeGraphBridgeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112ebfe68,&UNK_10dadd670);
  puVar5 = &UNK_11054e6d0;
  func_0x000107c613fc(&UNK_11054e6d0,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(undefined8 **)(puVar5 + 0x20) = puVar6;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(pcVar4);
  pcVar7 = FUN_1027c29c4;
  func_0x0001000823a8(FUN_1027c29c4,puVar5);
  func_0x000100082720("ChatReactionMenuScopeInitializationPluginRegistryServiceProvider",0x40,2);
  func_0x0001000285a8(0x112ebfde8,&UNK_10dadd430);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x1027c29d0;
  func_0x0001000823a8(0x1027c29d0,pcVar7);
  func_0x000100082720("ChatReactionMenuScopeInitializationServiceProvider",0x32,2);
  func_0x0001000285a8(0x112ebfdd8,&UNK_10dadd420);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1027c29d8;
  func_0x0001000823a8(0x1027c29d8,uVar8);
  func_0x000100082720("ChatReactionMenuScopedServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_11054e6f8;
  func_0x000107c613fc(&UNK_11054e6f8,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x1027c29e0;
  func_0x0001000823a8(0x1027c29e0,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("ChatReactionMenuScopeEntryPointProvider",0x27,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 1027c28f0; end: 1027c29c3;  */

void FUN_1027c28f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1027c29c4; end: 1027c29e7;  */

void FUN_1027c29c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1027c3074(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("ChatReactionMenuScopeInitializationPluginRegistryServiceProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1027c29e8; end: 1027c2e33;  */

void FUN_1027c29e8(long *param_1,long param_2)

{
  undefined8 uVar1;
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
  undefined *puVar12;
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
  FUN_1027c2fc4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar5 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar6 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar7 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c6157c(uStack_c0);
  uVar11 = uVar10;
  func_0x00010017da58();
  puVar12 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x18) = puVar12;
  FUN_1027c5f9c(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar11 = auStack_70[0];
  func_0x0001027c5470(auStack_70[0],uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,puVar12);
  func_0x000107c61574(uVar10);
  *(undefined8 *)(param_2 + 0x10) = uVar11;
  *param_1 = param_2;
  return;
}



/* Entry: 1027c2e34; end: 1027c2ebf;  */

void FUN_1027c2e34(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1027c2ec0; end: 1027c2ec7;  */

undefined8 FUN_1027c2ec0(void)

{
  return 0x1b;
}



/* Entry: 1027c2ec8; end: 1027c2f4b;  */

void FUN_1027c2ec8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1027c3004,param_2,FUN_1027c3008,param_2,FUN_1027c3030,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1027c2f4c; end: 1027c2f93;  */

undefined8 FUN_1027c2f4c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1027c5f00();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 1027c2f94; end: 1027c2fc3;  */

undefined ** FUN_1027c2f94(void)

{
  return &PTR_DAT_1130665b0;
}



/* Entry: 1027c2fc4; end: 1027c2fe3;  */

void FUN_1027c2fc4(void)

{
  func_0x000107c61168(&PTR_PTR_112ebfed8);
  return;
}



/* Entry: 1027c2fe4; end: 1027c3007;  */

undefined1  [16] FUN_1027c2fe4(void)

{
  return ZEXT816(0x11054e750);
}



/* Entry: 1027c3008; end: 1027c302f;  */

void FUN_1027c3008(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1027c3030; end: 1027c3037;  */

undefined8 FUN_1027c3030(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1027c5f00();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 1027c3038; end: 1027c3073;  */

void FUN_1027c3038(undefined8 *param_1,undefined8 param_2)

{
  FUN_1027c3074();
  func_0x0001000a7f38("ChatReactionMenuScopeInitializationPluginRegistryServiceProvider",0x40,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1027c3074; end: 1027c325f;  */

void FUN_1027c3074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cbf0;
  ppuVar4 = &PTR_DAT_1130665b0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112ebff88;
  func_0x0001000285a8(0x112ebff88,&UNK_10dadd7f8);
  func_0x0001000a6ee8(&UNK_11054e750,"ChatReactionMenuEntryPointWrapperScopeInitializationPluginKey"
                      ,0x3d,2,FUN_1027c32d4,param_1,uVar2,&UNK_11054e750,&PTR_DAT_112ebfe70);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_11054e7a0;
  func_0x000107c613fc(&UNK_11054e7a0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11054e9f0,"ChatReactionMenuScopeGraphBridgeScopeInitializationPluginKey",
                      0x3c,2,FUN_1027c32dc,puVar3,uVar2,&UNK_11054e9f0,&PTR_DAT_112ec0020);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_11054e7c8;
  func_0x000107c613fc(&UNK_11054e7c8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11054e570,"ChatReactionMenuScopedServicesScopeInitializationPluginKey",
                      0x3a,2,FUN_1027c33c4,puVar3,uVar2,&UNK_11054e570,&PTR_DAT_112ebfdf0);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112ebff90;
  func_0x0001000285a8(0x112ebff90,&UNK_10dadd800);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1027c3260; end: 1027c32d3;  */

void FUN_1027c3260(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1027c3400;
  func_0x0001000823a8(0x1027c3400,param_3);
  func_0x000100082720("ChatReactionMenuEntryPointWrapperScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1027c32d4; end: 1027c32db;  */

void FUN_1027c32d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1027c3400;
  func_0x0001000823a8();
  func_0x000100082720("ChatReactionMenuEntryPointWrapperScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1027c32dc; end: 1027c331b;  */

void FUN_1027c32dc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1027c3b8c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ChatReactionMenuScopeGraphBridgeScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1027c331c; end: 1027c33c3;  */

void FUN_1027c331c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11054e7f0;
  func_0x000107c613fc(&UNK_11054e7f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1027c33f8;
  func_0x0001000823a8(FUN_1027c33f8,puVar1);
  func_0x000100082720("ChatReactionMenuScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar2;
  return;
}


