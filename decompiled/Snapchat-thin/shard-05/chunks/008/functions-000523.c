/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104104ba0; end: 104104bbf;  */

bool FUN_104104ba0(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104104bc0; end: 104105deb;  */

undefined8 FUN_104104bc0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar9 = unaff_x20[4];
  if (lVar9 < 0) {
    uStack_78 = 0;
  }
  else {
    uVar1 = *unaff_x20;
    uVar3 = unaff_x20[1];
    uVar2 = unaff_x20[2];
    uVar4 = unaff_x20[3];
    uVar8 = unaff_x20[5];
    uVar5 = 0xff;
    lStack_70 = lVar9;
    FUN_104105dec(0xff,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                  *(undefined8 *)(param_1 + 0x20));
    uVar6 = 0;
    __ss15ContiguousArrayVMa(0,uVar5);
    _swift_retain(uVar1);
    _swift_retain(uVar3);
    _swift_bridgeObjectRetain(uVar2);
    _swift_retain(uVar4);
    _swift_retain(lVar9);
    _swift_bridgeObjectRetain(uVar8);
    puVar7 = PTR___ss15ContiguousArrayVyxGSlsMc_11034e6d0;
    _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSlsMc_11034e6d0,uVar6);
    __sSlsE7isEmptySbvg(uVar6,puVar7);
    if ((uVar6 & 1) == 0) {
      FUN_104105df8(uVar1,uVar3,uVar2,uVar4,lVar9,uVar8);
      puVar7 = &UNK_10dcd80c0;
      lStack_70 = uVar4;
      lStack_68 = lVar9;
      _swift_getWitnessTable(&UNK_10dcd80c0,uVar5);
      FUN_10417b6a8(0,uVar5,puVar7);
      FUN_10417686c(auStack_80);
      *unaff_x20 = uVar1;
      unaff_x20[1] = uVar3;
      unaff_x20[2] = uVar2;
      unaff_x20[3] = lStack_70;
      unaff_x20[4] = lStack_68;
      unaff_x20[5] = uVar8;
    }
    else {
      _swift_release(uVar3);
      _swift_release(uVar1);
      _swift_bridgeObjectRelease(uVar2);
      _swift_release(lVar9);
      _swift_release(uVar4);
      _swift_bridgeObjectRelease(uVar8);
      uStack_78 = 1;
    }
  }
  return uStack_78;
}



/* Entry: 104105dec; end: 104105df7;  */

void FUN_104105dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f0c84);
  return;
}



/* Entry: 104105df8; end: 104105e67;  */

void FUN_104105df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  if (-1 < param_5) {
    _swift_release(param_2);
    _swift_bridgeObjectRelease(param_3);
    _swift_release(param_5);
    _swift_bridgeObjectRelease(param_6);
    _swift_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)();
  return;
}



/* Entry: 104105e68; end: 104105e7f;  */

void FUN_104105e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f0bec);
  return;
}



/* Entry: 104105e80; end: 10410606b;  */

void FUN_104105e80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = 0;
  FUN_104105e68(0,param_2,param_3,param_4);
  uVar2 = 0;
  __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,uVar1);
  puVar3 = &UNK_10dcd8080;
  _swift_getWitnessTable(&UNK_10dcd8080,uVar1);
  uVar9 = uVar1;
  FUN_1041757d4(uVar2,uVar1,puVar3);
  uVar4 = 0;
  __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,uVar1);
  uVar5 = 0;
  __sSaMa(0,uVar1);
  puVar6 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar5);
  __sSlsE7isEmptySbvg(uVar5,puVar6);
  if ((uVar5 & 1) == 0) {
    func_0x0001020ee2b0(uVar4,uVar1,puVar3);
  }
  else {
    _swift_bridgeObjectRelease(uVar4);
    __sS2hyxGycfC(uVar1,puVar3);
    uVar4 = uVar1;
  }
  uVar7 = 0;
  FUN_104105dec(0,param_2,param_3,param_4);
  uVar8 = 0;
  __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,uVar7);
  puVar3 = &UNK_10dcd80c0;
  _swift_getWitnessTable(&UNK_10dcd80c0,uVar7);
  uVar10 = uVar7;
  FUN_1041757d4(uVar8,uVar7,puVar3);
  uVar1 = 0;
  __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,uVar7);
  uVar5 = 0;
  __sSaMa(0,uVar7);
  puVar6 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar5);
  __sSlsE7isEmptySbvg(uVar5,puVar6);
  if ((uVar5 & 1) == 0) {
    func_0x0001020ee2b0(uVar1,uVar7,puVar3);
  }
  else {
    _swift_bridgeObjectRelease(uVar1);
    __sS2hyxGycfC(uVar7,puVar3);
    uVar1 = uVar7;
  }
  *param_1 = uVar2;
  param_1[1] = uVar9;
  param_1[2] = uVar4;
  param_1[3] = uVar8;
  param_1[4] = uVar10;
  param_1[5] = uVar1;
  return;
}



/* Entry: 10410606c; end: 10410609b;  */

void FUN_10410606c(void)

{
  return;
}



/* Entry: 10410609c; end: 10410612f;  */

void FUN_10410609c(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
    _swift_bridgeObjectRelease();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
    return;
  }
  return;
}



/* Entry: 104106130; end: 1041061e7;  */

ulong * FUN_104106130(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 0xffffffff) {
    if (0xfffffffe < uVar1) {
      *param_1 = uVar1;
      uVar1 = param_2[1];
      param_1[1] = uVar1;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar1);
      return param_1;
    }
  }
  else {
    if (0xfffffffe < uVar1) {
      *param_1 = uVar1;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar2);
      uVar1 = param_1[1];
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar1);
      return param_1;
    }
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(param_1[1]);
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 1041061e8; end: 104106273;  */

ulong * FUN_1041061e8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 0xffffffff) {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
  }
  else if (*param_2 < 0xffffffff) {
    _swift_bridgeObjectRelease(uVar1);
    _swift_bridgeObjectRelease(param_1[1]);
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
  }
  else {
    *param_1 = *param_2;
    _swift_bridgeObjectRelease(uVar1);
    uVar1 = param_1[1];
    param_1[1] = param_2[1];
    _swift_bridgeObjectRelease(uVar1);
  }
  return param_1;
}



/* Entry: 104106274; end: 10410634f;  */

int FUN_104106274(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 104106350; end: 1041063d3;  */

void FUN_104106350(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_38 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_30 = &UNK_10dcd7f08;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  __sSqMa();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,3,&puStack_38,param_1 + 0x28);
  }
  return;
}



/* Entry: 1041063d4; end: 1041064db;  */

long * FUN_1041063d4(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar3 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar3 + -8);
  uVar1 = (ulong)*(uint *)(lVar8 + 0x50) & 0xff;
  lVar2 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  if (((uint)uVar1 < 8 && (*(uint *)(lVar8 + 0x50) & 0x100000) == 0) &&
      0xffffffffffffffe6 < (-uVar1 - 0x11 | uVar1) - lVar2) {
    *param_1 = *param_2;
    puVar4 = (undefined8 *)((long)param_1 + 0xfU & 0xffffffffffffff8);
    puVar6 = (undefined8 *)((long)param_2 + 0xfU & 0xffffffffffffff8);
    puVar7 = puVar6 + 1;
    puVar5 = puVar4 + 1;
    *puVar4 = *puVar6;
    puVar4 = puVar7;
    (**(code **)(lVar8 + 0x30))(puVar7,1,lVar3);
    if ((int)puVar4 == 0) {
      (**(code **)(lVar8 + 0x10))(puVar5,puVar7,lVar3);
      (**(code **)(lVar8 + 0x38))(puVar5,0,1,lVar3);
    }
    else {
      _memcpy(puVar5,puVar7,lVar2);
    }
  }
  else {
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)((uint)uVar1 & 0xf8 ^ 0x1f8) & uVar1 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1041064dc; end: 10410654b;  */

void FUN_1041064dc(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(lVar3 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar1 = (param_1 + 0xfU & 0xfffffffffffffff8) + uVar5 + 8;
  uVar2 = uVar1 & (uVar5 ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 0x30))(uVar2,1,lVar3);
  if ((int)uVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104106548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(uVar1 & (uVar5 ^ 0xffffffffffffffff),lVar3);
  return;
}



/* Entry: 10410654c; end: 104106613;  */

undefined8 * FUN_10410654c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  *param_1 = *param_2;
  puVar4 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  *puVar4 = *puVar5;
  lVar6 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar6 + -8);
  uVar7 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar1 = uVar7 + 8 + (long)puVar4;
  uVar2 = uVar7 + 8 + (long)puVar5;
  uVar3 = uVar2 & (uVar7 ^ 0xffffffffffffffff);
  (**(code **)(lVar8 + 0x30))(uVar3,1,lVar6);
  if ((int)uVar3 == 0) {
    (**(code **)(lVar8 + 0x10))
              (uVar1 & (uVar7 ^ 0xffffffffffffffff),uVar2 & (uVar7 ^ 0xffffffffffffffff),lVar6);
    (**(code **)(lVar8 + 0x38))(uVar1 & (uVar7 ^ 0xffffffffffffffff),0,1,lVar6);
  }
  else {
    lVar6 = *(long *)(lVar8 + 0x40);
    if (*(int *)(lVar8 + 0x54) == 0) {
      lVar6 = lVar6 + 1;
    }
    _memcpy(uVar1 & (uVar7 ^ 0xffffffffffffffff),uVar2 & (uVar7 ^ 0xffffffffffffffff),lVar6);
  }
  return param_1;
}



/* Entry: 104106614; end: 104106727;  */

undefined8 * FUN_104106614(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  
  *param_1 = *param_2;
  puVar5 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  *puVar5 = *puVar6;
  lVar7 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(lVar7 + -8);
  uVar8 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar1 = uVar8 + 8 + (long)puVar5;
  uVar2 = uVar8 + 8 + (long)puVar6;
  pcVar10 = *(code **)(lVar9 + 0x30);
  uVar3 = uVar1 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar10)(uVar3,1,lVar7);
  uVar4 = uVar2 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar10)(uVar4,1,lVar7);
  if ((int)uVar3 == 0) {
    if ((int)uVar4 == 0) {
      (**(code **)(lVar9 + 0x18))
                (uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar7);
      return param_1;
    }
    (**(code **)(lVar9 + 8))(uVar1 & (uVar8 ^ 0xffffffffffffffff),lVar7);
  }
  else if ((int)uVar4 == 0) {
    (**(code **)(lVar9 + 0x10))
              (uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar7);
    (**(code **)(lVar9 + 0x38))(uVar1 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar7);
    return param_1;
  }
  lVar7 = *(long *)(lVar9 + 0x40);
  if (*(int *)(lVar9 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  _memcpy(uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar7);
  return param_1;
}



/* Entry: 104106728; end: 1041067ef;  */

undefined8 * FUN_104106728(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  *param_1 = *param_2;
  puVar4 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  *puVar4 = *puVar5;
  lVar6 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar6 + -8);
  uVar7 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar1 = uVar7 + 8 + (long)puVar4;
  uVar2 = uVar7 + 8 + (long)puVar5;
  uVar3 = uVar2 & (uVar7 ^ 0xffffffffffffffff);
  (**(code **)(lVar8 + 0x30))(uVar3,1,lVar6);
  if ((int)uVar3 == 0) {
    (**(code **)(lVar8 + 0x20))
              (uVar1 & (uVar7 ^ 0xffffffffffffffff),uVar2 & (uVar7 ^ 0xffffffffffffffff),lVar6);
    (**(code **)(lVar8 + 0x38))(uVar1 & (uVar7 ^ 0xffffffffffffffff),0,1,lVar6);
  }
  else {
    lVar6 = *(long *)(lVar8 + 0x40);
    if (*(int *)(lVar8 + 0x54) == 0) {
      lVar6 = lVar6 + 1;
    }
    _memcpy(uVar1 & (uVar7 ^ 0xffffffffffffffff),uVar2 & (uVar7 ^ 0xffffffffffffffff),lVar6);
  }
  return param_1;
}



/* Entry: 1041067f0; end: 104106903;  */

undefined8 * FUN_1041067f0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  
  *param_1 = *param_2;
  puVar5 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  *puVar5 = *puVar6;
  lVar7 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(lVar7 + -8);
  uVar8 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar1 = uVar8 + 8 + (long)puVar5;
  uVar2 = uVar8 + 8 + (long)puVar6;
  pcVar10 = *(code **)(lVar9 + 0x30);
  uVar3 = uVar1 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar10)(uVar3,1,lVar7);
  uVar4 = uVar2 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar10)(uVar4,1,lVar7);
  if ((int)uVar3 == 0) {
    if ((int)uVar4 == 0) {
      (**(code **)(lVar9 + 0x28))
                (uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar7);
      return param_1;
    }
    (**(code **)(lVar9 + 8))(uVar1 & (uVar8 ^ 0xffffffffffffffff),lVar7);
  }
  else if ((int)uVar4 == 0) {
    (**(code **)(lVar9 + 0x20))
              (uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar7);
    (**(code **)(lVar9 + 0x38))(uVar1 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar7);
    return param_1;
  }
  lVar7 = *(long *)(lVar9 + 0x40);
  if (*(int *)(lVar9 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  _memcpy(uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar7);
  return param_1;
}



/* Entry: 104106904; end: 104106a77;  */

int FUN_104106904(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  
  lVar9 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  iVar2 = *(int *)(lVar9 + 0x54);
  uVar5 = 0;
  if (iVar2 != 0) {
    uVar5 = iVar2 - 1;
  }
  uVar1 = uVar5;
  if (uVar5 < 0x7fffffff) {
    uVar1 = 0x7ffffffe;
  }
  lVar10 = *(long *)(lVar9 + 0x40);
  if (iVar2 == 0) {
    lVar10 = lVar10 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  bVar3 = *(byte *)(lVar9 + 0x50);
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_1041069bc;
  uVar7 = lVar10 + ((ulong)bVar3 + 0x10 & ((ulong)bVar3 ^ 0xffffffffffffffff));
  uVar6 = (uint)uVar7;
  uVar4 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar11 = (param_2 - uVar1) + ~(-1 << (ulong)(uVar4 & 0x1f)) >> (ulong)(uVar4 & 0x1f);
    if (uVar11 < 0xff) {
      if (uVar11 == 0) goto LAB_1041069bc;
      goto LAB_10410697c;
    }
    if (uVar11 < 0xffff) {
      uVar11 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar11 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_10410697c:
    uVar11 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar11 != 0) {
    uVar5 = 0;
    if (uVar6 < 4) {
      uVar5 = uVar11 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar6 != 0) {
      uVar4 = 4;
      if (uVar6 < 4) {
        uVar4 = uVar6;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar7 = (ulong)(byte)*param_1;
        }
        else {
          uVar7 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar7 = (ulong)(uint3)*param_1;
      }
      else {
        uVar7 = (ulong)*param_1;
      }
    }
    return uVar1 + ((uint)uVar7 | uVar5) + 1;
  }
LAB_1041069bc:
  puVar8 = (ulong *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  if (uVar5 < 0x7fffffff) {
    uVar7 = *puVar8;
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    iVar2 = 0;
    if (1 < (int)uVar7 + 1U) {
      iVar2 = (int)uVar7;
    }
    return iVar2;
  }
  uVar5 = (int)puVar8 + (uint)bVar3 + 8 & ~(uint)bVar3;
  (**(code **)(lVar9 + 0x30))();
  iVar2 = 0;
  if (uVar5 != 0) {
    iVar2 = uVar5 - 1;
  }
  return iVar2;
}



/* Entry: 104106a78; end: 104106d17;  */

void FUN_104106a78(uint *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  long lVar6;
  ulong *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  uint *puVar12;
  byte bVar13;
  int iVar14;
  
  lVar9 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  iVar14 = *(int *)(lVar9 + 0x54);
  uVar2 = 0;
  if (iVar14 != 0) {
    uVar2 = iVar14 - 1;
  }
  uVar8 = uVar2;
  if (uVar2 < 0x7fffffff) {
    uVar8 = 0x7ffffffe;
  }
  uVar10 = (ulong)*(byte *)(lVar9 + 0x50);
  lVar6 = *(long *)(lVar9 + 0x40);
  if (iVar14 == 0) {
    lVar6 = lVar6 + 1;
  }
  lVar1 = (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)) + lVar6;
  uVar5 = (uint)lVar1;
  bVar13 = 0;
  if (uVar8 <= param_3 && param_3 - uVar8 != 0) {
    uVar3 = (param_3 - uVar8) + ~(-1 << (ulong)(uVar5 << 3 & 0x1f)) >> (ulong)(uVar5 << 3 & 0x1f);
    bVar11 = 2;
    if (0xfffe < uVar3) {
      bVar11 = 4;
    }
    if (uVar3 < 0xff) {
      bVar11 = uVar3 != 0;
    }
    bVar13 = 1;
    if (uVar5 < 4) {
      bVar13 = bVar11;
    }
  }
  if (uVar8 < param_2) {
    param_2 = param_2 + ~uVar8;
    if (uVar5 < 4) {
      iVar14 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar1);
        uVar4 = (undefined2)uVar2;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar1);
      *param_1 = param_2;
      iVar14 = 1;
    }
    if (bVar13 < 2) {
      if (bVar13 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar14;
      }
    }
    else if (bVar13 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar14;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar14;
    }
  }
  else {
    if (bVar13 < 2) {
      if (bVar13 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (bVar13 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (param_2 != 0) {
      puVar7 = (ulong *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
      if (uVar2 < 0x7fffffff) {
        if (param_2 < 0x7fffffff) {
          *puVar7 = (ulong)param_2;
        }
        else {
          *puVar7 = 0;
          *(uint *)puVar7 = param_2 + 0x80000001;
        }
      }
      else {
        puVar12 = (uint *)((long)puVar7 + uVar10 + 8 & ~uVar10);
        if (param_2 <= uVar2) {
                    /* WARNING: Could not recover jumptable at 0x000104106c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar9 + 0x38))(puVar12,param_2 + 1);
          return;
        }
        uVar5 = (uint)lVar6;
        uVar8 = 0xffffffff;
        if (uVar5 < 4) {
          uVar8 = ~(-1 << (ulong)((uVar5 & 3) << 3));
        }
        if (uVar5 != 0) {
          uVar8 = uVar8 & (uVar2 - param_2 ^ 0xffffffff);
          uVar2 = 4;
          if (uVar5 < 4) {
            uVar2 = uVar5;
          }
          _bzero(puVar12,lVar6);
          if ((int)uVar2 < 3) {
            if (uVar2 == 1) {
              *(char *)puVar12 = (char)uVar8;
            }
            else {
              *(short *)puVar12 = (short)uVar8;
            }
          }
          else if (uVar2 == 3) {
            *(short *)puVar12 = (short)uVar8;
            *(char *)((long)puVar12 + 2) = (char)(uVar8 >> 0x10);
          }
          else {
            *puVar12 = uVar8;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 104106d18; end: 104106d9f;  */

void FUN_104106d18(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_58 [32];
  long lStack_38;
  undefined *puStack_30;
  undefined1 *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  __sSqMa();
  if (uVar2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dcd7f48;
    _swift_getTupleTypeLayout2(auStack_58,&UNK_10dcd7f08);
    puStack_28 = auStack_58;
    _swift_initEnumMetadataMultiPayload(param_1,0,3,&lStack_38);
  }
  return;
}



/* Entry: 104106da0; end: 104106f6f;  */

long * FUN_104106da0(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar8 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar8 + -8);
  uVar5 = *(ulong *)(lVar10 + 0x40);
  if (*(int *)(lVar10 + 0x54) == 0) {
    uVar5 = uVar5 + 1;
  }
  uVar6 = (ulong)*(uint *)(lVar10 + 0x50) & 0xff;
  uVar1 = (uVar6 + 8 & (uVar6 ^ 0xffffffffffffffff)) + uVar5;
  uVar2 = uVar5;
  if (uVar5 <= uVar1) {
    uVar2 = uVar1;
  }
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  if (((uint)uVar6 < 8 && (*(uint *)(lVar10 + 0x50) & 0x100000) == 0) && uVar2 + 1 < 0x19) {
    uVar7 = (uint)*(byte *)((long)param_2 + uVar2);
    if (2 < *(byte *)((long)param_2 + uVar2)) {
      uVar7 = (int)*param_2 + 3;
    }
    if (uVar7 == 2) {
      uVar9 = ~uVar6;
      *param_1 = *param_2;
      uVar1 = (long)param_1 + uVar6 + 8;
      uVar6 = (long)param_2 + uVar6 + 8;
      uVar3 = uVar6 & uVar9;
      (**(code **)(lVar10 + 0x30))(uVar3,1,lVar8);
      if ((int)uVar3 == 0) {
        (**(code **)(lVar10 + 0x10))(uVar1 & uVar9,uVar6 & uVar9,lVar8);
        (**(code **)(lVar10 + 0x38))(uVar1 & uVar9,0,1,lVar8);
      }
      else {
        _memcpy(uVar1 & uVar9,uVar6 & uVar9,uVar5);
      }
      *(undefined1 *)((long)param_1 + uVar2) = 2;
    }
    else if (uVar7 == 1) {
      lVar8 = *param_2;
      _swift_errorRetain(lVar8);
      *param_1 = lVar8;
      *(undefined1 *)((long)param_1 + uVar2) = 1;
    }
    else {
      plVar4 = param_2;
      (**(code **)(lVar10 + 0x30))(param_2,1,lVar8);
      if ((int)plVar4 == 0) {
        (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar8);
        (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar8);
      }
      else {
        _memcpy(param_1,param_2,uVar5);
      }
      *(undefined1 *)((long)param_1 + uVar2) = 0;
    }
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    param_1 = (long *)(lVar8 + ((ulong)((uint)uVar6 & 0xf8 ^ 0x1f8) & uVar6 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 104106f70; end: 1041070c7;  */

void FUN_104106f70(uint *param_1,long param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  uint *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)(param_2 + 0x10);
  lVar11 = *(long *)(lVar10 + -8);
  uVar7 = *(ulong *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    uVar7 = uVar7 + 1;
  }
  uVar5 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar2 = (uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) + uVar7;
  if (uVar7 <= uVar2) {
    uVar7 = uVar2;
  }
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  bVar3 = *(byte *)((long)param_1 + uVar7);
  uVar8 = (uint)bVar3;
  if (2 < bVar3) {
    uVar6 = (uint)uVar7;
    uVar9 = 4;
    if (uVar6 < 4) {
      uVar9 = uVar6;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_104107030;
      uVar9 = (uint)(byte)*param_1;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*param_1;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*param_1;
    }
    else {
      uVar9 = *param_1;
    }
    uVar8 = uVar9 | bVar3 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 3;
  }
LAB_104107030:
  if (uVar8 == 2) {
    pbVar1 = (byte *)((long)param_1 + uVar5 + 8);
    uVar7 = (ulong)pbVar1 & ~uVar5;
    (**(code **)(lVar11 + 0x30))(uVar7,1,lVar10);
    if ((int)uVar7 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 8);
      param_1 = (uint *)((ulong)pbVar1 & ~uVar5);
      goto LAB_1041070b4;
    }
  }
  else {
    if (uVar8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_errorRelease_11034f318)(*(undefined8 *)param_1);
      return;
    }
    puVar4 = param_1;
    (**(code **)(lVar11 + 0x30))(param_1,1,lVar10);
    if ((int)puVar4 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 8);
LAB_1041070b4:
                    /* WARNING: Could not recover jumptable at 0x0001041070c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,lVar10);
      return;
    }
  }
  return;
}



/* Entry: 1041070c8; end: 1041072b7;  */

undefined8 * FUN_1041070c8(undefined8 *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  uint *puVar5;
  undefined1 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  
  lVar11 = *(long *)(param_3 + 0x10);
  lVar15 = *(long *)(lVar11 + -8);
  uVar8 = *(ulong *)(lVar15 + 0x40);
  if (*(int *)(lVar15 + 0x54) == 0) {
    uVar8 = uVar8 + 1;
  }
  uVar7 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar2 = (uVar7 + 8 & (uVar7 ^ 0xffffffffffffffff)) + uVar8;
  uVar3 = uVar8;
  if (uVar8 <= uVar2) {
    uVar3 = uVar2;
  }
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar4 = *(byte *)((long)param_2 + uVar3);
  uVar9 = (uint)bVar4;
  if (2 < bVar4) {
    uVar14 = (uint)uVar3;
    uVar10 = 4;
    if (uVar14 < 4) {
      uVar10 = uVar14;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto LAB_104107194;
      uVar10 = (uint)(byte)*param_2;
    }
    else if (uVar10 == 2) {
      uVar10 = (uint)(ushort)*param_2;
    }
    else if (uVar10 == 3) {
      uVar10 = (uint)(uint3)*param_2;
    }
    else {
      uVar10 = *param_2;
    }
    uVar9 = uVar10 | bVar4 - 3 << (ulong)((uVar14 & 3) << 3);
    if (3 < uVar14) {
      uVar9 = uVar10;
    }
    uVar9 = uVar9 + 3;
  }
LAB_104107194:
  if (uVar9 == 2) {
    uVar13 = ~uVar7;
    *param_1 = *(undefined8 *)param_2;
    uVar2 = (long)param_1 + uVar7 + 8;
    pbVar1 = (byte *)((long)param_2 + uVar7 + 8);
    uVar7 = (ulong)pbVar1 & uVar13;
    (**(code **)(lVar15 + 0x30))(uVar7,1,lVar11);
    if ((int)uVar7 == 0) {
      (**(code **)(lVar15 + 0x10))(uVar2 & uVar13,(ulong)pbVar1 & uVar13,lVar11);
      (**(code **)(lVar15 + 0x38))(uVar2 & uVar13,0,1,lVar11);
    }
    else {
      _memcpy(uVar2 & uVar13,(ulong)pbVar1 & uVar13,uVar8);
    }
    uVar6 = 2;
  }
  else if (uVar9 == 1) {
    uVar12 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar12);
    *param_1 = uVar12;
    uVar6 = 1;
  }
  else {
    puVar5 = param_2;
    (**(code **)(lVar15 + 0x30))(param_2,1,lVar11);
    if ((int)puVar5 == 0) {
      (**(code **)(lVar15 + 0x10))(param_1,param_2,lVar11);
      (**(code **)(lVar15 + 0x38))(param_1,0,1,lVar11);
    }
    else {
      _memcpy(param_1,param_2,uVar8);
    }
    uVar6 = 0;
  }
  *(undefined1 *)((long)param_1 + uVar3) = uVar6;
  return param_1;
}



/* Entry: 1041072b8; end: 1041075d3;  */

uint * FUN_1041072b8(uint *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  byte bVar7;
  code *pcVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar11 = *(long *)(param_3 + 0x10);
  lVar14 = *(long *)(lVar11 + -8);
  uVar10 = *(ulong *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    uVar10 = uVar10 + 1;
  }
  uVar15 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar16 = (uVar15 + 8 & (uVar15 ^ 0xffffffffffffffff)) + uVar10;
  uVar4 = uVar10;
  if (uVar10 <= uVar16) {
    uVar4 = uVar16;
  }
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar7 = *(byte *)((long)param_1 + uVar4);
  uVar9 = (uint)bVar7;
  uVar13 = (uint)uVar4;
  if (2 < bVar7) {
    uVar3 = 4;
    if (uVar13 < 4) {
      uVar3 = uVar13;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto LAB_1041073ac;
      uVar9 = (uint)(byte)*param_1;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)(ushort)*param_1;
    }
    else if (uVar3 == 3) {
      uVar9 = (uint)(uint3)*param_1;
    }
    else {
      uVar9 = *param_1;
    }
    if (uVar13 < 4) {
      uVar9 = (uVar9 | bVar7 - 3 << (ulong)((uVar13 & 3) << 3)) + 3;
    }
    else {
      uVar9 = uVar9 + 3;
    }
  }
LAB_1041073ac:
  uVar16 = ~uVar15;
  if (uVar9 == 2) {
    pbVar1 = (byte *)((long)param_1 + uVar15 + 8);
    uVar5 = (ulong)pbVar1 & uVar16;
    (**(code **)(lVar14 + 0x30))(uVar5,1,lVar11);
    if ((int)uVar5 == 0) {
      pcVar8 = *(code **)(lVar14 + 8);
      puVar6 = (uint *)((ulong)pbVar1 & uVar16);
LAB_104107418:
      (*pcVar8)(puVar6,lVar11);
    }
  }
  else if (uVar9 == 1) {
    _swift_errorRelease(*(undefined8 *)param_1);
  }
  else {
    puVar6 = param_1;
    (**(code **)(lVar14 + 0x30))(param_1,1,lVar11);
    if ((int)puVar6 == 0) {
      pcVar8 = *(code **)(lVar14 + 8);
      puVar6 = param_1;
      goto LAB_104107418;
    }
  }
  bVar7 = *(byte *)((long)param_2 + uVar4);
  uVar9 = (uint)bVar7;
  if (2 < bVar7) {
    uVar3 = 4;
    if (uVar13 < 4) {
      uVar3 = uVar13;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto joined_r0x000104107490;
      uVar9 = (uint)(byte)*param_2;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)(ushort)*param_2;
    }
    else if (uVar3 == 3) {
      uVar9 = (uint)(uint3)*param_2;
    }
    else {
      uVar9 = *param_2;
    }
    if (uVar13 < 4) {
      uVar9 = (uVar9 | bVar7 - 3 << (ulong)((uVar13 & 3) << 3)) + 3;
    }
    else {
      uVar9 = uVar9 + 3;
    }
  }
joined_r0x000104107490:
  if (uVar9 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    pbVar1 = (byte *)((long)param_1 + uVar15 + 8);
    pbVar2 = (byte *)((long)param_2 + uVar15 + 8);
    uVar15 = (ulong)pbVar2 & uVar16;
    (**(code **)(lVar14 + 0x30))(uVar15,1,lVar11);
    if ((int)uVar15 == 0) {
      (**(code **)(lVar14 + 0x10))((ulong)pbVar1 & uVar16,(ulong)pbVar2 & uVar16,lVar11);
      (**(code **)(lVar14 + 0x38))((ulong)pbVar1 & uVar16,0,1,lVar11);
    }
    else {
      _memcpy((ulong)pbVar1 & uVar16,(ulong)pbVar2 & uVar16,uVar10);
    }
    bVar7 = 2;
  }
  else if (uVar9 == 1) {
    uVar12 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar12);
    *(undefined8 *)param_1 = uVar12;
    bVar7 = 1;
  }
  else {
    puVar6 = param_2;
    (**(code **)(lVar14 + 0x30))(param_2,1,lVar11);
    if ((int)puVar6 == 0) {
      (**(code **)(lVar14 + 0x10))(param_1,param_2,lVar11);
      (**(code **)(lVar14 + 0x38))(param_1,0,1,lVar11);
      bVar7 = 0;
    }
    else {
      _memcpy(param_1,param_2,uVar10);
      bVar7 = 0;
    }
  }
  *(byte *)((long)param_1 + uVar4) = bVar7;
  return param_1;
}



/* Entry: 1041075d4; end: 1041077bb;  */

undefined8 * FUN_1041075d4(undefined8 *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  uint *puVar5;
  undefined1 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  
  lVar11 = *(long *)(param_3 + 0x10);
  lVar14 = *(long *)(lVar11 + -8);
  uVar8 = *(ulong *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    uVar8 = uVar8 + 1;
  }
  uVar7 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar2 = (uVar7 + 8 & (uVar7 ^ 0xffffffffffffffff)) + uVar8;
  uVar3 = uVar8;
  if (uVar8 <= uVar2) {
    uVar3 = uVar2;
  }
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar4 = *(byte *)((long)param_2 + uVar3);
  uVar9 = (uint)bVar4;
  if (2 < bVar4) {
    uVar13 = (uint)uVar3;
    uVar10 = 4;
    if (uVar13 < 4) {
      uVar10 = uVar13;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto LAB_1041076a0;
      uVar10 = (uint)(byte)*param_2;
    }
    else if (uVar10 == 2) {
      uVar10 = (uint)(ushort)*param_2;
    }
    else if (uVar10 == 3) {
      uVar10 = (uint)(uint3)*param_2;
    }
    else {
      uVar10 = *param_2;
    }
    uVar9 = uVar10 | bVar4 - 3 << (ulong)((uVar13 & 3) << 3);
    if (3 < uVar13) {
      uVar9 = uVar10;
    }
    uVar9 = uVar9 + 3;
  }
LAB_1041076a0:
  if (uVar9 == 2) {
    uVar12 = ~uVar7;
    *param_1 = *(undefined8 *)param_2;
    uVar2 = (long)param_1 + uVar7 + 8;
    pbVar1 = (byte *)((long)param_2 + uVar7 + 8);
    uVar7 = (ulong)pbVar1 & uVar12;
    (**(code **)(lVar14 + 0x30))(uVar7,1,lVar11);
    if ((int)uVar7 == 0) {
      (**(code **)(lVar14 + 0x20))(uVar2 & uVar12,(ulong)pbVar1 & uVar12,lVar11);
      (**(code **)(lVar14 + 0x38))(uVar2 & uVar12,0,1,lVar11);
    }
    else {
      _memcpy(uVar2 & uVar12,(ulong)pbVar1 & uVar12,uVar8);
    }
    uVar6 = 2;
  }
  else if (uVar9 == 1) {
    *param_1 = *(undefined8 *)param_2;
    uVar6 = 1;
  }
  else {
    puVar5 = param_2;
    (**(code **)(lVar14 + 0x30))(param_2,1,lVar11);
    if ((int)puVar5 == 0) {
      (**(code **)(lVar14 + 0x20))(param_1,param_2,lVar11);
      (**(code **)(lVar14 + 0x38))(param_1,0,1,lVar11);
    }
    else {
      _memcpy(param_1,param_2,uVar8);
    }
    uVar6 = 0;
  }
  *(undefined1 *)((long)param_1 + uVar3) = uVar6;
  return param_1;
}



/* Entry: 1041077bc; end: 104107acf;  */

uint * FUN_1041077bc(uint *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  byte bVar7;
  code *pcVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar11 = *(long *)(param_3 + 0x10);
  lVar13 = *(long *)(lVar11 + -8);
  uVar10 = *(ulong *)(lVar13 + 0x40);
  if (*(int *)(lVar13 + 0x54) == 0) {
    uVar10 = uVar10 + 1;
  }
  uVar14 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar15 = (uVar14 + 8 & (uVar14 ^ 0xffffffffffffffff)) + uVar10;
  uVar4 = uVar10;
  if (uVar10 <= uVar15) {
    uVar4 = uVar15;
  }
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar7 = *(byte *)((long)param_1 + uVar4);
  uVar9 = (uint)bVar7;
  uVar12 = (uint)uVar4;
  if (2 < bVar7) {
    uVar3 = 4;
    if (uVar12 < 4) {
      uVar3 = uVar12;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto LAB_1041078b0;
      uVar9 = (uint)(byte)*param_1;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)(ushort)*param_1;
    }
    else if (uVar3 == 3) {
      uVar9 = (uint)(uint3)*param_1;
    }
    else {
      uVar9 = *param_1;
    }
    if (uVar12 < 4) {
      uVar9 = (uVar9 | bVar7 - 3 << (ulong)((uVar12 & 3) << 3)) + 3;
    }
    else {
      uVar9 = uVar9 + 3;
    }
  }
LAB_1041078b0:
  uVar15 = ~uVar14;
  if (uVar9 == 2) {
    pbVar1 = (byte *)((long)param_1 + uVar14 + 8);
    uVar5 = (ulong)pbVar1 & uVar15;
    (**(code **)(lVar13 + 0x30))(uVar5,1,lVar11);
    if ((int)uVar5 == 0) {
      pcVar8 = *(code **)(lVar13 + 8);
      puVar6 = (uint *)((ulong)pbVar1 & uVar15);
LAB_10410791c:
      (*pcVar8)(puVar6,lVar11);
    }
  }
  else if (uVar9 == 1) {
    _swift_errorRelease(*(undefined8 *)param_1);
  }
  else {
    puVar6 = param_1;
    (**(code **)(lVar13 + 0x30))(param_1,1,lVar11);
    if ((int)puVar6 == 0) {
      pcVar8 = *(code **)(lVar13 + 8);
      puVar6 = param_1;
      goto LAB_10410791c;
    }
  }
  bVar7 = *(byte *)((long)param_2 + uVar4);
  uVar9 = (uint)bVar7;
  if (2 < bVar7) {
    uVar3 = 4;
    if (uVar12 < 4) {
      uVar3 = uVar12;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto joined_r0x000104107994;
      uVar9 = (uint)(byte)*param_2;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)(ushort)*param_2;
    }
    else if (uVar3 == 3) {
      uVar9 = (uint)(uint3)*param_2;
    }
    else {
      uVar9 = *param_2;
    }
    if (uVar12 < 4) {
      uVar9 = (uVar9 | bVar7 - 3 << (ulong)((uVar12 & 3) << 3)) + 3;
    }
    else {
      uVar9 = uVar9 + 3;
    }
  }
joined_r0x000104107994:
  if (uVar9 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    pbVar1 = (byte *)((long)param_1 + uVar14 + 8);
    pbVar2 = (byte *)((long)param_2 + uVar14 + 8);
    uVar14 = (ulong)pbVar2 & uVar15;
    (**(code **)(lVar13 + 0x30))(uVar14,1,lVar11);
    if ((int)uVar14 == 0) {
      (**(code **)(lVar13 + 0x20))((ulong)pbVar1 & uVar15,(ulong)pbVar2 & uVar15,lVar11);
      (**(code **)(lVar13 + 0x38))((ulong)pbVar1 & uVar15,0,1,lVar11);
    }
    else {
      _memcpy((ulong)pbVar1 & uVar15,(ulong)pbVar2 & uVar15,uVar10);
    }
    bVar7 = 2;
  }
  else if (uVar9 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar7 = 1;
  }
  else {
    puVar6 = param_2;
    (**(code **)(lVar13 + 0x30))(param_2,1,lVar11);
    if ((int)puVar6 == 0) {
      (**(code **)(lVar13 + 0x20))(param_1,param_2,lVar11);
      (**(code **)(lVar13 + 0x38))(param_1,0,1,lVar11);
      bVar7 = 0;
    }
    else {
      _memcpy(param_1,param_2,uVar10);
      bVar7 = 0;
    }
  }
  *(byte *)((long)param_1 + uVar4) = bVar7;
  return param_1;
}



/* Entry: 104107ad0; end: 104107bf7;  */

int FUN_104107ad0(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar7 = *(ulong *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    uVar7 = uVar7 + 1;
  }
  uVar6 = ((ulong)*(byte *)(lVar5 + 0x50) + 8 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff)) + uVar7;
  if (uVar7 <= uVar6) {
    uVar7 = uVar6;
  }
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfe) goto LAB_104107b9c;
  uVar6 = uVar7 + 1;
  uVar4 = (uint)uVar6;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar8 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - 0xfd >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_104107b9c;
      goto LAB_104107b28;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_104107b28:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar8 != 0) {
    uVar1 = 0;
    if (uVar4 < 4) {
      uVar1 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar4 != 0) {
      uVar3 = 4;
      if (uVar4 < 4) {
        uVar3 = uVar4;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)*param_1;
      }
    }
    return ((uint)uVar6 | uVar1) + 0xfe;
  }
LAB_104107b9c:
  iVar2 = 0;
  if (2 < *(byte *)((long)param_1 + uVar7)) {
    iVar2 = (*(byte *)((long)param_1 + uVar7) ^ 0xff) + 1;
  }
  return iVar2;
}



/* Entry: 104107bf8; end: 104107dbf;  */

void FUN_104107bf8(uint *param_1,uint param_2,uint param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  
  lVar4 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (*(int *)(lVar4 + 0x54) == 0) {
    uVar5 = uVar5 + 1;
  }
  uVar1 = ((ulong)*(byte *)(lVar4 + 0x50) + 8 &
          ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff)) + uVar5;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  lVar4 = uVar5 + 1;
  uVar6 = (uint)lVar4;
  if (param_3 < 0xfe) {
    bVar7 = 0;
  }
  else if (uVar6 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar6 << 3 & 0x1f))) - 0xfd >> (ulong)(uVar6 << 3 & 0x1f)) +
            1;
    bVar7 = 2;
    if (0xffff < uVar2) {
      bVar7 = 4;
    }
    if (uVar2 < 0x100) {
      bVar7 = 1 < uVar2;
    }
  }
  else {
    bVar7 = 1;
  }
  if (param_2 < 0xfe) {
    if (bVar7 < 2) {
      if (bVar7 != 0) {
        *(undefined1 *)((long)param_1 + lVar4) = 0;
      }
    }
    else if (bVar7 == 2) {
      *(undefined2 *)((long)param_1 + lVar4) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar4) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar5) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    if (uVar6 < 4) {
      iVar8 = (param_2 >> (ulong)(uVar6 << 3 & 0x1f)) + 1;
      if (uVar6 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar6 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar4);
        uVar3 = (undefined2)uVar2;
        if (uVar6 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar6 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar4);
      *param_1 = param_2;
      iVar8 = 1;
    }
    if (bVar7 < 2) {
      if (bVar7 != 0) {
        *(char *)((long)param_1 + lVar4) = (char)iVar8;
      }
    }
    else if (bVar7 == 2) {
      *(short *)((long)param_1 + lVar4) = (short)iVar8;
    }
    else {
      *(int *)((long)param_1 + lVar4) = iVar8;
    }
  }
  return;
}



/* Entry: 104107dc0; end: 104107e7b;  */

uint FUN_104107dc0(uint *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  
  lVar5 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar7 = *(ulong *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    uVar7 = uVar7 + 1;
  }
  uVar1 = ((ulong)*(byte *)(lVar5 + 0x50) + 8 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff)) + uVar7;
  if (uVar7 <= uVar1) {
    uVar7 = uVar1;
  }
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  bVar2 = *(byte *)((long)param_1 + uVar7);
  uVar3 = (uint)bVar2;
  if (2 < bVar2) {
    uVar6 = (uint)uVar7;
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) {
        return uVar3;
      }
      uVar4 = (uint)(byte)*param_1;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_1;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_1;
    }
    else {
      uVar4 = *param_1;
    }
    uVar3 = uVar4 | bVar2 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 3;
  }
  return uVar3;
}



/* Entry: 104107e7c; end: 104107f77;  */

void FUN_104107e7c(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (*(int *)(lVar3 + 0x54) == 0) {
    uVar4 = uVar4 + 1;
  }
  uVar1 = ((ulong)*(byte *)(lVar3 + 0x50) + 8 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff)) + uVar4;
  if (uVar4 <= uVar1) {
    uVar4 = uVar1;
  }
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  if (param_2 < 3) {
    *(char *)((long)param_1 + uVar4) = (char)param_2;
  }
  else {
    param_2 = param_2 - 3;
    uVar2 = (uint)uVar4;
    if (uVar2 < 4) {
      *(char *)((long)param_1 + uVar4) = (char)(param_2 >> (ulong)(uVar2 << 3 & 0x1f)) + '\x03';
      if (uVar2 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar2 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar4) = 3;
    }
    if (3 < uVar2) {
      uVar2 = 4;
    }
    _bzero(param_1);
    if ((int)uVar2 < 3) {
      if (uVar2 == 1) {
        *(char *)param_1 = (char)param_2;
      }
      else {
        *(short *)param_1 = (short)param_2;
      }
    }
    else if (uVar2 == 3) {
      *(short *)param_1 = (short)param_2;
      *(char *)((long)param_1 + 2) = (char)(param_2 >> 0x10);
    }
    else {
      *param_1 = param_2;
    }
  }
  return;
}



/* Entry: 104107f78; end: 1041080eb;  */

int FUN_104107f78(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1041080ec; end: 10410818f;  */

void FUN_1041080ec(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [32];
  
  uVar1 = 0xff;
  __sSqMa(0xff,*(undefined8 *)(param_1 + 0x10));
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar3 = 0x13f;
  __ss6ResultOMa(0x13f,uVar1,uVar2,PTR___ss5ErrorWS_11034ee10);
  if (uVar1 < 0x40) {
    _swift_getTupleTypeLayout2(auStack_40,&UNK_10dcd7f08,*(long *)(lVar3 + -8) + 0x40);
    _swift_initEnumMetadataSinglePayload(param_1,0,auStack_40,1);
  }
  return;
}



/* Entry: 104108190; end: 10410837f;  */

ulong * FUN_104108190(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  
  lVar9 = *(long *)(param_3 + 0x10);
  lVar14 = *(long *)(lVar9 + -8);
  uVar5 = *(ulong *)(lVar14 + 0x40);
  uVar8 = (ulong)*(uint *)(lVar14 + 0x50) & 0xf8;
  uVar4 = uVar8 | 7;
  if (*(int *)(lVar14 + 0x54) == 0) {
    uVar5 = uVar5 + 1;
  }
  uVar1 = uVar5;
  if (uVar5 < 9) {
    uVar1 = 8;
  }
  if ((*(uint *)(lVar14 + 0x50) & 0x1000f8) != 0 ||
      0x18 < uVar1 + (uVar8 + 0xf & (uVar4 ^ 0xffffffffffffffff)) + 1) {
    uVar5 = *param_2;
    *param_1 = uVar5;
    _swift_retain();
    return (ulong *)(uVar5 + (uVar4 + 0x10 & ~uVar4));
  }
  uVar8 = *param_2;
  uVar4 = uVar8;
  if (0xfffffffe < uVar8) {
    uVar4 = 0xffffffff;
  }
  if ((uVar8 != 0) && (1 < (int)uVar4 + 1U)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1);
    return param_1;
  }
  *param_1 = uVar8;
  puVar11 = (uint *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  bVar2 = *(byte *)((long)puVar11 + uVar1);
  uVar6 = (uint)bVar2;
  if (1 < bVar2) {
    uVar13 = (uint)uVar1;
    uVar7 = 4;
    if (uVar13 < 4) {
      uVar7 = uVar13;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1041082f4;
      uVar7 = (uint)(byte)*puVar11;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*puVar11;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*puVar11;
    }
    else {
      uVar7 = *puVar11;
    }
    uVar6 = uVar7 | bVar2 - 2 << (ulong)((uVar13 & 3) << 3);
    if (3 < uVar13) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_1041082f4:
  puVar12 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  if (uVar6 == 1) {
    uVar10 = *(undefined8 *)puVar11;
    _swift_errorRetain(uVar10);
    *puVar12 = uVar10;
    *(undefined1 *)((long)puVar12 + uVar1) = 1;
  }
  else {
    puVar3 = puVar11;
    (**(code **)(lVar14 + 0x30))(puVar11,1,lVar9);
    if ((int)puVar3 == 0) {
      (**(code **)(lVar14 + 0x10))(puVar12,puVar11,lVar9);
      (**(code **)(lVar14 + 0x38))(puVar12,0,1,lVar9);
      *(undefined1 *)((long)puVar12 + uVar1) = 0;
    }
    else {
      _memcpy(puVar12,puVar11,uVar5);
      *(undefined1 *)((long)puVar12 + uVar1) = 0;
    }
  }
  return param_1;
}



/* Entry: 104108380; end: 1041084bb;  */

void FUN_104108380(ulong *param_1,long param_2)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  
  uVar4 = *param_1;
  uVar5 = uVar4;
  if (0xfffffffe < uVar4) {
    uVar5 = 0xffffffff;
  }
  if ((uVar4 != 0 && (int)uVar5 != -1) && (uVar4 == 0 || (int)uVar5 != 0)) {
    return;
  }
  lVar8 = *(long *)(param_2 + 0x10);
  lVar10 = *(long *)(lVar8 + -8);
  uVar4 = (ulong)*(uint *)(lVar10 + 0x50) & 0xf8 | 7;
  uVar5 = *(ulong *)(lVar10 + 0x40);
  puVar9 = (uint *)((long)param_1 + uVar4 + 8 & (uVar4 ^ 0xffffffffffffffff));
  if (*(int *)(lVar10 + 0x54) == 0) {
    uVar5 = uVar5 + 1;
  }
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  bVar1 = *(byte *)((long)puVar9 + uVar5);
  uVar6 = (uint)bVar1;
  if (1 < bVar1) {
    uVar3 = (uint)uVar5;
    uVar7 = 4;
    if (uVar3 < 4) {
      uVar7 = uVar3;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_10410845c;
      uVar7 = (uint)(byte)*puVar9;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*puVar9;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*puVar9;
    }
    else {
      uVar7 = *puVar9;
    }
    uVar6 = uVar7 | bVar1 - 2 << (ulong)((uVar3 & 3) << 3);
    if (3 < uVar3) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_10410845c:
  if (uVar6 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(*(undefined8 *)puVar9);
    return;
  }
  puVar2 = puVar9;
  (**(code **)(lVar10 + 0x30))(puVar9,1,lVar8);
  if ((int)puVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001041084b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar10 + 8))(puVar9,lVar8);
  return;
}



/* Entry: 1041084bc; end: 1041090e7;  */

ulong * FUN_1041084bc(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  uint *puVar14;
  long lVar15;
  uint uVar16;
  
  lVar11 = *(long *)(param_3 + 0x10);
  lVar15 = *(long *)(lVar11 + -8);
  uVar5 = *(ulong *)(lVar15 + 0x40);
  iVar2 = *(int *)(lVar15 + 0x54);
  uVar9 = (ulong)*(uint *)(lVar15 + 0x50) & 0xf8 | 7;
  uVar8 = ~uVar9;
  uVar10 = *param_2;
  uVar1 = uVar10;
  if (0xfffffffe < uVar10) {
    uVar1 = 0xffffffff;
  }
  if ((uVar10 != 0 && (int)uVar1 != -1) && (uVar10 == 0 || (int)uVar1 != 0)) {
    if (iVar2 == 0) {
      uVar5 = uVar5 + 1;
    }
    if (uVar5 < 9) {
      uVar5 = 8;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar5 + (uVar9 + 8 & uVar8) + 1);
    return param_1;
  }
  *param_1 = uVar10;
  puVar13 = (undefined8 *)((long)param_1 + uVar9 + 8 & uVar8);
  puVar14 = (uint *)((long)param_2 + uVar9 + 8 & uVar8);
  if (iVar2 == 0) {
    uVar5 = uVar5 + 1;
  }
  uVar1 = uVar5;
  if (uVar5 < 9) {
    uVar1 = 8;
  }
  bVar3 = *(byte *)((long)puVar14 + uVar1);
  uVar6 = (uint)bVar3;
  if (1 < bVar3) {
    uVar16 = (uint)uVar1;
    uVar7 = 4;
    if (uVar16 < 4) {
      uVar7 = uVar16;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1041085f0;
      uVar7 = (uint)(byte)*puVar14;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*puVar14;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*puVar14;
    }
    else {
      uVar7 = *puVar14;
    }
    uVar6 = uVar7 | bVar3 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_1041085f0:
  if (uVar6 == 1) {
    uVar12 = *(undefined8 *)puVar14;
    _swift_errorRetain(uVar12);
    *puVar13 = uVar12;
    *(undefined1 *)((long)puVar13 + uVar1) = 1;
  }
  else {
    puVar4 = puVar14;
    (**(code **)(lVar15 + 0x30))(puVar14,1,lVar11);
    if ((int)puVar4 == 0) {
      (**(code **)(lVar15 + 0x10))(puVar13,puVar14,lVar11);
      (**(code **)(lVar15 + 0x38))(puVar13,0,1,lVar11);
    }
    else {
      _memcpy(puVar13,puVar14,uVar5);
    }
    *(undefined1 *)((long)puVar13 + uVar1) = 0;
  }
  return param_1;
}



/* Entry: 1041090e8; end: 10410922b;  */

int FUN_1041090e8(ulong *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  lVar7 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar9 = *(ulong *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    uVar9 = uVar9 + 1;
  }
  if (uVar9 < 9) {
    uVar9 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0x7ffffffe) goto LAB_1041091ac;
  uVar1 = *(uint *)(lVar7 + 0x50) & 0xf8;
  uVar9 = uVar9 + ((ulong)(uVar1 + 0xf & (uVar1 ^ 0xffffffff)) & 0x1f8) + 1;
  uVar5 = (uint)uVar9;
  uVar1 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar8 = param_2 + 0x80000003 + ~(-1 << (ulong)(uVar1 & 0x1f)) >> (ulong)(uVar1 & 0x1f);
    if (uVar8 < 0xff) {
      if (uVar8 == 0) goto LAB_1041091ac;
      goto LAB_10410916c;
    }
    if (uVar8 < 0xffff) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar9);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar9);
    }
  }
  else {
LAB_10410916c:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar9);
  }
  if (uVar8 != 0) {
    uVar2 = 0;
    if (uVar5 < 4) {
      uVar2 = uVar8 - 1 << (ulong)(uVar1 & 0x1f);
    }
    if (uVar5 != 0) {
      uVar1 = 4;
      if (uVar5 < 4) {
        uVar1 = uVar5;
      }
      if ((int)uVar1 < 3) {
        if (uVar1 == 1) {
          uVar9 = (ulong)(byte)*param_1;
        }
        else {
          uVar9 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar1 == 3) {
        uVar9 = (ulong)(uint3)*param_1;
      }
      else {
        uVar9 = (ulong)(uint)*param_1;
      }
    }
    return ((uint)uVar9 | uVar2) + 0x7ffffffe;
  }
LAB_1041091ac:
  uVar9 = *param_1;
  if (0xfffffffe < uVar9) {
    uVar9 = 0xffffffff;
  }
  iVar6 = (int)uVar9;
  iVar3 = 0;
  if (iVar6 != 0) {
    iVar3 = iVar6 + -1;
  }
  iVar4 = 0;
  if (1 < iVar6 + 1U) {
    iVar4 = iVar3;
  }
  return iVar4;
}



/* Entry: 10410922c; end: 1041093ff;  */

void FUN_10410922c(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  undefined2 uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  
  lVar4 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar5 = *(ulong *)(lVar4 + 0x40);
  uVar6 = *(uint *)(lVar4 + 0x50) & 0xf8;
  if (*(int *)(lVar4 + 0x54) == 0) {
    uVar5 = uVar5 + 1;
  }
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  lVar4 = uVar5 + ((ulong)(uVar6 + 0xf & (uVar6 ^ 0xffffffff)) & 0x1f8) + 1;
  uVar6 = (uint)lVar4;
  if (param_3 < 0x7ffffffe) {
    bVar3 = 0;
  }
  else if (uVar6 < 4) {
    uVar1 = param_3 + 0x80000003 + ~(-1 << (ulong)(uVar6 << 3 & 0x1f)) >> (ulong)(uVar6 << 3 & 0x1f)
    ;
    bVar3 = 2;
    if (0xfffe < uVar1) {
      bVar3 = 4;
    }
    if (uVar1 < 0xff) {
      bVar3 = uVar1 != 0;
    }
  }
  else {
    bVar3 = 1;
  }
  if (param_2 < 0x7ffffffe) {
    if (bVar3 < 2) {
      if (bVar3 != 0) {
        *(undefined1 *)((long)param_1 + lVar4) = 0;
      }
    }
    else if (bVar3 == 2) {
      *(undefined2 *)((long)param_1 + lVar4) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar4) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 + 1);
    }
  }
  else {
    param_2 = param_2 + 0x80000002;
    if (uVar6 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar6 << 3 & 0x1f)) + 1;
      if (uVar6 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar6 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar4);
        uVar2 = (undefined2)uVar1;
        if (uVar6 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar6 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar4);
      *(uint *)param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar3 < 2) {
      if (bVar3 != 0) {
        *(char *)((long)param_1 + lVar4) = (char)iVar7;
      }
    }
    else if (bVar3 == 2) {
      *(short *)((long)param_1 + lVar4) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + lVar4) = iVar7;
    }
  }
  return;
}



/* Entry: 104109400; end: 104109423;  */

int FUN_104109400(ulong *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 104109424; end: 104109517;  */

void FUN_104109424(ulong *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(ulong *)(lVar3 + 0x40);
  if (*(int *)(lVar3 + 0x54) == 0) {
    uVar5 = uVar5 + 1;
  }
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if (param_2 < 0x7fffffff) {
    if (param_2 != 0) {
      *param_1 = (ulong)param_2;
    }
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0x50) & 0xf8;
    uVar1 = (int)uVar5 + (uVar1 + 0xf & (uVar1 ^ 0xffffffff) & 0x1f8) + 1;
    uVar4 = 0xffffffff;
    if (uVar1 < 4) {
      uVar4 = ~(-1 << (ulong)(uVar1 * 8 & 0x1f));
    }
    if (uVar1 != 0) {
      uVar4 = uVar4 & param_2 + 0x80000001;
      uVar2 = 4;
      if (uVar1 < 4) {
        uVar2 = uVar1;
      }
      _bzero(param_1,uVar1);
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          *(char *)param_1 = (char)uVar4;
        }
        else {
          *(short *)param_1 = (short)uVar4;
        }
      }
      else if (uVar2 == 3) {
        *(short *)param_1 = (short)uVar4;
        *(char *)((long)param_1 + 2) = (char)(uVar4 >> 0x10);
      }
      else {
        *(uint *)param_1 = uVar4;
      }
    }
  }
  return;
}



/* Entry: 104109518; end: 104109523;  */

void FUN_104109518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f0cfc);
  return;
}



/* Entry: 104109524; end: 104109593;  */

void FUN_104109524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  if (-1 < param_5) {
    _swift_retain(param_4);
    _swift_retain(param_5);
    _swift_bridgeObjectRetain(param_6);
    _swift_retain(param_1);
    _swift_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRetain_11034f320)();
  return;
}



/* Entry: 104109594; end: 1041095d3;  */

void FUN_104109594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e7f0d38);
  return;
}



/* Entry: 1041095d4; end: 1041096bb;  */

undefined8 * FUN_1041095d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  FUN_104109524(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  return param_1;
}



/* Entry: 1041096bc; end: 104109703;  */

undefined8 * FUN_1041096bc(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  FUN_104105df8(uVar5,uVar1,uVar3,uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 104109704; end: 104109853;  */

int FUN_104109704(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3ffe < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0x3fff;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  uVar1 = (uVar1 >> 0x1f |
          (uVar1 >> 0x12 & 0x1c00 | ((uint)*(undefined8 *)(param_1 + 8) & 7) << 7 |
          (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x39) & 0x78 |
          (uint)*(undefined8 *)(param_1 + 2) & 7) << 1) ^ 0x3fff;
  if (0x3ffd < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104109854; end: 1041098bb;  */

undefined8 * FUN_104109854(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  _swift_errorRetain(uVar2);
  uVar1 = *param_1;
  *param_1 = uVar2;
  _swift_errorRelease(uVar1);
  return param_1;
}



/* Entry: 1041098bc; end: 104109a53;  */

int FUN_1041098bc(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 104109a54; end: 104109aaf;  */

void FUN_104109a54(undefined8 *param_1)

{
  _swift_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[1]);
  return;
}



/* Entry: 104109ab0; end: 104109b0b;  */

undefined8 * FUN_104109ab0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 104109b0c; end: 104109b47;  */

undefined8 * FUN_104109b0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 104109b48; end: 104109bd7;  */

int FUN_104109b48(ulong *param_1,int param_2)

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



/* Entry: 104109bd8; end: 104109c9f;  */

undefined1  [16] FUN_104109bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_90;
  lVar1 = 0x113063298;
  func_0x0001000285a8(0x113063298,&UNK_10dcd8198);
  _swift_allocObject();
  *(undefined4 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  FUN_104105e80(&uStack_60,param_1,param_2,param_3);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  lVar2 = 0;
  FUN_104109594(0,param_1,param_2,param_3);
  FUN_104146c54(&uStack_90,lVar2);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(&uStack_60,lVar2);
  auVar4._8_8_ = lVar1;
  auVar4._0_8_ = puVar3;
  return auVar4;
}



/* Entry: 104109ca0; end: 104109cbf;  */

void FUN_104109ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_6;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_4;
  *(undefined8 *)(unaff_x22 + 200) = param_1;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104109cc0,0,0);
  return;
}



/* Entry: 104109cc0; end: 104109f2f;  */

void FUN_104109cc0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x22;
  undefined8 uVar15;
  long lVar16;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar14;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar1;
  uVar5 = 0;
  FUN_104109594(0,uVar14,uVar9,uVar1);
  uVar6 = 0;
  func_0x000104106090(0,uVar14,uVar9,uVar1);
  FUN_104146aa0(unaff_x22 + 0x58,FUN_10410af10,unaff_x22 + 0xa0,uVar15,uVar5,uVar6);
  lVar12 = *(long *)(unaff_x22 + 0x58);
  if (lVar12 != 0) {
    if (lVar12 == 1) {
      uVar9 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
      lVar12 = *(long *)(unaff_x22 + 0xd8);
      uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar1 = *(undefined8 *)(unaff_x22 + 200);
      uVar14 = *(undefined8 *)(unaff_x22 + 0xd0);
      _os_unfair_lock_lock(lVar12 + 0x18);
      lVar13 = *(long *)(lVar12 + 0x10);
      *(long *)(lVar12 + 0x10) = lVar13 + 1;
      _os_unfair_lock_unlock(lVar12 + 0x18);
      *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
      *(undefined8 *)(unaff_x22 + 0x28) = uVar9;
      *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
      *(undefined8 *)(unaff_x22 + 0x38) = uVar14;
      *(long *)(unaff_x22 + 0x40) = lVar12;
      *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
      *(long *)(unaff_x22 + 0x50) = lVar13;
      *(undefined8 *)(unaff_x22 + 0x70) = uVar6;
      *(undefined8 *)(unaff_x22 + 0x78) = uVar9;
      *(undefined8 *)(unaff_x22 + 0x80) = uVar5;
      *(undefined8 *)(unaff_x22 + 0x88) = uVar14;
      *(long *)(unaff_x22 + 0x90) = lVar12;
      *(long *)(unaff_x22 + 0x98) = lVar13;
      iVar4 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if (iVar4 != 0) {
        plVar7 = (long *)(ulong)*(uint *)(
                                         PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                         + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0xf8) = plVar7;
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_104109f30;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
        )();
        return;
      }
      pcVar10 = FUN_10410aff0;
      _swift_task_addCancellationHandler(FUN_10410aff0,unaff_x22 + 0x60);
      *(code **)(unaff_x22 + 0x100) = pcVar10;
      plVar7 = (long *)0x90;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x108) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = 0x104109f90;
      lVar16 = *(long *)(unaff_x22 + 0xf0);
      lVar12 = *(long *)(unaff_x22 + 0xd8);
      lVar2 = *(long *)(unaff_x22 + 0xe0);
      lVar11 = *(long *)(unaff_x22 + 200);
      lVar3 = *(long *)(unaff_x22 + 0xd0);
      plVar7[0x10] = *(long *)(unaff_x22 + 0xe8);
      plVar7[0x11] = lVar16;
      plVar7[0xe] = lVar13;
      plVar7[0xf] = lVar2;
      plVar7[0xc] = lVar12;
      plVar7[0xd] = lVar11;
      plVar7[10] = (long)plVar7;
      plVar7[0xb] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_10410a4d0,0,0);
      return;
    }
    lVar11 = *(long *)(unaff_x22 + 0xe0);
    lVar13 = 0;
    __sSqMa(0,lVar11);
    uVar8 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar8);
    lVar16 = *(long *)(lVar11 + -8);
    (**(code **)(lVar16 + 0x10))();
    (**(code **)(lVar16 + 0x38))(uVar8,0,1,lVar11);
    uVar9 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x00010176fed4(uVar8,lVar12,lVar13,uVar9,PTR___ss5ErrorWS_11034ee10);
    _swift_task_dealloc(uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x000104109ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104109f30; end: 104109fef;  */

void FUN_104109f30(void)

{
  long unaff_x20;
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xf8));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104109ff0,0,0);
  return;
}



/* Entry: 104109ff0; end: 104109ff7;  */

void FUN_104109ff0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000104109ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104109ff8; end: 10410a033;  */

void FUN_104109ff8(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x100));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104109ff0,0,0);
  return;
}



/* Entry: 10410a034; end: 10410a03b;  */

void FUN_10410a034(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_removeCancellationHandler_110350120)(*(undefined8 *)(unaff_x22 + 0x100))
  ;
  return;
}



/* Entry: 10410a03c; end: 10410a12f;  */

void FUN_10410a03c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_6;
  *(undefined8 *)(unaff_x22 + 200) = param_3;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2;
  uVar1 = 0xff;
  __sSqMa(0xff,param_4);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar1;
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar3 = 0;
  __ss6ResultOMa(0,uVar1,uVar2,PTR___ss5ErrorWS_11034ee10);
  *(long *)(unaff_x22 + 0xf0) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xf8) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x100) = uVar4;
  lVar3 = 0;
  FUN_104109518(0,param_4,param_5,param_6);
  *(long *)(unaff_x22 + 0x108) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x110) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10410a130,0,0);
  return;
}



/* Entry: 10410a130; end: 10410a397;  */

/* WARNING: Removing unreachable block (ram,0x00010410a36c) */

void FUN_10410a130(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  lVar3 = *(long *)(unaff_x22 + 0x110);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar1 = 0;
  FUN_104109594(0);
  FUN_104146aa0(uVar6,FUN_10410a7c0,unaff_x22 + 0x90,uVar8,uVar1,uVar2);
  (**(code **)(lVar3 + 0x10))(uVar7,uVar6,uVar2);
  uVar2 = 0x113062210;
  func_0x00010002969c(0x113062210,&UNK_10dcd7a10);
  lVar3 = 0;
  _swift_getTupleTypeMetadata2(0,uVar2,uVar9,"continuation result ",0);
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(uVar7,1,lVar3);
  if ((int)uVar7 != 1) {
    lVar10 = **(long **)(unaff_x22 + 0x118);
    (**(code **)(*(long *)(unaff_x22 + 0xf8) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0x100),
               (long)*(long **)(unaff_x22 + 0x118) + (long)*(int *)(lVar3 + 0x30),
               *(undefined8 *)(unaff_x22 + 0xf0));
    if (lVar10 != 0) {
      _swift_continuation_throwingResume(lVar10);
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
    lVar10 = *(long *)(unaff_x22 + 0x110);
    lVar3 = *(long *)(unaff_x22 + 0xf8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
    puVar5 = &DAT_10dcd9348;
    _swift_getWitnessTable(&DAT_10dcd9348,uVar1);
    FUN_1041542f8(uVar8,uVar1,puVar5);
    (**(code **)(lVar3 + 8))(uVar7,uVar1);
    (**(code **)(lVar10 + 8))(uVar6,uVar2);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x120));
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010410a394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar3 = *(long *)(unaff_x22 + 200);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  _os_unfair_lock_lock(lVar3 + 0x18);
  lVar10 = *(long *)(lVar3 + 0x10);
  *(long *)(lVar3 + 0x10) = lVar10 + 1;
  _os_unfair_lock_unlock(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  *(long *)(unaff_x22 + 0x40) = lVar3;
  *(long *)(unaff_x22 + 0x48) = lVar10;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar1;
  *(long *)(unaff_x22 + 0x80) = lVar3;
  *(long *)(unaff_x22 + 0x88) = lVar10;
  plVar4 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x128) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10410a398;
                    /* WARNING: Could not recover jumptable at 0x00010410a2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_10396896c)
            (*(undefined8 *)(unaff_x22 + 0xb8),&UNK_10dcd8178,unaff_x22 + 0x10,FUN_10410ae74,
             unaff_x22 + 0x50,0,0,*(undefined8 *)(unaff_x22 + 0xe8));
  return;
}



/* Entry: 10410a398; end: 10410a3f3;  */

void FUN_10410a398(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x130) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x128));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10410a3f4;
  }
  else {
    pcVar1 = FUN_10410a44c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10410a3f4; end: 10410a44b;  */

void FUN_10410a3f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x110) + 8))
            (*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x108));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x120));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010410a448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10410a44c; end: 10410a4ab;  */

void FUN_10410a44c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x110) + 8))
            (*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x108));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x120));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010410a4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10410a4ac; end: 10410a4cf;  */

void FUN_10410a4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_7;
  *(undefined8 *)(unaff_x22 + 0x88) = param_8;
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x78) = param_6;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10410a4d0,0,0);
  return;
}



/* Entry: 10410a4d0; end: 10410a55b;  */

void FUN_10410a4d0(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10410a55c;
  _swift_continuation_init(unaff_x22 + 0x10,0);
  FUN_10410a594();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10410a55c; end: 10410a593;  */

void FUN_10410a55c(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010410a590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x22 + 8))();
  return;
}



/* Entry: 10410a594; end: 10410a717;  */

void FUN_10410a594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lVar1 = 0;
  __sSqMa(0,param_6);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_c0 + -extraout_x8;
  uVar2 = 0;
  lStack_a0 = param_6;
  uStack_98 = param_7;
  uStack_90 = param_8;
  uStack_88 = param_1;
  uStack_80 = param_4;
  uStack_78 = param_5;
  FUN_104109594(0,param_6,param_7,param_8);
  uVar3 = 0xff;
  FUN_10410606c(0xff,param_6,param_7,param_8);
  uVar4 = 0;
  __sSqMa(0,uVar3);
  FUN_104146aa0(&lStack_68,FUN_10410b08c,auStack_b0,param_2,uVar2,uVar4);
  if (lStack_68 != 2) {
    if (lStack_68 == 1) {
      _swift_continuation_throwingResume(param_1);
    }
    else {
      _swift_continuation_throwingResume(param_1);
      if (lStack_68 != 0) {
        lVar6 = *(long *)(param_6 + -8);
        (**(code **)(lVar6 + 0x10))(puVar5,param_4,param_6);
        (**(code **)(lVar6 + 0x38))(puVar5,0,1,param_6);
        uVar2 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x00010176fed4(puVar5,lStack_68,lVar1,uVar2,PTR___ss5ErrorWS_11034ee10);
      }
    }
  }
  return;
}



/* Entry: 10410a718; end: 10410a7bf;  */

void FUN_10410a718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_48;
  
  uVar1 = 0;
  uStack_70 = param_4;
  uStack_68 = param_5;
  uStack_60 = param_6;
  uStack_58 = param_3;
  FUN_104109594(0,param_4,param_5,param_6);
  uVar2 = 0;
  func_0x000104106080(0,param_4,param_5,param_6);
  FUN_104146aa0(&uStack_48,FUN_10410b010,auStack_80,param_1,uVar1,uVar2);
  if (1 < uStack_48) {
    _swift_continuation_throwingResume();
  }
  return;
}



/* Entry: 10410a7c0; end: 10410a80b;  */

void FUN_10410a7c0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_104109594(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001041053c8(param_1);
  return;
}



/* Entry: 10410a80c; end: 10410a82f;  */

void FUN_10410a80c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_6;
  *(undefined8 *)(unaff_x22 + 0x80) = param_7;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10410a830,0,0);
  return;
}



/* Entry: 10410a830; end: 10410a917;  */

void FUN_10410a830(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x68);
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar1;
  uVar2 = 0;
  __sSqMa(0,uVar3);
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10410a8dc;
                    /* WARNING: Could not recover jumptable at 0x00010410a8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_1041506d4(*(undefined8 *)(unaff_x22 + 0x50),0,0,FUN_10410ae9c,unaff_x22 + 0x10,uVar2);
  return;
}



/* Entry: 10410a918; end: 10410a9a3;  */

void FUN_10410a918(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10410a9a4;
  plVar7[0xf] = lVar4;
  plVar7[0x10] = lVar2;
  plVar7[0xd] = lVar6;
  plVar7[0xe] = lVar1;
  plVar7[0xb] = lVar5;
  plVar7[0xc] = lVar3;
  plVar7[10] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10410a830,0,0);
  return;
}



/* Entry: 10410a9a4; end: 10410a9df;  */

void FUN_10410a9a4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010410a9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10410a9e0; end: 10410ad3f;  */

void FUN_10410a9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar7;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar9;
  long lVar10;
  long *plVar11;
  long alStack_e0 [4];
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long alStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar2 = 0;
  uStack_b0 = param_2;
  __sSqMa(0,param_5);
  alStack_e0[3] = *(long *)(lVar2 + -8);
  lStack_b8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_e0[3] + 0x40));
  lVar8 = (long)alStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_e0[1] = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12;
  alStack_e0[0] = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12_00;
  lVar2 = 0xff;
  alStack_e0[2] = lVar8;
  func_0x000104105e74(0xff,param_5,param_6,param_7);
  lVar3 = 0;
  __sSqMa(0,lVar2);
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  plVar11 = (long *)(lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)plVar11 - extraout_x12_01;
  uVar4 = 0;
  uStack_c0 = param_1;
  uStack_90 = param_5;
  uStack_88 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_1;
  uStack_70 = param_4;
  FUN_104109594(0,param_5,param_6,param_7);
  FUN_104146aa0(lVar8,FUN_10410aeac,alStack_a0,uStack_b0,uVar4,lVar3);
  (**(code **)(lVar9 + 0x10))(plVar11,lVar8,lVar3);
  plVar5 = plVar11;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(plVar11,1,lVar2);
  if ((int)plVar5 != 1) {
    plVar5 = plVar11;
    _swift_getEnumCaseMultiPayload(plVar11,lVar2);
    lVar1 = lStack_b8;
    lVar6 = alStack_e0[3];
    lVar2 = alStack_e0[2];
    if ((int)plVar5 == 0) {
      (**(code **)(alStack_e0[3] + 0x20))(alStack_e0[2],plVar11,lStack_b8);
      lVar10 = alStack_e0[0];
      (**(code **)(lVar6 + 0x10))(alStack_e0[0],lVar2,lVar1);
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x00010176fed4(lVar10,uStack_c0,lVar1,uVar4,PTR___ss5ErrorWS_11034ee10);
      pcVar7 = *(code **)(lVar6 + 8);
    }
    else {
      if ((int)plVar5 == 1) {
        alStack_a0[0] = *plVar11;
        uVar4 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        FUN_104137c80(alStack_a0,uStack_c0,lVar1,uVar4,PTR___ss5ErrorWS_11034ee10);
        goto LAB_10410ad10;
      }
      lVar10 = *plVar11;
      uVar4 = 0x113062210;
      func_0x00010002969c(0x113062210,&UNK_10dcd7a10);
      lVar6 = 0;
      _swift_getTupleTypeMetadata2(0,uVar4,lVar1,"continuation element ",0);
      lVar2 = alStack_e0[1];
      (**(code **)(alStack_e0[3] + 0x20))
                (alStack_e0[1],(long)plVar11 + (long)*(int *)(lVar6 + 0x30),lVar1);
      if (lVar10 != 0) {
        _swift_continuation_throwingResume(lVar10);
      }
      lVar10 = alStack_e0[3];
      lVar6 = alStack_e0[2];
      (**(code **)(alStack_e0[3] + 0x10))(alStack_e0[2],lVar2,lVar1);
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x00010176fed4(lVar6,uStack_c0,lVar1,uVar4,PTR___ss5ErrorWS_11034ee10);
      pcVar7 = *(code **)(lVar10 + 8);
    }
    (*pcVar7)(lVar2,lVar1);
  }
LAB_10410ad10:
  (**(code **)(lVar9 + 8))(lVar8,lVar3);
  return;
}



/* Entry: 10410ad40; end: 10410ae73;  */

void FUN_10410ad40(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_58;
  
  lVar1 = 0;
  __sSqMa(0,param_4);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  lStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_6;
  uStack_68 = param_3;
  FUN_104109594(0,param_4,param_5,param_6);
  uVar3 = 0;
  func_0x0001041080e0(0,param_4,param_5,param_6);
  FUN_104146aa0(&uStack_58,FUN_10410ae80,auStack_90,param_1,uVar2,uVar3);
  if (1 < uStack_58) {
    (**(code **)(*(long *)(param_4 + -8) + 0x38))(auStack_a0 + -extraout_x8,1,1,param_4);
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x00010176fed4(auStack_a0 + -extraout_x8,uStack_58,lVar1,uVar2,PTR___ss5ErrorWS_11034ee10);
  }
  return;
}



/* Entry: 10410ae74; end: 10410ae7f;  */

void FUN_10410ae74(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar4 = 0;
  __sSqMa(0,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = 0;
  lStack_80 = lVar1;
  uStack_78 = uVar2;
  uStack_70 = uVar7;
  uStack_68 = uVar6;
  FUN_104109594(0,lVar1,uVar2,uVar7);
  uVar6 = 0;
  func_0x0001041080e0(0,lVar1,uVar2,uVar7);
  FUN_104146aa0(&uStack_58,FUN_10410ae80,auStack_90,uVar3,uVar5,uVar6);
  if (1 < uStack_58) {
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(auStack_a0 + -extraout_x8,1,1,lVar1);
    uVar7 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x00010176fed4(auStack_a0 + -extraout_x8,uStack_58,lVar4,uVar7,PTR___ss5ErrorWS_11034ee10);
  }
  return;
}



/* Entry: 10410ae80; end: 10410ae9b;  */

void FUN_10410ae80(undefined8 param_1)

{
  FUN_10410b02c(param_1,0x104105c58);
  return;
}



/* Entry: 10410ae9c; end: 10410aeab;  */

void FUN_10410ae9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar11;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar13;
  long lVar14;
  long unaff_x20;
  long *plVar15;
  long alStack_e0 [4];
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long alStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar5 = 0;
  __sSqMa(0,uVar9,*(undefined8 *)(unaff_x20 + 0x30));
  alStack_e0[3] = *(long *)(lVar5 + -8);
  lStack_b8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_e0[3] + 0x40));
  lVar12 = (long)alStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_e0[1] = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12;
  alStack_e0[0] = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12_00;
  lVar5 = 0xff;
  alStack_e0[2] = lVar12;
  func_0x000104105e74(0xff,uVar9,uVar2,uVar1);
  lVar6 = 0;
  __sSqMa(0,lVar5);
  lVar13 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  plVar15 = (long *)(lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)plVar15 - extraout_x12_01;
  uVar7 = 0;
  uStack_c0 = param_1;
  uStack_90 = uVar9;
  uStack_88 = uVar2;
  uStack_80 = uVar1;
  uStack_78 = param_1;
  uStack_70 = uVar3;
  FUN_104109594(0,uVar9,uVar2,uVar1);
  FUN_104146aa0(lVar12,FUN_10410aeac,alStack_a0,uStack_b0,uVar7,lVar6);
  (**(code **)(lVar13 + 0x10))(plVar15,lVar12,lVar6);
  plVar8 = plVar15;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(plVar15,1,lVar5);
  if ((int)plVar8 != 1) {
    plVar8 = plVar15;
    _swift_getEnumCaseMultiPayload(plVar15,lVar5);
    lVar4 = lStack_b8;
    lVar10 = alStack_e0[3];
    lVar5 = alStack_e0[2];
    if ((int)plVar8 == 0) {
      (**(code **)(alStack_e0[3] + 0x20))(alStack_e0[2],plVar15,lStack_b8);
      lVar14 = alStack_e0[0];
      (**(code **)(lVar10 + 0x10))(alStack_e0[0],lVar5,lVar4);
      uVar9 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x00010176fed4(lVar14,uStack_c0,lVar4,uVar9,PTR___ss5ErrorWS_11034ee10);
      pcVar11 = *(code **)(lVar10 + 8);
    }
    else {
      if ((int)plVar8 == 1) {
        alStack_a0[0] = *plVar15;
        uVar9 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        FUN_104137c80(alStack_a0,uStack_c0,lVar4,uVar9,PTR___ss5ErrorWS_11034ee10);
        goto LAB_10410ad10;
      }
      lVar14 = *plVar15;
      uVar9 = 0x113062210;
      func_0x00010002969c(0x113062210,&UNK_10dcd7a10);
      lVar10 = 0;
      _swift_getTupleTypeMetadata2(0,uVar9,lVar4,"continuation element ",0);
      lVar5 = alStack_e0[1];
      (**(code **)(alStack_e0[3] + 0x20))
                (alStack_e0[1],(long)plVar15 + (long)*(int *)(lVar10 + 0x30),lVar4);
      if (lVar14 != 0) {
        _swift_continuation_throwingResume(lVar14);
      }
      lVar14 = alStack_e0[3];
      lVar10 = alStack_e0[2];
      (**(code **)(alStack_e0[3] + 0x10))(alStack_e0[2],lVar5,lVar4);
      uVar9 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x00010176fed4(lVar10,uStack_c0,lVar4,uVar9,PTR___ss5ErrorWS_11034ee10);
      pcVar11 = *(code **)(lVar14 + 8);
    }
    (*pcVar11)(lVar5,lVar4);
  }
LAB_10410ad10:
  (**(code **)(lVar13 + 8))(lVar12,lVar6);
  return;
}



/* Entry: 10410aeac; end: 10410af0f;  */

void FUN_10410aeac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = 0;
  FUN_104109594(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000104105854(param_1,uVar1,uVar3,uVar2);
  return;
}



/* Entry: 10410af10; end: 10410af5b;  */

void FUN_10410af10(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  FUN_104109594(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_104104bc0();
  *param_1 = uVar1;
  return;
}



/* Entry: 10410af5c; end: 10410afef;  */

void FUN_10410af5c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar8 = *(long *)(unaff_x20 + 0x40);
  plVar7 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x10410b0fc;
  plVar7[0x10] = lVar4;
  plVar7[0x11] = lVar2;
  plVar7[0xe] = lVar8;
  plVar7[0xf] = lVar1;
  plVar7[0xc] = lVar3;
  plVar7[0xd] = lVar6;
  plVar7[10] = param_1;
  plVar7[0xb] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10410a4d0,0,0);
  return;
}



/* Entry: 10410aff0; end: 10410b00f;  */

void FUN_10410aff0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar5 = 0;
  uStack_70 = uVar1;
  uStack_68 = uVar3;
  uStack_60 = uVar2;
  FUN_104109594(0,uVar1,uVar3,uVar2);
  uVar6 = 0;
  func_0x000104106080(0,uVar1,uVar3,uVar2);
  FUN_104146aa0(&uStack_48,FUN_10410b010,auStack_80,uVar4,uVar5,uVar6);
  if (1 < uStack_48) {
    _swift_continuation_throwingResume();
  }
  return;
}



/* Entry: 10410b010; end: 10410b02b;  */

void FUN_10410b010(undefined8 param_1)

{
  FUN_10410b02c(param_1,0x1041050a0);
  return;
}



/* Entry: 10410b02c; end: 10410b08b;  */

void FUN_10410b02c(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = 0;
  FUN_104109594(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  (*param_3)(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 10410b08c; end: 10410b0f3;  */

void FUN_10410b08c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = 0;
  FUN_104109594(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000104104d34(uVar4,uVar1,uVar2,uVar3);
  *param_1 = uVar4;
  return;
}



/* Entry: 10410b0f4; end: 10410b0ff;  */

undefined8 * FUN_10410b0f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_retain();
  _swift_retain(uVar1);
  return param_1;
}



/* Entry: 10410b100; end: 10410b213;  */

void FUN_10410b100(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_5 + -8);
  lVar2 = param_4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40),param_2,param_2);
  lVar1 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar2 = lVar1 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(lVar2);
  (**(code **)(lVar3 + 0x10))(lVar1,param_3,param_5);
  (**(code **)(lVar4 + 0x20))(param_1,lVar2,param_4);
  lVar2 = 0;
  lStack_80 = param_4;
  lStack_78 = param_5;
  uStack_70 = param_6;
  uStack_68 = param_7;
  FUN_10410c244(0,&lStack_80);
  (**(code **)(lVar3 + 0x20))(param_1 + *(int *)(lVar2 + 0x34),lVar1,param_5);
  return;
}



/* Entry: 10410b214; end: 10410b307;  */

void FUN_10410b214(long param_1)

{
  long lVar1;
  long extraout_x8;
  undefined8 unaff_x20;
  long lVar2;
  long lVar3;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = *(long *)(param_1 + 0x18);
  lVar1 = 0;
  __sSqMa(0,lVar2);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_80 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = *(undefined8 *)(param_1 + 0x20);
  lStack_78 = lVar2;
  lStack_70 = lVar2;
  FUN_1041286f4(0,&uStack_80);
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))((long)&uStack_80 - extraout_x8,1,1,lVar2);
  FUN_1041290d8();
  (**(code **)(lVar3 + 8))((long)&uStack_80 - extraout_x8,lVar1);
  FUN_10410b308(unaff_x20);
  return;
}



/* Entry: 10410b308; end: 10410b3c7;  */

void FUN_10410b308(long *param_1)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *param_1;
  uStack_38 = *(undefined8 *)(lVar1 + 0x58);
  uStack_40 = *(undefined8 *)(lVar1 + 0x50);
  uStack_28 = *(undefined8 *)(lVar1 + 0x70);
  uStack_30 = *(undefined8 *)(lVar1 + 0x68);
  lVar1 = 0;
  FUN_10410c2a4(0,&uStack_40);
  _swift_allocObject();
  *(long **)(lVar1 + 0x10) = param_1;
  return;
}



/* Entry: 10410b3c8; end: 10410b3e7;  */

void FUN_10410b3c8(void)

{
  func_0x00010410b388();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10410b3e8; end: 10410b50f;  */

void FUN_10410b3e8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long unaff_x22;
  long lVar9;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long **)(unaff_x22 + 0x18) = unaff_x20;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  lVar9 = *unaff_x20;
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar9 + 0x60),*(undefined8 *)(lVar9 + 0x50),PTR___sSciTL_11034fea8
             ,PTR___s7ElementSciTl_11034fb58);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar9 + 0x68),*(undefined8 *)(lVar9 + 0x58),puVar2,puVar1);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  uVar5 = 0xff;
  __sSqMa(0xff,uVar4);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  lVar9 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar3,uVar4,uVar5,0,0);
  *(long *)(unaff_x22 + 0x38) = lVar9;
  lVar6 = 0;
  __sSqMa(0,lVar9);
  *(long *)(unaff_x22 + 0x40) = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar7;
  lVar9 = *(long *)(lVar9 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar9;
  uVar7 = *(long *)(lVar9 + 0x40) + 0xf;
  uVar8 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar8;
  uVar8 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar8;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10410b510,0,0);
  return;
}



/* Entry: 10410b510; end: 10410b5bf;  */

void FUN_10410b510(void)

{
  long *plVar1;
  long *plVar2;
  long unaff_x22;
  
  plVar2 = *(long **)(*(long *)(unaff_x22 + 0x18) + 0x10);
  plVar1 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10410b564;
  plVar1[2] = *(long *)(unaff_x22 + 0x50);
  plVar1[3] = (long)plVar2;
  plVar1[4] = *plVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104123960,0,0);
  return;
}



/* Entry: 10410b5c0; end: 10410b7db;  */

void FUN_10410b5c0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar9 = *(long *)(unaff_x22 + 0x58);
  lVar17 = *(long *)(unaff_x22 + 0x38);
  uVar11 = uVar1;
  (**(code **)(lVar9 + 0x30))(uVar1,1,lVar17);
  if ((int)uVar11 == 1) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x10);
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x40));
    lVar9 = 0;
    _swift_getTupleTypeMetadata2(0,uVar11,uVar14,0,0);
    (**(code **)(*(long *)(lVar9 + -8) + 0x38))(uVar13,1,1,lVar9);
  }
  else {
    lVar2 = *(long *)(unaff_x22 + 0x68);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar15 = *(long *)(unaff_x22 + 0x60);
    lVar3 = *(long *)(unaff_x22 + 0x28);
    lVar4 = *(long *)(unaff_x22 + 0x30);
    lVar16 = *(long *)(unaff_x22 + 0x20);
    lVar19 = *(long *)(unaff_x22 + 0x10);
    pcVar12 = *(code **)(lVar9 + 0x20);
    (*pcVar12)(uVar11,uVar1,lVar17);
    lVar10 = 0;
    _swift_getTupleTypeMetadata2(0,lVar16,lVar3,0,0);
    iVar5 = *(int *)(lVar10 + 0x30);
    (**(code **)(lVar9 + 0x10))(lVar2,uVar11,lVar17);
    iVar6 = *(int *)(lVar17 + 0x30);
    iVar7 = *(int *)(lVar17 + 0x40);
    lVar9 = *(long *)(lVar16 + -8);
    (**(code **)(lVar9 + 0x20))(lVar19,lVar2,lVar16);
    (*pcVar12)(lVar15,uVar11,lVar17);
    iVar8 = *(int *)(lVar17 + 0x40);
    lVar18 = *(long *)(lVar3 + -8);
    (**(code **)(lVar18 + 0x20))(lVar19 + iVar5,lVar15 + *(int *)(lVar17 + 0x30),lVar3);
    (**(code **)(*(long *)(lVar10 + -8) + 0x38))(lVar19,0,1,lVar10);
    pcVar12 = *(code **)(*(long *)(lVar4 + -8) + 8);
    (*pcVar12)(lVar15 + iVar8,lVar4);
    (**(code **)(lVar9 + 8))(lVar15,lVar16);
    (*pcVar12)(lVar2 + iVar7,lVar4);
    (**(code **)(lVar18 + 8))(lVar2 + iVar6,lVar3);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010410b7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10410b7dc; end: 10410b837;  */

void FUN_10410b7dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010410b834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10410b838; end: 10410b84f;  */

void FUN_10410b838(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10410b850,0,0);
  return;
}



/* Entry: 10410b850; end: 10410b8df;  */

void FUN_10410b850(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long unaff_x22;
  long lVar10;
  
  plVar9 = (long *)**(long **)(unaff_x22 + 0x18);
  plVar8 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x10410b8a4;
  plVar8[2] = *(long *)(unaff_x22 + 0x10);
  plVar8[3] = (long)plVar9;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  lVar10 = *plVar9;
  lVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar10 + 0x60),*(undefined8 *)(lVar10 + 0x50),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  plVar8[4] = lVar3;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar10 + 0x68),*(undefined8 *)(lVar10 + 0x58),puVar2,puVar1);
  plVar8[5] = lVar4;
  lVar10 = 0xff;
  __sSqMa(0xff,lVar4);
  plVar8[6] = lVar10;
  lVar5 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,lVar3,lVar4,lVar10,0,0);
  plVar8[7] = lVar5;
  lVar3 = 0;
  __sSqMa(0,lVar5);
  plVar8[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar8[9] = lVar3;
  uVar6 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[10] = uVar6;
  lVar3 = *(long *)(lVar5 + -8);
  plVar8[0xb] = lVar3;
  uVar6 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0xc] = uVar7;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0xd] = uVar7;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0xe] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10410b510,0,0);
  return;
}



/* Entry: 10410b8e0; end: 10410b92f;  */

void FUN_10410b8e0(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10410b930;
  plVar1[2] = param_1;
  plVar1[3] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10410b850,0,0);
  return;
}



/* Entry: 10410b930; end: 10410b96b;  */

void FUN_10410b930(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010410b968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10410b96c; end: 10410ba43;  */

void FUN_10410b96c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_5 + 0x20),*(undefined8 *)(param_5 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7FailureSciTl_11034fb60);
  *(long *)(unaff_x22 + 0x18) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  plVar3 = (long *)(ulong)*(uint *)(
                                   PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTu_11034fc58
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10410ba44;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar3,param_1,param_2,param_3,param_5,param_6,uVar2);
  return;
}


