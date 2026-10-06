/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1044c3840; end: 1044c385f;  */

void FUN_1044c3840(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1044c3860; end: 1044c389f;  */

void FUN_1044c3860(void)

{
  undefined *puVar1;
  
  if (puRam000000011307fd38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0abc0;
  _swift_getWitnessTable(&UNK_10dd0abc0,&UNK_11077b540);
  puRam000000011307fd38 = puVar1;
  return;
}



/* Entry: 1044c38a0; end: 1044c38af;  */

undefined1  [16] FUN_1044c38a0(void)

{
  return ZEXT816(0x11077b540);
}



/* Entry: 1044c38b0; end: 1044c3ef3;  */

long FUN_1044c38b0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1044c3ef4; end: 1044c3f2b;  */

void FUN_1044c3ef4(undefined8 param_1)

{
  if (lRam000000011307fd98 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e80d558);
  return;
}



/* Entry: 1044c3f2c; end: 1044c4087;  */

long * FUN_1044c3f2c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar6 = *param_2;
    lVar8 = param_2[3];
    lVar5 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = lVar6;
    param_1[3] = lVar8;
    param_1[2] = lVar5;
    lVar6 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = lVar6;
    lVar6 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = lVar6;
    param_1[8] = param_2[8];
    lVar8 = (long)*(int *)(param_3 + 0x30);
    lVar5 = 0;
    __s10Foundation4UUIDVMa();
    lVar9 = *(long *)(lVar5 + -8);
    pcVar10 = *(code **)(lVar9 + 0x30);
    _swift_bridgeObjectRetain(lVar6);
    lVar6 = (long)param_2 + lVar8;
    (*pcVar10)(lVar6,1,lVar5);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar9 + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar5);
      (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,lVar5);
    }
    else {
      lVar6 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)param_1 + lVar8,(long)param_2 + lVar8,
              *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    }
    iVar3 = *(int *)(param_3 + 0x38);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
    iVar3 = *(int *)(param_3 + 0x40);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
    *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar7 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar6 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1044c4088; end: 1044c40ff;  */

void FUN_1044c4088(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  iVar1 = *(int *)(param_2 + 0x30);
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001044c40fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 1044c4100; end: 1044c43db;  */

undefined8 * FUN_1044c4100(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  uVar9 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar9;
  param_1[8] = param_2[8];
  lVar6 = (long)*(int *)(param_3 + 0x30);
  lVar4 = 0;
  __s10Foundation4UUIDVMa();
  lVar7 = *(long *)(lVar4 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  _swift_bridgeObjectRetain(uVar9);
  lVar5 = (long)param_2 + lVar6;
  (*pcVar8)(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar4);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,
            *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x38);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x40);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  return param_1;
}



/* Entry: 1044c43dc; end: 1044c44f3;  */

undefined8 * FUN_1044c43dc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  uVar8 = param_2[4];
  uVar10 = param_2[7];
  uVar9 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar8;
  param_1[7] = uVar10;
  param_1[6] = uVar9;
  param_1[8] = param_2[8];
  lVar6 = (long)*(int *)(param_3 + 0x30);
  lVar4 = 0;
  __s10Foundation4UUIDVMa();
  lVar7 = *(long *)(lVar4 + -8);
  lVar5 = (long)param_2 + lVar6;
  (**(code **)(lVar7 + 0x30))(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar4);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,
            *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x38);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x40);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  return param_1;
}



/* Entry: 1044c44f4; end: 1044c4677;  */

undefined8 * FUN_1044c44f4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  *param_1 = *param_2;
  uVar4 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar4;
  uVar4 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar4;
  uVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar4;
  uVar4 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRelease(uVar4);
  param_1[8] = param_2[8];
  lVar8 = (long)*(int *)(param_3 + 0x30);
  lVar5 = 0;
  __s10Foundation4UUIDVMa();
  lVar9 = *(long *)(lVar5 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar6 = (long)param_1 + lVar8;
  (*pcVar10)(lVar6,1,lVar5);
  lVar7 = (long)param_2 + lVar8;
  (*pcVar10)(lVar7,1,lVar5);
  if ((int)lVar6 == 0) {
    if ((int)lVar7 == 0) {
      (**(code **)(lVar9 + 0x28))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar5);
      goto LAB_1044c4600;
    }
    (**(code **)(lVar9 + 8))((long)param_1 + lVar8,lVar5);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar5);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,lVar5);
    goto LAB_1044c4600;
  }
  lVar6 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  _memcpy((long)param_1 + lVar8,(long)param_2 + lVar8,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40))
  ;
LAB_1044c4600:
  iVar3 = *(int *)(param_3 + 0x38);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x40);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  return param_1;
}



/* Entry: 1044c4678; end: 1044c468f;  */

void FUN_1044c4678(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1044c4690; end: 1044c472b;  */

void FUN_1044c4690(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_60 = &UNK_10dd0ad00;
  lVar2 = 0x13f;
  puStack_90 = puVar1;
  puStack_88 = puVar1;
  puStack_80 = puVar1;
  puStack_78 = puVar1;
  puStack_70 = puVar1;
  puStack_68 = puVar1;
  puStack_58 = puVar1;
  func_0x0001000b88b8();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar2 + -8) + 0x40;
    puStack_48 = &UNK_10dd0ad18;
    puStack_40 = puVar1;
    puStack_38 = puVar1;
    puStack_30 = puVar1;
    puStack_28 = puVar1;
    _swift_initStructMetadata(param_1,0x100,0xe,&puStack_90,param_1 + 0x10);
  }
  return;
}



/* Entry: 1044c472c; end: 1044c5287;  */

long FUN_1044c472c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1044c5288; end: 1044c529b;  */

bool FUN_1044c5288(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1044c529c; end: 1044c5373;  */

void FUN_1044c529c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044c5374; end: 1044c5393;  */

void FUN_1044c5374(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1044c5394; end: 1044c53d3;  */

void FUN_1044c5394(void)

{
  undefined *puVar1;
  
  if (puRam000000011307fe00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0ad60;
  _swift_getWitnessTable(&UNK_10dd0ad60,&UNK_11077b768);
  puRam000000011307fe00 = puVar1;
  return;
}



/* Entry: 1044c53d4; end: 1044c53e3;  */

undefined1  [16] FUN_1044c53d4(void)

{
  return ZEXT816(0x11077b768);
}



/* Entry: 1044c53e4; end: 1044c56e7;  */

undefined1  [16] FUN_1044c53e4(void)

{
  return ZEXT816(0x11077b7e0);
}



/* Entry: 1044c56e8; end: 1044c56ff;  */

bool FUN_1044c56e8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1044c5700; end: 1044c573f;  */

void FUN_1044c5700(void)

{
  undefined *puVar1;
  
  if (puRam000000011307fe08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0aea0;
  _swift_getWitnessTable(&UNK_10dd0aea0,&UNK_11077b938);
  puRam000000011307fe08 = puVar1;
  return;
}



/* Entry: 1044c5740; end: 1044c57eb;  */

void FUN_1044c5740(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044c57ec; end: 1044c5837;  */

void FUN_1044c57ec(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 1044c5838; end: 1044c598f; -[SCContentInFeedSurvey dedupeId] */

void FUN_1044c5838(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001044c5890();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044c5990; end: 1044c5a17;  */

long FUN_1044c5990(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1044c5a18; end: 1044c5afb;  */

undefined8 * FUN_1044c5a18(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar3 = param_2[4];
  param_1[4] = uVar3;
  cVar1 = *(char *)(param_2 + 6);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  if (cVar1 == -1) {
    param_1[5] = param_2[5];
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  }
  else {
    uVar2 = param_2[5];
    FUN_1044a372c(uVar2,cVar1);
    param_1[5] = uVar2;
    *(char *)(param_1 + 6) = cVar1;
  }
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x4c) = *(undefined1 *)((long)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  uVar3 = param_2[0xb];
  param_1[0xb] = uVar3;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar2 = param_2[0xd];
  param_1[0xd] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 1044c5afc; end: 1044c5c7f;  */

undefined8 * FUN_1044c5afc(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  cVar2 = *(char *)(param_2 + 6);
  if (*(char *)(param_1 + 6) == -1) {
    if (cVar2 == -1) {
      uVar4 = param_2[5];
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
      param_1[5] = uVar4;
    }
    else {
      uVar4 = param_2[5];
      FUN_1044a372c(uVar4,cVar2);
      param_1[5] = uVar4;
      *(char *)(param_1 + 6) = cVar2;
    }
  }
  else if (cVar2 == -1) {
    func_0x0001044a6450(param_1 + 5);
    uVar3 = *(undefined1 *)(param_2 + 6);
    param_1[5] = param_2[5];
    *(undefined1 *)(param_1 + 6) = uVar3;
  }
  else {
    uVar5 = param_2[5];
    FUN_1044a372c(uVar5,cVar2);
    uVar4 = param_1[5];
    param_1[5] = uVar5;
    uVar3 = *(undefined1 *)(param_1 + 6);
    *(char *)(param_1 + 6) = cVar2;
    FUN_1044a3be4(uVar4,uVar3);
  }
  param_1[7] = param_2[7];
  uVar4 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar1 = *(undefined4 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x4c) = *(undefined1 *)((long)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 9) = uVar1;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  uVar4 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar4 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  return param_1;
}



/* Entry: 1044c5c80; end: 1044c5d6b;  */

undefined8 * FUN_1044c5c80(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  uVar3 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  uVar3 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease(uVar3);
  if (*(char *)(param_1 + 6) != -1) {
    cVar1 = *(char *)(param_2 + 6);
    if (cVar1 != -1) {
      uVar3 = param_1[5];
      param_1[5] = param_2[5];
      *(char *)(param_1 + 6) = cVar1;
      FUN_1044a3be4(uVar3);
      goto LAB_1044c5d0c;
    }
    func_0x0001044a6450(param_1 + 5);
  }
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
LAB_1044c5d0c:
  uVar3 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x4c) = *(undefined1 *)((long)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  uVar3 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRelease(uVar3);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar3 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRelease(uVar3);
  return param_1;
}



/* Entry: 1044c5d6c; end: 1044c5e2f;  */

int FUN_1044c5d6c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1044c5e30; end: 1044c5e7f;  */

undefined8 * FUN_1044c5e30(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_1044a372c(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_1044a3be4(uVar3,uVar2);
  return param_1;
}



/* Entry: 1044c5e80; end: 1044c5ebb;  */

undefined8 * FUN_1044c5e80(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_1044a3be4(uVar3,uVar2);
  return param_1;
}



/* Entry: 1044c5ebc; end: 1044c5f8b;  */

int FUN_1044c5ebc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1044c5f8c; end: 1044c5fcb;  */

void FUN_1044c5f8c(void)

{
  undefined *puVar1;
  
  if (puRam000000011307fe10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0afb0;
  _swift_getWitnessTable(&UNK_10dd0afb0,&UNK_11077bae0);
  puRam000000011307fe10 = puVar1;
  return;
}



/* Entry: 1044c5fcc; end: 1044c6077;  */

void FUN_1044c5fcc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044c6078; end: 1044c60af;  */

void FUN_1044c6078(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 1044c60b0; end: 1044c652f;  */

long FUN_1044c60b0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1044c6530; end: 1044c653f; -[SCSpotlightEngagementMetadata timestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044c6530(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307fe18);
}



/* Entry: 1044c6540; end: 1044c654f; -[SCSpotlightEngagementMetadata boostCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044c6540(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307fe20);
}



/* Entry: 1044c6550; end: 1044c655f; -[SCSpotlightEngagementMetadata shareCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044c6550(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307fe28);
}



/* Entry: 1044c6560; end: 1044c656f; -[SCSpotlightEngagementMetadata viewCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044c6560(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307fe30);
}



/* Entry: 1044c6570; end: 1044c657f; -[SCSpotlightEngagementMetadata subsCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044c6570(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307fe38);
}



/* Entry: 1044c6580; end: 1044c658f; -[SCSpotlightEngagementMetadata remixCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044c6580(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307fe40);
}



/* Entry: 1044c6590; end: 1044c65eb; -[SCSpotlightEngagementMetadata topicId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044c6590(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307fe48))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307fe48);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044c65ec; end: 1044c65fb; -[SCSpotlightEngagementMetadata trendingBadgeType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044c65ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307fe50);
}



/* Entry: 1044c65fc; end: 1044c66c3; -[SCSpotlightEngagementMetadata conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044c65fc(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x0001000c78e8(param_1 + _DAT_113813b38,puVar4);
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1044c66c4; end: 1044c66d3; -[SCSpotlightEngagementMetadata conversationMemberCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044c66c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113813b40));
  return;
}



/* Entry: 1044c66d4; end: 1044c66e3; -[SCSpotlightEngagementMetadata spotlightNewPendingReplyCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044c66d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113813b48);
}



/* Entry: 1044c66e4; end: 1044c66f3; -[SCSpotlightEngagementMetadata spotlightLiveReplyCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044c66e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113813b50);
}



/* Entry: 1044c66f4; end: 1044c6703; -[SCSpotlightEngagementMetadata spotlightPendingReplyCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044c66f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113813b58);
}



/* Entry: 1044c6704; end: 1044c6713; -[SCSpotlightEngagementMetadata recommendCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044c6704(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113813b60);
}



/* Entry: 1044c6714; end: 1044c6a47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1044c6714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307fe18) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307fe20) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307fe28) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11307fe30) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307fe38) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11307fe40) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307fe48);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11307fe50) = param_9;
  func_0x0001000c78e8(param_10,unaff_x20 + _DAT_113813b38);
  *(undefined8 *)(unaff_x20 + _DAT_113813b40) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_113813b48) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_113813b50) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_113813b58) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_113813b60) = param_15;
  puVar2 = auStack_80;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  FUN_1044c79e8(param_10,0x112d3bc20,&UNK_10d904ef0);
  return puVar2;
}



/* Entry: 1044c6a48; end: 1044c6b97; -[SCSpotlightEngagementMetadata initWithTimestampMs:boostCount:shareCount:viewCount:subsCount:remixCount:topicId:trendingBadgeType:conversationId:conversationMemberCount:spotlightNewPendingReplyCount:spotlightLiveReplyCount:spotlightPendingReplyCount:recommendCount:] */

void FUN_1044c6a48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,long param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  undefined *puVar4;
  long alStack_d0 [6];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_98 = param_10;
  lVar1 = 0x112d3bc20;
  puVar4 = &UNK_10d904ef0;
  uStack_a0 = param_5;
  uStack_90 = param_6;
  uStack_88 = param_7;
  uStack_80 = param_2;
  uStack_78 = param_8;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  lVar3 = (long)&uStack_a0 + lVar1;
  if (param_9 == 0) {
    param_9 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_9);
  }
  if (param_11 == 0) {
    lVar2 = 0;
    __s10Foundation4UUIDVMa();
  }
  else {
    __s10Foundation4UUIDV36_unconditionallyBridgeFromObjectiveCyACSo6NSUUIDCSgFZ(lVar3,param_11);
    lVar2 = 0;
    __s10Foundation4UUIDVMa();
  }
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar3,param_11 == 0,1);
  _objc_retain(param_12);
  *(undefined8 *)((long)alStack_d0 + lVar1 + 0x20) = param_15;
  *(undefined8 *)((long)alStack_d0 + lVar1 + 0x28) = param_16;
  *(undefined8 *)((long)alStack_d0 + lVar1 + 0x10) = param_13;
  *(undefined8 *)((long)alStack_d0 + lVar1 + 0x18) = param_14;
  *(long *)((long)alStack_d0 + lVar1) = lVar3;
  *(undefined8 *)((long)alStack_d0 + lVar1 + 8) = param_12;
  func_0x0001044c68b0(param_1,param_4,uStack_a0,uStack_90,uStack_88,uStack_78,param_9,puVar4,
                      uStack_98);
  return;
}



/* Entry: 1044c6b98; end: 1044c6bc7;  */

void FUN_1044c6b98(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1044c6bc8(param_1);
  return;
}



/* Entry: 1044c6bc8; end: 1044c6d77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1044c6bc8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  puVar4 = &stack0xffffffffffffffa0;
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_11307fe18) = *param_1;
  uVar5 = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_11307fe20) = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11307fe28) = uVar5;
  uVar5 = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_11307fe30) = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11307fe38) = uVar5;
  *(undefined8 *)(unaff_x20 + _DAT_11307fe40) = param_1[5];
  uVar5 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307fe48);
  puVar1[1] = param_1[7];
  *puVar1 = uVar5;
  uVar5 = param_1[7];
  *(undefined8 *)(unaff_x20 + _DAT_11307fe50) = param_1[8];
  lVar2 = 0;
  FUN_1044c3ef4();
  func_0x0001000c78e8((long)param_1 + (long)*(int *)(lVar2 + 0x30),unaff_x20 + _DAT_113813b38);
  if (*(char *)((long)param_1 + (long)*(int *)(lVar2 + 0x34) + 8) == '\x01') {
    _swift_bridgeObjectRetain(uVar5);
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar5);
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_113813b40) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113813b48) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x38));
  *(undefined8 *)(unaff_x20 + _DAT_113813b50) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x3c));
  *(undefined8 *)(unaff_x20 + _DAT_113813b58) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x40));
  *(undefined8 *)(unaff_x20 + _DAT_113813b60) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x44));
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  func_0x0001016f5400(param_1);
  return puVar4;
}



/* Entry: 1044c6d78; end: 1044c6d7b; -[SCSpotlightEngagementMetadata copyWithZone:] */

void FUN_1044c6d78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044c6d7c; end: 1044c7237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044c6d7c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar2 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffa0 + -extraout_x8;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_11307fe18);
  uVar1 = 0x4d415453454d4954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d415453454d4954,0xec000000534d5f50);
  func_0x00010bf92e80(uVar7,param_1);
  _objc_release(uVar1);
  uVar1 = 0x4f435f54534f4f42;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f435f54534f4f42,0xeb00000000544e55);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4f435f4552414853;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f435f4552414853,0xeb00000000544e55);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x554f435f57454956;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x554f435f57454956,0xea0000000000544e);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x554f435f53425553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x554f435f53425553,0xea0000000000544e);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4f435f58494d4552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f435f58494d4552,0xeb00000000544e55);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11307fe48))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11307fe48);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar7 = 0x44495f4349504f54;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4349504f54,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar7);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f203560);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  func_0x0001000c78e8(unaff_x20 + _DAT_113813b38,puVar4);
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar6 = *(long *)(lVar2 + -8);
  puVar3 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar2);
  puVar5 = (undefined1 *)0x0;
  if ((int)puVar3 != 1) {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
    (**(code **)(lVar6 + 8))(puVar4,lVar2);
    puVar5 = puVar3;
  }
  uVar1 = 0x41535245564e4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x41535245564e4f43,0xef44495f4e4f4954);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(puVar5);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f203580);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f2035a0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f2035d0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f2035f0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4e454d4d4f434552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e454d4d4f434552,0xef544e554f435f44);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  return;
}



/* Entry: 1044c7238; end: 1044c7287; -[SCSpotlightEngagementMetadata encodeWithCoder:] */

void FUN_1044c7238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1044c6d7c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1044c7288; end: 1044c72b7;  */

void FUN_1044c7288(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1044c72b8(param_1);
  return;
}



/* Entry: 1044c72b8; end: 1044c79e7;  */

undefined8 FUN_1044c72b8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long extraout_x8;
  code *pcVar9;
  long extraout_x12;
  undefined8 unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long alStack_160 [8];
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar10 = (long)&lStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - extraout_x12;
  uVar2 = 0x4d415453454d4954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d415453454d4954,0xec000000534d5f50);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar2);
  uVar2 = 0x4f435f54534f4f42;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f435f54534f4f42,0xeb00000000544e55);
  func_0x00010bf66f40(param_2);
  _objc_release(uVar2);
  uVar2 = 0x4f435f4552414853;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f435f4552414853,0xeb00000000544e55);
  lVar1 = param_2;
  func_0x00010bf66f40();
  _objc_release(uVar2);
  uVar2 = 0x554f435f57454956;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x554f435f57454956,0xea0000000000544e);
  func_0x00010bf66f40();
  _objc_release(uVar2);
  uVar2 = 0x554f435f53425553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x554f435f53425553,0xea0000000000544e);
  func_0x00010bf66f40();
  _objc_release(uVar2);
  uVar2 = 0x4f435f58494d4552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f435f58494d4552,0xeb00000000544e55);
  func_0x00010bf66f40();
  _objc_release(uVar2);
  uVar2 = 0x44495f4349504f54;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4349504f54,0xe800000000000000);
  lVar3 = param_2;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_b8 = 0;
    uStack_c0 = 0;
    lStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_98 = uStack_b8;
  uStack_a0 = uStack_c0;
  lStack_88 = lStack_a8;
  uStack_90 = uStack_b0;
  if (lStack_a8 == 0) {
    FUN_1044c79e8(&uStack_a0,0x112d387f8,&UNK_10d902650);
    uStack_f0 = 0;
    lVar3 = 0;
  }
  else {
    puVar4 = &uStack_d0;
    _swift_dynamicCast(puVar4,&uStack_a0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar3 = lStack_c8;
    uStack_f0 = uStack_d0;
    if ((int)puVar4 == 0) {
      uStack_f0 = 0;
      lVar3 = 0;
    }
  }
  uVar8 = 0xf203560;
  uVar2 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013);
  lVar5 = param_2;
  func_0x00010bf66f40();
  _objc_release(uVar2);
  func_0x0001044c5380();
  if ((uVar8 & 0xff) == 1) {
    _objc_release(param_2);
    _swift_bridgeObjectRelease(lVar3);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  else {
    uVar2 = 0x41535245564e4f43;
    lStack_108 = lVar5;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x41535245564e4f43,0xef44495f4e4f4954);
    lVar5 = param_2;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar5 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,lVar5);
      _swift_unknownObjectRelease(lVar5);
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    if (lStack_a8 == 0) {
      FUN_1044c79e8(&uStack_a0,0x112d387f8,&UNK_10d902650);
      lVar5 = 0;
      __s10Foundation4UUIDVMa();
      pcVar9 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
      uVar8 = 1;
    }
    else {
      lVar5 = 0;
      __s10Foundation4UUIDVMa();
      lVar6 = lVar11;
      _swift_dynamicCast(lVar11,&uStack_a0,PTR___sypN_11034f1a8 + 8,lVar5,6);
      pcVar9 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
      uVar8 = (uint)lVar6 ^ 1;
    }
    (*pcVar9)(lVar11,uVar8,1,lVar5);
    uVar2 = 0xd000000000000019;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f203580);
    lVar5 = param_2;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar5 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,lVar5);
      _swift_unknownObjectRelease(lVar5);
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    if (lStack_a8 == 0) {
      FUN_1044c79e8(&uStack_a0,0x112d387f8,&UNK_10d902650);
      uStack_110 = 0;
    }
    else {
      uVar2 = 0;
      func_0x0001002ed07c(0);
      puVar4 = &uStack_d0;
      _swift_dynamicCast(puVar4,&uStack_a0,PTR___sypN_11034f1a8 + 8,uVar2,6);
      uStack_110 = uStack_d0;
      if ((int)puVar4 == 0) {
        uStack_110 = 0;
      }
    }
    uVar2 = 0xd000000000000021;
    lStack_100 = lVar1;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f2035a0);
    lVar1 = param_2;
    func_0x00010bf66f40();
    lStack_118 = lVar1;
    _objc_release(uVar2);
    uVar2 = 0xd00000000000001a;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f2035d0);
    lVar1 = param_2;
    func_0x00010bf66f40();
    lStack_120 = lVar1;
    _objc_release(uVar2);
    uVar2 = 0xd00000000000001d;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f2035f0);
    lVar1 = param_2;
    func_0x00010bf66f40();
    _objc_release(uVar2);
    uVar2 = 0x4e454d4d4f434552;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e454d4d4f434552,0xef544e554f435f44);
    lVar5 = param_2;
    func_0x00010bf66f40();
    _objc_release(uVar2);
    if (lVar3 == 0) {
      uStack_f0 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_f0,lVar3);
      _swift_bridgeObjectRelease(lVar3);
    }
    func_0x0001000c78e8(lVar11,lVar10);
    lVar7 = 0;
    __s10Foundation4UUIDVMa();
    lVar12 = *(long *)(lVar7 + -8);
    lVar3 = lVar10;
    (**(code **)(lVar12 + 0x30))(lVar10,1,lVar7);
    lVar6 = 0;
    if ((int)lVar3 != 1) {
      __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
      (**(code **)(lVar12 + 8))(lVar10,lVar7);
      lVar6 = lVar3;
    }
    *(long *)(lVar11 + -0x18) = lVar1;
    *(long *)(lVar11 + -0x10) = lVar5;
    *(long *)(lVar11 + -0x20) = lStack_120;
    *(long *)(lVar11 + -0x28) = lStack_118;
    uVar2 = uStack_110;
    *(long *)(lVar11 + -0x38) = lVar6;
    *(undefined8 *)(lVar11 + -0x30) = uVar2;
    *(long *)(lVar11 + -0x40) = lStack_108;
    func_0x00010c052aa0(param_1,unaff_x20);
    _objc_release(uStack_f0);
    _objc_release(lVar6);
    _objc_release(param_2);
    _objc_release(uVar2);
    FUN_1044c79e8(lVar11,0x112d3bc20,&UNK_10d904ef0);
  }
  return unaff_x20;
}



/* Entry: 1044c79e8; end: 1044c7a27;  */

undefined8 FUN_1044c79e8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1044c7a28; end: 1044c7a4f; -[SCSpotlightEngagementMetadata initWithCoder:] */

void FUN_1044c7a28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1044c72b8();
  return;
}



/* Entry: 1044c7a50; end: 1044c7ac7; -[SCSpotlightEngagementMetadata description] */

void FUN_1044c7a50(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_1044c3ef4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1044c7ac8(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001016f5400(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044c7ac8; end: 1044c7c3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044c7ac8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  *param_1 = *(undefined8 *)(param_2 + _DAT_11307fe18);
  uVar6 = *(undefined8 *)(param_2 + _DAT_11307fe28);
  param_1[1] = *(undefined8 *)(param_2 + _DAT_11307fe20);
  param_1[2] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + _DAT_11307fe38);
  param_1[3] = *(undefined8 *)(param_2 + _DAT_11307fe30);
  param_1[4] = uVar6;
  param_1[5] = *(undefined8 *)(param_2 + _DAT_11307fe40);
  puVar1 = (undefined8 *)(param_2 + _DAT_11307fe48);
  uVar6 = puVar1[1];
  uVar8 = *puVar1;
  param_1[7] = puVar1[1];
  param_1[6] = uVar8;
  param_1[8] = *(undefined8 *)(param_2 + _DAT_11307fe50);
  lVar7 = _DAT_113813b38;
  lVar5 = 0;
  FUN_1044c3ef4();
  func_0x0001000c78e8(param_2 + lVar7,(long)param_1 + (long)*(int *)(lVar5 + 0x30));
  iVar4 = *(int *)(lVar5 + 0x34);
  lVar7 = *(long *)(param_2 + _DAT_113813b40);
  bVar3 = lVar7 == 0;
  if (bVar3) {
    _swift_bridgeObjectRetain(uVar6);
    lVar7 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar6);
    func_0x00010c067fc0();
  }
  plVar2 = (long *)((long)param_1 + (long)iVar4);
  *plVar2 = lVar7;
  *(bool *)(plVar2 + 1) = bVar3;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x38)) =
       *(undefined8 *)(param_2 + _DAT_113813b48);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x3c)) =
       *(undefined8 *)(param_2 + _DAT_113813b50);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x40)) =
       *(undefined8 *)(param_2 + _DAT_113813b58);
  uVar6 = *(undefined8 *)(param_2 + _DAT_113813b60);
  _objc_release(param_2);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x44)) = uVar6;
  return;
}



/* Entry: 1044c7c3c; end: 1044c7cb7; -[SCSpotlightEngagementMetadata init] */

void FUN_1044c7c3c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDiscoverBaseDataModels/SCSpotlightEngagementMetadataWrapper.swift",0x43,2,0xa5,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044c7c84);
  (*pcVar1)();
}



/* Entry: 1044c7cb8; end: 1044c7d13; -[SCSpotlightEngagementMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044c7cb8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307fe48 + 8));
  FUN_1044c79e8(param_1 + _DAT_113813b38,0x112d3bc20,&UNK_10d904ef0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113813b40));
  return;
}



/* Entry: 1044c7d14; end: 1044c7d1b;  */

void FUN_1044c7d14(void)

{
  if (lRam000000011307fe80 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e80d6d0);
  return;
}



/* Entry: 1044c7d1c; end: 1044c7d53;  */

void FUN_1044c7d1c(undefined8 param_1)

{
  if (lRam000000011307fe80 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e80d6d0);
  return;
}



/* Entry: 1044c7d54; end: 1044c7def;  */

void FUN_1044c7d54(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_60 = &UNK_10dd0b0e0;
  lVar2 = 0x13f;
  puStack_90 = puVar1;
  puStack_88 = puVar1;
  puStack_80 = puVar1;
  puStack_78 = puVar1;
  puStack_70 = puVar1;
  puStack_68 = puVar1;
  puStack_58 = puVar1;
  func_0x0001000b88b8();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar2 + -8) + 0x40;
    puStack_48 = &UNK_10dd0b0f8;
    puStack_40 = puVar1;
    puStack_38 = puVar1;
    puStack_30 = puVar1;
    puStack_28 = puVar1;
    _swift_updateClassMetadata2(param_1,0x100,0xe,&puStack_90,param_1 + 0x50);
  }
  return;
}



/* Entry: 1044c7df0; end: 1044c7dff; -[SCDiscoverFeedCompositeStoryId corpus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044c7df0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307fe90);
}



/* Entry: 1044c7e00; end: 1044c7e5b; -[SCDiscoverFeedCompositeStoryId identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044c7e00(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307fe98))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307fe98);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044c7e5c; end: 1044c7e6f; -[SCDiscoverFeedCompositeStoryId version] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044c7e5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307fea0);
}



/* Entry: 1044c7e70; end: 1044c7f8f; -[SCDiscoverFeedCompositeStoryId initWithCorpus:identifier:version:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044c7e70(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_11307fe90) = param_3;
  plVar1 = (long *)(param_1 + _DAT_11307fe98);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11307fea0) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044c7f90; end: 1044c7fc3; -[SCDiscoverFeedCompositeStoryId hash] */

undefined8 FUN_1044c7f90(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044c7fc4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1044c7fc4; end: 1044c806b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044c7fc4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11307fe90));
  if (((undefined8 *)(unaff_x20 + _DAT_11307fe98))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11307fe98);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_11307fea0));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1044c806c; end: 1044c8197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1044c806c(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_11307fe90);
      lVar7 = *(long *)(lStack_68 + _DAT_11307fe90);
      lVar2 = ((long *)(unaff_x20 + _DAT_11307fe98))[1];
      lVar3 = ((long *)(lStack_68 + _DAT_11307fe98))[1];
      uVar5 = (uint)(lVar2 == 0 && lVar3 == 0);
      if (lVar2 != 0 && lVar3 != 0) {
        lVar4 = *(long *)(unaff_x20 + _DAT_11307fe98);
        if (lVar4 == *(long *)(lStack_68 + _DAT_11307fe98) && lVar2 == lVar3) {
          uVar5 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (lVar4);
          uVar5 = (uint)lVar4;
        }
      }
      lVar2 = *(long *)(unaff_x20 + _DAT_11307fea0);
      lVar3 = *(long *)(lStack_68 + _DAT_11307fea0);
      _objc_release();
      if (lVar6 == lVar7) {
        return uVar5 & lVar2 == lVar3;
      }
    }
  }
  return 0;
}



/* Entry: 1044c8198; end: 1044c8217; -[SCDiscoverFeedCompositeStoryId isEqual:] */

uint FUN_1044c8198(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1044c806c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1044c8218; end: 1044c821b; -[SCDiscoverFeedCompositeStoryId copyWithZone:] */

void FUN_1044c8218(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044c821c; end: 1044c831f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044c821c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x535550524f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x535550524f43,0xe600000000000000);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11307fe98))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11307fe98);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x494649544e454449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x494649544e454449,0xea00000000005245);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x4e4f4953524556;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f4953524556,0xe700000000000000);
  func_0x00010bf92fa0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1044c8320; end: 1044c836f; -[SCDiscoverFeedCompositeStoryId encodeWithCoder:] */

void FUN_1044c8320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1044c821c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1044c8370; end: 1044c839f;  */

void FUN_1044c8370(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1044c83a0(param_1);
  return;
}



/* Entry: 1044c83a0; end: 1044c8543;  */

undefined8 FUN_1044c83a0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  iVar1 = (int)&uStack_a0;
  uVar2 = 0x535550524f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x535550524f43,0xe600000000000000);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar2);
  uVar2 = 0x494649544e454449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x494649544e454449,0xea00000000005245);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar3 = lStack_98;
    uVar2 = uStack_a0;
    if (iVar1 != 0) goto LAB_1044c84a4;
  }
  lVar3 = 0;
  uVar2 = 0;
LAB_1044c84a4:
  uVar4 = 0x4e4f4953524556;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f4953524556,0xe700000000000000);
  func_0x00010bf66f00(param_1);
  _objc_release(uVar4);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  func_0x00010c005fa0();
  _objc_release(uVar2);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 1044c8544; end: 1044c856b; -[SCDiscoverFeedCompositeStoryId initWithCoder:] */

void FUN_1044c8544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1044c83a0();
  return;
}



/* Entry: 1044c856c; end: 1044c8587; -[SCDiscoverFeedCompositeStoryId description] */

void FUN_1044c856c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044c8588; end: 1044c8603; -[SCDiscoverFeedCompositeStoryId init] */

void FUN_1044c8588(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDiscoverBaseDataModels/SCDiscoverFeedCompositeStoryIdWrapper.swift",0x44,2,0x4f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044c85d0);
  (*pcVar1)();
}



/* Entry: 1044c8604; end: 1044c8617; -[SCDiscoverFeedCompositeStoryId .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044c8604(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307fe98 + 8))
  ;
  return;
}



/* Entry: 1044c8618; end: 1044c8637;  */

void FUN_1044c8618(void)

{
  _objc_opt_self(&PTR_PTR_1129c1ad0);
  return;
}



/* Entry: 1044c8638; end: 1044c863b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044c8638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307fe90) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307fe98);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11307fea0) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044c863c; end: 1044c864b; -[SCSpotlightCalloutLabel type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044c863c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307fed0);
}



/* Entry: 1044c864c; end: 1044c869f; -[SCSpotlightCalloutLabel friendUserIdsArray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044c864c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11307fed8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1044c86a0; end: 1044c86b3; -[SCSpotlightCalloutLabel friendCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044c86a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307fee0);
}



/* Entry: 1044c86b4; end: 1044c874f; -[SCSpotlightCalloutLabel initWithType:friendUserIdsArray:friendCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044c86b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_4,PTR___sSSN_11034da80);
  }
  *(undefined8 *)(param_1 + _DAT_11307fed0) = param_3;
  *(long *)(param_1 + _DAT_11307fed8) = param_4;
  *(undefined8 *)(param_1 + _DAT_11307fee0) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044c8750; end: 1044c87c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044c8750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307fed0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307fed8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307fee0) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044c87c4; end: 1044c87c7; -[SCSpotlightCalloutLabel copyWithZone:] */

void FUN_1044c87c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044c87c8; end: 1044c88cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044c87c8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = 0x45505954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45505954,0xe400000000000000);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  lVar2 = *(long *)(unaff_x20 + _DAT_11307fed8);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,PTR___sSSN_11034da80);
  }
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f2036b0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar2);
  _objc_release(uVar1);
  uVar1 = 0x435f444e45495246;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x435f444e45495246,0xec000000544e554f);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1044c88d0; end: 1044c891f; -[SCSpotlightCalloutLabel encodeWithCoder:] */

void FUN_1044c88d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1044c87c8(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1044c8920; end: 1044c894f;  */

void FUN_1044c8920(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1044c8950(param_1);
  return;
}



/* Entry: 1044c8950; end: 1044c8b43;  */

undefined8 FUN_1044c8950(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  undefined8 unaff_x20;
  long lVar5;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar1 = 0x45505954;
  uVar4 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45505954);
  lVar2 = param_1;
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  func_0x0001044c384c(lVar2);
  if ((uVar4 & 0xff) == 1) {
    _objc_release(param_1);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return 0;
  }
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f2036b0);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar1 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    plVar3 = &lStack_88;
    _swift_dynamicCast(plVar3,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar1,6);
    lVar2 = lStack_88;
    if ((int)plVar3 != 0) goto LAB_1044c8a9c;
  }
  lVar2 = 0;
LAB_1044c8a9c:
  uVar1 = 0x435f444e45495246;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x435f444e45495246,0xec000000544e554f);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar2;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,PTR___sSSN_11034da80);
    _swift_bridgeObjectRelease(lVar2);
  }
  func_0x00010c055b60();
  _objc_release(lVar5);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 1044c8b44; end: 1044c8b6b; -[SCSpotlightCalloutLabel initWithCoder:] */

void FUN_1044c8b44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1044c8950();
  return;
}



/* Entry: 1044c8b6c; end: 1044c8b87; -[SCSpotlightCalloutLabel description] */

void FUN_1044c8b6c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044c8b88; end: 1044c8c03; -[SCSpotlightCalloutLabel init] */

void FUN_1044c8b88(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDiscoverBaseDataModels/SCSpotlightCalloutLabelWrapper.swift",0x3d,2,0x42,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044c8bd0);
  (*pcVar1)();
}


