/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1032db69c; end: 1032db6c7;  */

void FUN_1032db69c(undefined8 param_1,int *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 1032db6c8; end: 1032db72b;  */

void FUN_1032db6c8(byte *param_1,long param_2)

{
  byte bVar1;
  undefined1 auStack_48 [24];
  
  bVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1032dfee4(bVar1 | 0x20);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1032db72c; end: 1032db743;  */

void FUN_1032db72c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1032db744; end: 1032db8df;  */

void FUN_1032db744(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_60;
  undefined8 uStack_58;
  
  uStack_78 = 0;
  uStack_70 = 0xe000000000000000;
  uVar4 = param_2;
  func_0x000107c602fc(0x32);
  func_0x000107c6142c(uStack_70);
  uStack_78 = 0xd00000000000001b;
  uStack_70 = 0x800000010f13bd50;
  lVar1 = param_1;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar5 = 0;
    uVar4 = 0;
  }
  else {
    lVar5 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
  }
  uVar2 = 0x112d35ff8;
  lStack_60 = lVar5;
  uStack_58 = uVar4;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  func_0x000107c5fb18(&lStack_60,uVar2);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar2);
  uVar4 = 0x800000010f13bd70;
  func_0x000107c5fb78(0xd000000000000013,0x800000010f13bd70);
  func_0x00010434e040(param_2);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  uVar3 = uStack_70;
  func_0x0001007d6c6c(1,uStack_78,uStack_70,param_4,&PTR_DAT_1106385d0);
  func_0x000107c6142c();
  FUN_1032db8e0();
  if ((uVar3 & 1) != 0) {
    func_0x000107c61428(param_3 + 0x10,&uStack_78,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      FUN_1032db964(param_1,param_2);
      func_0x000107c61170(param_3);
    }
  }
  return;
}



/* Entry: 1032db8e0; end: 1032db963;  */

uint FUN_1032db8e0(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong unaff_x20;
  
  uVar2 = unaff_x20;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(param_2);
  uVar2 = uVar3 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if ((uVar2 == 0) || (uVar2 = unaff_x20, func_0x000107c49fe4(), (uVar2 & 1) != 0)) {
    uVar1 = 0;
  }
  else {
    func_0x000107c4a144();
    uVar1 = (uint)unaff_x20 ^ 1;
  }
  return uVar1;
}



/* Entry: 1032db964; end: 1032dbc43;  */

/* WARNING: Possible PIC construction at 0x0001032dbb30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032dbb8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032dbbb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032e022c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032e0254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032e03b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032e0544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032dffec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032e0020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032e0048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032dba48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032dba9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032dba4c) */
/* WARNING: Removing unreachable block (ram,0x0001032e004c) */
/* WARNING: Removing unreachable block (ram,0x0001032e0024) */
/* WARNING: Removing unreachable block (ram,0x0001032dfff0) */
/* WARNING: Removing unreachable block (ram,0x0001032e0548) */
/* WARNING: Removing unreachable block (ram,0x0001032e03b8) */
/* WARNING: Removing unreachable block (ram,0x0001032e0258) */
/* WARNING: Removing unreachable block (ram,0x0001032e03cc) */
/* WARNING: Removing unreachable block (ram,0x0001032e042c) */
/* WARNING: Removing unreachable block (ram,0x0001032e05b0) */
/* WARNING: Removing unreachable block (ram,0x0001032e05c0) */
/* WARNING: Removing unreachable block (ram,0x0001032e043c) */
/* WARNING: Removing unreachable block (ram,0x0001032e0444) */
/* WARNING: Removing unreachable block (ram,0x0001032e0454) */
/* WARNING: Removing unreachable block (ram,0x0001032e045c) */
/* WARNING: Removing unreachable block (ram,0x0001032e054c) */
/* WARNING: Removing unreachable block (ram,0x0001032e0564) */
/* WARNING: Removing unreachable block (ram,0x0001032e0584) */
/* WARNING: Removing unreachable block (ram,0x0001032e0464) */
/* WARNING: Removing unreachable block (ram,0x0001032e0588) */
/* WARNING: Removing unreachable block (ram,0x0001032e0590) */
/* WARNING: Removing unreachable block (ram,0x0001032e027c) */
/* WARNING: Removing unreachable block (ram,0x0001032e046c) */
/* WARNING: Removing unreachable block (ram,0x0001032e0530) */
/* WARNING: Removing unreachable block (ram,0x0001032e02c8) */
/* WARNING: Removing unreachable block (ram,0x0001032e0230) */
/* WARNING: Removing unreachable block (ram,0x0001032dbbb8) */
/* WARNING: Removing unreachable block (ram,0x0001032dbbcc) */
/* WARNING: Removing unreachable block (ram,0x0001032dbbd0) */
/* WARNING: Removing unreachable block (ram,0x0001032dbbe4) */
/* WARNING: Removing unreachable block (ram,0x0001032dbc20) */
/* WARNING: Removing unreachable block (ram,0x0001032dfee4) */
/* WARNING: Removing unreachable block (ram,0x0001032dff6c) */
/* WARNING: Removing unreachable block (ram,0x0001032e0078) */
/* WARNING: Removing unreachable block (ram,0x0001032dff78) */
/* WARNING: Removing unreachable block (ram,0x0001032dffd4) */
/* WARNING: Removing unreachable block (ram,0x0001032dff90) */
/* WARNING: Removing unreachable block (ram,0x0001032e0064) */
/* WARNING: Removing unreachable block (ram,0x0001032e00c0) */
/* WARNING: Removing unreachable block (ram,0x0001032dbb90) */
/* WARNING: Removing unreachable block (ram,0x0001032dbb34) */
/* WARNING: Removing unreachable block (ram,0x0001032dbaa0) */

void FUN_1032db964(undefined8 param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  func_0x000107c614f0();
  uVar1 = param_1;
  func_0x000107c4a63c();
  uVar4 = 5;
  uVar2 = param_2;
  func_0x00010434e25c(param_2,5);
  FUN_1032d96bc(param_1);
  uVar3 = param_2;
  func_0x00010434e25c(param_2,4);
  if (((int)param_2 - 3U & 0xff) < 7) {
    func_0x0001032d9cb0(param_1,uVar4,param_3);
    if ((((uint)uVar1 | (uint)uVar3 | (uint)uVar2) & 1) == 0) {
LAB_1032dba30:
      func_0x000107c602fc(0x2d);
      goto code_r0x000107c6142c;
    }
  }
  else if (((((uint)uVar1 | (uint)uVar3) & 1) == 0) && ((param_3 & 0xff) == 0)) {
    func_0x0001032d9cb0(param_1,uVar4,0);
    if ((uVar2 & 1) == 0) goto LAB_1032dba30;
  }
  else {
    func_0x0001032d9cb0(param_1,uVar4,param_3);
  }
  func_0x000107c602fc(0x20);
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe000000000000000);
  return;
}



/* Entry: 1032dbc44; end: 1032dbd07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032dbc44(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (*(ulong *)(param_2 + _DAT_112f56110) < 9 &&
        (1L << (*(ulong *)(param_2 + _DAT_112f56110) & 0x3f) & 399U) != 0) {
      FUN_1032dbd08(uVar1);
    }
    else {
      func_0x0001007d6c6c(1,0xd000000000000037,0x800000010f13bde0,param_3,&PTR_DAT_1106385d0);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1032dbd08; end: 1032dc303;  */

/* WARNING: Possible PIC construction at 0x0001032dbd98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032dbe1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032dbe40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032dbf04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032dc2e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032dbe44) */
/* WARNING: Removing unreachable block (ram,0x0001032dbe84) */
/* WARNING: Removing unreachable block (ram,0x0001032dbec0) */
/* WARNING: Removing unreachable block (ram,0x0001032dbec8) */
/* WARNING: Removing unreachable block (ram,0x0001032dbf0c) */
/* WARNING: Removing unreachable block (ram,0x0001032dbee8) */
/* WARNING: Removing unreachable block (ram,0x0001032dbe20) */
/* WARNING: Removing unreachable block (ram,0x0001032dbe34) */
/* WARNING: Removing unreachable block (ram,0x0001032dbe3c) */
/* WARNING: Removing unreachable block (ram,0x0001032dbd9c) */
/* WARNING: Removing unreachable block (ram,0x0001032dbda0) */
/* WARNING: Removing unreachable block (ram,0x0001032dbf08) */
/* WARNING: Removing unreachable block (ram,0x0001032dbf14) */
/* WARNING: Removing unreachable block (ram,0x0001032dbf1c) */
/* WARNING: Removing unreachable block (ram,0x0001032dbf2c) */
/* WARNING: Removing unreachable block (ram,0x0001032dbf30) */
/* WARNING: Removing unreachable block (ram,0x0001032dbfcc) */
/* WARNING: Removing unreachable block (ram,0x0001032dbf3c) */
/* WARNING: Removing unreachable block (ram,0x0001032dbfc4) */
/* WARNING: Removing unreachable block (ram,0x0001032dbfd0) */
/* WARNING: Removing unreachable block (ram,0x0001032dbfe0) */
/* WARNING: Removing unreachable block (ram,0x0001032dc11c) */
/* WARNING: Removing unreachable block (ram,0x0001032dc210) */
/* WARNING: Removing unreachable block (ram,0x0001032dc254) */
/* WARNING: Removing unreachable block (ram,0x0001032dc044) */
/* WARNING: Removing unreachable block (ram,0x0001032dc2d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032dbd08(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112f56098;
  lVar4 = *(long *)(unaff_x20 + _DAT_112f56098);
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return;
    }
  }
  else {
    if (param_1 != 0) {
      FUN_1032de814(0,0x112d4d630,&PTR_PTR_1126ae6a8);
      func_0x000107c61174(lVar4);
      func_0x000107c61174(param_1);
      func_0x000107c60118(lVar4,param_1);
      lVar4 = param_1;
      goto code_r0x000107c61170;
    }
    func_0x000107c61174(lVar4);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f56130);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f56130))[1];
  func_0x000107c614f0(uVar3);
  (**(code **)(lVar1 + 0x28))(lVar4,param_1,uVar3,lVar1);
  lVar4 = *(long *)(unaff_x20 + lVar2);
  *(long *)(unaff_x20 + lVar2) = param_1;
  func_0x000107c61174(param_1);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1032dc304; end: 1032dc47b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032dc304(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  long alStack_70 [2];
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f560f8);
    func_0x000107c6157c(uVar2);
    func_0x000107c615f0(param_1);
    func_0x0001000c74f0(alStack_70);
    func_0x000107c61574(uVar2);
    lVar1 = alStack_70[0];
    if (alStack_70[0] == 0) {
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f56100);
      lStack_60 = param_1;
      uStack_58 = param_2;
      func_0x000107c6157c(uVar2);
      func_0x000100075034(FUN_1032de7fc,alStack_70,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(param_1);
      func_0x000107c61574(uVar2);
      return;
    }
    func_0x000107c615e8(param_1);
    func_0x000107c61574(lVar1);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f56100);
  func_0x000107c6157c(uVar2);
  func_0x000100075034(FUN_1032dc870,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f560f8);
  func_0x000107c6157c(uVar2);
  func_0x0001000c74f0(alStack_70);
  func_0x000107c61574(uVar2);
  if (alStack_70[0] != 0) {
    func_0x0001000d224c(alStack_70);
    func_0x000107c61574(alStack_70[0]);
    func_0x0001000a8868(alStack_70,uStack_58);
    (**(code **)(lStack_50 + 0x20))(param_1,param_2,uStack_58,lStack_50);
    func_0x0001000834e4(alStack_70);
  }
  return;
}



/* Entry: 1032dc47c; end: 1032dc6c7;  */

/* WARNING: Possible PIC construction at 0x0001032dc524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032dc574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032dc620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032dc638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032dc69c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032dc63c) */
/* WARNING: Removing unreachable block (ram,0x0001032dc624) */
/* WARNING: Removing unreachable block (ram,0x0001032dc578) */
/* WARNING: Removing unreachable block (ram,0x0001032dc528) */
/* WARNING: Removing unreachable block (ram,0x0001032dc664) */
/* WARNING: Removing unreachable block (ram,0x0001032dc544) */
/* WARNING: Removing unreachable block (ram,0x0001032dc6a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032dc47c(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112f56098);
  if (lVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112f561b0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c49824();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c4b1dc(lVar1);
    func_0x000107c61180();
    func_0x000107c5faec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1032dc6c8; end: 1032dc7ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032dc6c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined8 auStack_50 [2];
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  if (*(char *)(unaff_x20 + _DAT_112f561c0) == '\x01') {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f560e8);
    if (lVar2 == 0) {
      func_0x000104366fc4(0xd000000000000017,0x800000010f13b8f0,lVar1,&PTR_DAT_1106385d0);
    }
    else {
      func_0x000107c6157c(lVar2);
      func_0x0001000d224c(auStack_50);
      func_0x000107c61574(lVar2);
      func_0x0001032d7c98(param_1,param_2,param_3,param_4,
                          *(undefined1 *)(unaff_x20 + _DAT_112f560a8));
      func_0x000107c615e8(auStack_50[0]);
    }
  }
  return;
}



/* Entry: 1032dc7ac; end: 1032dc86f;  */

void FUN_1032dc7ac(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = &uStack_50;
  func_0x000107c61574(*param_1);
  lVar1 = 0x112f562a8;
  func_0x0001000285a8(0x112f562a8,&UNK_10dbad420);
  func_0x000107c613fc();
  func_0x000107c61614(lVar1 + 0x10,0);
  uStack_50 = param_2;
  uStack_48 = param_3;
  func_0x000107c615f0(param_2);
  uVar2 = 0x112f562b0;
  func_0x0001000285a8(0x112f562b0,&UNK_10dbad428);
  func_0x000107c6061c(&uStack_50,uVar2);
  func_0x000107c61604(lVar1 + 0x10,puVar3);
  func_0x000107c615e8(puVar3);
  *param_1 = lVar1;
  return;
}



/* Entry: 1032dc870; end: 1032dc89f;  */

void FUN_1032dc870(undefined8 *param_1)

{
  func_0x000107c61574(*param_1);
  *param_1 = 0;
  return;
}



/* Entry: 1032dc8a0; end: 1032dca73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032dc8a0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  ppuVar4 = &puStack_a0;
  if (param_1 != 0) {
    func_0x000107c40db8(0x3ff3333333333333);
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
      lVar1 = param_3 + 0x10;
      func_0x000107c61618();
      if (lVar1 != 0) {
        uVar5 = *(undefined8 *)(lVar1 + _DAT_112f56160);
        func_0x000107c615f0(uVar5);
        func_0x000107c61170(lVar1);
        puVar2 = &UNK_110638a48;
        func_0x000107c613fc(&UNK_110638a48,0x18,7);
        func_0x000107c61428(param_3 + 0x10,auStack_70,0,0);
        param_3 = param_3 + 0x10;
        func_0x000107c61618(param_3);
        func_0x000107c61614(puVar2 + 0x10,param_3);
        func_0x000107c61170(param_3);
        puVar3 = &UNK_110638c78;
        func_0x000107c613fc(&UNK_110638c78,0x30,7);
        *(undefined **)(puVar3 + 0x10) = puVar2;
        *(undefined8 *)(puVar3 + 0x18) = param_4;
        *(undefined8 *)(puVar3 + 0x20) = param_5;
        *(long *)(puVar3 + 0x28) = param_1;
        uStack_80 = 0x1032de7f0;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_1000f6b44;
        puStack_88 = &UNK_110638c90;
        puStack_78 = puVar3;
        func_0x000107c60bc4(&puStack_a0);
        puVar2 = puStack_78;
        func_0x000107c61434(param_5);
        func_0x000107c61174(param_1);
        func_0x000107c61574(puVar2);
        func_0x000107c4e524(uVar5);
        func_0x000107c61170(param_1);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c615e8(uVar5);
        return;
      }
      func_0x000107c61170(param_1);
      return;
    }
  }
  func_0x0001007d6c6c(3,0xd000000000000027,0x800000010f13beb0,param_6,&PTR_DAT_1106385d0);
  return;
}



/* Entry: 1032dca74; end: 1032dcbdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032dca74(long param_1,ulong param_2,undefined1 *param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_68 [24];
  
  puVar4 = auStack_68;
  func_0x000107c61428(param_1 + 0x10,puVar4,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  uVar1 = *(ulong *)(param_1 + _DAT_112f56098);
  if (uVar1 != 0) {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
    if (uVar2 == param_2 && puVar4 == param_3) {
      func_0x000107c6142c(puVar4);
    }
    else {
      func_0x000107c605b8(uVar2,puVar4,param_2,param_3,0);
      func_0x000107c6142c(puVar4);
      if ((uVar2 & 1) == 0) goto LAB_1032dcbb8;
    }
    lVar5 = *(long *)(param_1 + _DAT_112f560c0);
    uVar3 = 0;
    func_0x0001032d8bac(0);
    func_0x000107c615f0(lVar5);
    FUN_1032d8bcc(param_4,uVar3,&PTR_DAT_110638788);
    func_0x000107c615e8();
    FUN_1032d9bb8();
    if (lVar5 != 0) {
      uVar3 = 0;
      func_0x0001032d8228(0);
      FUN_1032d8248(param_4,uVar3,&PTR_DAT_110638748);
      func_0x000107c615e8(lVar5);
    }
  }
LAB_1032dcbb8:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1032dcbdc; end: 1032dccdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032dcbdc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_98 [24];
  long lStack_80;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [40];
  
  lVar1 = _DAT_112f560c8;
  func_0x000107c61428(unaff_x20 + _DAT_112f560c8,auStack_70,0,0);
  FUN_1032de568(unaff_x20 + lVar1,auStack_98);
  if (lStack_80 == 0) {
    func_0x0001032de5b8(auStack_98);
    FUN_1032d87b0(param_1);
    func_0x0001032de600(param_1,auStack_58);
    func_0x000107c61428(unaff_x20 + lVar1,auStack_98,0x21,0);
    func_0x0001032de644(auStack_58,unaff_x20 + lVar1);
    func_0x000107c614a8(auStack_98);
  }
  else {
    FUN_1032de694(auStack_98,auStack_58);
    FUN_1032de694(auStack_58,param_1);
  }
  return;
}



/* Entry: 1032dccdc; end: 1032dd197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032dccdc(ulong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lStack_60;
  long lStack_58;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  lStack_60 = 0;
  lStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x29);
  func_0x000107c6142c(lStack_58);
  lStack_60 = -0x2fffffffffffffda;
  lStack_58 = -0x7ffffffef0ec45f0;
  bVar2 = (param_1 & 1) == 0;
  uVar4 = 0x65757274;
  if (bVar2) {
    uVar4 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar4,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0x29,0xe100000000000000);
  lVar5 = lStack_58;
  lVar6 = lStack_60;
  func_0x0001007d6c6c(1,lStack_60,lStack_58,lVar3,&PTR_DAT_1106385d0);
  func_0x000107c6142c();
  FUN_1032d9bb8();
  if (lVar5 != 0) {
    uVar4 = 0;
    func_0x0001032d8228(0);
    lVar6 = 1;
    (*(code *)(undefined *)0x1032d82a8)(1,1,uVar4,&PTR_DAT_110638748);
    func_0x000107c615e8(lVar5);
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112f56098);
  if (lVar5 == 0) {
    lVar7 = 0;
    lVar6 = 0;
  }
  else {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar7 = lVar5;
    func_0x000107c5faec();
    func_0x000107c61170(lVar5);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f56140);
  lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112f56140))[1];
  func_0x000107c614f0(uVar4);
  (**(code **)(lVar5 + 8))(lVar7,lVar6,uVar4,lVar5);
  func_0x000107c6142c();
  if ((param_1 & 1) == 0) {
    func_0x0001000d224c(&lStack_60);
    lVar5 = lStack_60;
    if (lStack_60 == 0) goto LAB_1032dced0;
    func_0x000107c5a8ac(lStack_60);
  }
  else {
    func_0x0001000d224c(&lStack_60);
    lVar5 = lStack_60;
    if (lStack_60 == 0) {
LAB_1032dced0:
      func_0x000104366fc4(0xd000000000000023,0x800000010f13b1d0,lVar3,&PTR_DAT_1106385d0);
      return;
    }
    func_0x00010450e46c();
    func_0x000107c5a5e0(lVar5);
  }
  func_0x000107c615e8(lVar5);
  return;
}



/* Entry: 1032dd198; end: 1032dd267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1032dd198(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  
  uVar5 = (ulong)*(byte *)(unaff_x20 + _DAT_113082ab0);
  uVar3 = 0;
  func_0x00010450e890(0);
  func_0x000107c610f8();
  uVar4 = uVar5;
  func_0x00010450e854();
  bVar1 = *(byte *)(uVar4 + _DAT_113082ab0);
  func_0x000107c61170();
  bVar2 = *(byte *)(param_1 + _DAT_113082ab0);
  func_0x000107c610f8(uVar3);
  uVar4 = (ulong)(bVar2 ^ bVar1);
  func_0x00010450e854();
  func_0x000107c610f8(uVar3);
  func_0x00010450e854();
  bVar1 = *(byte *)(uVar5 + _DAT_113082ab0);
  func_0x000107c61170();
  bVar2 = *(byte *)(uVar4 + _DAT_113082ab0);
  func_0x000107c610f8(uVar3);
  uVar5 = (ulong)(bVar2 & bVar1);
  func_0x00010450e854(uVar5);
  func_0x000107c61170(uVar4);
  return uVar5;
}



/* Entry: 1032dd268; end: 1032dd2b3; -[_TtC16LensFullScreenUX24LensFullScreenUXWorkflow init] */

void FUN_1032dd268(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensFullScreenUX.LensFullScreenUXWorkflow",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032dd294);
  (*pcVar1)();
}



/* Entry: 1032dd2b4; end: 1032dd2b7;  */

void FUN_1032dd2b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1032dd2b8; end: 1032dd2f7;  */

void FUN_1032dd2b8(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = &UNK_10dbad348;
  func_0x000107c61524(param_1,0,1,&puStack_18,param_1 + 0x58);
  return;
}



/* Entry: 1032dd2f8; end: 1032dd48b;  */

void FUN_1032dd2f8(ulong param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 unaff_x20;
  long lVar5;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c614f0();
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x35);
  func_0x000107c5fb78(0xd000000000000025,0x800000010f13bb50);
  bVar1 = (param_1 & 1) == 0;
  uVar3 = 0x65757274;
  if (bVar1) {
    uVar3 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar1) {
    uVar2 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
  uVar3 = 0xec000000203a736e;
  func_0x000107c5fb78(0x656c206d6f726620);
  func_0x000107c4d3e4();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar5 = 0;
    uVar3 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
  }
  uVar2 = 0x112d35ff8;
  lStack_60 = lVar5;
  uStack_58 = uVar3;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  func_0x000107c5fb18(&lStack_60,uVar2);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar2);
  uVar3 = uStack_48;
  func_0x0001007d6c6c(1,uStack_50,uStack_48,unaff_x20,&PTR_DAT_1106385d0);
  func_0x000107c6142c(uVar3);
  uVar4 = 0xffffffa1;
  if ((param_1 & 1) == 0) {
    uVar4 = 0xffffffc1;
  }
  FUN_1032dfee4(uVar4);
  return;
}



/* Entry: 1032dd48c; end: 1032dd6bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032dd48c(long param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  long unaff_x20;
  long lVar10;
  ulong uVar11;
  long lStack_70;
  long *plStack_68;
  
  lVar5 = unaff_x20;
  func_0x000107c614f0();
  lStack_70 = 0;
  plStack_68 = (long *)0xe000000000000000;
  func_0x000107c602fc(0x23);
  func_0x000107c6142c(plStack_68);
  lVar4 = _DAT_113082ab0;
  lStack_70 = -0x2fffffffffffffdf;
  plStack_68 = (long *)0x800000010f13bad0;
  puVar9 = PTR___ss5UInt8Vs23CustomStringConvertiblesWP_11034ef08;
  func_0x000107c6057c(PTR___ss5UInt8VN_11034eef8,
                      PTR___ss5UInt8Vs23CustomStringConvertiblesWP_11034ef08);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar9);
  plVar6 = plStack_68;
  func_0x0001007d6c6c(1,lStack_70,plStack_68,lVar5,&PTR_DAT_1106385d0);
  func_0x000107c6142c();
  uVar3 = *(ushort *)(unaff_x20 + _DAT_112f56090);
  func_0x00010450e538();
  lVar10 = *plVar6;
  uVar7 = 0;
  func_0x00010450e890(0);
  uVar11 = (ulong)*(byte *)(lVar10 + _DAT_113082ab0);
  func_0x000107c610f8();
  func_0x000107c61174(lVar10);
  func_0x00010450e854();
  bVar1 = *(byte *)(uVar11 + _DAT_113082ab0);
  func_0x000107c61170();
  bVar2 = *(byte *)(param_1 + lVar4);
  func_0x000107c610f8(uVar7);
  uVar8 = (ulong)(bVar2 & bVar1);
  func_0x00010450e854();
  uVar11 = uVar8;
  func_0x000107c60118();
  func_0x000107c61170(lVar10);
  func_0x000107c61170(uVar8);
  if ((uint)((uVar3 & 0x2000) == 0) == ((uint)uVar11 & 1)) {
    func_0x0001007d6c6c(1,0xd000000000000047,0x800000010f13bb00,lVar5,&PTR_DAT_1106385d0);
  }
  else {
    func_0x0001000d224c(&lStack_70);
    lVar4 = lStack_70;
    if (lStack_70 == 0) {
      func_0x000104366fc4(0xd000000000000023,0x800000010f13b1d0,lVar5,&PTR_DAT_1106385d0);
    }
    else {
      func_0x000107c5a5e0(lStack_70);
      func_0x000107c615e8(lVar4);
    }
  }
  return;
}



/* Entry: 1032dd6bc; end: 1032dd8a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032dd6bc(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long unaff_x20;
  undefined2 uStack_62;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar5 = unaff_x20;
  func_0x000107c614f0();
  lStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x30);
  func_0x000107c5fb78(0xd000000000000025,0x800000010f13ba40);
  bVar4 = (param_1 & 1) == 0;
  uVar1 = 0x65757274;
  if (bVar4) {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar4) {
    uVar2 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c5fb78(0x3a657461747320,0xe700000000000000);
  lVar3 = _DAT_112f56090;
  uStack_62 = *(undefined2 *)(unaff_x20 + _DAT_112f56090);
  func_0x000107c603d0(&uStack_62,&lStack_60,&UNK_1106390f8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar1 = uStack_58;
  func_0x0001007d6c6c(1,lStack_60,uStack_58,lVar5,&PTR_DAT_1106385d0);
  func_0x000107c6142c(uVar1);
  if ((((*(ushort *)(unaff_x20 + lVar3) >> 0xd & 1) == 0) ||
      ((*(ushort *)(unaff_x20 + lVar3) & 0xfffe) != 0x2000)) && ((param_1 & 1) == 0)) {
    func_0x0001007d6c6c(1,0xd000000000000056,0x800000010f13ba70,lVar5,&PTR_DAT_1106385d0);
  }
  else {
    func_0x0001000d224c(&lStack_60);
    lVar3 = lStack_60;
    if (lStack_60 == 0) {
      func_0x000104366fc4(0xd000000000000023,0x800000010f13b1d0,lVar5,&PTR_DAT_1106385d0);
    }
    else {
      func_0x000107c59338(lStack_60);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 1032dd8a4; end: 1032dd8af;  */

void FUN_1032dd8a4(ulong param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 unaff_x20;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c614f0();
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x35);
  func_0x000107c5fb78(0xd000000000000025,0x800000010f13bb50);
  bVar1 = (param_1 & 1) == 0;
  uVar3 = 0x65757274;
  if (bVar1) {
    uVar3 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar1) {
    uVar2 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
  uVar3 = 0xec000000203a736e;
  func_0x000107c5fb78(0x656c206d6f726620);
  func_0x000107c4d3e4();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar5 = 0;
    uVar3 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
  }
  uVar2 = 0x112d35ff8;
  lStack_60 = lVar5;
  uStack_58 = uVar3;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  func_0x000107c5fb18(&lStack_60,uVar2);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar2);
  uVar3 = uStack_48;
  func_0x0001007d6c6c(1,uStack_50,uStack_48,unaff_x20,&PTR_DAT_1106385d0);
  func_0x000107c6142c(uVar3);
  uVar4 = 0xffffffa1;
  if ((param_1 & 1) == 0) {
    uVar4 = 0xffffffc1;
  }
  FUN_1032dfee4(uVar4);
  return;
}



/* Entry: 1032dd8b0; end: 1032ddb27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032dd8b0(undefined1 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f56160);
  puVar2 = &UNK_110638a48;
  func_0x000107c613fc(&UNK_110638a48,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110638a70;
  func_0x000107c613fc(&UNK_110638a70,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar3[0x18] = param_1;
  *(long *)(puVar3 + 0x20) = lVar1;
  uStack_50 = 0x1032de6ac;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110638a88;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c615f0(uVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(uVar5);
  return;
}



/* Entry: 1032ddb28; end: 1032ddb2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ddb28(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  undefined2 uStack_52;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = unaff_x20;
  func_0x000107c614f0();
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x1b);
  func_0x000107c5fb78(0xd000000000000019,0x800000010f13bbb0);
  lVar7 = _DAT_112f56090;
  uStack_52 = *(undefined2 *)(unaff_x20 + _DAT_112f56090);
  func_0x000107c603d0(&uStack_52,&uStack_50,&UNK_1106390f8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar3 = uStack_48;
  func_0x0001007d6c6c(1,uStack_50,uStack_48,lVar4,&PTR_DAT_1106385d0);
  func_0x000107c6142c(uVar3);
  uVar1 = *(ushort *)(unaff_x20 + lVar7);
  uVar2 = uVar1 >> 0xc & 3;
  if (uVar2 < 2) {
    if (0x3fff < uVar1) goto LAB_1032de330;
  }
  else if ((uVar2 == 3) || ((uVar1 & 0xfffe) != 0x2100)) goto LAB_1032de330;
  uVar8 = *(ulong *)(unaff_x20 + _DAT_112f56098);
  if (uVar8 != 0) {
    lVar7 = *(long *)(unaff_x20 + _DAT_112f56138);
    if (lVar7 != 0) {
      lVar6 = ((long *)(unaff_x20 + _DAT_112f56138))[1];
      lVar4 = lVar7;
      func_0x000107c614f0(lVar7);
      pcVar9 = *(code **)(lVar6 + 0x20);
      func_0x000107c61174();
      func_0x000107c615f0(lVar7);
      uVar5 = uVar8;
      (*pcVar9)(uVar8,lVar4,lVar6);
      if ((uVar5 & 1) == 0) {
        func_0x000107c61170(uVar8);
        func_0x000107c615e8(lVar7);
      }
      else {
        uVar5 = uVar8;
        (**(code **)(lVar6 + 0x28))(uVar8,lVar4,lVar6);
        func_0x000107c61170(uVar8);
        func_0x000107c615e8(lVar7);
        if ((uVar5 & 1) != 0) {
          return;
        }
      }
    }
  }
LAB_1032de330:
  FUN_1032ddc3c();
  return;
}



/* Entry: 1032ddb30; end: 1032ddc3b;  */

/* WARNING: Removing unreachable block (ram,0x0001032e05b0) */
/* WARNING: Removing unreachable block (ram,0x0001032e05c0) */
/* WARNING: Removing unreachable block (ram,0x0001032e0444) */
/* WARNING: Removing unreachable block (ram,0x0001032e0454) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ddb30(void)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined **ppuVar16;
  code *pcVar17;
  undefined **ppuStack_a8;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar13 = unaff_x20;
  func_0x000107c614f0();
  uVar12 = 0x800000010f13b400;
  func_0x0001007d6c6c(1,0xd000000000000014,0x800000010f13b400,lVar13,&PTR_DAT_1106385d0);
  plVar1 = (long *)(unaff_x20 + _DAT_112f560f0);
  lVar13 = *plVar1;
  if (lVar13 == 0) {
    uVar7 = *(ulong *)(unaff_x20 + _DAT_112f56098);
    lVar8 = _DAT_112f560d8;
    if ((uVar7 != 0) && (func_0x000107c4a73c(), lVar8 = _DAT_112f560d8, (uVar7 & 1) != 0)) {
      lVar8 = _DAT_112f560e0;
    }
    lVar15 = *(long *)(unaff_x20 + lVar8);
    ppuVar16 = *(undefined ***)(((long *)(unaff_x20 + lVar8))[1] + 8);
    func_0x000107c615f0(lVar15);
  }
  else {
    ppuVar16 = (undefined **)plVar1[1];
    lVar15 = lVar13;
  }
  lVar8 = lVar15;
  func_0x000107c614f0(lVar15);
  pcVar17 = (code *)ppuVar16[4];
  func_0x000107c615f0(lVar13);
  (*pcVar17)(lVar8);
  func_0x000107c615e8(lVar15);
  lVar13 = *plVar1;
  *plVar1 = 0;
  plVar1[1] = 0;
  func_0x000107c615e8(lVar13);
  lVar13 = unaff_x20;
  func_0x000107c614f0(unaff_x20);
  puVar14 = *(undefined **)(unaff_x20 + _DAT_112f56098);
  puVar9 = puVar14;
  func_0x000107c61174(puVar14);
  FUN_1032d96bc();
  ppuVar10 = ppuVar16;
  func_0x000107c61170(puVar9);
  if ((((uint)uVar12 & 0xff) < 2) ||
     (ppuVar16 == (undefined **)0x0 &&
      !CARRY8((long)ppuVar16 - 1,(ulong)((undefined *)0x1 < puVar14)))) {
    cVar3 = *(char *)(unaff_x20 + _DAT_112f560a8);
    puVar9 = puVar14;
    ppuStack_a8 = ppuVar16;
    if (cVar3 == '\n') {
      func_0x0001007d6c6c(1,0xd00000000000001a,0x800000010f13bfb0,lVar13,&PTR_DAT_1106385d0);
      FUN_1032e077c(puVar14,ppuVar16,uVar12);
    }
    else {
      puStack_98 = (undefined *)0x0;
      ppuStack_90 = (undefined **)0xe000000000000000;
      func_0x000107c602fc(0x1b);
      func_0x000107c6142c(ppuStack_90);
      puStack_98 = (undefined *)0xd000000000000019;
      ppuStack_90 = (undefined **)0x800000010f13bfd0;
      func_0x00010434e040(cVar3);
      func_0x000107c5fb78();
      func_0x000107c6142c(ppuVar10);
      ppuVar10 = ppuStack_90;
      func_0x0001007d6c6c(1,puStack_98,ppuStack_90,lVar13,&PTR_DAT_1106385d0);
      func_0x000107c6142c(ppuVar10);
      FUN_1032e05c4(puVar14,ppuVar16,uVar12,cVar3);
    }
  }
  else {
    func_0x0001007d6c6c(1,0xd000000000000040,0x800000010f13bf00,lVar13,&PTR_DAT_1106385d0);
    ppuStack_a8 = &PTR_DAT_110638e10;
    puVar9 = &UNK_110638e00;
  }
  puStack_98 = (undefined *)0x0;
  ppuStack_90 = (undefined **)0xe000000000000000;
  func_0x000107c602fc(0x40);
  puStack_70 = puStack_98;
  uStack_68 = ppuStack_90;
  func_0x000107c5fb78(0x6574617473206e4f,0xea0000000000203a);
  lVar8 = _DAT_112f56090;
  puVar5 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar4 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  puStack_98 = (undefined *)CONCAT62(puStack_98._2_6_,*(undefined2 *)(unaff_x20 + _DAT_112f56090));
  func_0x000107c603d0(&puStack_98,&puStack_70,&UNK_1106390f8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0xd000000000000011,0x800000010f13bf50);
  puStack_98 = (undefined *)CONCAT71(puStack_98._1_7_,0xe0);
  func_0x000107c603d0(&puStack_98,&puStack_70,&UNK_110639058,puVar4,puVar5);
  func_0x000107c5fb78(0x74616320726f6620,0xef203a79726f6765);
  uStack_88 = (undefined1)uVar12;
  puStack_98 = puVar14;
  ppuStack_90 = ppuVar16;
  func_0x000107c603d0(&puStack_98,&puStack_70,&UNK_11075e238,puVar4,puVar5);
  func_0x0001032d9cb0(puVar14,ppuVar16,uVar12 & 0xffffffff);
  func_0x000107c5fb78(0x72656c646e616820,0xee00203a65707954);
  uVar11 = 0;
  func_0x000107c60714(puVar9,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar11);
  uVar11 = uStack_68;
  func_0x0001007d6c6c(1,puStack_70,uStack_68,lVar13,&PTR_DAT_1106385d0);
  func_0x000107c6142c(uVar11);
  uVar12 = (ulong)*(ushort *)(unaff_x20 + lVar8);
  FUN_1032e1610(uVar12,0xe0,puVar9,ppuStack_a8);
  uVar6 = (uint)uVar12;
  if (((uint)(uVar12 >> 0x18) & 0xff) == 1) {
    if ((uVar6 & 0xff) == 1) {
      puStack_98 = (undefined *)0x0;
      ppuStack_90 = (undefined **)0xe000000000000000;
      func_0x000107c602fc(0x2d);
      func_0x000107c5fb78(0xd000000000000011,0x800000010f13bf70);
      func_0x000107c5fb78(0x706e6920726f6620,0xec000000203a7475);
      puVar4 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
      puVar14 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
      puStack_70 = (undefined *)CONCAT71(puStack_70._1_7_,0xe0);
      func_0x000107c603d0(&puStack_70,&puStack_98,&UNK_110639058,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x74617473206e6920,0xeb00000000203a65);
      puStack_70 = (undefined *)CONCAT62(puStack_70._2_6_,*(undefined2 *)(unaff_x20 + lVar8));
      func_0x000107c603d0(&puStack_70,&puStack_98,&UNK_1106390f8,puVar14,puVar4);
      func_0x000107c5fb78(0x72656c646e616820,0xee00203a65707954);
      uVar11 = 0;
      func_0x000107c60714(puVar9,0);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar11);
      uVar11 = 3;
    }
    else {
      puStack_98 = (undefined *)0x0;
      ppuStack_90 = (undefined **)0xe000000000000000;
      func_0x000107c602fc(0x1d);
      func_0x000107c5fb78(0xd000000000000011,0x800000010f13bf90);
      func_0x000107c5fb78(0x706e6920726f6620,0xec000000203a7475);
      puVar14 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
      puVar9 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
      puStack_70 = (undefined *)CONCAT71(puStack_70._1_7_,0xe0);
      func_0x000107c603d0(&puStack_70,&puStack_98,&UNK_110639058,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x74617473206e6920,0xeb00000000203a65);
      puStack_70 = (undefined *)CONCAT62(puStack_70._2_6_,*(undefined2 *)(unaff_x20 + lVar8));
      func_0x000107c603d0(&puStack_70,&puStack_98,&UNK_1106390f8,puVar9,puVar14);
      uVar11 = 1;
    }
    ppuVar16 = ppuStack_90;
    func_0x0001007d6c6c(uVar11,puStack_98,ppuStack_90,lVar13,&PTR_DAT_1106385d0);
    func_0x000107c6142c(ppuVar16);
  }
  else {
    FUN_1032e0888(uVar6 >> 0x10);
    func_0x000100768c7c(unaff_x20 + _DAT_112f56178,&puStack_98);
    func_0x0001000a8868(&puStack_98,uStack_80);
    (**(code **)(lStack_78 + 0x10))(uStack_80,lStack_78);
    func_0x0001000834e4(&puStack_98);
    if (((*(ushort *)(unaff_x20 + lVar8) >> 0xd & 1) != 0) &&
       ((*(byte *)(unaff_x20 + _DAT_112f561c0) & 1) != 0)) {
      uVar2 = uVar6 | 0x1000;
      if (((uVar12 & 0x3000) == 0 & *(byte *)(unaff_x20 + _DAT_112f561c8)) == 0) {
        uVar2 = uVar6;
      }
      uVar12 = (ulong)uVar2;
    }
    FUN_1032e0bc8(uVar12);
  }
  return;
}



/* Entry: 1032ddc3c; end: 1032dde1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ddc3c(void)

{
  char cVar1;
  ushort uVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined *puVar16;
  ulong uVar17;
  undefined **ppuStack_a8;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar9 = unaff_x20;
  func_0x000107c614f0();
  lVar11 = _DAT_112f56090;
  ppuVar10 = *(undefined ***)(unaff_x20 + _DAT_112f56130);
  uVar13 = ((long *)(unaff_x20 + _DAT_112f56130))[1];
  uVar2 = *(ushort *)(unaff_x20 + _DAT_112f56090);
  uVar4 = uVar2 >> 0xc & 3;
  if (uVar4 < 2) {
    if (uVar2 < 0x4000) {
      uVar17 = 1;
    }
    else {
LAB_1032ddca4:
      uVar17 = 0;
    }
  }
  else {
    if (uVar4 == 3) goto LAB_1032ddca4;
    uVar17 = (ulong)((uVar2 & 0xfffe) == 0x2100);
  }
  func_0x000107c614f0();
  (**(code **)(uVar13 + 0x40))();
  if ((uVar17 & 1) != 0) {
    return;
  }
  uVar2 = *(ushort *)(unaff_x20 + lVar11);
  uVar4 = uVar2 >> 0xc & 3;
  if (uVar4 < 2) {
    if (uVar4 != 0) {
      if (uVar2 >> 0xe != 0) goto LAB_1032ddd34;
      if ((uVar2 >> 8 & 0xffcf) != 1) goto LAB_1032dde04;
      goto LAB_1032dddfc;
    }
    if (uVar2 >> 0xe == 0) {
      if (uVar2 >> 8 == 1) goto LAB_1032dddfc;
LAB_1032dde04:
      uVar7 = 0x60;
    }
    else {
LAB_1032ddd34:
      if ((uVar2 >> 0xe != 1) || ((uVar2 >> 8 & 1) == 0)) {
LAB_1032ddd48:
        func_0x000107c602fc(0x2a);
        func_0x000107c5fb78(0xd000000000000028,0x800000010f13bbd0);
        func_0x000107c603d0(&stack0xffffffffffffffae,&stack0xffffffffffffffb0,&UNK_1106390f8,
                            PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        func_0x000104366fc4(0,0xe000000000000000,lVar9,&PTR_DAT_1106385d0);
        func_0x000107c6142c(0xe000000000000000);
        return;
      }
      uVar7 = 0x80;
    }
  }
  else {
    if (uVar4 == 3) goto LAB_1032ddd48;
    if (uVar2 != 0x2100) {
      if (uVar2 != 0x2101) goto LAB_1032ddd48;
      goto LAB_1032dde04;
    }
LAB_1032dddfc:
    uVar7 = 0x61;
  }
  lVar11 = unaff_x20;
  func_0x000107c614f0(unaff_x20);
  puVar16 = *(undefined **)(unaff_x20 + _DAT_112f56098);
  puVar12 = puVar16;
  func_0x000107c61174(puVar16);
  FUN_1032d96bc();
  ppuVar14 = ppuVar10;
  func_0x000107c61170(puVar12);
  if ((((uint)uVar13 & 0xff) < 2) ||
     (ppuVar10 == (undefined **)0x0 &&
      !CARRY8((long)ppuVar10 - 1,(ulong)((undefined *)0x1 < puVar16)))) {
    cVar1 = *(char *)(unaff_x20 + _DAT_112f560a8);
    puVar12 = puVar16;
    ppuStack_a8 = ppuVar10;
    if (cVar1 == '\n') {
      func_0x0001007d6c6c(1,0xd00000000000001a,0x800000010f13bfb0,lVar11,&PTR_DAT_1106385d0);
      FUN_1032e077c(puVar16,ppuVar10,uVar13);
    }
    else {
      puStack_98 = (undefined *)0x0;
      ppuStack_90 = (undefined **)0xe000000000000000;
      func_0x000107c602fc(0x1b);
      func_0x000107c6142c(ppuStack_90);
      puStack_98 = (undefined *)0xd000000000000019;
      ppuStack_90 = (undefined **)0x800000010f13bfd0;
      func_0x00010434e040(cVar1);
      func_0x000107c5fb78();
      func_0x000107c6142c(ppuVar14);
      ppuVar14 = ppuStack_90;
      func_0x0001007d6c6c(1,puStack_98,ppuStack_90,lVar11,&PTR_DAT_1106385d0);
      func_0x000107c6142c(ppuVar14);
      FUN_1032e05c4(puVar16,ppuVar10,uVar13,cVar1);
    }
  }
  else {
    func_0x0001007d6c6c(1,0xd000000000000040,0x800000010f13bf00,lVar11,&PTR_DAT_1106385d0);
    ppuStack_a8 = &PTR_DAT_110638e10;
    puVar12 = &UNK_110638e00;
  }
  puStack_98 = (undefined *)0x0;
  ppuStack_90 = (undefined **)0xe000000000000000;
  func_0x000107c602fc(0x40);
  puStack_70 = puStack_98;
  uStack_68 = ppuStack_90;
  func_0x000107c5fb78(0x6574617473206e4f,0xea0000000000203a);
  lVar9 = _DAT_112f56090;
  puVar6 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar5 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  puStack_98 = (undefined *)CONCAT62(puStack_98._2_6_,*(undefined2 *)(unaff_x20 + _DAT_112f56090));
  func_0x000107c603d0(&puStack_98,&puStack_70,&UNK_1106390f8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0xd000000000000011,0x800000010f13bf50);
  uVar3 = (undefined1)uVar7;
  puStack_98 = (undefined *)CONCAT71(puStack_98._1_7_,uVar3);
  func_0x000107c603d0(&puStack_98,&puStack_70,&UNK_110639058,puVar5,puVar6);
  func_0x000107c5fb78(0x74616320726f6620,0xef203a79726f6765);
  uStack_88 = (undefined1)uVar13;
  puStack_98 = puVar16;
  ppuStack_90 = ppuVar10;
  func_0x000107c603d0(&puStack_98,&puStack_70,&UNK_11075e238,puVar5,puVar6);
  func_0x0001032d9cb0(puVar16,ppuVar10,uVar13 & 0xffffffff);
  func_0x000107c5fb78(0x72656c646e616820,0xee00203a65707954);
  uVar15 = 0;
  func_0x000107c60714(puVar12,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar15);
  uVar15 = uStack_68;
  func_0x0001007d6c6c(1,puStack_70,uStack_68,lVar11,&PTR_DAT_1106385d0);
  func_0x000107c6142c(uVar15);
  uVar13 = (ulong)*(ushort *)(unaff_x20 + lVar9);
  FUN_1032e1610(uVar13,uVar7,puVar12,ppuStack_a8);
  uVar8 = (uint)uVar13;
  if (((uint)(uVar13 >> 0x18) & 0xff) == 1) {
    if ((uVar8 & 0xff) == 1) {
      puStack_98 = (undefined *)0x0;
      ppuStack_90 = (undefined **)0xe000000000000000;
      func_0x000107c602fc(0x2d);
      func_0x000107c5fb78(0xd000000000000011,0x800000010f13bf70);
      func_0x000107c5fb78(0x706e6920726f6620,0xec000000203a7475);
      puVar5 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
      puVar16 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
      puStack_70 = (undefined *)CONCAT71(puStack_70._1_7_,uVar3);
      func_0x000107c603d0(&puStack_70,&puStack_98,&UNK_110639058,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x74617473206e6920,0xeb00000000203a65);
      puStack_70 = (undefined *)CONCAT62(puStack_70._2_6_,*(undefined2 *)(unaff_x20 + lVar9));
      func_0x000107c603d0(&puStack_70,&puStack_98,&UNK_1106390f8,puVar16,puVar5);
      func_0x000107c5fb78(0x72656c646e616820,0xee00203a65707954);
      uVar15 = 0;
      func_0x000107c60714(puVar12,0);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar15);
      uVar15 = 3;
    }
    else {
      puStack_98 = (undefined *)0x0;
      ppuStack_90 = (undefined **)0xe000000000000000;
      func_0x000107c602fc(0x1d);
      func_0x000107c5fb78(0xd000000000000011,0x800000010f13bf90);
      func_0x000107c5fb78(0x706e6920726f6620,0xec000000203a7475);
      puVar16 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
      puVar12 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
      puStack_70 = (undefined *)CONCAT71(puStack_70._1_7_,uVar3);
      func_0x000107c603d0(&puStack_70,&puStack_98,&UNK_110639058,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x74617473206e6920,0xeb00000000203a65);
      puStack_70 = (undefined *)CONCAT62(puStack_70._2_6_,*(undefined2 *)(unaff_x20 + lVar9));
      func_0x000107c603d0(&puStack_70,&puStack_98,&UNK_1106390f8,puVar12,puVar16);
      uVar15 = 1;
    }
    ppuVar10 = ppuStack_90;
    func_0x0001007d6c6c(uVar15,puStack_98,ppuStack_90,lVar11,&PTR_DAT_1106385d0);
    func_0x000107c6142c(ppuVar10);
    return;
  }
  FUN_1032e0888(uVar8 >> 0x10);
  func_0x000100768c7c(unaff_x20 + _DAT_112f56178,&puStack_98);
  func_0x0001000a8868(&puStack_98,uStack_80);
  (**(code **)(lStack_78 + 0x10))(uStack_80,lStack_78);
  func_0x0001000834e4(&puStack_98);
  if (((uint)uStack_80 & 0xff) == 2) {
    if (uVar7 >> 5 == 6) {
      if (uVar7 != 0xc0) goto LAB_1032e045c;
    }
    else if ((uVar7 >> 5 != 2) || (uVar7 != 0x40)) goto LAB_1032e045c;
    FUN_1032d9ac8();
  }
LAB_1032e045c:
  if (((*(ushort *)(unaff_x20 + lVar9) >> 0xd & 1) != 0) &&
     ((*(byte *)(unaff_x20 + _DAT_112f561c0) & 1) != 0)) {
    uVar7 = uVar8 | 0x1000;
    if (((uVar13 & 0x3000) == 0 & *(byte *)(unaff_x20 + _DAT_112f561c8)) == 0) {
      uVar7 = uVar8;
    }
    uVar13 = (ulong)uVar7;
  }
  FUN_1032e0bc8(uVar13);
  return;
}



/* Entry: 1032dde20; end: 1032dde23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032dde20(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  undefined2 uStack_52;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = unaff_x20;
  func_0x000107c614f0();
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x21);
  func_0x000107c5fb78(0xd00000000000001f,0x800000010f13bc00);
  lVar7 = _DAT_112f56090;
  uStack_52 = *(undefined2 *)(unaff_x20 + _DAT_112f56090);
  func_0x000107c603d0(&uStack_52,&uStack_50,&UNK_1106390f8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar3 = uStack_48;
  func_0x0001007d6c6c(1,uStack_50,uStack_48,lVar4,&PTR_DAT_1106385d0);
  func_0x000107c6142c(uVar3);
  uVar1 = *(ushort *)(unaff_x20 + lVar7);
  uVar2 = uVar1 >> 0xc & 3;
  if (uVar2 < 2) {
    if (0x3fff < uVar1) goto LAB_1032de4f0;
  }
  else if ((uVar2 == 3) || ((uVar1 & 0xfffe) != 0x2100)) goto LAB_1032de4f0;
  uVar8 = *(ulong *)(unaff_x20 + _DAT_112f56098);
  if (uVar8 != 0) {
    lVar7 = *(long *)(unaff_x20 + _DAT_112f56138);
    if (lVar7 != 0) {
      lVar6 = ((long *)(unaff_x20 + _DAT_112f56138))[1];
      lVar4 = lVar7;
      func_0x000107c614f0(lVar7);
      pcVar9 = *(code **)(lVar6 + 0x20);
      func_0x000107c61174();
      func_0x000107c615f0(lVar7);
      uVar5 = uVar8;
      (*pcVar9)(uVar8,lVar4,lVar6);
      if ((uVar5 & 1) == 0) {
        func_0x000107c61170(uVar8);
        func_0x000107c615e8(lVar7);
      }
      else {
        uVar5 = uVar8;
        (**(code **)(lVar6 + 0x28))(uVar8,lVar4,lVar6);
        func_0x000107c61170(uVar8);
        func_0x000107c615e8(lVar7);
        if ((uVar5 & 1) != 0) {
          return;
        }
      }
    }
  }
LAB_1032de4f0:
  FUN_1032dde24();
  return;
}



/* Entry: 1032dde24; end: 1032ddfd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032dde24(void)

{
  char cVar1;
  ushort uVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined *puVar16;
  ulong uVar17;
  undefined **ppuStack_a8;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar9 = unaff_x20;
  func_0x000107c614f0();
  lVar11 = _DAT_112f56090;
  ppuVar10 = *(undefined ***)(unaff_x20 + _DAT_112f56130);
  uVar13 = ((long *)(unaff_x20 + _DAT_112f56130))[1];
  uVar2 = *(ushort *)(unaff_x20 + _DAT_112f56090);
  uVar4 = uVar2 >> 0xc & 3;
  if (uVar4 < 2) {
    if (uVar2 < 0x4000) {
      uVar17 = 1;
    }
    else {
LAB_1032dde8c:
      uVar17 = 0;
    }
  }
  else {
    if (uVar4 == 3) goto LAB_1032dde8c;
    uVar17 = (ulong)((uVar2 & 0xfffe) == 0x2100);
  }
  func_0x000107c614f0();
  (**(code **)(uVar13 + 0x40))();
  if ((uVar17 & 1) != 0) {
    return;
  }
  uVar2 = *(ushort *)(unaff_x20 + lVar11);
  uVar4 = uVar2 >> 0xc & 3;
  if (uVar4 < 2) {
    if (uVar2 >> 0xe == 0) {
LAB_1032ddf10:
      uVar7 = 0x60;
    }
    else {
      if ((uVar2 >> 0xe != 1) || ((uVar2 >> 8 & 1) == 0)) goto LAB_1032ddf18;
      uVar7 = 0x80;
    }
  }
  else {
    if (uVar4 == 3) {
LAB_1032ddf18:
      func_0x000107c602fc(0x2a);
      func_0x000107c5fb78(0xd000000000000028,0x800000010f13bbd0);
      func_0x000107c603d0(&stack0xffffffffffffffae,&stack0xffffffffffffffb0,&UNK_1106390f8,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000104366fc4(0,0xe000000000000000,lVar9,&PTR_DAT_1106385d0);
      func_0x000107c6142c(0xe000000000000000);
      return;
    }
    if (uVar2 != 0x2100) {
      if (uVar2 != 0x2101) goto LAB_1032ddf18;
      goto LAB_1032ddf10;
    }
    uVar7 = 0x61;
  }
  lVar11 = unaff_x20;
  func_0x000107c614f0(unaff_x20);
  puVar16 = *(undefined **)(unaff_x20 + _DAT_112f56098);
  puVar12 = puVar16;
  func_0x000107c61174(puVar16);
  FUN_1032d96bc();
  ppuVar14 = ppuVar10;
  func_0x000107c61170(puVar12);
  if ((((uint)uVar13 & 0xff) < 2) ||
     (ppuVar10 == (undefined **)0x0 &&
      !CARRY8((long)ppuVar10 - 1,(ulong)((undefined *)0x1 < puVar16)))) {
    cVar1 = *(char *)(unaff_x20 + _DAT_112f560a8);
    puVar12 = puVar16;
    ppuStack_a8 = ppuVar10;
    if (cVar1 == '\n') {
      func_0x0001007d6c6c(1,0xd00000000000001a,0x800000010f13bfb0,lVar11,&PTR_DAT_1106385d0);
      FUN_1032e077c(puVar16,ppuVar10,uVar13);
    }
    else {
      puStack_98 = (undefined *)0x0;
      ppuStack_90 = (undefined **)0xe000000000000000;
      func_0x000107c602fc(0x1b);
      func_0x000107c6142c(ppuStack_90);
      puStack_98 = (undefined *)0xd000000000000019;
      ppuStack_90 = (undefined **)0x800000010f13bfd0;
      func_0x00010434e040(cVar1);
      func_0x000107c5fb78();
      func_0x000107c6142c(ppuVar14);
      ppuVar14 = ppuStack_90;
      func_0x0001007d6c6c(1,puStack_98,ppuStack_90,lVar11,&PTR_DAT_1106385d0);
      func_0x000107c6142c(ppuVar14);
      FUN_1032e05c4(puVar16,ppuVar10,uVar13,cVar1);
    }
  }
  else {
    func_0x0001007d6c6c(1,0xd000000000000040,0x800000010f13bf00,lVar11,&PTR_DAT_1106385d0);
    ppuStack_a8 = &PTR_DAT_110638e10;
    puVar12 = &UNK_110638e00;
  }
  puStack_98 = (undefined *)0x0;
  ppuStack_90 = (undefined **)0xe000000000000000;
  func_0x000107c602fc(0x40);
  puStack_70 = puStack_98;
  uStack_68 = ppuStack_90;
  func_0x000107c5fb78(0x6574617473206e4f,0xea0000000000203a);
  lVar9 = _DAT_112f56090;
  puVar6 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar5 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  puStack_98 = (undefined *)CONCAT62(puStack_98._2_6_,*(undefined2 *)(unaff_x20 + _DAT_112f56090));
  func_0x000107c603d0(&puStack_98,&puStack_70,&UNK_1106390f8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0xd000000000000011,0x800000010f13bf50);
  uVar3 = (undefined1)uVar7;
  puStack_98 = (undefined *)CONCAT71(puStack_98._1_7_,uVar3);
  func_0x000107c603d0(&puStack_98,&puStack_70,&UNK_110639058,puVar5,puVar6);
  func_0x000107c5fb78(0x74616320726f6620,0xef203a79726f6765);
  uStack_88 = (undefined1)uVar13;
  puStack_98 = puVar16;
  ppuStack_90 = ppuVar10;
  func_0x000107c603d0(&puStack_98,&puStack_70,&UNK_11075e238,puVar5,puVar6);
  func_0x0001032d9cb0(puVar16,ppuVar10,uVar13 & 0xffffffff);
  func_0x000107c5fb78(0x72656c646e616820,0xee00203a65707954);
  uVar15 = 0;
  func_0x000107c60714(puVar12,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar15);
  uVar15 = uStack_68;
  func_0x0001007d6c6c(1,puStack_70,uStack_68,lVar11,&PTR_DAT_1106385d0);
  func_0x000107c6142c(uVar15);
  uVar13 = (ulong)*(ushort *)(unaff_x20 + lVar9);
  FUN_1032e1610(uVar13,uVar7,puVar12,ppuStack_a8);
  uVar8 = (uint)uVar13;
  if (((uint)(uVar13 >> 0x18) & 0xff) == 1) {
    if ((uVar8 & 0xff) == 1) {
      puStack_98 = (undefined *)0x0;
      ppuStack_90 = (undefined **)0xe000000000000000;
      func_0x000107c602fc(0x2d);
      func_0x000107c5fb78(0xd000000000000011,0x800000010f13bf70);
      func_0x000107c5fb78(0x706e6920726f6620,0xec000000203a7475);
      puVar5 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
      puVar16 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
      puStack_70 = (undefined *)CONCAT71(puStack_70._1_7_,uVar3);
      func_0x000107c603d0(&puStack_70,&puStack_98,&UNK_110639058,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x74617473206e6920,0xeb00000000203a65);
      puStack_70 = (undefined *)CONCAT62(puStack_70._2_6_,*(undefined2 *)(unaff_x20 + lVar9));
      func_0x000107c603d0(&puStack_70,&puStack_98,&UNK_1106390f8,puVar16,puVar5);
      func_0x000107c5fb78(0x72656c646e616820,0xee00203a65707954);
      uVar15 = 0;
      func_0x000107c60714(puVar12,0);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar15);
      uVar15 = 3;
    }
    else {
      puStack_98 = (undefined *)0x0;
      ppuStack_90 = (undefined **)0xe000000000000000;
      func_0x000107c602fc(0x1d);
      func_0x000107c5fb78(0xd000000000000011,0x800000010f13bf90);
      func_0x000107c5fb78(0x706e6920726f6620,0xec000000203a7475);
      puVar16 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
      puVar12 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
      puStack_70 = (undefined *)CONCAT71(puStack_70._1_7_,uVar3);
      func_0x000107c603d0(&puStack_70,&puStack_98,&UNK_110639058,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x74617473206e6920,0xeb00000000203a65);
      puStack_70 = (undefined *)CONCAT62(puStack_70._2_6_,*(undefined2 *)(unaff_x20 + lVar9));
      func_0x000107c603d0(&puStack_70,&puStack_98,&UNK_1106390f8,puVar12,puVar16);
      uVar15 = 1;
    }
    ppuVar10 = ppuStack_90;
    func_0x0001007d6c6c(uVar15,puStack_98,ppuStack_90,lVar11,&PTR_DAT_1106385d0);
    func_0x000107c6142c(ppuVar10);
    return;
  }
  FUN_1032e0888(uVar8 >> 0x10);
  func_0x000100768c7c(unaff_x20 + _DAT_112f56178,&puStack_98);
  func_0x0001000a8868(&puStack_98,uStack_80);
  (**(code **)(lStack_78 + 0x10))(uStack_80,lStack_78);
  func_0x0001000834e4(&puStack_98);
  if (((uint)uStack_80 & 0xff) == 2) {
    if (uVar7 >> 5 == 6) {
      if (uVar7 != 0xc0) goto LAB_1032e045c;
    }
    else if ((uVar7 >> 5 != 2) || (uVar7 != 0x40)) goto LAB_1032e045c;
    FUN_1032d9ac8();
  }
LAB_1032e045c:
  if (((*(ushort *)(unaff_x20 + lVar9) >> 0xd & 1) != 0) &&
     ((*(byte *)(unaff_x20 + _DAT_112f561c0) & 1) != 0)) {
    uVar7 = uVar8 | 0x1000;
    if (((uVar13 & 0x3000) == 0 & *(byte *)(unaff_x20 + _DAT_112f561c8)) == 0) {
      uVar7 = uVar8;
    }
    uVar13 = (ulong)uVar7;
  }
  FUN_1032e0bc8(uVar13);
  return;
}



/* Entry: 1032ddfd8; end: 1032de18f;  */

void FUN_1032ddfd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_110638b10;
  func_0x000107c613fc(&UNK_110638b10,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  uStack_40 = 0x1032de6e4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110638b28;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(param_2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1032de190; end: 1032de50f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032de190(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  undefined2 uStack_52;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = unaff_x20;
  func_0x000107c614f0();
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x1b);
  func_0x000107c5fb78(0xd000000000000019,0x800000010f13bbb0);
  lVar7 = _DAT_112f56090;
  uStack_52 = *(undefined2 *)(unaff_x20 + _DAT_112f56090);
  func_0x000107c603d0(&uStack_52,&uStack_50,&UNK_1106390f8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar3 = uStack_48;
  func_0x0001007d6c6c(1,uStack_50,uStack_48,lVar4,&PTR_DAT_1106385d0);
  func_0x000107c6142c(uVar3);
  uVar1 = *(ushort *)(unaff_x20 + lVar7);
  uVar2 = uVar1 >> 0xc & 3;
  if (uVar2 < 2) {
    if (0x3fff < uVar1) goto LAB_1032de330;
  }
  else if ((uVar2 == 3) || ((uVar1 & 0xfffe) != 0x2100)) goto LAB_1032de330;
  uVar8 = *(ulong *)(unaff_x20 + _DAT_112f56098);
  if (uVar8 != 0) {
    lVar7 = *(long *)(unaff_x20 + _DAT_112f56138);
    if (lVar7 != 0) {
      lVar6 = ((long *)(unaff_x20 + _DAT_112f56138))[1];
      lVar4 = lVar7;
      func_0x000107c614f0(lVar7);
      pcVar9 = *(code **)(lVar6 + 0x20);
      func_0x000107c61174();
      func_0x000107c615f0(lVar7);
      uVar5 = uVar8;
      (*pcVar9)(uVar8,lVar4,lVar6);
      if ((uVar5 & 1) == 0) {
        func_0x000107c61170(uVar8);
        func_0x000107c615e8(lVar7);
      }
      else {
        uVar5 = uVar8;
        (**(code **)(lVar6 + 0x28))(uVar8,lVar4,lVar6);
        func_0x000107c61170(uVar8);
        func_0x000107c615e8(lVar7);
        if ((uVar5 & 1) != 0) {
          return;
        }
      }
    }
  }
LAB_1032de330:
  FUN_1032ddc3c();
  return;
}



/* Entry: 1032de510; end: 1032de55b;  */

void FUN_1032de510(void)

{
  FUN_1032de190();
  return;
}



/* Entry: 1032de55c; end: 1032de567;  */

void FUN_1032de55c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e758550);
  return;
}



/* Entry: 1032de568; end: 1032de693;  */

undefined8 FUN_1032de568(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f56280;
  func_0x0001000285a8(0x112f56280,&UNK_10dbad3f8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1032de694; end: 1032de6ff;  */

undefined8 * FUN_1032de694(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1032de700; end: 1032de767;  */

void FUN_1032de700(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puVar2 = PTR___sxSgSQsSQRzlMc_11034f190;
    uStack_38 = uVar1;
    func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,param_2,&uStack_38);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 1032de768; end: 1032de7a7;  */

void FUN_1032de768(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f562a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dceecb0;
  func_0x000107c61520(&UNK_10dceecb0,&UNK_11075e140);
  puRam0000000112f562a0 = puVar1;
  return;
}



/* Entry: 1032de7a8; end: 1032de7af;  */

void FUN_1032de7a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_78 = 0;
  uStack_70 = 0xe000000000000000;
  uVar6 = param_2;
  func_0x000107c602fc(0x32);
  func_0x000107c6142c(uStack_70);
  uStack_78 = 0xd00000000000001b;
  uStack_70 = 0x800000010f13bd50;
  lVar2 = param_1;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar7 = 0;
    uVar6 = 0;
  }
  else {
    lVar7 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
  }
  uVar3 = 0x112d35ff8;
  lStack_60 = lVar7;
  uStack_58 = uVar6;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  func_0x000107c5fb18(&lStack_60,uVar3);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  uVar6 = 0x800000010f13bd70;
  func_0x000107c5fb78(0xd000000000000013,0x800000010f13bd70);
  func_0x00010434e040(param_2);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar6);
  uVar4 = uStack_70;
  func_0x0001007d6c6c(1,uStack_78,uStack_70,uVar1,&PTR_DAT_1106385d0);
  func_0x000107c6142c();
  FUN_1032db8e0();
  if ((uVar4 & 1) != 0) {
    func_0x000107c61428(lVar5 + 0x10,&uStack_78,0,0);
    lVar5 = lVar5 + 0x10;
    func_0x000107c61618();
    if (lVar5 != 0) {
      FUN_1032db964(param_1,param_2);
      func_0x000107c61170(lVar5);
    }
  }
  return;
}



/* Entry: 1032de7b0; end: 1032de7db;  */

void FUN_1032de7b0(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Entry: 1032de7dc; end: 1032de7fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032de7dc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *param_1;
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (*(ulong *)(lVar2 + _DAT_112f56110) < 9 &&
        (1L << (*(ulong *)(lVar2 + _DAT_112f56110) & 0x3f) & 399U) != 0) {
      FUN_1032dbd08(uVar3);
    }
    else {
      func_0x0001007d6c6c(1,0xd000000000000037,0x800000010f13bde0,uVar1,&PTR_DAT_1106385d0);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1032de7fc; end: 1032de813;  */

void FUN_1032de7fc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1032dc7ac(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1032de814; end: 1032de853;  */

void FUN_1032de814(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1032de854; end: 1032de863;  */

void FUN_1032de854(byte *param_1)

{
  byte bVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  bVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1032dfee4(bVar1 | 0x20);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1032de864; end: 1032de8a7;  */

void FUN_1032de864(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f562c8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000100768718(0xff);
  puVar2 = &UNK_10dc3b1d0;
  func_0x000107c61520(&UNK_10dc3b1d0,uVar1);
  puRam0000000112f562c8 = puVar2;
  return;
}



/* Entry: 1032de8a8; end: 1032de8b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032de8a8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_68 [24];
  
  plVar3 = (long *)*param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if ((int)plVar3[2] == *(int *)(lVar1 + _DAT_112f56110)) {
      uVar5 = *(undefined8 *)(lVar1 + _DAT_112f560d8);
      pcVar6 = *(code **)(*plVar3 + 0x68);
      uVar4 = uVar5;
      func_0x000107c615f0(uVar5);
      (*pcVar6)();
      uVar2 = 0;
      func_0x0001032d9240(0);
      FUN_1032d9260(uVar4,uVar2,&PTR_DAT_110638848);
      func_0x000107c615e8(uVar5);
      func_0x000107c61574(uVar4);
      uVar4 = *(undefined8 *)(lVar1 + _DAT_112f56108);
      func_0x000107c6157c(uVar4);
      func_0x000100075034(FUN_1032de954,plVar3,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar4);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1032de8b8; end: 1032de8ef;  */

void FUN_1032de8b8(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*param_1);
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  return;
}



/* Entry: 1032de8f0; end: 1032de907;  */

void FUN_1032de8f0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1032db584(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1032de908; end: 1032de943;  */

void FUN_1032de908(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107c615e8(*param_1);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  param_1[1] = *(undefined8 *)(unaff_x20 + 0x40);
  *param_1 = uVar2;
  func_0x000107c615f0(uVar1);
  return;
}



/* Entry: 1032de944; end: 1032de953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032de944(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (((*(ushort *)(lVar1 + _DAT_112f56090) >> 0xd & 1) != 0) &&
       ((*(ushort *)(lVar1 + _DAT_112f56090) & 0xfffe) != 0x2000)) {
      FUN_1032daf54();
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1032de954; end: 1032de98f;  */

void FUN_1032de954(undefined8 *param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = *param_1;
  func_0x000107c61574();
  (**(code **)(*unaff_x20 + 0x80))();
  *param_1 = uVar1;
  return;
}



/* Entry: 1032de990; end: 1032dfee3;  */

void FUN_1032de990(long param_1,long param_2)

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



/* Entry: 1032dfee4; end: 1032e05c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032dfee4(uint param_1,undefined **param_2,ulong param_3)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined *puVar13;
  undefined **ppuStack_a8;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar8 = unaff_x20;
  func_0x000107c614f0();
  puVar13 = *(undefined **)(unaff_x20 + _DAT_112f56098);
  puVar9 = puVar13;
  func_0x000107c61174(puVar13);
  FUN_1032d96bc();
  ppuVar11 = param_2;
  func_0x000107c61170(puVar9);
  if ((((uint)param_3 & 0xff) < 2) ||
     (param_2 == (undefined **)0x0 && !CARRY8((long)param_2 - 1,(ulong)((undefined *)0x1 < puVar13))
     )) {
    cVar1 = *(char *)(unaff_x20 + _DAT_112f560a8);
    puVar9 = puVar13;
    ppuStack_a8 = param_2;
    if (cVar1 == '\n') {
      func_0x0001007d6c6c(1,0xd00000000000001a,0x800000010f13bfb0,lVar8,&PTR_DAT_1106385d0);
      FUN_1032e077c(puVar13,param_2,param_3);
    }
    else {
      puStack_98 = (undefined *)0x0;
      ppuStack_90 = (undefined **)0xe000000000000000;
      func_0x000107c602fc(0x1b);
      func_0x000107c6142c(ppuStack_90);
      puStack_98 = (undefined *)0xd000000000000019;
      ppuStack_90 = (undefined **)0x800000010f13bfd0;
      func_0x00010434e040(cVar1);
      func_0x000107c5fb78();
      func_0x000107c6142c(ppuVar11);
      ppuVar11 = ppuStack_90;
      func_0x0001007d6c6c(1,puStack_98,ppuStack_90,lVar8,&PTR_DAT_1106385d0);
      func_0x000107c6142c(ppuVar11);
      FUN_1032e05c4(puVar13,param_2,param_3,cVar1);
    }
  }
  else {
    func_0x0001007d6c6c(1,0xd000000000000040,0x800000010f13bf00,lVar8,&PTR_DAT_1106385d0);
    ppuStack_a8 = &PTR_DAT_110638e10;
    puVar9 = &UNK_110638e00;
  }
  puStack_98 = (undefined *)0x0;
  ppuStack_90 = (undefined **)0xe000000000000000;
  func_0x000107c602fc(0x40);
  puStack_70 = puStack_98;
  uStack_68 = ppuStack_90;
  func_0x000107c5fb78(0x6574617473206e4f,0xea0000000000203a);
  lVar6 = _DAT_112f56090;
  puVar5 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar4 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  puStack_98 = (undefined *)CONCAT62(puStack_98._2_6_,*(undefined2 *)(unaff_x20 + _DAT_112f56090));
  func_0x000107c603d0(&puStack_98,&puStack_70,&UNK_1106390f8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0xd000000000000011,0x800000010f13bf50);
  uVar2 = (undefined1)param_1;
  puStack_98 = (undefined *)CONCAT71(puStack_98._1_7_,uVar2);
  func_0x000107c603d0(&puStack_98,&puStack_70,&UNK_110639058,puVar4,puVar5);
  func_0x000107c5fb78(0x74616320726f6620,0xef203a79726f6765);
  uStack_88 = (undefined1)param_3;
  puStack_98 = puVar13;
  ppuStack_90 = param_2;
  func_0x000107c603d0(&puStack_98,&puStack_70,&UNK_11075e238,puVar4,puVar5);
  func_0x0001032d9cb0(puVar13,param_2,param_3 & 0xffffffff);
  func_0x000107c5fb78(0x72656c646e616820,0xee00203a65707954);
  uVar12 = 0;
  func_0x000107c60714(puVar9,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar12);
  uVar12 = uStack_68;
  func_0x0001007d6c6c(1,puStack_70,uStack_68,lVar8,&PTR_DAT_1106385d0);
  func_0x000107c6142c(uVar12);
  uVar10 = (ulong)*(ushort *)(unaff_x20 + lVar6);
  FUN_1032e1610(uVar10,param_1,puVar9,ppuStack_a8);
  uVar7 = (uint)uVar10;
  if (((uint)(uVar10 >> 0x18) & 0xff) == 1) {
    if ((uVar7 & 0xff) == 1) {
      puStack_98 = (undefined *)0x0;
      ppuStack_90 = (undefined **)0xe000000000000000;
      func_0x000107c602fc(0x2d);
      func_0x000107c5fb78(0xd000000000000011,0x800000010f13bf70);
      func_0x000107c5fb78(0x706e6920726f6620,0xec000000203a7475);
      puVar4 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
      puVar13 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
      puStack_70 = (undefined *)CONCAT71(puStack_70._1_7_,uVar2);
      func_0x000107c603d0(&puStack_70,&puStack_98,&UNK_110639058,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x74617473206e6920,0xeb00000000203a65);
      puStack_70 = (undefined *)CONCAT62(puStack_70._2_6_,*(undefined2 *)(unaff_x20 + lVar6));
      func_0x000107c603d0(&puStack_70,&puStack_98,&UNK_1106390f8,puVar13,puVar4);
      func_0x000107c5fb78(0x72656c646e616820,0xee00203a65707954);
      uVar12 = 0;
      func_0x000107c60714(puVar9,0);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar12);
      uVar12 = 3;
    }
    else {
      puStack_98 = (undefined *)0x0;
      ppuStack_90 = (undefined **)0xe000000000000000;
      func_0x000107c602fc(0x1d);
      func_0x000107c5fb78(0xd000000000000011,0x800000010f13bf90);
      func_0x000107c5fb78(0x706e6920726f6620,0xec000000203a7475);
      puVar13 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
      puVar9 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
      puStack_70 = (undefined *)CONCAT71(puStack_70._1_7_,uVar2);
      func_0x000107c603d0(&puStack_70,&puStack_98,&UNK_110639058,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x74617473206e6920,0xeb00000000203a65);
      puStack_70 = (undefined *)CONCAT62(puStack_70._2_6_,*(undefined2 *)(unaff_x20 + lVar6));
      func_0x000107c603d0(&puStack_70,&puStack_98,&UNK_1106390f8,puVar9,puVar13);
      uVar12 = 1;
    }
    ppuVar11 = ppuStack_90;
    func_0x0001007d6c6c(uVar12,puStack_98,ppuStack_90,lVar8,&PTR_DAT_1106385d0);
    func_0x000107c6142c(ppuVar11);
    return;
  }
  FUN_1032e0888(uVar7 >> 0x10);
  func_0x000100768c7c(unaff_x20 + _DAT_112f56178,&puStack_98);
  func_0x0001000a8868(&puStack_98,uStack_80);
  (**(code **)(lStack_78 + 0x10))(uStack_80,lStack_78);
  func_0x0001000834e4(&puStack_98);
  if (((uint)uStack_80 & 0xff) == 2) {
    uVar3 = param_1 >> 5 & 7;
    if (uVar3 == 6) {
      if ((param_1 & 0xff) != 0xc0) goto LAB_1032e045c;
    }
    else if ((uVar3 != 2) || ((param_1 & 0xff) != 0x40)) goto LAB_1032e045c;
    FUN_1032d9ac8();
  }
LAB_1032e045c:
  if (((*(ushort *)(unaff_x20 + lVar6) >> 0xd & 1) != 0) &&
     ((*(byte *)(unaff_x20 + _DAT_112f561c0) & 1) != 0)) {
    uVar3 = uVar7 | 0x1000;
    if (((uVar10 & 0x3000) == 0 & *(byte *)(unaff_x20 + _DAT_112f561c8)) == 0) {
      uVar3 = uVar7;
    }
    uVar10 = (ulong)uVar3;
  }
  FUN_1032e0bc8(uVar10);
  return;
}



/* Entry: 1032e05c4; end: 1032e077b;  */

undefined1  [16] FUN_1032e05c4(ulong param_1,long param_2,char param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined1 auVar4 [16];
  
  func_0x000107c614f0();
  uVar1 = (uint)param_4 & 0xff;
  if (uVar1 < 6) {
    if (uVar1 != 3) {
      if (uVar1 != 4) {
        if (uVar1 == 5) {
          ppuVar3 = &PTR_DAT_110638d90;
          puVar2 = &UNK_110638d80;
          goto LAB_1032e0768;
        }
        goto LAB_1032e06ec;
      }
      if (param_3 == '\x01') goto LAB_1032e0740;
      goto LAB_1032e0758;
    }
LAB_1032e0610:
    ppuVar3 = &PTR_DAT_110638dd0;
    puVar2 = &UNK_110638dc0;
    if ((param_3 != '\x01') || ((param_1 & 1) == 0)) goto LAB_1032e0768;
    if (4 < ((uint)param_4 - 5 & 0xff)) goto LAB_1032e0744;
    func_0x000107c602fc(0x19,&PTR_DAT_110638dd0);
    func_0x000107c6142c(0xe000000000000000);
    func_0x00010434e040(param_4);
    func_0x000107c5fb78();
    func_0x000107c6142c(ppuVar3);
    func_0x000104366fc4(0xd000000000000017,0x800000010f13bff0,unaff_x20,&PTR_DAT_1106385d0);
    func_0x000107c6142c(0x800000010f13bff0);
  }
  else {
    if (uVar1 - 6 < 4) goto LAB_1032e0610;
LAB_1032e06ec:
    if (param_3 == '\x01') {
LAB_1032e0740:
      if ((param_1 & 1) == 0) goto LAB_1032e0758;
LAB_1032e0744:
      ppuVar3 = &PTR_DAT_110638e90;
      puVar2 = &UNK_110638e80;
      goto LAB_1032e0768;
    }
    if ((param_3 == '\x02') && ((param_1 & 0xfffffffffffffffd) == 0 && param_2 == 0)) {
      ppuVar3 = &PTR_DAT_110638e50;
      puVar2 = &UNK_110638e40;
      goto LAB_1032e0768;
    }
  }
LAB_1032e0758:
  ppuVar3 = &PTR_DAT_110638dd0;
  puVar2 = &UNK_110638dc0;
LAB_1032e0768:
  auVar4._8_8_ = ppuVar3;
  auVar4._0_8_ = puVar2;
  return auVar4;
}



/* Entry: 1032e077c; end: 1032e0887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1032e077c(ulong param_1,long param_2,char param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  ulong uStack_30;
  long lStack_28;
  
  if (param_3 == '\0') {
    puVar3 = &UNK_110638f00;
    ppuVar4 = &PTR_DAT_110638f10;
  }
  else if (param_3 == '\x01') {
    bVar1 = (param_1 & 1) == 0;
    puVar3 = &UNK_110638d00;
    if (bVar1) {
      puVar3 = &UNK_110638ec0;
    }
    ppuVar4 = &PTR_DAT_110638d10;
    if (bVar1) {
      ppuVar4 = &PTR_DAT_110638ed0;
    }
  }
  else if (param_1 == 1 && param_2 == 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f561a8);
    func_0x000107c6157c(uVar5);
    func_0x0001000c74f0(&uStack_30);
    func_0x000107c61574(uVar5);
    if (uStack_30 != 0) {
      uVar2 = uStack_30;
      func_0x000107c614f0();
      (**(code **)(lStack_28 + 0x28))();
      func_0x000107c615e8(uStack_30);
      if ((uVar2 & 1) != 0) {
        puVar3 = &UNK_110638f80;
        ppuVar4 = &PTR_DAT_110638f90;
        goto LAB_1032e0878;
      }
    }
    puVar3 = &UNK_110638f40;
    ppuVar4 = &PTR_DAT_110638f50;
  }
  else {
    puVar3 = &UNK_110638d40;
    ppuVar4 = &PTR_DAT_110638d50;
  }
LAB_1032e0878:
  auVar6._8_8_ = ppuVar4;
  auVar6._0_8_ = puVar3;
  return auVar6;
}



/* Entry: 1032e0888; end: 1032e0bc7;  */

/* WARNING: Possible PIC construction at 0x0001032e0af8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032e0b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032e0ba4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032e0afc) */
/* WARNING: Removing unreachable block (ram,0x0001032e0ba8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e0888(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  code *pcVar11;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar8 = unaff_x20;
  func_0x000107c614f0();
  uStack_58 = 0;
  uStack_50 = 0xe000000000000000;
  func_0x000107c602fc(0x18);
  func_0x000107c6142c(uStack_50);
  uStack_58 = 0xd000000000000016;
  uStack_50 = 0x800000010f13c1d0;
  uVar3 = 0xee00676e6964726f;
  uVar4 = 0x6365527472617473;
  if (param_1 != 2) {
    uVar3 = 0xed0000676e696472;
    uVar4 = 0x6f636552706f7473;
  }
  uVar1 = 0x656e6f6e;
  if (param_1 != 0) {
    uVar1 = 0x4965727574706163;
  }
  uVar2 = 0xe400000000000000;
  if (param_1 != 0) {
    uVar2 = 0xec0000006567616d;
  }
  if (param_1 < 2) {
    uVar3 = uVar2;
    uVar4 = uVar1;
  }
  func_0x000107c5fb78(uVar4,uVar3);
  func_0x000107c6142c(uVar3);
  uVar3 = uStack_50;
  func_0x0001007d6c6c(1,uStack_58,uStack_50,lVar8,&PTR_DAT_1106385d0);
  func_0x000107c6142c(uVar3);
  if (param_1 < 2) {
    if (param_1 == 0) {
      return;
    }
    uVar5 = *(ulong *)(unaff_x20 + _DAT_112f56098);
    if ((uVar5 == 0) || (func_0x000107c4a73c(), (uVar5 & 1) == 0)) {
      plVar7 = (long *)&DAT_112f560d8;
    }
    else {
      plVar7 = (long *)&DAT_112f560e0;
    }
    lVar9 = *(long *)(unaff_x20 + *plVar7);
    lVar8 = *(long *)(((long *)(unaff_x20 + *plVar7))[1] + 8);
    func_0x000107c615f0(lVar9);
    func_0x000107c614f0();
    (**(code **)(lVar8 + 8))();
  }
  else if (param_1 == 2) {
    lVar8 = unaff_x20 + _DAT_112f560c8;
    func_0x000107c61428(lVar8,&uStack_58,0,0);
    if (*(long *)(lVar8 + 0x18) != 0) {
      func_0x0001000a8868();
      FUN_1032d2244();
    }
    uVar5 = *(ulong *)(unaff_x20 + _DAT_112f56098);
    if ((uVar5 == 0) || (func_0x000107c4a73c(), (uVar5 & 1) == 0)) {
      plVar7 = (long *)&DAT_112f560d8;
    }
    else {
      plVar7 = (long *)&DAT_112f560e0;
    }
    lVar8 = *(long *)(unaff_x20 + *plVar7);
    lVar10 = *(long *)(((long *)(unaff_x20 + *plVar7))[1] + 8);
    func_0x000107c615f0(lVar8);
    plVar7 = (long *)(unaff_x20 + _DAT_112f560f0);
    lVar9 = *plVar7;
    *plVar7 = lVar8;
    plVar7[1] = lVar10;
    func_0x000107c615f0();
  }
  else {
    lVar8 = *(long *)(unaff_x20 + _DAT_112f560f0);
    if (lVar8 == 0) {
      uVar5 = *(ulong *)(unaff_x20 + _DAT_112f56098);
      if ((uVar5 == 0) || (func_0x000107c4a73c(), (uVar5 & 1) == 0)) {
        plVar7 = (long *)&DAT_112f560d8;
      }
      else {
        plVar7 = (long *)&DAT_112f560e0;
      }
      lVar9 = *(long *)(unaff_x20 + *plVar7);
      lVar10 = *(long *)(((long *)(unaff_x20 + *plVar7))[1] + 8);
      func_0x000107c615f0(lVar9);
    }
    else {
      lVar10 = ((long *)(unaff_x20 + _DAT_112f560f0))[1];
      lVar9 = lVar8;
    }
    lVar6 = lVar9;
    func_0x000107c614f0(lVar9);
    pcVar11 = *(code **)(lVar10 + 0x18);
    func_0x000107c615f0(lVar8);
    (*pcVar11)(lVar6,lVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar9);
  return;
}



/* Entry: 1032e0bc8; end: 1032e0fa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e0bc8(ulong param_1)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x20;
  uint uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  long lStack_70;
  undefined2 uStack_62;
  
  plVar9 = &lStack_90;
  lVar7 = unaff_x20;
  func_0x000107c614f0();
  lVar1 = _DAT_112f56090;
  uVar8 = param_1;
  func_0x0001032e1d18(param_1,*(undefined2 *)(unaff_x20 + _DAT_112f56090));
  if ((uVar8 & 1) == 0) {
    puVar12 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x000107c61168();
    func_0x000107c4a02c();
    if (((ulong)puVar12 & 1) == 0) {
      func_0x000104366fc4(0xd000000000000028,0x800000010f13c010,lVar7,&PTR_DAT_1106385d0);
    }
    else {
      lStack_90 = 0;
      uStack_88 = 0xe000000000000000;
      func_0x000107c602fc(0x1c);
      func_0x000107c5fb78(0xd000000000000013,0x800000010f13c040);
      puVar5 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
      puVar12 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
      uStack_62 = *(undefined2 *)(unaff_x20 + lVar1);
      func_0x000107c603d0(&uStack_62,&lStack_90,&UNK_1106390f8,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x209286e220,0xa500000000000000);
      uVar11 = (uint)param_1;
      uStack_62 = (short)param_1;
      func_0x000107c603d0(&uStack_62,&lStack_90,&UNK_1106390f8,puVar12,puVar5);
      uVar13 = uStack_88;
      func_0x0001007d6c6c(1,lStack_90,uStack_88,lVar7,&PTR_DAT_1106385d0);
      func_0x000107c6142c(uVar13);
      uVar2 = *(ushort *)(unaff_x20 + lVar1);
      *(short *)(unaff_x20 + lVar1) = (short)param_1;
      if ((uVar2 & 0xfffe) == 0x2000 && (uVar2 >> 0xc & 2) != 0) {
        uVar4 = uVar11 >> 0xc & 3;
        if ((uVar4 < 2) || ((uVar11 & 0xffff) != 0x2100)) {
          bVar6 = (uVar11 & 0xffff) == 0x2101 && uVar4 == 2;
        }
        else {
          bVar6 = true;
        }
      }
      else {
        bVar6 = false;
      }
      FUN_1032e0fa8(param_1);
      func_0x0001032e1128(*(undefined2 *)(unaff_x20 + lVar1),bVar6);
      func_0x0001032e1254(*(undefined2 *)(unaff_x20 + lVar1));
      uVar3 = *(ushort *)(unaff_x20 + lVar1);
      func_0x000100768c7c(unaff_x20 + _DAT_112f56178,&lStack_90);
      uVar13 = uStack_78;
      func_0x0001000a8868(&lStack_90,uStack_78);
      (**(code **)(lStack_70 + 0x10))(uVar13,lStack_70);
      func_0x0001000834e4(&lStack_90);
      if ((((uint)uVar13 & 0xff) == 1) &&
         (((uVar3 = uVar3 >> 0xc & 3, uVar3 == 1 || (uVar3 == 0)) && ((uVar2 >> 0xd & 1) != 0)))) {
        FUN_1032d9ac8();
      }
      func_0x000107c55238(*(undefined8 *)(unaff_x20 + _DAT_112f56128));
      func_0x0001032e13b0(uVar2,*(undefined2 *)(unaff_x20 + lVar1));
      uVar3 = *(ushort *)(unaff_x20 + lVar1);
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f56130);
      lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f56130))[1];
      func_0x000107c614f0(uVar13);
      (**(code **)(lVar1 + 0x38))((uVar2 >> 0xc & 2) == 0,(uVar3 & 0x2000) == 0,uVar13,lVar1);
      FUN_1032dcbdc(&lStack_90);
      func_0x0001000a8868(&lStack_90,uStack_78);
      if (bVar6 == false) {
        uVar13 = 0;
        puVar12 = (undefined *)0x0;
      }
      else {
        puVar12 = &UNK_110638fc0;
        func_0x000107c613fc(&UNK_110638fc0,0x18,7);
        func_0x000107c61614(puVar12 + 0x10);
        uVar13 = 0x1032e1608;
      }
      FUN_1032d450c((uint)uVar2 | uVar11 << 0x10,uVar13,puVar12);
      func_0x00010058d43c(uVar13,puVar12);
      if ((*(char *)(unaff_x20 + _DAT_112f561c0) == '\x01') &&
         ((*(byte *)(unaff_x20 + _DAT_112f561c8) & 1) == 0)) {
        func_0x0001000a8868(&lStack_90,uStack_78);
        uVar10 = *(undefined8 *)(*(long *)(*plVar9 + 0x20) + _DAT_112f55cf8);
        func_0x000107c61174(uVar10);
        uVar13 = uVar10;
        func_0x000107c5c42c();
        func_0x000107c61180();
        func_0x000107c3ec8c();
        func_0x000107c61170(uVar13);
        func_0x000107c61170(uVar10);
      }
      func_0x0001000834e4(&lStack_90);
    }
  }
  return;
}



/* Entry: 1032e0fa8; end: 1032e158f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e0fa8(uint param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  lVar1 = _DAT_112f56188;
  if ((param_1 & 0xfffe) == 0x2000) {
    if (*(byte *)(unaff_x20 + _DAT_112f56188) != 0) {
      lVar3 = unaff_x20 + _DAT_112f56190;
      func_0x000107c61618();
      if (lVar3 == 0) {
        func_0x000104366fc4(0xd000000000000032,0x800000010f13c160,lVar2,&PTR_DAT_1106385d0);
      }
      else {
        func_0x000107c5d34c();
        func_0x000107c61170(lVar3);
      }
      *(undefined1 *)(unaff_x20 + lVar1) = 0;
      func_0x0001007d6c6c(1,0xd000000000000029,0x800000010f13c1a0,lVar2,&PTR_DAT_1106385d0);
    }
  }
  else if ((*(byte *)(unaff_x20 + _DAT_112f56188) & 1) == 0) {
    func_0x0001007d6c6c(1,0xd000000000000027,0x800000010f13c130,lVar2,&PTR_DAT_1106385d0);
    lVar3 = unaff_x20 + _DAT_112f56190;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000104366fc4(0xd000000000000032,0x800000010f13c160,lVar2,&PTR_DAT_1106385d0);
    }
    else {
      func_0x000107c4fc08();
      func_0x000107c61170(lVar3);
    }
    *(undefined1 *)(unaff_x20 + lVar1) = 1;
  }
  return;
}



/* Entry: 1032e1590; end: 1032e15e7;  */

void FUN_1032e1590(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x0001032dcf18(1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1032e15e8; end: 1032e160f; -[_TtC16LensFullScreenUX24LensFullScreenUXWorkflow isCameraRecordingDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1032e15e8(long param_1)

{
  return *(short *)(param_1 + _DAT_112f56090) != 0x2001;
}



/* Entry: 1032e1610; end: 1032e16f7;  */

uint FUN_1032e1610(uint param_1,uint param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  
  uVar1 = param_2 >> 5 & 7;
  if ((uVar1 == 1) && ((param_2 & 1) != 0)) {
    uVar2 = 0;
    param_1 = 0x2000;
    goto LAB_1032e16e0;
  }
  uVar2 = param_1 >> 0xc & 3;
  if ((uVar2 == 2) && ((param_1 & 0xffff) == 0x2000)) {
    uVar2 = 0;
    param_1 = 0x2000;
    if ((uVar1 != 1) || ((param_2 & 1) != 0)) goto LAB_1032e16e0;
LAB_1032e16b0:
    (**(code **)(param_4 + 8))(param_3,param_4);
    param_1 = (uint)param_3;
    pcVar3 = *(code **)(param_4 + 0x10);
  }
  else {
    if (uVar1 == 1) {
      if ((param_2 & 1) == 0) goto LAB_1032e16b0;
    }
    else if (((uVar1 == 0) && (((uVar2 == 0 || (uVar2 == 1)) && ((param_2 & 1) != 0)))) &&
            ((param_1 & 0xc000) == 0x4000)) {
      param_1 = 0;
      uVar2 = 0x1000000;
      goto LAB_1032e16e0;
    }
    pcVar3 = *(code **)(param_4 + 0x10);
  }
  (*pcVar3)();
  uVar2 = param_1 & 0xff000000;
LAB_1032e16e0:
  return uVar2 | param_1 & 0xffffff;
}



/* Entry: 1032e16f8; end: 1032e1c2b;  */

int FUN_1032e16f8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0x78 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x87) {
      iVar2 = 4;
    }
    if (param_2 + 0x87 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1032e1774;
        goto LAB_1032e1758;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1032e1758:
      return ((uint)*param_1 | uVar1 << 8) - 0x87;
    }
  }
LAB_1032e1774:
  uVar1 = ((uint)(*param_1 >> 5) | (*param_1 >> 1 & 0xf) << 3) ^ 0x7f;
  if (0x77 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1032e1c2c; end: 1032e1caf;  */

void FUN_1032e1c2c(void)

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



/* Entry: 1032e1cb0; end: 1032e2317;  */

bool FUN_1032e1cb0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *param_1;
  bVar2 = *param_2;
  if (bVar1 >> 6 == 0) {
    if (bVar2 < 0x40) {
      return bVar1 == bVar2;
    }
  }
  else if (bVar1 >> 6 == 1) {
    if ((bVar2 & 0xc0) == 0x40) {
      return (bool)((bVar2 ^ bVar1 ^ 1) & 1);
    }
  }
  else if (bVar2 == 0x80) {
    return true;
  }
  return false;
}



/* Entry: 1032e2318; end: 1032e2357;  */

void FUN_1032e2318(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f562d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbad87c;
  func_0x000107c61520(&UNK_10dbad87c,&UNK_110639338);
  puRam0000000112f562d0 = puVar1;
  return;
}



/* Entry: 1032e2358; end: 1032e235b;  */

void FUN_1032e2358(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f562d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbad90c;
  func_0x000107c61520(&UNK_10dbad90c,&UNK_110639218);
  puRam0000000112f562d8 = puVar1;
  return;
}



/* Entry: 1032e235c; end: 1032e239b;  */

void FUN_1032e235c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f562d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbad90c;
  func_0x000107c61520(&UNK_10dbad90c,&UNK_110639218);
  puRam0000000112f562d8 = puVar1;
  return;
}



/* Entry: 1032e239c; end: 1032e239f;  */

void FUN_1032e239c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f562e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbad974;
  func_0x000107c61520(&UNK_10dbad974,&UNK_110639188);
  puRam0000000112f562e0 = puVar1;
  return;
}



/* Entry: 1032e23a0; end: 1032e23df;  */

void FUN_1032e23a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f562e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbad974;
  func_0x000107c61520(&UNK_10dbad974,&UNK_110639188);
  puRam0000000112f562e0 = puVar1;
  return;
}



/* Entry: 1032e23e0; end: 1032e2437;  */

undefined1 FUN_1032e23e0(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 1032e2438; end: 1032e2627;  */

undefined1  [16] FUN_1032e2438(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffdc;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f13c1f0);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f13c220);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032e2504);
  (*pcVar1)();
}



/* Entry: 1032e2628; end: 1032e2653;  */

void FUN_1032e2628(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032e2654; end: 1032e2673;  */

void FUN_1032e2654(void)

{
  func_0x0001032e2578();
  return;
}



/* Entry: 1032e2674; end: 1032e267b;  */

undefined8 FUN_1032e2674(void)

{
  return 0;
}



/* Entry: 1032e267c; end: 1032e269b;  */

void FUN_1032e267c(void)

{
  func_0x000107c61168(&PTR_PTR_112f56328);
  return;
}



/* Entry: 1032e269c; end: 1032e2923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e269c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  code *pcVar12;
  code *pcStack_58;
  
  lVar10 = *(long *)(unaff_x20 + _DAT_112f563a0);
  lVar2 = lVar10;
  func_0x000107c42e5c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c4ea74();
    func_0x000107c615e8(lVar3);
    if ((int)lVar2 != 0) {
      func_0x000107c5c360();
      func_0x000107c61180();
      lVar2 = lVar10;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x000107c41050();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
        func_0x000107c5c370();
        func_0x000107c61170(lVar3);
        if (lVar2 == 3) {
          return;
        }
      }
      uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f56390) + _DAT_113034440);
      func_0x000107c6157c(uVar11);
      func_0x0001000d224c(&pcStack_58);
      func_0x000107c61574(uVar11);
      pcVar1 = pcStack_58;
      plVar4 = *(long **)(unaff_x20 + _DAT_112f56398);
      func_0x000107c4aeb4();
      func_0x000107c61180();
      plVar5 = plVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(plVar4);
      pcVar8 = pcVar1;
      if (plVar5 != (long *)0x0) {
        uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f563a8) + _DAT_113036458);
        func_0x000107c6157c(uVar11);
        func_0x0001000d224c(&pcStack_58);
        func_0x000107c61574(uVar11);
        func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
        plVar4 = plVar5;
        func_0x000107c3d14c();
        func_0x000107c61180();
        plVar6 = plVar4;
        func_0x0001000b637c();
        func_0x000107c61170(plVar4);
        puVar7 = &UNK_110639458;
        func_0x000107c613fc(&UNK_110639458,0x20,7);
        *(code **)(puVar7 + 0x10) = pcStack_58;
        *(code **)(puVar7 + 0x18) = pcVar1;
        pcVar12 = *(code **)(*plVar6 + 0x60);
        func_0x000107c615f0(pcVar1);
        func_0x000107c615f0(pcStack_58);
        pcVar8 = FUN_1032e2aa4;
        puVar9 = puVar7;
        (*pcVar12)(FUN_1032e2aa4);
        func_0x000107c61574(plVar6);
        func_0x000107c61574(puVar7);
        pcVar12 = pcVar8;
        func_0x000107c614f0(pcVar8);
        (**(code **)(puVar9 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f563b0),pcVar12,puVar9);
        func_0x000107c615e8(pcVar1);
        func_0x000107c615e8(plVar5);
        func_0x000107c615e8(pcStack_58);
      }
      func_0x000107c615e8(pcVar8);
    }
  }
  return;
}



/* Entry: 1032e2924; end: 1032e2993;  */

void FUN_1032e2924(long *param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c49f90();
    if (param_2 != 0) {
      func_0x000107c559f8(param_3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1032e2994; end: 1032e29bb; -[_TtC42LensPlusLastActiveExclusiveLensTrackerImpl42LensPlusLastActiveExclusiveLensTrackerImpl observeActiveLensIfNeeded] */

void FUN_1032e2994(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1032e269c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032e29bc; end: 1032e2a1b; -[_TtC42LensPlusLastActiveExclusiveLensTrackerImpl42LensPlusLastActiveExclusiveLensTrackerImpl init] */

void FUN_1032e29bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensPlusLastActiveExclusiveLensTrackerImpl.LensPlusLastActiveExclusiveLensTrackerImpl"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032e29e8);
  (*pcVar1)();
}



/* Entry: 1032e2a1c; end: 1032e2a83; -[_TtC42LensPlusLastActiveExclusiveLensTrackerImpl42LensPlusLastActiveExclusiveLensTrackerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e2a1c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f56390));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f56398));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f563a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f563a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f563b0));
  return;
}



/* Entry: 1032e2a84; end: 1032e2aa3;  */

void FUN_1032e2a84(void)

{
  func_0x000107c61168(&PTR_PTR_1128cb9c8);
  return;
}



/* Entry: 1032e2aa4; end: 1032e2aab;  */

void FUN_1032e2aa4(long *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long unaff_x20;
  
  iVar2 = (int)*(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *param_1;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c49f90();
    if (iVar2 != 0) {
      func_0x000107c559f8(uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 1032e2aac; end: 1032e2e1b;  */

long FUN_1032e2aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_110639480;
  func_0x000107c613fc(&UNK_110639480,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  func_0x0001000285a8(0x112f563e0,&UNK_10dbadaa0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  pcVar2 = FUN_1032e2e1c;
  func_0x0001000bdd8c(FUN_1032e2e1c,puVar1);
  uVar3 = 0;
  FUN_1032e302c(0);
  func_0x000107c610f8();
  func_0x0001032e2f70(pcVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 1032e2e1c; end: 1032e2e27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e2e1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar10 = &lStack_70;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  lVar7 = 0;
  FUN_1032e2a84();
  lVar8 = lVar7;
  func_0x000107c610f8();
  lVar5 = _DAT_112f563b0;
  uVar9 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar8 + lVar5) = uVar9;
  *(undefined8 *)(lVar8 + _DAT_112f56390) = uVar1;
  *(undefined8 *)(lVar8 + _DAT_112f56398) = uVar6;
  *(undefined8 *)(lVar8 + _DAT_112f563a0) = uVar2;
  *(undefined8 *)(lVar8 + _DAT_112f563a8) = uVar3;
  puVar4 = PTR_s_init_1125d9248;
  lStack_70 = lVar8;
  lStack_68 = lVar7;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61154(&lStack_70,puVar4);
  *param_1 = plVar10;
  return;
}



/* Entry: 1032e2e28; end: 1032e2e63;  */

void FUN_1032e2e28(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1032e2e64; end: 1032e2e73;  */

void FUN_1032e2e64(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1032e2e74; end: 1032e2f13;  */

void FUN_1032e2e74(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032e2f14; end: 1032e2f23;  */

void FUN_1032e2f14(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1032e2f24; end: 1032e2fbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e2f24(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f564b8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032e2fbc; end: 1032e301b; -[_TtC39LensPlusLastActiveExclusiveLensServices41SCLensPlusLastActiveExclusiveLensServices init] */

void FUN_1032e2fbc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensPlusLastActiveExclusiveLensServices.SCLensPlusLastActiveExclusiveLensServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032e2fe8);
  (*pcVar1)();
}



/* Entry: 1032e301c; end: 1032e302b; -[_TtC39LensPlusLastActiveExclusiveLensServices41SCLensPlusLastActiveExclusiveLensServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e301c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f564b8));
  return;
}



/* Entry: 1032e302c; end: 1032e304b;  */

void FUN_1032e302c(void)

{
  func_0x000107c61168(&PTR_PTR_1128cbaa8);
  return;
}



/* Entry: 1032e304c; end: 1032e33c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1032e304c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lStack_60;
  long lStack_58;
  
  plVar6 = &lStack_60;
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  puVar2 = &UNK_1106395c8;
  func_0x000107c613fc(&UNK_1106395c8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  func_0x0001000285a8(0x112ee3e98,&UNK_10db20590);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  pcVar3 = FUN_1032e3430;
  func_0x0001000bdd8c(FUN_1032e3430,puVar2);
  iVar1 = (int)*(undefined8 *)(param_4 + _DAT_113092298);
  func_0x000108c2bfac();
  if (iVar1 == 0) {
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61574(pcVar3);
  }
  else {
    uVar7 = *(undefined8 *)(param_3 + _DAT_1130364b8);
    lVar4 = 0;
    FUN_1032e3a6c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f56598) = 0;
    *(undefined8 *)(lVar5 + _DAT_112f565a0) = 0;
    *(code **)(lVar5 + _DAT_112f56588) = pcVar3;
    *(undefined8 *)(lVar5 + _DAT_112f56590) = uVar7;
    puVar2 = PTR_s_init_1125d9248;
    lStack_60 = lVar5;
    lStack_58 = lVar4;
    func_0x000107c61580(uVar7,2);
    func_0x000107c6157c(pcVar3);
    func_0x000107c61154(&lStack_60,puVar2);
    func_0x000107c61574(pcVar3);
    func_0x000107c61574(uVar7);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
    *(long **)(unaff_x20 + 0x10) = plVar6;
  }
  return unaff_x20;
}



/* Entry: 1032e33c4; end: 1032e342f;  */

void FUN_1032e33c4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c4aeb0();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1032e3430; end: 1032e3437;  */

void FUN_1032e3430(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4aeb0();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1032e3438; end: 1032e3473;  */

void FUN_1032e3438(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c61174();
    FUN_1032e35e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1032e3474; end: 1032e3537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1032e3474(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uStack_38;
  
  lVar1 = _DAT_112f565a0;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + _DAT_112f565a0);
    if (lVar4 == 0) {
      func_0x000107c61174(lVar3);
    }
    else {
      func_0x000107c61174(lVar3);
      func_0x000107c61174(lVar4);
      func_0x0001000d224c(&uStack_38);
      func_0x000107c42824(uStack_38,param_2,lVar4);
      func_0x000107c615e8(uStack_38);
      func_0x000107c61170(lVar4);
      uVar2 = *(undefined8 *)(lVar3 + lVar1);
      *(undefined8 *)(lVar3 + lVar1) = 0;
      func_0x000107c61170(uVar2);
    }
    uVar2 = *(undefined8 *)(lVar3 + _DAT_112f56598);
    *(undefined8 *)(lVar3 + _DAT_112f56598) = 0;
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar2);
  }
  return 0;
}



/* Entry: 1032e3538; end: 1032e355b;  */

void FUN_1032e3538(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032e355c; end: 1032e35bf;  */

void FUN_1032e355c(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c61174();
    FUN_1032e35e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}


