/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10005ee4c; end: 10005ee87;  */

undefined8 FUN_10005ee4c(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10005ee88; end: 10005ee9b;  */

void FUN_10005ee88(undefined8 param_1)

{
  if (lRam00000001000c6eb8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_100090b7c);
  return;
}



/* Entry: 10005ee9c; end: 10005eecb;  */

void FUN_10005ee9c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,param_3);
  return;
}



/* Entry: 10005eecc; end: 10005f2a3;  */

undefined8 * FUN_10005eecc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100085eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_1000b0d28)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  uVar7 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  param_1[6] = param_2[6];
  lVar4 = 0;
  FUN_10005cf80();
  iVar1 = *(int *)(lVar4 + 0x20);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  pcVar9 = *(code **)(*(long *)(lVar5 + -8) + 0x20);
  (*pcVar9)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar5);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x24));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x28));
  uVar7 = *puVar3;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x28));
  puVar2[1] = puVar3[1];
  *puVar2 = uVar7;
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x2c));
  uVar7 = *puVar3;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x2c));
  puVar2[1] = puVar3[1];
  *puVar2 = uVar7;
  lVar6 = 0;
  FUN_10005e080();
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x14));
  uVar7 = *puVar3;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x14));
  puVar2[1] = puVar3[1];
  *puVar2 = uVar7;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x18));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x1c));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x20));
  uVar7 = *puVar3;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x20));
  puVar2[1] = puVar3[1];
  *puVar2 = uVar7;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x24));
  uVar7 = 0;
  FUN_10005fcd4(0);
  puVar8 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,uVar7);
  uVar10 = *puVar2;
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  lVar4 = 0x1000c69c8;
  func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
  (*pcVar9)((long)puVar3 + (long)*(int *)(lVar4 + 0x30),(long)puVar2 + (long)*(int *)(lVar4 + 0x30),
            lVar5);
  _swift_storeEnumTagMultiPayload(puVar3,uVar7,(int)puVar8 == 1);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x28)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x28));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x2c));
  uVar7 = *puVar3;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x2c));
  puVar2[1] = puVar3[1];
  *puVar2 = uVar7;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x30));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x30));
  uVar7 = *param_2;
  puVar3[1] = param_2[1];
  *puVar3 = uVar7;
  puVar3[2] = param_2[2];
  _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  return param_1;
}



/* Entry: 10005f2a4; end: 10005f2d3;  */

void FUN_10005f2a4(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010005f2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 10005f2d4; end: 10005f33f;  */

void FUN_10005f2d4(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_10005e080();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10008cd18;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,2,&lStack_30);
  }
  return;
}



/* Entry: 10005f340; end: 10005f4a3;  */

int FUN_10005f340(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10005f3bc;
        goto LAB_10005f3a0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10005f3a0:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10005f3bc:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10005f4a4; end: 10005f53b;  */

long FUN_10005f4a4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10005f53c; end: 10005f61b;  */

undefined8 * FUN_10005f53c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar7 = param_2[6];
  uVar3 = param_2[7];
  param_1[6] = uVar7;
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar6 = param_2[10];
  param_1[10] = uVar6;
  lVar5 = param_2[0xc];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _objc_retain(uVar7);
  _objc_retain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _objc_retain(uVar6);
  if (lVar5 == 1) {
    uVar7 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar7;
    param_1[0xd] = param_2[0xd];
  }
  else {
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = lVar5;
    param_1[0xd] = param_2[0xd];
    _swift_bridgeObjectRetain(lVar5);
  }
  return param_1;
}



/* Entry: 10005f61c; end: 10005f7a3;  */

undefined8 * FUN_10005f61c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _objc_retain();
  _objc_release(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  _objc_retain();
  _objc_release(uVar1);
  lVar2 = param_1[0xc];
  if (lVar2 == 1) {
    if (param_2[0xc] == 1) {
      uVar3 = param_2[0xc];
      uVar1 = param_2[0xb];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar3;
      param_1[0xb] = uVar1;
    }
    else {
      param_1[0xb] = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[0xc] == 1) {
    FUN_10005dab0(param_1 + 0xb);
    uVar1 = param_2[0xd];
    uVar3 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar3;
    param_1[0xd] = uVar1;
  }
  else {
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar2);
    param_1[0xd] = param_2[0xd];
  }
  return param_1;
}



/* Entry: 10005f7a4; end: 10005f87f;  */

undefined8 * FUN_10005f7a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  _objc_release(uVar2);
  uVar2 = param_1[7];
  param_1[7] = param_2[7];
  _objc_release(uVar2);
  uVar2 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[10];
  param_1[10] = param_2[10];
  _objc_release(uVar2);
  if (param_1[0xc] != 1) {
    lVar3 = param_2[0xc];
    if (lVar3 != 1) {
      param_1[0xb] = param_2[0xb];
      param_1[0xc] = lVar3;
      _swift_bridgeObjectRelease();
      param_1[0xd] = param_2[0xd];
      return param_1;
    }
    FUN_10005dab0(param_1 + 0xb);
  }
  uVar2 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar2;
  param_1[0xd] = param_2[0xd];
  return param_1;
}



/* Entry: 10005f880; end: 10005f937;  */

int FUN_10005f880(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10005f938; end: 10005f977;  */

void FUN_10005f938(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c6ef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008cdb4;
  _swift_getWitnessTable(&UNK_10008cdb4,&UNK_1000b5668);
  puRam00000001000c6ef0 = puVar1;
  return;
}



/* Entry: 10005f978; end: 10005f98b;  */

bool FUN_10005f978(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10005f98c; end: 10005fa37;  */

void FUN_10005f98c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10005fa38; end: 10005fa47;  */

void FUN_10005fa38(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100085c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_1000b1448)();
  return;
}



/* Entry: 10005fa48; end: 10005fb1f;  */

long * FUN_10005fa48(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    lVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar4;
    _swift_bridgeObjectRetain();
    lVar4 = 0x1000c69c8;
    func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
    iVar2 = *(int *)(lVar4 + 0x30);
    lVar4 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))
              ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar4);
    _swift_storeEnumTagMultiPayload(param_1,param_3,(int)plVar3 == 1);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10005fb20; end: 10005fb73;  */

void FUN_10005fb20(long param_1)

{
  int iVar1;
  long lVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  lVar2 = 0x1000c69c8;
  func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
  iVar1 = *(int *)(lVar2 + 0x30);
  lVar2 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x00010005fb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 10005fb74; end: 10005fcd3;  */

undefined8 * FUN_10005fb74(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  lVar4 = 0x1000c69c8;
  func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
  iVar2 = *(int *)(lVar4 + 0x30);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))
            ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar4);
  _swift_storeEnumTagMultiPayload(param_1,param_3,(int)puVar3 == 1);
  return param_1;
}



/* Entry: 10005fcd4; end: 10005fce7;  */

void FUN_10005fcd4(undefined8 param_1)

{
  if (lRam00000001000c6f68 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_100090c5c);
  return;
}



/* Entry: 10005fce8; end: 10005fe37;  */

undefined8 * FUN_10005fce8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  lVar3 = 0x1000c69c8;
  func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
  iVar1 = *(int *)(lVar3 + 0x30);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar3);
  _swift_storeEnumTagMultiPayload(param_1,param_3,(int)puVar2 == 1);
  return param_1;
}



/* Entry: 10005fe38; end: 10005fe67;  */

void FUN_10005fe38(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010005fe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 10005fe68; end: 10005ff03;  */

void FUN_10005fe68(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lVar1 = *(long *)(lVar1 + -8);
    _swift_getTupleTypeLayout2(auStack_60,&UNK_10008cec8,lVar1 + 0x40);
    puStack_40 = auStack_60;
    _swift_getTupleTypeLayout2(auStack_80,&UNK_10008cec8,lVar1 + 0x40);
    puStack_38 = auStack_80;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,2,&puStack_40);
  }
  return;
}



/* Entry: 10005ff04; end: 100060047;  */

long * FUN_10005ff04(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar8 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar8;
    lVar10 = param_2[2];
    param_1[2] = lVar10;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    uVar6 = 0;
    FUN_10005fcd4(0);
    _swift_bridgeObjectRetain(lVar8);
    _objc_retain(lVar10);
    puVar7 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,uVar6);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    _swift_bridgeObjectRetain();
    lVar8 = 0x1000c69c8;
    func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
    iVar5 = *(int *)(lVar8 + 0x30);
    lVar8 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar8 + -8) + 0x10))
              ((long)puVar1 + (long)iVar5,(long)puVar2 + (long)iVar5,lVar8);
    _swift_storeEnumTagMultiPayload(puVar1,uVar6,(int)puVar7 == 1);
    iVar5 = *(int *)(param_3 + 0x20);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    lVar8 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = lVar8;
    _swift_retain();
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar9 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar8 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar8);
  return param_1;
}



/* Entry: 100060048; end: 1000600e7;  */

void FUN_100060048(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  lVar1 = param_1 + *(int *)(param_2 + 0x18);
  FUN_10005fcd4(0);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  lVar3 = 0x1000c69c8;
  func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
  iVar2 = *(int *)(lVar3 + 0x30);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 8))(lVar1 + iVar2,lVar3);
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20) + 8));
                    /* WARNING: Could not recover jumptable at 0x000100086234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_1000b1698)(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24) + 8));
  return;
}



/* Entry: 1000600e8; end: 1000605af;  */

undefined8 * FUN_1000600e8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar8 = param_2[2];
  param_1[2] = uVar8;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar5 = 0;
  FUN_10005fcd4(0);
  _swift_bridgeObjectRetain(uVar3);
  _objc_retain(uVar8);
  puVar6 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,uVar5);
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRetain();
  lVar7 = 0x1000c69c8;
  func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
  iVar4 = *(int *)(lVar7 + 0x30);
  lVar7 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar7 + -8) + 0x10))
            ((long)puVar1 + (long)iVar4,(long)puVar2 + (long)iVar4,lVar7);
  _swift_storeEnumTagMultiPayload(puVar1,uVar5,(int)puVar6 == 1);
  iVar4 = *(int *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar3 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  _swift_retain();
  _swift_retain(uVar3);
  return param_1;
}



/* Entry: 1000605b0; end: 1000605bb;  */

void FUN_1000605b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_1000b15c8)();
  return;
}



/* Entry: 1000605bc; end: 100060637;  */

ulong FUN_1000605bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  lVar1 = 0;
  FUN_10005fcd4();
  uVar2 = param_1 + *(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000100060634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Entry: 100060638; end: 100060643;  */

void FUN_100060638(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_1000b16d8)();
  return;
}



/* Entry: 100060644; end: 1000606b7;  */

void FUN_100060644(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  lVar1 = 0;
  FUN_10005fcd4();
                    /* WARNING: Could not recover jumptable at 0x0001000606b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x18),param_2,param_2,lVar1);
  return;
}



/* Entry: 1000606b8; end: 1000606cb;  */

void FUN_1000606b8(undefined8 param_1)

{
  if (lRam00000001000c6ff8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_100090c84);
  return;
}



/* Entry: 1000606cc; end: 10006075b;  */

void FUN_1000606cc(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_50 = &UNK_10008cec8;
  puStack_48 = &UNK_10008cef0;
  lVar1 = 0x13f;
  FUN_10005fcd4();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10008cf08;
    puStack_30 = &UNK_10008cf20;
    puStack_28 = &UNK_10008cf20;
    _swift_initStructMetadata(param_1,0x100,6,&puStack_50,param_1 + 0x10);
  }
  return;
}



/* Entry: 10006075c; end: 10006076b;  */

void FUN_10006075c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_1000b1608)(param_1,&UNK_100090cd4,1);
  return;
}



/* Entry: 10006076c; end: 1000608ef;  */

void FUN_10006076c(undefined8 *param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
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
  
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  *param_1 = param_4;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar2 = 0x1000c7040;
  func_0x0001000100d0(0x1000c7040,&UNK_10008cf88);
  plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar2 + 0x2c));
  __s7SwiftUI17VerticalAlignmentV3topACvgZ();
  *plVar1 = lVar2;
  plVar1[1] = 0;
  *(undefined1 *)(plVar1 + 2) = 1;
  lVar2 = 0x1000c7048;
  func_0x0001000100d0();
  FUN_1000608f0((long)plVar1 + (long)*(int *)(lVar2 + 0x2c));
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  __s7SwiftUI9AlignmentV6centerACvgZ();
  if (NAN(param_3 + -8.0)) {
    __sSo13os_log_type_ta0A0E5faultABvgZ();
    uVar3 = param_5;
    __s7SwiftUI3LogO013runtimeIssuesC0So9OS_os_logCvgZ();
    __s2os0A4_log_3dso0B0__ySo0a1_B7_type_ta_SVSo03OS_a1_B0Cs12StaticStringVs7CVarArg_pdtF
              (param_5,0x100000000,uVar3,"Contradictory frame constraints specified.",0x2a,2,
               PTR___swiftEmptyArrayStorage_1000b14d0);
    _objc_release(uVar3);
  }
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (&uStack_c0,0,1,0,1,0x7ff0000000000000,0,0,1,0,1);
  lVar2 = 0x1000c7050;
  func_0x0001000100d0(0x1000c7050,&UNK_10008cf98);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x24));
  param_1[9] = uStack_78;
  param_1[8] = uStack_80;
  param_1[0xb] = uStack_68;
  param_1[10] = uStack_70;
  param_1[0xd] = uStack_58;
  param_1[0xc] = uStack_60;
  param_1[1] = uStack_b8;
  *param_1 = uStack_c0;
  param_1[3] = uStack_a8;
  param_1[2] = uStack_b0;
  param_1[5] = uStack_98;
  param_1[4] = uStack_a0;
  param_1[7] = uStack_88;
  param_1[6] = uStack_90;
  return;
}



/* Entry: 1000608f0; end: 1000610cb;  */

void FUN_1000608f0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lStack_70;
  undefined8 *puStack_68;
  
  lVar4 = 0;
  puStack_68 = param_1;
  FUN_100061ce4();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar9 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  puVar10 = (undefined8 *)(lVar9 - extraout_x12);
  lVar5 = 0x1000c7058;
  func_0x0001000100d0(0x1000c7058,&UNK_10008cfa0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar7 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  plVar8 = (long *)(lVar7 - extraout_x12_00);
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  *plVar8 = lVar5;
  plVar8[1] = 0;
  *(undefined1 *)(plVar8 + 2) = 0;
  lVar5 = 0x1000c7060;
  func_0x0001000100d0(0x1000c7060,&UNK_10008cfa8);
  plVar1 = (long *)((long)plVar8 + (long)*(int *)(lVar5 + 0x2c));
  func_0x000100060b4c();
  uVar2 = *param_2;
  uVar3 = param_2[1];
  lVar6 = 0;
  FUN_1000606b8();
  FUN_100061d28((long)param_2 + (long)*(int *)(lVar6 + 0x18),
                (long)puVar10 + (long)*(int *)(lVar4 + 0x14),FUN_10005fcd4);
  *puVar10 = uVar2;
  puVar10[1] = uVar3;
  FUN_100061d28(puVar10,lVar9,FUN_100061ce4);
  *plVar1 = lVar5;
  lVar4 = 0x1000c7068;
  func_0x0001000100d0(0x1000c7068,&UNK_10008cfb0);
  FUN_100061d28(lVar9,(long)plVar1 + (long)*(int *)(lVar4 + 0x30),FUN_100061ce4);
  _swift_bridgeObjectRetain(uVar3);
  _swift_retain(lVar5);
  func_0x000100061d6c(puVar10,FUN_100061ce4);
  func_0x000100061d6c(lVar9,FUN_100061ce4);
  _swift_release(lVar5);
  FUN_1000630a4(plVar8,lVar7,0x1000c7058,&UNK_10008cfa0);
  puVar10 = puStack_68;
  *puStack_68 = 0;
  *(undefined1 *)(puStack_68 + 1) = 1;
  lVar5 = 0x1000c7070;
  func_0x0001000100d0(0x1000c7070,&UNK_10008cfb8);
  FUN_1000630a4(lVar7,(long)puVar10 + (long)*(int *)(lVar5 + 0x30),0x1000c7058,&UNK_10008cfa0);
  puVar10 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar5 + 0x40));
  *puVar10 = 0;
  *(undefined1 *)(puVar10 + 1) = 1;
  func_0x0001000630ec(plVar8,0x1000c7058,&UNK_10008cfa0);
  func_0x0001000630ec(lVar7,0x1000c7058,&UNK_10008cfa0);
  return;
}



/* Entry: 1000610cc; end: 10006195b;  */

void FUN_1000610cc(long *param_1,long param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 ******ppppppuVar4;
  undefined8 ******ppppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long extraout_x8;
  ulong uVar14;
  undefined8 ****ppppuVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  double dVar20;
  undefined8 *****pppppuVar21;
  undefined8 uStack_6d0;
  ulong uStack_6c8;
  long lStack_6c0;
  long lStack_6b8;
  ulong uStack_6b0;
  undefined8 uStack_6a8;
  long lStack_6a0;
  undefined8 *****pppppuStack_698;
  long lStack_690;
  undefined *puStack_688;
  undefined8 *****pppppuStack_680;
  long lStack_678;
  undefined1 auStack_670 [160];
  undefined8 ***pppuStack_5d0;
  undefined8 uStack_5c8;
  undefined2 uStack_5c0;
  undefined6 uStack_5be;
  undefined2 uStack_5b8;
  undefined6 uStack_5b6;
  undefined2 uStack_5b0;
  undefined6 uStack_5ae;
  undefined2 uStack_5a8;
  undefined6 uStack_5a6;
  undefined2 uStack_5a0;
  undefined6 uStack_59e;
  undefined2 uStack_598;
  undefined6 uStack_596;
  undefined2 uStack_590;
  undefined6 uStack_58e;
  undefined8 ***pppuStack_588;
  undefined8 uStack_580;
  undefined2 uStack_578;
  undefined8 uStack_576;
  undefined8 uStack_56e;
  undefined8 uStack_566;
  undefined8 uStack_55e;
  undefined8 uStack_556;
  undefined6 uStack_54e;
  undefined2 uStack_548;
  undefined6 uStack_546;
  undefined8 ***pppuStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  long lStack_508;
  long lStack_500;
  undefined1 uStack_4f8;
  undefined7 uStack_4f7;
  double dStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  undefined1 uStack_4d0;
  undefined8 ***pppuStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  long lStack_488;
  long lStack_480;
  undefined1 uStack_478;
  double dStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  undefined1 uStack_450;
  undefined8 ****ppppuStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  double dStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  ulong uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  double dStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  ulong uStack_350;
  undefined8 uStack_348;
  undefined8 ****ppppuStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  double dStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  ulong uStack_2d0;
  long lStack_2c8;
  code *pcStack_2c0;
  undefined *puStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined6 uStack_2a0;
  undefined2 uStack_29a;
  undefined6 uStack_298;
  undefined2 uStack_292;
  undefined6 uStack_290;
  undefined2 uStack_28a;
  undefined6 uStack_288;
  undefined2 uStack_282;
  undefined6 uStack_280;
  undefined2 uStack_27a;
  undefined6 uStack_278;
  undefined2 uStack_272;
  undefined6 uStack_270;
  undefined2 uStack_26a;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  double dStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  ulong uStack_230;
  long lStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 ****ppppuStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  double dStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  ulong uStack_190;
  long lStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 *****pppppuStack_160;
  long lStack_158;
  undefined8 ***pppuStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  double dStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [64];
  
  lVar3 = 0;
  uVar8 = param_3;
  FUN_1000606b8();
  lVar17 = *(long *)(lVar3 + -8);
  lVar16 = *(long *)(lVar17 + 0x40);
  lStack_6c0 = lVar3;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar13 = (long)&uStack_6d0 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_678 = lVar13;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar19 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar19 + 0x40));
  ppppuVar15 = (undefined8 ****)(lVar13 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  ppppppuVar4 = *(undefined8 *******)(param_2 + 0x10);
  lStack_6a0 = param_2;
  if (ppppppuVar4 == (undefined8 ******)0x0) {
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC
              (0,PTR___s7SwiftUI9EmptyViewVN_1000b0928,PTR___s7SwiftUI9EmptyViewVAA0D0AAWP_1000b0918
              );
    uStack_6d0._4_4_ =
         *(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8;
    pppppuStack_680 = ppppppuVar4;
  }
  else {
    _objc_retain();
    ppppppuVar5 = ppppppuVar4;
    __s7SwiftUI9AlignmentV6centerACvgZ();
    lStack_690 = lVar17;
    puStack_688 = param_3;
    _objc_retain();
    pppppuStack_698 = ppppppuVar4;
    __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
    uStack_6d0._4_4_ =
         *(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8;
    (**(code **)(lVar19 + 0x68))(ppppuVar15,uStack_6d0._4_4_,lVar3);
    ppppuVar6 = ppppuVar15;
    __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
              (0,0,0,0,ppppuVar15,ppppppuVar4);
    _swift_release(ppppppuVar4);
    (**(code **)(lVar19 + 8))(ppppuVar15,lVar3);
    ppppuVar7 = ppppuVar6;
    __s7SwiftUI5ImageV21SnapchatWidgetsSharedE013toDesaturatedC4ViewAA03AnyI0VyF();
    _swift_release(ppppuVar6);
    lStack_148 = 0;
    lStack_140 = CONCAT62(lStack_140._2_6_,1);
    pppppuStack_160 = ppppppuVar5;
    lStack_158 = uVar8;
    pppuStack_150 = ppppuVar7;
    _swift_retain(ppppuVar7);
    uVar8 = 0x1000c7078;
    func_0x0001000100d0(0x1000c7078,&UNK_10008cfc0);
    param_3 = puStack_688;
    uVar9 = 0x1000c7080;
    func_0x0001000633e8(0x1000c7080,0x1000c7078,&UNK_10008cfc0,
                        PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0);
    lVar17 = lStack_690;
    ppppppuVar4 = &pppppuStack_160;
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(ppppppuVar4,uVar8,uVar9);
    pppppuStack_680 = ppppppuVar4;
    _swift_release(ppppuVar7);
    _objc_release(pppppuStack_698);
  }
  lVar11 = lStack_678;
  lVar13 = lStack_6a0;
  FUN_100061d28(lStack_6a0,lStack_678,FUN_1000606b8);
  uStack_6c8 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar14 = uStack_6c8 + 0x10 & (uStack_6c8 ^ 0xffffffffffffffff);
  lStack_6b8 = uVar14 + lVar16;
  puVar10 = &UNK_1000b57a8;
  uStack_6b0 = uVar14;
  _swift_allocObject(&UNK_1000b57a8,lStack_6b8,uStack_6c8 | 7);
  puVar12 = puVar10 + uVar14;
  puStack_688 = puVar10;
  FUN_100061c54();
  __s7SwiftUI9AlignmentV6centerACvgZ();
  pppppuStack_698 = (undefined8 *****)puVar12;
  lStack_690 = lVar11;
  _objc_retain();
  uStack_6a8 = param_3;
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar19 + 0x68))(ppppuVar15,uStack_6d0._4_4_,lVar3);
  lVar16 = 0;
  ppppuVar6 = ppppuVar15;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,ppppuVar15,param_3);
  _swift_release(param_3);
  (**(code **)(lVar19 + 8))(ppppuVar15,lVar3);
  lVar17 = lStack_6c0;
  puVar1 = (undefined8 *)(lVar13 + *(int *)(lStack_6c0 + 0x20));
  pppppuVar21 = (undefined8 *****)*puVar1;
  uVar18 = puVar1[1];
  uVar8 = 0x1000c70b0;
  puVar10 = &UNK_10008cfe0;
  pppppuStack_160 = pppppuVar21;
  lStack_158 = uVar18;
  func_0x0001000100d0(0x1000c70b0,&UNK_10008cfe0);
  uVar9 = uVar8;
  __s7SwiftUI5StateV12wrappedValuexvg(&ppppuStack_200);
  dVar20 = (double)ppppuStack_200 * 0.5;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (auStack_c0,dVar20,0,0,1,uVar9,puVar10);
  uVar2 = SUB81(dVar20,0);
  uStack_292 = (undefined2)auStack_c0._8_8_;
  uStack_290 = SUB86(auStack_c0._8_8_,2);
  uStack_29a = (undefined2)auStack_c0._0_8_;
  uStack_298 = SUB86(auStack_c0._0_8_,2);
  uStack_282 = (undefined2)auStack_c0._24_8_;
  uStack_280 = SUB86(auStack_c0._24_8_,2);
  uStack_28a = (undefined2)auStack_c0._16_8_;
  uStack_288 = SUB86(auStack_c0._16_8_,2);
  uStack_272 = (undefined2)auStack_c0._40_8_;
  uStack_270 = SUB86(auStack_c0._40_8_,2);
  uStack_27a = (undefined2)auStack_c0._32_8_;
  uStack_278 = SUB86(auStack_c0._32_8_,2);
  __s7SwiftUI4EdgeO3SetV3topAEvgZ();
  puVar1 = (undefined8 *)(lVar13 + *(int *)(lVar17 + 0x24));
  pppppuStack_160 = (undefined8 *****)*puVar1;
  lStack_158 = puVar1[1];
  __s7SwiftUI5StateV12wrappedValuexvg(&ppppuStack_200,uVar8);
  ppppuVar15 = ppppuStack_200;
  pppppuStack_160 = pppppuVar21;
  lStack_158 = uVar18;
  __s7SwiftUI5StateV12wrappedValuexvg(&ppppuStack_200,uVar8);
  dVar20 = (double)ppppuStack_200 * 0.5 * (double)ppppuVar15 * -0.8;
  uStack_5c8 = 0;
  uStack_5c0 = 1;
  lVar17 = CONCAT26(uStack_28a,uStack_290);
  uStack_5b6 = uStack_298;
  uStack_5b0 = uStack_292;
  uStack_5be = uStack_2a0;
  uStack_5b8 = uStack_29a;
  uStack_5a6 = uStack_288;
  uStack_5a0 = uStack_282;
  uStack_5ae = uStack_290;
  uStack_5a8 = uStack_28a;
  lVar3 = CONCAT26(uStack_27a,uStack_280);
  uStack_596 = uStack_278;
  uStack_59e = uStack_280;
  uStack_598 = uStack_27a;
  uStack_590 = uStack_272;
  uStack_58e = uStack_270;
  pppuStack_5d0 = ppppuVar6;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lStack_1d8 = CONCAT62(uStack_5a6,uStack_5a8);
  lStack_1e0 = CONCAT62(uStack_5ae,uStack_5b0);
  lStack_1c8 = CONCAT62(uStack_596,uStack_598);
  lStack_1d0 = CONCAT62(uStack_59e,uStack_5a0);
  lStack_1c0 = CONCAT62(uStack_58e,uStack_590);
  lStack_1e8 = CONCAT62(uStack_5b6,uStack_5b8);
  lStack_1f0 = CONCAT62(uStack_5be,uStack_5c0);
  lStack_1f8 = uStack_5c8;
  ppppuStack_200 = (undefined8 ****)pppuStack_5d0;
  uStack_580 = 0;
  uStack_578 = 1;
  uStack_56e = CONCAT26(uStack_292,uStack_298);
  uStack_576 = CONCAT26(uStack_29a,uStack_2a0);
  uStack_55e = CONCAT26(uStack_282,uStack_288);
  uStack_566 = CONCAT26(uStack_28a,uStack_290);
  uStack_556 = CONCAT26(uStack_27a,uStack_280);
  uStack_546 = uStack_270;
  uStack_54e = uStack_278;
  uStack_548 = uStack_272;
  pppuStack_588 = ppppuVar6;
  FUN_1000630a4(&pppuStack_5d0,&pppppuStack_160,0x1000c4778,&UNK_10008a450);
  func_0x0001000630ec(&pppuStack_588,0x1000c4778,&UNK_10008a450);
  lStack_500 = lStack_1c0;
  uStack_518 = lStack_1d8;
  uStack_520 = lStack_1e0;
  lStack_508 = lStack_1c8;
  uStack_510 = lStack_1d0;
  lStack_268 = lStack_1c8;
  uStack_270 = (undefined6)lStack_1d0;
  uStack_26a = (undefined2)((ulong)lStack_1d0 >> 0x30);
  uStack_278 = (undefined6)lStack_1d8;
  uStack_272 = (undefined2)((ulong)lStack_1d8 >> 0x30);
  uStack_280 = (undefined6)lStack_1e0;
  uStack_27a = (undefined2)((ulong)lStack_1e0 >> 0x30);
  uStack_538 = lStack_1f8;
  pppuStack_540 = ppppuStack_200;
  uStack_528 = lStack_1e8;
  uStack_530 = lStack_1f0;
  uStack_4d0 = 0;
  uStack_230 = uStack_230 & 0xffffffffffffff00;
  uStack_288 = (undefined6)lStack_1e8;
  uStack_282 = (undefined2)((ulong)lStack_1e8 >> 0x30);
  uStack_290 = (undefined6)lStack_1f0;
  uStack_28a = (undefined2)((ulong)lStack_1f0 >> 0x30);
  uStack_298 = (undefined6)lStack_1f8;
  uStack_292 = (undefined2)((ulong)lStack_1f8 >> 0x30);
  uStack_2a0 = SUB86(ppppuStack_200,0);
  uStack_29a = (undefined2)((ulong)ppppuStack_200 >> 0x30);
  lStack_258 = CONCAT71(uStack_4f7,uVar2);
  lStack_260 = lStack_1c0;
  lStack_480 = lStack_1c0;
  uStack_498 = lStack_1d8;
  uStack_4a0 = lStack_1e0;
  lStack_488 = lStack_1c8;
  uStack_490 = lStack_1d0;
  uStack_4b8 = lStack_1f8;
  pppuStack_4c0 = ppppuStack_200;
  uStack_4a8 = lStack_1e8;
  uStack_4b0 = lStack_1f0;
  uStack_450 = 0;
  uStack_4f8 = uVar2;
  dStack_4f0 = dVar20;
  lStack_4e8 = lVar3;
  lStack_4e0 = lVar17;
  lStack_4d8 = lVar16;
  uStack_478 = uVar2;
  dStack_470 = dVar20;
  lStack_468 = lVar3;
  lStack_460 = lVar17;
  lStack_458 = lVar16;
  dStack_250 = dVar20;
  lStack_248 = lVar3;
  lStack_240 = lVar17;
  lStack_238 = lVar16;
  FUN_1000630a4(&pppuStack_540,&pppppuStack_160,0x1000c70b8,&UNK_10008cff0);
  func_0x0001000630ec(&pppuStack_4c0,0x1000c70b8,&UNK_10008cff0);
  lVar17 = lStack_678;
  FUN_100061d28(lVar13,lStack_678,FUN_1000606b8);
  uVar14 = lStack_6b8 + 7U & 0xfffffffffffffff8;
  puVar10 = &UNK_1000b57d0;
  _swift_allocObject(&UNK_1000b57d0,uVar14 + 8,uStack_6c8 | 7);
  FUN_100061c54(lVar17,puVar10 + uStack_6b0);
  lStack_3f8 = lStack_258;
  lStack_400 = lStack_260;
  lStack_3e8 = lStack_248;
  dStack_3f0 = dStack_250;
  lStack_3d8 = lStack_238;
  lStack_3e0 = lStack_240;
  lStack_438 = CONCAT26(uStack_292,uStack_298);
  ppppuStack_440 = (undefined8 ****)CONCAT26(uStack_29a,uStack_2a0);
  uStack_3b8 = CONCAT26(uStack_292,uStack_298);
  uStack_3c0 = CONCAT26(uStack_29a,uStack_2a0);
  lStack_428 = CONCAT26(uStack_282,uStack_288);
  lStack_430 = CONCAT26(uStack_28a,uStack_290);
  uStack_3a8 = CONCAT26(uStack_282,uStack_288);
  uStack_3b0 = CONCAT26(uStack_28a,uStack_290);
  lStack_418 = CONCAT26(uStack_272,uStack_278);
  lStack_420 = CONCAT26(uStack_27a,uStack_280);
  uStack_398 = CONCAT26(uStack_272,uStack_278);
  uStack_3a0 = CONCAT26(uStack_27a,uStack_280);
  lStack_410 = CONCAT26(uStack_26a,uStack_270);
  uStack_390 = CONCAT26(uStack_26a,uStack_270);
  lStack_408 = lStack_268;
  uStack_3d0 = uStack_230;
  uStack_3c8 = 0xbff0000000000000;
  lStack_1b8 = lStack_258;
  lStack_1c0 = lStack_260;
  lStack_1a8 = lStack_248;
  dStack_1b0 = dStack_250;
  lStack_198 = lStack_238;
  lStack_1a0 = lStack_240;
  lStack_188 = -0x4010000000000000;
  uStack_190 = uStack_230;
  lStack_1c8 = lStack_268;
  lStack_388 = lStack_268;
  *(undefined8 *)(puVar10 + uVar14) = uStack_6a8;
  lStack_368 = lStack_248;
  dStack_370 = dStack_250;
  lStack_358 = lStack_238;
  lStack_360 = lStack_240;
  lStack_378 = lStack_258;
  lStack_380 = lStack_260;
  uStack_350 = uStack_230;
  uStack_348 = 0xbff0000000000000;
  ppppuStack_200 = ppppuStack_440;
  lStack_1f8 = lStack_438;
  lStack_1f0 = lStack_430;
  lStack_1e8 = lStack_428;
  lStack_1e0 = lStack_420;
  lStack_1d8 = lStack_418;
  lStack_1d0 = lStack_410;
  _objc_retain();
  FUN_1000630a4(&ppppuStack_440,&pppppuStack_160,0x1000c70c0,&UNK_10008cff8);
  func_0x0001000630ec(&uStack_3c0,0x1000c70c0,&UNK_10008cff8);
  lStack_2f8 = lStack_1b8;
  lStack_300 = lStack_1c0;
  lStack_2e8 = lStack_1a8;
  dStack_2f0 = dStack_1b0;
  lStack_2d8 = lStack_198;
  lStack_2e0 = lStack_1a0;
  lStack_2c8 = lStack_188;
  uStack_2d0 = uStack_190;
  lStack_338 = lStack_1f8;
  ppppuStack_340 = ppppuStack_200;
  lStack_328 = lStack_1e8;
  lStack_330 = lStack_1f0;
  lStack_318 = lStack_1d8;
  lStack_320 = lStack_1e0;
  lStack_308 = lStack_1c8;
  lStack_310 = lStack_1d0;
  lStack_258 = lStack_1b8;
  lStack_260 = lStack_1c0;
  lStack_248 = lStack_1a8;
  dStack_250 = dStack_1b0;
  lStack_238 = lStack_198;
  lStack_240 = lStack_1a0;
  lStack_228 = lStack_188;
  uStack_230 = uStack_190;
  uStack_298 = (undefined6)lStack_1f8;
  uStack_292 = (undefined2)((ulong)lStack_1f8 >> 0x30);
  uStack_2a0 = SUB86(ppppuStack_200,0);
  uStack_29a = (undefined2)((ulong)ppppuStack_200 >> 0x30);
  uStack_288 = (undefined6)lStack_1e8;
  uStack_282 = (undefined2)((ulong)lStack_1e8 >> 0x30);
  uStack_290 = (undefined6)lStack_1f0;
  uStack_28a = (undefined2)((ulong)lStack_1f0 >> 0x30);
  pcStack_2c0 = FUN_100062058;
  lStack_2b0 = 0;
  lStack_2a8 = 0;
  uStack_278 = (undefined6)lStack_1d8;
  uStack_272 = (undefined2)((ulong)lStack_1d8 >> 0x30);
  uStack_280 = (undefined6)lStack_1e0;
  uStack_27a = (undefined2)((ulong)lStack_1e0 >> 0x30);
  lStack_268 = lStack_1c8;
  uStack_270 = (undefined6)lStack_1d0;
  uStack_26a = (undefined2)((ulong)lStack_1d0 >> 0x30);
  pcStack_220 = FUN_100062058;
  uStack_210 = 0;
  uStack_208 = 0;
  puStack_2b8 = puVar10;
  puStack_218 = puVar10;
  FUN_1000630a4(&ppppuStack_340,&pppppuStack_160,0x1000c70c8,&UNK_10008d000);
  func_0x0001000630ec(&uStack_2a0,0x1000c70c8,&UNK_10008d000);
  pppppuVar21 = pppppuStack_680;
  puVar10 = puStack_688;
  lStack_f8 = lStack_2d8;
  lStack_100 = lStack_2e0;
  lStack_e8 = lStack_2c8;
  uStack_f0 = uStack_2d0;
  puStack_d8 = puStack_2b8;
  pcStack_e0 = pcStack_2c0;
  lStack_c8 = lStack_2a8;
  lStack_d0 = lStack_2b0;
  lStack_138 = lStack_318;
  lStack_140 = lStack_320;
  lStack_128 = lStack_308;
  lStack_130 = lStack_310;
  lStack_118 = lStack_2f8;
  lStack_120 = lStack_300;
  lStack_108 = lStack_2e8;
  dStack_110 = dStack_2f0;
  lStack_158 = lStack_338;
  pppppuStack_160 = (undefined8 *****)ppppuStack_340;
  lStack_148 = lStack_328;
  pppuStack_150 = (undefined8 ***)lStack_330;
  lStack_198 = lStack_2d8;
  lStack_1a0 = lStack_2e0;
  lStack_188 = lStack_2c8;
  uStack_190 = uStack_2d0;
  puStack_178 = puStack_2b8;
  pcStack_180 = pcStack_2c0;
  lStack_168 = lStack_2a8;
  lStack_170 = lStack_2b0;
  lStack_1d8 = lStack_318;
  lStack_1e0 = lStack_320;
  lStack_1c8 = lStack_308;
  lStack_1d0 = lStack_310;
  lStack_1b8 = lStack_2f8;
  lStack_1c0 = lStack_300;
  lStack_1a8 = lStack_2e8;
  dStack_1b0 = dStack_2f0;
  lStack_1f8 = lStack_338;
  ppppuStack_200 = ppppuStack_340;
  lStack_1e8 = lStack_328;
  lStack_1f0 = lStack_330;
  param_1[0x12] = lStack_2d8;
  param_1[0x11] = lStack_2e0;
  param_1[0x14] = lStack_2c8;
  param_1[0x13] = uStack_2d0;
  param_1[0x16] = (long)puStack_2b8;
  param_1[0x15] = (long)pcStack_2c0;
  param_1[0x18] = lStack_2a8;
  param_1[0x17] = lStack_2b0;
  param_1[10] = lStack_318;
  param_1[9] = lStack_320;
  param_1[0xc] = lStack_308;
  param_1[0xb] = lStack_310;
  param_1[0xe] = lStack_2f8;
  param_1[0xd] = lStack_300;
  param_1[0x10] = lStack_2e8;
  param_1[0xf] = (long)dStack_2f0;
  param_1[6] = lStack_338;
  param_1[5] = (long)ppppuStack_340;
  *param_1 = (long)pppppuStack_680;
  param_1[1] = (long)FUN_100061f1c;
  param_1[2] = (long)puStack_688;
  param_1[3] = lStack_690;
  param_1[4] = (long)pppppuStack_698;
  param_1[8] = lStack_328;
  param_1[7] = lStack_330;
  _swift_retain(pppppuStack_680);
  _swift_retain(puVar10);
  FUN_1000630a4(&ppppuStack_200,auStack_670,0x1000c70c8,&UNK_10008d000);
  func_0x0001000630ec(&pppppuStack_160,0x1000c70c8,&UNK_10008d000);
  _swift_release(puVar10);
  _swift_release(pppppuVar21);
  return;
}



/* Entry: 10006195c; end: 100061aaf;  */

void FUN_10006195c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = 0;
  uStack_68 = param_2;
  __s7SwiftUI13GeometryProxyVMa();
  lVar11 = *(long *)(lVar3 + -8);
  lVar7 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  puVar6 = auStack_70 + -(lVar7 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_1000606b8();
  lVar9 = *(long *)(lVar4 + -8);
  lVar12 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar13 = (long)puVar6 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  __s7SwiftUI5ColorV5clearACvgZ();
  FUN_100061d28(param_3,lVar13,FUN_1000606b8);
  (**(code **)(lVar11 + 0x10))(puVar6,uStack_68,lVar3);
  bVar1 = *(byte *)(lVar9 + 0x50);
  uVar8 = (ulong)bVar1 + 0x10 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  bVar2 = *(byte *)(lVar11 + 0x50);
  uVar10 = lVar12 + (ulong)bVar2 + uVar8 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  puVar5 = &UNK_1000b57f8;
  _swift_allocObject(&UNK_1000b57f8,uVar10 + lVar7,bVar1 | bVar2 | 7);
  FUN_100061c54(lVar13,puVar5 + uVar8);
  (**(code **)(lVar11 + 0x20))(puVar5 + uVar10,puVar6,lVar3);
  *param_1 = lVar4;
  param_1[1] = (long)FUN_1000621b4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = (long)puVar5;
  return;
}



/* Entry: 100061ab0; end: 100061b97;  */

void FUN_100061ab0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  FUN_1000606b8();
  uVar1 = 0x1000c70b0;
  uStack_38 = param_1;
  func_0x0001000100d0(0x1000c70b0,&UNK_10008cfe0);
  __s7SwiftUI5StateV12wrappedValuexvs(&uStack_38,uVar1);
  return;
}



/* Entry: 100061b98; end: 100061ba3;  */

void FUN_100061b98(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 100061ba4; end: 100061c4f;  */

void FUN_100061ba4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)(param_2 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  FUN_100061d28();
  uVar2 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  puVar1 = &UNK_1000b5780;
  _swift_allocObject(&UNK_1000b5780,uVar5 + lVar3,uVar2 | 7);
  FUN_100061c54(&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),puVar1 + uVar5);
  *param_1 = FUN_100061c98;
  param_1[1] = puVar1;
  return;
}



/* Entry: 100061c50; end: 100061c53;  */

void FUN_100061c50(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  
  lVar4 = 0;
  FUN_1000606b8();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _objc_release(*(undefined8 *)(lVar1 + 0x10));
  lVar2 = lVar1 + *(int *)(lVar4 + 0x18);
  FUN_10005fcd4(0);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
  lVar5 = 0x1000c69c8;
  func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
  iVar3 = *(int *)(lVar5 + 0x30);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 8))(lVar2 + iVar3,lVar5);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x20) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x24) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100061c54; end: 100061c97;  */

undefined8 FUN_100061c54(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1000606b8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100061c98; end: 100061ce3;  */

void FUN_100061c98(undefined8 *param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
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
  
  lVar3 = 0;
  FUN_1000606b8();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar2 = unaff_x20 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff));
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  *param_1 = param_4;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar3 = 0x1000c7040;
  func_0x0001000100d0(0x1000c7040,&UNK_10008cf88);
  plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar3 + 0x2c));
  __s7SwiftUI17VerticalAlignmentV3topACvgZ();
  *plVar1 = lVar3;
  plVar1[1] = 0;
  *(undefined1 *)(plVar1 + 2) = 1;
  lVar3 = 0x1000c7048;
  func_0x0001000100d0();
  FUN_1000608f0((long)plVar1 + (long)*(int *)(lVar3 + 0x2c));
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  __s7SwiftUI9AlignmentV6centerACvgZ();
  if (NAN(param_3 + -8.0)) {
    __sSo13os_log_type_ta0A0E5faultABvgZ();
    lVar3 = lVar2;
    __s7SwiftUI3LogO013runtimeIssuesC0So9OS_os_logCvgZ();
    __s2os0A4_log_3dso0B0__ySo0a1_B7_type_ta_SVSo03OS_a1_B0Cs12StaticStringVs7CVarArg_pdtF
              (lVar2,0x100000000,lVar3,"Contradictory frame constraints specified.",0x2a,2,
               PTR___swiftEmptyArrayStorage_1000b14d0);
    _objc_release(lVar3);
  }
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (&uStack_c0,0,1,0,1,0x7ff0000000000000,0,0,1,0,1);
  lVar3 = 0x1000c7050;
  func_0x0001000100d0(0x1000c7050,&UNK_10008cf98);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
  param_1[9] = uStack_78;
  param_1[8] = uStack_80;
  param_1[0xb] = uStack_68;
  param_1[10] = uStack_70;
  param_1[0xd] = uStack_58;
  param_1[0xc] = uStack_60;
  param_1[1] = uStack_b8;
  *param_1 = uStack_c0;
  param_1[3] = uStack_a8;
  param_1[2] = uStack_b0;
  param_1[5] = uStack_98;
  param_1[4] = uStack_a0;
  param_1[7] = uStack_88;
  param_1[6] = uStack_90;
  return;
}



/* Entry: 100061ce4; end: 100061cf7;  */

void FUN_100061ce4(undefined8 param_1)

{
  if (lRam00000001000c7128 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_100090cac);
  return;
}



/* Entry: 100061cf8; end: 100061d27;  */

void FUN_100061cf8(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,param_3);
  return;
}



/* Entry: 100061d28; end: 100061e3f;  */

undefined8 FUN_100061d28(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100061e40; end: 100061f1b;  */

void FUN_100061e40(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  
  lVar4 = 0;
  FUN_1000606b8();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _objc_release(*(undefined8 *)(lVar1 + 0x10));
  lVar2 = lVar1 + *(int *)(lVar4 + 0x18);
  FUN_10005fcd4(0);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
  lVar5 = 0x1000c69c8;
  func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
  iVar3 = *(int *)(lVar5 + 0x30);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 8))(lVar2 + iVar3,lVar5);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x20) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x24) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100061f1c; end: 100061f67;  */

void FUN_100061f1c(long *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar5 = 0;
  FUN_1000606b8();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  lVar5 = 0;
  uStack_68 = param_2;
  __s7SwiftUI13GeometryProxyVMa();
  lVar11 = *(long *)(lVar5 + -8);
  lVar8 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  puVar7 = auStack_70 + -(lVar8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1000606b8();
  lVar9 = *(long *)(lVar3 + -8);
  lVar12 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar13 = (long)puVar7 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  __s7SwiftUI5ColorV5clearACvgZ();
  FUN_100061d28(unaff_x20 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)),lVar13,FUN_1000606b8);
  (**(code **)(lVar11 + 0x10))(puVar7,uStack_68,lVar5);
  bVar1 = *(byte *)(lVar9 + 0x50);
  uVar6 = (ulong)bVar1 + 0x10 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  bVar2 = *(byte *)(lVar11 + 0x50);
  uVar10 = lVar12 + (ulong)bVar2 + uVar6 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  puVar4 = &UNK_1000b57f8;
  _swift_allocObject(&UNK_1000b57f8,uVar10 + lVar8,bVar1 | bVar2 | 7);
  FUN_100061c54(lVar13,puVar4 + uVar6);
  (**(code **)(lVar11 + 0x20))(puVar4 + uVar10,puVar7,lVar5);
  *param_1 = lVar3;
  param_1[1] = (long)FUN_1000621b4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = (long)puVar4;
  return;
}



/* Entry: 100061f68; end: 100062057;  */

void FUN_100061f68(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  
  lVar4 = 0;
  FUN_1000606b8();
  lVar7 = *(long *)(lVar4 + -8);
  uVar6 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar6 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
  lVar1 = unaff_x20 + uVar6;
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _objc_release(*(undefined8 *)(lVar1 + 0x10));
  lVar2 = lVar1 + *(int *)(lVar4 + 0x18);
  FUN_10005fcd4(0);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
  lVar5 = 0x1000c69c8;
  func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
  iVar3 = *(int *)(lVar5 + 0x30);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 8))(lVar2 + iVar3,lVar5);
  lVar5 = *(long *)(lVar7 + 0x40);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x20) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x24) + 8));
  _objc_release(*(undefined8 *)(unaff_x20 + (uVar6 + lVar5 + 7 & 0xfffffffffffffff8)));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100062058; end: 100062097;  */

void FUN_100062058(double param_1,double param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  double dStack_38;
  
  lVar1 = 0;
  FUN_1000606b8();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar2 = *(undefined8 *)
           (unaff_x20 +
           (*(long *)(*(long *)(lVar1 + -8) + 0x40) + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff))
            + 7 & 0xffffffffffffff8));
  func_0x000100087660(uVar2);
  func_0x000100087660(uVar2);
  FUN_1000606b8();
  uVar2 = 0x1000c70b0;
  dStack_38 = param_2 / param_1;
  func_0x0001000100d0(0x1000c70b0,&UNK_10008cfe0);
  __s7SwiftUI5StateV12wrappedValuexvs(&dStack_38,uVar2);
  return;
}



/* Entry: 100062098; end: 1000621b3;  */

void FUN_100062098(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  lVar3 = 0;
  FUN_1000606b8();
  lVar6 = *(long *)(lVar3 + -8);
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar8 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
  lVar4 = 0;
  __s7SwiftUI13GeometryProxyVMa();
  lVar1 = unaff_x20 + uVar8;
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _objc_release(*(undefined8 *)(lVar1 + 0x10));
  lVar9 = lVar1 + *(int *)(lVar3 + 0x18);
  FUN_10005fcd4(0);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar9 + 8));
  lVar5 = 0x1000c69c8;
  func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
  iVar2 = *(int *)(lVar5 + 0x30);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 8))(lVar9 + iVar2,lVar5);
  lVar9 = *(long *)(lVar4 + -8);
  uVar7 = (ulong)*(byte *)(lVar9 + 0x50);
  lVar5 = *(long *)(lVar6 + 0x40);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x20) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x24) + 8));
  (**(code **)(lVar9 + 8))(unaff_x20 + (lVar5 + uVar7 + uVar8 & (uVar7 ^ 0xffffffffffffffff)),lVar4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 1000621b4; end: 100062213;  */

void FUN_1000621b4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uStack_38;
  
  lVar2 = 0;
  FUN_1000606b8();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar4 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  lVar5 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  lVar2 = 0;
  __s7SwiftUI13GeometryProxyVMa();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg
            (unaff_x20 + uVar4,unaff_x20 + (uVar4 + lVar5 + uVar3 & (uVar3 ^ 0xffffffffffffffff)));
  FUN_1000606b8();
  uVar1 = 0x1000c70b0;
  uStack_38 = param_1;
  func_0x0001000100d0(0x1000c70b0,&UNK_10008cfe0);
  __s7SwiftUI5StateV12wrappedValuexvs(&uStack_38,uVar1);
  return;
}



/* Entry: 100062214; end: 10006230b;  */

long * FUN_100062214(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar8 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar8;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar6 = 0;
    FUN_10005fcd4(0);
    _swift_bridgeObjectRetain(lVar8);
    puVar7 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,uVar6);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    _swift_bridgeObjectRetain();
    lVar8 = 0x1000c69c8;
    func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
    iVar5 = *(int *)(lVar8 + 0x30);
    lVar8 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar8 + -8) + 0x10))
              ((long)puVar1 + (long)iVar5,(long)puVar2 + (long)iVar5,lVar8);
    _swift_storeEnumTagMultiPayload(puVar1,uVar6,(int)puVar7 == 1);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar9 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar8 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10006230c; end: 10006237b;  */

void FUN_10006230c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  param_1 = param_1 + *(int *)(param_2 + 0x14);
  FUN_10005fcd4(0);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  lVar2 = 0x1000c69c8;
  func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
  iVar1 = *(int *)(lVar2 + 0x30);
  lVar2 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x000100062378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 10006237c; end: 1000626c3;  */

undefined8 * FUN_10006237c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar4 = 0;
  FUN_10005fcd4(0);
  _swift_bridgeObjectRetain(uVar2);
  puVar5 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar4);
  uVar2 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  _swift_bridgeObjectRetain();
  lVar6 = 0x1000c69c8;
  func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
  iVar3 = *(int *)(lVar6 + 0x30);
  lVar6 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar6 + -8) + 0x10))
            ((long)puVar1 + (long)iVar3,(long)param_2 + (long)iVar3,lVar6);
  _swift_storeEnumTagMultiPayload(puVar1,uVar4,(int)puVar5 == 1);
  return param_1;
}



/* Entry: 1000626c4; end: 1000626cf;  */

void FUN_1000626c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_1000b15c8)();
  return;
}



/* Entry: 1000626d0; end: 10006274b;  */

ulong FUN_1000626d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  lVar1 = 0;
  FUN_10005fcd4();
  uVar2 = param_1 + *(int *)(param_3 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x000100062748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Entry: 10006274c; end: 100062757;  */

void FUN_10006274c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_1000b16d8)();
  return;
}



/* Entry: 100062758; end: 1000627cb;  */

void FUN_100062758(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  lVar1 = 0;
  FUN_10005fcd4();
                    /* WARNING: Could not recover jumptable at 0x0001000627c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x14),param_2,param_2,lVar1);
  return;
}



/* Entry: 1000627cc; end: 10006283f;  */

void FUN_1000627cc(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10008cec8;
  lVar1 = 0x13f;
  FUN_10005fcd4();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,2,&puStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 100062840; end: 100062873;  */

void FUN_100062840(void)

{
  func_0x0001000633e8(0x1000c7160,0x1000c7168,&UNK_10008d028,
                      PTR___s7SwiftUI14GeometryReaderVyxGAA4ViewAAMc_1000b0370);
  return;
}



/* Entry: 100062874; end: 100062883;  */

void FUN_100062874(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_1000b1608)(param_1,&UNK_100090cfc,1);
  return;
}



/* Entry: 100062884; end: 10006309f;  */

void FUN_100062884(long param_1,undefined *param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uStack_8b0;
  undefined1 uStack_8a8;
  undefined *puStack_7a0;
  undefined8 uStack_798;
  ulong uStack_790;
  undefined *puStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined1 uStack_728;
  undefined7 uStack_727;
  undefined1 uStack_720;
  undefined7 uStack_71f;
  undefined1 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined1 uStack_6c8;
  undefined7 uStack_6c7;
  undefined1 uStack_6c0;
  undefined7 uStack_6bf;
  undefined1 uStack_6b8;
  undefined7 uStack_6b7;
  undefined *puStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined1 uStack_640;
  undefined *puStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined1 uStack_5c0;
  undefined *puStack_5b0;
  undefined8 uStack_5a8;
  ulong uStack_5a0;
  undefined *puStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined1 uStack_538;
  undefined7 uStack_537;
  undefined1 uStack_530;
  undefined7 uStack_52f;
  undefined1 uStack_528;
  undefined *puStack_520;
  undefined8 uStack_518;
  ulong uStack_510;
  undefined *puStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 uStack_4a8;
  undefined7 uStack_4a7;
  undefined1 uStack_4a0;
  undefined7 uStack_49f;
  undefined1 uStack_498;
  undefined7 uStack_497;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined *puStack_460;
  undefined8 uStack_458;
  ulong uStack_450;
  undefined *puStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 uStack_3e8;
  undefined7 uStack_3e7;
  undefined1 uStack_3e0;
  undefined7 uStack_3df;
  undefined1 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 uStack_3a0;
  undefined7 uStack_39f;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 uStack_388;
  undefined7 uStack_387;
  undefined1 uStack_380;
  undefined7 uStack_37f;
  undefined1 uStack_378;
  undefined *puStack_370;
  undefined8 uStack_368;
  ulong uStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  ulong uStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
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
  undefined1 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
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
  undefined1 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  uStack_278 = 0x4000000000000000;
  uStack_270 = uStack_270 & 0xffffffffffffff00;
  puStack_280 = param_2;
  func_0x000100062f10(&puStack_170);
  uStack_668 = uStack_128;
  uStack_670 = uStack_130;
  uStack_658 = uStack_118;
  uStack_660 = uStack_120;
  uStack_648 = uStack_108;
  uStack_650 = uStack_110;
  uStack_640 = (undefined1)uStack_100;
  uStack_6a8 = uStack_168;
  puStack_6b0 = puStack_170;
  uStack_698 = puStack_158;
  uStack_6a0 = uStack_160;
  uStack_688 = uStack_148;
  uStack_690 = uStack_150;
  uStack_678 = uStack_138;
  uStack_680 = uStack_140;
  uStack_628 = uStack_168;
  puStack_630 = puStack_170;
  uStack_618 = puStack_158;
  uStack_620 = uStack_160;
  uStack_608 = uStack_148;
  uStack_610 = uStack_150;
  uStack_5f8 = uStack_138;
  uStack_600 = uStack_140;
  uStack_5e8 = uStack_128;
  uStack_5f0 = uStack_130;
  uStack_5d8 = uStack_118;
  uStack_5e0 = uStack_120;
  uStack_5c8 = uStack_108;
  uStack_5d0 = uStack_110;
  uStack_5c0 = (undefined1)uStack_100;
  uVar9 = 0x1000c7170;
  FUN_1000630a4(&puStack_6b0,&uStack_8b0,0x1000c7170,&UNK_10008d080);
  ppuVar5 = &puStack_630;
  func_0x0001000630ec(ppuVar5,0x1000c7170,&UNK_10008d080);
  uStack_220 = uStack_668;
  uStack_228 = uStack_670;
  uStack_210 = uStack_658;
  uStack_218 = uStack_660;
  uStack_200 = (undefined1)uStack_648;
  uStack_1ff = (undefined7)((ulong)uStack_648 >> 8);
  uStack_208 = (undefined1)uStack_650;
  uStack_207 = (undefined7)((ulong)uStack_650 >> 8);
  uStack_260 = uStack_6a8;
  puStack_268 = puStack_6b0;
  uStack_250 = uStack_698;
  uStack_258 = uStack_6a0;
  uStack_240 = uStack_688;
  uStack_248 = uStack_690;
  uStack_1f8 = uStack_640;
  uStack_230 = uStack_678;
  uStack_238 = uStack_680;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_548 = uStack_218;
  uStack_550 = uStack_220;
  uStack_538 = uStack_208;
  uStack_540 = uStack_210;
  uStack_52f = uStack_1ff;
  uStack_528 = uStack_1f8;
  uStack_537 = uStack_207;
  uStack_530 = uStack_200;
  uStack_588 = uStack_258;
  uStack_590 = uStack_260;
  uStack_578 = uStack_248;
  uStack_580 = uStack_250;
  uStack_568 = uStack_238;
  uStack_570 = uStack_240;
  uStack_558 = uStack_228;
  uStack_560 = uStack_230;
  uStack_5a8 = uStack_278;
  puStack_5b0 = puStack_280;
  puStack_598 = puStack_268;
  uStack_5a0 = uStack_270;
  FUN_1000630a4(&puStack_5b0,&puStack_170,0x1000c7178,&UNK_10008d088);
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_e0,0,1,0x4034000000000000,0,ppuVar5,uVar9);
  uStack_108 = uStack_548;
  uStack_110 = uStack_550;
  uStack_f8 = uStack_538;
  uStack_100 = uStack_540;
  uStack_ef = uStack_52f;
  uStack_e8 = uStack_528;
  uStack_f7 = uStack_537;
  uStack_f0 = uStack_530;
  uStack_148 = uStack_588;
  uStack_150 = uStack_590;
  uStack_138 = uStack_578;
  uStack_140 = uStack_580;
  uStack_118 = uStack_558;
  uStack_120 = uStack_560;
  uStack_128 = uStack_568;
  uStack_130 = uStack_570;
  puStack_158 = puStack_598;
  uStack_160 = uStack_5a0;
  uStack_168 = uStack_5a8;
  puStack_170 = puStack_5b0;
  func_0x0001000630ec(&puStack_280,0x1000c7178,&UNK_10008d088);
  uStack_498 = uStack_e8;
  uStack_497 = uStack_e7;
  uStack_4a0 = uStack_f0;
  uStack_49f = uStack_ef;
  uStack_488 = uStack_d8;
  uStack_490 = uStack_e0;
  uStack_478 = uStack_c8;
  uStack_480 = uStack_d0;
  uStack_468 = uStack_b8;
  uStack_470 = uStack_c0;
  uStack_4d8 = uStack_128;
  uStack_4e0 = uStack_130;
  uStack_4c8 = uStack_118;
  uStack_4d0 = uStack_120;
  uStack_4a8 = uStack_f8;
  uStack_4a7 = uStack_f7;
  uStack_4b8 = uStack_108;
  uStack_4c0 = uStack_110;
  uStack_4b0 = uStack_100;
  uStack_518 = uStack_168;
  puStack_520 = puStack_170;
  puStack_508 = puStack_158;
  uStack_510 = uStack_160;
  uStack_4f8 = uStack_148;
  uStack_500 = uStack_150;
  uStack_4e8 = uStack_138;
  uStack_4f0 = uStack_140;
  ppuVar5 = &puStack_520;
  FUN_1000630a4(ppuVar5,&puStack_280,0x1000c7180,&UNK_10008d090);
  uVar4 = SUB81(ppuVar5,0);
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uStack_1f8 = uStack_498;
  uStack_1f7 = uStack_497;
  uStack_200 = uStack_4a0;
  uStack_1ff = uStack_49f;
  uStack_1e8 = uStack_488;
  uStack_1f0 = uStack_490;
  uStack_1d8 = uStack_478;
  uStack_1e0 = uStack_480;
  uStack_1c8 = uStack_468;
  uStack_1d0 = uStack_470;
  uStack_238 = uStack_4d8;
  uStack_240 = uStack_4e0;
  uStack_228 = uStack_4c8;
  uStack_230 = uStack_4d0;
  uStack_218 = uStack_4b8;
  uStack_220 = uStack_4c0;
  uStack_208 = uStack_4a8;
  uStack_207 = uStack_4a7;
  uStack_210 = uStack_4b0;
  uStack_278 = uStack_518;
  puStack_280 = puStack_520;
  puStack_268 = puStack_508;
  uStack_270 = uStack_510;
  uStack_258 = uStack_4f8;
  uStack_260 = uStack_500;
  uStack_248 = uStack_4e8;
  uStack_250 = uStack_4f0;
  func_0x0001000630ec(&puStack_170,0x1000c7180,&UNK_10008d090);
  puVar6 = PTR__OBJC_CLASS___UIColor_1000c20f8;
  _objc_opt_self();
  func_0x0001000875e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar10 = PTR___s7SwiftUI5ColorVAA4ViewAAWP_1000b07a0;
  puStack_170 = puVar6;
  __s7SwiftUI4ViewP21SnapchatWidgetsSharedE12hideIfTintedQryF
            (&uStack_8b0,PTR___s7SwiftUI5ColorVN_1000b07b0);
  _swift_release();
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_718 = uStack_1f8;
  uStack_720 = uStack_200;
  uStack_71f = uStack_1ff;
  uStack_2e8 = CONCAT71(uStack_1f7,uStack_1f8);
  uStack_2f0 = CONCAT71(uStack_1ff,uStack_200);
  uStack_3c8 = uStack_1e8;
  uStack_3d0 = uStack_1f0;
  uStack_3b8 = uStack_1d8;
  uStack_3c0 = uStack_1e0;
  uStack_3a8 = uStack_1c8;
  uStack_3b0 = uStack_1d0;
  uStack_418 = uStack_238;
  uStack_420 = uStack_240;
  uStack_408 = uStack_228;
  uStack_410 = uStack_230;
  uStack_728 = uStack_208;
  uStack_727 = uStack_207;
  uStack_2f8 = CONCAT71(uStack_207,uStack_208);
  uStack_3f8 = uStack_218;
  uStack_400 = uStack_220;
  uStack_3f0 = uStack_210;
  uStack_458 = uStack_278;
  puStack_460 = puStack_280;
  puStack_448 = puStack_268;
  uStack_450 = uStack_270;
  uStack_438 = uStack_258;
  uStack_440 = uStack_260;
  uStack_428 = uStack_248;
  uStack_430 = uStack_250;
  uStack_390 = 0x4020000000000000;
  uStack_398 = 0;
  uStack_380 = 0;
  uStack_37f = 0x40200000000000;
  uStack_388 = 0;
  uStack_387 = 0;
  uStack_378 = 0;
  uStack_708 = uStack_1e8;
  uStack_710 = uStack_1f0;
  uStack_6f8 = uStack_1d8;
  uStack_700 = uStack_1e0;
  uStack_6e8 = uStack_1c8;
  uStack_6f0 = uStack_1d0;
  uStack_758 = uStack_238;
  uStack_760 = uStack_240;
  uStack_748 = uStack_228;
  uStack_750 = uStack_230;
  uStack_738 = uStack_218;
  uStack_740 = uStack_220;
  uStack_730 = uStack_210;
  uStack_798 = uStack_278;
  puStack_7a0 = puStack_280;
  puStack_788 = puStack_268;
  uStack_790 = uStack_270;
  uStack_778 = uStack_258;
  uStack_780 = uStack_260;
  uStack_768 = uStack_248;
  uStack_770 = uStack_250;
  uStack_6e0 = CONCAT71(uStack_39f,uVar4);
  uStack_6d8 = 0;
  uStack_6c8 = 0;
  uStack_6d0 = 0x4020000000000000;
  uStack_6bf = 0x40200000000000;
  uStack_6b8 = 0;
  uStack_6c7 = 0;
  uStack_6c0 = 0;
  uStack_2d8 = uStack_1e8;
  uStack_2e0 = uStack_1f0;
  uStack_2c8 = uStack_1d8;
  uStack_2d0 = uStack_1e0;
  uStack_2b8 = uStack_1c8;
  uStack_2c0 = uStack_1d0;
  uStack_328 = uStack_238;
  uStack_330 = uStack_240;
  uStack_318 = uStack_228;
  uStack_320 = uStack_230;
  uStack_308 = uStack_218;
  uStack_310 = uStack_220;
  uStack_300 = uStack_210;
  uStack_368 = uStack_278;
  puStack_370 = puStack_280;
  puStack_358 = puStack_268;
  uStack_360 = uStack_270;
  uStack_348 = uStack_258;
  uStack_350 = uStack_260;
  uStack_338 = uStack_248;
  uStack_340 = uStack_250;
  uStack_2a0 = 0x4020000000000000;
  uStack_2a8 = 0;
  uStack_290 = 0x4020000000000000;
  uStack_298 = 0;
  uStack_288 = 0;
  uStack_3a0 = uVar4;
  uStack_2b0 = uVar4;
  uStack_3e0 = uStack_720;
  uStack_3df = uStack_71f;
  uStack_3d8 = uStack_718;
  uStack_3e8 = uStack_728;
  uStack_3e7 = uStack_727;
  FUN_1000630a4(&puStack_460,&puStack_170,0x1000c7188,&UNK_10008d098);
  func_0x0001000630ec(&puStack_370,0x1000c7188,&UNK_10008d098);
  lVar7 = 0x1000c7190;
  func_0x0001000100d0(0x1000c7190,&UNK_10008d0a0);
  lVar1 = param_1 + *(int *)(lVar7 + 0x24);
  uVar3 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_1000b0538;
  lVar7 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  (**(code **)(*(long *)(lVar7 + -8) + 0x68))(lVar1,uVar3,lVar7);
  uStack_1a8 = CONCAT71(uStack_6c7,uStack_6c8);
  uStack_1b8 = uStack_6d8;
  uStack_1c0 = uStack_6e0;
  uStack_1b0 = uStack_6d0;
  uStack_198 = CONCAT71(uStack_6b7,uStack_6b8);
  uStack_1a0 = CONCAT71(uStack_6bf,uStack_6c0);
  uStack_1f8 = uStack_718;
  uStack_200 = uStack_720;
  uStack_1ff = uStack_71f;
  uStack_1e8 = uStack_708;
  uStack_1f0 = uStack_710;
  uStack_1c8 = uStack_6e8;
  uStack_1d0 = uStack_6f0;
  uStack_1d8 = uStack_6f8;
  uStack_1e0 = uStack_700;
  uStack_238 = uStack_758;
  uStack_240 = uStack_760;
  uStack_228 = uStack_748;
  uStack_230 = uStack_750;
  uStack_208 = uStack_728;
  uStack_207 = uStack_727;
  uStack_210 = uStack_730;
  uStack_218 = uStack_738;
  uStack_220 = uStack_740;
  uStack_278 = uStack_798;
  puStack_280 = puStack_7a0;
  puStack_268 = puStack_788;
  uStack_270 = uStack_790;
  uStack_248 = uStack_768;
  uStack_250 = uStack_770;
  uStack_258 = uStack_778;
  uStack_260 = uStack_780;
  uStack_190 = uStack_8b0;
  uStack_188 = uStack_8a8;
  lVar7 = 0x1000c7198;
  puStack_180 = puVar6;
  puStack_178 = puVar10;
  func_0x0001000100d0(0x1000c7198,&UNK_10008d0a8);
  *(undefined2 *)(lVar1 + *(int *)(lVar7 + 0x24)) = 0x100;
  _memcpy(param_1,&puStack_280,0x110);
  uStack_98 = CONCAT71(uStack_6c7,uStack_6c8);
  uStack_a8 = uStack_6d8;
  uStack_b0 = uStack_6e0;
  uStack_a0 = uStack_6d0;
  uStack_88 = CONCAT71(uStack_6b7,uStack_6b8);
  uStack_90 = CONCAT71(uStack_6bf,uStack_6c0);
  uStack_e8 = uStack_718;
  uStack_f0 = uStack_720;
  uStack_ef = uStack_71f;
  uStack_d8 = uStack_708;
  uStack_e0 = uStack_710;
  uStack_b8 = uStack_6e8;
  uStack_c0 = uStack_6f0;
  uStack_c8 = uStack_6f8;
  uStack_d0 = uStack_700;
  uStack_128 = uStack_758;
  uStack_130 = uStack_760;
  uStack_118 = uStack_748;
  uStack_120 = uStack_750;
  uStack_f8 = uStack_728;
  uStack_f7 = uStack_727;
  uStack_100 = uStack_730;
  uStack_108 = uStack_738;
  uStack_110 = uStack_740;
  uStack_168 = uStack_798;
  puStack_170 = puStack_7a0;
  puStack_158 = puStack_788;
  uStack_160 = uStack_790;
  uStack_138 = uStack_768;
  uStack_140 = uStack_770;
  uStack_148 = uStack_778;
  uStack_150 = uStack_780;
  uStack_80 = uStack_8b0;
  uStack_78 = uStack_8a8;
  puStack_70 = puVar6;
  puStack_68 = puVar10;
  FUN_1000630a4(&puStack_280,&uStack_8b0,0x1000c71a0,&UNK_10008d0b0);
  ppuVar5 = &puStack_170;
  func_0x0001000630ec(ppuVar5,0x1000c71a0,&UNK_10008d0b0);
  __s7SwiftUI5ColorV5blackACvgZ();
  ppuVar8 = ppuVar5;
  __s7SwiftUI5ColorV7opacityyACSdF(0x3fc999999999999a);
  _swift_release(ppuVar5);
  lVar7 = 0x1000c71a8;
  func_0x0001000100d0(0x1000c71a8,&UNK_10008d0b8);
  plVar2 = (long *)(param_1 + *(int *)(lVar7 + 0x24));
  *plVar2 = (long)ppuVar8;
  plVar2[2] = 0;
  plVar2[1] = 0x4024000000000000;
  plVar2[3] = 0x3ff0000000000000;
  return;
}



/* Entry: 1000630a0; end: 1000630a3;  */

void FUN_1000630a0(long param_1,undefined *param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uStack_8b0;
  undefined1 uStack_8a8;
  undefined *puStack_7a0;
  undefined8 uStack_798;
  ulong uStack_790;
  undefined *puStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined1 uStack_728;
  undefined7 uStack_727;
  undefined1 uStack_720;
  undefined7 uStack_71f;
  undefined1 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined1 uStack_6c8;
  undefined7 uStack_6c7;
  undefined1 uStack_6c0;
  undefined7 uStack_6bf;
  undefined1 uStack_6b8;
  undefined7 uStack_6b7;
  undefined *puStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined1 uStack_640;
  undefined *puStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined1 uStack_5c0;
  undefined *puStack_5b0;
  undefined8 uStack_5a8;
  ulong uStack_5a0;
  undefined *puStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined1 uStack_538;
  undefined7 uStack_537;
  undefined1 uStack_530;
  undefined7 uStack_52f;
  undefined1 uStack_528;
  undefined *puStack_520;
  undefined8 uStack_518;
  ulong uStack_510;
  undefined *puStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 uStack_4a8;
  undefined7 uStack_4a7;
  undefined1 uStack_4a0;
  undefined7 uStack_49f;
  undefined1 uStack_498;
  undefined7 uStack_497;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined *puStack_460;
  undefined8 uStack_458;
  ulong uStack_450;
  undefined *puStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 uStack_3e8;
  undefined7 uStack_3e7;
  undefined1 uStack_3e0;
  undefined7 uStack_3df;
  undefined1 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 uStack_3a0;
  undefined7 uStack_39f;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 uStack_388;
  undefined7 uStack_387;
  undefined1 uStack_380;
  undefined7 uStack_37f;
  undefined1 uStack_378;
  undefined *puStack_370;
  undefined8 uStack_368;
  ulong uStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  ulong uStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
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
  undefined1 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
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
  undefined1 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  uStack_278 = 0x4000000000000000;
  uStack_270 = uStack_270 & 0xffffffffffffff00;
  puStack_280 = param_2;
  func_0x000100062f10(&puStack_170);
  uStack_668 = uStack_128;
  uStack_670 = uStack_130;
  uStack_658 = uStack_118;
  uStack_660 = uStack_120;
  uStack_648 = uStack_108;
  uStack_650 = uStack_110;
  uStack_640 = (undefined1)uStack_100;
  uStack_6a8 = uStack_168;
  puStack_6b0 = puStack_170;
  uStack_698 = puStack_158;
  uStack_6a0 = uStack_160;
  uStack_688 = uStack_148;
  uStack_690 = uStack_150;
  uStack_678 = uStack_138;
  uStack_680 = uStack_140;
  uStack_628 = uStack_168;
  puStack_630 = puStack_170;
  uStack_618 = puStack_158;
  uStack_620 = uStack_160;
  uStack_608 = uStack_148;
  uStack_610 = uStack_150;
  uStack_5f8 = uStack_138;
  uStack_600 = uStack_140;
  uStack_5e8 = uStack_128;
  uStack_5f0 = uStack_130;
  uStack_5d8 = uStack_118;
  uStack_5e0 = uStack_120;
  uStack_5c8 = uStack_108;
  uStack_5d0 = uStack_110;
  uStack_5c0 = (undefined1)uStack_100;
  uVar9 = 0x1000c7170;
  FUN_1000630a4(&puStack_6b0,&uStack_8b0,0x1000c7170,&UNK_10008d080);
  ppuVar5 = &puStack_630;
  func_0x0001000630ec(ppuVar5,0x1000c7170,&UNK_10008d080);
  uStack_220 = uStack_668;
  uStack_228 = uStack_670;
  uStack_210 = uStack_658;
  uStack_218 = uStack_660;
  uStack_200 = (undefined1)uStack_648;
  uStack_1ff = (undefined7)((ulong)uStack_648 >> 8);
  uStack_208 = (undefined1)uStack_650;
  uStack_207 = (undefined7)((ulong)uStack_650 >> 8);
  uStack_260 = uStack_6a8;
  puStack_268 = puStack_6b0;
  uStack_250 = uStack_698;
  uStack_258 = uStack_6a0;
  uStack_240 = uStack_688;
  uStack_248 = uStack_690;
  uStack_1f8 = uStack_640;
  uStack_230 = uStack_678;
  uStack_238 = uStack_680;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_548 = uStack_218;
  uStack_550 = uStack_220;
  uStack_538 = uStack_208;
  uStack_540 = uStack_210;
  uStack_52f = uStack_1ff;
  uStack_528 = uStack_1f8;
  uStack_537 = uStack_207;
  uStack_530 = uStack_200;
  uStack_588 = uStack_258;
  uStack_590 = uStack_260;
  uStack_578 = uStack_248;
  uStack_580 = uStack_250;
  uStack_568 = uStack_238;
  uStack_570 = uStack_240;
  uStack_558 = uStack_228;
  uStack_560 = uStack_230;
  uStack_5a8 = uStack_278;
  puStack_5b0 = puStack_280;
  puStack_598 = puStack_268;
  uStack_5a0 = uStack_270;
  FUN_1000630a4(&puStack_5b0,&puStack_170,0x1000c7178,&UNK_10008d088);
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_e0,0,1,0x4034000000000000,0,ppuVar5,uVar9);
  uStack_108 = uStack_548;
  uStack_110 = uStack_550;
  uStack_f8 = uStack_538;
  uStack_100 = uStack_540;
  uStack_ef = uStack_52f;
  uStack_e8 = uStack_528;
  uStack_f7 = uStack_537;
  uStack_f0 = uStack_530;
  uStack_148 = uStack_588;
  uStack_150 = uStack_590;
  uStack_138 = uStack_578;
  uStack_140 = uStack_580;
  uStack_118 = uStack_558;
  uStack_120 = uStack_560;
  uStack_128 = uStack_568;
  uStack_130 = uStack_570;
  puStack_158 = puStack_598;
  uStack_160 = uStack_5a0;
  uStack_168 = uStack_5a8;
  puStack_170 = puStack_5b0;
  func_0x0001000630ec(&puStack_280,0x1000c7178,&UNK_10008d088);
  uStack_498 = uStack_e8;
  uStack_497 = uStack_e7;
  uStack_4a0 = uStack_f0;
  uStack_49f = uStack_ef;
  uStack_488 = uStack_d8;
  uStack_490 = uStack_e0;
  uStack_478 = uStack_c8;
  uStack_480 = uStack_d0;
  uStack_468 = uStack_b8;
  uStack_470 = uStack_c0;
  uStack_4d8 = uStack_128;
  uStack_4e0 = uStack_130;
  uStack_4c8 = uStack_118;
  uStack_4d0 = uStack_120;
  uStack_4a8 = uStack_f8;
  uStack_4a7 = uStack_f7;
  uStack_4b8 = uStack_108;
  uStack_4c0 = uStack_110;
  uStack_4b0 = uStack_100;
  uStack_518 = uStack_168;
  puStack_520 = puStack_170;
  puStack_508 = puStack_158;
  uStack_510 = uStack_160;
  uStack_4f8 = uStack_148;
  uStack_500 = uStack_150;
  uStack_4e8 = uStack_138;
  uStack_4f0 = uStack_140;
  ppuVar5 = &puStack_520;
  FUN_1000630a4(ppuVar5,&puStack_280,0x1000c7180,&UNK_10008d090);
  uVar4 = SUB81(ppuVar5,0);
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uStack_1f8 = uStack_498;
  uStack_1f7 = uStack_497;
  uStack_200 = uStack_4a0;
  uStack_1ff = uStack_49f;
  uStack_1e8 = uStack_488;
  uStack_1f0 = uStack_490;
  uStack_1d8 = uStack_478;
  uStack_1e0 = uStack_480;
  uStack_1c8 = uStack_468;
  uStack_1d0 = uStack_470;
  uStack_238 = uStack_4d8;
  uStack_240 = uStack_4e0;
  uStack_228 = uStack_4c8;
  uStack_230 = uStack_4d0;
  uStack_218 = uStack_4b8;
  uStack_220 = uStack_4c0;
  uStack_208 = uStack_4a8;
  uStack_207 = uStack_4a7;
  uStack_210 = uStack_4b0;
  uStack_278 = uStack_518;
  puStack_280 = puStack_520;
  puStack_268 = puStack_508;
  uStack_270 = uStack_510;
  uStack_258 = uStack_4f8;
  uStack_260 = uStack_500;
  uStack_248 = uStack_4e8;
  uStack_250 = uStack_4f0;
  func_0x0001000630ec(&puStack_170,0x1000c7180,&UNK_10008d090);
  puVar6 = PTR__OBJC_CLASS___UIColor_1000c20f8;
  _objc_opt_self();
  func_0x0001000875e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar10 = PTR___s7SwiftUI5ColorVAA4ViewAAWP_1000b07a0;
  puStack_170 = puVar6;
  __s7SwiftUI4ViewP21SnapchatWidgetsSharedE12hideIfTintedQryF
            (&uStack_8b0,PTR___s7SwiftUI5ColorVN_1000b07b0);
  _swift_release();
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_718 = uStack_1f8;
  uStack_720 = uStack_200;
  uStack_71f = uStack_1ff;
  uStack_2e8 = CONCAT71(uStack_1f7,uStack_1f8);
  uStack_2f0 = CONCAT71(uStack_1ff,uStack_200);
  uStack_3c8 = uStack_1e8;
  uStack_3d0 = uStack_1f0;
  uStack_3b8 = uStack_1d8;
  uStack_3c0 = uStack_1e0;
  uStack_3a8 = uStack_1c8;
  uStack_3b0 = uStack_1d0;
  uStack_418 = uStack_238;
  uStack_420 = uStack_240;
  uStack_408 = uStack_228;
  uStack_410 = uStack_230;
  uStack_728 = uStack_208;
  uStack_727 = uStack_207;
  uStack_2f8 = CONCAT71(uStack_207,uStack_208);
  uStack_3f8 = uStack_218;
  uStack_400 = uStack_220;
  uStack_3f0 = uStack_210;
  uStack_458 = uStack_278;
  puStack_460 = puStack_280;
  puStack_448 = puStack_268;
  uStack_450 = uStack_270;
  uStack_438 = uStack_258;
  uStack_440 = uStack_260;
  uStack_428 = uStack_248;
  uStack_430 = uStack_250;
  uStack_390 = 0x4020000000000000;
  uStack_398 = 0;
  uStack_380 = 0;
  uStack_37f = 0x40200000000000;
  uStack_388 = 0;
  uStack_387 = 0;
  uStack_378 = 0;
  uStack_708 = uStack_1e8;
  uStack_710 = uStack_1f0;
  uStack_6f8 = uStack_1d8;
  uStack_700 = uStack_1e0;
  uStack_6e8 = uStack_1c8;
  uStack_6f0 = uStack_1d0;
  uStack_758 = uStack_238;
  uStack_760 = uStack_240;
  uStack_748 = uStack_228;
  uStack_750 = uStack_230;
  uStack_738 = uStack_218;
  uStack_740 = uStack_220;
  uStack_730 = uStack_210;
  uStack_798 = uStack_278;
  puStack_7a0 = puStack_280;
  puStack_788 = puStack_268;
  uStack_790 = uStack_270;
  uStack_778 = uStack_258;
  uStack_780 = uStack_260;
  uStack_768 = uStack_248;
  uStack_770 = uStack_250;
  uStack_6e0 = CONCAT71(uStack_39f,uVar4);
  uStack_6d8 = 0;
  uStack_6c8 = 0;
  uStack_6d0 = 0x4020000000000000;
  uStack_6bf = 0x40200000000000;
  uStack_6b8 = 0;
  uStack_6c7 = 0;
  uStack_6c0 = 0;
  uStack_2d8 = uStack_1e8;
  uStack_2e0 = uStack_1f0;
  uStack_2c8 = uStack_1d8;
  uStack_2d0 = uStack_1e0;
  uStack_2b8 = uStack_1c8;
  uStack_2c0 = uStack_1d0;
  uStack_328 = uStack_238;
  uStack_330 = uStack_240;
  uStack_318 = uStack_228;
  uStack_320 = uStack_230;
  uStack_308 = uStack_218;
  uStack_310 = uStack_220;
  uStack_300 = uStack_210;
  uStack_368 = uStack_278;
  puStack_370 = puStack_280;
  puStack_358 = puStack_268;
  uStack_360 = uStack_270;
  uStack_348 = uStack_258;
  uStack_350 = uStack_260;
  uStack_338 = uStack_248;
  uStack_340 = uStack_250;
  uStack_2a0 = 0x4020000000000000;
  uStack_2a8 = 0;
  uStack_290 = 0x4020000000000000;
  uStack_298 = 0;
  uStack_288 = 0;
  uStack_3a0 = uVar4;
  uStack_2b0 = uVar4;
  uStack_3e0 = uStack_720;
  uStack_3df = uStack_71f;
  uStack_3d8 = uStack_718;
  uStack_3e8 = uStack_728;
  uStack_3e7 = uStack_727;
  FUN_1000630a4(&puStack_460,&puStack_170,0x1000c7188,&UNK_10008d098);
  func_0x0001000630ec(&puStack_370,0x1000c7188,&UNK_10008d098);
  lVar7 = 0x1000c7190;
  func_0x0001000100d0(0x1000c7190,&UNK_10008d0a0);
  lVar1 = param_1 + *(int *)(lVar7 + 0x24);
  uVar3 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_1000b0538;
  lVar7 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  (**(code **)(*(long *)(lVar7 + -8) + 0x68))(lVar1,uVar3,lVar7);
  uStack_1a8 = CONCAT71(uStack_6c7,uStack_6c8);
  uStack_1b8 = uStack_6d8;
  uStack_1c0 = uStack_6e0;
  uStack_1b0 = uStack_6d0;
  uStack_198 = CONCAT71(uStack_6b7,uStack_6b8);
  uStack_1a0 = CONCAT71(uStack_6bf,uStack_6c0);
  uStack_1f8 = uStack_718;
  uStack_200 = uStack_720;
  uStack_1ff = uStack_71f;
  uStack_1e8 = uStack_708;
  uStack_1f0 = uStack_710;
  uStack_1c8 = uStack_6e8;
  uStack_1d0 = uStack_6f0;
  uStack_1d8 = uStack_6f8;
  uStack_1e0 = uStack_700;
  uStack_238 = uStack_758;
  uStack_240 = uStack_760;
  uStack_228 = uStack_748;
  uStack_230 = uStack_750;
  uStack_208 = uStack_728;
  uStack_207 = uStack_727;
  uStack_210 = uStack_730;
  uStack_218 = uStack_738;
  uStack_220 = uStack_740;
  uStack_278 = uStack_798;
  puStack_280 = puStack_7a0;
  puStack_268 = puStack_788;
  uStack_270 = uStack_790;
  uStack_248 = uStack_768;
  uStack_250 = uStack_770;
  uStack_258 = uStack_778;
  uStack_260 = uStack_780;
  uStack_190 = uStack_8b0;
  uStack_188 = uStack_8a8;
  lVar7 = 0x1000c7198;
  puStack_180 = puVar6;
  puStack_178 = puVar10;
  func_0x0001000100d0(0x1000c7198,&UNK_10008d0a8);
  *(undefined2 *)(lVar1 + *(int *)(lVar7 + 0x24)) = 0x100;
  _memcpy(param_1,&puStack_280,0x110);
  uStack_98 = CONCAT71(uStack_6c7,uStack_6c8);
  uStack_a8 = uStack_6d8;
  uStack_b0 = uStack_6e0;
  uStack_a0 = uStack_6d0;
  uStack_88 = CONCAT71(uStack_6b7,uStack_6b8);
  uStack_90 = CONCAT71(uStack_6bf,uStack_6c0);
  uStack_e8 = uStack_718;
  uStack_f0 = uStack_720;
  uStack_ef = uStack_71f;
  uStack_d8 = uStack_708;
  uStack_e0 = uStack_710;
  uStack_b8 = uStack_6e8;
  uStack_c0 = uStack_6f0;
  uStack_c8 = uStack_6f8;
  uStack_d0 = uStack_700;
  uStack_128 = uStack_758;
  uStack_130 = uStack_760;
  uStack_118 = uStack_748;
  uStack_120 = uStack_750;
  uStack_f8 = uStack_728;
  uStack_f7 = uStack_727;
  uStack_100 = uStack_730;
  uStack_108 = uStack_738;
  uStack_110 = uStack_740;
  uStack_168 = uStack_798;
  puStack_170 = puStack_7a0;
  puStack_158 = puStack_788;
  uStack_160 = uStack_790;
  uStack_138 = uStack_768;
  uStack_140 = uStack_770;
  uStack_148 = uStack_778;
  uStack_150 = uStack_780;
  uStack_80 = uStack_8b0;
  uStack_78 = uStack_8a8;
  puStack_70 = puVar6;
  puStack_68 = puVar10;
  FUN_1000630a4(&puStack_280,&uStack_8b0,0x1000c71a0,&UNK_10008d0b0);
  ppuVar5 = &puStack_170;
  func_0x0001000630ec(ppuVar5,0x1000c71a0,&UNK_10008d0b0);
  __s7SwiftUI5ColorV5blackACvgZ();
  ppuVar8 = ppuVar5;
  __s7SwiftUI5ColorV7opacityyACSdF(0x3fc999999999999a);
  _swift_release(ppuVar5);
  lVar7 = 0x1000c71a8;
  func_0x0001000100d0(0x1000c71a8,&UNK_10008d0b8);
  plVar2 = (long *)(param_1 + *(int *)(lVar7 + 0x24));
  *plVar2 = (long)ppuVar8;
  plVar2[2] = 0;
  plVar2[1] = 0x4024000000000000;
  plVar2[3] = 0x3ff0000000000000;
  return;
}



/* Entry: 1000630a4; end: 10006312b;  */

undefined8 FUN_1000630a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000100d0(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10006312c; end: 10006312f;  */

void FUN_10006312c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam00000001000c71b0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c71a8;
  func_0x000100010120(0x1000c71a8,&UNK_10008d0b8);
  uVar2 = uVar1;
  func_0x0001000631a8();
  puStack_28 = PTR___s7SwiftUI13_ShadowEffectVAA12ViewModifierAAWP_1000b0330;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c71b0 = puVar3;
  return;
}



/* Entry: 100063130; end: 10006342b;  */

void FUN_100063130(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam00000001000c71b0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c71a8;
  func_0x000100010120(0x1000c71a8,&UNK_10008d0b8);
  uVar2 = uVar1;
  func_0x0001000631a8();
  puStack_28 = PTR___s7SwiftUI13_ShadowEffectVAA12ViewModifierAAWP_1000b0330;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c71b0 = puVar3;
  return;
}



/* Entry: 10006342c; end: 100063447;  */

void FUN_10006342c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 100063448; end: 1000634c3;  */

long FUN_100063448(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1000634c4; end: 10006365b;  */

undefined8 * FUN_1000634c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  lVar3 = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  if (lVar3 == 0) {
    lVar3 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = lVar3;
  }
  else {
    uVar2 = param_2[7];
    param_1[6] = lVar3;
    param_1[7] = uVar2;
    _swift_retain(lVar3);
    _swift_retain(uVar2);
  }
  return param_1;
}



/* Entry: 10006365c; end: 10006366f;  */

void FUN_10006365c(undefined8 *param_1,undefined8 *param_2)

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
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Entry: 100063670; end: 10006370b;  */

undefined8 * FUN_100063670(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  plVar3 = param_1 + 6;
  if (*plVar3 != 0) {
    if (param_2[6] != 0) {
      param_1[6] = param_2[6];
      _swift_release();
      uVar2 = param_1[7];
      param_1[7] = param_2[7];
      _swift_release(uVar2);
      return param_1;
    }
    FUN_10005cc90(plVar3);
  }
  lVar4 = param_2[6];
  param_1[7] = param_2[7];
  *plVar3 = lVar4;
  return param_1;
}



/* Entry: 10006370c; end: 1000637c3;  */

int FUN_10006370c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1000637c4; end: 100064373;  */

void FUN_1000637c4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_9b0 [296];
  undefined1 auStack_888 [304];
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined1 auStack_730 [272];
  undefined1 auStack_620 [272];
  undefined8 *puStack_510;
  undefined8 uStack_508;
  undefined1 uStack_500;
  undefined1 auStack_4ff [279];
  undefined8 *puStack_3e8;
  undefined8 uStack_3e0;
  undefined1 uStack_3d8;
  undefined1 auStack_3d7 [279];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  func_0x0001000644b8(&uStack_758,uVar1,*(undefined8 *)(param_2 + 0x38));
  uStack_2b8 = uStack_750;
  uStack_2c0 = uStack_758;
  uStack_2a8 = uStack_740;
  uStack_2b0 = uStack_748;
  uStack_2a0 = uStack_738;
  FUN_100064648();
  __s7SwiftUI4ViewP21SnapchatWidgetsSharedE12hideIfTintedQryF
            (&uStack_198,PTR___s7SwiftUI14LinearGradientVN_1000b0390,uVar1);
  puVar2 = &uStack_758;
  FUN_100064688();
  __s7SwiftUI17VerticalAlignmentV3topACvgZ();
  func_0x000100063a1c(&uStack_198,param_2);
  _memcpy(auStack_730,&uStack_198,0x110);
  _memcpy(auStack_620,&uStack_198,0x110);
  FUN_100064754(auStack_730,&uStack_2c0,0x1000c7210,&UNK_10008d158);
  func_0x00010006479c(auStack_620,0x1000c7210,&UNK_10008d158);
  _memcpy((ulong)&uStack_2c0 | 7,auStack_730,0x110);
  uStack_508 = 0;
  uStack_500 = 1;
  puStack_510 = puVar2;
  _memcpy(auStack_4ff,&uStack_2c0,0x117);
  uStack_3e0 = 0;
  uStack_3d8 = 1;
  puStack_3e8 = puVar2;
  _memcpy(auStack_3d7,&uStack_2c0,0x117);
  FUN_100064754(&puStack_510,&uStack_198,0x1000c7218,&UNK_10008d160);
  func_0x00010006479c(&puStack_3e8,0x1000c7218,&UNK_10008d160);
  _memcpy(&uStack_198,&puStack_510,0x128);
  _memcpy(&uStack_2c0,&puStack_510,0x128);
  _memcpy((ulong)auStack_888 | 7,&puStack_510,0x128);
  *param_1 = uStack_198;
  param_1[1] = uStack_190;
  param_1[2] = uStack_188;
  param_1[3] = uStack_180;
  param_1[4] = uStack_178;
  *(undefined1 *)(param_1 + 5) = uStack_170;
  _memcpy((long)param_1 + 0x29,auStack_888,0x12f);
  FUN_1000646bc(uStack_198,uStack_190,uStack_188,uStack_180,uStack_178,uStack_170);
  FUN_100064754(&uStack_2c0,auStack_9b0,0x1000c7218,&UNK_10008d160);
  func_0x00010006479c(&uStack_198,0x1000c7218,&UNK_10008d160);
  func_0x0001000646d0(uStack_198,uStack_190,uStack_188,uStack_180,uStack_178,uStack_170);
  return;
}



/* Entry: 100064374; end: 10006437f;  */

void FUN_100064374(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 100064380; end: 100064647;  */

void FUN_100064380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  undefined1 auStack_778 [360];
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined1 auStack_5d0 [344];
  undefined1 auStack_478 [344];
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_310 [344];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [344];
  
  uStack_608 = unaff_x20[1];
  uStack_610 = *unaff_x20;
  uStack_5f8 = unaff_x20[3];
  uStack_600 = unaff_x20[2];
  uStack_5e8 = unaff_x20[5];
  uStack_5f0 = unaff_x20[4];
  uStack_5d8 = unaff_x20[7];
  uStack_5e0 = unaff_x20[6];
  __s7SwiftUI9AlignmentV7leadingACvgZ();
  FUN_1000637c4(&uStack_1b8,&uStack_610);
  _memcpy(auStack_5d0,&uStack_1b8,0x158);
  _memcpy(auStack_478,&uStack_1b8,0x158);
  FUN_100064754(auStack_5d0,&uStack_320,0x1000c71f8,&UNK_10008d148);
  func_0x00010006479c(auStack_478,0x1000c71f8,&UNK_10008d148);
  _memcpy(auStack_1a8,auStack_5d0,0x158);
  uStack_320 = param_2;
  uStack_318 = param_3;
  _memcpy(auStack_310,auStack_5d0,0x158);
  uStack_1b8 = param_2;
  uStack_1b0 = param_3;
  FUN_100064754(&uStack_320,auStack_778,0x1000c7200,&UNK_10008d150);
  func_0x00010006479c(&uStack_1b8,0x1000c7200,&UNK_10008d150);
  _memcpy(param_1,&uStack_320,0x168);
  return;
}



/* Entry: 100064648; end: 100064687;  */

void FUN_100064648(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c7208 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s7SwiftUI14LinearGradientVAA4ViewAAMc_1000b0380;
  _swift_getWitnessTable
            (PTR___s7SwiftUI14LinearGradientVAA4ViewAAMc_1000b0380,
             PTR___s7SwiftUI14LinearGradientVN_1000b0390);
  puRam00000001000c7208 = puVar1;
  return;
}



/* Entry: 100064688; end: 1000646bb;  */

undefined8 FUN_100064688(undefined8 param_1)

{
  (**(code **)(*(long *)(PTR___s7SwiftUI14LinearGradientVN_1000b0390 + -8) + 8))();
  return param_1;
}



/* Entry: 1000646bc; end: 1000646e3;  */

void FUN_1000646bc(void)

{
  char in_w5;
  
  if (in_w5 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010008606c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_1000b1560)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010008624c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_1000b16a8)();
  return;
}



/* Entry: 1000646e4; end: 100064753;  */

void FUN_1000646e4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (puRam00000001000c7240 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c7238;
  func_0x000100010120(0x1000c7238,&UNK_10008d180);
  puStack_20 = PTR___s7SwiftUI4TextVAA4ViewAAWP_1000b06d0;
  puStack_18 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1000b03b0;
  puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &puStack_20);
  puRam00000001000c7240 = puVar2;
  return;
}



/* Entry: 100064754; end: 1000647db;  */

undefined8 FUN_100064754(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000100d0(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1000647dc; end: 1000647df;  */

void FUN_1000647dc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c7250 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c7200;
  func_0x000100010120(0x1000c7200,&UNK_10008d150);
  puVar2 = PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0;
  _swift_getWitnessTable(PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0,uVar1);
  puRam00000001000c7250 = puVar2;
  return;
}



/* Entry: 1000647e0; end: 10006482f;  */

void FUN_1000647e0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c7250 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c7200;
  func_0x000100010120(0x1000c7200,&UNK_10008d150);
  puVar2 = PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0;
  _swift_getWitnessTable(PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0,uVar1);
  puRam00000001000c7250 = puVar2;
  return;
}



/* Entry: 100064830; end: 100064b23;  */

long * FUN_100064830(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined8 uVar19;
  
  uVar6 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar6 >> 0x11 & 1) == 0) {
    lVar14 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar14;
    lVar10 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar10;
    lVar8 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = lVar8;
    lVar16 = param_2[6];
    param_1[6] = lVar16;
    lVar8 = 0;
    FUN_10005cf80();
    iVar7 = *(int *)(lVar8 + 0x20);
    lVar9 = 0;
    __s10Foundation4DateVMa();
    pcVar18 = *(code **)(*(long *)(lVar9 + -8) + 0x10);
    _swift_bridgeObjectRetain(lVar14);
    _swift_bridgeObjectRetain(lVar10);
    _objc_retain(lVar16);
    (*pcVar18)((long)param_1 + (long)iVar7,(long)param_2 + (long)iVar7,lVar9);
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x24));
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar8 + 0x28));
    plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar8 + 0x28));
    if (*plVar2 == 0) {
      lVar14 = *plVar2;
      plVar1[1] = plVar2[1];
      *plVar1 = lVar14;
    }
    else {
      lVar14 = plVar2[1];
      *plVar1 = *plVar2;
      plVar1[1] = lVar14;
      _swift_retain();
      _swift_retain(lVar14);
    }
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar8 + 0x2c));
    plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar8 + 0x2c));
    if (*plVar2 == 0) {
      lVar14 = *plVar2;
      plVar1[1] = plVar2[1];
      *plVar1 = lVar14;
    }
    else {
      lVar14 = plVar2[1];
      *plVar1 = *plVar2;
      plVar1[1] = lVar14;
      _swift_retain();
      _swift_retain(lVar14);
    }
    lVar10 = 0;
    FUN_10005e080();
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x14));
    puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x14));
    uVar19 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar19;
    uVar15 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x18));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x18)) = uVar15;
    uVar17 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x1c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x1c)) = uVar17;
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x20));
    puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x20));
    uVar5 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar5;
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x24));
    puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x24));
    uVar11 = 0;
    FUN_10005fcd4(0);
    _swift_bridgeObjectRetain(uVar19);
    _objc_retain(uVar15);
    _objc_retain(uVar17);
    _swift_bridgeObjectRetain(uVar5);
    puVar12 = puVar4;
    _swift_getEnumCaseMultiPayload(puVar4,uVar11);
    uVar19 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar19;
    _swift_bridgeObjectRetain();
    lVar14 = 0x1000c69c8;
    func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
    (*pcVar18)((long)puVar3 + (long)*(int *)(lVar14 + 0x30),
               (long)puVar4 + (long)*(int *)(lVar14 + 0x30),lVar9);
    _swift_storeEnumTagMultiPayload(puVar3,uVar11,(int)puVar12 == 1);
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x28)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x28));
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x2c));
    puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x2c));
    uVar19 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar19;
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x30));
    puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x30));
    lVar14 = puVar4[1];
    _objc_retain();
    _swift_bridgeObjectRetain(uVar19);
    if (lVar14 == 1) {
      uVar19 = *puVar4;
      puVar3[1] = puVar4[1];
      *puVar3 = uVar19;
      puVar3[2] = puVar4[2];
    }
    else {
      *puVar3 = *puVar4;
      puVar3[1] = lVar14;
      puVar3[2] = puVar4[2];
      _swift_bridgeObjectRetain(lVar14);
    }
    iVar7 = *(int *)(param_3 + 0x18);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    plVar1 = (long *)((long)param_1 + (long)iVar7);
    param_2 = (long *)((long)param_2 + (long)iVar7);
    lVar14 = *param_2;
    _objc_retain();
    if (lVar14 == 0) {
      lVar14 = *param_2;
      plVar1[1] = param_2[1];
      *plVar1 = lVar14;
    }
    else {
      lVar10 = param_2[1];
      *plVar1 = lVar14;
      plVar1[1] = lVar10;
      _swift_retain(lVar14);
      _swift_retain(lVar10);
    }
  }
  else {
    lVar14 = *param_2;
    *param_1 = lVar14;
    uVar13 = (ulong)uVar6 & 0xff;
    param_1 = (long *)(lVar14 + (uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 100064b24; end: 100064cbf;  */

void FUN_100064b24(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  lVar4 = 0;
  FUN_10005cf80();
  iVar3 = *(int *)(lVar4 + 0x20);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  pcVar7 = *(code **)(*(long *)(lVar5 + -8) + 8);
  (*pcVar7)(param_1 + iVar3,lVar5);
  plVar1 = (long *)(param_1 + *(int *)(lVar4 + 0x28));
  if (*plVar1 != 0) {
    _swift_release();
    _swift_release(plVar1[1]);
  }
  plVar1 = (long *)(param_1 + *(int *)(lVar4 + 0x2c));
  if (*plVar1 != 0) {
    _swift_release();
    _swift_release(plVar1[1]);
  }
  lVar6 = 0;
  FUN_10005e080();
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar6 + 0x14) + 8));
  _objc_release(*(undefined8 *)(param_1 + *(int *)(lVar6 + 0x18)));
  _objc_release(*(undefined8 *)(param_1 + *(int *)(lVar6 + 0x1c)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar6 + 0x20) + 8));
  lVar2 = param_1 + *(int *)(lVar6 + 0x24);
  FUN_10005fcd4(0);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
  lVar4 = 0x1000c69c8;
  func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
  (*pcVar7)(lVar2 + *(int *)(lVar4 + 0x30),lVar5);
  _objc_release(*(undefined8 *)(param_1 + *(int *)(lVar6 + 0x28)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar6 + 0x2c) + 8));
  if (*(long *)(param_1 + *(int *)(lVar6 + 0x30) + 8) != 1) {
    _swift_bridgeObjectRelease();
  }
  _objc_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14)));
  plVar1 = (long *)(param_1 + *(int *)(param_2 + 0x18));
  if (*plVar1 != 0) {
    _swift_release();
                    /* WARNING: Could not recover jumptable at 0x000100086234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_1000b1698)(plVar1[1]);
    return;
  }
  return;
}



/* Entry: 100064cc0; end: 100065407;  */

undefined8 * FUN_100064cc0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 uVar15;
  
  uVar15 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar15;
  uVar5 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  uVar12 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar12;
  uVar12 = param_2[6];
  param_1[6] = uVar12;
  lVar7 = 0;
  FUN_10005cf80();
  iVar6 = *(int *)(lVar7 + 0x20);
  lVar8 = 0;
  __s10Foundation4DateVMa();
  pcVar14 = *(code **)(*(long *)(lVar8 + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar5);
  _objc_retain(uVar12);
  (*pcVar14)((long)param_1 + (long)iVar6,(long)param_2 + (long)iVar6,lVar8);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x24));
  plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x28));
  plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar7 + 0x28));
  if (*plVar2 == 0) {
    lVar10 = *plVar2;
    plVar1[1] = plVar2[1];
    *plVar1 = lVar10;
  }
  else {
    lVar10 = plVar2[1];
    *plVar1 = *plVar2;
    plVar1[1] = lVar10;
    _swift_retain();
    _swift_retain(lVar10);
  }
  plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x2c));
  plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar7 + 0x2c));
  if (*plVar2 == 0) {
    lVar7 = *plVar2;
    plVar1[1] = plVar2[1];
    *plVar1 = lVar7;
  }
  else {
    lVar7 = plVar2[1];
    *plVar1 = *plVar2;
    plVar1[1] = lVar7;
    _swift_retain();
    _swift_retain(lVar7);
  }
  lVar10 = 0;
  FUN_10005e080();
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x14));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x14));
  uVar15 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar15;
  uVar11 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x18));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x18)) = uVar11;
  uVar13 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x1c));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x1c)) = uVar13;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x20));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x20));
  uVar5 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar5;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x24));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x24));
  uVar12 = 0;
  FUN_10005fcd4(0);
  _swift_bridgeObjectRetain(uVar15);
  _objc_retain(uVar11);
  _objc_retain(uVar13);
  _swift_bridgeObjectRetain(uVar5);
  puVar9 = puVar4;
  _swift_getEnumCaseMultiPayload(puVar4,uVar12);
  uVar15 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar15;
  _swift_bridgeObjectRetain();
  lVar7 = 0x1000c69c8;
  func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
  (*pcVar14)((long)puVar3 + (long)*(int *)(lVar7 + 0x30),(long)puVar4 + (long)*(int *)(lVar7 + 0x30)
             ,lVar8);
  _swift_storeEnumTagMultiPayload(puVar3,uVar12,(int)puVar9 == 1);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x28)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x28));
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x2c));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x2c));
  uVar15 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar15;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x30));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x30));
  lVar7 = puVar4[1];
  _objc_retain();
  _swift_bridgeObjectRetain(uVar15);
  if (lVar7 == 1) {
    uVar15 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar15;
    puVar3[2] = puVar4[2];
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar7;
    puVar3[2] = puVar4[2];
    _swift_bridgeObjectRetain(lVar7);
  }
  iVar6 = *(int *)(param_3 + 0x18);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  plVar1 = (long *)((long)param_1 + (long)iVar6);
  plVar2 = (long *)((long)param_2 + (long)iVar6);
  lVar7 = *plVar2;
  _objc_retain();
  if (lVar7 == 0) {
    lVar7 = *plVar2;
    plVar1[1] = plVar2[1];
    *plVar1 = lVar7;
  }
  else {
    lVar8 = plVar2[1];
    *plVar1 = lVar7;
    plVar1[1] = lVar8;
    _swift_retain(lVar7);
    _swift_retain(lVar8);
  }
  return param_1;
}



/* Entry: 100065408; end: 100065443;  */

undefined8 FUN_100065408(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10005fcd4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100065444; end: 1000658ff;  */

undefined8 * FUN_100065444(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar7 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  param_1[6] = param_2[6];
  lVar4 = 0;
  FUN_10005cf80();
  iVar1 = *(int *)(lVar4 + 0x20);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  pcVar9 = *(code **)(*(long *)(lVar5 + -8) + 0x20);
  (*pcVar9)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar5);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x28));
  uVar7 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x28));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar7;
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x2c));
  uVar7 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x2c));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar7;
  lVar6 = 0;
  FUN_10005e080();
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x14));
  uVar7 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x14));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar7;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x18));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x20));
  uVar7 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x20));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar7;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x24));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x24));
  uVar7 = 0;
  FUN_10005fcd4(0);
  puVar8 = puVar3;
  _swift_getEnumCaseMultiPayload(puVar3,uVar7);
  uVar10 = *puVar3;
  puVar2[1] = puVar3[1];
  *puVar2 = uVar10;
  lVar4 = 0x1000c69c8;
  func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
  (*pcVar9)((long)puVar2 + (long)*(int *)(lVar4 + 0x30),(long)puVar3 + (long)*(int *)(lVar4 + 0x30),
            lVar5);
  _swift_storeEnumTagMultiPayload(puVar2,uVar7,(int)puVar8 == 1);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x28)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x2c));
  uVar7 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x2c));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar7;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x30));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x30));
  uVar7 = *puVar3;
  puVar2[1] = puVar3[1];
  *puVar2 = uVar7;
  puVar2[2] = puVar3[2];
  iVar1 = *(int *)(param_3 + 0x18);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  param_2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar7 = *param_2;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar2[1] = param_2[1];
  *puVar2 = uVar7;
  return param_1;
}



/* Entry: 100065900; end: 10006590b;  */

void FUN_100065900(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_1000b15c8)();
  return;
}



/* Entry: 10006590c; end: 100065987;  */

ulong FUN_10006590c(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  FUN_10005e080();
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x00010006595c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
    return param_1;
  }
  uVar2 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x14));
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  return (ulong)((int)uVar2 + 1);
}



/* Entry: 100065988; end: 100065993;  */

void FUN_100065988(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_1000b16d8)();
  return;
}



/* Entry: 100065994; end: 100065a0b;  */

void FUN_100065994(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10005e080();
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001000659ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
    return;
  }
  *(ulong *)(param_1 + *(int *)(param_4 + 0x14)) = (ulong)((int)param_2 - 1);
  return;
}



/* Entry: 100065a0c; end: 100065a43;  */

void FUN_100065a0c(undefined8 param_1)

{
  if (lRam00000001000c72b0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_100090d68);
  return;
}



/* Entry: 100065a44; end: 100065ac3;  */

void FUN_100065a44(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_10005e080();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBOWV_1000b10f8 + 0x40;
    puStack_28 = &UNK_10008d1c0;
    _swift_initStructMetadata(param_1,0x100,3,&lStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 100065ac4; end: 100065ad3;  */

void FUN_100065ac4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_1000b1608)(param_1,&UNK_100090d90,1);
  return;
}



/* Entry: 100065ad4; end: 10006606b;  */

void FUN_100065ad4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar4;
  undefined1 *puVar5;
  long *plVar6;
  long lVar7;
  
  lVar2 = 0x1000c7308;
  func_0x0001000100d0(0x1000c7308,&UNK_10008d240);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  plVar6 = (long *)(puVar5 + -extraout_x12);
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar4 + 0x40));
  lVar7 = (long)plVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_100065a0c();
  uVar3 = *(undefined8 *)(param_2 + *(int *)(lVar2 + 0x14));
  _objc_retain(uVar3);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar4 + 0x68))
            (lVar7,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  lVar2 = lVar7;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,lVar7,uVar3);
  _swift_release(uVar3);
  (**(code **)(lVar4 + 8))(lVar7,lVar1);
  lVar1 = lVar2;
  __s7SwiftUI5ImageV21SnapchatWidgetsSharedE013toDesaturatedC4ViewAA03AnyI0VyF();
  _swift_release();
  __s7SwiftUI19HorizontalAlignmentV7leadingACvgZ();
  *plVar6 = lVar2;
  plVar6[1] = 0;
  *(undefined1 *)(plVar6 + 2) = 0;
  lVar2 = 0x1000c7310;
  func_0x0001000100d0(0x1000c7310,&UNK_10008d248);
  func_0x000100065ce8((undefined1 *)((long)plVar6 + (long)*(int *)(lVar2 + 0x2c)),param_2);
  func_0x000100066264(plVar6,puVar5,0x1000c7308,&UNK_10008d240);
  *param_1 = lVar1;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0x101;
  lVar2 = 0x1000c7318;
  func_0x0001000100d0(0x1000c7318,&UNK_10008d250);
  func_0x000100066264(puVar5,(long)param_1 + (long)*(int *)(lVar2 + 0x30),0x1000c7308,&UNK_10008d240
                     );
  _swift_retain(lVar1);
  func_0x0001000662ac(plVar6,0x1000c7308,&UNK_10008d240);
  func_0x0001000662ac(puVar5,0x1000c7308,&UNK_10008d240);
  _swift_release(lVar1);
  return;
}



/* Entry: 10006606c; end: 100066077;  */

void FUN_10006606c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 100066078; end: 1000661cf;  */

void FUN_100066078(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar6;
  long *plVar7;
  
  lVar2 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar2 = 0x1000c72f0;
  puVar5 = &UNK_10008d230;
  func_0x0001000100d0();
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar7 = (long *)(puVar6 + -extraout_x8_00);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  *plVar7 = lVar3;
  plVar7[1] = (long)puVar5;
  lVar3 = 0x1000c72f8;
  func_0x0001000100d0(0x1000c72f8,&UNK_10008d238);
  FUN_100065ad4((undefined1 *)((long)plVar7 + (long)*(int *)(lVar3 + 0x2c)));
  lVar3 = 0;
  FUN_10005e080();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar3 + 0x14));
  uVar4 = *puVar1;
  __s21SnapchatWidgetsShared16DeeplinkBuildersO27buildFriendLocationDeepLink3for10isLoggedIn10Foundation3URLVSgSSSg_SbtFZ
            (puVar6,uVar4,puVar1[1],1);
  FUN_1000661d0();
  __s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgF(param_1,puVar6,lVar2,uVar4);
  func_0x0001000662ac(puVar6,0x1000c4330,&UNK_1000890b0);
  func_0x0001000662ac(plVar7,0x1000c72f0,&UNK_10008d230);
  return;
}



/* Entry: 1000661d0; end: 10006621f;  */

void FUN_1000661d0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c7300 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c72f0;
  func_0x000100010120(0x1000c72f0,&UNK_10008d230);
  puVar2 = PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0;
  _swift_getWitnessTable(PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0,uVar1);
  puRam00000001000c7300 = puVar2;
  return;
}



/* Entry: 100066220; end: 1000663d7;  */

undefined8 FUN_100066220(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10005fcd4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}


