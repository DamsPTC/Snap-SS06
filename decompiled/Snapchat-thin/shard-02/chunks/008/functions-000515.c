/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1021744f4; end: 10217453f;  */

undefined8 * FUN_1021744f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  func_0x000102174418(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 102174540; end: 102174617;  */

int FUN_102174540(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfa < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xfb;
  }
  uVar1 = *(byte *)(param_1 + 6) ^ 0xff;
  if (*(byte *)(param_1 + 6) < 6) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102174618; end: 102174663;  */

void FUN_102174618(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102174664,param_1);
  return;
}



/* Entry: 102174664; end: 10217474b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102174664(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = *(long *)(lStack_38 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(param_3);
  }
  puVar3 = PTR_PTR_1126d17b8;
  func_0x000107c610f8();
  func_0x000107c491bc();
  func_0x000107c61170(lVar2);
  func_0x0001000a0a8c(0);
  func_0x000107c61174();
  puVar4 = puVar3;
  func_0x000104494b00();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 10217474c; end: 10217475b;  */

undefined1  [16] FUN_10217474c(void)

{
  return ZEXT816(0x1104d5d40);
}



/* Entry: 10217475c; end: 102174823;  */

/* WARNING: Possible PIC construction at 0x0001021747d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021747d4) */
/* WARNING: Removing unreachable block (ram,0x0001021747fc) */
/* WARNING: Removing unreachable block (ram,0x000102174810) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10217475c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126e2760;
  func_0x000107c610f8(PTR_PTR_1126e2760);
  func_0x000107c453e4();
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112e5dc08))[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e5dc08);
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c5595c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102174824; end: 102174913;  */

/* WARNING: Possible PIC construction at 0x0001021748a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021748a8) */
/* WARNING: Removing unreachable block (ram,0x0001021748e8) */
/* WARNING: Removing unreachable block (ram,0x0001021748fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102174824(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126e2760;
  func_0x000107c610f8(PTR_PTR_1126e2760);
  func_0x000107c453e4();
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112e5dc08))[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e5dc08);
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c5595c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102174914; end: 1021749db;  */

/* WARNING: Possible PIC construction at 0x000102174988: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010217498c) */
/* WARNING: Removing unreachable block (ram,0x0001021749b4) */
/* WARNING: Removing unreachable block (ram,0x0001021749c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102174914(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126e2760;
  func_0x000107c610f8(PTR_PTR_1126e2760);
  func_0x000107c453e4();
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112e5dc08))[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e5dc08);
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c5595c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1021749dc; end: 102174acb;  */

/* WARNING: Possible PIC construction at 0x000102174a5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102174a60) */
/* WARNING: Removing unreachable block (ram,0x000102174aa0) */
/* WARNING: Removing unreachable block (ram,0x000102174ab4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021749dc(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126e2760;
  func_0x000107c610f8(PTR_PTR_1126e2760);
  func_0x000107c453e4();
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112e5dc08))[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e5dc08);
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c5595c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102174acc; end: 102174b93;  */

/* WARNING: Possible PIC construction at 0x000102174b40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102174b44) */
/* WARNING: Removing unreachable block (ram,0x000102174b6c) */
/* WARNING: Removing unreachable block (ram,0x000102174b80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102174acc(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126e2760;
  func_0x000107c610f8(PTR_PTR_1126e2760);
  func_0x000107c453e4();
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112e5dc08))[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e5dc08);
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c5595c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102174b94; end: 102174c73;  */

/* WARNING: Possible PIC construction at 0x000102174c10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102174c14) */
/* WARNING: Removing unreachable block (ram,0x000102174c48) */
/* WARNING: Removing unreachable block (ram,0x000102174c5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102174b94(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126e2760;
  func_0x000107c610f8(PTR_PTR_1126e2760);
  func_0x000107c453e4();
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112e5dc08))[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e5dc08);
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c5595c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102174c74; end: 102174d07;  */

/* WARNING: Possible PIC construction at 0x000102174cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102174cc4) */
/* WARNING: Removing unreachable block (ram,0x000102174ce0) */
/* WARNING: Removing unreachable block (ram,0x000102174cf4) */

void FUN_102174c74(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2758;
  func_0x000107c610f8(PTR_PTR_1126e2758);
  func_0x000107c453e4();
  func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
  func_0x000107c52f18(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102174d08; end: 102174e37;  */

/* WARNING: Possible PIC construction at 0x000102174d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102174dc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102174de8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102174dc8) */
/* WARNING: Removing unreachable block (ram,0x000102174d98) */
/* WARNING: Removing unreachable block (ram,0x000102174dec) */
/* WARNING: Removing unreachable block (ram,0x000102174e08) */
/* WARNING: Removing unreachable block (ram,0x000102174e1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102174d08(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126e2760;
  func_0x000107c610f8(PTR_PTR_1126e2760);
  func_0x000107c453e4();
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112e5dc08))[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e5dc08);
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c5595c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102174e38; end: 102174e97; -[_TtC26OnDeviceMLModelsPrefetcher30OnDeviceMLModelsBlizzardLogger init] */

void FUN_102174e38(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OnDeviceMLModelsPrefetcher.OnDeviceMLModelsBlizzardLogger",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102174e64);
  (*pcVar1)();
}



/* Entry: 102174e98; end: 102174ed3; -[_TtC26OnDeviceMLModelsPrefetcher30OnDeviceMLModelsBlizzardLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102174e98(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5dc00));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e5dc08 + 8))
  ;
  return;
}



/* Entry: 102174ed4; end: 102174ef3;  */

void FUN_102174ed4(void)

{
  func_0x000107c61168(&PTR_PTR_112822390);
  return;
}



/* Entry: 102174ef4; end: 102175023;  */

/* WARNING: Possible PIC construction at 0x000102174f80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102174fb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102174fd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102174fb4) */
/* WARNING: Removing unreachable block (ram,0x000102174f84) */
/* WARNING: Removing unreachable block (ram,0x000102174fd8) */
/* WARNING: Removing unreachable block (ram,0x000102174ff4) */
/* WARNING: Removing unreachable block (ram,0x000102175008) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102174ef4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126e2760;
  func_0x000107c610f8(PTR_PTR_1126e2760);
  func_0x000107c453e4();
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112e5dc08))[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e5dc08);
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c5595c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102175024; end: 10217504b;  */

void FUN_102175024(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104d5de0;
  if (lRam0000000112e5dc38 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e5dc38 = param_1;
  }
  return;
}



/* Entry: 10217504c; end: 10217508f;  */

void FUN_10217504c(long param_1,long *param_2,long param_3)

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



/* Entry: 102175090; end: 1021751ab;  */

/* WARNING: Possible PIC construction at 0x000102175118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102175218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102175130: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010217521c) */
/* WARNING: Removing unreachable block (ram,0x00010217525c) */
/* WARNING: Removing unreachable block (ram,0x00010217511c) */
/* WARNING: Removing unreachable block (ram,0x000102175134) */
/* WARNING: Removing unreachable block (ram,0x000102175170) */
/* WARNING: Removing unreachable block (ram,0x0001021751a8) */
/* WARNING: Removing unreachable block (ram,0x000102175214) */
/* WARNING: Removing unreachable block (ram,0x0001021751e4) */
/* WARNING: Removing unreachable block (ram,0x000102175270) */
/* WARNING: Removing unreachable block (ram,0x0001021755b0) */
/* WARNING: Removing unreachable block (ram,0x000102175358) */
/* WARNING: Removing unreachable block (ram,0x000102175468) */
/* WARNING: Removing unreachable block (ram,0x000102175360) */
/* WARNING: Removing unreachable block (ram,0x000102175380) */
/* WARNING: Removing unreachable block (ram,0x0001021755a0) */
/* WARNING: Removing unreachable block (ram,0x00010217538c) */
/* WARNING: Removing unreachable block (ram,0x0001021755a4) */
/* WARNING: Removing unreachable block (ram,0x000102175390) */
/* WARNING: Removing unreachable block (ram,0x0001021755a8) */
/* WARNING: Removing unreachable block (ram,0x00010217539c) */
/* WARNING: Removing unreachable block (ram,0x000102175428) */
/* WARNING: Removing unreachable block (ram,0x00010217540c) */
/* WARNING: Removing unreachable block (ram,0x000102175424) */
/* WARNING: Removing unreachable block (ram,0x00010217545c) */
/* WARNING: Removing unreachable block (ram,0x00010217546c) */
/* WARNING: Removing unreachable block (ram,0x0001021754ac) */
/* WARNING: Removing unreachable block (ram,0x0001021754cc) */
/* WARNING: Removing unreachable block (ram,0x0001021755ac) */
/* WARNING: Removing unreachable block (ram,0x0001021754d4) */
/* WARNING: Removing unreachable block (ram,0x000102175564) */
/* WARNING: Removing unreachable block (ram,0x000102175544) */
/* WARNING: Removing unreachable block (ram,0x000102175560) */
/* WARNING: Removing unreachable block (ram,0x00010217547c) */
/* WARNING: Removing unreachable block (ram,0x0001021751fc) */
/* WARNING: Removing unreachable block (ram,0x000102175188) */

void FUN_102175090(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c5ed90();
  func_0x000107c614e8();
  func_0x000107c43424();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (unaff_x20 != 0) {
    func_0x000107c5ede0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(0);
  return;
}



/* Entry: 1021751ac; end: 102175273;  */

/* WARNING: Possible PIC construction at 0x000102175218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010217521c) */
/* WARNING: Removing unreachable block (ram,0x00010217525c) */

undefined * FUN_1021751ac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_f0;
  long lStack_c0;
  ulong uStack_b8;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_40 = (undefined *)0x0;
  func_0x000107c3fc14(param_1,param_2,&puStack_40);
  if (((int)param_1 == 0) || (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)(puStack_40);
    return puStack_40;
  }
  func_0x000107c60e78();
  uVar6 = 0;
  func_0x000107c5f994();
  lVar12 = *(long *)(uVar6 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  uVar8 = 0x112df70f0;
  FUN_102175be8(0x112df70f0);
  uVar10 = uVar6;
  func_0x000107c5fbe0(uVar6,uVar8);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100403514(0,uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
  (**(code **)(lVar12 + 0x10))
            ((long)&uStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,uVar6);
  func_0x000107c5fbdc(&lStack_c0,uVar6,uVar8);
  lVar12 = lStack_c0;
  if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1021755b4);
    (*pcVar5)();
  }
  uVar6 = uStack_b8;
  if (uVar10 != 0) {
    uVar11 = *(ulong *)(lStack_c0 + 0x10);
    lVar1 = lStack_c0 + 0x20;
    do {
      if (uVar11 == uVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1021755a4);
        (*pcVar5)();
      }
      if ((long)uStack_b8 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1021755a8);
        (*pcVar5)();
      }
      if (*(ulong *)(lVar12 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1021755ac);
        (*pcVar5)();
      }
      uVar3 = *(undefined1 *)(lVar1 + uVar6);
      lVar7 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar7 + 0x18) = 2;
      *(undefined8 *)(lVar7 + 0x10) = 1;
      *(undefined **)(lVar7 + 0x38) = PTR___ss5UInt8VN_11034eef8;
      *(undefined **)(lVar7 + 0x40) = PTR___ss5UInt8Vs7CVarArgsWP_11034ef10;
      *(undefined1 *)(lVar7 + 0x20) = uVar3;
      uVar8 = 0x78323025;
      uVar9 = 0xe400000000000000;
      func_0x000107c5fb00(0x78323025,0xe400000000000000,lVar7);
      uVar2 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
        uStack_f0 = uVar8;
        func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar2 + 1,1);
        uVar8 = uStack_f0;
      }
      *(ulong *)(puVar4 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar4 + uVar2 * 0x10 + 0x20) = uVar8;
      *(undefined8 *)(puVar4 + uVar2 * 0x10 + 0x28) = uVar9;
      uVar6 = uVar6 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uStack_b8 = uVar6;
  uVar10 = *(ulong *)(lStack_c0 + 0x10);
  if (uStack_b8 != uVar10) {
    do {
      if (uVar10 <= uStack_b8) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1021755b0);
        (*pcVar5)();
      }
      uVar3 = *(undefined1 *)(lStack_c0 + 0x20 + uStack_b8);
      lVar12 = 0x112d36008;
      uStack_b8 = uStack_b8 + 1;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar12 + 0x18) = 2;
      *(undefined8 *)(lVar12 + 0x10) = 1;
      *(undefined **)(lVar12 + 0x38) = PTR___ss5UInt8VN_11034eef8;
      *(undefined **)(lVar12 + 0x40) = PTR___ss5UInt8Vs7CVarArgsWP_11034ef10;
      *(undefined1 *)(lVar12 + 0x20) = uVar3;
      uVar8 = 0x78323025;
      uVar9 = 0xe400000000000000;
      func_0x000107c5fb00(0x78323025,0xe400000000000000,lVar12);
      uVar10 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar10) {
        func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar10 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar10 + 1;
      *(undefined8 *)(puVar4 + uVar10 * 0x10 + 0x20) = uVar8;
      *(undefined8 *)(puVar4 + uVar10 * 0x10 + 0x28) = uVar9;
      uVar10 = *(ulong *)(lStack_c0 + 0x10);
    } while (uStack_b8 != uVar10);
  }
  func_0x000107c6142c(lStack_c0);
  return puVar4;
}



/* Entry: 102175274; end: 1021755b3;  */

undefined * FUN_102175274(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_a0;
  long lStack_70;
  ulong uStack_68;
  
  uVar6 = 0;
  func_0x000107c5f994();
  lVar12 = *(long *)(uVar6 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  uVar8 = 0x112df70f0;
  FUN_102175be8(0x112df70f0);
  uVar10 = uVar6;
  func_0x000107c5fbe0(uVar6,uVar8);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100403514(0,uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
  (**(code **)(lVar12 + 0x10))
            ((long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,uVar6);
  func_0x000107c5fbdc(&lStack_70,uVar6,uVar8);
  lVar12 = lStack_70;
  if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1021755b4);
    (*pcVar5)();
  }
  uVar6 = uStack_68;
  if (uVar10 != 0) {
    uVar11 = *(ulong *)(lStack_70 + 0x10);
    lVar1 = lStack_70 + 0x20;
    do {
      if (uVar11 == uVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1021755a4);
        (*pcVar5)();
      }
      if ((long)uStack_68 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1021755a8);
        (*pcVar5)();
      }
      if (*(ulong *)(lVar12 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1021755ac);
        (*pcVar5)();
      }
      uVar3 = *(undefined1 *)(lVar1 + uVar6);
      lVar7 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar7 + 0x18) = 2;
      *(undefined8 *)(lVar7 + 0x10) = 1;
      *(undefined **)(lVar7 + 0x38) = PTR___ss5UInt8VN_11034eef8;
      *(undefined **)(lVar7 + 0x40) = PTR___ss5UInt8Vs7CVarArgsWP_11034ef10;
      *(undefined1 *)(lVar7 + 0x20) = uVar3;
      uVar8 = 0x78323025;
      uVar9 = 0xe400000000000000;
      func_0x000107c5fb00(0x78323025,0xe400000000000000,lVar7);
      uVar2 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
        uStack_a0 = uVar8;
        func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar2 + 1,1);
        uVar8 = uStack_a0;
      }
      *(ulong *)(puVar4 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar4 + uVar2 * 0x10 + 0x20) = uVar8;
      *(undefined8 *)(puVar4 + uVar2 * 0x10 + 0x28) = uVar9;
      uVar6 = uVar6 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uStack_68 = uVar6;
  uVar10 = *(ulong *)(lStack_70 + 0x10);
  if (uStack_68 != uVar10) {
    do {
      if (uVar10 <= uStack_68) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1021755b0);
        (*pcVar5)();
      }
      uVar3 = *(undefined1 *)(lStack_70 + 0x20 + uStack_68);
      lVar12 = 0x112d36008;
      uStack_68 = uStack_68 + 1;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar12 + 0x18) = 2;
      *(undefined8 *)(lVar12 + 0x10) = 1;
      *(undefined **)(lVar12 + 0x38) = PTR___ss5UInt8VN_11034eef8;
      *(undefined **)(lVar12 + 0x40) = PTR___ss5UInt8Vs7CVarArgsWP_11034ef10;
      *(undefined1 *)(lVar12 + 0x20) = uVar3;
      uVar8 = 0x78323025;
      uVar9 = 0xe400000000000000;
      func_0x000107c5fb00(0x78323025,0xe400000000000000,lVar12);
      uVar10 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar10) {
        func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar10 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar10 + 1;
      *(undefined8 *)(puVar4 + uVar10 * 0x10 + 0x20) = uVar8;
      *(undefined8 *)(puVar4 + uVar10 * 0x10 + 0x28) = uVar9;
      uVar10 = *(ulong *)(lStack_70 + 0x10);
    } while (uStack_68 != uVar10);
  }
  func_0x000107c6142c(lStack_70);
  return puVar4;
}



/* Entry: 1021755b4; end: 1021755cf;  */

void FUN_1021755b4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1021755d0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1021755d0; end: 1021756f3;  */

undefined * FUN_1021755d0(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1021756f4);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_102183c9c();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x0001000a0a8c(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1021756f4; end: 102175be7;  */

/* WARNING: Possible PIC construction at 0x0001021759c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102175a9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021758f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102175aa0) */
/* WARNING: Removing unreachable block (ram,0x0001021759c8) */
/* WARNING: Removing unreachable block (ram,0x0001021758fc) */
/* WARNING: Removing unreachable block (ram,0x000102175908) */
/* WARNING: Removing unreachable block (ram,0x00010217593c) */
/* WARNING: Removing unreachable block (ram,0x000102175bcc) */
/* WARNING: Removing unreachable block (ram,0x00010217584c) */

undefined1  [16] FUN_1021756f4(undefined8 param_1,code *param_2)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  uint uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar14;
  long unaff_x21;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long alStack_d0 [4];
  code *pcStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  code *pcStack_90;
  code *pcStack_88;
  code *pcStack_78;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  pcStack_88 = param_2;
  func_0x000107c5f994();
  pcVar14 = *(code **)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(pcVar14 + 0x40));
  pcVar18 = (code *)((long)&pcStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pcVar3 = (code *)0x0;
  func_0x000107c5f9a4();
  lVar15 = *(long *)(pcVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = (long)pcVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar17 = (undefined8 *)(lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  ppuVar10 = &PTR__OBJC_CLASS___NSFileHandle_1126bc690;
  pcVar5 = (code *)0x0;
  func_0x000102175c28(0,0x112e5dc48);
  pcVar7 = pcStack_88;
  func_0x000107c5ed80(puVar17,param_1);
  puVar6 = puVar17;
  FUN_102175090();
  puVar12 = puVar17;
  if (unaff_x21 == 0) {
    puVar12 = puVar6;
    pcStack_b0 = pcVar14;
    lStack_a8 = lVar2;
    lStack_a0 = lVar15;
    pcStack_88 = pcVar18;
    func_0x000107c5f9a0(lVar16);
    func_0x000107c60ea0();
    pcVar5 = (code *)0x100000;
    func_0x000107c5ff5c();
    pcVar14 = pcStack_88;
    puStack_98 = puVar6;
    pcStack_90 = pcVar3;
    if ((ulong)pcVar7 >> 0x3c < 0xf) {
      uVar1 = (uint)((ulong)pcVar7 >> 0x20);
      uVar13 = uVar1 >> 0x1e;
      lVar2 = (long)pcVar5 >> 0x20;
      if (uVar1 >> 0x1e < 2) {
        if (uVar13 == 0) {
          if (((ulong)pcVar7 & 0xff000000000000) != 0) {
            pcStack_78 = pcVar5;
            uStack_70 = (int)pcVar7;
            uStack_6c = (short)((ulong)pcVar7 >> 0x20);
            pcVar5 = (code *)((long)&pcStack_78 + ((ulong)pcVar7 >> 0x30 & 0xff));
            puVar6 = (undefined8 *)0x112df70e8;
            uVar19 = 0x1021759c8;
            pcVar7 = (code *)PTR___s9CryptoKit6SHA256VMa_11034b128;
            ppuVar10 = (undefined **)PTR___s9CryptoKit6SHA256VAA12HashFunctionAAMc_11034b118;
            goto FUN_102175be8;
          }
        }
        else {
          lVar4 = (long)(int)pcVar5;
          lVar15 = lVar2;
LAB_102175a14:
          if (lVar4 != lVar15) {
            if ((ulong)pcVar7 >> 0x3e == 2) {
              lVar2 = *(long *)(pcVar5 + 0x10);
              lVar4 = *(long *)(pcVar5 + 0x18);
              func_0x000107c6157c(pcVar5);
              pcVar7 = (code *)((ulong)pcVar7 & 0x3fffffffffffffff);
              func_0x000107c6157c();
              func_0x000107c5ec30();
              pcVar3 = pcVar7;
              if (pcVar7 != (code *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar2,(long)pcVar3)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x102175be0);
                  (*pcVar5)();
                }
                pcVar7 = pcVar7 + (lVar2 - (long)pcVar3);
              }
              pcVar14 = (code *)(lVar4 - lVar2);
              if (SBORROW8(lVar4,lVar2)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x102175bdc);
                (*pcVar5)();
              }
              func_0x000107c5ec38();
              if ((long)pcVar14 <= (long)pcVar3) {
                pcVar3 = pcVar14;
              }
              pcVar5 = (code *)0x0;
              if (pcVar7 != (code *)0x0) {
                pcVar5 = pcVar3 + (long)pcVar7;
              }
              puVar6 = (undefined8 *)0x112df70e8;
              uVar19 = 0x102175aa0;
              pcVar7 = (code *)PTR___s9CryptoKit6SHA256VMa_11034b128;
              ppuVar10 = (undefined **)PTR___s9CryptoKit6SHA256VAA12HashFunctionAAMc_11034b118;
            }
            else {
              lVar4 = (long)(int)pcVar5;
              pcVar14 = (code *)(lVar2 - lVar4);
              if (lVar2 < lVar4) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x102175bd8);
                (*pcVar5)();
              }
              uVar8 = (ulong)pcVar7 & 0x3fffffffffffffff;
              func_0x000107c6157c();
              func_0x000107c5ec30();
              if (uVar8 == 0) {
                func_0x000107c5ec38();
                pcVar5 = (code *)0x0;
              }
              else {
                uVar9 = uVar8;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar4,uVar9)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x102175be4);
                  (*pcVar5)();
                }
                pcVar7 = (code *)((lVar4 - uVar9) + uVar8);
                func_0x000107c5ec38();
                pcVar5 = (code *)0x0;
                if (pcVar7 != (code *)0x0) {
                  pcVar5 = pcVar7;
                }
              }
              puVar6 = (undefined8 *)0x112df70e8;
              uVar19 = 0x1021758fc;
              pcVar7 = (code *)PTR___s9CryptoKit6SHA256VMa_11034b128;
              ppuVar10 = (undefined **)PTR___s9CryptoKit6SHA256VAA12HashFunctionAAMc_11034b118;
            }
            goto FUN_102175be8;
          }
        }
      }
      else if (uVar13 == 2) {
        lVar4 = *(long *)(pcVar5 + 0x10);
        lVar15 = *(long *)(pcVar5 + 0x18);
        goto LAB_102175a14;
      }
      func_0x0001000b44c0(pcVar5,pcVar7);
    }
    func_0x000107c60e9c(puVar12);
    func_0x000107c5f99c(pcVar14);
    pcVar7 = pcVar14;
    FUN_102175274();
    (**(code **)(pcStack_b0 + 8))(pcVar14,lStack_a8);
    ppuVar10 = (undefined **)0x112d38270;
    pcStack_78 = pcVar7;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    ppuVar11 = ppuVar10;
    func_0x00010011d734();
    pcVar5 = (code *)0x0;
    puVar12 = (undefined8 *)0xe000000000000000;
    func_0x000107c5fa80(0,0xe000000000000000,ppuVar10,ppuVar11);
    func_0x000107c6142c(pcVar7);
    (**(code **)(lStack_a0 + 8))(lVar16);
    FUN_1021751ac(puVar6);
    func_0x000107c61170();
    pcVar7 = pcVar3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar20._8_8_ = puVar12;
    auVar20._0_8_ = pcVar5;
    return auVar20;
  }
  uVar19 = 0x102175be8;
  func_0x000107c60e78();
FUN_102175be8:
  puVar17[-4] = pcVar5;
  puVar17[-3] = pcVar14;
  puVar17[-2] = &stack0xfffffffffffffff0;
  puVar17[-1] = uVar19;
  ppuVar11 = (undefined **)*puVar6;
  pcVar5 = pcVar7;
  if ((undefined **)*puVar6 == (undefined **)0x0) {
    pcVar5 = (code *)0xff;
    (*pcVar7)(0xff);
    func_0x000107c61520(ppuVar10,pcVar5);
    *puVar6 = ppuVar10;
    ppuVar11 = ppuVar10;
  }
  auVar21._8_8_ = pcVar5;
  auVar21._0_8_ = ppuVar11;
  return auVar21;
}



/* Entry: 102175be8; end: 102175c67;  */

void FUN_102175be8(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 102175c68; end: 102175df3;  */

void FUN_102175c68(undefined *param_1,code *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  puVar1 = param_1;
  pcVar5 = param_2;
  func_0x000107c614f0();
  puVar2 = param_1;
  func_0x000107c440cc();
  if ((int)puVar2 == 0) {
    puVar2 = param_1;
    func_0x000107c44314(param_1);
    puVar4 = param_1;
    func_0x000107c4407c();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
      pcVar5 = (code *)0x0;
    }
    else {
      puVar6 = puVar4;
      func_0x000107c5faec();
      func_0x000107c61170(puVar4);
    }
    puStack_80 = param_1;
    puStack_68 = puVar1;
    func_0x000107c615f0(param_1);
    (*param_2)(puVar2,puVar6,pcVar5,&puStack_80);
    func_0x000107c6142c(pcVar5);
    func_0x00010006e7f4(&puStack_80);
  }
  else {
    puVar2 = param_1;
    func_0x000107c5bdec(param_1);
    func_0x000107c61180();
    puVar1 = &UNK_1104d5e48;
    func_0x000107c613fc(&UNK_1104d5e48,0x28,7);
    *(code **)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = param_3;
    *(undefined **)(puVar1 + 0x20) = param_1;
    pcStack_60 = FUN_102176248;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    uStack_70 = 0x102176290;
    puStack_68 = &UNK_1104d5e60;
    puStack_58 = puVar1;
    func_0x000107c60bc4(&puStack_80);
    puVar1 = puStack_58;
    func_0x000107c6157c(param_3);
    func_0x000107c615f0(param_1);
    func_0x000107c61574(puVar1);
    func_0x000107c5c8c8(puVar2);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 102175df4; end: 102175ff3;  */

void FUN_102175df4(undefined8 *param_1,long param_2,code *param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_88 [24];
  
  ppuVar4 = &puStack_c0;
  ppuVar5 = &puStack_c0;
  puVar3 = &UNK_1104d5e98;
  func_0x000107c613fc(&UNK_1104d5e98,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  func_0x000107c43e90();
  func_0x000107c61180();
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_2 != 0) {
    uStack_a0 = 0x102176270;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    uStack_b0 = 0x102176288;
    puStack_a8 = &UNK_1104d5eb0;
    puStack_98 = puVar3;
    func_0x000107c60bc4(&puStack_c0);
    puVar8 = puStack_98;
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar8);
    uStack_a0 = 0x102176058;
    puStack_98 = (undefined *)0x0;
    puStack_c0 = puVar7;
    uStack_b8 = 0x42000000;
    uStack_b0 = 0x10217628c;
    puStack_a8 = &UNK_1104d5ed8;
    func_0x000107c60bc4(&puStack_c0);
    lVar6 = param_2;
    func_0x000107c4c6f0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_2);
    if (lVar6 != 0) {
      func_0x000107c60234(&puStack_c0,lVar6);
      func_0x000107c615e8(lVar6);
      goto LAB_102175f4c;
    }
  }
  uStack_b8 = 0;
  puStack_c0 = (undefined *)0x0;
  puStack_a8 = (undefined *)0x0;
  uStack_b0 = 0;
LAB_102175f4c:
  func_0x00010006e7f4(&puStack_c0);
  puVar7 = param_5;
  func_0x000107c614f0();
  puVar8 = param_5;
  func_0x000107c44314(param_5);
  func_0x000107c61428(puVar3 + 0x10,auStack_88,0,0);
  uVar1 = *(undefined8 *)(puVar3 + 0x10);
  uVar2 = *(undefined8 *)(puVar3 + 0x18);
  puStack_c0 = param_5;
  puStack_a8 = puVar7;
  func_0x000107c61434(uVar2);
  func_0x000107c615f0(param_5);
  (*param_3)(puVar8,uVar1,uVar2,&puStack_c0);
  func_0x000107c6142c(uVar2);
  func_0x00010006e7f4(&puStack_c0);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 102175ff4; end: 10217610f;  */

void FUN_102175ff4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = param_3;
  func_0x000107c5faec();
  func_0x000107c61428(param_3 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_3 + 0x10) = param_2;
  *(long *)(param_3 + 0x18) = lVar2;
  func_0x000107c6142c(uVar1);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 102176110; end: 102176203;  */

void FUN_102176110(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_60);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  if (lStack_48 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_60,lStack_48);
    lVar5 = *(long *)(lStack_48 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar5 + 0x10))(puVar4);
    puVar3 = puVar4;
    func_0x000107c605b0(puVar4,lStack_48);
    (**(code **)(lVar5 + 8))(puVar4,lStack_48);
    func_0x000100183ab8(auStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 102176204; end: 102176247;  */

void FUN_102176204(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102176248; end: 102176293;  */

void FUN_102176248(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_88 [24];
  
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  puVar10 = *(undefined **)(unaff_x20 + 0x20);
  ppuVar5 = &puStack_c0;
  ppuVar6 = &puStack_c0;
  puVar4 = &UNK_1104d5e98;
  func_0x000107c613fc(&UNK_1104d5e98,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  func_0x000107c43e90();
  func_0x000107c61180();
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_2 != 0) {
    uStack_a0 = 0x102176270;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    uStack_b0 = 0x102176288;
    puStack_a8 = &UNK_1104d5eb0;
    puStack_98 = puVar4;
    func_0x000107c60bc4(&puStack_c0);
    puVar9 = puStack_98;
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar9);
    uStack_a0 = 0x102176058;
    puStack_98 = (undefined *)0x0;
    puStack_c0 = puVar8;
    uStack_b8 = 0x42000000;
    uStack_b0 = 0x10217628c;
    puStack_a8 = &UNK_1104d5ed8;
    func_0x000107c60bc4(&puStack_c0);
    lVar7 = param_2;
    func_0x000107c4c6f0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(param_2);
    if (lVar7 != 0) {
      func_0x000107c60234(&puStack_c0,lVar7);
      func_0x000107c615e8(lVar7);
      goto LAB_102175f4c;
    }
  }
  uStack_b8 = 0;
  puStack_c0 = (undefined *)0x0;
  puStack_a8 = (undefined *)0x0;
  uStack_b0 = 0;
LAB_102175f4c:
  func_0x00010006e7f4(&puStack_c0);
  puVar8 = puVar10;
  func_0x000107c614f0();
  puVar9 = puVar10;
  func_0x000107c44314(puVar10);
  func_0x000107c61428(puVar4 + 0x10,auStack_88,0,0);
  uVar1 = *(undefined8 *)(puVar4 + 0x10);
  uVar3 = *(undefined8 *)(puVar4 + 0x18);
  puStack_c0 = puVar10;
  puStack_a8 = puVar8;
  func_0x000107c61434(uVar3);
  func_0x000107c615f0(puVar10);
  (*pcVar2)(puVar9,uVar1,uVar3,&puStack_c0);
  func_0x000107c6142c(uVar3);
  func_0x00010006e7f4(&puStack_c0);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 102176294; end: 1021762cf;  */

void FUN_102176294(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  uRam0000000112e5dcf0 = uVar1;
  return;
}



/* Entry: 1021762d0; end: 10217646b;  */

void FUN_1021762d0(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar1 != (undefined *)0x0) {
    uVar2 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010f067b20);
    puVar3 = puVar1;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(uVar2);
    if (puVar3 != (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x000107c61168(PTR__OBJC_CLASS___NSSet_1126ae870);
      puVar4 = puVar3;
      func_0x000107c6148c(puVar3,puVar1);
      if (puVar4 != (undefined *)0x0) {
        FUN_102176784(0);
        puVar1 = puVar4;
        func_0x000107c600ac(puVar4);
        goto LAB_1021763b4;
      }
      func_0x000107c615e8(puVar3);
    }
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  func_0x000107c453e4();
  puVar4 = (undefined *)0x0;
LAB_1021763b4:
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c3d798(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar3 = puVar4;
  if (param_1 != (undefined *)0x0) {
    puVar3 = puVar1;
    func_0x000107c61174(puVar1);
    uVar2 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010f067b20);
    func_0x000107c56bd8(param_1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10217646c; end: 102176783;  */

void FUN_10217646c(undefined8 *param_1,undefined *param_2,code *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long extraout_x8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar1 = 0;
  puStack_98 = param_1;
  func_0x000107c5ed50();
  lStack_b0 = *(long *)(lVar1 + -8);
  lStack_a8 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  puStack_a0 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 != (undefined *)0x0) {
    uVar2 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010f067b20);
    puVar3 = param_2;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar2);
    if (puVar3 == (undefined *)0x0) {
      param_2 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x000107c61168(PTR__OBJC_CLASS___NSSet_1126ae870);
      param_2 = puVar3;
      func_0x000107c6148c(puVar3,puVar4);
      if (param_2 == (undefined *)0x0) {
        func_0x000107c615e8(puVar3);
      }
    }
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSSet_1126ae870);
    func_0x000107c453e4();
  }
  func_0x000107c61174();
  puStack_b8 = param_2;
  func_0x000107c600a8(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61170(puVar4);
  func_0x000107c5ed4c(auStack_80);
  puVar8 = PTR___sypN_11034f1a8;
  puVar4 = PTR___sSSN_11034da80;
  while (lStack_68 != 0) {
    puVar5 = &uStack_90;
    func_0x000107c6147c(puVar5,auStack_80,puVar8 + 8,puVar4,6);
    uVar2 = uStack_88;
    uVar7 = uStack_90;
    if (((ulong)puVar5 & 1) != 0) {
      uVar6 = uStack_90;
      (*param_3)(uStack_90,uStack_88);
      if ((uVar6 & 1) == 0) {
        func_0x000107c5fadc(uVar7,uVar2);
        func_0x000107c6142c(uVar2);
        func_0x000107c3d798(puVar3);
        func_0x000107c61170(uVar7);
      }
      else {
        func_0x000107c6142c(uVar2);
      }
    }
    func_0x000107c5ed4c(auStack_80);
  }
  (**(code **)(lStack_b0 + 8))(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lStack_a8);
  puVar4 = puStack_a0;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar4 != (undefined *)0x0) {
    puVar8 = puVar3;
    func_0x000107c61174(puVar3);
    uVar2 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010f067b20);
    func_0x000107c56bd8(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(uVar2);
  }
  puVar4 = puVar3;
  func_0x000107c3db80();
  func_0x000107c61180();
  puVar8 = puVar4;
  func_0x000107c5fc54();
  func_0x000107c61170(puVar4);
  puVar4 = puVar8;
  func_0x000101158fcc();
  func_0x000107c6142c(puVar8);
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c61170(puStack_b8);
    func_0x000107c61170(puVar3);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puStack_b8);
  }
  *puStack_98 = puVar4;
  return;
}



/* Entry: 102176784; end: 1021767c7;  */

void FUN_102176784(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5dcf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e5dcf8 = puVar1;
  return;
}



/* Entry: 1021767c8; end: 1021768cf;  */

void FUN_1021767c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_3 != 0) {
    uVar1 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010f067b20);
    lVar2 = param_3;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar1);
    if (lVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x000107c61168(PTR__OBJC_CLASS___NSSet_1126ae870);
      lVar4 = lVar2;
      func_0x000107c6148c(lVar2,puVar3);
      if (lVar4 != 0) {
        func_0x000107c615f0(lVar2);
        func_0x000107c5fadc(param_1,param_2);
        func_0x000107c40404(lVar4);
        func_0x000107c61170(param_1);
        func_0x000107c615e8(lVar2);
      }
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1021768d0; end: 102176b27;  */

long FUN_1021768d0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102176b28; end: 102176b2b;  */

void FUN_102176b28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5dd08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da64e10;
  func_0x000107c61520(&UNK_10da64e10,&UNK_1104d6010);
  puRam0000000112e5dd08 = puVar1;
  return;
}



/* Entry: 102176b2c; end: 102176b6b;  */

void FUN_102176b2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5dd08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da64e10;
  func_0x000107c61520(&UNK_10da64e10,&UNK_1104d6010);
  puRam0000000112e5dd08 = puVar1;
  return;
}



/* Entry: 102176b6c; end: 102176d23;  */

undefined1  [16] FUN_102176b6c(ulong param_1,undefined8 param_2,uint param_3)

{
  ushort uVar1;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  char *unaff_x19;
  byte *unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  uVar4 = 0xe900000000000066;
  pcVar2 = (char *)0x6f635f726f727265;
  pcVar8 = (char *)(param_1 & 0xff);
  uVar7 = 0xda64dc0;
  uVar5 = (uint)(byte)pcVar8[0x10da64dc0] * 4 + 0x2176ba4;
  uVar1 = uRam6f635f726f727266._2_2_;
  pcVar3 = pcVar2;
  uVar9 = uVar7;
  switch(pcVar8) {
  case (char *)0x0:
  case (char *)0x10:
    goto code_r0x000102176ce8;
  default:
    uVar4 = 0x6573;
  case (char *)0x46:
  case (char *)0x86:
  case (char *)0xb0:
  case (char *)0xe6:
    uVar4 = uVar4 | 0x5f740000;
    goto code_r0x000102176bac;
  case (char *)0x2:
    auVar14._8_8_ = 0xe800000000000000;
    auVar14._0_8_ = 0x64656c6261736964;
    return auVar14;
  case (char *)0x3:
  case (char *)0x64:
  case (char *)0x6c:
  case (char *)0x74:
  case (char *)0x7c:
    auVar15._8_8_ = 0xea0000000000666c;
    auVar15._0_8_ = 0x65735f7974706d65;
    return auVar15;
  case (char *)0x4:
  case (char *)0x11:
  case (char *)0x25:
  case (char *)0x2d:
  case (char *)0x35:
  case (char *)0x3d:
  case (char *)0x51:
  case (char *)0x65:
  case (char *)0x6d:
  case (char *)0x75:
  case (char *)0x7d:
  case (char *)0xb1:
    auVar12._8_8_ = 0xeb00000000726f72;
    auVar12._0_8_ = 0x72655f6568636163;
    return auVar12;
  case (char *)0x5:
  case (char *)0x50:
    uVar4 = 0xed0000726f727265;
    pcVar2 = (char *)0x616f6c657270;
  case (char *)0xf4:
    auVar17._0_8_ = (ulong)pcVar2 & 0xffffffffffff | 0x5f64000000000000;
    auVar17._8_8_ = uVar4;
    return auVar17;
  case (char *)0x6:
    uVar4 = 0x64616f6c;
  case (char *)0x92:
    uVar4 = uVar4 | 0x665f00000000;
code_r0x000102176cb8:
    auVar18._8_8_ = uVar4 & 0xffffffffffff | 0xee00000000000000;
    auVar18._0_8_ = 0x6572705f706f7473;
    return auVar18;
  case (char *)0x7:
    pcVar2 = (char *)0x5f6c645f706f7473;
  case (char *)0x30:
    auVar16._8_8_ = 0xe900000000000066;
    auVar16._0_8_ = pcVar2;
    return auVar16;
  case (char *)0x8:
    auVar20._8_8_ = 0xef655f6568636163;
    auVar20._0_8_ = 0x5f6d6f72665f6c70;
    return auVar20;
  case (char *)0x9:
    pcVar2 = (char *)0xd000000000000017;
  case (char *)0x4c:
    pcVar8 = "skipped_low_free_memory";
    break;
  case (char *)0xa:
    pcVar2 = (char *)0x17;
  case (char *)0x38:
  case (char *)0x99:
    pcVar2 = (char *)((ulong)pcVar2 & 0xffffffffffff | 0xd000000000000000);
code_r0x000102176cd8:
    pcVar8 = "skipped_memory_pressure";
    break;
  case (char *)0xb:
    uVar4 = 0xee00726f7272655f;
    pcVar2 = (char *)0x6d75736b63656863;
  case (char *)0xc5:
  case (char *)0xcd:
  case (char *)0xd5:
  case (char *)0xdd:
  case (char *)0xf1:
    auVar11._8_8_ = uVar4;
    auVar11._0_8_ = pcVar2;
    return auVar11;
  case (char *)0xc:
    uVar4 = 0x800000010f067bc0;
  case (char *)0xd1:
  case (char *)0xd9:
  case (char *)0xe1:
    pcVar8 = (char *)0x17;
code_r0x000102176c20:
    pcVar8 = (char *)((ulong)pcVar8 | 0xd000000000000000);
code_r0x000102176c24:
    auVar13._0_8_ = pcVar8 + -4;
    auVar13._8_8_ = uVar4;
    return auVar13;
  case (char *)0x12:
  case (char *)0x26:
  case (char *)0x2e:
  case (char *)0x36:
  case (char *)0x3e:
  case (char *)0x52:
  case (char *)0x66:
  case (char *)0x6e:
  case (char *)0x76:
  case (char *)0x7e:
  case (char *)0xb2:
  case (char *)0xc6:
  case (char *)0xce:
  case (char *)0xd6:
  case (char *)0xde:
  case (char *)0xf2:
    goto code_r0x000102176e40;
  case (char *)0x13:
  case (char *)0x27:
  case (char *)0x2f:
  case (char *)0x37:
  case (char *)0x3f:
  case (char *)0x53:
  case (char *)0x67:
  case (char *)0x6f:
  case (char *)0x77:
  case (char *)0x7f:
  case (char *)0xb3:
  case (char *)0xc7:
  case (char *)0xcf:
  case (char *)0xd7:
  case (char *)0xdf:
  case (char *)0xf3:
    goto code_r0x000102176bac;
  case (char *)0x14:
  case (char *)0x31:
  case (char *)0x39:
  case (char *)0x41:
    goto code_r0x000102176c24;
  case (char *)0x15:
    goto code_r0x000102176f60;
  case (char *)0x16:
  case (char *)0x56:
  case (char *)0xb6:
  case (char *)0xf6:
    uVar7 = 2;
    if ((bool)in_CY) {
      uVar7 = 4;
    }
    pcVar8 = (char *)0x0;
  case (char *)0x70:
    if ((uint)pcVar8 < 0xff) {
      uVar7 = 1;
    }
    uVar5 = uRam6f635f726f727266;
    if (uVar7 == 4) {
joined_r0x000102176ef8:
      if (uVar5 != 0) {
LAB_102176efc:
        auVar26._4_4_ = 0;
        auVar26._0_4_ = ((uint)bRam6f635f726f727265 | uVar5 << 8) - 0xc;
        auVar26._8_8_ = 0xe900000000000066;
        return auVar26;
      }
    }
    else {
      if (uVar7 != 2) {
        uVar5 = uRam6f635f726f727266 & 0xff;
        goto joined_r0x000102176ef8;
      }
      uVar5 = uRam6f635f726f727266 & 0xffff;
      if ((short)uRam6f635f726f727266 != 0) goto LAB_102176efc;
code_r0x000102176ee4:
    }
    uVar7 = bRam6f635f726f727265 - 0xd;
    if (bRam6f635f726f727265 < 0xd) {
      uVar7 = 0xffffffff;
    }
    pcVar8 = (char *)(ulong)uVar7;
code_r0x000102176f24:
    auVar27._4_4_ = 0;
    auVar27._0_4_ = (int)pcVar8 + 1;
    auVar27._8_8_ = 0xe900000000000066;
    return auVar27;
  case (char *)0x1e:
  case (char *)0x5e:
  case (char *)0xbe:
  case (char *)0xfe:
    goto code_r0x000102176bb0;
  case (char *)0x20:
  case (char *)0x4d:
  case (char *)0x60:
  case (char *)0x8d:
  case (char *)0xc0:
  case (char *)0xed:
    goto code_r0x000102176bb4;
  case (char *)0x24:
  case (char *)0x2c:
  case (char *)0x34:
  case (char *)0x3c:
  case (char *)0xa8:
    goto code_r0x000102176cb8;
  case (char *)0x28:
    unaff_x19 = (char *)(ulong)*unaff_x20;
  case (char *)0xb4:
    pcVar2 = unaff_x19;
    func_0x000107c6068c(&stack0x00000008);
code_r0x000102176db4:
    func_0x000107c60690(pcVar2);
    func_0x000107c606a8();
    auVar23._8_8_ = uVar4;
    auVar23._0_8_ = pcVar2;
    return auVar23;
  case (char *)0x29:
  case (char *)0x55:
  case (char *)0xb5:
  case (char *)0xf5:
    goto code_r0x000102176f5c;
  case (char *)0x2a:
  case (char *)0xca:
    goto code_r0x000102176f40;
  case (char *)0x32:
  case (char *)0x3a:
  case (char *)0x42:
  case (char *)0x6a:
  case (char *)0x72:
  case (char *)0x7a:
  case (char *)0x82:
  case (char *)0xd2:
  case (char *)0xda:
  case (char *)0xe2:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  case (char *)0xa1:
  case (char *)0xa9:
  case (char *)0xaa:
  case (char *)0xac:
    *(undefined8 *)((long)register0x00000008 + 0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x18) = unaff_x30;
code_r0x000102176d70:
code_r0x000102176d74:
    pcVar3 = (char *)(ulong)*unaff_x20;
    pcVar8 = pcVar2;
code_r0x000102176d7c:
    func_0x000107c60690(pcVar8,pcVar3);
    auVar22._8_8_ = uVar4;
    auVar22._0_8_ = pcVar3;
    return auVar22;
  case (char *)0x33:
  case (char *)0x3b:
  case (char *)0x43:
  case (char *)0x6b:
  case (char *)0x73:
  case (char *)0x7b:
  case (char *)0x83:
  case (char *)0xd3:
  case (char *)0xdb:
  case (char *)0xe3:
    goto code_r0x000102176fd0;
  case (char *)0x40:
  case (char *)0xa0:
    goto code_r0x000102176ce4;
  case (char *)0x4e:
  case (char *)0x8e:
  case (char *)0xee:
    pcVar2 = (char *)0xd000000000000024;
    goto code_r0x000102176e40;
  case (char *)0x4f:
  case (char *)0x8f:
  case (char *)0xef:
    goto code_r0x000102176bb8;
  case (char *)0x54:
    goto code_r0x000102176f24;
  case (char *)0x68:
    auVar25._8_8_ = 0xe900000000000066;
    auVar25._0_8_ = (ulong)*unaff_x20 + 0x3e9;
    return auVar25;
  case (char *)0x69:
  case (char *)0x71:
  case (char *)0x79:
  case (char *)0x81:
    goto code_r0x000102176c20;
  case (char *)0x78:
    goto code_r0x000102176f44;
  case (char *)0x80:
    in_CY = 0xda64dbf < (uint)pcVar8;
  case (char *)0xc8:
    uVar7 = 4;
    uVar5 = 2;
code_r0x000102176f40:
    uVar9 = uVar5;
    if ((bool)in_CY) {
      uVar9 = uVar7;
    }
code_r0x000102176f44:
    pcVar8 = (char *)0x0;
code_r0x000102176f48:
    if ((uint)pcVar8 < 0xff) {
      uVar9 = 1;
    }
    uVar7 = 0;
    if (0xf3 < param_3) {
      uVar7 = uVar9;
    }
    pcVar8 = (char *)(ulong)uVar7;
code_r0x000102176f58:
    in_CY = false;
    in_ZR = false;
code_r0x000102176f5c:
    if ((bool)in_CY && !(bool)in_ZR) {
code_r0x000102176f78:
      bRam6f635f726f727265 = 0x72;
      uVar7 = (uint)pcVar8;
      if (1 < uVar7) {
        if (uVar7 != 2) {
          uRam6f635f726f727266 = 0x1000000;
          auVar32._8_8_ = 0xe900000000000066;
          auVar32._0_8_ = 0x6f635f726f727265;
          return auVar32;
        }
        uRam6f635f726f727266 = (uint)uVar1 << 0x10;
        auVar30._8_8_ = 0xe900000000000066;
        auVar30._0_8_ = 0x6f635f726f727265;
        return auVar30;
      }
      if (uVar7 != 0) {
        uRam6f635f726f727266 = (uint)uRam6f635f726f727266._1_3_ << 8;
        auVar28._8_8_ = 0xe900000000000066;
        auVar28._0_8_ = 0x6f635f726f727265;
        return auVar28;
      }
code_r0x000102176fd0:
      auVar31._8_8_ = 0xe900000000000066;
      auVar31._0_8_ = 0x6f635f726f727265;
      return auVar31;
    }
code_r0x000102176f60:
    iVar6 = (int)pcVar8;
    in_OV = SBORROW4(iVar6,1);
    in_NG = iVar6 + -1 < 0;
    in_ZR = iVar6 == 1;
code_r0x000102176f64:
    if ((bool)in_ZR || in_NG != in_OV) {
      if ((int)pcVar8 != 0) {
        uRam6f635f726f727266 = (uint)uRam6f635f726f727266._1_3_ << 8;
      }
    }
    else if ((int)pcVar8 == 2) {
      uRam6f635f726f727266 = (uint)uVar1 << 0x10;
    }
    else {
      uRam6f635f726f727266 = 0;
    }
    bRam6f635f726f727265 = 0x72;
    auVar29._8_8_ = 0xe900000000000066;
    auVar29._0_8_ = 0x6f635f726f727265;
    return auVar29;
  case (char *)0x8c:
  case (char *)0x9c:
    goto code_r0x000102176d34;
  case (char *)0x90:
    break;
  case (char *)0x91:
    goto code_r0x000102176d5c;
  case (char *)0x93:
  case (char *)0x97:
  case (char *)0x9d:
  case (char *)0xa2:
  case (char *)0xa4:
    goto code_r0x000102176d38;
  case (char *)0x94:
    goto code_r0x000102176d7c;
  case (char *)0x95:
    goto code_r0x000102176d48;
  case (char *)0x96:
  case (char *)0xa6:
    goto code_r0x000102176d34;
  case (char *)0x98:
  case (char *)0x9a:
    goto code_r0x000102176cd8;
  case (char *)0x9b:
  case (char *)0xab:
    goto code_r0x000102176d60;
  case (char *)0x9e:
    goto code_r0x000102176d54;
  case (char *)0x9f:
    goto code_r0x000102176d70;
  case (char *)0xa3:
    goto code_r0x000102176d3c;
  case (char *)0xa5:
    goto code_r0x000102176d74;
  case (char *)0xa7:
    goto code_r0x000102176d44;
  case (char *)0xc4:
  case (char *)0xcc:
  case (char *)0xd4:
  case (char *)0xdc:
    goto code_r0x000102176f78;
  case (char *)0xc9:
    goto code_r0x000102176f58;
  case (char *)0xd0:
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzrlE7_domainSSvg_110351348)();
    auVar33._8_8_ = uVar4;
    auVar33._0_8_ = pcVar2;
    return auVar33;
  case (char *)0xd8:
    goto code_r0x000102176ee4;
  case (char *)0xe0:
    goto code_r0x000102176f64;
  case (char *)0xec:
    goto code_r0x000102176db4;
  case (char *)0xf0:
    goto code_r0x000102176f48;
  }
  pcVar8 = pcVar8 + -0x20;
code_r0x000102176ce4:
  uVar4 = (ulong)pcVar8 | 0x8000000000000000;
code_r0x000102176ce8:
  auVar19._8_8_ = uVar4;
  auVar19._0_8_ = pcVar2;
  return auVar19;
code_r0x000102176bac:
  uVar4 = uVar4 | 0x6c6400000000;
code_r0x000102176bb0:
  uVar4 = uVar4 & 0xffffffffffff | 0xee00000000000000;
  goto code_r0x000102176bb4;
code_r0x000102176e40:
  auVar24._8_8_ = 0xe900000000000066;
  auVar24._0_8_ = pcVar2;
  return auVar24;
code_r0x000102176bb4:
  pcVar2 = (char *)0x7265;
code_r0x000102176bb8:
  auVar10._0_8_ = (ulong)pcVar2 & 0xffff | 0x73615f726f720000;
  auVar10._8_8_ = uVar4;
  return auVar10;
code_r0x000102176d34:
  unaff_x19 = (char *)(ulong)*unaff_x20;
code_r0x000102176d38:
  pcVar8 = &stack0x00000008;
code_r0x000102176d3c:
  func_0x000107c6068c(pcVar8,0);
code_r0x000102176d44:
code_r0x000102176d48:
  pcVar2 = unaff_x19;
  func_0x000107c60690(pcVar2);
code_r0x000102176d54:
  func_0x000107c606a8();
code_r0x000102176d5c:
code_r0x000102176d60:
  auVar21._8_8_ = uVar4;
  auVar21._0_8_ = pcVar2;
  return auVar21;
}



/* Entry: 102176d24; end: 102176e1f;  */

void FUN_102176d24(void)

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



/* Entry: 102176e20; end: 102176e5b;  */

void FUN_102176e20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE9_userInfoyXlSgvg_11034ee00)();
  return;
}



/* Entry: 102176e5c; end: 102176e9b;  */

void FUN_102176e5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5dd10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da64dd0;
  func_0x000107c61520(&UNK_10da64dd0,&UNK_1104d6010);
  puRam0000000112e5dd10 = puVar1;
  return;
}



/* Entry: 102176e9c; end: 102177003;  */

int FUN_102176e9c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf3 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xc) {
      iVar2 = 4;
    }
    if (param_2 + 0xc >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102176f18;
        goto LAB_102176efc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102176efc:
      return ((uint)*param_1 | uVar1 << 8) - 0xc;
    }
  }
LAB_102176f18:
  iVar2 = *param_1 - 0xd;
  if (*param_1 < 0xd) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102177004; end: 102177043;  */

void FUN_102177004(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5dd18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da64eb0;
  func_0x000107c61520(&UNK_10da64eb0,&UNK_1104d6010);
  puRam0000000112e5dd18 = puVar1;
  return;
}



/* Entry: 102177044; end: 102177627;  */

void FUN_102177044(ulong *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  long extraout_x8;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long alStack_d0 [2];
  undefined1 auStack_c0 [8];
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  uVar14 = param_3;
  func_0x000107c5fb10();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_c0 + lVar1;
  uVar11 = param_2;
  func_0x000107c44fd8();
  func_0x000107c61180();
  if (uVar11 != 0) {
    uVar10 = uVar11;
    uStack_b8 = param_2;
    func_0x000107c5faec();
    uVar4 = 0;
    uVar9 = 0xe000000000000000;
    uStack_b0 = uVar10;
    func_0x000107c5fadc(0);
    func_0x000107c5c1dc();
    func_0x000107c61180();
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar4);
    uVar10 = param_3;
    func_0x000107c5faec();
    func_0x000107c61170(param_3);
    uVar11 = uVar10 & 0xffffffffffff;
    if ((uVar9 & 0x2000000000000000) != 0) {
      uVar11 = uVar9 >> 0x38 & 0xf;
    }
    if (uVar11 == 0) {
      func_0x000107c6142c(uVar9);
LAB_10217731c:
      uStack_90 = 0;
      uStack_88 = 0xe000000000000000;
      func_0x000107c602fc(0x49);
      func_0x000107c5fb78(0xd000000000000047,0x800000010f067be0);
      func_0x000107c5fb78(uStack_b0,uVar14);
      func_0x000107c6142c(uVar14);
    }
    else {
      uStack_90 = uVar10;
      uStack_88 = uVar9;
      func_0x000107c5fb04(puVar7);
      func_0x000100e8b654();
      uVar10 = 0;
      puVar5 = puVar7;
      func_0x000107c60214(puVar7,0,PTR___sSSN_11034da80,param_3);
      (**(code **)(lVar12 + 8))(puVar7,lVar3);
      func_0x000107c6142c(uVar9);
      uVar11 = uStack_b8;
      if (0xe < uVar10 >> 0x3c) goto LAB_10217731c;
      uVar9 = uStack_b8;
      func_0x000107c4006c();
      if ((uint)uVar9 < 5) {
        uVar9 = *(ulong *)(&UNK_10da64ed8 + (uVar9 & 0xffffffff) * 8);
        puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        func_0x000107c61168();
        puVar7 = puVar5;
        func_0x000107c5ee20(puVar5,uVar10);
        uStack_90 = 0;
        func_0x000107c3ab8c();
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        uVar11 = uStack_90;
        if (puVar6 != (undefined *)0x0) {
          func_0x000107c61174();
          func_0x000107c60234(&uStack_90,puVar6);
          func_0x000107c615e8(puVar6);
          uVar4 = 0x112d472a8;
          func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
          puVar6 = PTR___sypN_11034f1a8;
          puVar8 = &uStack_a8;
          func_0x000107c6147c(puVar8,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar4,6);
          uVar11 = uStack_a8;
          if (((ulong)puVar8 & 1) != 0) {
            if (*(long *)(uStack_a8 + 0x10) != 0) {
              func_0x000107c61434(uStack_a8);
              lVar3 = 0x6c7275;
              uVar15 = 0;
              func_0x000100029284(0x6c7275);
              if ((uVar15 & 1) == 0) {
                func_0x000107c6142c(uVar11);
              }
              else {
                func_0x0001000bb420(*(long *)(uVar11 + 0x38) + lVar3 * 0x20,&uStack_90);
                func_0x000107c6142c(uVar11);
                puVar8 = &uStack_a8;
                func_0x000107c6147c(puVar8,&uStack_90,puVar6 + 8,PTR___sSSN_11034da80,6);
                uVar16 = uStack_a0;
                uVar15 = uStack_a8;
                if (((ulong)puVar8 & 1) != 0) {
                  if (*(long *)(uVar11 + 0x10) == 0) {
LAB_1021775a8:
                    uStack_88 = 0;
                    uStack_90 = 0;
                    lStack_78 = 0;
                    uStack_80 = 0;
                  }
                  else {
                    func_0x000107c61434(uVar11);
                    lVar3 = 0x6d75736b63656863;
                    uVar13 = 0;
                    func_0x000100029284(0x6d75736b63656863);
                    if ((uVar13 & 1) == 0) {
                      func_0x000107c6142c(uVar11);
                      goto LAB_1021775a8;
                    }
                    func_0x0001000bb420(*(long *)(uVar11 + 0x38) + lVar3 * 0x20,&uStack_90);
                    func_0x000107c6142c(uVar11);
                  }
                  func_0x000107c6142c(uVar11);
                  if (lStack_78 == 0) {
                    func_0x000107c6142c(uVar16);
                    func_0x00010006e7f4(&uStack_90);
                    goto LAB_1021774d4;
                  }
                  puVar8 = &uStack_a8;
                  func_0x000107c6147c(puVar8,&uStack_90,puVar6 + 8,PTR___sSSN_11034da80,6);
                  uVar13 = uStack_a8;
                  uVar11 = uVar16;
                  if (((ulong)puVar8 & 1) != 0) {
                    uVar11 = uStack_b8;
                    func_0x000107c3ef3c();
                    func_0x0001000b44c0(puVar5,uVar10);
                    uVar10 = (ulong)(int)uVar11;
                    uVar11 = uStack_b0;
                    goto LAB_102177558;
                  }
                }
              }
            }
            func_0x000107c6142c(uVar11);
          }
LAB_1021774d4:
          uStack_90 = 0;
          uStack_88 = 0xe000000000000000;
          func_0x000107c602fc(0x5f);
          func_0x000107c5fb78(0xd00000000000005d,0x800000010f067cd0);
          func_0x000107c5fb78(uStack_b0,uVar14);
          func_0x000107c6142c(uVar14);
          goto LAB_102177524;
        }
        uVar9 = uStack_90;
        func_0x000107c61174();
        func_0x000107c5ed30();
        func_0x000107c61170(uVar9);
        func_0x000107c61654();
        uStack_90 = 0;
        uStack_88 = 0xe000000000000000;
        func_0x000107c602fc(0x54);
        func_0x000107c5fb78(0xd000000000000047,0x800000010f067c80);
        func_0x000107c5fb78(uStack_b0,uVar14);
        func_0x000107c6142c(uVar14);
        func_0x000107c5fb78(0x3a726f727265202c,0xe900000000000020);
        uVar4 = 0x112d393f0;
        uStack_a8 = uVar11;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c603d0(&uStack_a8,&uStack_90,uVar4,
                            PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        func_0x0001000b44c0(puVar5,uVar10);
        func_0x000107c614ac(uVar11);
      }
      else {
        func_0x000107c6142c(uVar14);
        uStack_90 = 0;
        uStack_88 = 0xe000000000000000;
        func_0x000107c602fc(0x42);
        func_0x000107c5fb78(0xd000000000000040,0x800000010f067c30);
        func_0x000107c4006c();
        uStack_a8 = CONCAT44(uStack_a8._4_4_,(int)uVar11);
        uVar4 = 0;
        FUN_102175024(0);
        func_0x000107c603d0(&uStack_a8,&uStack_90,uVar4,
                            PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
LAB_102177524:
        func_0x0001000b44c0(puVar5,uVar10);
      }
    }
    func_0x000107c6142c(uStack_88);
  }
  uVar11 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar13 = 0;
  uStack_a0 = 0;
  uVar10 = 0;
  uVar9 = 0;
LAB_102177558:
  *param_1 = uVar11;
  param_1[1] = uVar14;
  param_1[2] = uVar15;
  param_1[3] = uVar16;
  param_1[4] = uVar13;
  param_1[5] = uStack_a0;
  param_1[6] = uVar10;
  param_1[7] = uVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    *(undefined1 **)((long)alStack_d0 + lVar1) = &stack0xfffffffffffffff0;
    *(code **)((long)alStack_d0 + lVar1 + 8) = FUN_102177628;
    func_0x000107c60eb0("OnDeviceMLModelsPrefetcher.OnDeviceMLModelsCacheCleaner",0x37,"init()",6,0)
    ;
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102177654);
    (*pcVar2)();
  }
  return;
}



/* Entry: 102177628; end: 102177687; -[_TtC26OnDeviceMLModelsPrefetcher28OnDeviceMLModelsCacheCleaner init] */

void FUN_102177628(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OnDeviceMLModelsPrefetcher.OnDeviceMLModelsCacheCleaner",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102177654);
  (*pcVar1)();
}



/* Entry: 102177688; end: 1021776ff; -[_TtC26OnDeviceMLModelsPrefetcher28OnDeviceMLModelsCacheCleaner .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021776a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021776c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021776e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021776c8) */
/* WARNING: Removing unreachable block (ram,0x0001021776a8) */
/* WARNING: Removing unreachable block (ram,0x0001021776e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102177688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5dd20));
  return;
}



/* Entry: 102177700; end: 10217771f;  */

void FUN_102177700(void)

{
  func_0x000107c61168(&PTR_PTR_112822458);
  return;
}



/* Entry: 102177720; end: 10217774b; -[_TtC26OnDeviceMLModelsPrefetcher28OnDeviceMLModelsCacheCleaner dataSyncerIdentifier] */

void FUN_102177720(void)

{
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f067d60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10217774c; end: 102177753; -[_TtC26OnDeviceMLModelsPrefetcher28OnDeviceMLModelsCacheCleaner submitOnRegister] */

undefined8 FUN_10217774c(void)

{
  return 1;
}



/* Entry: 102177754; end: 1021779c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102177754(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  
  puVar2 = PTR_PTR_1126b7228;
  func_0x000107c610f8(PTR_PTR_1126b7228);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126b7238;
  func_0x000107c610f8(PTR_PTR_1126b7238);
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126b7248;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = puVar4;
  FUN_1021783d4();
  if (puVar5 == (undefined *)0x0) {
    lVar10 = 0;
  }
  else {
    puVar6 = puVar5;
    func_0x000107c3fb30();
    func_0x000107c61170(puVar5);
    lVar10 = (long)(int)puVar6;
  }
  uVar9 = lVar10 * 0x3c;
  if (SUB168(SEXT816(lVar10) * SEXT816(0x3c),8) != (long)uVar9 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021779b4);
    (*pcVar1)();
  }
  if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021779b8);
    (*pcVar1)();
  }
  if (uVar9 >> 0x20 == 0) {
    func_0x000107c57d34(puVar4);
    func_0x000107c57c1c(puVar3);
    func_0x000107c55974(puVar2);
    puVar5 = PTR_PTR_1126b7240;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c56a40();
    puVar6 = puVar5;
    func_0x000107c52c2c();
    FUN_1021783d4();
    if (puVar6 != (undefined *)0x0) {
      puVar7 = puVar6;
      func_0x000107c3fae4();
      func_0x000107c61170();
      if ((int)puVar7 != 0) {
        puVar6 = puVar5;
        func_0x000107c3de68();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1021779c0);
          (*pcVar1)();
        }
        func_0x000107c3d93c();
        func_0x000107c61170();
      }
    }
    FUN_1021783d4();
    if (puVar6 != (undefined *)0x0) {
      puVar7 = puVar6;
      func_0x000107c3fadc();
      func_0x000107c61170();
      if ((int)puVar7 != 0) {
        puVar6 = puVar5;
        func_0x000107c3de68();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1021779c4);
          (*pcVar1)();
        }
        func_0x000107c3d93c();
        func_0x000107c61170();
      }
    }
    FUN_1021783d4();
    if (puVar6 != (undefined *)0x0) {
      puVar7 = puVar6;
      func_0x000107c3fae0();
      func_0x000107c61170(puVar6);
      if ((int)puVar7 != 0) {
        puVar6 = puVar5;
        func_0x000107c3de68();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1021779c8);
          (*pcVar1)();
        }
        func_0x000107c3d93c();
        func_0x000107c61170(puVar6);
      }
    }
    func_0x000107c55958(puVar2);
    func_0x000107c54734(puVar2);
    uVar8 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010f067d60);
    func_0x000107c5597c(puVar2);
    func_0x000107c61170(uVar8);
    func_0x000107c55968(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021779bc);
  (*pcVar1)();
}



/* Entry: 1021779c8; end: 1021779fb; -[_TtC26OnDeviceMLModelsPrefetcher28OnDeviceMLModelsCacheCleaner jobConfig] */

void FUN_1021779c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102177754();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021779fc; end: 102177bdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021779fc(code *param_1,undefined8 param_2)

{
  code *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  pcVar1 = param_1;
  FUN_1021783d4();
  if (pcVar1 != (code *)0x0) {
    pcVar2 = pcVar1;
    func_0x000107c426e0();
    func_0x000107c61170(pcVar1);
    if ((int)pcVar2 != 0) {
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e5dd38);
      puVar6 = &UNK_1104d60e0;
      func_0x000107c613fc(&UNK_1104d60e0,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar3 = &UNK_1104d6108;
      func_0x000107c613fc(&UNK_1104d6108,0x28,7);
      *(undefined **)(puVar3 + 0x10) = puVar6;
      *(code **)(puVar3 + 0x18) = param_1;
      *(undefined8 *)(puVar3 + 0x20) = param_2;
      pcStack_50 = FUN_102178374;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_1104d6120;
      puStack_48 = puVar3;
      func_0x000107c60bc4(&puStack_70);
      puVar6 = puStack_48;
      FUN_10212d7c8(param_1,param_2);
      func_0x000107c61574(puVar6);
      func_0x000107c4e524(uVar7);
      func_0x000107c60bd0(ppuVar4);
      return;
    }
  }
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e5dd40) + _DAT_112e5e0f8);
  uVar7 = 0x64656c6261736964;
  func_0x000107c5fadc(0x64656c6261736964,0xe800000000000000);
  func_0x000105c1a704(uVar8,uVar7,1);
  func_0x000107c61170(uVar7);
  puVar5 = (undefined1 *)0x3eb;
  FUN_102174b94();
  if (param_1 == (code *)0x0) {
    return;
  }
  FUN_102176b2c();
  puVar6 = &UNK_1104d6010;
  func_0x000107c613f8(&UNK_1104d6010,puVar5,0,0);
  *puVar5 = 2;
  (*param_1)(2,puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar6);
  return;
}



/* Entry: 102177bdc; end: 102177c4b;  */

void FUN_102177bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102177c4c(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102177c4c; end: 102177f93;  */

/* WARNING: Possible PIC construction at 0x000102177dac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102177dc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102177e28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102177e48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102177e2c) */
/* WARNING: Removing unreachable block (ram,0x000102177dcc) */
/* WARNING: Removing unreachable block (ram,0x000102177e04) */
/* WARNING: Removing unreachable block (ram,0x000102177de8) */
/* WARNING: Removing unreachable block (ram,0x000102177e00) */
/* WARNING: Removing unreachable block (ram,0x000102177e24) */
/* WARNING: Removing unreachable block (ram,0x000102177db0) */
/* WARNING: Removing unreachable block (ram,0x000102177e4c) */
/* WARNING: Removing unreachable block (ram,0x000102177e54) */
/* WARNING: Removing unreachable block (ram,0x000102177f70) */
/* WARNING: Removing unreachable block (ram,0x000102177e70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102177c4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_68;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + _DAT_112e5dd40) + _DAT_112e5e0f8);
  func_0x000105c1a68c(lVar4,1);
  FUN_102174acc();
  FUN_1021783d4();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar4 == 0) {
    lVar4 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c4cff8();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar5 != 0) {
      puStack_98 = (undefined *)0x0;
      func_0x000107c5fc50(lVar5,&puStack_98,PTR___sSSN_11034da80);
      func_0x000107c61170(lVar5);
      if (puStack_98 != (undefined *)0x0) {
        puVar6 = puStack_98;
      }
    }
    lVar4 = *(long *)(puVar6 + 0x10);
  }
  if (lVar4 != 0) {
    puStack_68 = puVar3;
    func_0x000101e495b8(0,lVar4,0);
    uVar1 = *(undefined8 *)(puVar6 + 0x20);
    uVar2 = *(undefined8 *)(puVar6 + 0x28);
    puStack_98 = (undefined *)0x7461642e736e656c;
    puStack_90 = (undefined *)0xe900000000000061;
    func_0x000107c61434(uVar2);
    func_0x000107c5fb78(uVar1,uVar2);
    puVar6 = puStack_90;
    puVar3 = puStack_98;
    func_0x000107c610f8(PTR_PTR_1126b08b8);
    func_0x000107c5fadc(puVar3,puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar6);
  return;
}



/* Entry: 102177f94; end: 10217801f; -[_TtC26OnDeviceMLModelsPrefetcher28OnDeviceMLModelsCacheCleaner onSync:] */

void FUN_102177f94(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_1104d60b8;
    func_0x000107c613fc(&UNK_1104d60b8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_102178020;
  }
  func_0x000107c61174(param_1);
  FUN_1021779fc(pcVar2,puVar1);
  FUN_10212d6a4(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102178020; end: 102178027;  */

void FUN_102178020(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102178028; end: 10217827f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102178028(long param_1,ulong param_2,code *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112e5dd40;
  if (param_1 != 0) {
    lVar6 = *(long *)(param_1 + _DAT_112e5dd40);
    if (param_2 >> 0x3e == 0) {
      uVar3 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar3 = param_2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_2) {
        uVar3 = param_2;
      }
      func_0x000107c60480(uVar3);
    }
    func_0x000105c1a878(*(undefined8 *)(lVar6 + _DAT_112e5e0f8),uVar3);
    uStack_b0 = *(undefined8 *)(param_1 + _DAT_112e5dd30);
    lStack_80 = param_1;
    if (lRam0000000112e5dd00 != -1) {
      func_0x000107c61568(0x112e5dd00,FUN_102176294);
    }
    uStack_a8 = 0x1021783a8;
    puStack_a0 = auStack_90;
    uVar1 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    func_0x000100087bd4(&uStack_98,FUN_1021783b0,&uStack_c0,uVar1);
    uStack_c0 = 0;
    uStack_b8 = 0xe000000000000000;
    func_0x000107c602fc(0x2d);
    func_0x000107c6142c(uStack_b8);
    uStack_c0 = 0xd00000000000002b;
    uStack_b8 = 0x800000010f067d30;
    puVar4 = PTR___sSSN_11034da80;
    func_0x000107c5fc58(uStack_98,PTR___sSSN_11034da80);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar4);
    func_0x000107c6142c(uStack_b8);
    lVar6 = _DAT_112e5dd48;
    uVar1 = *(undefined8 *)(param_1 + _DAT_112e5dd48);
    func_0x000107c61174(uVar1);
    FUN_102174c74(uStack_98);
    func_0x000107c6142c(uStack_98);
    func_0x000107c61170(uVar1);
    lVar2 = *(long *)(param_1 + lVar2);
    uVar5 = *(undefined8 *)(lVar2 + _DAT_112e5e0f8);
    func_0x000107c61174();
    uVar1 = 0x73736563637573;
    func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
    func_0x000105c1a704(uVar5,uVar1,1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    func_0x000107c61174(uVar1);
    FUN_102174b94(200);
    func_0x000107c61170(uVar1);
    if (param_3 != (code *)0x0) {
      (*param_3)(0,0);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102178280; end: 102178373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102178280(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  func_0x000107c5fb78();
  uVar3 = 0x7461642e736e656c;
  puVar2 = PTR_PTR_1126b08b8;
  func_0x000107c610f8(PTR_PTR_1126b08b8);
  func_0x000107c5fadc(0x7461642e736e656c,0xe900000000000061);
  func_0x000107c6142c(0xe900000000000061);
  func_0x000107c4766c(puVar2);
  func_0x000107c61170(uVar3);
  lVar4 = *(long *)(param_3 + _DAT_112e5dd20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c61170(puVar2);
    bVar1 = true;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c4f740();
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(puVar2);
    bVar1 = lVar5 != 0;
  }
  return bVar1;
}



/* Entry: 102178374; end: 1021783af;  */

void FUN_102178374(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_102177c4c(uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1021783b0; end: 1021783cb;  */

void FUN_1021783b0(void)

{
  long unaff_x20;
  
  FUN_10217646c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1021783cc; end: 1021783d3;  */

void FUN_1021783cc(long param_1,long param_2)

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



/* Entry: 1021783d4; end: 10217842f;  */

long FUN_1021783d4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar1 = lVar2;
  if (lVar2 == 1) {
    lVar1 = unaff_x20;
    FUN_102178430();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    *(long *)(unaff_x20 + 0x28) = lVar1;
    func_0x000107c61174();
    FUN_102178688(uVar3);
  }
  func_0x000102178698(lVar2);
  return lVar1;
}



/* Entry: 102178430; end: 102178573;  */

/* WARNING: Removing unreachable block (ram,0x000102178518) */

long FUN_102178430(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar5 = *(ulong *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5fadc(uVar7);
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar3);
      uVar1 = (uint)(uVar5 >> 0x20);
      uVar6 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar6 == 0) {
          if ((uVar5 & 0xff000000000000) != 0) {
LAB_1021784e4:
            func_0x000107c610f8(PTR_PTR_1126a9fd8);
            lVar3 = lVar4;
            FUN_1021786a8(lVar4,uVar5);
            func_0x00010006c090(lVar4,uVar5);
            func_0x000107c61170(lVar2);
            return lVar3;
          }
        }
        else if ((long)(int)lVar4 != lVar4 >> 0x20) goto LAB_1021784e4;
      }
      else if ((uVar6 == 2) && (*(long *)(lVar4 + 0x10) != *(long *)(lVar4 + 0x18)))
      goto LAB_1021784e4;
      func_0x00010006c090(lVar4,uVar5);
    }
    func_0x000107c61170(lVar2);
  }
  return 0;
}



/* Entry: 102178574; end: 102178613;  */

undefined1  [16] FUN_102178574(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0xe000000000000000;
  func_0x000107c602fc(0x28);
  uVar2 = uStack_28;
  func_0x000107c6142c();
  uStack_30 = 0xd000000000000026;
  uStack_28 = 0x800000010f067dc0;
  FUN_1021783d4();
  uVar3 = 0x112e5de28;
  uStack_38 = uVar2;
  func_0x0001000285a8(0x112e5de28,&UNK_10da64f98);
  func_0x000107c5fb18(&uStack_38,uVar3);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = uStack_30;
  return auVar1;
}



/* Entry: 102178614; end: 102178667;  */

void FUN_102178614(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_102178688(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102178668; end: 102178687;  */

void FUN_102178668(void)

{
  FUN_102178574();
  return;
}



/* Entry: 102178688; end: 1021786a7;  */

void FUN_102178688(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1021786a8; end: 102178767;  */

code * FUN_1021786a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *unaff_x20;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar5 = &uStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  uStack_40 = 0;
  uVar4 = param_1;
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  uVar1 = uStack_40;
  if (unaff_x20 == (code *)0x0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar2 = &UNK_1104d61b8;
  func_0x000107c613fc(&UNK_1104d61b8,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  *(undefined8 **)(puVar2 + 0x20) = puVar5;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = uVar4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(uVar4);
  pcVar3 = FUN_102178bf4;
  func_0x0001000823a8(FUN_102178bf4,puVar2);
  return pcVar3;
}



/* Entry: 102178768; end: 102178823;  */

void FUN_102178768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104d61b8;
  func_0x000107c613fc(&UNK_1104d61b8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_102178bf4,puVar1);
  return;
}



/* Entry: 102178824; end: 102178bf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102178824(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar5 = lStack_68;
  lVar2 = lStack_68;
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000100083b20(&lStack_68);
  lVar5 = lStack_68;
  lVar3 = lStack_68;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar3 != 0) {
    func_0x000100083b20(&lStack_68);
    lVar5 = lStack_68;
    lVar4 = *(long *)(lStack_68 + _DAT_113093a98);
    func_0x000107c61174();
    func_0x000107c61170(lVar5);
    lVar5 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      lVar6 = 0;
      func_0x000102178648();
      func_0x000107c613fc();
      *(undefined8 *)(lVar6 + 0x10) = 0xd00000000000002a;
      *(undefined8 *)(lVar6 + 0x18) = 0x800000010f067df0;
      *(long *)(lVar6 + 0x20) = lVar3;
      *(undefined8 *)(lVar6 + 0x28) = 1;
      lVar4 = lVar3;
      func_0x000107c615f0();
      FUN_1021783d4();
      if (lVar4 != 0) {
        lVar7 = lVar4;
        func_0x000107c426e0();
        func_0x000107c61170(lVar4);
        if ((int)lVar7 != 0) {
          uVar8 = 0xd000000000000027;
          func_0x000107c5fadc(0xd000000000000027,0x800000010f067e20);
          lVar7 = lVar5;
          func_0x000107c4e60c();
          func_0x000107c61180();
          func_0x000107c61170(uVar8);
          puVar9 = PTR_PTR_1126a9fe0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          lVar10 = 0;
          FUN_102185670();
          lVar4 = lVar10;
          func_0x000107c610f8();
          *(undefined **)(lVar4 + _DAT_112e5e0f8) = puVar9;
          plVar11 = &lStack_78;
          lStack_78 = lVar4;
          lStack_70 = lVar10;
          func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
          func_0x000100083b20(&lStack_68);
          lVar4 = lStack_68;
          uVar8 = *(undefined8 *)(lStack_68 + _DAT_113083868);
          func_0x000107c61174();
          func_0x000107c61170(lVar4);
          lVar10 = 0;
          FUN_102174ed4();
          lVar4 = lVar10;
          func_0x000107c610f8();
          puVar1 = (undefined8 *)(lVar4 + _DAT_112e5dc08);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar4 + _DAT_112e5dc00) = uVar8;
          plVar12 = &lStack_88;
          lStack_88 = lVar4;
          lStack_80 = lVar10;
          func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
          func_0x000107c61174();
          func_0x000107c6157c(lVar6);
          func_0x000100083b20(&lStack_68);
          lVar4 = lStack_68;
          func_0x000107c4ec80();
          func_0x000107c61180();
          func_0x000107c61170(lStack_68);
          lVar13 = 0;
          FUN_102177700();
          lVar10 = lVar13;
          func_0x000107c610f8();
          *(long *)(lVar10 + _DAT_112e5dd20) = lVar2;
          *(long *)(lVar10 + _DAT_112e5dd28) = lVar6;
          *(long *)(lVar10 + _DAT_112e5dd30) = lVar4;
          *(long *)(lVar10 + _DAT_112e5dd38) = lVar7;
          *(long **)(lVar10 + _DAT_112e5dd40) = plVar11;
          *(long **)(lVar10 + _DAT_112e5dd48) = plVar12;
          puVar9 = PTR_s_init_1125d9248;
          lStack_98 = lVar10;
          lStack_90 = lVar13;
          func_0x000107c615f0(lVar7);
          func_0x000107c61174(plVar11);
          func_0x000107c61174(plVar12);
          plVar14 = &lStack_98;
          func_0x000107c61154(plVar14,puVar9);
          func_0x0001000a0a8c(0);
          plVar15 = plVar14;
          func_0x000104494b00();
          func_0x000107c61170(plVar14);
          func_0x000107c615e8(lVar5);
          func_0x000107c61170(plVar12);
          func_0x000107c61170(plVar11);
          func_0x000107c615e8(lVar7);
          func_0x000107c61574(lVar6);
          func_0x000107c61170(lVar2);
          func_0x000107c615e8(lVar3);
          goto LAB_102178bd0;
        }
      }
      func_0x000107c615e8(lVar5);
      func_0x000107c61574(lVar6);
    }
    func_0x000107c615e8(lVar3);
  }
  func_0x000107c61170(lVar2);
  plVar15 = (long *)0x0;
LAB_102178bd0:
  *param_1 = (long)plVar15;
  return;
}



/* Entry: 102178bf4; end: 102178c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102178bf4(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long unaff_x20;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  lVar5 = lStack_68;
  lVar2 = lStack_68;
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000100083b20(&lStack_68);
  lVar5 = lStack_68;
  lVar3 = lStack_68;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar3 != 0) {
    func_0x000100083b20(&lStack_68);
    lVar5 = lStack_68;
    lVar4 = *(long *)(lStack_68 + _DAT_113093a98);
    func_0x000107c61174();
    func_0x000107c61170(lVar5);
    lVar5 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      lVar6 = 0;
      func_0x000102178648();
      func_0x000107c613fc();
      *(undefined8 *)(lVar6 + 0x10) = 0xd00000000000002a;
      *(undefined8 *)(lVar6 + 0x18) = 0x800000010f067df0;
      *(long *)(lVar6 + 0x20) = lVar3;
      *(undefined8 *)(lVar6 + 0x28) = 1;
      lVar4 = lVar3;
      func_0x000107c615f0();
      FUN_1021783d4();
      if (lVar4 != 0) {
        lVar7 = lVar4;
        func_0x000107c426e0();
        func_0x000107c61170(lVar4);
        if ((int)lVar7 != 0) {
          uVar8 = 0xd000000000000027;
          func_0x000107c5fadc(0xd000000000000027,0x800000010f067e20);
          lVar7 = lVar5;
          func_0x000107c4e60c();
          func_0x000107c61180();
          func_0x000107c61170(uVar8);
          puVar9 = PTR_PTR_1126a9fe0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          lVar10 = 0;
          FUN_102185670();
          lVar4 = lVar10;
          func_0x000107c610f8();
          *(undefined **)(lVar4 + _DAT_112e5e0f8) = puVar9;
          plVar11 = &lStack_78;
          lStack_78 = lVar4;
          lStack_70 = lVar10;
          func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
          func_0x000100083b20(&lStack_68);
          lVar4 = lStack_68;
          uVar8 = *(undefined8 *)(lStack_68 + _DAT_113083868);
          func_0x000107c61174();
          func_0x000107c61170(lVar4);
          lVar10 = 0;
          FUN_102174ed4();
          lVar4 = lVar10;
          func_0x000107c610f8();
          puVar1 = (undefined8 *)(lVar4 + _DAT_112e5dc08);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar4 + _DAT_112e5dc00) = uVar8;
          plVar12 = &lStack_88;
          lStack_88 = lVar4;
          lStack_80 = lVar10;
          func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
          func_0x000107c61174();
          func_0x000107c6157c(lVar6);
          func_0x000100083b20(&lStack_68);
          lVar4 = lStack_68;
          func_0x000107c4ec80();
          func_0x000107c61180();
          func_0x000107c61170(lStack_68);
          lVar13 = 0;
          FUN_102177700();
          lVar10 = lVar13;
          func_0x000107c610f8();
          *(long *)(lVar10 + _DAT_112e5dd20) = lVar2;
          *(long *)(lVar10 + _DAT_112e5dd28) = lVar6;
          *(long *)(lVar10 + _DAT_112e5dd30) = lVar4;
          *(long *)(lVar10 + _DAT_112e5dd38) = lVar7;
          *(long **)(lVar10 + _DAT_112e5dd40) = plVar11;
          *(long **)(lVar10 + _DAT_112e5dd48) = plVar12;
          puVar9 = PTR_s_init_1125d9248;
          lStack_98 = lVar10;
          lStack_90 = lVar13;
          func_0x000107c615f0(lVar7);
          func_0x000107c61174(plVar11);
          func_0x000107c61174(plVar12);
          plVar14 = &lStack_98;
          func_0x000107c61154(plVar14,puVar9);
          func_0x0001000a0a8c(0);
          plVar15 = plVar14;
          func_0x000104494b00();
          func_0x000107c61170(plVar14);
          func_0x000107c615e8(lVar5);
          func_0x000107c61170(plVar12);
          func_0x000107c61170(plVar11);
          func_0x000107c615e8(lVar7);
          func_0x000107c61574(lVar6);
          func_0x000107c61170(lVar2);
          func_0x000107c615e8(lVar3);
          goto LAB_102178bd0;
        }
      }
      func_0x000107c615e8(lVar5);
      func_0x000107c61574(lVar6);
    }
    func_0x000107c615e8(lVar3);
  }
  func_0x000107c61170(lVar2);
  plVar15 = (long *)0x0;
LAB_102178bd0:
  *param_1 = (long)plVar15;
  return;
}



/* Entry: 102178c14; end: 102179063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102178c14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  long unaff_x20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar9 = *(ulong *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_90 = (undefined *)0x7461642e736e656c;
  uStack_88 = 0xe900000000000061;
  func_0x000107c5fb78(uVar9,uVar1);
  uVar2 = uStack_88;
  puVar4 = puStack_90;
  puVar3 = PTR_PTR_1126b08b8;
  func_0x000107c610f8(PTR_PTR_1126b08b8);
  func_0x000107c5fadc(puVar4,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c4766c(puVar3);
  func_0x000107c61170(puVar4);
  puVar4 = PTR_PTR_1126b1060;
  func_0x000107c610f8(PTR_PTR_1126b1060);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c47d08(puVar4);
  func_0x000107c61170(puVar5);
  plVar10 = (long *)(unaff_x20 + _DAT_112e5de30);
  plVar6 = plVar10;
  func_0x0001000a8868(plVar10,plVar10[3]);
  uVar7 = *(ulong *)(*plVar6 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar7 != 0) {
    uVar8 = uVar7;
    func_0x000107c4f740();
    func_0x000107c615e8();
    if (uVar8 != 0) goto LAB_102178d48;
    FUN_10217bf8c();
    if (uVar7 != 0) {
      uVar8 = uVar7;
      func_0x000107c5b0e4();
      func_0x000107c61170(uVar7);
      if ((uVar8 & 1) != 0) goto LAB_102178e48;
    }
    (**(code **)(unaff_x20 + _DAT_112e5de50))(uVar9,uVar1);
    if ((uVar9 & 1) != 0) {
LAB_102178e48:
      func_0x0001000a8868(plVar10,plVar10[3]);
      puVar5 = &UNK_1104d6250;
      func_0x000107c613fc(&UNK_1104d6250,0x28,7);
      *(undefined8 *)(puVar5 + 0x10) = param_2;
      *(undefined8 *)(puVar5 + 0x18) = param_3;
      *(undefined8 *)(puVar5 + 0x20) = param_4;
      lVar13 = *(long *)(*plVar10 + 0x10);
      func_0x000107c615f4(param_2,2);
      func_0x000107c61580(param_4,2);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar13 != 0) {
        puVar11 = &UNK_1104d62c8;
        func_0x000107c613fc(&UNK_1104d62c8,0x20,7);
        *(undefined8 *)(puVar11 + 0x10) = 0x10217b938;
        *(undefined **)(puVar11 + 0x18) = puVar5;
        pcStack_70 = (code *)0x10217b948;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_100f17d9c;
        puStack_78 = &UNK_1104d62e0;
        ppuVar12 = &puStack_90;
        puStack_68 = puVar11;
        func_0x000107c60bc4(ppuVar12);
        puVar11 = puStack_68;
        func_0x000107c6157c(puVar5);
        func_0x000107c61574(puVar11);
        func_0x000107c50784(lVar13);
        func_0x000107c61180();
        func_0x000107c615e8();
        func_0x000107c60bd0(ppuVar12);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar4);
        func_0x000107c61574(param_4);
        func_0x000107c615e8(param_2);
        func_0x000107c61574(puVar5);
        func_0x000107c615e8(lVar13);
        return;
      }
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      func_0x000100672b50(&uStack_b0,&uStack_d0);
      puVar11 = &UNK_1104d6278;
      func_0x000107c613fc(&UNK_1104d6278,0x50,7);
      *(undefined8 *)(puVar11 + 0x10) = param_3;
      *(undefined8 *)(puVar11 + 0x18) = param_4;
      *(undefined8 *)(puVar11 + 0x20) = 0;
      *(undefined8 *)(puVar11 + 0x28) = 0;
      *(undefined8 *)(puVar11 + 0x38) = uStack_c8;
      *(undefined8 *)(puVar11 + 0x30) = uStack_d0;
      *(undefined8 *)(puVar11 + 0x48) = uStack_b8;
      *(undefined8 *)(puVar11 + 0x40) = uStack_c0;
      pcStack_70 = (code *)0x10217b944;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1104d6290;
      ppuVar12 = &puStack_90;
      puStack_68 = puVar11;
      func_0x000107c60bc4(ppuVar12);
      puVar11 = puStack_68;
      func_0x000107c6157c(param_4);
      func_0x000107c61574(puVar11);
      func_0x000107c4e524(param_2);
      func_0x000107c60bd0(ppuVar12);
      func_0x00010006e7f4(&uStack_b0);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61574(param_4);
      func_0x000107c615e8(param_2);
      func_0x000107c61574(puVar5);
      return;
    }
  }
LAB_102178d48:
  puVar5 = &UNK_1104d6200;
  func_0x000107c613fc(&UNK_1104d6200,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_3;
  *(undefined8 *)(puVar5 + 0x18) = param_4;
  pcStack_70 = FUN_10217b8d8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1104d6218;
  ppuVar12 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar12);
  puVar5 = puStack_68;
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar5);
  func_0x000107c4e524(param_2);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 102179064; end: 10217914b;  */

void FUN_102179064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_90;
  func_0x000100672b50(param_4,&uStack_60);
  puVar1 = &UNK_1104d6318;
  func_0x000107c613fc(&UNK_1104d6318,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_7;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = uStack_58;
  *(undefined8 *)(puVar1 + 0x30) = uStack_60;
  *(undefined8 *)(puVar1 + 0x48) = uStack_48;
  *(undefined8 *)(puVar1 + 0x40) = uStack_50;
  uStack_70 = 0x10217bf80;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1104d6330;
  puStack_68 = puVar1;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c61434(param_3);
  func_0x000107c6157c(param_7);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(param_5);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10217914c; end: 10217a627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10217914c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar17;
  long unaff_x20;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  undefined *puVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uStack_200;
  undefined8 auStack_1f8 [3];
  code *pcStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined *puStack_188;
  ulong uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  ulong uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined4 uStack_dc;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  
  lVar4 = 0;
  uStack_108 = param_3;
  uStack_f8 = param_2;
  func_0x000107c5eea4();
  pcStack_118 = *(code **)(lVar4 + -8);
  lVar18 = *(long *)((long)pcStack_118 + 0x40);
  lStack_f0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = (long)&pcStack_1e0 - (lVar18 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_110 = lVar21 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (lVar21 - extraout_x12) - extraout_x12_00;
  puVar24 = PTR_PTR_1126b2798;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar6 = &UNK_1104d6368;
  puVar5 = puVar6;
  puStack_1b0 = puVar24;
  func_0x000107c613fc(&UNK_1104d6368,0x11,7);
  puVar5[0x10] = 0;
  func_0x000107c613fc(&UNK_1104d6368,0x11,7);
  puVar6[0x10] = 0;
  puStack_d8 = puVar6;
  lStack_d0 = lVar4;
  func_0x000107c5eea0(lVar4);
  FUN_10217bf8c();
  if (puVar6 == (undefined *)0x0) {
    puVar24 = (undefined *)0x0;
  }
  else {
    puVar24 = puVar6;
    func_0x000107c50710();
    func_0x000107c61170();
  }
  FUN_10217bf8c();
  lStack_1c0 = lVar21;
  uStack_100 = param_4;
  if (puVar6 == (undefined *)0x0) {
    uStack_168 = (undefined *)((ulong)uStack_168._4_4_ << 0x20);
  }
  else {
    puVar7 = puVar6;
    func_0x000107c5b0e4();
    uStack_168 = (undefined *)CONCAT44(uStack_168._4_4_,(int)puVar7);
    func_0x000107c61170(puVar6);
  }
  puStack_b8 = (undefined *)0x7461642e736e656c;
  uStack_b0 = 0xe900000000000061;
  func_0x000107c5fb78(param_1[4],param_1[5]);
  uVar12 = uStack_b0;
  puVar6 = puStack_b8;
  uVar13 = param_1[2];
  uVar11 = param_1[3];
  uVar17 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e5de40) + _DAT_112e5e0f8);
  puStack_e8 = param_1;
  func_0x000107c61434(uVar11);
  func_0x000105c19e3c(uVar17,puVar24,1);
  FUN_102174ef4(puVar6,uVar12,uVar13,uVar11);
  puVar7 = PTR_PTR_1126b08b8;
  func_0x000107c610f8();
  puStack_128 = puVar6;
  uStack_130 = uVar12;
  func_0x000107c5fadc(puVar6,uVar12);
  func_0x000107c4766c();
  func_0x000107c61170(puVar6);
  puVar6 = PTR_PTR_1126b1060;
  func_0x000107c610f8();
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar15 = PTR___sSSN_11034da80;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c47d08();
  func_0x000107c61170(puVar8);
  puVar8 = PTR_PTR_1126b1378;
  func_0x000107c61168();
  func_0x000107c4c950(puVar7);
  puStack_178 = puVar6;
  func_0x000107c4ed5c();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126b9620;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c537f4();
  puStack_1c8 = puVar6;
  func_0x000107c41214();
  func_0x000107c61180();
  uStack_dc = SUB84(puVar24,0);
  if (puVar6 == (undefined *)0x0) {
    puStack_170 = (undefined *)0x0;
    puStack_140 = (undefined *)0xf000000000000000;
  }
  else {
    puVar24 = puVar6;
    func_0x000107c5ee30();
    puStack_170 = puVar24;
    puStack_140 = puVar15;
    func_0x000107c61170(puVar6);
  }
  uStack_180 = puStack_e8[6];
  puVar6 = PTR_PTR_1126b1058;
  puStack_148 = puVar8;
  func_0x000107c610f8();
  uVar12 = uVar13;
  func_0x000107c5fadc(uVar13,uVar11);
  uVar17 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar9 = 0x746e6f43736e656c;
  uVar16 = 0xeb00000000746e65;
  func_0x000107c5fadc(0x746e6f43736e656c,0xeb00000000746e65);
  func_0x000107c46d48();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar9);
  puStack_188 = puVar7;
  func_0x000107c4c99c();
  func_0x000107c61180();
  if (puVar7 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar16);
  }
  puVar24 = PTR_PTR_1126b1050;
  func_0x000107c610f8();
  func_0x000107c61174();
  uVar12 = uVar13;
  func_0x000107c5fadc(uVar13,uVar11);
  *(undefined **)(lVar4 + -0x10) = puVar6;
  *(undefined1 *)(lVar4 + -0x18) = 0;
  *(undefined **)(lVar4 + -0x20) = puVar7;
  func_0x000107c4915c();
  puStack_1d0 = puVar6;
  puStack_150 = puVar24;
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar7);
  puVar6 = &UNK_1104d6390;
  func_0x000107c613fc(&UNK_1104d6390,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,unaff_x20);
  lVar19 = lStack_f0;
  lVar21 = lStack_110;
  pcVar3 = pcStack_118;
  pcStack_1d8 = *(code **)((long)pcStack_118 + 0x10);
  uStack_120 = uVar13;
  (*pcStack_1d8)(lStack_110,lStack_d0,lStack_f0);
  uStack_158 = (ulong)*(byte *)((long)pcVar3 + 0x50);
  uVar20 = uStack_158 + 0x20 & (uStack_158 ^ 0xffffffffffffffff);
  uVar25 = uVar20 + lVar18;
  uVar23 = uVar25 & 0xfffffffffffffff8;
  lStack_1a8 = uVar23 + 0x60;
  lStack_1a0 = uVar23 + 0x70;
  lStack_190 = uVar23 + 0x80;
  lStack_198 = uVar23 + 0x88;
  puVar24 = &UNK_1104d63b8;
  lStack_1b8 = lVar18;
  uStack_138 = uVar11;
  func_0x000107c613fc(&UNK_1104d63b8,uVar23 + 0xa0,uStack_158 | 7);
  *(undefined **)(puVar24 + 0x10) = puVar6;
  *(undefined **)(puVar24 + 0x18) = puVar5;
  pcStack_1e0 = *(code **)((long)pcVar3 + 0x20);
  (*pcStack_1e0)(puVar24 + uVar20,lVar21,lVar19);
  puVar8 = puStack_d8;
  puVar2 = puStack_e8;
  uVar17 = uStack_f8;
  uVar12 = uStack_100;
  uVar11 = uStack_130;
  uVar13 = uStack_138;
  puVar7 = puStack_178;
  puVar6 = puStack_188;
  puVar24[uVar25] = (char)uStack_168;
  uVar26 = puStack_e8[5];
  uVar16 = puStack_e8[4];
  uVar9 = puStack_e8[6];
  *(undefined8 *)(puVar24 + uVar23 + 0x40) = puStack_e8[7];
  *(undefined8 *)(puVar24 + uVar23 + 0x38) = uVar9;
  *(undefined8 *)(puVar24 + uVar23 + 0x30) = uVar26;
  *(undefined8 *)(puVar24 + uVar23 + 0x28) = uVar16;
  uVar26 = puStack_e8[1];
  uVar16 = *puStack_e8;
  uVar9 = puStack_e8[2];
  *(undefined8 *)(puVar24 + uVar23 + 0x20) = puStack_e8[3];
  *(undefined8 *)(puVar24 + uVar23 + 0x18) = uVar9;
  *(undefined8 *)(puVar24 + uVar23 + 0x10) = uVar26;
  *(undefined8 *)(puVar24 + uVar23 + 8) = uVar16;
  puVar24[uVar23 + 0x48] = (char)uStack_dc;
  *(undefined **)(puVar24 + uVar23 + 0x50) = puStack_128;
  *(undefined8 *)(puVar24 + uVar23 + 0x58) = uStack_130;
  *(undefined8 *)(puVar24 + lStack_1a8) = uStack_120;
  *(undefined8 *)((long)(puVar24 + lStack_1a8) + 8) = uStack_138;
  *(undefined8 *)(puVar24 + lStack_1a0) = uStack_108;
  *(undefined8 *)((long)(puVar24 + lStack_1a0) + 8) = uStack_100;
  *(undefined **)(puVar24 + lStack_190) = puStack_188;
  *(undefined8 *)(puVar24 + lStack_198) = uStack_f8;
  *(undefined **)(puVar24 + uVar23 + 0x90) = puStack_178;
  *(undefined **)(puVar24 + uVar23 + 0x98) = puStack_d8;
  plVar10 = (long *)(unaff_x20 + _DAT_112e5de30);
  func_0x0001000a8868(plVar10,plVar10[3]);
  uVar25 = uStack_158;
  lVar18 = uStack_180 * 0x3c;
  if (SUB168(SEXT816((long)uStack_180) * SEXT816(0x3c),8) == lVar18 >> 0x3f) {
    uStack_180 = ~uStack_158;
    puStack_160 = puVar24;
    func_0x000107c61434(uVar13);
    func_0x000107c6157c(puVar5);
    func_0x000107c61434(uVar11);
    func_0x000107c6157c(uVar12);
    func_0x000107c61174();
    uStack_168 = puVar6;
    func_0x000107c615f0(uVar17);
    func_0x000107c61174();
    puStack_178 = puVar7;
    func_0x000107c6157c(puVar8);
    FUN_10217ba98(puVar2,&puStack_b8);
    lVar21 = lStack_1c0;
    func_0x000107c5ee80(lStack_1c0,(double)lVar18);
    lVar18 = *(long *)(*plVar10 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar18 == 0) {
      puStack_e8 = (undefined8 *)0x0;
      lVar19 = lStack_d0;
    }
    else {
      uVar11 = 0;
      func_0x000107c5fadc(0,0xe000000000000000);
      uVar12 = 0;
      func_0x000107c5fadc(0,0xe000000000000000);
      uVar13 = uVar12;
      func_0x000107c5ee70();
      lVar19 = lStack_d0;
      puVar24 = (undefined *)0x0;
      if ((ulong)puStack_140 >> 0x3c < 0xf) {
        puVar24 = puStack_170;
        func_0x000107c5ee20(puStack_170,puStack_140);
      }
      puVar7 = puStack_160;
      pcStack_98 = FUN_10217b9b8;
      puStack_90 = puStack_160;
      puStack_b8 = puVar6;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_100f17820;
      puStack_a0 = &UNK_1104d6420;
      ppuVar14 = &puStack_b8;
      func_0x000107c60bc4();
      puVar6 = puStack_90;
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar6);
      *(undefined **)(lVar4 + -0x10) = puVar24;
      *(undefined ***)(lVar4 + -8) = ppuVar14;
      *(undefined8 *)(lVar4 + -0x18) = uVar13;
      uVar1 = (undefined1)uStack_dc;
      *(undefined1 *)(lVar4 + -0x1f) = uVar1;
      *(undefined1 *)(lVar4 + -0x20) = uVar1;
      lVar4 = lVar18;
      func_0x000107c42264();
      func_0x000107c61180();
      puStack_e8 = (undefined8 *)lVar4;
      func_0x000107c60bd0(ppuVar14);
      func_0x000107c615e8(lVar18);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar12);
      func_0x000107c61170(uVar13);
      func_0x000107c61170(puVar24);
      uVar25 = uStack_158;
    }
    lVar18 = lStack_f0;
    uVar23 = uStack_180;
    pcStack_118 = *(code **)((long)pcStack_118 + 8);
    (*pcStack_118)(lVar21,lStack_f0);
    puVar6 = &UNK_1104d6390;
    func_0x000107c613fc(&UNK_1104d6390,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,unaff_x20);
    lVar4 = lStack_110;
    (*pcStack_1d8)(lStack_110,lVar19,lVar18);
    uVar23 = uVar25 + 0x30 & uVar23;
    uVar20 = uVar23 + lStack_1b8;
    uVar22 = uVar20 & 0xfffffffffffffff8;
    puVar24 = &UNK_1104d63e0;
    func_0x000107c613fc(&UNK_1104d63e0,uVar22 + 0x40,uVar25 | 7);
    *(undefined **)(puVar24 + 0x10) = puVar6;
    *(undefined **)(puVar24 + 0x18) = puStack_d8;
    *(undefined **)(puVar24 + 0x20) = puVar5;
    *(undefined8 **)(puVar24 + 0x28) = puStack_e8;
    (*pcStack_1e0)(puVar24 + uVar23,lVar4,lVar18);
    uVar11 = uStack_f8;
    uVar13 = uStack_100;
    puVar24[uVar20] = (char)uStack_dc;
    *(undefined **)(puVar24 + uVar22 + 8) = puStack_128;
    *(undefined8 *)(puVar24 + uVar22 + 0x10) = uStack_130;
    *(undefined8 *)(puVar24 + uVar22 + 0x18) = uStack_120;
    *(undefined8 *)((long)(puVar24 + uVar22 + 0x18) + 8) = uStack_138;
    *(undefined8 *)(puVar24 + uVar22 + 0x28) = uStack_f8;
    *(undefined8 *)(puVar24 + uVar22 + 0x30) = uStack_108;
    *(undefined8 *)((long)(puVar24 + uVar22 + 0x30) + 8) = uStack_100;
    pcStack_98 = FUN_10217bad4;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_1000b0c7c;
    puStack_a0 = &UNK_1104d63f8;
    ppuVar14 = &puStack_b8;
    puStack_90 = puVar24;
    func_0x000107c60bc4(ppuVar14);
    puVar6 = puStack_90;
    puVar2 = puStack_e8;
    func_0x000107c615f0(puStack_e8);
    func_0x000107c6157c(puVar5);
    func_0x000107c6157c(uVar13);
    func_0x000107c615f0(uVar11);
    puVar24 = puStack_d8;
    func_0x000107c6157c(puStack_d8);
    func_0x000107c61574(puVar6);
    puVar6 = puStack_1b0;
    func_0x000107c3d5fc(puStack_1b0);
    func_0x000107c61170(puStack_148);
    func_0x000107c60bd0(ppuVar14);
    func_0x0001000b44c0(puStack_170,puStack_140);
    func_0x000107c61170(puStack_1d0);
    func_0x000107c61170(uStack_168);
    func_0x000107c61170(puStack_178);
    func_0x000107c615e8(puVar2);
    func_0x000107c61574(puStack_160);
    func_0x000107c61170(puStack_1c8);
    func_0x000107c61170(puStack_150);
    (*pcStack_118)(lStack_d0,lVar18);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar24);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102179cc8);
  (*pcVar3)();
}



/* Entry: 10217a628; end: 10217a69f;  */

void FUN_10217a628(undefined8 param_1,byte *param_2)

{
  bool bVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2,auStack_48,0,0);
  bVar1 = (*param_2 & 1) == 0;
  if (bVar1) {
    func_0x000107c61428(param_2,auStack_60,1,0);
    *param_2 = 1;
  }
  *(bool *)param_1 = bVar1;
  return;
}



/* Entry: 10217a6a0; end: 10217a9e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10217a6a0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,uint param_7,uint param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined4 param_13,
                  undefined4 param_14,code *param_15)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  
  lVar8 = *(long *)(param_6 + _DAT_112e5de40);
  if (((uint)param_4 & 0xff) == 0xd) {
    uVar5 = 0xe700000000000000;
    uVar3 = 0x73736563637573;
  }
  else {
    uVar3 = param_4;
    uVar5 = param_3;
    FUN_102176b6c(param_4);
  }
  lVar9 = _DAT_112e5e0f8;
  dVar10 = (double)(long)(param_1 * 1000.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar10)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10217a9d4);
    (*pcVar2)();
  }
  if (dVar10 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10217a9d8);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= dVar10) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10217a9dc);
    (*pcVar2)();
  }
  uVar7 = *(undefined8 *)(lVar8 + _DAT_112e5e0f8);
  uVar6 = uVar3;
  func_0x000107c5fadc();
  func_0x000105c19f54(uVar7,param_7 & 1,uVar6,1);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(lVar8 + lVar9);
  func_0x000107c5fadc(uVar3,uVar5);
  func_0x000105c1a140(uVar6,param_8 & 1,uVar3,(long)dVar10);
  func_0x000107c6142c(uVar5);
  func_0x000107c61170(uVar3);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10217a9e0);
    (*pcVar2)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      lVar8 = *(long *)(param_6 + _DAT_112e5de48);
      puVar4 = PTR_PTR_1126e2760;
      func_0x000107c610f8(PTR_PTR_1126e2760);
      func_0x000107c453e4();
      puVar1 = (undefined8 *)(lVar8 + _DAT_112e5dc08);
      lVar9 = puVar1[1];
      if (lVar9 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *puVar1;
        func_0x000107c61434(lVar9);
        func_0x000107c5fadc(uVar3,lVar9);
        func_0x000107c6142c(lVar9);
      }
      func_0x000107c5595c(puVar4);
      func_0x000107c61170(uVar3);
      func_0x000107c52140(puVar4);
      func_0x000107c5fadc(param_9,param_10);
      func_0x000107c56420(puVar4);
      func_0x000107c61170(param_9);
      func_0x000107c5fadc(param_11,param_12);
      func_0x000107c5a26c(puVar4);
      func_0x000107c61170(param_11);
      func_0x000107c59860(puVar4);
      func_0x000107c542a8(puVar4);
      func_0x000107c592e8(puVar4);
      func_0x000107c55670(puVar4);
      lVar8 = *(long *)(lVar8 + _DAT_112e5dc00);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar8 != 0) {
        func_0x000107c4bfb0();
        func_0x000107c615e8(lVar8);
      }
      func_0x000107c61170(puVar4);
      (*param_15)(param_2,param_3,param_4,param_5);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10217a9e8);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10217a9e4);
  (*pcVar2)();
}



/* Entry: 10217a9e8; end: 10217ac7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10217a9e8(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  ppuVar9 = &puStack_80;
  uVar1 = param_1 >> 6 & 3;
  if (uVar1 == 0) {
    plVar2 = (long *)(param_7 + _DAT_112e5de30);
    func_0x0001000a8868(plVar2,plVar2[3]);
    puVar3 = &UNK_1104d6638;
    func_0x000107c613fc(&UNK_1104d6638,0x29,7);
    *(undefined8 *)(puVar3 + 0x10) = param_9;
    *(code **)(puVar3 + 0x18) = param_5;
    *(undefined8 *)(puVar3 + 0x20) = param_6;
    puVar3[0x28] = (char)param_1;
    lVar10 = *(long *)(*plVar2 + 0x10);
    func_0x000107c615f4(param_9,2);
    func_0x000107c61580(param_6,2);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar10 == 0) {
      puVar8 = &UNK_1104d6660;
      func_0x000107c613fc(&UNK_1104d6660,0x21,7);
      *(code **)(puVar8 + 0x10) = param_5;
      *(undefined8 *)(puVar8 + 0x18) = param_6;
      puVar8[0x20] = (char)param_1;
      pcStack_60 = (code *)0x10217bd74;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_1104d6678;
      puStack_58 = puVar8;
      func_0x000107c60bc4(&puStack_80);
      puVar8 = puStack_58;
      func_0x000107c6157c(param_6);
      func_0x000107c61574(puVar8);
      func_0x000107c4e524(param_9);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61574(param_6);
      func_0x000107c615e8(param_9);
      func_0x000107c61574(puVar3);
    }
    else {
      lVar4 = lVar10;
      func_0x000101a6a21c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x18) = 3;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      *(undefined8 *)(lVar4 + 0x20) = param_8;
      uVar5 = 0;
      FUN_1019c718c(0);
      func_0x000107c61174(param_8);
      lVar6 = lVar4;
      func_0x000107c5fc48(lVar4,uVar5);
      func_0x000107c61574(lVar4);
      pcStack_60 = FUN_10217bd64;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000b0c7c;
      puStack_68 = &UNK_1104d66a0;
      puStack_58 = puVar3;
      func_0x000107c60bc4(&puStack_80);
      puVar8 = puStack_58;
      func_0x000107c6157c(puVar3);
      func_0x000107c61574(puVar8);
      func_0x000107c4fec8(lVar10);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61574(param_6);
      func_0x000107c615e8(param_9);
      func_0x000107c61574(puVar3);
      func_0x000107c615e8(lVar10);
      func_0x000107c61170(lVar6);
    }
  }
  else if (uVar1 == 1) {
    (*param_5)(0,0,param_1 & 0x3f);
  }
  else {
    (*param_5)(param_2,param_3,0xd);
  }
  return;
}



/* Entry: 10217ac80; end: 10217ad3f;  */

void FUN_10217ac80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

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
  puVar1 = &UNK_1104d66d8;
  func_0x000107c613fc(&UNK_1104d66d8,0x21,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  puVar1[0x20] = param_4;
  uStack_40 = 0x10217bf84;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1104d66f0;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10217ad40; end: 10217b11f;  */

void FUN_10217ad40(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  if ((param_1 == 0) && (param_3 != 0)) {
    puVar2 = &UNK_1104d6778;
    func_0x000107c613fc(&UNK_1104d6778,0x30,7);
    func_0x000100672b50(param_4,puVar2 + 0x10);
    puVar1 = &UNK_1104d67a0;
    func_0x000107c613fc(&UNK_1104d67a0,0xa8,7);
    uVar4 = *param_10;
    uVar6 = param_10[3];
    uVar5 = param_10[2];
    *(undefined8 *)(puVar1 + 0x30) = param_10[1];
    *(undefined8 *)(puVar1 + 0x28) = uVar4;
    *(undefined8 *)(puVar1 + 0x40) = uVar6;
    *(undefined8 *)(puVar1 + 0x38) = uVar5;
    uVar4 = param_10[4];
    uVar6 = param_10[7];
    uVar5 = param_10[6];
    *(undefined8 *)(puVar1 + 0x50) = param_10[5];
    *(undefined8 *)(puVar1 + 0x48) = uVar4;
    *(undefined8 *)(puVar1 + 0x10) = param_8;
    *(undefined8 *)(puVar1 + 0x18) = param_9;
    *(undefined **)(puVar1 + 0x20) = puVar2;
    *(undefined8 *)(puVar1 + 0x60) = uVar6;
    *(undefined8 *)(puVar1 + 0x58) = uVar5;
    *(undefined8 *)(puVar1 + 0x68) = param_2;
    *(long *)(puVar1 + 0x70) = param_3;
    *(undefined8 *)(puVar1 + 0x78) = param_11;
    *(undefined8 *)(puVar1 + 0x80) = param_12;
    *(undefined8 *)(puVar1 + 0x88) = param_13;
    *(undefined8 *)(puVar1 + 0x90) = param_14;
    *(undefined8 *)(puVar1 + 0x98) = param_6;
    *(undefined8 *)(puVar1 + 0xa0) = param_7;
    pcStack_78 = FUN_10217be58;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1104d67b8;
    ppuVar3 = &puStack_98;
    puStack_70 = puVar1;
    func_0x000107c60bc4(ppuVar3);
    puVar1 = puStack_70;
    func_0x000107c61434(param_3);
    func_0x000107c6157c(param_9);
    func_0x000107c6157c(puVar2);
    FUN_10217ba98(param_10,&puStack_d8);
    func_0x000107c61434(param_12);
    func_0x000107c61174(param_13);
    func_0x000107c6157c(param_14);
    func_0x000107c6157c(param_7);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(param_5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(puVar2);
  }
  else {
    puVar2 = &UNK_1104d6728;
    func_0x000107c613fc(&UNK_1104d6728,0x30,7);
    *(undefined8 *)(puVar2 + 0x10) = param_6;
    *(undefined8 *)(puVar2 + 0x18) = param_7;
    *(undefined8 *)(puVar2 + 0x20) = param_8;
    *(undefined8 *)(puVar2 + 0x28) = param_9;
    uStack_b8 = 0x10217bf88;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0x42000000;
    puStack_c8 = &UNK_1000f6b44;
    puStack_c0 = &UNK_1104d6740;
    ppuVar3 = &puStack_d8;
    puStack_b0 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_b0;
    func_0x000107c6157c(param_9);
    func_0x000107c6157c(param_7);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(param_5);
    func_0x000107c60bd0(ppuVar3);
  }
  return;
}



/* Entry: 10217b120; end: 10217b2cb;  */

/* WARNING: Removing unreachable block (ram,0x00010217b154) */

bool FUN_10217b120(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = &uStack_60;
  FUN_1021756f4();
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  uStack_40 = param_3;
  func_0x000100e8b654();
  func_0x000107c60204(&uStack_60,PTR___sSSN_11034da80,PTR___sSSN_11034da80,param_2,param_2);
  func_0x000107c6142c(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uStack_48 = 0;
    uStack_40 = 0xe000000000000000;
    func_0x000107c602fc(0x27);
    func_0x000107c6142c(uStack_40);
    uStack_48 = 0xd000000000000025;
    uStack_40 = 0x800000010f067e90;
    func_0x000107c5fb78(param_4,param_5);
    func_0x000107c6142c(uStack_40);
  }
  return puVar1 != (undefined8 *)0x0;
}



/* Entry: 10217b2cc; end: 10217b72b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10217b2cc(double param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,uint param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long extraout_x8;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  double dVar11;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  char cStack_91;
  undefined1 auStack_90 [32];
  
  lVar3 = 0;
  uStack_d8 = param_8;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  func_0x000107c61428(param_2 + 0x10,auStack_90,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puStack_b8 = (undefined *)(param_4 + 0x10);
    uVar6 = *(undefined8 *)(param_2 + _DAT_112e5de60);
    puStack_c0 = (undefined *)(param_3 + 0x10);
    uStack_e0 = param_9;
    func_0x000107c6157c(uVar6);
    func_0x000100087bd4(&cStack_91,0x10217bb64,&puStack_d0,PTR___sSbN_11034dd40);
    func_0x000107c61574(uVar6);
    if (cStack_91 == '\x01') {
      if (param_5 != 0) {
        func_0x000107c3f474(param_5);
      }
      func_0x000107c5eea0(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c5ee68(param_6);
      (**(code **)(lVar9 + 8))(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
      lVar3 = _DAT_112e5e0f8;
      dVar11 = (double)(long)(param_1 * 1000.0);
      if (0x7fefffffffffffff < (ulong)ABS(dVar11)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10217b718);
        (*pcVar2)();
      }
      if (dVar11 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10217b71c);
        (*pcVar2)();
      }
      if (9.223372036854776e+18 <= dVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10217b720);
        (*pcVar2)();
      }
      lVar7 = *(long *)(param_2 + _DAT_112e5de40);
      uVar8 = *(undefined8 *)(lVar7 + _DAT_112e5e0f8);
      lVar9 = lVar7;
      func_0x000107c61174(lVar7);
      uVar10 = 0x5f6c645f706f7473;
      uVar6 = uVar10;
      func_0x000107c5fadc(0x5f6c645f706f7473,0xe900000000000066);
      func_0x000105c19f54(uVar8,param_7 & 1,uVar6,1);
      func_0x000107c61170(uVar6);
      uVar6 = *(undefined8 *)(lVar7 + lVar3);
      func_0x000107c5fadc(0x5f6c645f706f7473,0xe900000000000066);
      func_0x000105c1a140(uVar6,0,uVar10,(long)dVar11);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(uVar10);
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10217b724);
        (*pcVar2)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10217b728);
        (*pcVar2)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10217b72c);
        (*pcVar2)();
      }
      uStack_e8 = param_12;
      lVar3 = *(long *)(param_2 + _DAT_112e5de48);
      puVar4 = PTR_PTR_1126e2760;
      func_0x000107c610f8(PTR_PTR_1126e2760);
      func_0x000107c453e4();
      puVar1 = (undefined8 *)(lVar3 + _DAT_112e5dc08);
      lVar9 = puVar1[1];
      if (lVar9 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *puVar1;
        func_0x000107c61434(lVar9);
        func_0x000107c5fadc(uVar6,lVar9);
        func_0x000107c6142c(lVar9);
      }
      func_0x000107c5595c(puVar4);
      func_0x000107c61170(uVar6);
      func_0x000107c52140(puVar4);
      uVar6 = uStack_d8;
      func_0x000107c5fadc(uStack_d8,uStack_e0);
      func_0x000107c56420(puVar4);
      func_0x000107c61170(uVar6);
      func_0x000107c5fadc(param_10,param_11);
      func_0x000107c5a26c(puVar4);
      func_0x000107c61170(param_10);
      func_0x000107c59860(puVar4);
      func_0x000107c542a8(puVar4);
      func_0x000107c592e8(puVar4);
      func_0x000107c55670(puVar4);
      lVar3 = *(long *)(lVar3 + _DAT_112e5dc00);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c4bfb0();
        func_0x000107c615e8(lVar3);
      }
      func_0x000107c61170(puVar4);
      puVar4 = &UNK_1104d6458;
      func_0x000107c613fc(&UNK_1104d6458,0x20,7);
      *(undefined8 *)(puVar4 + 0x10) = param_13;
      *(undefined8 *)(puVar4 + 0x18) = param_14;
      pcStack_b0 = FUN_10217bb7c;
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0x42000000;
      puStack_c0 = &UNK_1000f6b44;
      puStack_b8 = &UNK_1104d6470;
      ppuVar5 = &puStack_d0;
      puStack_a8 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar4 = puStack_a8;
      func_0x000107c6157c(param_14);
      func_0x000107c61574(puVar4);
      func_0x000107c4e524(uStack_e8);
      func_0x000107c60bd0(ppuVar5);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10217b72c; end: 10217b7c7;  */

void FUN_10217b72c(undefined8 param_1,undefined1 *param_2,byte *param_3)

{
  bool bVar1;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2,auStack_58,1,0);
  *param_2 = 1;
  func_0x000107c61428(param_3,auStack_70,0,0);
  bVar1 = (*param_3 & 1) == 0;
  if (bVar1) {
    func_0x000107c61428(param_3,auStack_88,1,0);
    *param_3 = 1;
  }
  *(bool *)param_1 = bVar1;
  return;
}



/* Entry: 10217b7c8; end: 10217b827; -[_TtC26OnDeviceMLModelsPrefetcher37OnDeviceMLModelsContentManagerFetcher init] */

void FUN_10217b7c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OnDeviceMLModelsPrefetcher.OnDeviceMLModelsContentManagerFetcher",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10217b7f4);
  (*pcVar1)();
}



/* Entry: 10217b828; end: 10217b8b7; -[_TtC26OnDeviceMLModelsPrefetcher37OnDeviceMLModelsContentManagerFetcher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010217b854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010217b888: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010217b858) */
/* WARNING: Removing unreachable block (ram,0x00010217b88c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10217b828(long param_1)

{
  FUN_10217beec(param_1 + _DAT_112e5de30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5de38));
  return;
}



/* Entry: 10217b8b8; end: 10217b8d7;  */

void FUN_10217b8b8(void)

{
  func_0x000107c61168(&PTR_PTR_112822540);
  return;
}



/* Entry: 10217b8d8; end: 10217b91b;  */

void FUN_10217b8d8(void)

{
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  (**(code **)(unaff_x20 + 0x10))(0,0,&uStack_40);
  func_0x00010006e7f4(&uStack_40);
  return;
}



/* Entry: 10217b91c; end: 10217b94f;  */

void FUN_10217b91c(long param_1,long param_2)

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



/* Entry: 10217b950; end: 10217b98b;  */

void FUN_10217b950(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    FUN_10217beec(unaff_x20 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10217b98c; end: 10217b9b7;  */

void FUN_10217b98c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),unaff_x20 + 0x30);
  return;
}



/* Entry: 10217b9b8; end: 10217ba97;  */

void FUN_10217b9b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = uVar5 + *(long *)(*(long *)(lVar3 + -8) + 0x40);
  uVar6 = uVar4 & 0xfffffffffffffff8;
  lVar3 = unaff_x20 + uVar6;
  puVar1 = (undefined8 *)(unaff_x20 + uVar6 + 0x60);
  puVar2 = (undefined8 *)(unaff_x20 + uVar6 + 0x70);
  func_0x000102179cc8(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),unaff_x20 + uVar5,
                      *(undefined1 *)(unaff_x20 + uVar4),lVar3 + 8,*(undefined1 *)(lVar3 + 0x48),
                      *(undefined8 *)(lVar3 + 0x50),*(undefined8 *)(lVar3 + 0x58),*puVar1,puVar1[1],
                      *puVar2,puVar2[1],*(undefined8 *)(unaff_x20 + uVar6 + 0x80),
                      *(undefined8 *)(unaff_x20 + uVar6 + 0x88),
                      *(undefined8 *)(unaff_x20 + uVar6 + 0x90),
                      *(undefined8 *)(unaff_x20 + (uVar6 + 0x9f & 0xffffffffffffff8)));
  return;
}



/* Entry: 10217ba98; end: 10217bad3;  */

undefined8 FUN_10217ba98(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x10217692c)(param_2,param_1);
  return param_2;
}



/* Entry: 10217bad4; end: 10217bb7b;  */

void FUN_10217bad4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = uVar4 + 0x30 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = uVar5 + *(long *)(*(long *)(lVar3 + -8) + 0x40);
  uVar6 = uVar4 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar6 + 0x18);
  puVar2 = (undefined8 *)(unaff_x20 + uVar6 + 0x30);
  FUN_10217b2cc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                unaff_x20 + uVar5,*(undefined1 *)(unaff_x20 + uVar4),
                *(undefined8 *)(unaff_x20 + uVar6 + 8),*(undefined8 *)(unaff_x20 + uVar6 + 0x10),
                *puVar1,puVar1[1],*(undefined8 *)(unaff_x20 + uVar6 + 0x28),*puVar2,puVar2[1]);
  return;
}



/* Entry: 10217bb7c; end: 10217bb83;  */

void FUN_10217bb7c(void)

{
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  (**(code **)(unaff_x20 + 0x10))(0,0,7,&uStack_40);
  func_0x00010006e7f4(&uStack_40);
  return;
}



/* Entry: 10217bb84; end: 10217bb9b;  */

void FUN_10217bb84(void)

{
  long unaff_x20;
  
  FUN_10217a628(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10217bb9c; end: 10217bbf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10217bb9c(void)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  bVar2 = *(byte *)(unaff_x20 + 0x10);
  bVar3 = *(byte *)(unaff_x20 + 0x11);
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_112e5de50);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  (*(code *)*puVar1)(puVar1[1],uVar4,*(undefined8 *)(unaff_x20 + 0x48));
  return (((uint)bVar3 | (uint)bVar2 & (uint)uVar4) ^ 0xffffffff) & 1;
}



/* Entry: 10217bbf4; end: 10217bbfb;  */

void FUN_10217bbf4(void)

{
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  (**(code **)(unaff_x20 + 0x10))(0,0,1,&uStack_40);
  func_0x00010006e7f4(&uStack_40);
  return;
}



/* Entry: 10217bbfc; end: 10217bc43;  */

void FUN_10217bbfc(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  (**(code **)(unaff_x20 + 0x10))(0,0,param_1,&uStack_40);
  func_0x00010006e7f4(&uStack_40);
  return;
}


