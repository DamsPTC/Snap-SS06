/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100015618; end: 10001575f;  */

undefined8 * FUN_100015618(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar8 = param_2[6];
  uVar7 = *(undefined1 *)(param_2 + 7);
  FUN_100012620(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar8,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  param_1[6] = uVar8;
  *(undefined1 *)(param_1 + 7) = uVar7;
  *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
  return param_1;
}



/* Entry: 100015760; end: 10001577b;  */

void FUN_100015760(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = *(undefined8 *)((long)param_2 + 0x2a);
  *(undefined8 *)((long)param_1 + 0x32) = *(undefined8 *)((long)param_2 + 0x32);
  *(undefined8 *)((long)param_1 + 0x2a) = uVar7;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 10001577c; end: 1000157df;  */

undefined8 * FUN_10001577c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar10 = param_2[6];
  uVar7 = *(undefined1 *)(param_2 + 7);
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[3] = uVar13;
  param_1[2] = uVar12;
  uVar11 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar11;
  param_1[6] = uVar10;
  uVar8 = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 7) = uVar7;
  FUN_1000126c4(uVar9,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar8);
  *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
  return param_1;
}



/* Entry: 1000157e0; end: 100015897;  */

int FUN_1000157e0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x3a) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)((long)param_1 + 0x39)) {
    uVar1 = *(byte *)((long)param_1 + 0x39) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100015898; end: 100015a7b;  */

long * FUN_100015898(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 uVar9;
  bool bVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  
  uVar8 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar8 >> 0x11 & 1) == 0) {
    uVar11 = 0x1000c41d0;
    func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
    plVar12 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,uVar11);
    bVar10 = (int)plVar12 != 1;
    if (bVar10) {
      *param_1 = *param_2;
      _swift_retain();
    }
    else {
      lVar13 = 0;
      __s9WidgetKit0A6FamilyOMa();
      (**(code **)(*(long *)(lVar13 + -8) + 0x10))(param_1,param_2,lVar13);
    }
    _swift_storeEnumTagMultiPayload(param_1,uVar11,!bVar10);
    lVar16 = (long)*(int *)(param_3 + 0x14);
    uVar11 = 0x1000c41d8;
    func_0x0001000100d0(0x1000c41d8,&UNK_1000892a0);
    lVar13 = (long)param_2 + lVar16;
    _swift_getEnumCaseMultiPayload(lVar13,uVar11);
    bVar10 = (int)lVar13 != 1;
    if (bVar10) {
      *(undefined8 *)((long)param_1 + lVar16) = *(undefined8 *)((long)param_2 + lVar16);
      _swift_retain();
    }
    else {
      lVar13 = 0;
      __s7SwiftUI16RedactionReasonsVMa();
      (**(code **)(*(long *)(lVar13 + -8) + 0x10))
                ((long)param_1 + lVar16,(long)param_2 + lVar16,lVar13);
    }
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar16,uVar11,!bVar10);
    lVar13 = (long)param_1 + (long)*(int *)(param_3 + 0x18);
    lVar16 = (long)param_2 + (long)*(int *)(param_3 + 0x18);
    lVar14 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar14 + -8) + 0x10))(lVar13,lVar16,lVar14);
    lVar14 = 0;
    FUN_100012ac0();
    puVar1 = (undefined8 *)(lVar13 + *(int *)(lVar14 + 0x14));
    puVar2 = (undefined8 *)(lVar16 + *(int *)(lVar14 + 0x14));
    uVar11 = *puVar2;
    uVar5 = puVar2[1];
    uVar3 = puVar2[2];
    uVar6 = puVar2[3];
    uVar4 = puVar2[4];
    uVar7 = puVar2[5];
    uVar17 = puVar2[6];
    uVar9 = *(undefined1 *)(puVar2 + 7);
    FUN_100012620(uVar11,uVar5,uVar3,uVar6,uVar4,uVar7,uVar17,uVar9);
    *puVar1 = uVar11;
    puVar1[1] = uVar5;
    puVar1[2] = uVar3;
    puVar1[3] = uVar6;
    puVar1[4] = uVar4;
    puVar1[5] = uVar7;
    puVar1[6] = uVar17;
    *(undefined1 *)(puVar1 + 7) = uVar9;
  }
  else {
    lVar13 = *param_2;
    *param_1 = lVar13;
    uVar15 = (ulong)uVar8 & 0xff;
    param_1 = (long *)(lVar13 + (uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 100015a7c; end: 100015b8f;  */

void FUN_100015a7c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = 0x1000c41d0;
  func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
  puVar2 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,uVar1);
  if ((int)puVar2 == 1) {
    lVar3 = 0;
    __s9WidgetKit0A6FamilyOMa();
    (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
  }
  else {
    _swift_release(*param_1);
  }
  lVar4 = (long)*(int *)(param_2 + 0x14);
  uVar1 = 0x1000c41d8;
  func_0x0001000100d0(0x1000c41d8,&UNK_1000892a0);
  lVar3 = (long)param_1 + lVar4;
  _swift_getEnumCaseMultiPayload(lVar3,uVar1);
  if ((int)lVar3 == 1) {
    lVar3 = 0;
    __s7SwiftUI16RedactionReasonsVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 8))((long)param_1 + lVar4,lVar3);
  }
  else {
    _swift_release(*(undefined8 *)((long)param_1 + lVar4));
  }
  lVar3 = (long)param_1 + (long)*(int *)(param_2 + 0x18);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 8))(lVar3,lVar4);
  lVar4 = 0;
  FUN_100012ac0();
  puVar2 = (undefined8 *)(lVar3 + *(int *)(lVar4 + 0x14));
  lVar3 = puVar2[1];
  uVar1 = puVar2[3];
  if (*(char *)(puVar2 + 7) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001000860d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_1000b15a8)
              (*puVar2,lVar3,puVar2[2],uVar1,puVar2[4],puVar2[5],puVar2[6]);
    return;
  }
  if (*(char *)(puVar2 + 7) != '\0') {
    return;
  }
  if (lVar3 != 0) {
    _swift_bridgeObjectRelease(lVar3);
                    /* WARNING: Could not recover jumptable at 0x000100086054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_1000b1550)(uVar1);
    return;
  }
  return;
}



/* Entry: 100015b90; end: 100015f4f;  */

undefined8 * FUN_100015b90(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  uVar9 = 0x1000c41d0;
  func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
  puVar10 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar9);
  bVar8 = (int)puVar10 != 1;
  if (bVar8) {
    *param_1 = *param_2;
    _swift_retain();
  }
  else {
    lVar11 = 0;
    __s9WidgetKit0A6FamilyOMa();
    (**(code **)(*(long *)(lVar11 + -8) + 0x10))(param_1,param_2,lVar11);
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar9,!bVar8);
  lVar13 = (long)*(int *)(param_3 + 0x14);
  uVar9 = 0x1000c41d8;
  func_0x0001000100d0(0x1000c41d8,&UNK_1000892a0);
  lVar11 = (long)param_2 + lVar13;
  _swift_getEnumCaseMultiPayload(lVar11,uVar9);
  bVar8 = (int)lVar11 != 1;
  if (bVar8) {
    *(undefined8 *)((long)param_1 + lVar13) = *(undefined8 *)((long)param_2 + lVar13);
    _swift_retain();
  }
  else {
    lVar11 = 0;
    __s7SwiftUI16RedactionReasonsVMa();
    (**(code **)(*(long *)(lVar11 + -8) + 0x10))
              ((long)param_1 + lVar13,(long)param_2 + lVar13,lVar11);
  }
  _swift_storeEnumTagMultiPayload((long)param_1 + lVar13,uVar9,!bVar8);
  lVar11 = (long)param_1 + (long)*(int *)(param_3 + 0x18);
  lVar13 = (long)param_2 + (long)*(int *)(param_3 + 0x18);
  lVar12 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar12 + -8) + 0x10))(lVar11,lVar13,lVar12);
  lVar12 = 0;
  FUN_100012ac0();
  puVar10 = (undefined8 *)(lVar11 + *(int *)(lVar12 + 0x14));
  puVar1 = (undefined8 *)(lVar13 + *(int *)(lVar12 + 0x14));
  uVar9 = *puVar1;
  uVar4 = puVar1[1];
  uVar2 = puVar1[2];
  uVar5 = puVar1[3];
  uVar3 = puVar1[4];
  uVar6 = puVar1[5];
  uVar14 = puVar1[6];
  uVar7 = *(undefined1 *)(puVar1 + 7);
  FUN_100012620(uVar9,uVar4,uVar2,uVar5,uVar3,uVar6,uVar14,uVar7);
  *puVar10 = uVar9;
  puVar10[1] = uVar4;
  puVar10[2] = uVar2;
  puVar10[3] = uVar5;
  puVar10[4] = uVar3;
  puVar10[5] = uVar6;
  puVar10[6] = uVar14;
  *(undefined1 *)(puVar10 + 7) = uVar7;
  return param_1;
}



/* Entry: 100015f50; end: 100015f8f;  */

undefined8 FUN_100015f50(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000100d0(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100015f90; end: 1000162df;  */

long FUN_100015f90(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = 0x1000c41d0;
  func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
  lVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,lVar3);
  if ((int)lVar4 == 1) {
    lVar4 = 0;
    __s9WidgetKit0A6FamilyOMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
    _swift_storeEnumTagMultiPayload(param_1,lVar3,1);
  }
  else {
    _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  lVar5 = (long)*(int *)(param_3 + 0x14);
  lVar3 = 0x1000c41d8;
  func_0x0001000100d0(0x1000c41d8,&UNK_1000892a0);
  lVar4 = param_2 + lVar5;
  _swift_getEnumCaseMultiPayload(lVar4,lVar3);
  if ((int)lVar4 == 1) {
    lVar4 = 0;
    __s7SwiftUI16RedactionReasonsVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1 + lVar5,param_2 + lVar5,lVar4);
    _swift_storeEnumTagMultiPayload(param_1 + lVar5,lVar3,1);
  }
  else {
    _memcpy(param_1 + lVar5,param_2 + lVar5,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  lVar3 = param_1 + *(int *)(param_3 + 0x18);
  param_2 = param_2 + *(int *)(param_3 + 0x18);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(lVar3,param_2,lVar4);
  lVar4 = 0;
  FUN_100012ac0();
  puVar1 = (undefined8 *)(lVar3 + *(int *)(lVar4 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x14));
  uVar6 = *puVar2;
  uVar8 = puVar2[3];
  uVar7 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar8;
  puVar1[2] = uVar7;
  uVar6 = puVar2[4];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar6;
  uVar6 = *(undefined8 *)((long)puVar2 + 0x29);
  *(undefined8 *)((long)puVar1 + 0x31) = *(undefined8 *)((long)puVar2 + 0x31);
  *(undefined8 *)((long)puVar1 + 0x29) = uVar6;
  return param_1;
}



/* Entry: 1000162e0; end: 1000162eb;  */

void FUN_1000162e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_1000b15c8)();
  return;
}



/* Entry: 1000162ec; end: 10001639b;  */

void FUN_1000162ec(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  
  lVar2 = 0x1000c4370;
  func_0x0001000100d0(0x1000c4370,&UNK_100088f90);
  if ((int)param_2 == *(int *)(*(long *)(lVar2 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 0x30);
  }
  else {
    lVar2 = 0x1000c4378;
    func_0x0001000100d0(0x1000c4378,&UNK_100088f98);
    lVar3 = *(long *)(lVar2 + -8);
    if ((int)param_2 == *(int *)(lVar3 + 0x54)) {
      iVar1 = *(int *)(param_3 + 0x14);
    }
    else {
      lVar2 = 0;
      FUN_100012ac0();
      lVar3 = *(long *)(lVar2 + -8);
      iVar1 = *(int *)(param_3 + 0x18);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x30);
    param_1 = param_1 + iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000100016398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,lVar2);
  return;
}



/* Entry: 10001639c; end: 1000163a7;  */

void FUN_10001639c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_1000b16d8)();
  return;
}



/* Entry: 1000163a8; end: 10001645f;  */

void FUN_1000163a8(long param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  
  lVar2 = 0x1000c4370;
  func_0x0001000100d0(0x1000c4370,&UNK_100088f90);
  if (param_3 == *(int *)(*(long *)(lVar2 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  }
  else {
    lVar2 = 0x1000c4378;
    func_0x0001000100d0(0x1000c4378,&UNK_100088f98);
    lVar3 = *(long *)(lVar2 + -8);
    if (param_3 == *(int *)(lVar3 + 0x54)) {
      iVar1 = *(int *)(param_4 + 0x14);
    }
    else {
      lVar2 = 0;
      FUN_100012ac0();
      lVar3 = *(long *)(lVar2 + -8);
      iVar1 = *(int *)(param_4 + 0x18);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x38);
    param_1 = param_1 + iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010001645c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_2,lVar2);
  return;
}



/* Entry: 100016460; end: 100016497;  */

void FUN_100016460(undefined8 param_1)

{
  if (lRam00000001000c43d8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10008f41c);
  return;
}



/* Entry: 100016498; end: 1000165a3;  */

void FUN_100016498(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  uVar2 = 0x1000c43e8;
  lVar1 = 0x13f;
  func_0x000100016558(0x13f,0x1000c43e8,PTR___s9WidgetKit0A6FamilyOMa_1000b0a68);
  if (uVar2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0x1000c43f0;
    lVar1 = 0x13f;
    func_0x000100016558(0x13f,0x1000c43f0,PTR___s7SwiftUI16RedactionReasonsVMa_1000b0420);
    if (uVar2 < 0x40) {
      lStack_30 = *(long *)(lVar1 + -8) + 0x40;
      lVar1 = 0x13f;
      FUN_100012ac0();
      if (uVar2 < 0x40) {
        lStack_28 = *(long *)(lVar1 + -8) + 0x40;
        _swift_initStructMetadata(param_1,0x100,3,&lStack_38,param_1 + 0x10);
      }
    }
  }
  return;
}



/* Entry: 1000165a4; end: 1000165cf;  */

void FUN_1000165a4(void)

{
  func_0x000100016684(0x1000c4428,FUN_100012ac0,&DAT_100088e0c);
  return;
}



/* Entry: 1000165d0; end: 1000165e3;  */

undefined8 FUN_1000165d0(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  FUN_100012ac0();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,unaff_x20 + iVar1,lVar2);
  return param_1;
}



/* Entry: 1000165e4; end: 100016643;  */

void FUN_1000165e4(void)

{
  FUN_10001e0ec();
  return;
}



/* Entry: 100016644; end: 100016647;  */

void FUN_100016644(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c4318 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100088ed0;
  _swift_getWitnessTable(&DAT_100088ed0,&UNK_1000b1ff0);
  puRam00000001000c4318 = puVar1;
  return;
}



/* Entry: 100016648; end: 10001671b;  */

void FUN_100016648(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1000c4488;
  func_0x000100016684(0x1000c4488,FUN_100016460,&DAT_100088fb4);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



/* Entry: 10001671c; end: 100016727;  */

void FUN_10001671c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 100016728; end: 10001677b;  */

void FUN_100016728(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x1000c4488;
  func_0x000100016684(0x1000c4488,FUN_100016460,&DAT_100088fb4);
  __s21SnapchatWidgetsShared19SCTimelineEntryViewPAAE4bodyQrvg(param_1,param_2,uVar1);
  return;
}



/* Entry: 10001677c; end: 1000168df;  */

void FUN_10001677c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_248 [104];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = param_2;
  uVar2 = param_3;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  FUN_1000168e0(&uStack_b8,param_3,param_2);
  uStack_1b8 = uStack_90;
  uStack_1c0 = uStack_98;
  uStack_1a8 = uStack_80;
  uStack_1b0 = uStack_88;
  uStack_198 = uStack_70;
  uStack_1a0 = uStack_78;
  uStack_190 = uStack_68;
  uStack_1d8 = uStack_b0;
  uStack_1e0 = uStack_b8;
  uStack_1c8 = uStack_a0;
  uStack_1d0 = uStack_a8;
  uStack_130 = uStack_68;
  uStack_158 = uStack_90;
  uStack_160 = uStack_98;
  uStack_148 = uStack_80;
  uStack_150 = uStack_88;
  uStack_138 = uStack_70;
  uStack_140 = uStack_78;
  uStack_178 = uStack_b0;
  uStack_180 = uStack_b8;
  uStack_168 = uStack_a0;
  uStack_170 = uStack_a8;
  FUN_1000171f8(&uStack_1e0,&uStack_120,0x1000c4520,&UNK_1000890d8);
  func_0x000100017240(&uStack_180,0x1000c4520,&UNK_1000890d8);
  uStack_80 = uStack_1b8;
  uStack_88 = uStack_1c0;
  uStack_70 = uStack_1a8;
  uStack_78 = uStack_1b0;
  uStack_60 = uStack_198;
  uStack_68 = uStack_1a0;
  uStack_58 = uStack_190;
  uStack_a0 = uStack_1d8;
  uStack_a8 = uStack_1e0;
  uStack_90 = uStack_1c8;
  uStack_98 = uStack_1d0;
  uStack_108 = uStack_1d8;
  uStack_110 = uStack_1e0;
  uStack_f8 = uStack_1c8;
  uStack_100 = uStack_1d0;
  uStack_c0 = uStack_190;
  uStack_d8 = uStack_1a8;
  uStack_e0 = uStack_1b0;
  uStack_c8 = uStack_198;
  uStack_d0 = uStack_1a0;
  uStack_e8 = uStack_1b8;
  uStack_f0 = uStack_1c0;
  uStack_120 = uVar1;
  uStack_118 = uVar2;
  uStack_b8 = uVar1;
  uStack_b0 = uVar2;
  FUN_1000171f8(&uStack_120,auStack_248,0x1000c4528,&UNK_1000890e0);
  func_0x000100017240(&uStack_b8,0x1000c4528,&UNK_1000890e0);
  param_1[9] = uStack_d8;
  param_1[8] = uStack_e0;
  param_1[0xb] = uStack_c8;
  param_1[10] = uStack_d0;
  param_1[0xc] = uStack_c0;
  param_1[1] = uStack_118;
  *param_1 = uStack_120;
  param_1[3] = uStack_108;
  param_1[2] = uStack_110;
  param_1[5] = uStack_f8;
  param_1[4] = uStack_100;
  param_1[7] = uStack_e8;
  param_1[6] = uStack_f0;
  return;
}



/* Entry: 1000168e0; end: 100016af7;  */

void FUN_1000168e0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_1f0 [80];
  undefined1 *puStack_1a0;
  long lStack_198;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  long lStack_188;
  undefined1 *puStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0;
  __s9WidgetKit09AccessoryA10BackgroundVMa();
  lVar5 = *(long *)(lVar1 + -8);
  lVar3 = *(long *)(lVar5 + 0x40);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  uVar6 = lVar3 + 0xfU & 0xfffffffffffffff0;
  puVar2 = auStack_1f0 + -uVar6;
  __s9WidgetKit09AccessoryA10BackgroundVACycfC(puVar2);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar4 = (long)puVar2 - uVar6;
  lVar3 = lVar4;
  (**(code **)(lVar5 + 0x10))(lVar4,puVar2,lVar1);
  func_0x0001000171b4();
  __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(lVar4,lVar1,lVar3);
  (**(code **)(lVar5 + 8))(puVar2,lVar1);
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  _objc_retain();
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  lVar3 = param_4;
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&puStack_100,param_2,0,param_3,0,lVar3,lVar1);
  lStack_198 = 0;
  uStack_190 = 1;
  lStack_178 = lStack_f8;
  puStack_180 = puStack_100;
  lStack_168 = lStack_e8;
  lStack_170 = lStack_f0;
  lStack_158 = lStack_d8;
  lStack_160 = (long)puStack_e0;
  uStack_148 = 0;
  uStack_140 = 1;
  lStack_118 = lStack_e8;
  lStack_120 = lStack_f0;
  lStack_108 = lStack_d8;
  lStack_110 = (long)puStack_e0;
  lStack_128 = lStack_f8;
  puStack_130 = puStack_100;
  puStack_1a0 = puVar2;
  lStack_188 = param_4;
  puStack_150 = puVar2;
  lStack_138 = param_4;
  FUN_1000171f8(&puStack_1a0,&puStack_b0,0x1000c4538,&UNK_1000890e8);
  func_0x000100017240(&puStack_150,0x1000c4538,&UNK_1000890e8);
  lStack_88 = lStack_178;
  puStack_90 = puStack_180;
  lStack_78 = lStack_168;
  lStack_80 = lStack_170;
  lStack_68 = lStack_158;
  lStack_70 = lStack_160;
  lStack_d8 = lStack_178;
  puStack_e0 = puStack_180;
  lStack_c8 = lStack_168;
  lStack_d0 = lStack_170;
  lStack_b8 = lStack_158;
  lStack_c0 = lStack_160;
  lStack_f0 = CONCAT71(uStack_18f,uStack_190);
  lStack_a8 = lStack_198;
  puStack_b0 = puStack_1a0;
  lStack_98 = lStack_188;
  lStack_f8 = lStack_198;
  puStack_100 = puStack_1a0;
  lStack_e8 = lStack_188;
  *param_1 = lVar4;
  param_1[2] = lStack_198;
  param_1[1] = (long)puStack_1a0;
  param_1[10] = lStack_158;
  param_1[9] = lStack_160;
  param_1[8] = lStack_168;
  param_1[7] = lStack_170;
  param_1[6] = lStack_178;
  param_1[5] = (long)puStack_180;
  param_1[4] = lStack_188;
  param_1[3] = CONCAT71(uStack_18f,uStack_190);
  uStack_a0 = lStack_f0;
  _swift_retain(lVar4);
  FUN_1000171f8(&puStack_100,auStack_1f0,0x1000c4538,&UNK_1000890e8);
  func_0x000100017240(&puStack_b0,0x1000c4538,&UNK_1000890e8);
  _swift_release(lVar4);
  return;
}



/* Entry: 100016af8; end: 100016b2b;  */

void FUN_100016af8(undefined8 *param_1)

{
  char cVar1;
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  cVar1 = *(char *)(unaff_x20 + 1);
  *(char *)(param_1 + 1) = cVar1;
  if (cVar1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001000860e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_1000b15b0)();
    return;
  }
  if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100085f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_1000b10c8)();
    return;
  }
  return;
}



/* Entry: 100016b2c; end: 100016b4b;  */

void FUN_100016b2c(void)

{
  FUN_100017280();
                    /* WARNING: Could not recover jumptable at 0x00010008555c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI7AnyViewVyACxcAA0D0RzlufC_1000b08d0)();
  return;
}



/* Entry: 100016b4c; end: 100016b4f;  */

long FUN_100016b4c(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  code **ppcVar8;
  code **ppcVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  code **ppcStack_68;
  
  lVar1 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_90 + -extraout_x8;
  pcVar2 = (code *)0x1000c4500;
  func_0x0001000100d0(0x1000c4500,&UNK_1000890c0);
  lVar15 = *(long *)(pcVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar13 - extraout_x8_00;
  lVar1 = 0x1000c4508;
  func_0x0001000100d0(0x1000c4508,&UNK_1000890c8);
  lVar14 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar14 + 0x40));
  lVar11 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar10 = lVar11 - extraout_x12;
  lVar3 = 0x672d6172656d6163;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x672d6172656d6163,0xec00000074736f68);
  puVar4 = PTR__OBJC_CLASS___UIImage_1000c20c0;
  _objc_opt_self();
  func_0x000100086b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (puVar4 != (undefined *)0x0) {
    puVar5 = &UNK_1000b20a0;
    _swift_allocObject(&UNK_1000b20a0,0x18,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    pcStack_70 = FUN_10001715c;
    lStack_80 = lVar14;
    ppcStack_68 = (code **)puVar5;
    _objc_retain();
    puStack_78 = puVar4;
    __s21SnapchatWidgetsShared16DeeplinkBuildersO19buildCameraDeepLink10isLoggedIn11widgetShape10Foundation3URLVSgSb_SStFZ
              (puVar13,1,0x72616c7563726963,0xe800000000000000);
    pcVar6 = (code *)0x1000c4510;
    func_0x0001000100d0(0x1000c4510,&UNK_1000890d0);
    pcVar7 = pcVar6;
    lStack_88 = lVar15;
    FUN_100017164();
    __s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgF(lVar12,puVar13,pcVar6,pcVar7);
    func_0x000100017240(puVar13,0x1000c4330,&UNK_1000890b0);
    _swift_release(puVar5);
    ppcVar8 = &pcStack_70;
    pcStack_70 = pcVar6;
    ppcStack_68 = (code **)pcVar7;
    _swift_getOpaqueTypeConformance
              (ppcVar8,
               PTR___s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgFQOMQ_1000b09f0,1);
    __s7SwiftUI4ViewPAAE10unredactedQryF(lVar10,pcVar2,ppcVar8);
    (**(code **)(lStack_88 + 8))(lVar12,pcVar2);
    lVar3 = lStack_80;
    (**(code **)(lStack_80 + 0x10))(lVar11,lVar10,lVar1);
    ppcVar9 = &pcStack_70;
    pcStack_70 = pcVar2;
    ppcStack_68 = ppcVar8;
    _swift_getOpaqueTypeConformance
              (ppcVar9,PTR___s7SwiftUI4ViewPAAE10unredactedQryFQOMQ_1000b0710,1);
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(lVar11,lVar1,ppcVar9);
    _objc_release(puStack_78);
    (**(code **)(lVar3 + 8))(lVar10,lVar1);
    return lVar11;
  }
                    /* WARNING: Could not recover jumptable at 0x00010008555c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI7AnyViewVyACxcAA0D0RzlufC_1000b08d0)();
  return lVar3;
}



/* Entry: 100016b50; end: 100016cdb;  */

long FUN_100016b50(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&puStack_70 - extraout_x8;
  lVar2 = 0x1000c44f0;
  func_0x0001000100d0(0x1000c44f0,&UNK_1000890b8);
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar5 = lVar7 - extraout_x12;
  uVar3 = 0;
  __s21SnapchatWidgetsShared16DeeplinkBuildersO19buildCameraDeepLink10isLoggedIn11widgetShape10Foundation3URLVSgSb_SStFZ
            (lVar6,0,0x72616c7563726963,0xe800000000000000);
  FUN_100016e04();
  puVar1 = PTR___s21SnapchatWidgetsShared23LockScreenLoginCircularVN_1000b0ed8;
  __s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgF
            (lVar5,lVar6,PTR___s21SnapchatWidgetsShared23LockScreenLoginCircularVN_1000b0ed8,uVar3);
  func_0x000100017240(lVar6,0x1000c4330,&UNK_1000890b0);
  (**(code **)(lVar8 + 0x10))(lVar7,lVar5,lVar2);
  puStack_70 = puVar1;
  ppuVar4 = &puStack_70;
  uStack_68 = uVar3;
  _swift_getOpaqueTypeConformance
            (ppuVar4,PTR___s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgFQOMQ_1000b09f0,
             1);
  __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(lVar7,lVar2,ppuVar4);
  (**(code **)(lVar8 + 8))(lVar5,lVar2);
  return lVar7;
}



/* Entry: 100016cdc; end: 100016cff;  */

void FUN_100016cdc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100016d00();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100016d00; end: 100016d3f;  */

void FUN_100016d00(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c44e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008905c;
  _swift_getWitnessTable(&UNK_10008905c,&UNK_1000b2120);
  puRam00000001000c44e0 = puVar1;
  return;
}



/* Entry: 100016d40; end: 100016d7f;  */

void FUN_100016d40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_100016d80();
  uStack_30 = param_2;
  uStack_28 = param_1;
  _swift_getOpaqueTypeConformance
            (&uStack_30,PTR___s21SnapchatWidgetsShared17SCWidgetStateViewPAAE4bodyQrvpQOMQ_1000b0e98
             ,1);
  return;
}



/* Entry: 100016d80; end: 100016dbf;  */

void FUN_100016d80(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c44e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100089040;
  _swift_getWitnessTable(&DAT_100089040,&UNK_1000b2120);
  puRam00000001000c44e8 = puVar1;
  return;
}



/* Entry: 100016dc0; end: 100016dcb;  */

void FUN_100016dc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 100016dcc; end: 100016e03;  */

void FUN_100016dcc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_100016d80();
                    /* WARNING: Could not recover jumptable at 0x000100084f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s21SnapchatWidgetsShared17SCWidgetStateViewPAAE4bodyQrvg_1000b0e90)
            (param_1,param_2,uVar1);
  return;
}



/* Entry: 100016e04; end: 100016e43;  */

void FUN_100016e04(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c44f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s21SnapchatWidgetsShared23LockScreenLoginCircularV7SwiftUI4ViewAAMc_1000b0ec8;
  _swift_getWitnessTable
            (PTR___s21SnapchatWidgetsShared23LockScreenLoginCircularV7SwiftUI4ViewAAMc_1000b0ec8,
             PTR___s21SnapchatWidgetsShared23LockScreenLoginCircularVN_1000b0ed8);
  puRam00000001000c44f8 = puVar1;
  return;
}



/* Entry: 100016e44; end: 100017137;  */

long FUN_100016e44(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  code **ppcVar8;
  code **ppcVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  code **ppcStack_68;
  
  lVar1 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_90 + -extraout_x8;
  pcVar2 = (code *)0x1000c4500;
  func_0x0001000100d0(0x1000c4500,&UNK_1000890c0);
  lVar15 = *(long *)(pcVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar13 - extraout_x8_00;
  lVar1 = 0x1000c4508;
  func_0x0001000100d0(0x1000c4508,&UNK_1000890c8);
  lVar14 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar14 + 0x40));
  lVar11 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar10 = lVar11 - extraout_x12;
  lVar3 = 0x672d6172656d6163;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x672d6172656d6163,0xec00000074736f68);
  puVar4 = PTR__OBJC_CLASS___UIImage_1000c20c0;
  _objc_opt_self();
  func_0x000100086b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (puVar4 != (undefined *)0x0) {
    puVar5 = &UNK_1000b20a0;
    _swift_allocObject(&UNK_1000b20a0,0x18,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    pcStack_70 = FUN_10001715c;
    lStack_80 = lVar14;
    ppcStack_68 = (code **)puVar5;
    _objc_retain();
    puStack_78 = puVar4;
    __s21SnapchatWidgetsShared16DeeplinkBuildersO19buildCameraDeepLink10isLoggedIn11widgetShape10Foundation3URLVSgSb_SStFZ
              (puVar13,1,0x72616c7563726963,0xe800000000000000);
    pcVar6 = (code *)0x1000c4510;
    func_0x0001000100d0(0x1000c4510,&UNK_1000890d0);
    pcVar7 = pcVar6;
    lStack_88 = lVar15;
    FUN_100017164();
    __s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgF(lVar12,puVar13,pcVar6,pcVar7);
    func_0x000100017240(puVar13,0x1000c4330,&UNK_1000890b0);
    _swift_release(puVar5);
    ppcVar8 = &pcStack_70;
    pcStack_70 = pcVar6;
    ppcStack_68 = (code **)pcVar7;
    _swift_getOpaqueTypeConformance
              (ppcVar8,
               PTR___s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgFQOMQ_1000b09f0,1);
    __s7SwiftUI4ViewPAAE10unredactedQryF(lVar10,pcVar2,ppcVar8);
    (**(code **)(lStack_88 + 8))(lVar12,pcVar2);
    lVar3 = lStack_80;
    (**(code **)(lStack_80 + 0x10))(lVar11,lVar10,lVar1);
    ppcVar9 = &pcStack_70;
    pcStack_70 = pcVar2;
    ppcStack_68 = ppcVar8;
    _swift_getOpaqueTypeConformance
              (ppcVar9,PTR___s7SwiftUI4ViewPAAE10unredactedQryFQOMQ_1000b0710,1);
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(lVar11,lVar1,ppcVar9);
    _objc_release(puStack_78);
    (**(code **)(lVar3 + 8))(lVar10,lVar1);
    return lVar11;
  }
                    /* WARNING: Could not recover jumptable at 0x00010008555c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI7AnyViewVyACxcAA0D0RzlufC_1000b08d0)();
  return lVar3;
}



/* Entry: 100017138; end: 10001715b;  */

void FUN_100017138(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10001715c; end: 100017163;  */

void FUN_10001715c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_248 [104];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = param_2;
  uVar2 = uVar3;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  FUN_1000168e0(&uStack_b8,uVar3,param_2);
  uStack_1b8 = uStack_90;
  uStack_1c0 = uStack_98;
  uStack_1a8 = uStack_80;
  uStack_1b0 = uStack_88;
  uStack_198 = uStack_70;
  uStack_1a0 = uStack_78;
  uStack_190 = uStack_68;
  uStack_1d8 = uStack_b0;
  uStack_1e0 = uStack_b8;
  uStack_1c8 = uStack_a0;
  uStack_1d0 = uStack_a8;
  uStack_130 = uStack_68;
  uStack_158 = uStack_90;
  uStack_160 = uStack_98;
  uStack_148 = uStack_80;
  uStack_150 = uStack_88;
  uStack_138 = uStack_70;
  uStack_140 = uStack_78;
  uStack_178 = uStack_b0;
  uStack_180 = uStack_b8;
  uStack_168 = uStack_a0;
  uStack_170 = uStack_a8;
  FUN_1000171f8(&uStack_1e0,&uStack_120,0x1000c4520,&UNK_1000890d8);
  func_0x000100017240(&uStack_180,0x1000c4520,&UNK_1000890d8);
  uStack_80 = uStack_1b8;
  uStack_88 = uStack_1c0;
  uStack_70 = uStack_1a8;
  uStack_78 = uStack_1b0;
  uStack_60 = uStack_198;
  uStack_68 = uStack_1a0;
  uStack_58 = uStack_190;
  uStack_a0 = uStack_1d8;
  uStack_a8 = uStack_1e0;
  uStack_90 = uStack_1c8;
  uStack_98 = uStack_1d0;
  uStack_108 = uStack_1d8;
  uStack_110 = uStack_1e0;
  uStack_f8 = uStack_1c8;
  uStack_100 = uStack_1d0;
  uStack_c0 = uStack_190;
  uStack_d8 = uStack_1a8;
  uStack_e0 = uStack_1b0;
  uStack_c8 = uStack_198;
  uStack_d0 = uStack_1a0;
  uStack_e8 = uStack_1b8;
  uStack_f0 = uStack_1c0;
  uStack_120 = uVar1;
  uStack_118 = uVar2;
  uStack_b8 = uVar1;
  uStack_b0 = uVar2;
  FUN_1000171f8(&uStack_120,auStack_248,0x1000c4528,&UNK_1000890e0);
  func_0x000100017240(&uStack_b8,0x1000c4528,&UNK_1000890e0);
  param_1[9] = uStack_d8;
  param_1[8] = uStack_e0;
  param_1[0xb] = uStack_c8;
  param_1[10] = uStack_d0;
  param_1[0xc] = uStack_c0;
  param_1[1] = uStack_118;
  *param_1 = uStack_120;
  param_1[3] = uStack_108;
  param_1[2] = uStack_110;
  param_1[5] = uStack_f8;
  param_1[4] = uStack_100;
  param_1[7] = uStack_e8;
  param_1[6] = uStack_f0;
  return;
}



/* Entry: 100017164; end: 1000171f7;  */

void FUN_100017164(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c4518 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c4510;
  func_0x000100010120(0x1000c4510,&UNK_1000890d0);
  puVar2 = PTR___s7SwiftUI14GeometryReaderVyxGAA4ViewAAMc_1000b0370;
  _swift_getWitnessTable(PTR___s7SwiftUI14GeometryReaderVyxGAA4ViewAAMc_1000b0370,uVar1);
  puRam00000001000c4518 = puVar2;
  return;
}



/* Entry: 1000171f8; end: 10001727f;  */

undefined8 FUN_1000171f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000100d0(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 100017280; end: 1000172bf;  */

void FUN_100017280(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c4540 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100089140;
  _swift_getWitnessTable(&UNK_100089140,&UNK_1000b21a0);
  puRam00000001000c4540 = puVar1;
  return;
}



/* Entry: 1000172c0; end: 10001730b;  */

void FUN_1000172c0(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001000860e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_1000b15b0)();
    return;
  }
  if (param_2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100085f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_1000b10c8)();
    return;
  }
  return;
}



/* Entry: 10001730c; end: 1000173b7;  */

undefined8 * FUN_10001730c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_1000172c0(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  return param_1;
}



/* Entry: 1000173b8; end: 1000173cb;  */

void FUN_1000173b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Entry: 1000173cc; end: 100017413;  */

undefined8 * FUN_1000173cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x0001000172f0(uVar3,uVar2);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  return param_1;
}



/* Entry: 100017414; end: 1000174bb;  */

int FUN_100017414(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 10) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)((long)param_1 + 9)) {
    uVar1 = *(byte *)((long)param_1 + 9) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1000174bc; end: 1000174df;  */

void FUN_1000174bc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100016d80();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1000174e0; end: 100017507;  */

undefined8 * FUN_1000174e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_1000172c0(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  return param_1;
}



/* Entry: 100017508; end: 10001792f;  */

void FUN_100017508(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long alStack_d0 [3];
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  lVar2 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)alStack_d0 - extraout_x8;
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar11 + 0x40));
  lVar13 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x672d6172656d6163;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x672d6172656d6163,0xec00000074736f68);
  puVar3 = PTR__OBJC_CLASS___UIImage_1000c20c0;
  _objc_opt_self();
  func_0x000100086b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 == (undefined *)0x0) {
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC();
  }
  else {
    lVar2 = 0x1000c4548;
    func_0x0001000100d0(0x1000c4548,&UNK_100089198);
    lStack_90 = *(long *)(lVar2 + -8);
    uStack_a0 = *(undefined8 *)(lStack_90 + 0x40);
    lStack_88 = lVar2;
    lStack_80 = lVar13;
    (*(code *)PTR____chkstk_darwin_1000b0c68)();
    uStack_98 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
    lVar9 = lVar13 - uStack_98;
    lVar4 = 0x1000c4550;
    lStack_b0 = lVar9;
    func_0x0001000100d0(0x1000c4550,&UNK_1000891a0);
    alStack_d0[2] = *(long *)(lVar4 + -8);
    lStack_a8 = lVar9;
    (*(code *)PTR____chkstk_darwin_1000b0c68)
              (*(long *)(alStack_d0[2] + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar9 = lVar9 - extraout_x8_01;
    lVar2 = 0x1000c4558;
    func_0x0001000100d0(0x1000c4558,&UNK_1000891a8);
    lVar5 = lVar2;
    alStack_d0[1] = lVar9;
    (*(code *)PTR____chkstk_darwin_1000b0c68)
              (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    plVar10 = (long *)(lVar9 - extraout_x8_02);
    plStack_78 = param_1;
    __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
    alStack_d0[0] = lVar5;
    _objc_retain();
    puStack_b8 = puVar3;
    __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
    (**(code **)(lVar11 + 0x68))
              (lVar13,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8
               ,lVar1);
    lVar6 = lVar13;
    __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
              (0,0,0,0,lVar13,puVar3);
    _swift_release(puVar3);
    (**(code **)(lVar11 + 8))();
    lVar5 = (long)plVar10 + (long)*(int *)(lVar2 + 0x24);
    __s9WidgetKit09AccessoryA10BackgroundVACycfC(lVar5);
    __s7SwiftUI9AlignmentV6centerACvgZ();
    lVar11 = 0x1000c4560;
    func_0x0001000100d0(0x1000c4560,&UNK_1000891b0);
    plVar8 = (long *)(lVar5 + *(int *)(lVar11 + 0x24));
    *plVar8 = lVar13;
    plVar8[1] = lVar1;
    *plVar10 = alStack_d0[0];
    plVar10[1] = 0;
    *(undefined1 *)(plVar10 + 2) = 1;
    plVar10[3] = lVar6;
    uVar7 = 1;
    __s21SnapchatWidgetsShared16DeeplinkBuildersO19buildCameraDeepLink10isLoggedIn11widgetShape10Foundation3URLVSgSb_SStFZ
              (lVar12,1,0x72616c7563726963,0xe800000000000000);
    FUN_100017940();
    __s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgF(lVar9,lVar12,lVar2,uVar7);
    func_0x000100017a3c(lVar12,0x1000c4330,&UNK_1000890b0);
    func_0x000100017a3c(plVar10,0x1000c4558,&UNK_1000891a8);
    plVar8 = &lStack_70;
    lStack_70 = lVar2;
    plStack_68 = (long *)uVar7;
    _swift_getOpaqueTypeConformance
              (plVar8,PTR___s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgFQOMQ_1000b09f0
               ,1);
    lVar1 = lStack_b0;
    __s7SwiftUI4ViewPAAE10unredactedQryF(lStack_b0,lVar4,plVar8);
    (**(code **)(alStack_d0[2] + 8))(lVar9,lVar4);
    lVar2 = lStack_a8;
    (*(code *)PTR____chkstk_darwin_1000b0c68)();
    lVar11 = lStack_88;
    lVar13 = lStack_90;
    lVar2 = lVar2 - uStack_98;
    (**(code **)(lStack_90 + 0x10))(lVar2,lVar1,lStack_88);
    plVar10 = &lStack_70;
    lStack_70 = lVar4;
    plStack_68 = plVar8;
    _swift_getOpaqueTypeConformance
              (plVar10,PTR___s7SwiftUI4ViewPAAE10unredactedQryFQOMQ_1000b0710,1);
    param_1 = plStack_78;
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(lVar2,lVar11,plVar10);
    _objc_release(puStack_b8);
    (**(code **)(lVar13 + 8))(lVar1,lVar11);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 100017930; end: 10001793f;  */

void FUN_100017930(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 100017940; end: 100017a7b;  */

void FUN_100017940(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c4568 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c4558;
  func_0x000100010120(0x1000c4558,&UNK_1000891a8);
  uVar2 = 0x1000c4570;
  func_0x0001000179f8(0x1000c4570,0x1000c4578,&UNK_1000891b8,
                      PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_1000b0888);
  uVar3 = 0x1000c4580;
  func_0x0001000179f8(0x1000c4580,0x1000c4560,&UNK_1000891b0,
                      PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_1000b0570);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c4568 = puVar4;
  return;
}



/* Entry: 100017a7c; end: 100017aa7;  */

undefined * FUN_100017a7c(void)

{
  return PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8;
}



/* Entry: 100017aa8; end: 100017ecf;  */

void FUN_100017aa8(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined8 auStack_e0 [2];
  long lStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  iVar2 = 2;
  FUN_1000806c0(2,0x10,0,0);
  if (iVar2 != 0) {
    lVar14 = 0x1000c4588;
    func_0x0001000100d0(0x1000c4588,&UNK_100089218);
    lStack_a0 = *(long *)(lVar14 + -8);
    lStack_a8 = lVar14;
    puStack_98 = (undefined1 *)&lStack_d0;
    (*(code *)PTR____chkstk_darwin_1000b0c68)
              (*(long *)(lStack_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar18 = (long)&lStack_d0 - extraout_x8;
    puVar3 = (undefined8 *)0x1000c4590;
    func_0x0001000100d0(0x1000c4590,&UNK_100089220);
    lStack_c0 = puVar3[-1];
    puStack_c8 = puVar3;
    lStack_b8 = lVar18;
    (*(code *)PTR____chkstk_darwin_1000b0c68)
              (*(long *)(lStack_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar19 = lVar18 - extraout_x8_00;
    puVar3 = (undefined8 *)0x1000c4598;
    func_0x0001000100d0(0x1000c4598,&UNK_100089228);
    lVar15 = puVar3[-1];
    puVar7 = puVar3;
    lStack_d0 = lVar19;
    (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar14 = lVar19 - extraout_x8_01;
    __s23HomeScreenWidgetDefines0C11IdentifiersO010cameraLockB4KindSSvau();
    uVar11 = *puVar7;
    uVar12 = puVar7[1];
    uVar4 = 0;
    uStack_b0 = param_1;
    FUN_10001ae7c();
    FUN_100017f84();
    func_0x000100017fc8();
    _swift_bridgeObjectRetain(uVar12);
    *(undefined8 *)(lVar14 + -0x10) = uVar4;
    __s9WidgetKit19StaticConfigurationV4kind8provider7contentACyxGSS_qd__x5EntryQyd__ctcAA16TimelineProviderRd__lufC
              (lVar14,uVar11,uVar12);
    puVar5 = PTR__OBJC_CLASS___NSBundle_1000c2230;
    _objc_opt_self();
    puVar6 = puVar5;
    func_0x000100086fe0();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)(lVar14 + -0x10) = 0xe600000000000000;
    puVar7 = (undefined8 *)0x6172656d6163;
    uVar11 = 0xe600000000000000;
    __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
              (0x6172656d6163,0xe600000000000000,0,0,puVar6,0,0xe000000000000000);
    _objc_release();
    puStack_90 = puVar7;
    puStack_88 = (undefined *)uVar11;
    func_0x000100018008();
    puVar8 = puVar6;
    FUN_100010174();
    puVar1 = PTR___sSSN_1000b1180;
    __s7SwiftUI19WidgetConfigurationP0C3KitE24configurationDisplayNameyQrqd__SyRd__lF
              (lVar19,&puStack_90,puVar3,PTR___sSSN_1000b1180,puVar6,puVar8);
    _swift_bridgeObjectRelease(uVar11);
    (**(code **)(lVar15 + 8))(lVar14,puVar3);
    lVar14 = lStack_d0;
    func_0x000100086fe0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)(lVar14 + -0x10) = 0x800000010009d410;
    uVar11 = 0x645f6172656d6163;
    uVar12 = 0xeb00000000637365;
    __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
              (0x645f6172656d6163,0xeb00000000637365,0,0,puVar5,0,0xe000000000000000,
               0xd000000000000018);
    _objc_release(puVar5);
    puStack_88 = puVar1;
    ppuVar9 = &puStack_90;
    puStack_90 = puVar3;
    ppuStack_80 = (undefined8 **)puVar6;
    puStack_78 = puVar8;
    uStack_70 = uVar11;
    uStack_68 = uVar12;
    _swift_getOpaqueTypeConformance
              (ppuVar9,
               PTR___s7SwiftUI19WidgetConfigurationP0C3KitE24configurationDisplayNameyQrqd__SyRd__lFQOMQ_1000b09b0
               ,1);
    puVar3 = puStack_c8;
    __s7SwiftUI19WidgetConfigurationP0C3KitE11descriptionyQrqd__SyRd__lF
              (lVar18,&uStack_70,puStack_c8,puVar1,ppuVar9,puVar8);
    _swift_bridgeObjectRelease(uVar12);
    (**(code **)(lStack_c0 + 8))(lVar19,puVar3);
    lVar14 = 0x1000c41c8;
    func_0x0001000100d0(0x1000c41c8,&UNK_100089230);
    lVar19 = 0;
    __s9WidgetKit0A6FamilyOMa();
    lVar16 = *(long *)(lVar19 + -8);
    lVar21 = *(long *)(lVar16 + 0x48);
    uVar13 = (ulong)*(byte *)(lVar16 + 0x50);
    uVar20 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
    _swift_allocObject(lVar14,uVar20 + lVar21 * 2,uVar13 | 7);
    *(undefined8 *)(lVar14 + 0x18) = 4;
    *(undefined8 *)(lVar14 + 0x10) = 2;
    lVar15 = lVar14 + uVar20;
    pcVar17 = *(code **)(lVar16 + 0x68);
    (*pcVar17)(lVar15,*(undefined4 *)
                       PTR___s9WidgetKit0A6FamilyO17accessoryCircularyA2CmFWC_1000b0a58,lVar19);
    (*pcVar17)(lVar15 + lVar21,
               *(undefined4 *)PTR___s9WidgetKit0A6FamilyO20accessoryRectangularyA2CmFWC_1000b0a60,
               lVar19);
    puStack_90 = puVar3;
    puStack_88 = puVar1;
    ppuVar10 = &puStack_90;
    ppuStack_80 = ppuVar9;
    puStack_78 = puVar8;
    _swift_getOpaqueTypeConformance
              (ppuVar10,
               PTR___s7SwiftUI19WidgetConfigurationP0C3KitE11descriptionyQrqd__SyRd__lFQOMQ_1000b0980
               ,1);
    lVar15 = lStack_a8;
    __s7SwiftUI19WidgetConfigurationP0C3KitE17supportedFamiliesyQrSayAD0C6FamilyOGF
              (uStack_b0,lVar14,lStack_a8,ppuVar10);
    _swift_release(lVar14);
    (**(code **)(lStack_a0 + 8))(lVar18,lVar15);
  }
  return;
}



/* Entry: 100017ed0; end: 100017f7b;  */

void FUN_100017ed0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar2 = 0;
  FUN_10001ae7c();
  FUN_100018058(param_2,(long)param_1 + (long)*(int *)(lVar2 + 0x18));
  puVar3 = &UNK_100089238;
  _swift_getKeyPath();
  *param_1 = puVar3;
  uVar4 = 0x1000c41d0;
  func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
  _swift_storeEnumTagMultiPayload(param_1,uVar4,0);
  puVar3 = &UNK_100089270;
  _swift_getKeyPath();
  iVar1 = *(int *)(lVar2 + 0x14);
  *(undefined **)((long)param_1 + (long)iVar1) = puVar3;
  uVar4 = 0x1000c41d8;
  func_0x0001000100d0(0x1000c41d8,&UNK_1000892a0);
                    /* WARNING: Could not recover jumptable at 0x000100086288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagMultiPayload_1000b16d0)((long)param_1 + (long)iVar1,uVar4,0);
  return;
}



/* Entry: 100017f7c; end: 100017f83;  */

void FUN_100017f7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100084f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ_1000b0ee0)
            ();
  return;
}



/* Entry: 100017f84; end: 100018057;  */

void FUN_100017f84(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c45a0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10001ae7c(0xff);
  puVar2 = &UNK_100089614;
  _swift_getWitnessTable(&UNK_100089614,uVar1);
  puRam00000001000c45a0 = puVar2;
  return;
}



/* Entry: 100018058; end: 10001809b;  */

undefined8 FUN_100018058(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1000185d4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10001809c; end: 1000180a7;  */

void FUN_10001809c(void)

{
  __s7SwiftUI17EnvironmentValuesV9WidgetKitE12widgetFamilyAD0eH0Ovg();
  return;
}



/* Entry: 1000180a8; end: 1000180ef;  */

undefined * FUN_1000180a8(void)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = 2;
  FUN_1000806c0(2,0x10,0,0);
  if (iVar1 != 0) {
    puVar2 = puRam00000001000c45b8;
    if (puRam00000001000c45b8 == (undefined *)0x0 || ((ulong)puRam00000001000c45b8 & 1) != 0) {
      puVar2 = &UNK_100091f42;
      _swift_getTypeByMangledNameInContext(&UNK_100091f42,0x2e,0,0);
    }
    puRam00000001000c45b8 = puVar2;
    return puVar2;
  }
  return PTR___s7SwiftUI24EmptyWidgetConfigurationVN_1000b05e0;
}



/* Entry: 1000180f0; end: 1000181f3;  */

void FUN_1000180f0(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puVar8 = &uStack_60;
  puVar9 = &uStack_60;
  iVar2 = 2;
  FUN_1000806c0(2,0x10,0,0);
  if (iVar2 != 0) {
    uVar3 = 0x1000c4588;
    func_0x000100010120(0x1000c4588,&UNK_100089218);
    uVar4 = 0x1000c4590;
    func_0x000100010120(0x1000c4590,&UNK_100089220);
    uVar5 = 0x1000c4598;
    func_0x000100010120(0x1000c4598,&UNK_100089228);
    uVar6 = uVar5;
    func_0x000100018008();
    uVar7 = uVar6;
    FUN_100010174();
    puVar1 = PTR___sSSN_1000b1180;
    puStack_58 = PTR___sSSN_1000b1180;
    uStack_60 = uVar5;
    puStack_50 = (undefined1 *)uVar6;
    uStack_48 = uVar7;
    _swift_getOpaqueTypeConformance
              (&uStack_60,
               PTR___s7SwiftUI19WidgetConfigurationP0C3KitE24configurationDisplayNameyQrqd__SyRd__lFQOMQ_1000b09b0
               ,1);
    puStack_58 = puVar1;
    uStack_60 = uVar4;
    puStack_50 = (undefined1 *)puVar8;
    uStack_48 = uVar7;
    _swift_getOpaqueTypeConformance
              (&uStack_60,
               PTR___s7SwiftUI19WidgetConfigurationP0C3KitE11descriptionyQrqd__SyRd__lFQOMQ_1000b0980
               ,1);
    uStack_60 = uVar3;
    puStack_58 = (undefined *)puVar9;
    _swift_getOpaqueTypeConformance
              (&uStack_60,
               PTR___s7SwiftUI19WidgetConfigurationP0C3KitE17supportedFamiliesyQrSayAD0C6FamilyOGFQOMQ_1000b0990
               ,1);
  }
  return;
}



/* Entry: 1000181f4; end: 100018297;  */

long * FUN_1000181f4(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    lVar5 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar7 = *puVar2;
    uVar4 = *(undefined1 *)(puVar2 + 1);
    FUN_1000172c0(uVar7,uVar4);
    *puVar1 = uVar7;
    *(undefined1 *)(puVar1 + 1) = uVar4;
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar6 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 100018298; end: 1000182e3;  */

void FUN_100018298(long param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x14));
  cVar2 = *(char *)(puVar1 + 1);
  if (cVar2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001000860d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_1000b15a8)(*puVar1);
    return;
  }
  if (cVar2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000b10c0)();
    return;
  }
  return;
}



/* Entry: 1000182e4; end: 1000184c3;  */

long FUN_1000182e4(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar5 = *puVar2;
  uVar3 = *(undefined1 *)(puVar2 + 1);
  FUN_1000172c0(uVar5,uVar3);
  *puVar1 = uVar5;
  *(undefined1 *)(puVar1 + 1) = uVar3;
  return param_1;
}



/* Entry: 1000184c4; end: 1000184cf;  */

void FUN_1000184c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_1000b15c8)();
  return;
}



/* Entry: 1000184d0; end: 10001854b;  */

ulong FUN_1000184d0(ulong param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  if ((int)param_2 == *(int *)(*(long *)(lVar2 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x000100018520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,param_2,lVar2);
    return param_1;
  }
  uVar3 = (uint)*(byte *)(param_1 + (long)*(int *)(param_3 + 0x14) + 8);
  uVar1 = 0;
  if (2 < uVar3) {
    uVar1 = (uVar3 ^ 0xff) + 1;
  }
  return (ulong)uVar1;
}



/* Entry: 10001854c; end: 100018557;  */

void FUN_10001854c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_1000b16d8)();
  return;
}



/* Entry: 100018558; end: 1000185d3;  */

void FUN_100018558(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001000185b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
    return;
  }
  *(char *)(param_1 + *(int *)(param_4 + 0x14) + 8) = -(char)param_2;
  return;
}



/* Entry: 1000185d4; end: 10001860b;  */

void FUN_1000185d4(undefined8 param_1)

{
  if (lRam00000001000c4618 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10008f4e8);
  return;
}



/* Entry: 10001860c; end: 10001867b;  */

void FUN_10001860c(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_1000892d0;
    _swift_initStructMetadata(param_1,0x100,2,&lStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 10001867c; end: 10001868b;  */

undefined1  [16] FUN_10001867c(void)

{
  return ZEXT816(0x1000b2258);
}



/* Entry: 10001868c; end: 1000186af;  */

void FUN_10001868c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000100017fc8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1000186b0; end: 1000186cb;  */

void FUN_1000186b0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x14));
  *param_1 = *puVar1;
  cVar2 = *(char *)(puVar1 + 1);
  *(char *)(param_1 + 1) = cVar2;
  if (cVar2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001000860e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_1000b15b0)();
    return;
  }
  if (cVar2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100085f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_1000b10c8)();
    return;
  }
  return;
}



/* Entry: 1000186cc; end: 100018703;  */

void FUN_1000186cc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x000100018700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1);
  return;
}



/* Entry: 100018704; end: 100018707;  */

void FUN_100018704(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010008567c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s9WidgetKit13TimelineEntryPAAE9relevanceAA0cD9RelevanceVSgvg_1000b0a98)();
  return;
}



/* Entry: 100018708; end: 10001872b;  */

void FUN_100018708(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10001872c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10001872c; end: 10001876f;  */

void FUN_10001872c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c4670 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1000185d4(0xff);
  puVar2 = &UNK_100089344;
  _swift_getWitnessTable(&UNK_100089344,uVar1);
  puRam00000001000c4670 = puVar2;
  return;
}



/* Entry: 100018770; end: 100018773;  */

void FUN_100018770(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c4670 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1000185d4(0xff);
  puVar2 = &UNK_100089344;
  _swift_getWitnessTable(&UNK_100089344,uVar1);
  puRam00000001000c4670 = puVar2;
  return;
}



/* Entry: 100018774; end: 1000187cb;  */

void FUN_100018774(long param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  long lVar2;
  
  __s21SnapchatWidgetsShared19SCTimelineProvidingPAAE14isUserLoggedInSbvg
            (param_3,&PTR_DAT_1000b2268);
  __s10Foundation4DateVACycfC(param_1);
  lVar2 = 0;
  FUN_1000185d4();
  puVar1 = (ulong *)(param_1 + *(int *)(lVar2 + 0x14));
  *puVar1 = param_3 & 1;
  *(undefined1 *)(puVar1 + 1) = 2;
  return;
}



/* Entry: 1000187cc; end: 1000187db;  */

void FUN_1000187cc(undefined8 param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  long extraout_x8;
  undefined1 *puVar6;
  
  lVar2 = 0;
  FUN_1000185d4(0,param_3);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &UNK_1000b2258;
  __s21SnapchatWidgetsShared19SCTimelineProvidingPAAE14isUserLoggedInSbvg
            (&UNK_1000b2258,&PTR_DAT_1000b2268);
  puVar4 = puVar3;
  __s10Foundation4DateVACycfC(puVar6);
  if (((ulong)puVar3 & 1) == 0) {
    puVar4 = (undefined *)0x0;
    uVar5 = 2;
  }
  else {
    FUN_100018884();
    uVar5 = 0;
  }
  iVar1 = *(int *)(lVar2 + 0x14);
  *(undefined **)(puVar6 + iVar1) = puVar4;
  *(undefined1 *)((long)(puVar6 + iVar1) + 8) = uVar5;
  (*param_2)(puVar6);
  FUN_100018c20(puVar6);
  return;
}



/* Entry: 1000187dc; end: 100018847;  */

void FUN_1000187dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___s9WidgetKit16TimelineProviderPAAE9relevanceAA0A9RelevanceVyytGyYaFTu_1000b0aa8
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100018848;
                    /* WARNING: Could not recover jumptable at 0x000100085688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s9WidgetKit16TimelineProviderPAAE9relevanceAA0A9RelevanceVyytGyYaF_1000b0aa0)
            (plVar1,param_1,param_2,param_3);
  return;
}



/* Entry: 100018848; end: 100018883;  */

void FUN_100018848(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100018880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100018884; end: 100018a57;  */

undefined * FUN_100018884(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  __s21SnapchatWidgetsShared12AppGroupDataO17loadCurrentUserIdSSSgyFZ();
  lVar3 = 0;
  if (param_2 != 0) {
    lVar3 = param_1;
  }
  lVar4 = -0x2000000000000000;
  if (param_2 != 0) {
    lVar4 = param_2;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_1000b7460;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
            (&PTR____CFConstantStringClassReference_1000b7460);
  ppuVar2 = &PTR____CFConstantStringClassReference_1000b7440;
  lVar6 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
            (&PTR____CFConstantStringClassReference_1000b7440);
  lVar7 = lVar4;
  __s21SnapchatWidgetsShared12AppGroupDataO04fileF06userId13directoryName8filenameSo6NSDataCSgSS_S2StFZ
            (lVar3,lVar4,ppuVar1,param_2,ppuVar2,lVar6);
  _swift_bridgeObjectRelease(lVar4);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(lVar6);
  puVar5 = (undefined *)0x0;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    _objc_retain(lVar3);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(lVar3);
    _objc_release(lVar4);
    puVar5 = PTR__OBJC_CLASS___UIImage_1000c20c0;
    _objc_allocWithZone(PTR__OBJC_CLASS___UIImage_1000c20c0);
    lVar6 = lVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar3,lVar7);
    func_0x000100086ca0(puVar5);
    _objc_release(lVar6);
    func_0x000100018c5c(lVar3,lVar7);
    _objc_release(lVar4);
  }
  return puVar5;
}



/* Entry: 100018a58; end: 100018c1f;  */

void FUN_100018a58(undefined8 param_1,code *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar2 = 0;
  __s9WidgetKit20TimelineReloadPolicyVMa();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar9 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x1000c4678;
  func_0x0001000100d0(0x1000c4678,&UNK_1000893e8);
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)puVar9 - extraout_x8_00;
  lVar3 = 0;
  FUN_1000185d4();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &UNK_1000b2258;
  __s21SnapchatWidgetsShared19SCTimelineProvidingPAAE14isUserLoggedInSbvg
            (&UNK_1000b2258,&PTR_DAT_1000b2268);
  puVar5 = puVar4;
  __s10Foundation4DateVACycfC(lVar11);
  if (((ulong)puVar4 & 1) == 0) {
    puVar5 = (undefined *)0x0;
    uVar7 = 2;
  }
  else {
    FUN_100018884();
    uVar7 = 0;
  }
  puVar1 = (undefined8 *)(lVar11 + *(int *)(lVar3 + 0x14));
  *puVar1 = puVar5;
  *(undefined1 *)(puVar1 + 1) = uVar7;
  lVar6 = 0x1000c4680;
  func_0x0001000100d0(0x1000c4680,&UNK_1000893f0);
  uVar8 = (ulong)*(byte *)(lVar13 + 0x50);
  _swift_allocObject();
  *(undefined8 *)(lVar6 + 0x18) = 2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  lVar13 = lVar11;
  FUN_100018058(lVar11,lVar6 + (uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff)));
  __s9WidgetKit20TimelineReloadPolicyV5neverACvgZ(puVar9);
  FUN_10001872c();
  __s9WidgetKit8TimelineV7entries6policyACyxGSayxG_AA0C12ReloadPolicyVtcfC
            (lVar10,lVar6,puVar9,lVar3,lVar13);
  (*param_2)(lVar10);
  (**(code **)(lVar12 + 8))(lVar10,lVar2);
  FUN_100018c20(lVar11);
  return;
}



/* Entry: 100018c20; end: 100018c9b;  */

undefined8 FUN_100018c20(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1000185d4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100018c9c; end: 100018db7;  */

void FUN_100018c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  long lStack_48;
  
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  puVar1 = PTR__OBJC_CLASS___UIImage_1000c20c0;
  _objc_opt_self();
  func_0x000100086b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar1 != (undefined *)0x0) {
    _swift_allocObject(param_5,0x28,7);
    *(undefined8 *)(param_5 + 0x10) = param_1;
    *(char *)(param_5 + 0x18) = (char)param_2;
    *(byte *)(param_5 + 0x19) = (byte)((ulong)param_2 >> 8) & 1;
    *(undefined **)(param_5 + 0x20) = puVar1;
    uStack_50 = param_6;
    lStack_48 = param_5;
    FUN_1000172c0(param_1,param_2);
    uVar2 = 0x1000c46f8;
    func_0x0001000100d0(0x1000c46f8,&UNK_1000894c0);
    uVar3 = 0x1000c4700;
    FUN_100019d8c(0x1000c4700,0x1000c46f8,&UNK_1000894c0);
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(&uStack_50,uVar2,uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010008555c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI7AnyViewVyACxcAA0D0RzlufC_1000b08d0)();
  return;
}



/* Entry: 100018db8; end: 10001912f;  */

long FUN_100018db8(undefined8 param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  code **ppcVar8;
  code **ppcVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  long lStack_80;
  undefined1 *puStack_78;
  code *pcStack_70;
  code **ppcStack_68;
  
  lVar2 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_b0 + -extraout_x8;
  lVar2 = 0x6172656d6163;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6172656d6163,0xe600000000000000);
  puVar3 = PTR__OBJC_CLASS___UIImage_1000c20c0;
  _objc_opt_self();
  func_0x000100086b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (puVar3 != (undefined *)0x0) {
    lVar2 = 0x1000c4708;
    func_0x0001000100d0(0x1000c4708,&UNK_1000894c8);
    lStack_80 = *(long *)(lVar2 + -8);
    uStack_90 = *(undefined8 *)(lStack_80 + 0x40);
    lStack_a8 = lVar2;
    puStack_78 = puVar12;
    (*(code *)PTR____chkstk_darwin_1000b0c68)();
    uStack_88 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
    lVar10 = (long)puVar12 - uStack_88;
    pcVar4 = (code *)0x1000c4710;
    func_0x0001000100d0(0x1000c4710,&UNK_1000894d0);
    lStack_a0 = *(long *)(pcVar4 + -8);
    lStack_98 = lVar10;
    (*(code *)PTR____chkstk_darwin_1000b0c68)
              (*(long *)(lStack_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar5 = &UNK_1000b2350;
    _swift_allocObject(&UNK_1000b2350,0x38,7);
    *(undefined8 *)(puVar5 + 0x10) = param_3;
    puVar5[0x18] = (char)param_4;
    puVar5[0x19] = (byte)((ulong)param_4 >> 8) & 1;
    *(undefined8 *)(puVar5 + 0x20) = param_1;
    puVar5[0x28] = param_2 & 1;
    *(undefined **)(puVar5 + 0x30) = puVar3;
    pcStack_70 = FUN_100019d60;
    ppcStack_68 = (code **)puVar5;
    FUN_1000172c0(param_3,param_4);
    _objc_retain(param_1);
    _objc_retain(puVar3);
    __s21SnapchatWidgetsShared16DeeplinkBuildersO19buildCameraDeepLink10isLoggedIn11widgetShape10Foundation3URLVSgSb_SStFZ
              (puVar12,1,0x75676e6174636572,0xeb0000000072616c);
    pcVar6 = (code *)0x1000c4718;
    func_0x0001000100d0(0x1000c4718,&UNK_1000894d8);
    uVar7 = 0x1000c4720;
    FUN_100019d8c(0x1000c4720,0x1000c4718,&UNK_1000894d8);
    __s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgF
              (lVar10 - extraout_x8_00,puVar12,pcVar6,uVar7);
    func_0x000100019eb0(puVar12,0x1000c4330,&UNK_1000890b0);
    _swift_release(puVar5);
    ppcVar8 = &pcStack_70;
    pcStack_70 = pcVar6;
    ppcStack_68 = (code **)uVar7;
    _swift_getOpaqueTypeConformance
              (ppcVar8,
               PTR___s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgFQOMQ_1000b09f0,1);
    __s7SwiftUI4ViewPAAE10unredactedQryF(lVar10,pcVar4,ppcVar8);
    (**(code **)(lStack_a0 + 8))(lVar10 - extraout_x8_00,pcVar4);
    lVar11 = lStack_98;
    (*(code *)PTR____chkstk_darwin_1000b0c68)();
    lVar1 = lStack_80;
    lVar2 = lStack_a8;
    lVar11 = lVar11 - uStack_88;
    (**(code **)(lStack_80 + 0x10))(lVar11,lVar10,lStack_a8);
    ppcVar9 = &pcStack_70;
    pcStack_70 = pcVar4;
    ppcStack_68 = ppcVar8;
    _swift_getOpaqueTypeConformance
              (ppcVar9,PTR___s7SwiftUI4ViewPAAE10unredactedQryFQOMQ_1000b0710,1);
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(lVar11,lVar2,ppcVar9);
    _objc_release(puVar3);
    (**(code **)(lVar1 + 8))(lVar10,lVar2);
    return lVar11;
  }
                    /* WARNING: Could not recover jumptable at 0x00010008555c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI7AnyViewVyACxcAA0D0RzlufC_1000b08d0)();
  return lVar2;
}



/* Entry: 100019130; end: 1000192a7;  */

void FUN_100019130(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  _objc_retain();
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  uVar6 = param_5;
  FUN_1000192a8();
  _swift_release(param_5);
  _objc_retain();
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  uVar7 = param_7;
  FUN_1000195ec();
  _swift_release(param_7);
  lVar8 = 0x1000c4728;
  func_0x0001000100d0(0x1000c4728,&UNK_1000894e0);
  lVar1 = (long)param_1 + (long)*(int *)(lVar8 + 0x24);
  __s9WidgetKit09AccessoryA10BackgroundVACycfC(lVar1);
  lVar8 = 0x1000c4730;
  func_0x0001000100d0(0x1000c4730,&UNK_1000894e8);
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar8 + 0x24));
  lVar8 = 0;
  __s7SwiftUI16RoundedRectangleVMa();
  iVar5 = *(int *)(lVar8 + 0x14);
  uVar4 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_1000b0538;
  lVar8 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  (**(code **)(*(long *)(lVar8 + -8) + 0x68))((long)puVar2 + (long)iVar5,uVar4,lVar8);
  auVar11 = NEON_fmov(0x4020000000000000,8);
  puVar2[1] = auVar11._8_8_;
  *puVar2 = auVar11._0_8_;
  lVar8 = 0x1000c4738;
  puVar10 = &UNK_1000894f0;
  func_0x0001000100d0();
  *(undefined2 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x24)) = 0x100;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  lVar9 = 0x1000c4740;
  func_0x0001000100d0(0x1000c4740,&UNK_1000894f8);
  plVar3 = (long *)(lVar1 + *(int *)(lVar9 + 0x24));
  *plVar3 = lVar8;
  plVar3[1] = (long)puVar10;
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = uVar6;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = uVar7;
  return;
}



/* Entry: 1000192a8; end: 1000195eb;  */

void FUN_1000192a8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 auStack_1d8 [7];
  undefined1 auStack_1a0 [74];
  undefined6 uStack_156;
  undefined2 uStack_150;
  undefined6 uStack_14e;
  undefined2 uStack_148;
  undefined6 uStack_146;
  undefined2 uStack_140;
  undefined6 uStack_13e;
  undefined2 uStack_138;
  undefined6 uStack_136;
  undefined2 uStack_130;
  undefined6 uStack_12e;
  undefined2 uStack_128;
  undefined6 uStack_126;
  long lStack_120;
  undefined8 uStack_118;
  undefined2 uStack_110;
  undefined6 uStack_10e;
  undefined2 uStack_108;
  undefined6 uStack_106;
  undefined2 uStack_100;
  undefined6 uStack_fe;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  undefined6 uStack_ee;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined2 uStack_e0;
  undefined6 uStack_de;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined2 uStack_c0;
  undefined6 uStack_be;
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined6 uStack_a6;
  undefined2 uStack_a0;
  undefined6 uStack_9e;
  undefined2 uStack_98;
  undefined6 uStack_96;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar5 + 0x40));
  lVar3 = (long)&uStack_240 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if ((param_3 & 1) == 0) {
    (**(code **)(lVar5 + 0x68))
              (lVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
               lVar1);
    uVar6 = 0;
    lVar2 = lVar3;
    __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
              (0,0,0,0,lVar3,param_1);
    (**(code **)(lVar5 + 8))(lVar3,lVar1);
    __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
    __s7SwiftUI9AlignmentV6centerACvgZ();
    __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
              (&uStack_90,0,1,uVar6,0,lVar3,lVar1);
    uStack_148 = (undefined2)uStack_88;
    uStack_146 = (undefined6)((ulong)uStack_88 >> 0x10);
    uStack_150 = (undefined2)uStack_90;
    uStack_14e = (undefined6)((ulong)uStack_90 >> 0x10);
    uStack_138 = (undefined2)uStack_78;
    uStack_136 = (undefined6)((ulong)uStack_78 >> 0x10);
    uStack_140 = (undefined2)uStack_80;
    uStack_13e = (undefined6)((ulong)uStack_80 >> 0x10);
    uStack_128 = (undefined2)uStack_68;
    uStack_126 = (undefined6)((ulong)uStack_68 >> 0x10);
    uStack_130 = (undefined2)uStack_70;
    uStack_12e = (undefined6)((ulong)uStack_70 >> 0x10);
    uStack_118 = 0;
    uStack_110 = 0x101;
    uStack_106 = uStack_14e;
    uStack_100 = uStack_148;
    uStack_10e = uStack_156;
    uStack_108 = uStack_150;
    uStack_f6 = uStack_13e;
    uStack_f0 = (undefined1)uStack_78;
    uStack_ef = (undefined1)((ulong)uStack_78 >> 8);
    uStack_fe = uStack_146;
    uStack_f8 = uStack_140;
    uStack_e6 = uStack_12e;
    uStack_ee = uStack_136;
    uStack_e8 = uStack_130;
    uStack_1f8 = uStack_80;
    uStack_200 = uStack_88;
    uStack_1e8 = uStack_70;
    uStack_1f0 = uStack_78;
    uStack_208 = uStack_90;
    uStack_210 = CONCAT62(uStack_156,0x101);
    uStack_1e0 = uStack_68;
    auStack_1d8[0] = 0x4000000000000000;
    uStack_218 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0x101;
    uStack_ae = uStack_13e;
    uStack_b6 = uStack_146;
    uStack_b0 = uStack_140;
    uStack_9e = uStack_12e;
    uStack_98 = uStack_128;
    uStack_a6 = uStack_136;
    uStack_a0 = uStack_130;
    uStack_be = uStack_14e;
    uStack_b8 = uStack_148;
    uStack_c6 = uStack_156;
    uStack_c0 = uStack_150;
    lStack_220 = lVar2;
    lStack_120 = lVar2;
    uStack_e0 = uStack_128;
    uStack_de = uStack_126;
    lStack_d8 = lVar2;
    uStack_a8 = uStack_f0;
    uStack_a7 = uStack_ef;
    uStack_96 = uStack_126;
    func_0x000100019e68(&lStack_120,auStack_1a0,0x1000c4778,&UNK_10008a450);
    func_0x000100019eb0(&lStack_d8,0x1000c4778,&UNK_10008a450);
    uVar6 = 0x1000c4780;
    func_0x0001000100d0(0x1000c4780,&UNK_100089520);
    uVar4 = uVar6;
    func_0x000100019ef0();
  }
  else {
    (**(code **)(lVar5 + 0x68))
              (lVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
               lVar1);
    uVar6 = 0;
    lVar2 = lVar3;
    __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
              (0,0,0,0,lVar3,param_1);
    (**(code **)(lVar5 + 8))(lVar3,lVar1);
    __s7SwiftUI4EdgeO3SetV3allAEvgZ();
    lVar5 = lVar3;
    __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
    __s7SwiftUI9AlignmentV6centerACvgZ();
    uStack_118 = CONCAT71(uStack_118._1_7_,(char)lVar3);
    uStack_228 = 0x402e000000000000;
    uStack_230 = 0;
    uStack_238 = 0x4024000000000000;
    uStack_240 = 0;
    uStack_108 = 0;
    uStack_106 = 0x402e00000000;
    uStack_110 = 0;
    uStack_10e = 0;
    uStack_f8 = 0;
    uStack_f6 = 0x402400000000;
    uStack_100 = 0;
    uStack_fe = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e6 = 0;
    uStack_e0 = 1;
    lStack_120 = lVar2;
    __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
              (auStack_1d8,0,1,uVar6,0,lVar5,lVar1);
    uStack_1f8 = CONCAT62(uStack_f6,uStack_f8);
    uStack_200 = CONCAT62(uStack_fe,uStack_100);
    uStack_1e8 = CONCAT62(uStack_e6,uStack_e8);
    uStack_1f0 = CONCAT62(uStack_ee,CONCAT11(uStack_ef,uStack_f0));
    uStack_1e0 = CONCAT62(uStack_1e0._2_6_,uStack_e0);
    uStack_208 = CONCAT62(uStack_106,uStack_108);
    uStack_210 = CONCAT62(uStack_10e,uStack_110);
    uStack_218 = uStack_118;
    lStack_220 = lStack_120;
    uStack_d0 = CONCAT71(uStack_d0._1_7_,(char)lVar3);
    uStack_c0 = (undefined2)uStack_228;
    uStack_be = (undefined6)((ulong)uStack_228 >> 0x10);
    uStack_c8 = (undefined2)uStack_230;
    uStack_c6 = (undefined6)((ulong)uStack_230 >> 0x10);
    uStack_b0 = (undefined2)uStack_238;
    uStack_ae = (undefined6)((ulong)uStack_238 >> 0x10);
    uStack_b8 = (undefined2)uStack_240;
    uStack_b6 = (undefined6)((ulong)uStack_240 >> 0x10);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_98 = 1;
    lStack_d8 = lVar2;
    func_0x000100019e68(&lStack_120,auStack_1a0,0x1000c4748,&UNK_100089500);
    func_0x000100019eb0(&lStack_d8,0x1000c4748,&UNK_100089500);
    uVar6 = 0x1000c47a8;
    func_0x0001000100d0(0x1000c47a8,&UNK_100089530);
    uVar4 = 0x1000c47b0;
    FUN_10001a060(0x1000c47b0,0x1000c47a8,&UNK_100089530,
                  PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_1000b02e8);
  }
  __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(&lStack_220,uVar6,uVar4);
  return;
}



/* Entry: 1000195ec; end: 10001985f;  */

void FUN_1000195ec(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  double dVar9;
  undefined8 uStack_250;
  undefined1 auStack_248 [8];
  double dStack_240;
  undefined1 auStack_238 [8];
  long alStack_230 [2];
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [72];
  long lStack_1a8;
  undefined1 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined8 uStack_170;
  undefined2 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined2 uStack_120;
  undefined1 auStack_118 [112];
  long lStack_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined2 uStack_68;
  
  lVar3 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar8 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&lStack_220 + lVar2;
  (**(code **)(lVar8 + 0x68))
            (lVar5,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar3);
  dVar9 = 0.0;
  lVar4 = lVar5;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,lVar5,param_1);
  (**(code **)(lVar8 + 8))();
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  lVar8 = lVar5;
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uVar1 = (undefined1)lVar5;
  uStack_208 = 0x4034000000000000;
  uStack_210 = 0x4024000000000000;
  uStack_1f8 = 0x4014000000000000;
  uStack_200 = 0x4024000000000000;
  uStack_90 = 0x4014000000000000;
  uStack_98 = 0x4024000000000000;
  uStack_80 = 0x4034000000000000;
  uStack_88 = 0x4024000000000000;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 1;
  lStack_a8 = lVar4;
  uStack_a0 = uVar1;
  if (NAN(dVar9)) {
    lStack_220 = lVar3;
    lStack_218 = lVar8;
    __sSo13os_log_type_ta0A0E5faultABvgZ();
    lVar3 = lVar8;
    __s7SwiftUI3LogO013runtimeIssuesC0So9OS_os_logCvgZ();
    __s2os0A4_log_3dso0B0__ySo0a1_B7_type_ta_SVSo03OS_a1_B0Cs12StaticStringVs7CVarArg_pdtF
              (lVar8,0x100000000,lVar3,"Contradictory frame constraints specified.",0x2a,2,
               PTR___swiftEmptyArrayStorage_1000b14d0);
    _objc_release(lVar3);
    lVar8 = lStack_218;
    lVar3 = lStack_220;
  }
  *(long *)((long)alStack_230 + lVar2) = lVar8;
  *(long *)((long)alStack_230 + lVar2 + 8) = lVar3;
  auStack_238[lVar2] = 0;
  *(double *)((long)&dStack_240 + lVar2) = dVar9;
  auStack_248[lVar2] = 1;
  *(undefined8 *)((long)&uStack_250 + lVar2) = 0;
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (auStack_118,0,1,0,1,0,1,0,1);
  uStack_130 = CONCAT71(uStack_77,uStack_78);
  uStack_138 = uStack_80;
  uStack_140 = uStack_88;
  uStack_128 = uStack_70;
  uStack_120 = uStack_68;
  uStack_158 = CONCAT71(uStack_9f,uStack_a0);
  lStack_160 = lStack_a8;
  uStack_148 = uStack_90;
  uStack_150 = uStack_98;
  uStack_190 = uStack_1f8;
  uStack_198 = uStack_200;
  uStack_180 = uStack_208;
  uStack_188 = uStack_210;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 1;
  lStack_1a8 = lVar4;
  uStack_1a0 = uVar1;
  func_0x000100019e68(&lStack_a8,auStack_1f0,0x1000c4748,&UNK_100089500);
  func_0x000100019eb0(&lStack_1a8,0x1000c4748,&UNK_100089500);
  uVar6 = 0x1000c4750;
  func_0x0001000100d0(0x1000c4750,&UNK_100089508);
  uVar7 = 0x1000c4758;
  FUN_10001a060(0x1000c4758,0x1000c4750,&UNK_100089508,
                PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_1000b0460);
  __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(&lStack_160,uVar6,uVar7);
  return;
}



/* Entry: 100019860; end: 100019893;  */

void FUN_100019860(undefined8 *param_1)

{
  char cVar1;
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  cVar1 = *(char *)(unaff_x20 + 1);
  *(char *)(param_1 + 1) = cVar1;
  if (cVar1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001000860e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_1000b15b0)();
    return;
  }
  if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100085f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_1000b10c8)();
    return;
  }
  return;
}



/* Entry: 100019894; end: 1000198eb;  */

void FUN_100019894(void)

{
  uint uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = 0x100;
  if (*(char *)((long)unaff_x20 + 9) == '\0') {
    uVar1 = 0;
  }
  FUN_100018c9c(*unaff_x20,uVar1 | *(byte *)(unaff_x20 + 1),0x7465756f686c6973,0xea00000000006574,
                &UNK_1000b2328,FUN_10001a318);
  return;
}



/* Entry: 1000198ec; end: 100019a1f;  */

void FUN_1000198ec(long *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  uint uVar7;
  undefined8 *unaff_x20;
  long lVar8;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar2 = *unaff_x20;
  bVar1 = *(byte *)(unaff_x20 + 1);
  uVar7 = (uint)bVar1;
  if (*(char *)((long)unaff_x20 + 9) == '\x01') {
    puVar3 = &UNK_1000b2328;
    pcVar6 = FUN_10001a318;
    uVar4 = 0x7465756f686c6973;
    uVar7 = bVar1 | 0x100;
    uVar5 = 0xea00000000006574;
  }
  else {
    lVar8 = *param_1;
    if (lVar8 != 0) {
      puVar3 = &UNK_1000b2300;
      _swift_allocObject(&UNK_1000b2300,0x28,7);
      *(undefined8 *)(puVar3 + 0x10) = uVar2;
      puVar3[0x18] = bVar1;
      puVar3[0x19] = 0;
      *(long *)(puVar3 + 0x20) = lVar8;
      uStack_40 = 0x100019d20;
      puStack_38 = puVar3;
      _objc_retain(lVar8);
      FUN_1000172c0(uVar2,uVar7);
      uVar2 = 0x1000c46f8;
      func_0x0001000100d0(0x1000c46f8,&UNK_1000894c0);
      uVar4 = 0x1000c4700;
      FUN_100019d8c(0x1000c4700,0x1000c46f8,&UNK_1000894c0);
      __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(&uStack_40,uVar2,uVar4);
      return;
    }
    puVar3 = &UNK_1000b2378;
    pcVar6 = FUN_10001a0f8;
    uVar4 = 0x74736f6867;
    uVar5 = 0xe500000000000000;
  }
  FUN_100018c9c(uVar2,uVar7,uVar4,uVar5,puVar3,pcVar6);
  return;
}



/* Entry: 100019a20; end: 100019bb3;  */

long FUN_100019a20(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&puStack_70 - extraout_x8;
  lVar2 = 0x1000c46e8;
  func_0x0001000100d0(0x1000c46e8,&UNK_1000894b8);
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar5 = lVar6 - extraout_x12;
  uVar3 = 0;
  __s21SnapchatWidgetsShared16DeeplinkBuildersO19buildCameraDeepLink10isLoggedIn11widgetShape10Foundation3URLVSgSb_SStFZ
            (lVar7,0,0x75676e6174636572,0xeb0000000072616c);
  FUN_100019cdc();
  puVar1 = PTR___s21SnapchatWidgetsShared26LockScreenLoginRectangularVN_1000b0ef8;
  __s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgF
            (lVar5,lVar7,PTR___s21SnapchatWidgetsShared26LockScreenLoginRectangularVN_1000b0ef8,
             uVar3);
  func_0x000100019eb0(lVar7,0x1000c4330,&UNK_1000890b0);
  (**(code **)(lVar8 + 0x10))(lVar6,lVar5,lVar2);
  puStack_70 = puVar1;
  ppuVar4 = &puStack_70;
  uStack_68 = uVar3;
  _swift_getOpaqueTypeConformance
            (ppuVar4,PTR___s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgFQOMQ_1000b09f0,
             1);
  __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(lVar6,lVar2,ppuVar4);
  (**(code **)(lVar8 + 8))(lVar5,lVar2);
  return lVar6;
}



/* Entry: 100019bb4; end: 100019bd7;  */

void FUN_100019bb4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100019bd8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100019bd8; end: 100019c17;  */

void FUN_100019bd8(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c46d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008945c;
  _swift_getWitnessTable(&UNK_10008945c,&UNK_1000b23f8);
  puRam00000001000c46d8 = puVar1;
  return;
}



/* Entry: 100019c18; end: 100019c57;  */

void FUN_100019c18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_100019c58();
  uStack_30 = param_2;
  uStack_28 = param_1;
  _swift_getOpaqueTypeConformance
            (&uStack_30,PTR___s21SnapchatWidgetsShared17SCWidgetStateViewPAAE4bodyQrvpQOMQ_1000b0e98
             ,1);
  return;
}



/* Entry: 100019c58; end: 100019c97;  */

void FUN_100019c58(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c46e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100089440;
  _swift_getWitnessTable(&DAT_100089440,&UNK_1000b23f8);
  puRam00000001000c46e0 = puVar1;
  return;
}



/* Entry: 100019c98; end: 100019ca3;  */

void FUN_100019c98(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 100019ca4; end: 100019cdb;  */

void FUN_100019ca4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_100019c58();
                    /* WARNING: Could not recover jumptable at 0x000100084f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s21SnapchatWidgetsShared17SCWidgetStateViewPAAE4bodyQrvg_1000b0e90)
            (param_1,param_2,uVar1);
  return;
}



/* Entry: 100019cdc; end: 100019d1b;  */

void FUN_100019cdc(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c46f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s21SnapchatWidgetsShared26LockScreenLoginRectangularV7SwiftUI4ViewAAMc_1000b0ee8;
  _swift_getWitnessTable
            (PTR___s21SnapchatWidgetsShared26LockScreenLoginRectangularV7SwiftUI4ViewAAMc_1000b0ee8,
             PTR___s21SnapchatWidgetsShared26LockScreenLoginRectangularVN_1000b0ef8);
  puRam00000001000c46f0 = puVar1;
  return;
}


