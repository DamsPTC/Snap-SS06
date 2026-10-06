/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086390f4; end: 108639133;  */

void FUN_1086390f4(void)

{
  FUN_108639298();
  return;
}



/* Entry: 108639134; end: 108639173;  */

void FUN_108639134(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0e3f00(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108639174; end: 1086391cb;  */

void FUN_108639174(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001086392a4();
  func_0x00010c0e5d80(*(undefined8 *)(unaff_x19 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 1086391cc; end: 10863925b;  */

void FUN_1086391cc(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  func_0x0001086392a4();
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    func_0x000107c316fc();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  }
  _objc_release(uVar1);
  func_0x000107c27f24();
  _objc_autoreleasePoolPop(param_1);
  return;
}



/* Entry: 10863925c; end: 10863926b;  */

void FUN_10863925c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5f008;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10863926c; end: 108639297;  */

long FUN_10863926c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108639298; end: 1086392c7;  */

long FUN_108639298(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  func_0x0001086392a4(lVar1);
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5efc8;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 1086392c8; end: 108639aff;  */

void FUN_1086392c8(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  int *piVar11;
  int *piVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  long lVar25;
  undefined *puVar26;
  undefined8 uVar27;
  int *piVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  long lVar32;
  undefined *puStack_110;
  
  puVar5 = PTR_PTR_1126dabe0;
  _objc_alloc();
  piVar7 = param_1 + 4;
  iVar1 = *param_1;
  piVar6 = param_1 + 1;
  FUN_108624834();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001006a7df8();
  _objc_retainAutoreleasedReturnValue();
  piVar8 = param_1 + 0xc;
  func_0x0001006d1308();
  _objc_retainAutoreleasedReturnValue();
  piVar9 = param_1 + 0x14;
  FUN_10862ffe4();
  _objc_retainAutoreleasedReturnValue();
  if ((char)param_1[0xf7] == '\x01') {
    uVar10 = (ulong)(uint)param_1[0xf6];
    FUN_10863c2c4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar10 = 0;
  }
  if ((char)param_1[0xf9] == '\x01') {
    puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)param_1[0xf8]);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar24 = (undefined *)0x0;
  }
  uVar27 = *(undefined8 *)(param_1 + 0xfa);
  uVar23 = *(undefined8 *)(param_1 + 0xfc);
  uVar22 = *(undefined8 *)(param_1 + 0xfe);
  piVar11 = param_1 + 0x100;
  FUN_1086323c4();
  _objc_retainAutoreleasedReturnValue();
  piVar12 = param_1 + 0x118;
  FUN_1086323c4();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,
                      *(undefined8 *)(param_1 + 0x136));
  _objc_retainAutoreleasedReturnValue();
  piVar28 = param_1 + 0x134;
  puVar14 = puVar26;
  while (piVar28 = *(int **)piVar28, piVar28 != (int *)0x0) {
    piVar16 = piVar28 + 6;
    func_0x00010086dbe4(piVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = (ulong)(uint)piVar28[4];
    FUN_10863c2c4(uVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar26;
    func_0x00010c1d0560(puVar26,param_2,piVar16,uVar13);
    func_0x00010863c474();
    func_0x00010863c4c4();
  }
  func_0x00010863c500();
  func_0x00010863c48c();
  puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (*(long *)(param_1 + 0x13c) - *(long *)(param_1 + 0x13a)) / 0xd0);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = *(undefined **)(param_1 + 0x13c);
  for (puVar26 = *(undefined **)(param_1 + 0x13a); puVar26 != puVar29; puVar26 = puVar26 + 0xd0) {
    puVar15 = puVar26;
    FUN_1086222ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010863c47c();
    func_0x00010863c474();
  }
  func_0x00010863c500();
  func_0x00010863c48c();
  puVar29 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      *(long *)(param_1 + 0x142) - *(long *)(param_1 + 0x140) >> 5);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = *(undefined **)(param_1 + 0x142);
  for (puVar26 = *(undefined **)(param_1 + 0x140); puVar26 != puVar30; puVar26 = puVar26 + 0x20) {
    puVar29 = puVar26;
    FUN_108622754();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010863c47c();
    func_0x00010863c474();
  }
  func_0x00010863c500();
  func_0x00010863c48c();
  iVar2 = param_1[0x146];
  piVar28 = param_1 + 0x148;
  func_0x0001006a7d84();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (*(long *)(param_1 + 0x150) - *(long *)(param_1 + 0x14e)) / 0x28);
  _objc_retainAutoreleasedReturnValue();
  puVar31 = *(undefined **)(param_1 + 0x150);
  for (puVar26 = *(undefined **)(param_1 + 0x14e); puVar26 != puVar31; puVar26 = puVar26 + 0x28) {
    puVar30 = puVar26;
    FUN_10861aef4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010863c47c();
    func_0x00010863c474();
  }
  func_0x00010863c500();
  func_0x00010863c48c();
  piVar16 = param_1 + 0x154;
  FUN_108639b00();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      *(long *)(param_1 + 0x15c) - *(long *)(param_1 + 0x15a) >> 6);
  _objc_retainAutoreleasedReturnValue();
  lVar32 = *(long *)(param_1 + 0x15c);
  for (lVar25 = *(long *)(param_1 + 0x15a); lVar25 != lVar32; lVar25 = lVar25 + 0x40) {
    lVar21 = lVar25;
    FUN_10861b0c4(lVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar26,param_2,lVar21);
    func_0x00010863c4c4();
  }
  func_0x00010bf51e00();
  func_0x00010863c474();
  piVar17 = param_1 + 0x160;
  FUN_10863113c();
  _objc_retainAutoreleasedReturnValue();
  iVar3 = param_1[0x166];
  if ((char)param_1[0x168] == '\x01') {
    puStack_110 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)param_1[0x167]);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_110 = (undefined *)0x0;
  }
  if ((char)param_1[0x16a] == '\x01') {
    puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)param_1[0x169]);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar31 = (undefined *)0x0;
  }
  iVar4 = param_1[0x16b];
  piVar18 = param_1 + 0x16c;
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c285c4();
  _objc_retainAutoreleasedReturnValue();
  piVar19 = param_1 + 0x178;
  func_0x000107c28138();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (*(long *)(param_1 + 0x17e) - *(long *)(param_1 + 0x17c)) / 0x48);
  _objc_retainAutoreleasedReturnValue();
  lVar32 = *(long *)(param_1 + 0x17e);
  for (lVar25 = *(long *)(param_1 + 0x17c); lVar25 != lVar32; lVar25 = lVar25 + 0x48) {
    lVar21 = lVar25;
    FUN_108633f34(lVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar20,param_2,lVar21);
    func_0x00010863c4c4();
  }
  func_0x00010bf51e00();
  func_0x00010863c5d4();
  func_0x000107c28308();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c2a0(puVar5,param_2,(long)iVar1,piVar6,piVar7,piVar8,piVar9,uVar10,puVar24,uVar27,
                      uVar23,uVar22,piVar11,piVar12,puVar14,puVar15,puVar29,(long)iVar2,piVar28,
                      puVar30,piVar16,puVar26,piVar17,(long)iVar3,puStack_110,puVar31,(char)iVar4);
  func_0x00010863c5d4();
  func_0x00010863c48c();
  _objc_release(piVar19);
  func_0x00010863c654();
  _objc_release(piVar18);
  _objc_release(puVar31);
  func_0x00010863c64c();
  _objc_release(piVar17);
  func_0x00010863c474();
  func_0x00010863c644();
  _objc_release(puVar30);
  _objc_release(piVar28);
  _objc_release(puVar29);
  _objc_release(puVar15);
  func_0x00010863c4c4();
  _objc_release(piVar12);
  _objc_release(piVar11);
  _objc_release(puVar24);
  _objc_release(uVar10);
  _objc_release(piVar9);
  _objc_release(piVar8);
  _objc_release(piVar7);
  _objc_release(piVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108639b00; end: 108639bb3;  */

void FUN_108639b00(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[1] - *param_1) / 0xb0);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[1];
  puVar4 = puVar2;
  for (lVar5 = *param_1; lVar5 != lVar1; lVar5 = lVar5 + 0xb0) {
    lVar3 = lVar5;
    FUN_10861b268(lVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010befa120(puVar2,param_2,lVar3);
    func_0x00010863c654();
  }
  func_0x00010863c500();
  func_0x00010863c48c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108639bb4; end: 108639eaf;  */

undefined4 *
FUN_108639bb4(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 *param_15,undefined8 *param_16,
             undefined4 param_17,undefined4 param_18,undefined8 *param_19,undefined8 *param_20,
             undefined8 *param_21,undefined8 *param_22,undefined8 *param_23,undefined4 param_24,
             undefined4 param_25,undefined8 param_26,undefined8 param_27,undefined1 param_28,
             undefined4 param_29,undefined8 *param_30,undefined8 *param_31,undefined8 param_32,
             undefined8 param_33,undefined8 *param_34,undefined2 param_35)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 1) = param_3;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_4 + 3) == '\x01') {
    uVar2 = param_4[1];
    uVar1 = *param_4;
    *(undefined8 *)(param_1 + 8) = param_4[2];
    *(undefined8 *)(param_1 + 6) = uVar2;
    *(undefined8 *)(param_1 + 4) = uVar1;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  func_0x0001006b78fc(param_1 + 0xc,param_5);
  FUN_108639eb0(param_1 + 0x14,param_6);
  *(undefined8 *)(param_1 + 0xf6) = param_7;
  *(undefined8 *)(param_1 + 0xf8) = param_8;
  *(undefined8 *)(param_1 + 0xfa) = param_9;
  *(undefined8 *)(param_1 + 0xfc) = param_10;
  *(undefined8 *)(param_1 + 0xfe) = param_11;
  FUN_108639fcc(param_1 + 0x100,param_12);
  FUN_108639fcc(param_1 + 0x118,param_13);
  func_0x00010863a028(param_1 + 0x130,param_14);
  *(undefined8 *)(param_1 + 0x13e) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 0x13a) = 0;
  uVar1 = *param_15;
  *(undefined8 *)(param_1 + 0x13c) = param_15[1];
  *(undefined8 *)(param_1 + 0x13a) = uVar1;
  *(undefined8 *)(param_1 + 0x13e) = param_15[2];
  param_15[2] = 0;
  param_15[1] = 0;
  *param_15 = 0;
  *(undefined8 *)(param_1 + 0x144) = 0;
  *(undefined8 *)(param_1 + 0x142) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  uVar1 = *param_16;
  *(undefined8 *)(param_1 + 0x142) = param_16[1];
  *(undefined8 *)(param_1 + 0x140) = uVar1;
  *(undefined8 *)(param_1 + 0x144) = param_16[2];
  param_16[2] = 0;
  param_16[1] = 0;
  *param_16 = 0;
  param_1[0x146] = param_17;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x14c) = 0;
  *(undefined8 *)(param_1 + 0x14a) = 0;
  uVar1 = *param_19;
  *(undefined8 *)(param_1 + 0x14a) = param_19[1];
  *(undefined8 *)(param_1 + 0x148) = uVar1;
  *(undefined8 *)(param_1 + 0x14c) = param_19[2];
  param_19[2] = 0;
  param_19[1] = 0;
  *param_19 = 0;
  *(undefined8 *)(param_1 + 0x152) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x14e) = 0;
  uVar1 = *param_20;
  *(undefined8 *)(param_1 + 0x150) = param_20[1];
  *(undefined8 *)(param_1 + 0x14e) = uVar1;
  *(undefined8 *)(param_1 + 0x152) = param_20[2];
  param_20[2] = 0;
  param_20[1] = 0;
  *param_20 = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x156) = 0;
  *(undefined8 *)(param_1 + 0x154) = 0;
  uVar1 = *param_21;
  *(undefined8 *)(param_1 + 0x156) = param_21[1];
  *(undefined8 *)(param_1 + 0x154) = uVar1;
  *(undefined8 *)(param_1 + 0x158) = param_21[2];
  param_21[2] = 0;
  param_21[1] = 0;
  *param_21 = 0;
  *(undefined8 *)(param_1 + 0x15e) = 0;
  *(undefined8 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 0x15a) = 0;
  uVar1 = *param_22;
  *(undefined8 *)(param_1 + 0x15c) = param_22[1];
  *(undefined8 *)(param_1 + 0x15a) = uVar1;
  *(undefined8 *)(param_1 + 0x15e) = param_22[2];
  param_22[2] = 0;
  param_22[1] = 0;
  *param_22 = 0;
  *(undefined8 *)(param_1 + 0x164) = 0;
  *(undefined8 *)(param_1 + 0x162) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  uVar1 = *param_23;
  *(undefined8 *)(param_1 + 0x162) = param_23[1];
  *(undefined8 *)(param_1 + 0x160) = uVar1;
  *(undefined8 *)(param_1 + 0x164) = param_23[2];
  *param_23 = 0;
  param_23[1] = 0;
  param_23[2] = 0;
  param_1[0x166] = param_24;
  *(undefined8 *)(param_1 + 0x167) = param_26;
  *(undefined8 *)(param_1 + 0x169) = param_27;
  *(undefined1 *)(param_1 + 0x16b) = param_28;
  uVar2 = param_30[1];
  uVar1 = *param_30;
  *(undefined8 *)(param_1 + 0x170) = param_30[2];
  *(undefined8 *)(param_1 + 0x16e) = uVar2;
  *(undefined8 *)(param_1 + 0x16c) = uVar1;
  param_30[1] = 0;
  param_30[2] = 0;
  *param_30 = 0;
  *(undefined8 *)(param_1 + 0x172) = 0;
  *(undefined8 *)(param_1 + 0x174) = 0;
  *(undefined8 *)(param_1 + 0x176) = 0;
  uVar1 = *param_31;
  *(undefined8 *)(param_1 + 0x174) = param_31[1];
  *(undefined8 *)(param_1 + 0x172) = uVar1;
  *(undefined8 *)(param_1 + 0x176) = param_31[2];
  *param_31 = 0;
  param_31[1] = 0;
  param_31[2] = 0;
  *(undefined8 *)(param_1 + 0x178) = param_32;
  *(undefined8 *)(param_1 + 0x17a) = param_33;
  *(undefined8 *)(param_1 + 0x17c) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x17e) = 0;
  uVar1 = *param_34;
  *(undefined8 *)(param_1 + 0x17e) = param_34[1];
  *(undefined8 *)(param_1 + 0x17c) = uVar1;
  *(undefined8 *)(param_1 + 0x180) = param_34[2];
  *param_34 = 0;
  param_34[1] = 0;
  param_34[2] = 0;
  *(undefined2 *)(param_1 + 0x182) = param_35;
  return param_1;
}



/* Entry: 108639eb0; end: 108639fcb;  */

void FUN_108639eb0(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010863c65c();
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  func_0x00010528cf6c(param_1 + 4,param_2 + 4);
  *(undefined8 *)(unaff_x19 + 0x200) = 0;
  *(undefined8 *)(unaff_x19 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x19 + 0x1f0) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x1f0);
  *(undefined8 *)(unaff_x19 + 0x1f8) = *(undefined8 *)(unaff_x20 + 0x1f8);
  *(undefined8 *)(unaff_x19 + 0x1f0) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x200) = *(undefined8 *)(unaff_x20 + 0x200);
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined4 *)(unaff_x19 + 0x208) = *(undefined4 *)(unaff_x20 + 0x208);
  *(undefined8 *)(unaff_x19 + 0x220) = 0;
  *(undefined8 *)(unaff_x19 + 0x218) = 0;
  *(undefined8 *)(unaff_x19 + 0x210) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x210);
  *(undefined8 *)(unaff_x19 + 0x218) = *(undefined8 *)(unaff_x20 + 0x218);
  *(undefined8 *)(unaff_x19 + 0x210) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x220) = *(undefined8 *)(unaff_x20 + 0x220);
  *(undefined8 *)(unaff_x20 + 0x220) = 0;
  *(undefined8 *)(unaff_x20 + 0x218) = 0;
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x230);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x228);
  *(undefined1 *)(unaff_x19 + 0x238) = *(undefined1 *)(unaff_x20 + 0x238);
  *(undefined8 *)(unaff_x19 + 0x230) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x228) = uVar1;
  func_0x0001006b78fc(unaff_x19 + 0x240,unaff_x20 + 0x240);
  *(undefined1 *)(unaff_x19 + 0x260) = *(undefined1 *)(unaff_x20 + 0x260);
  func_0x000100699f98(unaff_x19 + 0x268,unaff_x20 + 0x268);
  func_0x000100699ef0(unaff_x19 + 0x2a8,unaff_x20 + 0x2a8);
  func_0x00010069aa64(unaff_x19 + 0x2c8,unaff_x20 + 0x2c8);
  func_0x00010528d108(unaff_x19 + 0x2f8,unaff_x20 + 0x2f8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x348);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x340);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x358);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x350);
  *(undefined1 *)(unaff_x19 + 0x360) = *(undefined1 *)(unaff_x20 + 0x360);
  *(undefined8 *)(unaff_x19 + 0x348) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x340) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x358) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x350) = uVar3;
  func_0x0001006b78fc(unaff_x19 + 0x368,unaff_x20 + 0x368);
  return;
}



/* Entry: 108639fcc; end: 10863a097;  */

void FUN_108639fcc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x00010863c5b0();
  func_0x00010863c618();
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  return;
}



/* Entry: 10863a098; end: 10863a0e7;  */

void FUN_10863a098(void)

{
  func_0x00010863c404();
  func_0x00010863a0bc();
  return;
}



/* Entry: 10863a0e8; end: 10863a0ef;  */

void FUN_10863a0e8(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010863c43c(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -9;
    func_0x00010863a120();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10863a0f0; end: 10863a197;  */

void FUN_10863a0f0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010863c43c();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x48;
    func_0x00010863a120();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10863a198; end: 10863a19f;  */

void FUN_10863a198(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010863c468(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x28) {
    FUN_10861b090(lVar1 + -0x20);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10863a1a0; end: 10863a1df;  */

void FUN_10863a1a0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010863c468();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x28) {
    FUN_10861b090(lVar1 + -0x20);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10863a1e0; end: 10863a22f;  */

void FUN_10863a1e0(void)

{
  func_0x00010863c404();
  func_0x00010863a204();
  return;
}



/* Entry: 10863a230; end: 10863a237;  */

void FUN_10863a230(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010863c43c(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -8;
    func_0x00010863a268();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10863a238; end: 10863a2df;  */

void FUN_10863a238(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010863c43c();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x40;
    func_0x00010863a268();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10863a2e0; end: 10863a2e7;  */

void FUN_10863a2e0(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010863c43c(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x16;
    func_0x00010863a318();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10863a2e8; end: 10863a397;  */

void FUN_10863a2e8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010863c43c();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xb0;
    func_0x00010863a318();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10863a398; end: 10863a39f;  */

void FUN_10863a398(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010863c43c(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -5;
    func_0x000107c27914();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10863a3a0; end: 10863a41f;  */

void FUN_10863a3a0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010863c43c();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x28;
    func_0x000107c27914();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10863a420; end: 10863a427;  */

void FUN_10863a420(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010863c43c(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -4;
    func_0x000107c27914();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10863a428; end: 10863a4a7;  */

void FUN_10863a428(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010863c43c();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x20;
    func_0x000107c27914();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10863a4a8; end: 10863a4af;  */

void FUN_10863a4a8(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010863c43c(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x1a;
    func_0x00010863a4e0();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10863a4b0; end: 10863a58f;  */

void FUN_10863a4b0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010863c43c();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xd0;
    func_0x00010863a4e0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10863a590; end: 10863a5a7;  */

void FUN_10863a590(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10863a5a8; end: 10863a5bf;  */

void FUN_10863a5a8(void)

{
  func_0x00010863a7b8();
  return;
}



/* Entry: 10863a5c0; end: 10863a687;  */

void FUN_10863a5c0(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar7) goto LAB_10863a608;
    }
    return;
  }
LAB_10863a608:
  if (param_2 == 0) {
    FUN_10863a784(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    FUN_10863a79c(plVar2);
    FUN_10863a784(param_1,plVar2);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
      *(undefined8 *)(lVar1 + uVar7 * 8) = 0;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar5 = plVar2[1];
      uVar4 = param_2 - 1;
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar5 / param_2;
      }
      uVar6 = uVar5;
      if (param_2 <= uVar5) {
        uVar6 = uVar5 - uVar7 * param_2;
      }
      if ((param_2 & uVar4) == 0) {
        uVar6 = uVar5 & uVar4;
      }
      *(long **)(lVar1 + uVar6 * 8) = param_1 + 2;
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        if ((param_2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        if (uVar7 != uVar6) {
          if (*(long *)(lVar1 + uVar7 * 8) == 0) {
            *(long **)(lVar1 + uVar7 * 8) = plVar3;
            uVar6 = uVar7;
          }
          else {
            *plVar3 = *plVar2;
            *plVar2 = **(undefined8 **)(lVar1 + uVar7 * 8);
            **(long **)(lVar1 + uVar7 * 8) = (long)plVar2;
            plVar2 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10863a688; end: 10863a783;  */

void FUN_10863a688(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_10863a784(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_10863a79c(plVar3);
    FUN_10863a784(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10863a784; end: 10863a79b;  */

void FUN_10863a784(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10863a79c; end: 10863a7d7;  */

void FUN_10863a79c(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  FUN_10863a7d8();
  return;
}



/* Entry: 10863a7d8; end: 10863a987;  */

undefined1  [16] FUN_10863a7d8(float param_1,float param_2,long *param_3,int *param_4)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar4;
  ulong extraout_x8_01;
  long lVar5;
  long extraout_x8_02;
  ulong uVar6;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x23;
  undefined1 auVar10 [16];
  long *aplStack_58 [3];
  
  iVar1 = *param_4;
  uVar7 = (ulong)iVar1;
  uVar9 = param_3[1];
  if (uVar9 != 0) {
    func_0x00010863c688();
    if ((bool)in_ZR) {
      unaff_x23 = extraout_x8 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar4 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_3 + unaff_x23 * 8);
    uVar4 = extraout_x8;
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_10863a87c;
          uVar6 = plVar8[1];
          if (uVar6 != uVar7) break;
          if ((int)plVar8[2] == iVar1) {
            uVar3 = 0;
            aplStack_58[0] = plVar8;
            goto LAB_10863a960;
          }
        }
        if ((uVar9 & uVar4) == 0) {
          uVar6 = uVar6 & uVar4;
        }
        else if (uVar9 <= uVar6) {
          func_0x00010863c67c();
          uVar4 = extraout_x8_00;
          uVar6 = extraout_x9;
        }
      } while (uVar6 == unaff_x23);
    }
  }
LAB_10863a87c:
  FUN_10863a988(aplStack_58,param_3,uVar7);
  func_0x00010863c668();
  if ((uVar9 == 0) || (param_2 * (float)uVar9 < param_1)) {
    func_0x00010863c600();
    uVar2 = uVar9 == 3;
    func_0x00010863c5e8();
    FUN_10863a5c0(param_3);
    uVar9 = param_3[1];
    func_0x00010863c688();
    if ((bool)uVar2) {
      unaff_x23 = extraout_x8_01 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar4 * uVar9;
      }
    }
  }
  lVar5 = *param_3;
  plVar8 = *(long **)(lVar5 + unaff_x23 * 8);
  if (plVar8 == (long *)0x0) {
    param_3 = param_3 + 2;
    *aplStack_58[0] = *param_3;
    *param_3 = (long)aplStack_58[0];
    *(long **)(lVar5 + unaff_x23 * 8) = param_3;
    if (*aplStack_58[0] != 0) {
      uVar7 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar7 = uVar7 & uVar9 - 1;
      }
      else if (uVar9 <= uVar7) {
        func_0x00010863c67c();
        lVar5 = extraout_x8_02;
        uVar7 = extraout_x9_00;
      }
      *(long **)(lVar5 + uVar7 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar8;
    *plVar8 = (long)aplStack_58[0];
  }
  func_0x00010863c4dc();
  uVar3 = 1;
LAB_10863a960:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = aplStack_58[0];
  return auVar10;
}



/* Entry: 10863a988; end: 10863a9eb;  */

void FUN_10863a988(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  *(undefined4 *)(puVar1 + 2) = *param_4;
  puVar1[3] = *param_5;
  return;
}



/* Entry: 10863a9ec; end: 10863aa0f;  */

undefined8 FUN_10863a9ec(undefined8 param_1)

{
  FUN_10863aa10(param_1,0);
  return param_1;
}



/* Entry: 10863aa10; end: 10863aa27;  */

void FUN_10863aa10(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10863aa28; end: 10863aa7f;  */

void FUN_10863aa28(undefined8 *param_1,long param_2)

{
  func_0x00010863c65c();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10863a5c0();
  FUN_10863aa80();
  return;
}



/* Entry: 10863aa80; end: 10863aabf;  */

void FUN_10863aa80(undefined8 param_1,long *param_2,long param_3)

{
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    FUN_10863aac0(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 10863aac0; end: 10863aaf3;  */

void FUN_10863aac0(void)

{
  func_0x00010863aad8();
  return;
}



/* Entry: 10863aaf4; end: 10863acbb;  */

undefined1  [16]
FUN_10863aaf4(undefined8 param_1,float param_2,long *param_3,int *param_4,long *param_5)

{
  long *plVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar5;
  ulong extraout_x8_01;
  long lVar6;
  long extraout_x8_02;
  ulong uVar7;
  ulong extraout_x9;
  long *plVar8;
  ulong extraout_x9_00;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  
  iVar2 = *param_4;
  uVar11 = (ulong)iVar2;
  uVar10 = param_3[1];
  if (uVar10 != 0) {
    func_0x00010863c688();
    if ((bool)in_ZR) {
      unaff_x24 = extraout_x8 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar5 * uVar10;
      }
    }
    plVar9 = *(long **)(*param_3 + unaff_x24 * 8);
    uVar5 = extraout_x8;
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_10863aba0;
          uVar7 = plVar9[1];
          if (uVar7 != uVar11) break;
          if ((int)plVar9[2] == iVar2) {
            uVar4 = 0;
            goto LAB_10863ac90;
          }
        }
        if ((uVar10 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar10 <= uVar7) {
          func_0x00010863c67c();
          uVar5 = extraout_x8_00;
          uVar7 = extraout_x9;
        }
      } while (uVar7 == unaff_x24);
    }
  }
LAB_10863aba0:
  plVar1 = param_3 + 2;
  plVar9 = (long *)0x20;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar11;
  lVar6 = *param_5;
  plVar9[3] = param_5[1];
  plVar9[2] = lVar6;
  func_0x00010863c668();
  if ((uVar10 == 0) || (param_2 * (float)uVar10 < (float)lVar6)) {
    func_0x00010863c600();
    uVar3 = uVar10 == 3;
    func_0x00010863c5e8();
    FUN_10863a5c0(param_3);
    uVar10 = param_3[1];
    func_0x00010863c688();
    if ((bool)uVar3) {
      unaff_x24 = extraout_x8_01 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar5 * uVar10;
      }
    }
  }
  lVar6 = *param_3;
  plVar8 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar9 = *plVar1;
    *plVar1 = (long)plVar9;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar1;
    if (*plVar9 != 0) {
      uVar11 = *(ulong *)(*plVar9 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar11 = uVar11 & uVar10 - 1;
      }
      else if (uVar10 <= uVar11) {
        func_0x00010863c67c();
        lVar6 = extraout_x8_02;
        uVar11 = extraout_x9_00;
      }
      *(long **)(lVar6 + uVar11 * 8) = plVar9;
    }
  }
  else {
    *plVar9 = *plVar8;
    *plVar8 = (long)plVar9;
  }
  func_0x00010863c4dc();
  uVar4 = 1;
LAB_10863ac90:
  auVar12._8_8_ = uVar4;
  auVar12._0_8_ = plVar9;
  return auVar12;
}



/* Entry: 10863acbc; end: 10863ad33;  */

void FUN_10863acbc(undefined8 param_1,ulong param_2)

{
  long extraout_x9;
  undefined1 auStack_48 [40];
  
  func_0x00010863c3c0();
  if ((ulong)(extraout_x9 / 0xd0) < param_2) {
    if (0x13b13b13b13b13b < param_2) {
      FUN_10863ad34();
      func_0x00010863c4f4();
      func_0x00010863af50();
      func_0x00010863c44c();
      func_0x00010863c3a8();
      func_0x00010863c370();
      FUN_10863ae00();
      func_0x00010863c2f4();
      return;
    }
    func_0x00010863c4b4();
    FUN_10863ad7c(auStack_48);
    func_0x00010863c52c();
    FUN_10863ad40();
    func_0x00010863af50(auStack_48);
  }
  return;
}



/* Entry: 10863ad34; end: 10863ad3f;  */

void FUN_10863ad34(void)

{
  func_0x00010863c3a8();
  func_0x00010863c370();
  FUN_10863ae00();
  func_0x00010863c2f4();
  return;
}



/* Entry: 10863ad40; end: 10863ad7b;  */

void FUN_10863ad40(void)

{
  func_0x00010863c370();
  FUN_10863ae00();
  func_0x00010863c2f4();
  return;
}



/* Entry: 10863ad7c; end: 10863adcf;  */

void FUN_10863ad7c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010863c3e4();
  if (param_2 != 0) {
    func_0x00010863adb0(param_4);
  }
  func_0x00010863c390(0xd0);
  return;
}



/* Entry: 10863add0; end: 10863adff;  */

void FUN_10863add0(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  if (param_2 < 0x13b13b13b13b13c) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xd0);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010863c338();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0xd0) {
    func_0x00010863c514();
    func_0x00010863ae90();
    lStack_48 = lStack_48 + 0xd0;
  }
  func_0x00010863c520();
  func_0x00010863c3d4();
  func_0x00010863ae64();
  FUN_10863aee8(auStack_70);
  return;
}



/* Entry: 10863ae00; end: 10863ae63;  */

void FUN_10863ae00(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x00010863c338();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0xd0) {
    func_0x00010863c514();
    func_0x00010863ae90();
    lStack_38 = lStack_38 + 0xd0;
  }
  func_0x00010863c520();
  func_0x00010863c3d4();
  func_0x00010863ae64();
  FUN_10863aee8(auStack_60);
  return;
}



/* Entry: 10863ae64; end: 10863aee7;  */

void FUN_10863ae64(long param_1)

{
  long unaff_x19;
  
  func_0x00010863c55c();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0xd0) {
    func_0x00010863a4e0();
  }
  return;
}



/* Entry: 10863aee8; end: 10863af13;  */

void FUN_10863aee8(void)

{
  uint extraout_w8;
  
  func_0x00010863c544();
  if ((extraout_w8 & 1) == 0) {
    FUN_10863af14();
  }
  return;
}



/* Entry: 10863af14; end: 10863af23;  */

void FUN_10863af14(long param_1)

{
  long unaff_x19;
  
  func_0x00010863c494();
  func_0x00010863c5dc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xd0;
    func_0x00010863a4e0();
  }
  return;
}



/* Entry: 10863af24; end: 10863af7b;  */

void FUN_10863af24(long param_1)

{
  long unaff_x19;
  
  func_0x00010863c5dc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xd0;
    func_0x00010863a4e0();
  }
  return;
}



/* Entry: 10863af7c; end: 10863af83;  */

void FUN_10863af7c(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x00010863c468(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x00010863c550(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0xd0;
    func_0x00010863a4e0();
  }
  return;
}



/* Entry: 10863af84; end: 10863b017;  */

void FUN_10863af84(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x00010863c468();
  while (func_0x00010863c550(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0xd0;
    func_0x00010863a4e0();
  }
  return;
}



/* Entry: 10863b018; end: 10863b093;  */

undefined8 FUN_10863b018(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010863c65c();
  FUN_10863b094();
  func_0x00010863c578();
  FUN_10863ad7c();
  func_0x00010863ae90(lStack_48);
  lStack_48 = lStack_48 + 0xd0;
  func_0x00010863c52c();
  FUN_10863ad40();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010863af50(auStack_58);
  return uVar1;
}



/* Entry: 10863b094; end: 10863b0eb;  */

long * FUN_10863b094(long *param_1,long *param_2)

{
  ulong uVar1;
  long extraout_x9;
  long *plVar2;
  long alStack_58 [5];
  
  if (param_2 < (long *)0x13b13b13b13b13c) {
    uVar1 = (param_1[2] - *param_1) / 0xd0;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x9d89d89d89d89c < uVar1) {
      plVar2 = (long *)0x13b13b13b13b13b;
    }
    return plVar2;
  }
  FUN_10863ad34();
  func_0x00010863c3c0();
  if ((long *)(extraout_x9 >> 5) < param_2) {
    if ((ulong)param_2 >> 0x3b != 0) {
      FUN_10863b148();
      func_0x00010863c4f4();
      func_0x00010863b2f8();
      func_0x00010863c44c();
      func_0x00010863c3a8();
      func_0x00010863c370();
      FUN_10863b200();
      func_0x00010863c2f4();
      return param_1;
    }
    func_0x00010863c4b4();
    FUN_10863b184(alStack_58);
    func_0x00010863c52c();
    FUN_10863b154();
    param_1 = alStack_58;
    func_0x00010863b2f8(param_1);
  }
  return param_1;
}



/* Entry: 10863b0ec; end: 10863b147;  */

void FUN_10863b0ec(undefined8 param_1,ulong param_2)

{
  long extraout_x9;
  undefined1 auStack_48 [40];
  
  func_0x00010863c3c0();
  if ((ulong)(extraout_x9 >> 5) < param_2) {
    if (param_2 >> 0x3b != 0) {
      FUN_10863b148();
      func_0x00010863c4f4();
      func_0x00010863b2f8();
      func_0x00010863c44c();
      func_0x00010863c3a8();
      func_0x00010863c370();
      FUN_10863b200();
      func_0x00010863c2f4();
      return;
    }
    func_0x00010863c4b4();
    FUN_10863b184(auStack_48);
    func_0x00010863c52c();
    FUN_10863b154();
    func_0x00010863b2f8(auStack_48);
  }
  return;
}



/* Entry: 10863b148; end: 10863b153;  */

void FUN_10863b148(void)

{
  func_0x00010863c3a8();
  func_0x00010863c370();
  FUN_10863b200();
  func_0x00010863c2f4();
  return;
}



/* Entry: 10863b154; end: 10863b183;  */

void FUN_10863b154(void)

{
  func_0x00010863c370();
  FUN_10863b200();
  func_0x00010863c2f4();
  return;
}



/* Entry: 10863b184; end: 10863b1e3;  */

void FUN_10863b184(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x00010863c3e4();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010863b1c4();
  }
  lVar1 = param_4 + unaff_x20 * 0x20;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x20;
  return;
}



/* Entry: 10863b1e4; end: 10863b1ff;  */

void FUN_10863b1e4(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010863c338();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x20) {
    func_0x00010863c514();
    FUN_108636ab8();
    lStack_48 = lStack_48 + 0x20;
  }
  func_0x00010863c520();
  func_0x00010863c3d4();
  FUN_10863b264();
  FUN_10863b290(auStack_70);
  return;
}



/* Entry: 10863b200; end: 10863b263;  */

void FUN_10863b200(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x00010863c338();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x20) {
    func_0x00010863c514();
    FUN_108636ab8();
    lStack_38 = lStack_38 + 0x20;
  }
  func_0x00010863c520();
  func_0x00010863c3d4();
  FUN_10863b264();
  FUN_10863b290(auStack_60);
  return;
}



/* Entry: 10863b264; end: 10863b28f;  */

void FUN_10863b264(long param_1)

{
  long unaff_x19;
  
  func_0x00010863c55c();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0x20) {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10863b290; end: 10863b2bb;  */

void FUN_10863b290(void)

{
  uint extraout_w8;
  
  func_0x00010863c544();
  if ((extraout_w8 & 1) == 0) {
    FUN_10863b2bc();
  }
  return;
}



/* Entry: 10863b2bc; end: 10863b2cb;  */

void FUN_10863b2bc(long param_1)

{
  long unaff_x19;
  
  func_0x00010863c494();
  func_0x00010863c5dc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x20;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10863b2cc; end: 10863b323;  */

void FUN_10863b2cc(long param_1)

{
  long unaff_x19;
  
  func_0x00010863c5dc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x20;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10863b324; end: 10863b32b;  */

void FUN_10863b324(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x00010863c468(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x00010863c550(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x20;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10863b32c; end: 10863b35b;  */

void FUN_10863b32c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x00010863c468();
  while (func_0x00010863c550(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x20;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10863b35c; end: 10863b3a7;  */

long * FUN_10863b35c(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 4);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x7ffffffffffffff;
    }
    return plVar1;
  }
  FUN_10863b148();
  func_0x00010863c3a8();
  func_0x00010863c370();
  func_0x00010863c594();
  FUN_10863b44c();
  func_0x00010863c2f4();
  return param_1;
}



/* Entry: 10863b3a8; end: 10863b3cf;  */

void FUN_10863b3a8(void)

{
  func_0x00010863c370();
  func_0x00010863c594();
  FUN_10863b44c();
  func_0x00010863c2f4();
  return;
}



/* Entry: 10863b3d0; end: 10863b423;  */

void FUN_10863b3d0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010863c3e4();
  if (param_2 != 0) {
    func_0x00010863b404(param_4);
  }
  func_0x00010863c390(0x28);
  return;
}



/* Entry: 10863b424; end: 10863b44b;  */

void FUN_10863b424(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [48];
  
  if (param_2 < 0x666666666666667) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010863c338();
  while (unaff_x22 != unaff_x19) {
    func_0x00010863c514();
    FUN_10863b4d0();
    func_0x00010863c694();
  }
  func_0x00010863c520();
  func_0x00010863c3d4();
  FUN_10863b4a4();
  FUN_10863b4e8(auStack_70);
  return;
}



/* Entry: 10863b44c; end: 10863b4a3;  */

void FUN_10863b44c(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [48];
  
  func_0x00010863c338();
  while (unaff_x22 != unaff_x19) {
    func_0x00010863c514();
    FUN_10863b4d0();
    func_0x00010863c694();
  }
  func_0x00010863c520();
  func_0x00010863c3d4();
  FUN_10863b4a4();
  FUN_10863b4e8(auStack_60);
  return;
}



/* Entry: 10863b4a4; end: 10863b4cf;  */

void FUN_10863b4a4(long param_1)

{
  long unaff_x19;
  
  func_0x00010863c55c();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0x28) {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10863b4d0; end: 10863b4e7;  */

void FUN_10863b4d0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x00010863c5b0();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 10863b4e8; end: 10863b513;  */

void FUN_10863b4e8(void)

{
  uint extraout_w8;
  
  func_0x00010863c544();
  if ((extraout_w8 & 1) == 0) {
    FUN_10863b514();
  }
  return;
}



/* Entry: 10863b514; end: 10863b523;  */

void FUN_10863b514(long param_1)

{
  long unaff_x19;
  
  func_0x00010863c494();
  func_0x00010863c5dc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x28;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10863b524; end: 10863b57b;  */

void FUN_10863b524(long param_1)

{
  long unaff_x19;
  
  func_0x00010863c5dc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x28;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10863b57c; end: 10863b583;  */

void FUN_10863b57c(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x00010863c468(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x00010863c550(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x28;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10863b584; end: 10863b5b3;  */

void FUN_10863b584(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x00010863c468();
  while (func_0x00010863c550(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x28;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10863b5b4; end: 10863b5fb;  */

long * FUN_10863b5b4(long *param_1,long *param_2)

{
  ulong uVar1;
  long extraout_x9;
  long *plVar2;
  long alStack_58 [5];
  
  if (param_2 < (long *)0x666666666666667) {
    uVar1 = (param_1[2] - *param_1) / 0x28;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x333333333333332 < uVar1) {
      plVar2 = (long *)0x666666666666666;
    }
    return plVar2;
  }
  func_0x00010863b39c();
  func_0x00010863c3c0();
  if ((long *)(extraout_x9 / 0xb0) < param_2) {
    if ((long *)0x1745d1745d1745d < param_2) {
      FUN_10863b674();
      func_0x00010863c4f4();
      func_0x00010863b88c();
      func_0x00010863c44c();
      func_0x00010863c3a8();
      func_0x00010863c370();
      FUN_10863b740();
      func_0x00010863c2f4();
      return param_1;
    }
    func_0x00010863c4b4();
    FUN_10863b6bc(alStack_58);
    func_0x00010863c52c();
    FUN_10863b680();
    param_1 = alStack_58;
    func_0x00010863b88c(param_1);
  }
  return param_1;
}



/* Entry: 10863b5fc; end: 10863b673;  */

void FUN_10863b5fc(undefined8 param_1,ulong param_2)

{
  long extraout_x9;
  undefined1 auStack_48 [40];
  
  func_0x00010863c3c0();
  if ((ulong)(extraout_x9 / 0xb0) < param_2) {
    if (0x1745d1745d1745d < param_2) {
      FUN_10863b674();
      func_0x00010863c4f4();
      func_0x00010863b88c();
      func_0x00010863c44c();
      func_0x00010863c3a8();
      func_0x00010863c370();
      FUN_10863b740();
      func_0x00010863c2f4();
      return;
    }
    func_0x00010863c4b4();
    FUN_10863b6bc(auStack_48);
    func_0x00010863c52c();
    FUN_10863b680();
    func_0x00010863b88c(auStack_48);
  }
  return;
}



/* Entry: 10863b674; end: 10863b67f;  */

void FUN_10863b674(void)

{
  func_0x00010863c3a8();
  func_0x00010863c370();
  FUN_10863b740();
  func_0x00010863c2f4();
  return;
}



/* Entry: 10863b680; end: 10863b6bb;  */

void FUN_10863b680(void)

{
  func_0x00010863c370();
  FUN_10863b740();
  func_0x00010863c2f4();
  return;
}



/* Entry: 10863b6bc; end: 10863b70f;  */

void FUN_10863b6bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010863c3e4();
  if (param_2 != 0) {
    func_0x00010863b6f0(param_4);
  }
  func_0x00010863c390(0xb0);
  return;
}



/* Entry: 10863b710; end: 10863b73f;  */

void FUN_10863b710(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  if (param_2 < 0x1745d1745d1745e) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xb0);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010863c338();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0xb0) {
    func_0x00010863c514();
    func_0x00010863b7d0();
    lStack_48 = lStack_48 + 0xb0;
  }
  func_0x00010863c520();
  func_0x00010863c3d4();
  func_0x00010863b7a4();
  FUN_10863b824(auStack_70);
  return;
}



/* Entry: 10863b740; end: 10863b7a3;  */

void FUN_10863b740(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x00010863c338();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0xb0) {
    func_0x00010863c514();
    func_0x00010863b7d0();
    lStack_38 = lStack_38 + 0xb0;
  }
  func_0x00010863c520();
  func_0x00010863c3d4();
  func_0x00010863b7a4();
  FUN_10863b824(auStack_60);
  return;
}



/* Entry: 10863b7a4; end: 10863b823;  */

void FUN_10863b7a4(long param_1)

{
  long unaff_x19;
  
  func_0x00010863c55c();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0xb0) {
    func_0x00010863a318();
  }
  return;
}



/* Entry: 10863b824; end: 10863b84f;  */

void FUN_10863b824(void)

{
  uint extraout_w8;
  
  func_0x00010863c544();
  if ((extraout_w8 & 1) == 0) {
    FUN_10863b850();
  }
  return;
}



/* Entry: 10863b850; end: 10863b85f;  */

void FUN_10863b850(long param_1)

{
  long unaff_x19;
  
  func_0x00010863c494();
  func_0x00010863c5dc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xb0;
    func_0x00010863a318();
  }
  return;
}



/* Entry: 10863b860; end: 10863b8b7;  */

void FUN_10863b860(long param_1)

{
  long unaff_x19;
  
  func_0x00010863c5dc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xb0;
    func_0x00010863a318();
  }
  return;
}



/* Entry: 10863b8b8; end: 10863b8bf;  */

void FUN_10863b8b8(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x00010863c468(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x00010863c550(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0xb0;
    func_0x00010863a318();
  }
  return;
}



/* Entry: 10863b8c0; end: 10863b8ef;  */

void FUN_10863b8c0(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x00010863c468();
  while (func_0x00010863c550(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0xb0;
    func_0x00010863a318();
  }
  return;
}



/* Entry: 10863b8f0; end: 10863b947;  */

long * FUN_10863b8f0(long *param_1,long *param_2)

{
  ulong uVar1;
  long extraout_x9;
  long *plVar2;
  long alStack_58 [5];
  
  if (param_2 < (long *)0x1745d1745d1745e) {
    uVar1 = (param_1[2] - *param_1) / 0xb0;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0xba2e8ba2e8ba2d < uVar1) {
      plVar2 = (long *)0x1745d1745d1745d;
    }
    return plVar2;
  }
  FUN_10863b674();
  func_0x00010863c3c0();
  if ((long *)(extraout_x9 >> 6) < param_2) {
    if ((ulong)param_2 >> 0x3a != 0) {
      FUN_10863b9a4();
      func_0x00010863c4f4();
      func_0x00010863bb8c();
      func_0x00010863c44c();
      func_0x00010863c3a8();
      func_0x00010863c370();
      FUN_10863ba5c();
      func_0x00010863c2f4();
      return param_1;
    }
    func_0x00010863c4b4();
    FUN_10863b9e0(alStack_58);
    func_0x00010863c52c();
    FUN_10863b9b0();
    param_1 = alStack_58;
    func_0x00010863bb8c(param_1);
  }
  return param_1;
}



/* Entry: 10863b948; end: 10863b9a3;  */

void FUN_10863b948(undefined8 param_1,ulong param_2)

{
  long extraout_x9;
  undefined1 auStack_48 [40];
  
  func_0x00010863c3c0();
  if ((ulong)(extraout_x9 >> 6) < param_2) {
    if (param_2 >> 0x3a != 0) {
      FUN_10863b9a4();
      func_0x00010863c4f4();
      func_0x00010863bb8c();
      func_0x00010863c44c();
      func_0x00010863c3a8();
      func_0x00010863c370();
      FUN_10863ba5c();
      func_0x00010863c2f4();
      return;
    }
    func_0x00010863c4b4();
    FUN_10863b9e0(auStack_48);
    func_0x00010863c52c();
    FUN_10863b9b0();
    func_0x00010863bb8c(auStack_48);
  }
  return;
}



/* Entry: 10863b9a4; end: 10863b9af;  */

void FUN_10863b9a4(void)

{
  func_0x00010863c3a8();
  func_0x00010863c370();
  FUN_10863ba5c();
  func_0x00010863c2f4();
  return;
}



/* Entry: 10863b9b0; end: 10863b9df;  */

void FUN_10863b9b0(void)

{
  func_0x00010863c370();
  FUN_10863ba5c();
  func_0x00010863c2f4();
  return;
}



/* Entry: 10863b9e0; end: 10863ba3f;  */

void FUN_10863b9e0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x00010863c3e4();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010863ba20();
  }
  lVar1 = param_4 + unaff_x20 * 0x40;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x40;
  return;
}



/* Entry: 10863ba40; end: 10863ba5b;  */

void FUN_10863ba40(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  if (param_2 >> 0x3a == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 6);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010863c338();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x40) {
    func_0x00010863c514();
    func_0x00010863baec();
    lStack_48 = lStack_48 + 0x40;
  }
  func_0x00010863c520();
  func_0x00010863c3d4();
  func_0x00010863bac0();
  FUN_10863bb24(auStack_70);
  return;
}



/* Entry: 10863ba5c; end: 10863babf;  */

void FUN_10863ba5c(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x00010863c338();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x40) {
    func_0x00010863c514();
    func_0x00010863baec();
    lStack_38 = lStack_38 + 0x40;
  }
  func_0x00010863c520();
  func_0x00010863c3d4();
  func_0x00010863bac0();
  FUN_10863bb24(auStack_60);
  return;
}


