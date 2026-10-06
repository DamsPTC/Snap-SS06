/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10001f150; end: 10001f30b;  */

long FUN_10001f150(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  
  lVar6 = 0x10002dc40;
  FUN_10000c3c0(0x10002dc40,&UNK_100021ca0);
  lVar8 = *(long *)(lVar6 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar5 = param_1;
  (*pcVar9)(param_1,1,lVar6);
  lVar4 = param_2;
  (*pcVar9)(param_2,1,lVar6);
  if ((int)lVar5 == 0) {
    if ((int)lVar4 == 0) {
      lVar6 = 0;
      __s10Foundation4DateVMa();
      (**(code **)(*(long *)(lVar6 + -8) + 0x18))(param_1,param_2,lVar6);
      goto LAB_10001f224;
    }
    FUN_10001ea10(param_1);
  }
  else if ((int)lVar4 == 0) {
    lVar5 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
    (**(code **)(lVar8 + 0x38))(param_1,0,1,lVar6);
    goto LAB_10001f224;
  }
  lVar6 = 0;
  FUN_10001d774();
  _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
LAB_10001f224:
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  uVar7 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  *puVar1 = *puVar2;
  uVar7 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  *puVar1 = *puVar2;
  uVar7 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  iVar3 = *(int *)(param_3 + 0x20);
  lVar6 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar6 + -8) + 0x18))(param_1 + iVar3,param_2 + iVar3,lVar6);
  return param_1;
}



/* Entry: 10001f30c; end: 10001f40f;  */

long FUN_10001f30c(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar4 = 0x10002dc40;
  FUN_10000c3c0(0x10002dc40,&UNK_100021ca0);
  lVar6 = *(long *)(lVar4 + -8);
  lVar5 = param_2;
  (**(code **)(lVar6 + 0x30))(param_2,1,lVar4);
  if ((int)lVar5 == 0) {
    lVar5 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x20))(param_1,param_2,lVar5);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,lVar4);
  }
  else {
    lVar4 = 0;
    FUN_10001d774();
    _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x18);
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar7 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar7;
  puVar2 = (undefined8 *)(param_2 + iVar1);
  uVar7 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar7;
  iVar1 = *(int *)(param_3 + 0x20);
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar7 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar7;
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1 + iVar1,param_2 + iVar1,lVar4);
  return param_1;
}



/* Entry: 10001f410; end: 10001f59b;  */

long FUN_10001f410(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  lVar8 = 0x10002dc40;
  FUN_10000c3c0(0x10002dc40,&UNK_100021ca0);
  lVar9 = *(long *)(lVar8 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar6 = param_1;
  (*pcVar10)(param_1,1,lVar8);
  lVar5 = param_2;
  (*pcVar10)(param_2,1,lVar8);
  if ((int)lVar6 == 0) {
    if ((int)lVar5 == 0) {
      lVar8 = 0;
      __s10Foundation4DateVMa();
      (**(code **)(*(long *)(lVar8 + -8) + 0x28))(param_1,param_2,lVar8);
      goto LAB_10001f4e4;
    }
    FUN_10001ea10(param_1);
  }
  else if ((int)lVar5 == 0) {
    lVar6 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar6 + -8) + 0x20))(param_1,param_2,lVar6);
    (**(code **)(lVar9 + 0x38))(param_1,0,1,lVar8);
    goto LAB_10001f4e4;
  }
  lVar8 = 0;
  FUN_10001d774();
  _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
LAB_10001f4e4:
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar3 = puVar2[1];
  uVar7 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar7);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  uVar3 = puVar2[1];
  uVar7 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar7);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar3 = puVar2[1];
  uVar7 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar7);
  iVar4 = *(int *)(param_3 + 0x20);
  lVar8 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar8 + -8) + 0x28))(param_1 + iVar4,param_2 + iVar4,lVar8);
  return param_1;
}



/* Entry: 10001f59c; end: 10001f5a7;  */

void FUN_10001f59c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000209dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_100028a68)();
  return;
}



/* Entry: 10001f5a8; end: 10001f653;  */

ulong FUN_10001f5a8(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  
  lVar1 = 0;
  FUN_10001d774();
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x30);
  }
  else {
    if ((int)param_2 == 0x7fffffff) {
      uVar2 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x14) + 8);
      if (0xfffffffe < uVar2) {
        uVar2 = 0xffffffff;
      }
      return (ulong)((int)uVar2 + 1);
    }
    lVar1 = 0;
    __s10Foundation4DateVMa();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x30);
    param_1 = param_1 + (long)*(int *)(param_3 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010001f650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,lVar1);
  return param_1;
}



/* Entry: 10001f654; end: 10001f65f;  */

void FUN_10001f654(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100020ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_100028b00)();
  return;
}



/* Entry: 10001f660; end: 10001f707;  */

void FUN_10001f660(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = 0;
  FUN_10001d774();
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x38);
  }
  else {
    if (param_3 == 0x7fffffff) {
      *(ulong *)(param_1 + *(int *)(param_4 + 0x14) + 8) = (ulong)((int)param_2 - 1);
      return;
    }
    lVar1 = 0;
    __s10Foundation4DateVMa();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x38);
    param_1 = param_1 + *(int *)(param_4 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010001f704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_2,lVar1);
  return;
}



/* Entry: 10001f708; end: 10001f797;  */

void FUN_10001f708(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  FUN_10001d774();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = &UNK_100022998;
    puStack_38 = &UNK_100022998;
    puStack_30 = &UNK_100022998;
    lVar1 = 0x13f;
    __s10Foundation4DateVMa();
    if (param_2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0x100,5,&lStack_48,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 10001f798; end: 10001f827;  */

int FUN_10001f798(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10001f814;
        goto LAB_10001f7f8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10001f7f8:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_10001f814:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10001f828; end: 10001f8d7;  */

void FUN_10001f828(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 4) {
    uVar3 = 4;
  }
  if (param_3 + 4 >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xfb < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xfc) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_10001f8a8;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_10001f8a8:
      *param_1 = (char)param_2 + '\x04';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xfc >> 8) + 1;
    *param_1 = (char)(param_2 - 0xfc);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[1] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Entry: 10001f8d8; end: 10001f8df;  */

undefined1 FUN_10001f8d8(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 10001f8e0; end: 10001f8e3;  */

void FUN_10001f8e0(void)

{
  return;
}



/* Entry: 10001f8e4; end: 10001f8eb;  */

void FUN_10001f8e4(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10001f8ec; end: 10001f8fb;  */

undefined1  [16] FUN_10001f8ec(void)

{
  return ZEXT816(0x100029b10);
}



/* Entry: 10001f8fc; end: 10001f98b;  */

int FUN_10001f8fc(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10001f978;
        goto LAB_10001f95c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10001f95c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10001f978:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10001f98c; end: 10001fa3b;  */

void FUN_10001f98c(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 1) {
    uVar3 = 4;
  }
  if (param_3 + 1 >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xfe < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xff) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_10001fa0c;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_10001fa0c:
      *param_1 = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xff >> 8) + 1;
    *param_1 = (char)(param_2 - 0xff);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[1] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Entry: 10001fa3c; end: 10001fa3f;  */

void FUN_10001fa3c(void)

{
  return;
}



/* Entry: 10001fa40; end: 10001fa4f;  */

undefined1  [16] FUN_10001fa40(void)

{
  return ZEXT816(0x100029ba0);
}



/* Entry: 10001fa50; end: 10001fa5f;  */

undefined1  [16] FUN_10001fa50(void)

{
  return ZEXT816(0x100029bc0);
}



/* Entry: 10001fa60; end: 10001faaf;  */

uint FUN_10001fa60(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 10001fab0; end: 10001fb2b;  */

void FUN_10001fab0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xffff < param_3 + 1U) {
    uVar2 = 4;
  }
  if (param_3 + 1U < 0x100) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = uVar2;
  }
  if (param_2 == 0) {
    if (1 < uVar1) {
      if (uVar1 == 2) {
        *(undefined2 *)param_1 = 0;
        return;
      }
      *param_1 = 0;
      return;
    }
    if (uVar1 != 0) {
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (uVar1 < 2) {
    if (uVar1 != 0) {
      *(char *)param_1 = (char)param_2;
      return;
    }
  }
  else {
    if (uVar1 == 2) {
      *(short *)param_1 = (short)param_2;
      return;
    }
    *param_1 = param_2;
  }
  return;
}



/* Entry: 10001fb2c; end: 10001fb33;  */

undefined8 FUN_10001fb2c(void)

{
  return 0;
}



/* Entry: 10001fb34; end: 10001fb37;  */

void FUN_10001fb34(void)

{
  return;
}



/* Entry: 10001fb38; end: 10001fb3b;  */

void FUN_10001fb38(void)

{
  return;
}



/* Entry: 10001fb3c; end: 10001fb4b;  */

undefined1  [16] FUN_10001fb3c(void)

{
  return ZEXT816(0x100029c50);
}



/* Entry: 10001fb4c; end: 10001fb4f;  */

void FUN_10001fb4c(void)

{
  undefined *puVar1;
  
  if (puRam000000010002e130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022a90;
  _swift_getWitnessTable(&UNK_100022a90,&UNK_100029c50);
  puRam000000010002e130 = puVar1;
  return;
}



/* Entry: 10001fb50; end: 10001fb8f;  */

void FUN_10001fb50(void)

{
  undefined *puVar1;
  
  if (puRam000000010002e130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022a90;
  _swift_getWitnessTable(&UNK_100022a90,&UNK_100029c50);
  puRam000000010002e130 = puVar1;
  return;
}



/* Entry: 10001fb90; end: 10001fb93;  */

void FUN_10001fb90(void)

{
  undefined *puVar1;
  
  if (puRam000000010002e138 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022b98;
  _swift_getWitnessTable(&UNK_100022b98,&UNK_100029ba0);
  puRam000000010002e138 = puVar1;
  return;
}



/* Entry: 10001fb94; end: 10001fbd3;  */

void FUN_10001fb94(void)

{
  undefined *puVar1;
  
  if (puRam000000010002e138 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022b98;
  _swift_getWitnessTable(&UNK_100022b98,&UNK_100029ba0);
  puRam000000010002e138 = puVar1;
  return;
}



/* Entry: 10001fbd4; end: 10001fbd7;  */

void FUN_10001fbd4(void)

{
  undefined *puVar1;
  
  if (puRam000000010002e140 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022c50;
  _swift_getWitnessTable(&UNK_100022c50,&UNK_100029b10);
  puRam000000010002e140 = puVar1;
  return;
}



/* Entry: 10001fbd8; end: 10001fc17;  */

void FUN_10001fbd8(void)

{
  undefined *puVar1;
  
  if (puRam000000010002e140 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022c50;
  _swift_getWitnessTable(&UNK_100022c50,&UNK_100029b10);
  puRam000000010002e140 = puVar1;
  return;
}



/* Entry: 10001fc18; end: 10001fc1b;  */

void FUN_10001fc18(void)

{
  undefined *puVar1;
  
  if (puRam000000010002e148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022be8;
  _swift_getWitnessTable(&UNK_100022be8,&UNK_100029b10);
  puRam000000010002e148 = puVar1;
  return;
}



/* Entry: 10001fc1c; end: 10001fc5b;  */

void FUN_10001fc1c(void)

{
  undefined *puVar1;
  
  if (puRam000000010002e148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022be8;
  _swift_getWitnessTable(&UNK_100022be8,&UNK_100029b10);
  puRam000000010002e148 = puVar1;
  return;
}



/* Entry: 10001fc5c; end: 10001fc5f;  */

void FUN_10001fc5c(void)

{
  undefined *puVar1;
  
  if (puRam000000010002e150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022bc0;
  _swift_getWitnessTable(&UNK_100022bc0,&UNK_100029b10);
  puRam000000010002e150 = puVar1;
  return;
}



/* Entry: 10001fc60; end: 10001fc9f;  */

void FUN_10001fc60(void)

{
  undefined *puVar1;
  
  if (puRam000000010002e150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022bc0;
  _swift_getWitnessTable(&UNK_100022bc0,&UNK_100029b10);
  puRam000000010002e150 = puVar1;
  return;
}



/* Entry: 10001fca0; end: 10001fca3;  */

void FUN_10001fca0(void)

{
  undefined *puVar1;
  
  if (puRam000000010002e158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022ae0;
  _swift_getWitnessTable(&UNK_100022ae0,&UNK_100029bc0);
  puRam000000010002e158 = puVar1;
  return;
}



/* Entry: 10001fca4; end: 10001fce3;  */

void FUN_10001fca4(void)

{
  undefined *puVar1;
  
  if (puRam000000010002e158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022ae0;
  _swift_getWitnessTable(&UNK_100022ae0,&UNK_100029bc0);
  puRam000000010002e158 = puVar1;
  return;
}



/* Entry: 10001fce4; end: 10001fce7;  */

void FUN_10001fce4(void)

{
  undefined *puVar1;
  
  if (puRam000000010002e160 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022ab8;
  _swift_getWitnessTable(&UNK_100022ab8,&UNK_100029bc0);
  puRam000000010002e160 = puVar1;
  return;
}



/* Entry: 10001fce8; end: 10001fd27;  */

void FUN_10001fce8(void)

{
  undefined *puVar1;
  
  if (puRam000000010002e160 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022ab8;
  _swift_getWitnessTable(&UNK_100022ab8,&UNK_100029bc0);
  puRam000000010002e160 = puVar1;
  return;
}



/* Entry: 10001fd28; end: 10001fd2b;  */

void FUN_10001fd28(void)

{
  undefined *puVar1;
  
  if (puRam000000010002e168 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022a28;
  _swift_getWitnessTable(&UNK_100022a28,&UNK_100029c50);
  puRam000000010002e168 = puVar1;
  return;
}



/* Entry: 10001fd2c; end: 10001fd6b;  */

void FUN_10001fd2c(void)

{
  undefined *puVar1;
  
  if (puRam000000010002e168 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022a28;
  _swift_getWitnessTable(&UNK_100022a28,&UNK_100029c50);
  puRam000000010002e168 = puVar1;
  return;
}



/* Entry: 10001fd6c; end: 10001fd6f;  */

void FUN_10001fd6c(void)

{
  undefined *puVar1;
  
  if (puRam000000010002e170 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022a00;
  _swift_getWitnessTable(&UNK_100022a00,&UNK_100029c50);
  puRam000000010002e170 = puVar1;
  return;
}



/* Entry: 10001fd70; end: 10001fdaf;  */

void FUN_10001fd70(void)

{
  undefined *puVar1;
  
  if (puRam000000010002e170 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022a00;
  _swift_getWitnessTable(&UNK_100022a00,&UNK_100029c50);
  puRam000000010002e170 = puVar1;
  return;
}



/* Entry: 10001fdb0; end: 10001fdb3;  */

void FUN_10001fdb0(void)

{
  undefined *puVar1;
  
  if (puRam000000010002e178 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022b30;
  _swift_getWitnessTable(&UNK_100022b30,&UNK_100029ba0);
  puRam000000010002e178 = puVar1;
  return;
}



/* Entry: 10001fdb4; end: 10001fdf3;  */

void FUN_10001fdb4(void)

{
  undefined *puVar1;
  
  if (puRam000000010002e178 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022b30;
  _swift_getWitnessTable(&UNK_100022b30,&UNK_100029ba0);
  puRam000000010002e178 = puVar1;
  return;
}



/* Entry: 10001fdf4; end: 10001fdf7;  */

void FUN_10001fdf4(void)

{
  undefined *puVar1;
  
  if (puRam000000010002e180 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022b08;
  _swift_getWitnessTable(&UNK_100022b08,&UNK_100029ba0);
  puRam000000010002e180 = puVar1;
  return;
}



/* Entry: 10001fdf8; end: 10001fe37;  */

void FUN_10001fdf8(void)

{
  undefined *puVar1;
  
  if (puRam000000010002e180 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022b08;
  _swift_getWitnessTable(&UNK_100022b08,&UNK_100029ba0);
  puRam000000010002e180 = puVar1;
  return;
}



/* Entry: 10001fe38; end: 10001ffe7;  */

undefined4 FUN_10001fe38(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x63697274656d;
  if ((param_1 == 0x63697274656d && param_2 == -0x1a00000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x63697274656d,0xe600000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x644972657375;
    if (((param_1 == 0x644972657375) && (param_2 == -0x1a00000000000000)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x644972657375,0xe600000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0x496e6f6973736573;
      if (((param_1 == 0x496e6f6973736573) && (param_2 == -0x16ffffffffffff9c)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x496e6f6973736573,0xe900000000000064,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        uVar2 = 2;
      }
      else {
        uVar1 = 0;
        if (((param_1 == 0x6f4d656369766564) && (param_2 == -0x14ffffffff939a9c)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x6f4d656369766564,0xeb000000006c6564,param_1,param_2,0), (uVar1 & 1) != 0))
        {
          _swift_bridgeObjectRelease(param_2);
          uVar2 = 3;
        }
        else {
          uVar1 = 0x7354746e657665;
          if ((param_1 == 0x7354746e657665) && (param_2 == -0x1900000000000000)) {
            _swift_bridgeObjectRelease(0xe700000000000000);
            uVar2 = 4;
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x7354746e657665,0xe700000000000000,param_1,param_2,0);
            _swift_bridgeObjectRelease(param_2);
            uVar2 = 4;
            if ((uVar1 & 1) == 0) {
              uVar2 = 5;
            }
          }
        }
      }
    }
  }
  return uVar2;
}



/* Entry: 10001ffe8; end: 10001ffeb;  */

undefined1 FUN_10001ffe8(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 10001ffec; end: 10001ffef;  */

undefined1 FUN_10001ffec(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 10001fff0; end: 10001fff3;  */

bool FUN_10001fff0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10001fff4; end: 10001fff7;  */

bool FUN_10001fff4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10001fff8; end: 10001fffb;  */

void FUN_10001fff8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10001fffc; end: 10001ffff;  */

void FUN_10001fffc(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100020000; end: 100020003;  */

void FUN_100020000(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 100020004; end: 100020007;  */

void FUN_100020004(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 100020008; end: 10002000b;  */

void FUN_100020008(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}



/* Entry: 10002000c; end: 10002000f;  */

void FUN_10002000c(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}



/* Entry: 100020010; end: 100020013;  */

void FUN_100020010(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  __ss6HasherV8_combineyySuF(param_1,*unaff_x20);
  return;
}



/* Entry: 100020014; end: 100020017;  */

void FUN_100020014(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  __ss6HasherV8_combineyySuF(param_1,*unaff_x20);
  return;
}



/* Entry: 100020018; end: 10002001b;  */

void FUN_100020018(void)

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



/* Entry: 10002001c; end: 10002001f;  */

void FUN_10002001c(void)

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


