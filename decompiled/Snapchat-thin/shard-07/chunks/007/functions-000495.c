/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105956f20; end: 105956f9b;  */

void FUN_105956f20(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    func_0x000105956a60();
  }
  return;
}



/* Entry: 105956f9c; end: 105956fcb;  */

long FUN_105956f9c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_105956fcc(param_1);
  }
  return param_1;
}



/* Entry: 105956fcc; end: 105956feb;  */

void FUN_105956fcc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x58;
    func_0x000105956a60();
  }
  return;
}



/* Entry: 105956fec; end: 105957047;  */

void FUN_105956fec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x58;
    func_0x000105956a60();
  }
  return;
}



/* Entry: 105957048; end: 10595704f;  */

void FUN_105957048(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000105957158(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x58;
    func_0x000105956a60();
  }
  return;
}



/* Entry: 105957050; end: 105957083;  */

void FUN_105957050(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000105957158();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x58;
    func_0x000105956a60();
  }
  return;
}



/* Entry: 105957084; end: 1059570db;  */

ulong FUN_105957084(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x19;
  
  if (0x2e8ba2e8ba2e8ba < param_2) {
    func_0x000105956dc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return unaff_x19;
  }
  uVar1 = (param_1[2] - *param_1) / 0x58;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0x1745d1745d1745c < uVar1) {
    uVar2 = 0x2e8ba2e8ba2e8ba;
  }
  return uVar2;
}



/* Entry: 1059570dc; end: 105957307;  */

void FUN_1059570dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105957308; end: 1059573b7;  */

void FUN_105957308(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126c0770;
  _objc_alloc(PTR_PTR_1126c0770);
  iVar1 = *param_1;
  uVar4 = *(undefined8 *)(param_1 + 2);
  piVar3 = param_1 + 4;
  func_0x0001001011a4(piVar3);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 10;
  func_0x0001001011a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c055ce0(puVar2,param_2,(long)iVar1,uVar4,piVar3,param_1);
  FUN_1059573b8();
  func_0x0001059573c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059573b8; end: 1059573c7;  */

void FUN_1059573b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1059573c8; end: 105957523;  */

void FUN_1059573c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(auStack_58);
  uVar2 = param_2;
  func_0x00010c11a480(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010029a6ec(auStack_70);
  uVar3 = param_2;
  func_0x00010c22bf40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010029a6ec(auStack_88);
  uVar4 = param_2;
  func_0x00010c298be0(param_2);
  FUN_105957524(param_1,auStack_58,auStack_70,auStack_88,uVar4);
  func_0x000100100fec(auStack_88);
  _objc_release(uVar3);
  func_0x000100100fec(auStack_70);
  _objc_release(uVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105957524; end: 105957583;  */

void FUN_105957524(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  param_1[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar1;
  param_1[8] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  *(undefined4 *)(param_1 + 9) = param_5;
  return;
}



/* Entry: 105957584; end: 1059576c7;  */

void FUN_105957584(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _objc_retain();
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(auStack_58);
  uVar1 = param_2;
  func_0x00010c11a4a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(auStack_70);
  func_0x00010c22bf40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010029a65c(auStack_90);
  func_0x00010c298be0(param_2);
  FUN_105957794(param_1,auStack_58,auStack_70,auStack_90,param_2);
  func_0x0001002a2294(auStack_90);
  func_0x000105957800();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  _objc_release(uVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x0001059577f8();
  func_0x00010029acec();
  return;
}



/* Entry: 1059576c8; end: 105957793;  */

void FUN_1059576c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c0778;
  _objc_alloc(PTR_PTR_1126c0778);
  lVar2 = param_1;
  func_0x0001001011a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x18;
  func_0x0001001011a4(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x30;
  func_0x0001006d1308(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b940(puVar1,param_2,lVar2,lVar3,lVar4,*(undefined4 *)(param_1 + 0x50));
  func_0x000105957800();
  func_0x0001059577f8();
  func_0x00010029acec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105957794; end: 1059577f7;  */

undefined8 *
FUN_105957794(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[5] = param_3[2];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x0001006b78fc(param_1 + 6,param_4);
  *(undefined4 *)(param_1 + 10) = param_5;
  return param_1;
}



/* Entry: 1059577f8; end: 105957807;  */

void FUN_1059577f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105957808; end: 1059578af;  */

void FUN_105957808(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR_PTR_1126c0780;
  _objc_alloc(PTR_PTR_1126c0780);
  lVar4 = param_1;
  func_0x000100101220(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined1 *)(param_1 + 0x19);
  param_1 = param_1 + 0x20;
  FUN_1059578b0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020d60(puVar3,param_2,lVar4,uVar1,uVar2,param_1);
  func_0x000105957cf8();
  func_0x000105957cd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1059578b0; end: 10595796b;  */

void FUN_1059578b0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,param_1[1] - *param_1 >> 6)
  ;
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[1];
  for (lVar4 = *param_1; lVar4 != lVar1; lVar4 = lVar4 + 0x40) {
    lVar3 = lVar4;
    FUN_105957308(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,lVar3);
    _objc_release(lVar3);
  }
  func_0x00010bf51e00(puVar2);
  FUN_105957cd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10595796c; end: 1059579b7;  */

void FUN_10595796c(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = param_3;
  *(undefined1 *)((long)param_1 + 0x19) = param_4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  uVar1 = *param_5;
  param_1[5] = param_5[1];
  param_1[4] = uVar1;
  param_1[6] = param_5[2];
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  return;
}



/* Entry: 1059579b8; end: 1059579cb;  */

void FUN_1059579b8(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = param_2[1] + (*plVar1 - plVar1[1]);
  FUN_105957ad4(plVar1 + 2,*plVar1,plVar1[1],lVar2);
  param_2[1] = lVar2;
  lVar2 = *plVar1;
  plVar1[1] = lVar2;
  *plVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = plVar1[2];
  plVar1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1059579cc; end: 105957a4b;  */

void FUN_1059579cc(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_105957ad4(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 105957a4c; end: 105957ab7;  */

long * FUN_105957a4c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000105957a94();
  }
  lVar1 = param_4 + param_3 * 0x40;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x40;
  return param_1;
}



/* Entry: 105957ab8; end: 105957ad3;  */

void FUN_105957ab8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if ((ulong)param_2 >> 0x3a == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 << 6);
    return;
  }
  func_0x000104bd35f4();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    uVar1 = *param_2;
    puStack_38[1] = param_2[1];
    *puStack_38 = uVar1;
    uVar2 = param_2[3];
    uVar1 = param_2[2];
    puStack_38[4] = param_2[4];
    puStack_38[3] = uVar2;
    puStack_38[2] = uVar1;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[2] = 0;
    uVar2 = param_2[6];
    uVar1 = param_2[5];
    puStack_38[7] = param_2[7];
    puStack_38[6] = uVar2;
    puStack_38[5] = uVar1;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[5] = 0;
    puStack_38 = puStack_38 + 8;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  puStack_40 = param_4;
  FUN_105957b7c();
  FUN_105957bac(&uStack_60);
  return;
}



/* Entry: 105957ad4; end: 105957b7b;  */

void FUN_105957ad4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    uVar1 = *param_2;
    puStack_28[1] = param_2[1];
    *puStack_28 = uVar1;
    uVar2 = param_2[3];
    uVar1 = param_2[2];
    puStack_28[4] = param_2[4];
    puStack_28[3] = uVar2;
    puStack_28[2] = uVar1;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[2] = 0;
    uVar2 = param_2[6];
    uVar1 = param_2[5];
    puStack_28[7] = param_2[7];
    puStack_28[6] = uVar2;
    puStack_28[5] = uVar1;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[5] = 0;
    puStack_28 = puStack_28 + 8;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  FUN_105957b7c();
  FUN_105957bac(&uStack_50);
  return;
}



/* Entry: 105957b7c; end: 105957bab;  */

void FUN_105957b7c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x40) {
    func_0x00010595688c();
  }
  return;
}



/* Entry: 105957bac; end: 105957bdb;  */

long FUN_105957bac(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_105957bdc(param_1);
  }
  return param_1;
}



/* Entry: 105957bdc; end: 105957bfb;  */

void FUN_105957bdc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x40;
    func_0x00010595688c();
  }
  return;
}



/* Entry: 105957bfc; end: 105957c57;  */

void FUN_105957bfc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x40;
    func_0x00010595688c();
  }
  return;
}



/* Entry: 105957c58; end: 105957c5f;  */

void FUN_105957c58(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x40;
    func_0x00010595688c();
  }
  return;
}



/* Entry: 105957c60; end: 105957c97;  */

void FUN_105957c60(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x40;
    func_0x00010595688c();
  }
  return;
}



/* Entry: 105957c98; end: 105957cd7;  */

ulong FUN_105957c98(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong unaff_x19;
  
  if (param_2 >> 0x3a == 0) {
    uVar1 = param_1[2] - *param_1 >> 5;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7fffffffffffffbf < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0x3ffffffffffffff;
    }
    return uVar1;
  }
  FUN_1059579b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return unaff_x19;
}



/* Entry: 105957cd8; end: 105957d0f;  */

void FUN_105957cd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105957d10; end: 105957e3b;  */

void FUN_105957d10(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126c0788;
  _objc_alloc(PTR_PTR_1126c0788);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[1] - *param_1) / 0x98);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[1];
  for (lVar5 = *param_1; lVar5 != lVar1; lVar5 = lVar5 + 0x98) {
    lVar4 = lVar5;
    FUN_1059584e0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,lVar4);
    _objc_release(lVar4);
  }
  func_0x00010bf51e00(puVar3);
  FUN_1059582a4();
  lVar5 = param_1[3];
  param_1 = param_1 + 4;
  FUN_1059578b0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c063560(puVar2,param_2,puVar3,(char)lVar5,param_1);
  FUN_1059582a4();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105957e3c; end: 105957e83;  */

void FUN_105957e3c(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = param_3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  uVar1 = *param_4;
  param_1[5] = param_4[1];
  param_1[4] = uVar1;
  param_1[6] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  return;
}



/* Entry: 105957e84; end: 105957e97;  */

void FUN_105957e84(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f312db3;
  func_0x000104bd47e8();
  lVar2 = param_2[1] + ((plVar1[1] - *plVar1) / -0x98) * 0x98;
  FUN_105957fc4(plVar1 + 2,*plVar1,plVar1[1],lVar2);
  param_2[1] = lVar2;
  lVar2 = *plVar1;
  plVar1[1] = lVar2;
  *plVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = plVar1[2];
  plVar1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 105957e98; end: 105957f23;  */

void FUN_105957e98(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x98) * 0x98;
  FUN_105957fc4(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 105957f24; end: 105957f93;  */

long * FUN_105957f24(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000105957f70();
  }
  lVar1 = param_4 + param_3 * 0x98;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x98;
  return param_1;
}



/* Entry: 105957f94; end: 105957fc3;  */

void FUN_105957f94(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x1af286bca1af287) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x98);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x98) {
    FUN_10595809c(param_4,uVar1);
    param_4 = lStack_48 + 0x98;
  }
  uStack_58 = 1;
  FUN_10595806c(param_1,param_2,param_3);
  FUN_105958158(&uStack_70);
  return;
}



/* Entry: 105957fc4; end: 10595806b;  */

void FUN_105957fc4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x98) {
    FUN_10595809c(param_4,lVar1);
    param_4 = lStack_38 + 0x98;
  }
  uStack_48 = 1;
  FUN_10595806c(param_1,param_2,param_3);
  FUN_105958158(&uStack_60);
  return;
}



/* Entry: 10595806c; end: 10595809b;  */

void FUN_10595806c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x98) {
    func_0x000105956970();
  }
  return;
}



/* Entry: 10595809c; end: 105958157;  */

void FUN_10595809c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  param_1[0xb] = param_2[0xb];
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar1 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar1;
  param_1[0xe] = param_2[0xe];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar1 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar1;
  param_1[0x11] = param_2[0x11];
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  return;
}



/* Entry: 105958158; end: 105958187;  */

long FUN_105958158(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_105958188(param_1);
  }
  return param_1;
}



/* Entry: 105958188; end: 1059581a7;  */

void FUN_105958188(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x98;
    func_0x000105956970();
  }
  return;
}



/* Entry: 1059581a8; end: 105958203;  */

void FUN_1059581a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x98;
    func_0x000105956970();
  }
  return;
}



/* Entry: 105958204; end: 10595820b;  */

void FUN_105958204(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x98;
    func_0x000105956970();
  }
  return;
}



/* Entry: 10595820c; end: 105958243;  */

void FUN_10595820c(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x98;
    func_0x000105956970();
  }
  return;
}



/* Entry: 105958244; end: 1059582a3;  */

ulong FUN_105958244(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x19;
  
  if (0x1af286bca1af286 < param_2) {
    FUN_105957e84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return unaff_x19;
  }
  uVar1 = (param_1[2] - *param_1) / 0x98;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0xd79435e50d7942 < uVar1) {
    uVar2 = 0x1af286bca1af286;
  }
  return uVar2;
}



/* Entry: 1059582a4; end: 1059582bb;  */

void FUN_1059582a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1059582bc; end: 1059584df;  */

void FUN_1059582bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _objc_retain();
  func_0x00010c15de20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(auStack_68);
  func_0x00010c122b80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(auStack_80);
  func_0x00010c122d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010029a6ec(auStack_98);
  uVar1 = param_2;
  func_0x00010c149460(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010029a6ec(auStack_b0);
  func_0x00010c0faa60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010029a6ec(auStack_c8);
  func_0x00010c0b6060(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010029a6ec(auStack_e0);
  func_0x00010c122ec0(param_2);
  FUN_105958638(param_1,auStack_68,auStack_80,auStack_98,auStack_b0,auStack_c8,auStack_e0,param_2);
  func_0x000100100fec(auStack_e0);
  func_0x000105958708();
  func_0x000100100fec(auStack_c8);
  func_0x0001059586f8();
  func_0x000100100fec(auStack_b0);
  _objc_release(uVar1);
  func_0x000100100fec(auStack_98);
  func_0x0001059586f0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  func_0x000105958718();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  func_0x000105958710();
  func_0x000105958700();
  return;
}



/* Entry: 1059584e0; end: 105958637;  */

void FUN_1059584e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126c0408;
  _objc_alloc(PTR_PTR_1126c0408);
  lVar2 = param_1;
  func_0x0001001011a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x18;
  func_0x0001001011a4(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x30;
  func_0x000100101220(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x48;
  func_0x000100101220(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + 0x60;
  func_0x000100101220(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + 0x78;
  func_0x000100101220(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0446e0(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,
                      *(undefined4 *)(param_1 + 0x90));
  func_0x000105958708();
  func_0x0001059586f8();
  func_0x0001059586f0();
  func_0x000105958718();
  func_0x000105958710();
  func_0x000105958700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105958638; end: 10595871f;  */

void FUN_105958638(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined4 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[5] = param_3[2];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar1;
  param_1[8] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = *param_5;
  param_1[10] = param_5[1];
  param_1[9] = uVar1;
  param_1[0xb] = param_5[2];
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar1 = *param_6;
  param_1[0xd] = param_6[1];
  param_1[0xc] = uVar1;
  param_1[0xe] = param_6[2];
  *param_6 = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar1 = *param_7;
  param_1[0x10] = param_7[1];
  param_1[0xf] = uVar1;
  param_1[0x11] = param_7[2];
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  *(undefined4 *)(param_1 + 0x12) = param_8;
  return;
}



/* Entry: 105958720; end: 10595883f;  */

void FUN_105958720(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_48);
  uVar2 = param_2;
  func_0x00010c11a480(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010029a6ec(&uStack_60);
  uVar3 = param_2;
  func_0x00010c298be0();
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[2] = uStack_38;
  uStack_40 = 0;
  uStack_38 = 0;
  param_1[4] = uStack_58;
  param_1[3] = uStack_60;
  param_1[5] = uStack_50;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  *(int *)(param_1 + 6) = (int)uVar3;
  func_0x000100100fec(&uStack_60);
  _objc_release(uVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105958840; end: 10595892f; -[SCNFideliusFideliusMetric initWithType:latency:result:reason:] */

undefined1 *
FUN_105958840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126eb0a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 105958930; end: 105958937; -[SCNFideliusFideliusMetric type] */

undefined8 FUN_105958930(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105958938; end: 10595893f; -[SCNFideliusFideliusMetric latency] */

undefined8 FUN_105958938(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105958940; end: 105958947; -[SCNFideliusFideliusMetric result] */

undefined8 FUN_105958940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105958948; end: 10595894f; -[SCNFideliusFideliusMetric reason] */

undefined8 FUN_105958948(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105958950; end: 10595897f; -[SCNFideliusFideliusMetric .cxx_destruct] */

void FUN_105958950(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 105958980; end: 105958a97; -[SCNFideliusFriendKey initWithUserId:publicKey:sharedSecret:version:] */

undefined1 *
FUN_105958980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126eb0a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    FUN_105958af4(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_105958af4(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    FUN_105958af4(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105958a98; end: 105958a9f; -[SCNFideliusFriendKey userId] */

undefined8 FUN_105958a98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105958aa0; end: 105958aa7; -[SCNFideliusFriendKey publicKey] */

undefined8 FUN_105958aa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105958aa8; end: 105958aaf; -[SCNFideliusFriendKey sharedSecret] */

undefined8 FUN_105958aa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105958ab0; end: 105958ab7; -[SCNFideliusFriendKey version] */

undefined4 FUN_105958ab0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 105958ab8; end: 105958af3; -[SCNFideliusFriendKey .cxx_destruct] */

void FUN_105958ab8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105958af4; end: 105958afb;  */

void FUN_105958af4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105958afc; end: 105958c13; -[SCNFideliusFriendKeyDBRecord initWithUserId:publicKeyB64:sharedSecret:version:] */

undefined1 *
FUN_105958afc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126eb0b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    FUN_105958c70(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_105958c70(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    FUN_105958c70(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105958c14; end: 105958c1b; -[SCNFideliusFriendKeyDBRecord userId] */

undefined8 FUN_105958c14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105958c1c; end: 105958c23; -[SCNFideliusFriendKeyDBRecord publicKeyB64] */

undefined8 FUN_105958c1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105958c24; end: 105958c2b; -[SCNFideliusFriendKeyDBRecord sharedSecret] */

undefined8 FUN_105958c24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105958c2c; end: 105958c33; -[SCNFideliusFriendKeyDBRecord version] */

undefined4 FUN_105958c2c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 105958c34; end: 105958c6f; -[SCNFideliusFriendKeyDBRecord .cxx_destruct] */

void FUN_105958c34(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105958c70; end: 105958c77;  */

void FUN_105958c70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105958c78; end: 105958d6b; -[SCNFideliusKeyUnwrappingResult initWithKey:success:wipeMystique:metrics:] */

undefined1 *
FUN_105958c78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126eb0b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105958d6c; end: 105958d73; -[SCNFideliusKeyUnwrappingResult key] */

undefined8 FUN_105958d6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105958d74; end: 105958d7b; -[SCNFideliusKeyUnwrappingResult success] */

undefined1 FUN_105958d74(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105958d7c; end: 105958d83; -[SCNFideliusKeyUnwrappingResult wipeMystique] */

undefined1 FUN_105958d7c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105958d84; end: 105958d8b; -[SCNFideliusKeyUnwrappingResult metrics] */

undefined8 FUN_105958d84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105958d8c; end: 105958dbb; -[SCNFideliusKeyUnwrappingResult .cxx_destruct] */

void FUN_105958d8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105958dbc; end: 105958ea7; -[SCNFideliusKeyWrappingResult initWithWrappedKeys:success:metrics:] */

undefined1 *
FUN_105958dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126eb0c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105958ea8; end: 105958eaf; -[SCNFideliusKeyWrappingResult wrappedKeys] */

undefined8 FUN_105958ea8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105958eb0; end: 105958eb7; -[SCNFideliusKeyWrappingResult success] */

undefined1 FUN_105958eb0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105958eb8; end: 105958ebf; -[SCNFideliusKeyWrappingResult metrics] */

undefined8 FUN_105958eb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105958ec0; end: 105958eef; -[SCNFideliusKeyWrappingResult .cxx_destruct] */

void FUN_105958ec0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105958ef0; end: 1059590ab; -[SCNFideliusRecipientDeviceInfo initWithSenderId:recipientId:recipientPublicKey:salt:phi:macTag:recipientVersion:] */

undefined1 *
FUN_105958ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126eb0c8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    FUN_105959130(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_105959130(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    FUN_105959130(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    FUN_105959130(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    FUN_105959130(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    FUN_105959130(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059590ac; end: 1059590b3; -[SCNFideliusRecipientDeviceInfo senderId] */

undefined8 FUN_1059590ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1059590b4; end: 1059590bb; -[SCNFideliusRecipientDeviceInfo recipientId] */

undefined8 FUN_1059590b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1059590bc; end: 1059590c3; -[SCNFideliusRecipientDeviceInfo recipientPublicKey] */

undefined8 FUN_1059590bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1059590c4; end: 1059590cb; -[SCNFideliusRecipientDeviceInfo salt] */

undefined8 FUN_1059590c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1059590cc; end: 1059590d3; -[SCNFideliusRecipientDeviceInfo phi] */

undefined8 FUN_1059590cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1059590d4; end: 1059590db; -[SCNFideliusRecipientDeviceInfo macTag] */

undefined8 FUN_1059590d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1059590dc; end: 1059590e3; -[SCNFideliusRecipientDeviceInfo recipientVersion] */

undefined4 FUN_1059590dc(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1059590e4; end: 10595912f; -[SCNFideliusRecipientDeviceInfo .cxx_destruct] */

void FUN_1059590e4(long param_1)

{
  func_0x000105959138(param_1 + 0x38);
  func_0x000105959138(param_1 + 0x30);
  func_0x000105959138(param_1 + 0x28);
  func_0x000105959138(param_1 + 0x20);
  func_0x000105959138(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105959130; end: 10595913f;  */

void FUN_105959130(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105959140; end: 10595922b; -[SCNFideliusUserKey initWithUserId:publicKey:version:] */

undefined1 *
FUN_105959140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126eb0d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10595922c; end: 105959233; -[SCNFideliusUserKey userId] */

undefined8 FUN_10595922c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105959234; end: 10595923b; -[SCNFideliusUserKey publicKey] */

undefined8 FUN_105959234(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10595923c; end: 105959243; -[SCNFideliusUserKey version] */

undefined4 FUN_10595923c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 105959244; end: 105959273; -[SCNFideliusUserKey .cxx_destruct] */

void FUN_105959244(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105959274; end: 105959417;  */

void FUN_105959274(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  _objc_retain();
  func_0x00010c2912a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(auStack_68);
  func_0x00010c15ffa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(auStack_88);
  uVar1 = param_2;
  func_0x00010bf70720(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(auStack_a8);
  func_0x00010bf71140(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(auStack_c8);
  uVar2 = param_2;
  func_0x00010beed9e0(param_2);
  func_0x00010beedb00(param_2);
  FUN_105959418(param_1,auStack_68,auStack_88,auStack_a8,auStack_c8,uVar2,param_2);
  func_0x0001001148fc(auStack_c8);
  func_0x0001059594f4();
  func_0x0001001148fc(auStack_a8);
  _objc_release(uVar1);
  func_0x0001001148fc(auStack_88);
  func_0x0001059594fc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  func_0x0001059594ec();
  func_0x0001059594e4();
  return;
}



/* Entry: 105959418; end: 105959503;  */

void FUN_105959418(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (*(char *)(param_3 + 3) == '\x01') {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[5] = param_3[2];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_4 + 3) == '\x01') {
    uVar2 = param_4[1];
    uVar1 = *param_4;
    param_1[9] = param_4[2];
    param_1[8] = uVar2;
    param_1[7] = uVar1;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    uVar2 = param_5[1];
    uVar1 = *param_5;
    param_1[0xd] = param_5[2];
    param_1[0xc] = uVar2;
    param_1[0xb] = uVar1;
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  *(undefined1 *)(param_1 + 0xf) = param_6;
  *(undefined1 *)((long)param_1 + 0x79) = param_7;
  return;
}


