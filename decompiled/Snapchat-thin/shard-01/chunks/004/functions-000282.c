/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100feea04; end: 100feea2b;  */

void FUN_100feea04(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
  if (param_2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
    return;
  }
  return;
}



/* Entry: 100feea2c; end: 100feee4b;  */

/* WARNING: Possible PIC construction at 0x000100feeabc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100feeae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100feeb04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100feeb18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100feeb70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100feeb8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100feeba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100feebd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100feec14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100feec30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100feec4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100feed00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100feed18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100feed40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100feedf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100feee04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100feee14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100feecc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100feee08) */
/* WARNING: Removing unreachable block (ram,0x000100feedf8) */
/* WARNING: Removing unreachable block (ram,0x000100feed44) */
/* WARNING: Removing unreachable block (ram,0x000100feee48) */
/* WARNING: Removing unreachable block (ram,0x000100feed58) */
/* WARNING: Removing unreachable block (ram,0x000100feed1c) */
/* WARNING: Removing unreachable block (ram,0x000100feed04) */
/* WARNING: Removing unreachable block (ram,0x000100feee44) */
/* WARNING: Removing unreachable block (ram,0x000100feed08) */
/* WARNING: Removing unreachable block (ram,0x000100feec50) */
/* WARNING: Removing unreachable block (ram,0x000100feeca8) */
/* WARNING: Removing unreachable block (ram,0x000100feec90) */
/* WARNING: Removing unreachable block (ram,0x000100feec34) */
/* WARNING: Removing unreachable block (ram,0x000100feecc8) */
/* WARNING: Removing unreachable block (ram,0x000100feee40) */
/* WARNING: Removing unreachable block (ram,0x000100feece8) */
/* WARNING: Removing unreachable block (ram,0x000100feec38) */
/* WARNING: Removing unreachable block (ram,0x000100feec18) */
/* WARNING: Removing unreachable block (ram,0x000100feebd4) */
/* WARNING: Removing unreachable block (ram,0x000100feeba4) */
/* WARNING: Removing unreachable block (ram,0x000100feeb90) */
/* WARNING: Removing unreachable block (ram,0x000100feeb74) */
/* WARNING: Removing unreachable block (ram,0x000100feeb1c) */
/* WARNING: Removing unreachable block (ram,0x000100feeb08) */
/* WARNING: Removing unreachable block (ram,0x000100feeaec) */
/* WARNING: Removing unreachable block (ram,0x000100feeac0) */
/* WARNING: Removing unreachable block (ram,0x000100feee18) */

void FUN_100feea2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c610f8(PTR_PTR_1126b25f0);
  func_0x000107c453e4();
  func_0x000107c610f8(PTR_PTR_1126b5c10);
  func_0x000107c453e4();
  puVar1 = PTR_PTR_1126d8020;
  func_0x000107c610f8(PTR_PTR_1126d8020);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c55d70(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100feee4c; end: 100feee8b;  */

void FUN_100feee4c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100feee8c; end: 100feef4b;  */

long FUN_100feee8c(double param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  double *extraout_x8;
  long unaff_x20;
  double dVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_2);
  plVar3 = (long *)0x0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  lVar4 = *plVar3;
  func_0x000107c5fdcc(lVar4);
  bVar1 = false;
  bVar2 = true;
  if (0.0 < param_1) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(param_1)) {
      bVar1 = param_1 == 1.0;
      bVar2 = 1.0 <= param_1;
    }
  }
  if (!bVar2 || bVar1) {
    dVar5 = (double)NEON_fminnm(param_1,0x3ff0000000000000);
    dVar5 = dVar5 * 0.020000000000000018 + 0.98;
  }
  else {
    dVar5 = 0.0;
  }
  *extraout_x8 = dVar5;
  *(bool *)(extraout_x8 + 1) = bVar2 && !bVar1;
  return lVar4;
}



/* Entry: 100feef4c; end: 100feefb3;  */

void FUN_100feef4c(double *param_1,double param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  
  func_0x000107c5fdcc(*param_3);
  bVar1 = false;
  bVar2 = true;
  if (0.0 < param_2) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(param_2)) {
      bVar1 = param_2 == 1.0;
      bVar2 = 1.0 <= param_2;
    }
  }
  if (!bVar2 || bVar1) {
    dVar3 = (double)NEON_fminnm(param_2,0x3ff0000000000000);
    dVar3 = dVar3 * 0.020000000000000018 + 0.98;
  }
  else {
    dVar3 = 0.0;
  }
  *param_1 = dVar3;
  *(bool *)(param_1 + 1) = bVar2 && !bVar1;
  return;
}



/* Entry: 100feefb4; end: 100fef0e3;  */

code * FUN_100feefb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  pcStack_50 = FUN_100fef700;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1004725e8;
  puStack_58 = &UNK_110374e28;
  uStack_48 = param_1;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c408f0(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar4 = puVar2;
  func_0x000107c5c328(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
  puVar2 = puVar4;
  func_0x0001000b637c(puVar4);
  pcVar5 = FUN_100fef5d0;
  func_0x0001000bfde0(FUN_100fef5d0,0,PTR___sSdN_11034dd90);
  func_0x000107c61170(puVar4);
  func_0x000107c61574(puVar2);
  return pcVar5;
}



/* Entry: 100fef0e4; end: 100fef373;  */

undefined * FUN_100fef0e4(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar7 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  puVar2 = &UNK_110374e60;
  func_0x000107c613fc(&UNK_110374e60,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar3 = &UNK_110374e88;
  func_0x000107c613fc(&UNK_110374e88,0x11,7);
  puVar3[0x10] = 0;
  puVar4 = &UNK_110374eb0;
  func_0x000107c613fc(&UNK_110374eb0,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  puVar5 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x000107c61168();
  puVar6 = &UNK_110374ed8;
  func_0x000107c613fc(&UNK_110374ed8,0x30,7);
  *(undefined **)(puVar6 + 0x10) = puVar3;
  *(undefined **)(puVar6 + 0x18) = puVar4;
  *(undefined8 *)(puVar6 + 0x20) = 0x3fa1111111111111;
  *(undefined8 *)(puVar6 + 0x28) = param_1;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x100fef724;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100fef460;
  puStack_88 = &UNK_110374ef0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar4);
  func_0x000107c615f0(param_1);
  func_0x000107c61574(puVar6);
  func_0x000107c51924(0x3fa999999999999a);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  *(undefined **)(puVar2 + 0x10) = puVar5;
  puVar6 = &UNK_110374f28;
  func_0x000107c613fc(&UNK_110374f28,0x28,7);
  *(undefined **)(puVar6 + 0x10) = puVar2;
  *(undefined **)(puVar6 + 0x18) = puVar3;
  *(undefined8 *)(puVar6 + 0x20) = param_1;
  pcVar11 = *(code **)(*param_2 + 0x60);
  func_0x000107c6157c(puVar3);
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(puVar2);
  uVar8 = 0x100fef734;
  puVar10 = puVar6;
  (*pcVar11)();
  func_0x000107c61574(puVar6);
  puVar5 = PTR_PTR_1126b0418;
  func_0x000107c61168(PTR_PTR_1126b0418);
  puVar6 = &UNK_110374f50;
  func_0x000107c613fc(&UNK_110374f50,0x28,7);
  *(undefined **)(puVar6 + 0x10) = puVar2;
  *(undefined8 *)(puVar6 + 0x18) = uVar8;
  *(undefined **)(puVar6 + 0x20) = puVar10;
  uStack_80 = 0x100fef740;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1000f6b44;
  puStack_88 = &UNK_110374f68;
  puStack_78 = puVar6;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c6157c(puVar2);
  func_0x000107c615f0(uVar8);
  func_0x000107c61574(puVar6);
  func_0x000107c408f0(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c615e8(uVar8);
  return puVar5;
}



/* Entry: 100fef374; end: 100fef45f;  */

void FUN_100fef374(double param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  double dVar2;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  if ((*(byte *)(param_3 + 0x10) & 1) == 0) {
    func_0x000107c61428(param_4 + 0x10,auStack_70,0,0);
    param_1 = param_1 + *(double *)(param_4 + 0x10);
    dVar2 = 0.98;
    if (param_1 <= 0.98) {
      dVar2 = param_1;
    }
    lVar1 = param_4 + 0x10;
    func_0x000107c61428(lVar1,auStack_88,1,0);
    *(double *)(param_4 + 0x10) = dVar2;
    func_0x000107c5fdd0(dVar2);
    func_0x000107c4d664(param_5);
    func_0x000107c61170(lVar1);
    func_0x000107c61428(param_4 + 0x10,auStack_a0,0,0);
    if (*(double *)(param_4 + 0x10) < 0.98) {
      return;
    }
  }
  func_0x000107c498f8(param_2);
  return;
}



/* Entry: 100fef460; end: 100fef4ab;  */

void FUN_100fef460(long param_1,undefined8 param_2)

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



/* Entry: 100fef4ac; end: 100fef567;  */

void FUN_100fef4ac(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  if (*(long *)(param_2 + 0x10) != 0) {
    func_0x000107c498f8();
  }
  func_0x000107c61428(param_2 + 0x10,auStack_70,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  func_0x000107c61170(uVar1);
  lVar2 = param_3 + 0x10;
  func_0x000107c61428(lVar2,auStack_88,1,0);
  *(undefined1 *)(param_3 + 0x10) = 1;
  func_0x000107c5fdd0(uVar3);
  func_0x000107c4d664(param_4);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 100fef568; end: 100fef5cf;  */

void FUN_100fef568(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c498f8();
  }
  func_0x000107c614f0(param_2);
  (**(code **)(param_3 + 8))();
  return;
}



/* Entry: 100fef5d0; end: 100fef5f7;  */

void FUN_100fef5d0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  func_0x000107c5fdcc(*param_3);
  *param_1 = param_2;
  return;
}



/* Entry: 100fef5f8; end: 100fef63b;  */

void FUN_100fef5f8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100fef63c; end: 100fef6ff;  */

code * FUN_100fef63c(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long *unaff_x20;
  
  lVar5 = *unaff_x20;
  func_0x000107c4f3f4();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    lVar2 = param_1;
    func_0x0001000b637c(param_1);
    func_0x000107c61170(param_1);
    uVar3 = *(undefined8 *)(lVar5 + 0x10);
    func_0x000100471e0c(uVar3,1);
    func_0x000107c61574(lVar2);
    pcVar1 = FUN_100feef4c;
    func_0x0001000d5158(FUN_100feef4c,0,PTR___sSdN_11034dd90);
    func_0x000107c61574(uVar3);
    pcVar4 = pcVar1;
    FUN_100feefb4(pcVar1);
    func_0x000107c61574(pcVar1);
    return pcVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100fef700);
  (*pcVar1)();
}



/* Entry: 100fef700; end: 100fef74b;  */

undefined * FUN_100fef700(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long *unaff_x20;
  code *pcVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar7 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  puVar2 = &UNK_110374e60;
  func_0x000107c613fc(&UNK_110374e60,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar3 = &UNK_110374e88;
  func_0x000107c613fc(&UNK_110374e88,0x11,7);
  puVar3[0x10] = 0;
  puVar4 = &UNK_110374eb0;
  func_0x000107c613fc(&UNK_110374eb0,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  puVar5 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x000107c61168();
  puVar6 = &UNK_110374ed8;
  func_0x000107c613fc(&UNK_110374ed8,0x30,7);
  *(undefined **)(puVar6 + 0x10) = puVar3;
  *(undefined **)(puVar6 + 0x18) = puVar4;
  *(undefined8 *)(puVar6 + 0x20) = 0x3fa1111111111111;
  *(undefined8 *)(puVar6 + 0x28) = param_1;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x100fef724;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100fef460;
  puStack_88 = &UNK_110374ef0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar4);
  func_0x000107c615f0(param_1);
  func_0x000107c61574(puVar6);
  func_0x000107c51924(0x3fa999999999999a);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  *(undefined **)(puVar2 + 0x10) = puVar5;
  puVar6 = &UNK_110374f28;
  func_0x000107c613fc(&UNK_110374f28,0x28,7);
  *(undefined **)(puVar6 + 0x10) = puVar2;
  *(undefined **)(puVar6 + 0x18) = puVar3;
  *(undefined8 *)(puVar6 + 0x20) = param_1;
  pcVar11 = *(code **)(*unaff_x20 + 0x60);
  func_0x000107c6157c(puVar3);
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(puVar2);
  uVar8 = 0x100fef734;
  puVar10 = puVar6;
  (*pcVar11)();
  func_0x000107c61574(puVar6);
  puVar5 = PTR_PTR_1126b0418;
  func_0x000107c61168(PTR_PTR_1126b0418);
  puVar6 = &UNK_110374f50;
  func_0x000107c613fc(&UNK_110374f50,0x28,7);
  *(undefined **)(puVar6 + 0x10) = puVar2;
  *(undefined8 *)(puVar6 + 0x18) = uVar8;
  *(undefined **)(puVar6 + 0x20) = puVar10;
  uStack_80 = 0x100fef740;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1000f6b44;
  puStack_88 = &UNK_110374f68;
  puStack_78 = puVar6;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c6157c(puVar2);
  func_0x000107c615f0(uVar8);
  func_0x000107c61574(puVar6);
  func_0x000107c408f0(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c615e8(uVar8);
  return puVar5;
}



/* Entry: 100fef74c; end: 100fef77b;  */

void FUN_100fef74c(undefined8 param_1,long param_2)

{
  func_0x000107c613fc(param_2,0x18,7);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 100fef77c; end: 100fef78b;  */

void FUN_100fef77c(long param_1,long param_2)

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



/* Entry: 100fef78c; end: 100fef937;  */

void FUN_100fef78c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 100fef938; end: 100fefb87;  */

uint FUN_100fef938(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  byte bVar5;
  
  dVar1 = *param_1;
  dVar2 = *param_2;
  dVar3 = param_2[1];
  cVar4 = *(char *)(param_2 + 2);
  bVar5 = *(byte *)(param_1 + 2);
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      if (cVar4 == '\0') {
        return (uint)(dVar1 == dVar2);
      }
    }
    else if (cVar4 == '\x01') {
      return (uint)(param_1[1] == dVar3) & (SUB84(dVar2,0) ^ SUB84(dVar1,0) ^ 0xffffffff);
    }
  }
  else if (bVar5 == 2) {
    if (cVar4 == '\x02') {
      return (uint)(dVar1 == dVar2);
    }
  }
  else if (param_1[1] == 0.0 && dVar1 == 0.0) {
    if ((cVar4 == '\x03') && (dVar3 == 0.0 && dVar2 == 0.0)) {
      return 1;
    }
  }
  else if (((cVar4 == '\x03') && (dVar2 == 4.94065645841247e-324)) && (dVar3 == 0.0)) {
    return 1;
  }
  return 0;
}



/* Entry: 100fefb88; end: 100fefc0b;  */

void FUN_100fefb88(long param_1)

{
  func_0x0001000834e4();
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 100fefc0c; end: 100fefc73;  */

long FUN_100fefc0c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000100083374();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100fefc74; end: 100fefccb;  */

undefined8 * FUN_100fefc74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001000834e4();
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100fefccc; end: 100fefd7b;  */

int FUN_100fefccc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100fefd7c; end: 100fefe27;  */

void FUN_100fefd7c(void)

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



/* Entry: 100fefe28; end: 100fefe97;  */

void FUN_100fefe28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 100fefe98; end: 100ff003f;  */

void FUN_100fefe98(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar8 = *(undefined1 **)(unaff_x22 + 0x58);
  if ((ulong)puVar8 >> 0x3e == 0) {
    puVar2 = *(undefined1 **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar2 = (undefined1 *)((ulong)puVar8 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < puVar8) {
      puVar2 = puVar8;
    }
    func_0x000107c60480();
  }
  if (puVar2 != (undefined1 *)0x0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_100ff0040;
    uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar3 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar3,1);
    puVar4 = PTR_PTR_1126b25c0;
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    func_0x000107c453e4();
    uVar5 = uVar1;
    func_0x000107c42428();
    func_0x000107c61180();
    func_0x000107c614f0(uVar6);
    puVar7 = &UNK_1103751c8;
    func_0x000107c613fc(&UNK_1103751c8,0x40,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar10;
    *(undefined8 *)(puVar7 + 0x18) = uVar1;
    *(undefined8 *)(puVar7 + 0x28) = uVar12;
    *(undefined8 *)(puVar7 + 0x20) = uVar11;
    *(long *)(puVar7 + 0x30) = lVar3;
    *(undefined8 *)(puVar7 + 0x38) = uVar5;
    func_0x000107c61434(uVar10);
    func_0x000107c615f0(uVar1);
    func_0x000107c6157c(uVar9);
    func_0x000107c615f0(uVar5);
    func_0x00010090569c(FUN_100ff05e0,puVar7,uVar6);
    func_0x000107c61574(puVar7);
    func_0x000107c615e8(uVar5);
    func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  FUN_100ff05f0();
  func_0x000107c613f8(&UNK_110375290,puVar2,0,0);
  *puVar2 = 0;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000100ff003c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ff0040; end: 100ff00a7;  */

void FUN_100ff0040(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  if (*(long *)(*unaff_x22 + 0x30) != 0) {
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000100ff0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100ff00a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(*(undefined8 *)(*unaff_x22 + 0x50));
  return;
}



/* Entry: 100ff00a8; end: 100ff05df;  */

/* WARNING: Removing unreachable block (ram,0x000100ff0344) */

void FUN_100ff00a8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined1 *param_6)

{
  ulong uVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  char cStack_70;
  
  if (param_1 >> 0x3e == 0) {
    uVar16 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar16 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar16 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar16 != 0) {
    uVar15 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ff0480);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(param_1 + uVar15 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = uVar15;
        func_0x000100fb0f0c(uVar15,param_1);
      }
      uVar1 = uVar15 + 1;
      if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100ff047c);
        (*pcVar3)();
      }
      uVar10 = param_2;
      func_0x000107c42428(param_2);
      func_0x000107c61180();
      uVar6 = uVar10;
      FUN_100ff0b5c();
      func_0x000107c615e8(uVar10);
      puVar7 = PTR_PTR_1126affc8;
      func_0x000107c610f8();
      func_0x000107c61174(uVar6);
      func_0x000107c453e4();
      puVar8 = PTR_PTR_1126affd0;
      func_0x000107c610f8(PTR_PTR_1126affd0);
      func_0x000107c453e4();
      func_0x000107c5645c(puVar7);
      func_0x000107c61170(puVar8);
      puVar8 = PTR_PTR_1126affe0;
      func_0x000107c61168();
      puVar9 = puVar8;
      FUN_100fe4224();
      func_0x000107c613fc();
      *(undefined8 *)(puVar9 + 0x18) = 3;
      *(undefined8 *)(puVar9 + 0x10) = 1;
      *(undefined **)(puVar9 + 0x20) = puVar7;
      uVar10 = 0;
      FUN_100ff0f44(0,0x112d530c8,&PTR_PTR_1126affc8);
      func_0x000107c61174(puVar7);
      puVar11 = puVar9;
      func_0x000107c5fc48(puVar9,uVar10);
      func_0x000107c61574(puVar9);
      func_0x000107c3d5d0();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      func_0x000107c61170(puVar11);
      if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100ff05d8);
        (*pcVar3)();
      }
      func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
      puVar9 = puVar8;
      func_0x000100759c94(puVar8,0);
      func_0x000107c61170(puVar8);
      func_0x0001048886ac(&puStack_78);
      func_0x000107c61574(puVar9);
      cVar2 = cStack_70;
      puVar12 = puStack_78;
      if (cStack_70 == '\x01') {
        puStack_80 = puStack_78;
        iVar4 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if (iVar4 != 0) {
          uVar10 = 0x112d393f0;
          func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
          func_0x000107c61658(&puStack_80,uVar10,PTR___ss5ErrorWS_11034ee10);
        }
        cStack_70 = '\x01';
LAB_100ff03f4:
        FUN_100c9f80c(puVar12,cStack_70);
        FUN_100ff05f0();
        puVar8 = &UNK_110375290;
        func_0x000107c613f8(&UNK_110375290,puVar12,0,0);
        *puVar12 = 3;
        uVar10 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        puVar14 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
        func_0x000107c613f8();
        *puVar14 = puVar8;
        func_0x000107c61454(param_5,uVar10);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(uVar5);
        return;
      }
      if (puStack_78 == (undefined1 *)0x0) {
        puVar12 = (undefined1 *)0x0;
        goto LAB_100ff03f4;
      }
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(puVar7);
      FUN_100c9f80c(puVar12,cVar2);
      uVar15 = uVar15 + 1;
    } while (uVar1 != uVar16);
  }
  puVar12 = param_6;
  func_0x000107c5b198();
  func_0x000107c61180();
  puVar13 = puVar12;
  func_0x000107c44a2c();
  func_0x000107c61170();
  if (((ulong)puVar13 & 1) != 0) {
    puVar12 = param_6;
    func_0x000107c5b198();
    func_0x000107c61180();
    puVar13 = puVar12;
    func_0x000107c4e8d8();
    func_0x000107c61180();
    func_0x000107c61170(puVar12);
    if (puVar13 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100ff05dc);
      (*pcVar3)();
    }
    puVar12 = puVar13;
    func_0x000107c4e928();
    func_0x000107c61180();
    func_0x000107c61170(puVar13);
    if (puVar12 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100ff05e0);
      (*pcVar3)();
    }
    puVar13 = puVar12;
    func_0x000107c40808();
    func_0x000107c61170();
    if (0 < (long)puVar13) {
      **(undefined8 **)(*(long *)(param_5 + 0x40) + 0x28) = param_6;
      func_0x000107c615f0(param_6);
      func_0x000107c61450(param_5);
      return;
    }
  }
  FUN_100ff05f0();
  puVar7 = &UNK_110375290;
  func_0x000107c613f8(&UNK_110375290,puVar12,0,0);
  *puVar12 = 1;
  uVar10 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar14 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar14 = puVar7;
  func_0x000107c61454(param_5,uVar10);
  return;
}



/* Entry: 100ff05e0; end: 100ff05ef;  */

/* WARNING: Removing unreachable block (ram,0x000100ff0344) */

void FUN_100ff05e0(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long unaff_x20;
  ulong uVar20;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  char cStack_70;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  puVar15 = *(undefined1 **)(unaff_x20 + 0x38);
  if (uVar2 >> 0x3e == 0) {
    uVar20 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar20 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar20 = uVar2;
    }
    func_0x000107c60480();
  }
  if (uVar20 != 0) {
    uVar19 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100ff0480);
          (*pcVar5)();
        }
        uVar7 = *(ulong *)(uVar2 + uVar19 * 8 + 0x20);
        func_0x000107c61174(uVar7);
      }
      else {
        uVar7 = uVar19;
        func_0x000100fb0f0c(uVar19,uVar2);
      }
      uVar1 = uVar19 + 1;
      if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100ff047c);
        (*pcVar5)();
      }
      uVar12 = uVar14;
      func_0x000107c42428(uVar14);
      func_0x000107c61180();
      uVar8 = uVar12;
      FUN_100ff0b5c();
      func_0x000107c615e8(uVar12);
      puVar9 = PTR_PTR_1126affc8;
      func_0x000107c610f8();
      func_0x000107c61174(uVar8);
      func_0x000107c453e4();
      puVar10 = PTR_PTR_1126affd0;
      func_0x000107c610f8(PTR_PTR_1126affd0);
      func_0x000107c453e4();
      func_0x000107c5645c(puVar9);
      func_0x000107c61170(puVar10);
      puVar10 = PTR_PTR_1126affe0;
      func_0x000107c61168();
      puVar11 = puVar10;
      FUN_100fe4224();
      func_0x000107c613fc();
      *(undefined8 *)(puVar11 + 0x18) = 3;
      *(undefined8 *)(puVar11 + 0x10) = 1;
      *(undefined **)(puVar11 + 0x20) = puVar9;
      uVar12 = 0;
      FUN_100ff0f44(0,0x112d530c8,&PTR_PTR_1126affc8);
      func_0x000107c61174(puVar9);
      puVar13 = puVar11;
      func_0x000107c5fc48(puVar11,uVar12);
      func_0x000107c61574(puVar11);
      func_0x000107c3d5d0();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      func_0x000107c61170(puVar13);
      if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100ff05d8);
        (*pcVar5)();
      }
      func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
      puVar11 = puVar10;
      func_0x000100759c94(puVar10,0);
      func_0x000107c61170(puVar10);
      func_0x0001048886ac(&puStack_78);
      func_0x000107c61574(puVar11);
      cVar4 = cStack_70;
      puVar16 = puStack_78;
      if (cStack_70 == '\x01') {
        puStack_80 = puStack_78;
        iVar6 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if (iVar6 != 0) {
          uVar14 = 0x112d393f0;
          func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
          func_0x000107c61658(&puStack_80,uVar14,PTR___ss5ErrorWS_11034ee10);
        }
        cStack_70 = '\x01';
        puVar15 = puStack_78;
LAB_100ff03f4:
        FUN_100c9f80c(puVar15,cStack_70);
        FUN_100ff05f0();
        puVar10 = &UNK_110375290;
        func_0x000107c613f8(&UNK_110375290,puVar15,0,0);
        *puVar15 = 3;
        uVar14 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        puVar18 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
        func_0x000107c613f8();
        *puVar18 = puVar10;
        func_0x000107c61454(lVar3,uVar14);
        func_0x000107c61170(uVar8);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(uVar7);
        return;
      }
      if (puStack_78 == (undefined1 *)0x0) {
        puVar15 = (undefined1 *)0x0;
        goto LAB_100ff03f4;
      }
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(puVar9);
      FUN_100c9f80c(puVar16,cVar4);
      uVar19 = uVar19 + 1;
    } while (uVar1 != uVar20);
  }
  puVar16 = puVar15;
  func_0x000107c5b198();
  func_0x000107c61180();
  puVar17 = puVar16;
  func_0x000107c44a2c();
  func_0x000107c61170();
  if (((ulong)puVar17 & 1) != 0) {
    puVar16 = puVar15;
    func_0x000107c5b198();
    func_0x000107c61180();
    puVar17 = puVar16;
    func_0x000107c4e8d8();
    func_0x000107c61180();
    func_0x000107c61170(puVar16);
    if (puVar17 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100ff05dc);
      (*pcVar5)();
    }
    puVar16 = puVar17;
    func_0x000107c4e928();
    func_0x000107c61180();
    func_0x000107c61170(puVar17);
    if (puVar16 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100ff05e0);
      (*pcVar5)();
    }
    puVar17 = puVar16;
    func_0x000107c40808();
    func_0x000107c61170();
    if (0 < (long)puVar17) {
      **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = puVar15;
      func_0x000107c615f0(puVar15);
      func_0x000107c61450(lVar3);
      return;
    }
  }
  FUN_100ff05f0();
  puVar9 = &UNK_110375290;
  func_0x000107c613f8(&UNK_110375290,puVar16,0,0);
  *puVar16 = 1;
  uVar14 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar18 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar18 = puVar9;
  func_0x000107c61454(lVar3,uVar14);
  return;
}



/* Entry: 100ff05f0; end: 100ff062f;  */

void FUN_100ff05f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d53950 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91a3d8;
  func_0x000107c61520(&UNK_10d91a3d8,&UNK_110375290);
  puRam0000000112d53950 = puVar1;
  return;
}



/* Entry: 100ff0630; end: 100ff0633;  */

void FUN_100ff0630(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d53958 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91a418;
  func_0x000107c61520(&UNK_10d91a418,&UNK_110375290);
  puRam0000000112d53958 = puVar1;
  return;
}



/* Entry: 100ff0634; end: 100ff0673;  */

void FUN_100ff0634(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d53958 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91a418;
  func_0x000107c61520(&UNK_10d91a418,&UNK_110375290);
  puRam0000000112d53958 = puVar1;
  return;
}



/* Entry: 100ff0674; end: 100ff07e7;  */

int FUN_100ff0674(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100ff06f0;
        goto LAB_100ff06d4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100ff06d4:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_100ff06f0:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100ff07e8; end: 100ff0b03;  */

uint FUN_100ff07e8(long param_1,code *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = param_1;
  func_0x000107c4abb4();
  lVar4 = param_1;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ff0af0);
    (*pcVar2)();
  }
  lVar5 = lVar4;
  func_0x000107c3e240();
  func_0x000107c61170(lVar4);
  lVar4 = param_1;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ff0af4);
    (*pcVar2)();
  }
  lVar6 = lVar4;
  func_0x000107c44984();
  func_0x000107c61170(lVar4);
  lVar4 = param_1;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ff0af8);
    (*pcVar2)();
  }
  lVar7 = lVar4;
  func_0x000107c5d0f0();
  func_0x000107c61170(lVar4);
  if ((int)lVar7 == 1) {
    uVar10 = 0;
  }
  else {
    lVar4 = param_1;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ff0b04);
      (*pcVar2)();
    }
    lVar7 = lVar4;
    func_0x000107c5d0f0();
    func_0x000107c61170(lVar4);
    uVar10 = (uint)((int)lVar7 != 0);
  }
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x5e);
  func_0x000107c5fb78(0xd00000000000002b,0x800000010ef1ed50);
  lVar4 = param_1;
  func_0x000107c4abb4();
  uStack_74 = (undefined4)lVar4;
  uVar8 = 0;
  func_0x000100fdc3a4(0);
  func_0x000107c603d0(&uStack_74,&uStack_70,uVar8,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x547465737361202c,0xed0000203a657079);
  lVar4 = param_1;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar7 = lVar4;
    func_0x000107c3e240();
    func_0x000107c61170(lVar4);
    uStack_74 = (undefined4)lVar7;
    uVar8 = 0;
    func_0x000100fdc390(0);
    func_0x000107c603d0(&uStack_74,&uStack_70,uVar8,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c5fb78(0xd000000000000010,0x800000010ef1ed80);
    uVar9 = (uint)lVar6;
    uVar8 = 0x65757274;
    if (uVar9 == 0) {
      uVar8 = 0x65736c6166;
    }
    uVar1 = 0xe400000000000000;
    if (uVar9 == 0) {
      uVar1 = 0xe500000000000000;
    }
    func_0x000107c5fb78(uVar8,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c5fb78(0x20616964656d202c,0xee00203a65707974);
    func_0x000107c4c930();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar4 = param_1;
      func_0x000107c5d0f0();
      func_0x000107c61170(param_1);
      uStack_74 = (undefined4)lVar4;
      uVar8 = 0;
      func_0x000100fdc37c(0);
      func_0x000107c603d0(&uStack_74,&uStack_70,uVar8,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      uVar8 = uStack_68;
      (*param_2)(uStack_70,uStack_68);
      func_0x000107c6142c(uVar8);
      return uVar9 & ((((int)lVar3 != 1 || (int)lVar5 != 5) | uVar10) ^ 0xffffffff) & 1;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ff0b00);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ff0afc);
  (*pcVar2)();
}



/* Entry: 100ff0b04; end: 100ff0b5b;  */

uint FUN_100ff0b04(long param_1,undefined8 param_2)

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



/* Entry: 100ff0b5c; end: 100ff0f1f;  */

void FUN_100ff0b5c(undefined8 ****param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 ****ppppuVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  ulong uVar10;
  undefined8 ***pppuStack_88;
  undefined8 ***pppuStack_80;
  ulong uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar3 = &UNK_1103752d0;
  func_0x000107c613fc(&UNK_1103752d0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  pcStack_60 = FUN_100ff0f20;
  pppuStack_80 = (undefined8 ***)PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_100ff0b04;
  puStack_68 = &UNK_1103752e8;
  ppppuVar4 = &pppuStack_80;
  puStack_58 = puVar3;
  func_0x000107c60bc4();
  puVar3 = puStack_58;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar3);
  ppppuVar6 = param_1;
  func_0x000107c4e91c();
  func_0x000107c61180();
  func_0x000107c60bd0();
  if (ppppuVar6 != (undefined8 ****)0x0) {
    uVar5 = 0;
    FUN_100ff0f44(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppppuVar4 = ppppuVar6;
    func_0x000107c5fc54(ppppuVar6,uVar5);
    func_0x000107c61170(ppppuVar6);
    if ((ulong)ppppuVar4 >> 0x3e == 0) {
      ppppuVar6 = *(undefined8 *****)(((ulong)ppppuVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      ppppuVar6 = (undefined8 ****)((ulong)ppppuVar4 & 0xffffffffffffff8);
      if ((undefined8 ****)0x7fffffffffffffff < ppppuVar4) {
        ppppuVar6 = ppppuVar4;
      }
      func_0x000107c60480();
    }
    if (ppppuVar6 != (undefined8 ****)0x0) {
      if (((ulong)ppppuVar4 & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)ppppuVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ff0f20);
          (*pcVar1)();
        }
        ppppuVar6 = (undefined8 ****)ppppuVar4[4];
        func_0x000107c61174();
      }
      else {
        ppppuVar6 = (undefined8 ****)0x0;
        func_0x0001002ec9a0(0,ppppuVar4);
      }
      func_0x000107c6142c(ppppuVar4);
      func_0x000107c61174();
      ppppuVar7 = param_1;
      func_0x000107c4e924();
      func_0x000107c61180();
      if (ppppuVar7 != (undefined8 ****)0x0) {
        ppppuVar4 = ppppuVar7;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (ppppuVar4 != (undefined8 ****)0x0) {
          ppppuVar8 = ppppuVar4;
          func_0x000107c4c99c();
          func_0x000107c61180();
          func_0x000107c61170(ppppuVar4);
          if (ppppuVar8 != (undefined8 ****)0x0) {
            ppppuVar4 = ppppuVar7;
            func_0x000107c4c930();
            func_0x000107c61180();
            if (ppppuVar4 != (undefined8 ****)0x0) {
              ppppuVar9 = ppppuVar4;
              func_0x000107c5d0f0();
              func_0x000107c61170(ppppuVar4);
              func_0x0001000285a8(0x112d53960,&UNK_10d91a4d0);
              func_0x000107c4ca6c(param_1);
              func_0x000107c61180();
              ppppuVar4 = param_1;
              func_0x000100759c94();
              func_0x000107c61170(param_1);
              func_0x0001048886ac(&pppuStack_80);
              func_0x000107c61574(ppppuVar4);
              ppppuVar4 = (undefined8 ****)pppuStack_80;
              uVar10 = uStack_78 & 0xff;
              if ((char)uStack_78 == '\x01') {
                pppuStack_88 = pppuStack_80;
                iVar2 = 2;
                func_0x000100029b9c(2,0x12,0,0);
                if (iVar2 != 0) {
                  uVar5 = 0x112d393f0;
                  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
                  func_0x000107c61658(&pppuStack_88,uVar5,PTR___ss5ErrorWS_11034ee10);
                }
                func_0x000107c61170(ppppuVar8);
                func_0x000107c61170(ppppuVar7);
                func_0x000107c61170(ppppuVar6);
                FUN_100c9f80c(ppppuVar4,1);
                goto LAB_100ff0eb4;
              }
              if ((undefined8 ****)pppuStack_80 != (undefined8 ****)0x0) {
                func_0x000107c61170(ppppuVar6);
                puVar3 = PTR_PTR_1126affc0;
                func_0x000107c61168(PTR_PTR_1126affc0);
                if ((int)ppppuVar9 == 0) {
                  func_0x000107c60a44(&pppuStack_80,0x4014000000000000,1000);
                  func_0x000107c45078(puVar3);
                }
                else {
                  func_0x000107c5dda4();
                }
                func_0x000107c61180();
                func_0x000107c61170(ppppuVar8);
                func_0x000107c61170(ppppuVar7);
                func_0x000107c61170(ppppuVar6);
                FUN_100c9f80c(ppppuVar4,uVar10);
                return;
              }
            }
            func_0x000107c61170(ppppuVar8);
          }
        }
        func_0x000107c61170(ppppuVar7);
      }
      ppppuVar4 = ppppuVar6;
      func_0x000107c61170();
      goto LAB_100ff0eb4;
    }
    func_0x000107c6142c();
  }
  ppppuVar6 = (undefined8 ****)0x0;
LAB_100ff0eb4:
  FUN_100ff05f0();
  func_0x000107c613f8(&UNK_110375290,ppppuVar4,0,0);
  *(undefined1 *)ppppuVar4 = 2;
  func_0x000107c61654();
  func_0x000107c61170(ppppuVar6);
  return;
}



/* Entry: 100ff0f20; end: 100ff0f43;  */

uint FUN_100ff0f20(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  uint uVar9;
  uint uVar10;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  lVar3 = param_1;
  func_0x000107c4abb4(param_1,pcVar2,*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = param_1;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ff0af0);
    (*pcVar2)();
  }
  lVar5 = lVar4;
  func_0x000107c3e240();
  func_0x000107c61170(lVar4);
  lVar4 = param_1;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ff0af4);
    (*pcVar2)();
  }
  lVar6 = lVar4;
  func_0x000107c44984();
  func_0x000107c61170(lVar4);
  lVar4 = param_1;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ff0af8);
    (*pcVar2)();
  }
  lVar7 = lVar4;
  func_0x000107c5d0f0();
  func_0x000107c61170(lVar4);
  if ((int)lVar7 == 1) {
    uVar10 = 0;
  }
  else {
    lVar4 = param_1;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ff0b04);
      (*pcVar2)();
    }
    lVar7 = lVar4;
    func_0x000107c5d0f0();
    func_0x000107c61170(lVar4);
    uVar10 = (uint)((int)lVar7 != 0);
  }
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x5e);
  func_0x000107c5fb78(0xd00000000000002b,0x800000010ef1ed50);
  lVar4 = param_1;
  func_0x000107c4abb4();
  uStack_74 = (undefined4)lVar4;
  uVar8 = 0;
  func_0x000100fdc3a4(0);
  func_0x000107c603d0(&uStack_74,&uStack_70,uVar8,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x547465737361202c,0xed0000203a657079);
  lVar4 = param_1;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar7 = lVar4;
    func_0x000107c3e240();
    func_0x000107c61170(lVar4);
    uStack_74 = (undefined4)lVar7;
    uVar8 = 0;
    func_0x000100fdc390(0);
    func_0x000107c603d0(&uStack_74,&uStack_70,uVar8,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c5fb78(0xd000000000000010,0x800000010ef1ed80);
    uVar9 = (uint)lVar6;
    uVar8 = 0x65757274;
    if (uVar9 == 0) {
      uVar8 = 0x65736c6166;
    }
    uVar1 = 0xe400000000000000;
    if (uVar9 == 0) {
      uVar1 = 0xe500000000000000;
    }
    func_0x000107c5fb78(uVar8,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c5fb78(0x20616964656d202c,0xee00203a65707974);
    func_0x000107c4c930();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar4 = param_1;
      func_0x000107c5d0f0();
      func_0x000107c61170(param_1);
      uStack_74 = (undefined4)lVar4;
      uVar8 = 0;
      func_0x000100fdc37c(0);
      func_0x000107c603d0(&uStack_74,&uStack_70,uVar8,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      uVar8 = uStack_68;
      (*pcVar2)(uStack_70,uStack_68);
      func_0x000107c6142c(uVar8);
      return uVar9 & ((((int)lVar3 != 1 || (int)lVar5 != 5) | uVar10) ^ 0xffffffff) & 1;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ff0b00);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ff0afc);
  (*pcVar2)();
}



/* Entry: 100ff0f44; end: 100ff0f83;  */

void FUN_100ff0f44(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100ff0f84; end: 100ff0f8b;  */

void FUN_100ff0f84(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100ff05f0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100ff0f8c; end: 100ff1027;  */

/* WARNING: Possible PIC construction at 0x000100ff0fcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ff0fd0) */

void FUN_100ff0f8c(void)

{
  func_0x000107c602fc(0x14);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe000000000000000);
  return;
}



/* Entry: 100ff1028; end: 100ff1047;  */

void FUN_100ff1028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff1048);
  return;
}



/* Entry: 100ff1048; end: 100ff14a7;  */

void FUN_100ff1048(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  byte *pbVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  byte **ppbVar21;
  ulong uVar22;
  undefined8 uVar23;
  long unaff_x22;
  undefined8 uVar24;
  ulong uVar25;
  byte *pbStack_78;
  ulong uStack_70;
  
  uVar13 = *(ulong *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c5cd58();
  func_0x000107c61180();
  uVar12 = uVar11;
  func_0x000107c5cd58();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar12;
  func_0x000107c61170(uVar11);
  pcVar10 = *(code **)(lVar3 + 0xb8);
  if (uVar13 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = uVar13 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < *(ulong *)(unaff_x22 + 0x28)) {
      uVar13 = *(ulong *)(unaff_x22 + 0x28);
    }
    func_0x000107c60480();
  }
  (*pcVar10)();
  if ((long)uVar13 < -0x80000000) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x100ff1458);
    (*pcVar10)();
  }
  if (0x7fffffff < (long)uVar13) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x100ff145c);
    (*pcVar10)();
  }
  lVar18 = *(long *)(unaff_x22 + 0x30);
  uVar17 = *(ulong *)(unaff_x22 + 0x10);
  uVar25 = *(ulong *)(unaff_x22 + 0x18);
  lVar3 = *(long *)(lVar18 + 0x90);
  func_0x0001000a8868(lVar18 + 0x70,*(undefined8 *)(lVar18 + 0x88));
  uVar17 = uVar17 & 0xffffffffffff;
  uVar19 = uVar25 >> 0x38 & 0xf;
  uVar22 = uVar17;
  if ((uVar25 & 0x2000000000000000) != 0) {
    uVar22 = uVar19;
  }
  if (uVar22 == 0) {
LAB_100ff12f8:
    uVar24 = 1;
    uVar25 = 0;
  }
  else {
    if ((uVar25 >> 0x3c & 1) == 0) {
      pbVar14 = *(byte **)(unaff_x22 + 0x10);
      if ((uVar25 >> 0x3d & 1) == 0) {
        if (((ulong)pbVar14 >> 0x3c & 1) == 0) {
          uVar17 = *(ulong *)(unaff_x22 + 0x18);
          func_0x000107c60358();
        }
        else {
          pbVar14 = (byte *)((uVar25 & 0xfffffffffffffff) + 0x20);
        }
        if (*pbVar14 == 0x2b) {
          if ((long)uVar17 < 1) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100ff14a4);
            (*pcVar10)();
          }
          lVar18 = uVar17 - 1;
          if (lVar18 != 0) {
            uVar25 = 0;
            do {
              pbVar14 = pbVar14 + 1;
              if (((9 < *pbVar14 - 0x30) ||
                  (auVar6._8_8_ = 0, auVar6._0_8_ = uVar25, SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
                 (uVar17 = uVar25 * 10, uVar22 = (ulong)(byte)(*pbVar14 - 0x30),
                 uVar25 = uVar17 + uVar22, CARRY8(uVar17,uVar22))) goto LAB_100ff12f8;
              uVar24 = 0;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            goto LAB_100ff1364;
          }
        }
        else if (*pbVar14 == 0x2d) {
          if ((long)uVar17 < 1) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100ff149c);
            (*pcVar10)();
          }
          lVar18 = uVar17 - 1;
          if (lVar18 != 0) {
            uVar25 = 0;
            do {
              pbVar14 = pbVar14 + 1;
              if (((9 < *pbVar14 - 0x30) ||
                  (auVar4._8_8_ = 0, auVar4._0_8_ = uVar25, SUB168(auVar4 * ZEXT816(10),8) != 0)) ||
                 (uVar17 = uVar25 * 10, uVar22 = (ulong)(byte)(*pbVar14 - 0x30),
                 uVar25 = uVar17 - uVar22, uVar17 < uVar22)) goto LAB_100ff12f8;
              uVar24 = 0;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            goto LAB_100ff1364;
          }
        }
        else if (uVar17 != 0) {
          uVar25 = 0;
          if (pbVar14 == (byte *)0x0) {
            uVar24 = 0;
          }
          else {
            do {
              if (((9 < *pbVar14 - 0x30) ||
                  (auVar8._8_8_ = 0, auVar8._0_8_ = uVar25, SUB168(auVar8 * ZEXT816(10),8) != 0)) ||
                 (uVar19 = uVar25 * 10, uVar22 = (ulong)(byte)(*pbVar14 - 0x30),
                 uVar25 = uVar19 + uVar22, CARRY8(uVar19,uVar22))) goto LAB_100ff12f8;
              uVar24 = 0;
              uVar17 = uVar17 - 1;
              pbVar14 = pbVar14 + 1;
            } while (uVar17 != 0);
          }
          goto LAB_100ff1364;
        }
        goto LAB_100ff12f8;
      }
      pbStack_78 = pbVar14;
      uStack_70 = uVar25 & 0xffffffffffffff;
      uVar1 = (uint)pbVar14 & 0xff;
      if (uVar1 == 0x2b) {
        if (uVar19 == 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100ff14a8);
          (*pcVar10)();
        }
        lVar18 = uVar19 - 1;
        if (lVar18 == 0) goto LAB_100ff1350;
        uVar22 = 0;
        pbVar14 = (byte *)((ulong)&pbStack_78 | 1);
        do {
          if (((9 < *pbVar14 - 0x30) ||
              (auVar7._8_8_ = 0, auVar7._0_8_ = uVar22, SUB168(auVar7 * ZEXT816(10),8) != 0)) ||
             (uVar25 = uVar22 * 10, uVar17 = (ulong)(byte)(*pbVar14 - 0x30),
             uVar22 = uVar25 + uVar17, CARRY8(uVar25,uVar17))) goto LAB_100ff1350;
          uVar24 = 0;
          lVar18 = lVar18 + -1;
          pbVar14 = pbVar14 + 1;
        } while (lVar18 != 0);
      }
      else if (uVar1 == 0x2d) {
        if (uVar19 == 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100ff14a0);
          (*pcVar10)();
        }
        lVar18 = uVar19 - 1;
        if (lVar18 == 0) {
LAB_100ff1350:
          uVar22 = 0;
          uVar24 = 1;
        }
        else {
          uVar22 = 0;
          pbVar14 = (byte *)((ulong)&pbStack_78 | 1);
          do {
            if (((9 < *pbVar14 - 0x30) ||
                (auVar5._8_8_ = 0, auVar5._0_8_ = uVar22, SUB168(auVar5 * ZEXT816(10),8) != 0)) ||
               (uVar25 = uVar22 * 10, uVar17 = (ulong)(byte)(*pbVar14 - 0x30),
               uVar22 = uVar25 - uVar17, uVar25 < uVar17)) goto LAB_100ff1350;
            uVar24 = 0;
            lVar18 = lVar18 + -1;
            pbVar14 = pbVar14 + 1;
          } while (lVar18 != 0);
        }
      }
      else {
        if (uVar19 == 0) goto LAB_100ff1350;
        uVar22 = 0;
        ppbVar21 = &pbStack_78;
        do {
          if (((9 < *(byte *)ppbVar21 - 0x30) ||
              (auVar9._8_8_ = 0, auVar9._0_8_ = uVar22, SUB168(auVar9 * ZEXT816(10),8) != 0)) ||
             (uVar25 = uVar22 * 10, uVar17 = (ulong)(byte)(*(byte *)ppbVar21 - 0x30),
             uVar22 = uVar25 + uVar17, CARRY8(uVar25,uVar17))) goto LAB_100ff1350;
          uVar24 = 0;
          uVar19 = uVar19 - 1;
          ppbVar21 = (byte **)((long)ppbVar21 + 1);
        } while (uVar19 != 0);
      }
    }
    else {
      uVar22 = *(ulong *)(unaff_x22 + 0x10);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x18);
      func_0x000107c61434(uVar11);
      uVar24 = uVar11;
      FUN_100f5015c(uVar22,uVar11,10);
      func_0x000107c6142c(uVar11);
    }
    uVar25 = 0;
    if (((uint)uVar24 & 0xff) != 1) {
      uVar25 = uVar22;
    }
  }
LAB_100ff1364:
  lVar18 = *(long *)(unaff_x22 + 0x30);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar11 = uVar12;
  func_0x000107c5cda4(uVar12);
  func_0x000107c61180();
  uVar15 = uVar11;
  func_0x000107c2bb50();
  func_0x000107c61170(uVar11);
  func_0x000107c3e734();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar23;
  uVar11 = uVar23;
  (**(code **)(lVar18 + 200))();
  piVar20 = *(int **)(lVar3 + 0x28);
  iVar2 = *piVar20;
  plVar16 = (long *)(ulong)(uint)piVar20[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar16;
  *plVar16 = unaff_x22;
  plVar16[1] = (long)FUN_100ff14a8;
                    /* WARNING: Could not recover jumptable at 0x000100ff1430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar20))
            (*(undefined8 *)(unaff_x22 + 0x28),uVar25,uVar24,uVar13,uVar15,uVar12,uVar23,
             (uint)uVar11 & 1);
  return;
}



/* Entry: 100ff14a8; end: 100ff151b;  */

void FUN_100ff14a8(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x40);
  *(long *)(lVar3 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x48));
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x58) = param_1;
    pcVar2 = FUN_100ff151c;
  }
  else {
    pcVar2 = FUN_100ff1598;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,*(undefined8 *)(lVar3 + 0x30),0);
  return;
}



/* Entry: 100ff151c; end: 100ff1597;  */

void FUN_100ff151c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x38));
  uVar2 = *(undefined8 *)(lVar1 + 0xd8);
  uVar3 = *(undefined8 *)(lVar1 + 0xe0);
  *(undefined8 *)(lVar1 + 0xd8) = uVar5;
  *(undefined8 *)(lVar1 + 0xe0) = uVar4;
  func_0x000107c61438(uVar4,2);
  func_0x000107c61174(uVar5);
  FUN_100ff1a28(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100ff1594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Entry: 100ff1598; end: 100ff15cb;  */

void FUN_100ff1598(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000100ff15c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ff15cc; end: 100ff161b;  */

void FUN_100ff15cc(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100ff15e4);
  return;
}



/* Entry: 100ff161c; end: 100ff17c3;  */

void FUN_100ff161c(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar8 = *(undefined1 **)(unaff_x22 + 0x58);
  if ((ulong)puVar8 >> 0x3e == 0) {
    puVar2 = *(undefined1 **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar2 = (undefined1 *)((ulong)puVar8 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < puVar8) {
      puVar2 = puVar8;
    }
    func_0x000107c60480();
  }
  if (puVar2 != (undefined1 *)0x0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_100ff17c4;
    uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar3 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar3,1);
    puVar4 = PTR_PTR_1126b25c0;
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    func_0x000107c453e4();
    uVar5 = uVar1;
    func_0x000107c42428();
    func_0x000107c61180();
    func_0x000107c614f0(uVar6);
    puVar7 = &UNK_110375430;
    func_0x000107c613fc(&UNK_110375430,0x40,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar10;
    *(undefined8 *)(puVar7 + 0x18) = uVar1;
    *(undefined8 *)(puVar7 + 0x28) = uVar12;
    *(undefined8 *)(puVar7 + 0x20) = uVar11;
    *(long *)(puVar7 + 0x30) = lVar3;
    *(undefined8 *)(puVar7 + 0x38) = uVar5;
    func_0x000107c61434(uVar10);
    func_0x000107c615f0(uVar1);
    func_0x000107c6157c(uVar9);
    func_0x000107c615f0(uVar5);
    func_0x00010090569c(0x100ff1a18,puVar7,uVar6);
    func_0x000107c61574(puVar7);
    func_0x000107c615e8(uVar5);
    func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  FUN_100ff05f0();
  func_0x000107c613f8(&UNK_110375290,puVar2,0,0);
  *puVar2 = 0;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000100ff17c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ff17c4; end: 100ff182b;  */

void FUN_100ff17c4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  if (*(long *)(*unaff_x22 + 0x30) != 0) {
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000100ff180c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100ff1828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(*(undefined8 *)(*unaff_x22 + 0x50));
  return;
}



/* Entry: 100ff182c; end: 100ff18b7;  */

void FUN_100ff182c(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x70);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  FUN_100ff1a28(*(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61470();
  return;
}



/* Entry: 100ff18b8; end: 100ff18df;  */

void FUN_100ff18b8(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
  return;
}



/* Entry: 100ff18e0; end: 100ff193b;  */

undefined8 * FUN_100ff18e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 100ff193c; end: 100ff1977;  */

undefined8 * FUN_100ff193c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 100ff1978; end: 100ff1a27;  */

int FUN_100ff1978(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100ff1a28; end: 100ff1a53;  */

void FUN_100ff1a28(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 100ff1a54; end: 100ff1a73;  */

undefined8 * FUN_100ff1a54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61174();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 100ff1a74; end: 100ff1b6b;  */

ulong * FUN_100ff1a74(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  if (*param_1 < 0xffffffff) {
    if (0xfffffffe < uVar2) {
      func_0x000107c614b0(uVar2);
    }
    *param_1 = uVar2;
  }
  else if (uVar2 < 0xffffffff) {
    func_0x000107c614ac();
    *param_1 = *param_2;
  }
  else {
    func_0x000107c614b0(uVar2);
    uVar1 = *param_1;
    *param_1 = uVar2;
    func_0x000107c614ac(uVar1);
  }
  return param_1;
}



/* Entry: 100ff1b6c; end: 100ff1c67;  */

int FUN_100ff1b6c(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffe;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Entry: 100ff1c68; end: 100ff1e5b;  */

undefined8 FUN_100ff1c68(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  if (param_1 < 2) {
    return 0;
  }
  iVar1 = (int)&uStack_90;
  uStack_60 = param_1;
  func_0x000107c614b0();
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar3 = 0x112d53600;
  func_0x0001000285a8(0x112d53600,&UNK_10d91a660);
  func_0x000107c6147c(&uStack_90,&uStack_60,uVar2,uVar3,0xe);
  if (iVar1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    FUN_100ff1eb8(&uStack_90,0x112d53608,&UNK_10d91a010);
    uStack_40 = 4;
  }
  else {
    FUN_100c9f8f0(&uStack_90,auStack_58);
    func_0x0001000a8868(auStack_58,uStack_40);
    (**(code **)(lStack_38 + 0x10))(uStack_40,lStack_38);
    func_0x0001000834e4(auStack_58);
  }
  return uStack_40;
}



/* Entry: 100ff1e5c; end: 100ff1eb7;  */

void FUN_100ff1e5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 100ff1eb8; end: 100ff1ef7;  */

undefined8 FUN_100ff1eb8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100ff1ef8; end: 100ff1f07;  */

void FUN_100ff1ef8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100fee54c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100ff1f08; end: 100ff2ad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100ff1f08(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,long param_11,long param_12,undefined8 param_13,
                  undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
                  undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21,
                  undefined8 param_22)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  code *pcVar18;
  code *pcVar19;
  code *apcStack_220 [4];
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
  long lStack_1b0;
  code *pcStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
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
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 auStack_108 [3];
  long lStack_f0;
  undefined **ppuStack_e8;
  undefined1 auStack_e0 [24];
  long lStack_c8;
  undefined8 auStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  
  uStack_1d0 = param_20;
  uStack_118 = param_19;
  uStack_180 = param_16;
  uStack_178 = param_15;
  uStack_120 = param_18;
  uStack_1d8 = param_17;
  uStack_110 = param_21;
  lStack_128 = param_12;
  lStack_1b0 = param_11;
  uStack_170 = param_14;
  lStack_1a0 = param_10;
  uStack_188 = param_9;
  uStack_168 = param_7;
  uStack_160 = param_8;
  uStack_158 = param_1;
  uStack_150 = param_4;
  uStack_148 = param_3;
  uStack_140 = param_5;
  lStack_138 = param_2;
  uStack_130 = param_6;
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  lStack_198 = unaff_x20;
  func_0x0001000d224c(alStack_90);
  plVar1 = alStack_90;
  func_0x0001000a8868(plVar1,lStack_78);
  uVar2 = 2;
  func_0x000100774b74(2,8,0,lStack_78,ppuStack_70,plVar1);
  func_0x0001000834e4(alStack_90);
  puVar3 = &UNK_110375578;
  func_0x000107c613fc(&UNK_110375578,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_13;
  func_0x0001000285a8(0x112d53a70,&UNK_10d91a680);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar18 = FUN_100ff2b64;
  uStack_190 = param_13;
  func_0x0001000bdd8c(FUN_100ff2b64,puVar3);
  uVar11 = *(undefined8 *)(param_10 + _DAT_112faccc0);
  lVar4 = 0;
  FUN_100fda79c();
  lVar5 = lVar4;
  func_0x000107c613fc();
  func_0x000107c6157c(uVar11);
  pcStack_1a8 = pcVar18;
  func_0x000107c6157c(pcVar18);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100bcbf04();
  *(undefined **)(lVar5 + 0x20) = puVar3;
  lVar15 = _DAT_112d529f0;
  lVar6 = 0;
  func_0x000107c5eea4();
  pcVar19 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  (*pcVar19)(lVar5 + lVar15,1,1,lVar6);
  (*pcVar19)(lVar5 + _DAT_112d529f8,1,1,lVar6);
  (*pcVar19)(lVar5 + _DAT_112d52a00,1,1,lVar6);
  *(undefined8 *)(lVar5 + 0x10) = uVar11;
  *(code **)(lVar5 + 0x18) = pcVar18;
  uVar17 = *(undefined8 *)(param_11 + _DAT_1130806b8);
  puVar3 = &UNK_1103755a0;
  func_0x000107c613fc(&UNK_1103755a0,0x38,7);
  uVar11 = uStack_160;
  *(undefined8 *)(puVar3 + 0x10) = uStack_160;
  *(undefined8 *)(puVar3 + 0x18) = param_22;
  *(undefined8 *)(puVar3 + 0x20) = uVar2;
  *(undefined8 *)(puVar3 + 0x28) = uVar17;
  *(long *)(puVar3 + 0x30) = lVar5;
  func_0x0001000285a8(0x112d53a78,&UNK_10d91a688);
  func_0x000107c613fc();
  func_0x000107c61580(uVar17,2);
  func_0x000107c61174();
  uStack_1c0 = uVar11;
  func_0x000107c61174();
  uStack_1b8 = param_22;
  func_0x000107c61174();
  func_0x000107c6157c(lVar5);
  pcVar18 = FUN_100ff31e8;
  func_0x0001000bdd8c(FUN_100ff31e8,puVar3);
  func_0x0001000285a8(0x112d51708,&UNK_10d918530);
  uVar11 = uStack_158;
  func_0x000107c61174();
  uStack_160 = uVar11;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = uStack_140;
  func_0x000107c61174();
  uVar10 = uStack_130;
  uStack_158 = uVar11;
  func_0x000107c4cca8();
  func_0x000107c61180();
  uVar11 = uVar10;
  func_0x0001000bda74();
  uStack_1e0 = uVar11;
  func_0x000107c61170(uVar10);
  func_0x0001000285a8(0x112d53a80,&UNK_10daaba90);
  func_0x000107c613fc();
  uStack_1c8 = uVar17;
  func_0x000107c6157c(uVar17);
  func_0x000107c61174();
  uStack_140 = uVar2;
  func_0x000107c6157c(lVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0x100ff31ec;
  func_0x0001000bdd8c(0x100ff31ec,uVar17);
  uVar2 = *(undefined8 *)(lStack_128 + _DAT_1130813f0);
  uVar10 = *(undefined8 *)(lStack_138 + _DAT_113091b70);
  uStack_1f8 = uVar2;
  uStack_1f0 = uVar10;
  uStack_1e8 = uVar11;
  func_0x0001000285a8(0x112d53a88,&UNK_10d91a690);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = uStack_120;
  func_0x000107c4d80c();
  func_0x000107c61180();
  uVar11 = uVar10;
  func_0x0001000bda74();
  uStack_200 = uVar11;
  func_0x000107c61170(uVar10);
  func_0x0001000285a8(0x112d53a90,&UNK_10da61260);
  uVar11 = uStack_118;
  func_0x000107c4cfbc();
  func_0x000107c61180();
  uVar10 = uVar11;
  func_0x0001000bda74();
  apcStack_220[3] = (code *)uVar10;
  func_0x000107c61170(uVar11);
  puVar3 = &UNK_1103755c8;
  func_0x000107c613fc(&UNK_1103755c8,0x18,7);
  uVar11 = uStack_1d0;
  *(undefined8 *)(puVar3 + 0x10) = uStack_1d0;
  func_0x0001000285a8(0x112d53a98,&UNK_10d91a6a0);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar19 = (code *)0x100ff31f0;
  uStack_1d0 = uVar11;
  func_0x0001000bdd8c();
  apcStack_220[1] = pcVar19;
  func_0x000103a7f694();
  ppuStack_70 = &PTR_DAT_110373a50;
  lVar7 = 0;
  apcStack_220[0] = pcVar19;
  alStack_90[0] = lVar5;
  lStack_78 = lVar4;
  FUN_100ffc18c();
  func_0x000107c613fc();
  func_0x0001000c6518(alStack_90,lVar4);
  lVar15 = *(long *)(*(long *)(lVar4 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar14 = lVar15 + 0xfU & 0xfffffffffffffff0;
  puVar13 = (undefined8 *)((long)apcStack_220 - uVar14);
  pcVar19 = *(code **)(extraout_x8 + 0x10);
  (*pcVar19)(puVar13);
  auStack_b8[0] = *puVar13;
  ppuStack_98 = &PTR_DAT_110373a50;
  *(undefined8 *)(lVar7 + 0xd0) = 0;
  *(undefined8 *)(lVar7 + 0xd8) = 0;
  lVar6 = _DAT_112d53ec0;
  lVar15 = 0x112d53870;
  lStack_a0 = lVar4;
  func_0x0001000285a8(0x112d53870,&UNK_10d91abf0);
  (**(code **)(*(long *)(lVar15 + -8) + 0x38))(lVar7 + lVar6,1,1,lVar15);
  *(undefined8 *)(lVar7 + _DAT_112d53ec8) = 0;
  puVar12 = (undefined8 *)(lVar7 + _DAT_112d53ee0);
  puVar12[4] = 0;
  puVar12[1] = 0;
  *puVar12 = 0;
  puVar12[3] = 0;
  puVar12[2] = 0;
  puVar12 = (undefined8 *)(lVar7 + _DAT_112d53ee8);
  puVar12[1] = 0;
  *puVar12 = 0;
  puVar12[3] = 0;
  puVar12[2] = 0;
  puVar12[4] = 0;
  lVar15 = _DAT_112d53ef0;
  auStack_e0[0] = 0;
  func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
  func_0x000107c613fc();
  func_0x000107c6157c(lVar5);
  apcStack_220[2] = pcVar18;
  func_0x000107c6157c(pcVar18);
  puVar8 = auStack_e0;
  func_0x00010006c248();
  *(undefined1 **)(lVar7 + lVar15) = puVar8;
  *(undefined8 *)(lVar7 + 0x10) = uStack_160;
  *(undefined8 *)(lVar7 + 0x18) = uStack_148;
  *(undefined8 *)(lVar7 + 0x20) = uStack_150;
  *(undefined8 *)(lVar7 + 0x28) = uStack_158;
  *(undefined8 *)(lVar7 + 0x30) = uStack_1e0;
  *(undefined8 *)(lVar7 + 0x38) = uStack_168;
  *(undefined8 *)(lVar7 + 0x40) = uStack_140;
  FUN_100ff31f8(auStack_b8,lVar7 + 0x48);
  uVar11 = uStack_1f0;
  *(undefined8 *)(lVar7 + 0x80) = uStack_1f8;
  *(undefined8 *)(lVar7 + 0x88) = uStack_170;
  *(undefined8 *)(lVar7 + 0x90) = uStack_178;
  *(undefined8 *)(lVar7 + 0x98) = uStack_180;
  *(undefined8 *)(lVar7 + 0x70) = uStack_1f0;
  *(undefined8 *)(lVar7 + 0x78) = uStack_1e8;
  *(undefined8 *)(lVar7 + 0xa0) = uStack_200;
  *(code **)(lVar7 + 0xa8) = apcStack_220[3];
  *(code **)(lVar7 + 0xb0) = apcStack_220[1];
  *(code **)(lVar7 + 0xb8) = apcStack_220[0];
  *(undefined **)(lVar7 + 0xc0) = puVar3;
  *(code **)(lVar7 + 200) = pcVar18;
  FUN_100ff31f8(auStack_b8,auStack_e0);
  func_0x0001000c6518(auStack_e0,lStack_c8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lStack_c8 + -8) + 0x40));
  puVar13 = (undefined8 *)((long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar13);
  auStack_108[0] = *puVar13;
  ppuStack_e8 = &PTR_DAT_110373a50;
  lVar6 = 0;
  lStack_f0 = lVar4;
  func_0x000100ff4dbc();
  func_0x000107c613fc();
  func_0x0001000c6518(auStack_108,lVar4);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar13 = (undefined8 *)((long)puVar13 - uVar14);
  (*pcVar19)(puVar13);
  uVar10 = *puVar13;
  *(long *)(lVar6 + 0x30) = lVar4;
  *(undefined ***)(lVar6 + 0x38) = &PTR_DAT_110373a50;
  *(undefined8 *)(lVar6 + 0x40) = 0;
  *(undefined8 *)(lVar6 + 0x10) = uStack_1d8;
  *(undefined8 *)(lVar6 + 0x18) = uVar10;
  uVar10 = uStack_1d8;
  func_0x000107c61174();
  func_0x000107c615f0(uVar11);
  func_0x0001000834e4(auStack_108);
  func_0x0001000834e4(auStack_e0);
  lVar15 = lStack_a0;
  *(long *)(lVar7 + _DAT_112d53ed0) = lVar6;
  puVar12 = auStack_b8;
  func_0x0001000a8868(puVar12,lStack_a0);
  lVar6 = lStack_a0;
  puVar9 = auStack_b8;
  func_0x0001000a8868(puVar9,lStack_a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
  puVar13 = (undefined8 *)((long)puVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar13,puVar12,lVar15);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar12 = (undefined8 *)((long)puVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_01 + 0x10))(puVar12,puVar9,lVar6);
  uVar16 = *puVar13;
  uVar17 = *puVar12;
  uVar2 = 0;
  func_0x000100fe8e28();
  func_0x000107c613fc();
  FUN_100ff30f4(uVar11,uVar16,uVar17,uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61574(lVar5);
  *(undefined8 *)(lVar7 + _DAT_112d53ed8) = uVar11;
  func_0x0001000834e4(auStack_b8);
  func_0x0001000834e4(alStack_90);
  *(long *)(lStack_198 + 0x10) = lVar7;
  uVar11 = *(undefined8 *)(lVar7 + 0x60);
  lVar15 = *(long *)(lVar7 + 0x68);
  func_0x0001000a8868(lVar7 + 0x48,uVar11);
  lVar15 = *(long *)(lVar15 + 0x28);
  pcVar18 = *(code **)(lVar15 + 0x10);
  func_0x000107c6157c(lVar7);
  (*pcVar18)(1,0xd00000000000004c,0x800000010ef1edc0,uVar11,lVar15);
  FUN_100ff96f4();
  func_0x000107c61170(uStack_160);
  func_0x000107c61170(lStack_138);
  func_0x000107c61170(uStack_148);
  func_0x000107c61170(uStack_150);
  func_0x000107c61170(uStack_158);
  func_0x000107c61170(uStack_130);
  func_0x000107c61170(uStack_168);
  func_0x000107c61170(uStack_1c0);
  func_0x000107c61170(uStack_188);
  func_0x000107c61170(lStack_1a0);
  func_0x000107c61170(lStack_1b0);
  func_0x000107c61170(lStack_128);
  func_0x000107c61170(uStack_190);
  func_0x000107c61170(uStack_170);
  func_0x000107c61170(uStack_178);
  func_0x000107c61170(uStack_180);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uStack_120);
  func_0x000107c61170(uStack_118);
  func_0x000107c61170(uStack_1d0);
  func_0x000107c61170(uStack_110);
  func_0x000107c61170(uStack_1b8);
  func_0x000107c61170(uStack_140);
  func_0x000107c61574(pcStack_1a8);
  func_0x000107c61574(lVar5);
  func_0x000107c61574(uStack_1c8);
  func_0x000107c61574(apcStack_220[2]);
  func_0x000107c61574(lVar7);
  return lStack_198;
}



/* Entry: 100ff2ad8; end: 100ff2b63;  */

void FUN_100ff2ad8(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = 
    "init(beginIn:systemScope:lensMediaDownloaderServices:musicFetcherServices:ngsmePlaybackServices:snapRendererServices:snapDocMediaClaimingServices:snapDocFactoryServices:asyncQueueServices:quickCutLoggingServices:memoriesExperimentServices:lensConfigurationServices:lensPerformerServices:musicPillScopeExposer:musicPickerScopeExposer:musicEditorScopeExposer:audioSessionServices:notificationServices:mixerNamespaceServices:lensMetadataRetrievingServices:memoriesQuickCutPreferencesServices:snapDocEditorServices:)"
    ;
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c51f40();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 100ff2b64; end: 100ff2b6b;  */

void FUN_100ff2b64(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long unaff_x20;
  
  pcVar2 = *(char **)(unaff_x20 + 0x10);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = pcVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(pcVar2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = 
    "init(beginIn:systemScope:lensMediaDownloaderServices:musicFetcherServices:ngsmePlaybackServices:snapRendererServices:snapDocMediaClaimingServices:snapDocFactoryServices:asyncQueueServices:quickCutLoggingServices:memoriesExperimentServices:lensConfigurationServices:lensPerformerServices:musicPillScopeExposer:musicPickerScopeExposer:musicEditorScopeExposer:audioSessionServices:notificationServices:mixerNamespaceServices:lensMetadataRetrievingServices:memoriesQuickCutPreferencesServices:snapDocEditorServices:)"
    ;
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c51f40();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 100ff2b6c; end: 100ff2c8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff2b6c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_78 [40];
  
  func_0x0001000d224c(auStack_78);
  func_0x000107c42d48();
  func_0x000107c61180();
  lVar1 = 0;
  func_0x000100ff1898();
  lVar2 = lVar1;
  func_0x000107c613fc();
  func_0x000107c61580(param_5,2);
  func_0x000107c6157c(param_6);
  func_0x000107c61174();
  func_0x000107c61474(lVar2);
  *(undefined8 *)(lVar2 + 0xd8) = 0;
  *(undefined8 *)(lVar2 + 0xe0) = 0;
  FUN_100c9f95c(auStack_78,lVar2 + 0x70);
  *(undefined8 *)(lVar2 + 0x98) = param_3;
  *(undefined8 *)(lVar2 + 0xa0) = param_4;
  *(code **)(lVar2 + 0xb8) = FUN_100ff3698;
  *(undefined8 *)(lVar2 + 0xc0) = param_5;
  *(undefined8 *)(lVar2 + 200) = 0x100ff36a0;
  *(undefined8 *)(lVar2 + 0xd0) = param_5;
  puVar3 = &UNK_110375630;
  func_0x000107c613fc(&UNK_110375630,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x100ff36a8;
  *(undefined8 *)(puVar3 + 0x18) = param_6;
  *(undefined8 *)(lVar2 + 0xa8) = 0x100ff36b0;
  *(undefined **)(lVar2 + 0xb0) = puVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110375400;
  *param_1 = lVar2;
  return;
}



/* Entry: 100ff2c90; end: 100ff2cff;  */

undefined8 FUN_100ff2c90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0(uStack_40);
  (**(code **)(*(long *)(lStack_38 + 0x20) + 8))(param_1,uVar1);
  func_0x000107c615e8(uStack_40);
  return param_1;
}



/* Entry: 100ff2d00; end: 100ff2d5b;  */

uint FUN_100ff2d00(void)

{
  uint uVar1;
  undefined8 uStack_30;
  long lStack_28;
  undefined8 uVar2;
  
  func_0x0001000d224c(&uStack_30);
  uVar2 = uStack_30;
  func_0x000107c614f0(uStack_30);
  uVar1 = (uint)uVar2;
  (**(code **)(*(long *)(lStack_28 + 0x20) + 0x60))();
  func_0x000107c615e8(uStack_30);
  return uVar1 & 1;
}



/* Entry: 100ff2d5c; end: 100ff2f9b;  */

void FUN_100ff2d5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0(uStack_40);
  (**(code **)(lStack_38 + 0xc0))(1,param_1,param_2,uVar1,lStack_38);
  func_0x000107c615e8(uStack_40);
  return;
}



/* Entry: 100ff2f9c; end: 100ff3003;  */

void FUN_100ff2f9c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  plVar2 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100ff3004;
  plVar2[3] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff95f0,0,0);
  return;
}



/* Entry: 100ff3004; end: 100ff3067;  */

void FUN_100ff3004(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(*unaff_x22 + 0x18);
  func_0x000107c615c0(uVar1);
  func_0x000100eea164();
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff3068,uVar2,uVar1);
  return;
}



/* Entry: 100ff3068; end: 100ff30cf;  */

void FUN_100ff3068(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000107c4358c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100ff30a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ff30d0; end: 100ff30d3;  */

void FUN_100ff30d0(void)

{
  return;
}



/* Entry: 100ff30d4; end: 100ff30f3;  */

void FUN_100ff30d4(void)

{
  func_0x000100ff2ea4();
  return;
}



/* Entry: 100ff30f4; end: 100ff31e7;  */

long FUN_100ff30f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uStack_81;
  undefined8 auStack_80 [3];
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  uVar1 = 0;
  FUN_100fda79c();
  ppuStack_38 = &PTR_DAT_1103739d0;
  ppuStack_60 = &PTR_DAT_1103739e8;
  uVar2 = 0;
  auStack_80[0] = param_3;
  uStack_68 = uVar1;
  auStack_58[0] = param_2;
  uStack_40 = uVar1;
  func_0x0001005f60b4();
  *(undefined8 *)(param_4 + 0x70) = 0;
  *(undefined8 *)(param_4 + 0x68) = 0;
  *(undefined8 *)(param_4 + 0x80) = 0;
  *(undefined8 *)(param_4 + 0x78) = 0;
  *(undefined8 *)(param_4 + 0x90) = 0;
  *(undefined8 *)(param_4 + 0x88) = 0;
  *(undefined8 *)(param_4 + 0x98) = 0;
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(param_4 + 0xa0) = uVar2;
  func_0x0001000285a8(0x112d53b48,&UNK_10d925340);
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  uStack_81 = 0;
  func_0x000100087c34(&uStack_81);
  *(undefined8 *)(param_4 + 0xa8) = uVar1;
  *(undefined8 *)(param_4 + 0x10) = param_1;
  FUN_100c9f95c(auStack_58,param_4 + 0x18);
  FUN_100c9f95c(auStack_80,param_4 + 0x40);
  return param_4;
}



/* Entry: 100ff31e8; end: 100ff31f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff31e8(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_78 [40];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x0001000d224c(auStack_78);
  func_0x000107c42d48();
  func_0x000107c61180();
  lVar3 = 0;
  func_0x000100ff1898();
  lVar4 = lVar3;
  func_0x000107c613fc();
  func_0x000107c61580(uVar1,2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61174();
  func_0x000107c61474(lVar4);
  *(undefined8 *)(lVar4 + 0xd8) = 0;
  *(undefined8 *)(lVar4 + 0xe0) = 0;
  FUN_100c9f95c(auStack_78,lVar4 + 0x70);
  *(undefined8 *)(lVar4 + 0x98) = uVar2;
  *(undefined8 *)(lVar4 + 0xa0) = uVar5;
  *(code **)(lVar4 + 0xb8) = FUN_100ff3698;
  *(undefined8 *)(lVar4 + 0xc0) = uVar1;
  *(undefined8 *)(lVar4 + 200) = 0x100ff36a0;
  *(undefined8 *)(lVar4 + 0xd0) = uVar1;
  puVar6 = &UNK_110375630;
  func_0x000107c613fc(&UNK_110375630,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = 0x100ff36a8;
  *(undefined8 *)(puVar6 + 0x18) = uVar7;
  *(undefined8 *)(lVar4 + 0xa8) = 0x100ff36b0;
  *(undefined **)(lVar4 + 0xb0) = puVar6;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_110375400;
  *param_1 = lVar4;
  return;
}



/* Entry: 100ff31f8; end: 100ff323b;  */

long FUN_100ff31f8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100ff323c; end: 100ff327f;  */

void FUN_100ff323c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100ff3280; end: 100ff328f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff3280(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_78 [40];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x0001000d224c(auStack_78);
  func_0x000107c42d48();
  func_0x000107c61180();
  lVar3 = 0;
  func_0x000100ff1898();
  lVar4 = lVar3;
  func_0x000107c613fc();
  func_0x000107c61580(uVar1,2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61174();
  func_0x000107c61474(lVar4);
  *(undefined8 *)(lVar4 + 0xd8) = 0;
  *(undefined8 *)(lVar4 + 0xe0) = 0;
  FUN_100c9f95c(auStack_78,lVar4 + 0x70);
  *(undefined8 *)(lVar4 + 0x98) = uVar2;
  *(undefined8 *)(lVar4 + 0xa0) = uVar5;
  *(code **)(lVar4 + 0xb8) = FUN_100ff3698;
  *(undefined8 *)(lVar4 + 0xc0) = uVar1;
  *(undefined8 *)(lVar4 + 200) = 0x100ff36a0;
  *(undefined8 *)(lVar4 + 0xd0) = uVar1;
  puVar6 = &UNK_110375630;
  func_0x000107c613fc(&UNK_110375630,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = 0x100ff36a8;
  *(undefined8 *)(puVar6 + 0x18) = uVar7;
  *(undefined8 *)(lVar4 + 0xa8) = 0x100ff36b0;
  *(undefined **)(lVar4 + 0xb0) = puVar6;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_110375400;
  *param_1 = lVar4;
  return;
}



/* Entry: 100ff3290; end: 100ff32db;  */

void FUN_100ff3290(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(lStack_38 + 0x20);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  *param_1 = uStack_40;
  return;
}



/* Entry: 100ff32dc; end: 100ff333f;  */

void FUN_100ff32dc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100ff3340;
  plVar4[2] = lVar2;
  lVar2 = 0;
  func_0x000107c5fcec();
  plVar4[3] = lVar2;
  func_0x000107c5fce8();
  plVar4[4] = lVar2;
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  plVar4[5] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_100ff3004;
  plVar3[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff95f0,0,0);
  return;
}



/* Entry: 100ff3340; end: 100ff339b;  */

void FUN_100ff3340(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100ff3378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100ff339c; end: 100ff33af;  */

undefined * FUN_100ff339c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d52b00,&UNK_10d9192c0);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100ff3694);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100ff3698);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 100ff33b0; end: 100ff34b3;  */

undefined * FUN_100ff33b0(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar5 = 0;
  func_0x0001000285a8(0x112d52af0);
  puVar2 = puVar8;
  func_0x000107c60498();
  uVar9 = *(ulong *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar9;
  FUN_100fda8d4();
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar7 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar7 + 0x40) = *(ulong *)(puVar2 + uVar7 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uVar9;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ff34b4);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      if (puVar8 == (undefined *)0x0) {
        func_0x000107c61174();
        return puVar2;
      }
      uVar9 = puVar6[-1];
      uVar4 = *puVar6;
      func_0x000107c61174();
      uVar3 = uVar9;
      FUN_100fda8d4();
      puVar6 = puVar6 + 2;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ff3484);
  (*pcVar1)();
}



/* Entry: 100ff34b4; end: 100ff358b;  */

undefined * FUN_100ff34b4(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar6 != (undefined *)0x0) {
    uVar4 = 0;
    func_0x0001000285a8(0x112d52af8);
    puVar2 = puVar6;
    func_0x000107c60498();
    puVar8 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar7 = puVar8[-1];
      uVar9 = *puVar8;
      uVar3 = uVar7;
      FUN_100fda8d4();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ff3588);
        (*pcVar1)();
      }
      uVar5 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar5 + 0x40) = *(ulong *)(puVar2 + uVar5 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uVar7;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ff358c);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar6 = puVar6 + -1;
      puVar8 = puVar8 + 2;
    } while (puVar6 != (undefined *)0x0);
  }
  return puVar2;
}



/* Entry: 100ff358c; end: 100ff359f;  */

undefined * FUN_100ff358c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d52ae8,&UNK_10d91a720);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100ff3694);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100ff3698);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 100ff35a0; end: 100ff3697;  */

undefined * FUN_100ff35a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(param_2,param_3);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100ff3694);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100ff3698);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 100ff3698; end: 100ff36b7;  */

undefined8 FUN_100ff3698(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0(uStack_40);
  (**(code **)(*(long *)(lStack_38 + 0x20) + 8))(param_1,uVar1);
  func_0x000107c615e8(uStack_40);
  return param_1;
}



/* Entry: 100ff36b8; end: 100ff3707;  */

undefined8 FUN_100ff36b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d53b50;
  func_0x0001000285a8(0x112d53b50,&UNK_10d91a730);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100ff3708; end: 100ff375b;  */

void FUN_100ff3708(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  uVar2 = param_2[2];
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  *(undefined1 *)(unaff_x22 + 0x30) = *(undefined1 *)(param_2 + 3);
  func_0x000107c61434(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff375c,0,0);
  return;
}



/* Entry: 100ff375c; end: 100ff377f;  */

void FUN_100ff375c(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x10);
  puVar3[1] = *(undefined8 *)(unaff_x22 + 0x20);
  *puVar3 = uVar4;
  puVar3[2] = uVar2;
  *(undefined1 *)(puVar3 + 3) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000100ff377c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ff3780; end: 100ff3cf3;  */

void FUN_100ff3780(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined *puVar7;
  byte **ppbVar8;
  long lVar9;
  byte *unaff_x20;
  byte *pbVar10;
  byte *pbVar11;
  undefined1 uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined8 uStack_78;
  byte *pbStack_70;
  ulong uStack_68;
  
  pbVar14 = unaff_x20;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  pbVar3 = pbVar14;
  func_0x000107c5faec();
  uStack_78 = param_3;
  func_0x000107c61170(pbVar14);
  pbVar14 = unaff_x20;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  if (pbVar14 == (byte *)0x0) {
    pbVar15 = (byte *)0x0;
    uStack_78 = 0xe000000000000000;
  }
  else {
    pbVar15 = pbVar14;
    func_0x000107c5faec();
    func_0x000107c61170(pbVar14);
  }
  pbVar14 = unaff_x20;
  func_0x000107c4d2b4();
  func_0x000107c61180();
  if (pbVar14 == (byte *)0x0) {
LAB_100ff394c:
    pbVar10 = (byte *)0x0;
    pbVar4 = (byte *)0xe000000000000000;
  }
  else {
    pbVar4 = (byte *)0x0;
    FUN_100ff4164(0,0x112d53b58,&PTR_PTR_1126bb878);
    pbVar10 = pbVar14;
    func_0x000107c5fc54();
    func_0x000107c61170(pbVar14);
    if ((ulong)pbVar10 >> 0x3e == 0) {
      pbVar14 = *(byte **)(((ulong)pbVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      pbVar14 = (byte *)((ulong)pbVar10 & 0xffffffffffffff8);
      if ((byte *)0x7fffffffffffffff < pbVar10) {
        pbVar14 = pbVar10;
      }
      func_0x000107c60480();
    }
    if (pbVar14 != (byte *)0x0) {
      pbVar16 = (byte *)0x0;
      do {
        if (((ulong)pbVar10 & 0xc000000000000001) == 0) {
          if (*(byte **)(((ulong)pbVar10 & 0xffffffffffffff8) + 0x10) <= pbVar16) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ff3960);
            (*pcVar2)();
          }
          pbVar5 = *(byte **)(pbVar10 + (long)pbVar16 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          pbVar5 = pbVar16;
          pbVar4 = pbVar10;
          func_0x0001002ec9b4(pbVar16,pbVar10,&PTR_PTR_1126bb878,0x112d53b58);
        }
        pbVar11 = pbVar16 + 1;
        if (SCARRY8((long)pbVar16,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ff395c);
          (*pcVar2)();
        }
        pbVar6 = pbVar5;
        func_0x000107c5d844();
        if (((ulong)pbVar6 & 1) != 0) {
          func_0x000107c6142c(pbVar10);
          pbVar14 = pbVar5;
          func_0x000107c5cda4();
          func_0x000107c61180();
          func_0x000107c61170(pbVar5);
          if (pbVar14 == (byte *)0x0) goto LAB_100ff394c;
          pbVar10 = pbVar14;
          func_0x000107c5faec();
          func_0x000107c61170(pbVar14);
          goto LAB_100ff3998;
        }
        func_0x000107c61170(pbVar5);
        pbVar16 = pbVar16 + 1;
      } while (pbVar11 != pbVar14);
    }
    func_0x000107c6142c(pbVar10);
    pbVar10 = (byte *)0x0;
    pbVar4 = (byte *)0xe000000000000000;
  }
LAB_100ff3998:
  pbVar16 = (byte *)((ulong)pbVar10 & 0xffffffffffff);
  pbVar5 = (byte *)((ulong)pbVar4 >> 0x38 & 0xf);
  pbVar14 = pbVar16;
  if (((ulong)pbVar4 & 0x2000000000000000) != 0) {
    pbVar14 = pbVar5;
  }
  if (pbVar14 == (byte *)0x0) {
    func_0x000107c6142c();
    uVar12 = 1;
    pbVar14 = (byte *)0x0;
    goto LAB_100ff3c00;
  }
  if (((ulong)pbVar4 >> 0x3c & 1) == 0) {
    if (((ulong)pbVar4 >> 0x3d & 1) == 0) {
      if (((ulong)pbVar10 >> 0x3c & 1) == 0) {
        pbVar16 = pbVar4;
        func_0x000107c60358();
      }
      else {
        pbVar10 = (byte *)(((ulong)pbVar4 & 0xfffffffffffffff) + 0x20);
      }
      if (*pbVar10 == 0x2b) {
        if ((long)pbVar16 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ff3cf0);
          (*pcVar2)();
        }
        pbVar16 = pbVar16 + -1;
        if (pbVar16 == (byte *)0x0) goto LAB_100ff3be8;
        pbVar11 = (byte *)0x0;
        do {
          pbVar10 = pbVar10 + 1;
          if (((9 < *pbVar10 - 0x30) ||
              (lVar9 = (long)pbVar11 * 10,
              SUB168(SEXT816((long)pbVar11) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar10 - 0x30), pbVar11 = (byte *)(lVar9 + uVar1),
             SCARRY8(lVar9,uVar1))) goto LAB_100ff3be8;
          uVar13 = 0;
          pbVar16 = pbVar16 + -1;
        } while (pbVar16 != (byte *)0x0);
      }
      else if (*pbVar10 == 0x2d) {
        if ((long)pbVar16 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ff3ce8);
          (*pcVar2)();
        }
        pbVar16 = pbVar16 + -1;
        if (pbVar16 == (byte *)0x0) {
LAB_100ff3be8:
          uVar13 = 1;
          pbVar11 = (byte *)0x0;
        }
        else {
          pbVar11 = (byte *)0x0;
          do {
            pbVar10 = pbVar10 + 1;
            if (((9 < *pbVar10 - 0x30) ||
                (lVar9 = (long)pbVar11 * 10,
                SUB168(SEXT816((long)pbVar11) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
               (uVar1 = (ulong)(byte)(*pbVar10 - 0x30), pbVar11 = (byte *)(lVar9 - uVar1),
               SBORROW8(lVar9,uVar1))) goto LAB_100ff3be8;
            uVar13 = 0;
            pbVar16 = pbVar16 + -1;
          } while (pbVar16 != (byte *)0x0);
        }
      }
      else {
        if (pbVar16 == (byte *)0x0) goto LAB_100ff3be8;
        if (pbVar10 == (byte *)0x0) {
          uVar13 = 0;
          pbVar11 = (byte *)0x0;
        }
        else {
          pbVar11 = (byte *)0x0;
          do {
            if (((9 < *pbVar10 - 0x30) ||
                (lVar9 = (long)pbVar11 * 10,
                SUB168(SEXT816((long)pbVar11) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
               (uVar1 = (ulong)(byte)(*pbVar10 - 0x30), pbVar11 = (byte *)(lVar9 + uVar1),
               SCARRY8(lVar9,uVar1))) goto LAB_100ff3be8;
            uVar13 = 0;
            pbVar16 = pbVar16 + -1;
            pbVar10 = pbVar10 + 1;
          } while (pbVar16 != (byte *)0x0);
        }
      }
    }
    else {
      pbStack_70 = pbVar10;
      uStack_68 = (ulong)pbVar4 & 0xffffffffffffff;
      uVar13 = (uint)pbVar10 & 0xff;
      if (uVar13 == 0x2b) {
        if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ff3cf4);
          (*pcVar2)();
        }
        pbVar5 = pbVar5 + -1;
        if (pbVar5 == (byte *)0x0) goto LAB_100ff3be8;
        pbVar11 = (byte *)0x0;
        pbVar14 = (byte *)((ulong)&pbStack_70 | 1);
        do {
          if (((9 < *pbVar14 - 0x30) ||
              (lVar9 = (long)pbVar11 * 10,
              SUB168(SEXT816((long)pbVar11) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar14 - 0x30), pbVar11 = (byte *)(lVar9 + uVar1),
             SCARRY8(lVar9,uVar1))) goto LAB_100ff3be8;
          uVar13 = 0;
          pbVar5 = pbVar5 + -1;
          pbVar14 = pbVar14 + 1;
        } while (pbVar5 != (byte *)0x0);
      }
      else if (uVar13 == 0x2d) {
        if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ff3cec);
          (*pcVar2)();
        }
        pbVar5 = pbVar5 + -1;
        if (pbVar5 == (byte *)0x0) goto LAB_100ff3be8;
        pbVar11 = (byte *)0x0;
        pbVar14 = (byte *)((ulong)&pbStack_70 | 1);
        do {
          if (((9 < *pbVar14 - 0x30) ||
              (lVar9 = (long)pbVar11 * 10,
              SUB168(SEXT816((long)pbVar11) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar14 - 0x30), pbVar11 = (byte *)(lVar9 - uVar1),
             SBORROW8(lVar9,uVar1))) goto LAB_100ff3be8;
          uVar13 = 0;
          pbVar5 = pbVar5 + -1;
          pbVar14 = pbVar14 + 1;
        } while (pbVar5 != (byte *)0x0);
      }
      else {
        if (pbVar5 == (byte *)0x0) goto LAB_100ff3be8;
        pbVar11 = (byte *)0x0;
        ppbVar8 = &pbStack_70;
        do {
          if (((9 < *(byte *)ppbVar8 - 0x30) ||
              (lVar9 = (long)pbVar11 * 10,
              SUB168(SEXT816((long)pbVar11) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*(byte *)ppbVar8 - 0x30), pbVar11 = (byte *)(lVar9 + uVar1),
             SCARRY8(lVar9,uVar1))) goto LAB_100ff3be8;
          uVar13 = 0;
          pbVar5 = pbVar5 + -1;
          ppbVar8 = (byte **)((long)ppbVar8 + 1);
        } while (pbVar5 != (byte *)0x0);
      }
    }
  }
  else {
    pbVar14 = pbVar4;
    FUN_100ff4058(pbVar10,pbVar4,10,FUN_100edbb6c);
    uVar13 = (uint)pbVar14;
    pbVar11 = pbVar10;
  }
  uVar12 = (undefined1)uVar13;
  func_0x000107c6142c(pbVar4);
  pbVar14 = (byte *)0x0;
  if ((uVar13 & 0xff) != 1) {
    pbVar14 = pbVar11;
  }
LAB_100ff3c00:
  func_0x000107c4b334();
  func_0x000107c61180();
  puVar7 = &UNK_110375660;
  func_0x000107c613fc(&UNK_110375660,0x20,7);
  *(byte **)(puVar7 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar7 + 0x18) = param_2;
  *param_1 = pbVar3;
  param_1[1] = param_3;
  param_1[2] = pbVar15;
  param_1[3] = uStack_78;
  param_1[4] = pbVar14;
  *(undefined1 *)(param_1 + 5) = uVar12;
  param_1[6] = 0;
  param_1[7] = 0xe000000000000000;
  param_1[8] = &UNK_10d91a748;
  param_1[9] = puVar7;
  *(undefined1 *)(param_1 + 10) = 0;
  func_0x000107c6157c(param_2);
  return;
}



/* Entry: 100ff3cf4; end: 100ff3d7f;  */

void FUN_100ff3cf4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar1;
  lVar2 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x50) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff3d80,0,0);
  return;
}



/* Entry: 100ff3d80; end: 100ff3ec7;  */

void FUN_100ff3d80(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x38);
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar1 = *(long *)(unaff_x22 + 0x58);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c5c964();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    func_0x000107c5edd0(uVar5,lVar3,param_2);
    func_0x000107c6142c(param_2);
    (**(code **)(lVar1 + 0x30))(uVar5,1,uVar6);
    if ((int)uVar5 != 1) {
      (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x20))
                (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x48),
                 *(undefined8 *)(unaff_x22 + 0x50));
      func_0x0001000d224c(unaff_x22 + 0x10);
      func_0x0001000a8868(unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x28));
      plVar4 = (long *)0x90;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x68) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_100ff3ec8;
                    /* WARNING: Could not recover jumptable at 0x000100ff3ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)0x100fe7210)(*(undefined8 *)(unaff_x22 + 0x60));
      return;
    }
    func_0x0001000293e4(*(undefined8 *)(unaff_x22 + 0x48));
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000100ff3e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 100ff3ec8; end: 100ff3f17;  */

void FUN_100ff3ec8(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x70) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff3f18,0,0);
  return;
}



/* Entry: 100ff3f18; end: 100ff3f73;  */

void FUN_100ff3f18(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))
            (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x50));
  func_0x0001000834e4(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100ff3f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 100ff3f74; end: 100ff3f9b;  */

ulong FUN_100ff3f74(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002eca98);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002eca9c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126d8840;
    func_0x000107c61168(PTR_PTR_1126d8840);
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
    puVar4 = PTR_PTR_1126d8840;
    func_0x000107c61168(PTR_PTR_1126d8840);
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
  FUN_100ff4164(0,0x112d530b0,&PTR_PTR_1126d8840);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002ecb70);
  (*pcVar2)();
}



/* Entry: 100ff3f9c; end: 100ff4013;  */

void FUN_100ff3f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100ff4014;
  plVar4[7] = lVar3;
  plVar4[8] = lVar1;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(param_1,param_2,param_3,0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[9] = uVar2;
  lVar3 = 0;
  func_0x000107c5ede0();
  plVar4[10] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar4[0xb] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xc] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff3d80,0,0);
  return;
}



/* Entry: 100ff4014; end: 100ff4057;  */

void FUN_100ff4014(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100ff4054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 100ff4058; end: 100ff4163;  */

/* WARNING: Removing unreachable block (ram,0x000100ff4158) */

undefined1  [16] FUN_100ff4058(undefined8 ***param_1,ulong param_2,undefined8 param_3,code *param_4)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined8 **ppuStack_50;
  ulong uStack_48;
  
  ppuStack_50 = param_1;
  uStack_48 = param_2;
  func_0x000107c61434(param_2);
  pppuVar1 = &ppuStack_50;
  puVar3 = PTR___sSSN_11034da80;
  func_0x000107c5fbd4(pppuVar1,PTR___sSSN_11034da80,
                      PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,PTR___sSSSTsWP_11034daa0);
  if (((ulong)puVar3 >> 0x3c & 1) != 0) {
    puVar4 = puVar3;
    FUN_100edbde8();
    func_0x000107c6142c(puVar3);
    puVar3 = puVar4;
  }
  if (((ulong)puVar3 >> 0x3d & 1) == 0) {
    if (((ulong)pppuVar1 >> 0x3c & 1) == 0) {
      puVar4 = puVar3;
      func_0x000107c60358();
      pppuVar2 = pppuVar1;
    }
    else {
      puVar4 = (undefined *)((ulong)pppuVar1 & 0xffffffffffff);
      pppuVar2 = (undefined8 ***)(((ulong)puVar3 & 0xfffffffffffffff) + 0x20);
    }
    (*param_4)(pppuVar2);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar3 >> 0x38 & 0xf);
    uStack_48 = (ulong)puVar3 & 0xffffffffffffff;
    pppuVar2 = &ppuStack_50;
    ppuStack_50 = pppuVar1;
    (*param_4)(pppuVar2,puVar4,param_3);
  }
  func_0x000107c6142c(puVar3);
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = pppuVar2;
  return auVar5;
}



/* Entry: 100ff4164; end: 100ff41a3;  */

void FUN_100ff4164(undefined8 param_1,long *param_2,long *param_3)

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


