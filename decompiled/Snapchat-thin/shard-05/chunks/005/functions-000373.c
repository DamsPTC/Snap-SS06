/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ef14dc; end: 103ef171b;  */

undefined8 FUN_103ef14dc(float *param_1,float *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar8 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar9 = (long)puVar8 - extraout_x8_00;
  lVar11 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = uVar9 - extraout_x8_01;
  if (*param_1 == *param_2) {
    lVar3 = 0;
    FUN_103ef14a0();
    iVar1 = *(int *)(lVar3 + 0x14);
    lVar11 = (long)*(int *)(lVar11 + 0x30);
    func_0x0001009f0578((long)param_1 + (long)iVar1,lVar7);
    func_0x0001009f0578((long)param_2 + (long)iVar1,lVar7 + lVar11);
    pcVar10 = *(code **)(lVar12 + 0x30);
    lVar3 = lVar7;
    (*pcVar10)(lVar7,1,lVar2);
    if ((int)lVar3 == 1) {
      lVar11 = lVar7 + lVar11;
      (*pcVar10)(lVar11,1,lVar2);
      if ((int)lVar11 != 1) {
LAB_103ef1670:
        func_0x000103ef1c9c(lVar7,0x112d373d0,&UNK_10d90f8f0);
        goto LAB_103ef1688;
      }
      func_0x000103ef1c9c(lVar7,0x112d373d8,&UNK_10d9014c0);
    }
    else {
      func_0x0001009f0578(lVar7,uVar9);
      lVar3 = lVar7 + lVar11;
      (*pcVar10)(lVar3,1,lVar2);
      if ((int)lVar3 == 1) {
        (**(code **)(lVar12 + 8))(uVar9,lVar2);
        goto LAB_103ef1670;
      }
      puVar4 = puVar8;
      (**(code **)(lVar12 + 0x20))(puVar8,lVar7 + lVar11,lVar2);
      func_0x000100df4c40();
      uVar5 = uVar9;
      __sSQ2eeoiySbx_xtFZTj(uVar9,puVar8,lVar2,puVar4);
      pcVar10 = *(code **)(lVar12 + 8);
      (*pcVar10)(puVar8,lVar2);
      (*pcVar10)(uVar9,lVar2);
      func_0x000103ef1c9c(lVar7,0x112d373d8,&UNK_10d9014c0);
      if ((uVar5 & 1) == 0) goto LAB_103ef1688;
    }
    uVar6 = 1;
  }
  else {
LAB_103ef1688:
    uVar6 = 0;
  }
  return uVar6;
}



/* Entry: 103ef171c; end: 103ef1807;  */

long * FUN_103ef171c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    *(int *)param_1 = (int)*param_2;
    lVar5 = (long)*(int *)(param_3 + 0x14);
    lVar2 = 0;
    __s10Foundation4DateVMa();
    lVar6 = *(long *)(lVar2 + -8);
    lVar3 = (long)param_2 + lVar5;
    (**(code **)(lVar6 + 0x30))(lVar3,1,lVar2);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar6 + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar2);
      (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar2);
    }
    else {
      lVar3 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)param_1 + lVar5,(long)param_2 + lVar5,
              *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    }
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 103ef1808; end: 103ef1873;  */

void FUN_103ef1808(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_2 + 0x14);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000103ef1870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 103ef1874; end: 103ef1933;  */

undefined4 * FUN_103ef1874(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = *param_2;
  lVar3 = (long)*(int *)(param_3 + 0x14);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  lVar2 = (long)param_2 + lVar3;
  (**(code **)(lVar4 + 0x30))(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 0x10))((long)param_1 + lVar3,(long)param_2 + lVar3,lVar1);
    (**(code **)(lVar4 + 0x38))((long)param_1 + lVar3,0,1,lVar1);
  }
  else {
    lVar2 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar3,(long)param_2 + lVar3,
            *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 103ef1934; end: 103ef1a3f;  */

undefined4 * FUN_103ef1934(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  *param_1 = *param_2;
  lVar4 = (long)*(int *)(param_3 + 0x14);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  lVar2 = (long)param_1 + lVar4;
  (*pcVar6)(lVar2,1,lVar1);
  lVar3 = (long)param_2 + lVar4;
  (*pcVar6)(lVar3,1,lVar1);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar5 + 0x18))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar1);
      return param_1;
    }
    (**(code **)(lVar5 + 8))((long)param_1 + lVar4,lVar1);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x10))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar1);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar1);
    return param_1;
  }
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  _memcpy((long)param_1 + lVar4,(long)param_2 + lVar4,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40))
  ;
  return param_1;
}



/* Entry: 103ef1a40; end: 103ef1aff;  */

undefined4 * FUN_103ef1a40(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = *param_2;
  lVar3 = (long)*(int *)(param_3 + 0x14);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  lVar2 = (long)param_2 + lVar3;
  (**(code **)(lVar4 + 0x30))(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 0x20))((long)param_1 + lVar3,(long)param_2 + lVar3,lVar1);
    (**(code **)(lVar4 + 0x38))((long)param_1 + lVar3,0,1,lVar1);
  }
  else {
    lVar2 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar3,(long)param_2 + lVar3,
            *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 103ef1b00; end: 103ef1c0b;  */

undefined4 * FUN_103ef1b00(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  *param_1 = *param_2;
  lVar4 = (long)*(int *)(param_3 + 0x14);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  lVar2 = (long)param_1 + lVar4;
  (*pcVar6)(lVar2,1,lVar1);
  lVar3 = (long)param_2 + lVar4;
  (*pcVar6)(lVar3,1,lVar1);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar5 + 0x28))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar1);
      return param_1;
    }
    (**(code **)(lVar5 + 8))((long)param_1 + lVar4,lVar1);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x20))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar1);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar1);
    return param_1;
  }
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  _memcpy((long)param_1 + lVar4,(long)param_2 + lVar4,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40))
  ;
  return param_1;
}



/* Entry: 103ef1c0c; end: 103ef1c23;  */

void FUN_103ef1c0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103ef1c24; end: 103ef1cdb;  */

void FUN_103ef1c24(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBi32_WV_11034d668 + 0x40;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,2,&puStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 103ef1cdc; end: 103ef1d13;  */

void FUN_103ef1cdc(undefined8 param_1)

{
  if (lRam000000011302d560 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7d4260);
  return;
}



/* Entry: 103ef1d14; end: 103ef1d1b;  */

undefined8 FUN_103ef1d14(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar8 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar9 = (long)puVar8 - extraout_x8_00;
  lVar11 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = uVar9 - extraout_x8_01;
  if (*param_1 == *param_2) {
    lVar3 = 0;
    FUN_103ef1cdc();
    iVar1 = *(int *)(lVar3 + 0x14);
    lVar11 = (long)*(int *)(lVar11 + 0x30);
    func_0x0001009f0578((long)param_1 + (long)iVar1,lVar7);
    func_0x0001009f0578((long)param_2 + (long)iVar1,lVar7 + lVar11);
    pcVar10 = *(code **)(lVar12 + 0x30);
    lVar3 = lVar7;
    (*pcVar10)(lVar7,1,lVar2);
    if ((int)lVar3 == 1) {
      lVar11 = lVar7 + lVar11;
      (*pcVar10)(lVar11,1,lVar2);
      if ((int)lVar11 != 1) {
LAB_103ef1eb0:
        func_0x000103ef24dc(lVar7,0x112d373d0,&UNK_10d90f8f0);
        goto LAB_103ef1ec8;
      }
      func_0x000103ef24dc(lVar7,0x112d373d8,&UNK_10d9014c0);
    }
    else {
      func_0x0001009f0578(lVar7,uVar9);
      lVar3 = lVar7 + lVar11;
      (*pcVar10)(lVar3,1,lVar2);
      if ((int)lVar3 == 1) {
        (**(code **)(lVar12 + 8))(uVar9,lVar2);
        goto LAB_103ef1eb0;
      }
      puVar4 = puVar8;
      (**(code **)(lVar12 + 0x20))(puVar8,lVar7 + lVar11,lVar2);
      func_0x000100df4c40();
      uVar5 = uVar9;
      __sSQ2eeoiySbx_xtFZTj(uVar9,puVar8,lVar2,puVar4);
      pcVar10 = *(code **)(lVar12 + 8);
      (*pcVar10)(puVar8,lVar2);
      (*pcVar10)(uVar9,lVar2);
      func_0x000103ef24dc(lVar7,0x112d373d8,&UNK_10d9014c0);
      if ((uVar5 & 1) == 0) goto LAB_103ef1ec8;
    }
    uVar6 = 1;
  }
  else {
LAB_103ef1ec8:
    uVar6 = 0;
  }
  return uVar6;
}



/* Entry: 103ef1d1c; end: 103ef1f5b;  */

undefined8 FUN_103ef1d1c(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar8 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar9 = (long)puVar8 - extraout_x8_00;
  lVar11 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = uVar9 - extraout_x8_01;
  if (*param_1 == *param_2) {
    lVar3 = 0;
    FUN_103ef1cdc();
    iVar1 = *(int *)(lVar3 + 0x14);
    lVar11 = (long)*(int *)(lVar11 + 0x30);
    func_0x0001009f0578((long)param_1 + (long)iVar1,lVar7);
    func_0x0001009f0578((long)param_2 + (long)iVar1,lVar7 + lVar11);
    pcVar10 = *(code **)(lVar12 + 0x30);
    lVar3 = lVar7;
    (*pcVar10)(lVar7,1,lVar2);
    if ((int)lVar3 == 1) {
      lVar11 = lVar7 + lVar11;
      (*pcVar10)(lVar11,1,lVar2);
      if ((int)lVar11 != 1) {
LAB_103ef1eb0:
        func_0x000103ef24dc(lVar7,0x112d373d0,&UNK_10d90f8f0);
        goto LAB_103ef1ec8;
      }
      func_0x000103ef24dc(lVar7,0x112d373d8,&UNK_10d9014c0);
    }
    else {
      func_0x0001009f0578(lVar7,uVar9);
      lVar3 = lVar7 + lVar11;
      (*pcVar10)(lVar3,1,lVar2);
      if ((int)lVar3 == 1) {
        (**(code **)(lVar12 + 8))(uVar9,lVar2);
        goto LAB_103ef1eb0;
      }
      puVar4 = puVar8;
      (**(code **)(lVar12 + 0x20))(puVar8,lVar7 + lVar11,lVar2);
      func_0x000100df4c40();
      uVar5 = uVar9;
      __sSQ2eeoiySbx_xtFZTj(uVar9,puVar8,lVar2,puVar4);
      pcVar10 = *(code **)(lVar12 + 8);
      (*pcVar10)(puVar8,lVar2);
      (*pcVar10)(uVar9,lVar2);
      func_0x000103ef24dc(lVar7,0x112d373d8,&UNK_10d9014c0);
      if ((uVar5 & 1) == 0) goto LAB_103ef1ec8;
    }
    uVar6 = 1;
  }
  else {
LAB_103ef1ec8:
    uVar6 = 0;
  }
  return uVar6;
}



/* Entry: 103ef1f5c; end: 103ef2047;  */

long * FUN_103ef1f5c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    *param_1 = *param_2;
    lVar5 = (long)*(int *)(param_3 + 0x14);
    lVar2 = 0;
    __s10Foundation4DateVMa();
    lVar6 = *(long *)(lVar2 + -8);
    lVar3 = (long)param_2 + lVar5;
    (**(code **)(lVar6 + 0x30))(lVar3,1,lVar2);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar6 + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar2);
      (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar2);
    }
    else {
      lVar3 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)param_1 + lVar5,(long)param_2 + lVar5,
              *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    }
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 103ef2048; end: 103ef20b3;  */

void FUN_103ef2048(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_2 + 0x14);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000103ef20b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 103ef20b4; end: 103ef2173;  */

undefined8 * FUN_103ef20b4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = *param_2;
  lVar3 = (long)*(int *)(param_3 + 0x14);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  lVar2 = (long)param_2 + lVar3;
  (**(code **)(lVar4 + 0x30))(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 0x10))((long)param_1 + lVar3,(long)param_2 + lVar3,lVar1);
    (**(code **)(lVar4 + 0x38))((long)param_1 + lVar3,0,1,lVar1);
  }
  else {
    lVar2 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar3,(long)param_2 + lVar3,
            *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 103ef2174; end: 103ef227f;  */

undefined8 * FUN_103ef2174(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  *param_1 = *param_2;
  lVar4 = (long)*(int *)(param_3 + 0x14);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  lVar2 = (long)param_1 + lVar4;
  (*pcVar6)(lVar2,1,lVar1);
  lVar3 = (long)param_2 + lVar4;
  (*pcVar6)(lVar3,1,lVar1);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar5 + 0x18))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar1);
      return param_1;
    }
    (**(code **)(lVar5 + 8))((long)param_1 + lVar4,lVar1);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x10))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar1);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar1);
    return param_1;
  }
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  _memcpy((long)param_1 + lVar4,(long)param_2 + lVar4,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40))
  ;
  return param_1;
}



/* Entry: 103ef2280; end: 103ef233f;  */

undefined8 * FUN_103ef2280(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = *param_2;
  lVar3 = (long)*(int *)(param_3 + 0x14);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  lVar2 = (long)param_2 + lVar3;
  (**(code **)(lVar4 + 0x30))(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 0x20))((long)param_1 + lVar3,(long)param_2 + lVar3,lVar1);
    (**(code **)(lVar4 + 0x38))((long)param_1 + lVar3,0,1,lVar1);
  }
  else {
    lVar2 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar3,(long)param_2 + lVar3,
            *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 103ef2340; end: 103ef244b;  */

undefined8 * FUN_103ef2340(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  *param_1 = *param_2;
  lVar4 = (long)*(int *)(param_3 + 0x14);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  lVar2 = (long)param_1 + lVar4;
  (*pcVar6)(lVar2,1,lVar1);
  lVar3 = (long)param_2 + lVar4;
  (*pcVar6)(lVar3,1,lVar1);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar5 + 0x28))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar1);
      return param_1;
    }
    (**(code **)(lVar5 + 8))((long)param_1 + lVar4,lVar1);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x20))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar1);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar1);
    return param_1;
  }
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  _memcpy((long)param_1 + lVar4,(long)param_2 + lVar4,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40))
  ;
  return param_1;
}



/* Entry: 103ef244c; end: 103ef2463;  */

void FUN_103ef244c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103ef2464; end: 103ef251b;  */

void FUN_103ef2464(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,2,&puStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 103ef251c; end: 103ef254f; +[SCDiscoverFeedInteractionHistoryDictKeys reportAction] */

void FUN_103ef251c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x615f74726f706572,0xed00006e6f697463);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ef2550; end: 103ef257b; +[SCDiscoverFeedInteractionHistoryDictKeys commentsTrayViewTimeInMs] */

void FUN_103ef2550(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1ce130);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ef257c; end: 103ef25b7; -[SCDiscoverFeedInteractionHistoryDictKeys init] */

void FUN_103ef257c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ef25b8; end: 103ef25eb;  */

void FUN_103ef25b8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ef25ec; end: 103ef25ef; -[SCDiscoverFeedInteractionHistoryDictKeys .cxx_destruct] */

void FUN_103ef25ec(void)

{
  return;
}



/* Entry: 103ef25f0; end: 103ef260f;  */

void FUN_103ef25f0(void)

{
  _objc_opt_self(&PTR_PTR_112963bd0);
  return;
}



/* Entry: 103ef2610; end: 103ef2877;  */

void FUN_103ef2610(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
  return;
}



/* Entry: 103ef2878; end: 103ef28af;  */

void FUN_103ef2878(undefined8 param_1)

{
  if (lRam000000011302d630 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7d4308);
  return;
}



/* Entry: 103ef28b0; end: 103ef28f7;  */

undefined8 FUN_103ef28b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103ef28f8; end: 103ef28fb;  */

undefined8 FUN_103ef28f8(long *param_1,long *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar15;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long **pplVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x12_15;
  long extraout_x12_16;
  long extraout_x12_17;
  long extraout_x12_18;
  long extraout_x12_19;
  long extraout_x12_20;
  long extraout_x12_21;
  long extraout_x12_22;
  long extraout_x12_23;
  long extraout_x12_24;
  long extraout_x12_25;
  long extraout_x12_26;
  long extraout_x12_27;
  long extraout_x12_28;
  long extraout_x12_29;
  long extraout_x12_30;
  long extraout_x12_31;
  long extraout_x12_32;
  long extraout_x12_33;
  long extraout_x12_34;
  long extraout_x13;
  long extraout_x14;
  long extraout_x15;
  code *pcVar21;
  ulong uVar22;
  code *pcVar23;
  code *pcVar24;
  long lVar25;
  long lVar26;
  long alStack_210 [4];
  long lStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  ulong uStack_190;
  long lStack_188;
  ulong uStack_180;
  ulong uStack_178;
  long lStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long lStack_128;
  long lStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  long *aplStack_70 [2];
  
  lVar4 = 0;
  FUN_103ef14a0();
  lStack_b8 = *(long *)(lVar4 + -8);
  lStack_a0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  plVar19 = (long *)((long)alStack_210 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0x11302d5d0;
  plStack_d8 = plVar19;
  func_0x0001000285a8(0x11302d5d0,&UNK_10dca9910);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  uVar17 = (long)plVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_160 = uVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = uVar17 - extraout_x12;
  uStack_178 = uVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = uVar17 - extraout_x12_00;
  uStack_190 = uVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = uVar17 - extraout_x12_01;
  uStack_1a0 = uVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar18 = (long *)(uVar17 - extraout_x12_02);
  plStack_118 = plVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar18 = (long *)((long)plVar18 - extraout_x12_03);
  plStack_108 = plVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar18 = (long *)((long)plVar18 - extraout_x12_04);
  plStack_f8 = plVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar18 = (long *)((long)plVar18 - extraout_x12_05);
  plStack_e8 = plVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar18 = (long *)((long)plVar18 - extraout_x12_06);
  plVar19 = (long *)0x11302d748;
  plStack_d0 = plVar18;
  func_0x0001000285a8(0x11302d748,&UNK_10dca9998);
  plStack_a8 = plVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(plVar19[-1] + 0x40));
  lVar4 = (long)plVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_170 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar4 - extraout_x12_07;
  lStack_188 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar4 - extraout_x12_08;
  lStack_198 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar4 - extraout_x12_09;
  lStack_1a8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar19 = (long *)(lVar4 - extraout_x12_10);
  plStack_110 = plVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar19 = (long *)((long)plVar19 - extraout_x12_11);
  plStack_100 = plVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar19 = (long *)((long)plVar19 - extraout_x12_12);
  plStack_f0 = plVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar19 = (long *)((long)plVar19 - extraout_x12_13);
  plStack_e0 = plVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar19 = (long *)((long)plVar19 - extraout_x12_14);
  lVar4 = 0;
  plStack_c0 = plVar19;
  FUN_103ef1cdc();
  plStack_98 = *(long **)(lVar4 + -8);
  lStack_80 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(plStack_98[8]);
  lVar15 = (long)plVar19 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x11302d5c8;
  lStack_c8 = lVar15;
  func_0x0001000285a8(0x11302d5c8,&UNK_10dca9908);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  uVar17 = lVar15 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uStack_138 = uVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = uVar17 - extraout_x12_15;
  uStack_130 = uVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = uVar17 - extraout_x12_16;
  plVar19 = (long *)0x11302d750;
  uStack_b0 = uVar17;
  func_0x0001000285a8(0x11302d750,&UNK_10dca99a0);
  plStack_88 = plVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(plVar19[-1] + 0x40));
  lVar4 = uVar17 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  lStack_128 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar4 - extraout_x12_17;
  lStack_120 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar19 = (long *)(lVar4 - extraout_x12_18);
  lVar5 = 0;
  plStack_90 = plVar19;
  FUN_103ef0be4();
  lVar25 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar25 + 0x40));
  lVar26 = (long)plVar19 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x11302d5c0;
  func_0x0001000285a8(0x11302d5c0,&UNK_10dca9900);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  uVar17 = lVar26 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  uStack_140 = uVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = uVar17 - extraout_x12_19;
  uStack_148 = uVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = uVar17 - extraout_x12_20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar20 = uVar17 - extraout_x12_21;
  uStack_150 = uVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar20 = uVar20 - extraout_x12_22;
  uStack_158 = uVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar20 = uVar20 - extraout_x12_23;
  uStack_168 = uVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar20 = uVar20 - extraout_x12_24;
  uStack_180 = uVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar20 = uVar20 - extraout_x12_25;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar22 = uVar20 - extraout_x12_26;
  lVar4 = 0x11302d758;
  func_0x0001000285a8(0x11302d758,&UNK_10dca99a8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (((uVar22 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_27) -
           extraout_x12_28) - extraout_x12_29;
  lVar15 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_30;
  lVar7 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_31;
  lVar8 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_32;
  lVar14 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar18 = (long *)(lVar11 - extraout_x12_33);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar19 = (long *)((long)plVar18 - extraout_x12_34);
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar11 = 0;
  alStack_210[1] = lVar14;
  alStack_210[2] = lVar8;
  alStack_210[3] = lVar7;
  lStack_1f0 = lVar15;
  lStack_1e8 = extraout_x15;
  uStack_1e0 = uVar17;
  lStack_1d8 = extraout_x14;
  lStack_1d0 = extraout_x13;
  lStack_1c8 = lVar26;
  FUN_103ef2878();
  iVar3 = *(int *)(lVar11 + 0x14);
  lVar15 = (long)*(int *)(lVar4 + 0x30);
  lStack_1c0 = lVar4;
  lStack_1b8 = lVar11;
  plStack_1b0 = param_1;
  lStack_78 = lVar5;
  aplStack_70[0] = param_2;
  FUN_103ef28b0((long)param_1 + (long)iVar3,plVar19,0x11302d5c0,&UNK_10dca9900);
  lVar4 = lStack_78;
  FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,(long)plVar19 + lVar15,0x11302d5c0,&UNK_10dca9900
               );
  pcVar21 = *(code **)(lVar25 + 0x30);
  plVar6 = plVar19;
  (*pcVar21)(plVar19,1,lVar4);
  if ((int)plVar6 == 1) {
    lVar15 = (long)plVar19 + lVar15;
    (*pcVar21)(lVar15,1,lVar4);
    if ((int)lVar15 == 1) {
      func_0x000103f001f8(plVar19,0x11302d5c0,&UNK_10dca9900);
LAB_103ef31f8:
      plVar6 = plStack_1b0;
      lVar15 = lStack_1b8;
      iVar3 = *(int *)(lStack_1b8 + 0x18);
      lVar4 = (long)*(int *)(lStack_1c0 + 0x30);
      FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,plVar18,0x11302d5c0,&UNK_10dca9900);
      FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,(long)plVar18 + lVar4,0x11302d5c0,
                    &UNK_10dca9900);
      lVar7 = lStack_78;
      plVar19 = plVar18;
      (*pcVar21)(plVar18,1,lStack_78);
      if ((int)plVar19 == 1) {
        lVar4 = (long)plVar18 + lVar4;
        (*pcVar21)(lVar4,1,lVar7);
        if ((int)lVar4 != 1) {
LAB_103ef32ec:
          uVar12 = 0x11302d758;
          puVar13 = &UNK_10dca99a8;
          plVar19 = plVar18;
          goto LAB_103ef3ac4;
        }
        func_0x000103f001f8(plVar18,0x11302d5c0,&UNK_10dca9900);
      }
      else {
        FUN_103ef28b0(plVar18,uVar20,0x11302d5c0,&UNK_10dca9900);
        lVar8 = (long)plVar18 + lVar4;
        (*pcVar21)(lVar8,1,lVar7);
        lVar7 = lStack_1c8;
        if ((int)lVar8 == 1) {
          FUN_103efbacc(uVar20,FUN_103ef0be4);
          goto LAB_103ef32ec;
        }
        func_0x000103f00238((long)plVar18 + lVar4,lStack_1c8,FUN_103ef0be4);
        uVar17 = uVar20;
        FUN_103ef0c1c(uVar20,lVar7);
        FUN_103efbacc(lVar7,FUN_103ef0be4);
        FUN_103efbacc(uVar20,FUN_103ef0be4);
        func_0x000103f001f8(plVar18,0x11302d5c0,&UNK_10dca9900);
        if ((uVar17 & 1) == 0) {
          return 0;
        }
      }
      plVar19 = plStack_90;
      iVar3 = *(int *)(lVar15 + 0x1c);
      lVar4 = (long)(int)plStack_88[6];
      FUN_103ef28b0((long)plVar6 + (long)iVar3,plStack_90,0x11302d5c8,&UNK_10dca9908);
      plVar18 = aplStack_70[0];
      FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,(long)plVar19 + lVar4,0x11302d5c8,
                    &UNK_10dca9908);
      lVar7 = lStack_80;
      pcVar24 = (code *)plStack_98[6];
      plVar9 = plVar19;
      (*pcVar24)(plVar19,1,lStack_80);
      uVar17 = uStack_b0;
      if ((int)plVar9 == 1) {
        lVar4 = (long)plVar19 + lVar4;
        (*pcVar24)(lVar4,1,lVar7);
        if ((int)lVar4 != 1) {
LAB_103ef3458:
          uVar12 = 0x11302d750;
          puVar13 = &UNK_10dca99a0;
          goto LAB_103ef3ac4;
        }
        func_0x000103f001f8(plVar19,0x11302d5c8,&UNK_10dca9908);
      }
      else {
        FUN_103ef28b0(plVar19,uStack_b0,0x11302d5c8,&UNK_10dca9908);
        lVar8 = (long)plVar19 + lVar4;
        (*pcVar24)(lVar8,1,lVar7);
        lVar7 = lStack_c8;
        if ((int)lVar8 == 1) {
          FUN_103efbacc(uVar17,FUN_103ef1cdc);
          goto LAB_103ef3458;
        }
        func_0x000103f00238((long)plVar19 + lVar4,lStack_c8,FUN_103ef1cdc);
        uVar20 = uVar17;
        FUN_103ef1d1c(uVar17,lVar7);
        FUN_103efbacc(lVar7,FUN_103ef1cdc);
        FUN_103efbacc(uVar17,FUN_103ef1cdc);
        func_0x000103f001f8(plVar19,0x11302d5c8,&UNK_10dca9908);
        if ((uVar20 & 1) == 0) {
          return 0;
        }
      }
      plVar19 = plStack_c0;
      iVar3 = *(int *)(lVar15 + 0x20);
      lVar4 = (long)(int)plStack_a8[6];
      FUN_103ef28b0((long)plVar6 + (long)iVar3,plStack_c0,0x11302d5d0,&UNK_10dca9910);
      FUN_103ef28b0((long)plVar18 + (long)iVar3,(long)plVar19 + lVar4,0x11302d5d0,&UNK_10dca9910);
      lVar7 = lStack_a0;
      pcVar23 = *(code **)(lStack_b8 + 0x30);
      plVar9 = plVar19;
      (*pcVar23)(plVar19,1,lStack_a0);
      plVar18 = plStack_d0;
      if ((int)plVar9 == 1) {
        lVar4 = (long)plVar19 + lVar4;
        (*pcVar23)(lVar4,1,lVar7);
        if ((int)lVar4 == 1) {
          func_0x000103f001f8(plVar19,0x11302d5d0,&UNK_10dca9910);
LAB_103ef3620:
          plVar19 = plStack_e0;
          iVar3 = *(int *)(lVar15 + 0x24);
          lVar4 = (long)(int)plStack_a8[6];
          FUN_103ef28b0((long)plVar6 + (long)iVar3,plStack_e0,0x11302d5d0,&UNK_10dca9910);
          lVar7 = lStack_a0;
          FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,(long)plVar19 + lVar4,0x11302d5d0,
                        &UNK_10dca9910);
          plVar9 = plVar19;
          (*pcVar23)(plVar19,1,lVar7);
          plVar18 = plStack_e8;
          if ((int)plVar9 == 1) {
            lVar4 = (long)plVar19 + lVar4;
            (*pcVar23)(lVar4,1,lVar7);
            if ((int)lVar4 != 1) goto LAB_103ef3ab0;
            func_0x000103f001f8(plVar19,0x11302d5d0,&UNK_10dca9910);
          }
          else {
            FUN_103ef28b0(plVar19,plStack_e8,0x11302d5d0,&UNK_10dca9910);
            lVar8 = (long)plVar19 + lVar4;
            (*pcVar23)(lVar8,1,lVar7);
            plVar9 = plStack_d8;
            if ((int)lVar8 == 1) goto LAB_103ef3aac;
            func_0x000103f00238((long)plVar19 + lVar4,plStack_d8,FUN_103ef14a0);
            plVar10 = plVar18;
            FUN_103ef14dc(plVar18,plVar9);
            FUN_103efbacc(plVar9,FUN_103ef14a0);
            FUN_103efbacc(plVar18,FUN_103ef14a0);
            func_0x000103f001f8(plVar19,0x11302d5d0,&UNK_10dca9910);
            if (((ulong)plVar10 & 1) == 0) {
              return 0;
            }
          }
          plVar19 = plStack_f0;
          iVar3 = *(int *)(lVar15 + 0x28);
          lVar4 = (long)(int)plStack_a8[6];
          FUN_103ef28b0((long)plVar6 + (long)iVar3,plStack_f0,0x11302d5d0,&UNK_10dca9910);
          lVar7 = lStack_a0;
          FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,(long)plVar19 + lVar4,0x11302d5d0,
                        &UNK_10dca9910);
          plVar9 = plVar19;
          (*pcVar23)(plVar19,1,lVar7);
          plVar18 = plStack_f8;
          if ((int)plVar9 == 1) {
            lVar4 = (long)plVar19 + lVar4;
            (*pcVar23)(lVar4,1,lVar7);
            if ((int)lVar4 != 1) goto LAB_103ef3ab0;
            func_0x000103f001f8(plVar19,0x11302d5d0,&UNK_10dca9910);
          }
          else {
            FUN_103ef28b0(plVar19,plStack_f8,0x11302d5d0,&UNK_10dca9910);
            lVar8 = (long)plVar19 + lVar4;
            (*pcVar23)(lVar8,1,lVar7);
            plVar9 = plStack_d8;
            if ((int)lVar8 == 1) goto LAB_103ef3aac;
            func_0x000103f00238((long)plVar19 + lVar4,plStack_d8,FUN_103ef14a0);
            plVar10 = plVar18;
            FUN_103ef14dc(plVar18,plVar9);
            FUN_103efbacc(plVar9,FUN_103ef14a0);
            FUN_103efbacc(plVar18,FUN_103ef14a0);
            func_0x000103f001f8(plVar19,0x11302d5d0,&UNK_10dca9910);
            if (((ulong)plVar10 & 1) == 0) {
              return 0;
            }
          }
          plVar19 = plStack_100;
          iVar3 = *(int *)(lVar15 + 0x2c);
          lVar4 = (long)(int)plStack_a8[6];
          FUN_103ef28b0((long)plVar6 + (long)iVar3,plStack_100,0x11302d5d0,&UNK_10dca9910);
          lVar7 = lStack_a0;
          FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,(long)plVar19 + lVar4,0x11302d5d0,
                        &UNK_10dca9910);
          plVar9 = plVar19;
          (*pcVar23)(plVar19,1,lVar7);
          plVar18 = plStack_108;
          if ((int)plVar9 == 1) {
            lVar4 = (long)plVar19 + lVar4;
            (*pcVar23)(lVar4,1,lVar7);
            if ((int)lVar4 != 1) goto LAB_103ef3ab0;
            func_0x000103f001f8(plVar19,0x11302d5d0,&UNK_10dca9910);
          }
          else {
            FUN_103ef28b0(plVar19,plStack_108,0x11302d5d0,&UNK_10dca9910);
            lVar8 = (long)plVar19 + lVar4;
            (*pcVar23)(lVar8,1,lVar7);
            plVar9 = plStack_d8;
            if ((int)lVar8 == 1) goto LAB_103ef3aac;
            func_0x000103f00238((long)plVar19 + lVar4,plStack_d8,FUN_103ef14a0);
            plVar10 = plVar18;
            FUN_103ef14dc(plVar18,plVar9);
            FUN_103efbacc(plVar9,FUN_103ef14a0);
            FUN_103efbacc(plVar18,FUN_103ef14a0);
            func_0x000103f001f8(plVar19,0x11302d5d0,&UNK_10dca9910);
            if (((ulong)plVar10 & 1) == 0) {
              return 0;
            }
          }
          plVar19 = plStack_110;
          iVar3 = *(int *)(lVar15 + 0x30);
          lVar4 = (long)(int)plStack_a8[6];
          FUN_103ef28b0((long)plVar6 + (long)iVar3,plStack_110,0x11302d5d0,&UNK_10dca9910);
          lVar7 = lStack_a0;
          FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,(long)plVar19 + lVar4,0x11302d5d0,
                        &UNK_10dca9910);
          plVar9 = plVar19;
          (*pcVar23)(plVar19,1,lVar7);
          plVar18 = plStack_118;
          if ((int)plVar9 == 1) {
            lVar4 = (long)plVar19 + lVar4;
            (*pcVar23)(lVar4,1,lVar7);
            if ((int)lVar4 != 1) goto LAB_103ef3ab0;
            func_0x000103f001f8(plVar19,0x11302d5d0,&UNK_10dca9910);
          }
          else {
            FUN_103ef28b0(plVar19,plStack_118,0x11302d5d0,&UNK_10dca9910);
            lVar8 = (long)plVar19 + lVar4;
            (*pcVar23)(lVar8,1,lVar7);
            plVar9 = plStack_d8;
            if ((int)lVar8 == 1) goto LAB_103ef3aac;
            func_0x000103f00238((long)plVar19 + lVar4,plStack_d8,FUN_103ef14a0);
            plVar10 = plVar18;
            FUN_103ef14dc(plVar18,plVar9);
            FUN_103efbacc(plVar9,FUN_103ef14a0);
            FUN_103efbacc(plVar18,FUN_103ef14a0);
            func_0x000103f001f8(plVar19,0x11302d5d0,&UNK_10dca9910);
            if (((ulong)plVar10 & 1) == 0) {
              return 0;
            }
          }
          plVar19 = aplStack_70[0];
          puVar1 = (ulong *)((long)plVar6 + (long)*(int *)(lVar15 + 0x34));
          uVar17 = puVar1[1];
          puVar2 = (ulong *)((long)aplStack_70[0] + (long)*(int *)(lVar15 + 0x34));
          uVar20 = puVar2[1];
          if (uVar17 == 0) {
            if (uVar20 != 0) {
              return 0;
            }
          }
          else {
            if (uVar20 == 0) {
              return 0;
            }
            uVar22 = *puVar1;
            if (((uVar22 != *puVar2) || (uVar17 != uVar20)) &&
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar22 & 1) == 0)) {
              return 0;
            }
          }
          puVar1 = (ulong *)((long)plVar6 + (long)*(int *)(lVar15 + 0x38));
          uVar17 = puVar1[1];
          puVar2 = (ulong *)((long)plVar19 + (long)*(int *)(lVar15 + 0x38));
          uVar20 = puVar2[1];
          if (uVar17 == 0) {
            if (uVar20 != 0) {
              return 0;
            }
          }
          else {
            if (uVar20 == 0) {
              return 0;
            }
            uVar22 = *puVar1;
            if (((uVar22 != *puVar2) || (uVar17 != uVar20)) &&
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar22 & 1) == 0)) {
              return 0;
            }
          }
          lVar4 = lStack_120;
          if (*(long *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x3c)) !=
              *(long *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x3c))) {
            return 0;
          }
          if (*(long *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x40)) !=
              *(long *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x40))) {
            return 0;
          }
          if (*(long *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x44)) !=
              *(long *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x44))) {
            return 0;
          }
          iVar3 = *(int *)(lStack_1b8 + 0x48);
          lVar15 = (long)(int)plStack_88[6];
          FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,lStack_120,0x11302d5c8,&UNK_10dca9908);
          FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar4 + lVar15,0x11302d5c8,&UNK_10dca9908
                       );
          (*pcVar24)(lVar4,1,lStack_80);
          lVar7 = lStack_120;
          if ((int)lVar4 == 1) {
            lVar15 = lStack_120 + lVar15;
            (*pcVar24)(lVar15,1,lStack_80);
            if ((int)lVar15 != 1) goto LAB_103ef3d6c;
            func_0x000103f001f8(lStack_120,0x11302d5c8,&UNK_10dca9908);
LAB_103ef3df4:
            lVar7 = lStack_128;
            iVar3 = *(int *)(lStack_1b8 + 0x4c);
            lVar4 = (long)(int)plStack_88[6];
            FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,lStack_128,0x11302d5c8,&UNK_10dca9908);
            FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar7 + lVar4,0x11302d5c8,
                          &UNK_10dca9908);
            (*pcVar24)(lVar7,1,lStack_80);
            lVar15 = lStack_128;
            if ((int)lVar7 == 1) {
              lVar4 = lStack_128 + lVar4;
              (*pcVar24)(lVar4,1,lStack_80);
              if ((int)lVar4 == 1) {
                func_0x000103f001f8(lStack_128,0x11302d5c8,&UNK_10dca9908);
                goto LAB_103ef3f8c;
              }
LAB_103ef3f00:
              uVar12 = 0x11302d750;
              puVar13 = &UNK_10dca99a0;
              pplVar16 = (long **)&stack0xffffffffffffffd8;
            }
            else {
              FUN_103ef28b0(lStack_128,uStack_138,0x11302d5c8,&UNK_10dca9908);
              lVar15 = lVar15 + lVar4;
              (*pcVar24)(lVar15,1,lStack_80);
              lVar8 = lStack_c8;
              lVar7 = lStack_128;
              if ((int)lVar15 == 1) {
                FUN_103efbacc(uStack_138,FUN_103ef1cdc);
                goto LAB_103ef3f00;
              }
              func_0x000103f00238(lStack_128 + lVar4,lStack_c8,FUN_103ef1cdc);
              uVar17 = uStack_138;
              uVar20 = uStack_138;
              FUN_103ef1d1c(uStack_138,lVar8);
              FUN_103efbacc(lVar8,FUN_103ef1cdc);
              FUN_103efbacc(uVar17,FUN_103ef1cdc);
              func_0x000103f001f8(lVar7,0x11302d5c8,&UNK_10dca9908);
              if ((uVar20 & 1) == 0) {
                return 0;
              }
LAB_103ef3f8c:
              lVar4 = lStack_1a8;
              if (*(long *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x50)) !=
                  *(long *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x50))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x54)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x54))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x58)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x58))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x5c)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x5c))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x60)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x60))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 100)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 100))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x68)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x68))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x6c)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x6c))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x70)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x70))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x74)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x74))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x78)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x78))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x7c)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x7c))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x80)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x80))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x84)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x84))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x88)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x88))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x8c)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x8c))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x90)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x90))) {
                return 0;
              }
              iVar3 = *(int *)(lStack_1b8 + 0x94);
              lVar15 = (long)(int)plStack_a8[6];
              FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,lStack_1a8,0x11302d5d0,&UNK_10dca9910);
              FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar4 + lVar15,0x11302d5d0,
                            &UNK_10dca9910);
              (*pcVar23)(lVar4,1,lStack_a0);
              lVar7 = lStack_1a8;
              if ((int)lVar4 == 1) {
                lVar15 = lStack_1a8 + lVar15;
                (*pcVar23)(lVar15,1,lStack_a0);
                if ((int)lVar15 != 1) {
LAB_103ef4340:
                  uVar12 = 0x11302d748;
                  puVar13 = &UNK_10dca9998;
                  pplVar16 = &plStack_a8;
                  goto LAB_103ef3f14;
                }
                func_0x000103f001f8(lStack_1a8,0x11302d5d0,&UNK_10dca9910);
              }
              else {
                FUN_103ef28b0(lStack_1a8,uStack_1a0,0x11302d5d0,&UNK_10dca9910);
                lVar7 = lVar7 + lVar15;
                (*pcVar23)(lVar7,1,lStack_a0);
                plVar19 = plStack_d8;
                lVar4 = lStack_1a8;
                if ((int)lVar7 == 1) {
                  FUN_103efbacc(uStack_1a0,FUN_103ef14a0);
                  goto LAB_103ef4340;
                }
                func_0x000103f00238(lStack_1a8 + lVar15,plStack_d8,FUN_103ef14a0);
                uVar17 = uStack_1a0;
                uVar20 = uStack_1a0;
                FUN_103ef14dc(uStack_1a0,plVar19);
                FUN_103efbacc(plVar19,FUN_103ef14a0);
                FUN_103efbacc(uVar17,FUN_103ef14a0);
                func_0x000103f001f8(lVar4,0x11302d5d0,&UNK_10dca9910);
                if ((uVar20 & 1) == 0) {
                  return 0;
                }
              }
              lVar7 = lStack_198;
              iVar3 = *(int *)(lStack_1b8 + 0x98);
              lVar4 = (long)(int)plStack_a8[6];
              FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,lStack_198,0x11302d5d0,&UNK_10dca9910);
              FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar7 + lVar4,0x11302d5d0,
                            &UNK_10dca9910);
              (*pcVar23)(lVar7,1,lStack_a0);
              lVar15 = lStack_198;
              if ((int)lVar7 == 1) {
                lVar4 = lStack_198 + lVar4;
                (*pcVar23)(lVar4,1,lStack_a0);
                if ((int)lVar4 != 1) {
LAB_103ef44d4:
                  uVar12 = 0x11302d748;
                  puVar13 = &UNK_10dca9998;
                  pplVar16 = &plStack_98;
                  goto LAB_103ef3f14;
                }
                func_0x000103f001f8(lStack_198,0x11302d5d0,&UNK_10dca9910);
              }
              else {
                FUN_103ef28b0(lStack_198,uStack_190,0x11302d5d0,&UNK_10dca9910);
                lVar15 = lVar15 + lVar4;
                (*pcVar23)(lVar15,1,lStack_a0);
                plVar19 = plStack_d8;
                lVar7 = lStack_198;
                if ((int)lVar15 == 1) {
                  FUN_103efbacc(uStack_190,FUN_103ef14a0);
                  goto LAB_103ef44d4;
                }
                func_0x000103f00238(lStack_198 + lVar4,plStack_d8,FUN_103ef14a0);
                uVar17 = uStack_190;
                uVar20 = uStack_190;
                FUN_103ef14dc(uStack_190,plVar19);
                FUN_103efbacc(plVar19,FUN_103ef14a0);
                FUN_103efbacc(uVar17,FUN_103ef14a0);
                func_0x000103f001f8(lVar7,0x11302d5d0,&UNK_10dca9910);
                if ((uVar20 & 1) == 0) {
                  return 0;
                }
              }
              lVar7 = lStack_188;
              iVar3 = *(int *)(lStack_1b8 + 0x9c);
              lVar4 = (long)(int)plStack_a8[6];
              FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,lStack_188,0x11302d5d0,&UNK_10dca9910);
              FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar7 + lVar4,0x11302d5d0,
                            &UNK_10dca9910);
              (*pcVar23)(lVar7,1,lStack_a0);
              lVar15 = lStack_188;
              if ((int)lVar7 == 1) {
                lVar4 = lStack_188 + lVar4;
                (*pcVar23)(lVar4,1,lStack_a0);
                if ((int)lVar4 != 1) {
LAB_103ef4668:
                  uVar12 = 0x11302d748;
                  puVar13 = &UNK_10dca9998;
                  pplVar16 = &plStack_88;
                  goto LAB_103ef3f14;
                }
                func_0x000103f001f8(lStack_188,0x11302d5d0,&UNK_10dca9910);
              }
              else {
                FUN_103ef28b0(lStack_188,uStack_178,0x11302d5d0,&UNK_10dca9910);
                lVar15 = lVar15 + lVar4;
                (*pcVar23)(lVar15,1,lStack_a0);
                plVar19 = plStack_d8;
                lVar7 = lStack_188;
                if ((int)lVar15 == 1) {
                  FUN_103efbacc(uStack_178,FUN_103ef14a0);
                  goto LAB_103ef4668;
                }
                func_0x000103f00238(lStack_188 + lVar4,plStack_d8,FUN_103ef14a0);
                uVar17 = uStack_178;
                uVar20 = uStack_178;
                FUN_103ef14dc(uStack_178,plVar19);
                FUN_103efbacc(plVar19,FUN_103ef14a0);
                FUN_103efbacc(uVar17,FUN_103ef14a0);
                func_0x000103f001f8(lVar7,0x11302d5d0,&UNK_10dca9910);
                if ((uVar20 & 1) == 0) {
                  return 0;
                }
              }
              lVar7 = lStack_170;
              iVar3 = *(int *)(lStack_1b8 + 0xa0);
              lVar4 = (long)(int)plStack_a8[6];
              FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,lStack_170,0x11302d5d0,&UNK_10dca9910);
              FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar7 + lVar4,0x11302d5d0,
                            &UNK_10dca9910);
              (*pcVar23)(lVar7,1,lStack_a0);
              lVar15 = lStack_170;
              if ((int)lVar7 == 1) {
                lVar4 = lStack_170 + lVar4;
                (*pcVar23)(lVar4,1,lStack_a0);
                if ((int)lVar4 != 1) {
LAB_103ef47fc:
                  uVar12 = 0x11302d748;
                  puVar13 = &UNK_10dca9998;
                  pplVar16 = aplStack_70;
                  goto LAB_103ef3f14;
                }
                func_0x000103f001f8(lStack_170,0x11302d5d0,&UNK_10dca9910);
              }
              else {
                FUN_103ef28b0(lStack_170,uStack_160,0x11302d5d0,&UNK_10dca9910);
                lVar15 = lVar15 + lVar4;
                (*pcVar23)(lVar15,1,lStack_a0);
                plVar19 = plStack_d8;
                lVar7 = lStack_170;
                if ((int)lVar15 == 1) {
                  FUN_103efbacc(uStack_160,FUN_103ef14a0);
                  goto LAB_103ef47fc;
                }
                func_0x000103f00238(lStack_170 + lVar4,plStack_d8,FUN_103ef14a0);
                uVar17 = uStack_160;
                uVar20 = uStack_160;
                FUN_103ef14dc(uStack_160,plVar19);
                FUN_103efbacc(plVar19,FUN_103ef14a0);
                FUN_103efbacc(uVar17,FUN_103ef14a0);
                func_0x000103f001f8(lVar7,0x11302d5d0,&UNK_10dca9910);
                if ((uVar20 & 1) == 0) {
                  return 0;
                }
              }
              if (*(long *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0xa4)) !=
                  *(long *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0xa4))) {
                return 0;
              }
              if (*(long *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0xa8)) !=
                  *(long *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0xa8))) {
                return 0;
              }
              puVar1 = (ulong *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0xac));
              uVar17 = puVar1[1];
              puVar2 = (ulong *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0xac));
              uVar20 = puVar2[1];
              if (uVar17 == 0) {
                if (uVar20 != 0) {
                  return 0;
                }
              }
              else {
                if (uVar20 == 0) {
                  return 0;
                }
                uVar22 = *puVar1;
                if (((uVar22 != *puVar2) || (uVar17 != uVar20)) &&
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar22 & 1) == 0)) {
                  return 0;
                }
              }
              lVar7 = alStack_210[1];
              iVar3 = *(int *)(lStack_1b8 + 0xb0);
              lVar4 = (long)*(int *)(lStack_1c0 + 0x30);
              FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,alStack_210[1],0x11302d5c0,
                            &UNK_10dca9900);
              FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar7 + lVar4,0x11302d5c0,
                            &UNK_10dca9900);
              (*pcVar21)(lVar7,1,lStack_78);
              lVar15 = alStack_210[1];
              if ((int)lVar7 == 1) {
                lVar4 = alStack_210[1] + lVar4;
                (*pcVar21)(lVar4,1,lStack_78);
                if ((int)lVar4 != 1) {
LAB_103ef4a40:
                  uVar12 = 0x11302d758;
                  puVar13 = &UNK_10dca99a8;
                  pplVar16 = &plStack_108;
                  goto LAB_103ef3f14;
                }
                func_0x000103f001f8(alStack_210[1],0x11302d5c0,&UNK_10dca9900);
              }
              else {
                FUN_103ef28b0(alStack_210[1],uStack_180,0x11302d5c0,&UNK_10dca9900);
                lVar15 = lVar15 + lVar4;
                (*pcVar21)(lVar15,1,lStack_78);
                lVar8 = lStack_1c8;
                lVar7 = alStack_210[1];
                if ((int)lVar15 == 1) {
                  FUN_103efbacc(uStack_180,FUN_103ef0be4);
                  goto LAB_103ef4a40;
                }
                func_0x000103f00238(alStack_210[1] + lVar4,lStack_1c8,FUN_103ef0be4);
                uVar17 = uStack_180;
                uVar20 = uStack_180;
                FUN_103ef0c1c(uStack_180,lVar8);
                FUN_103efbacc(lVar8,FUN_103ef0be4);
                FUN_103efbacc(uVar17,FUN_103ef0be4);
                func_0x000103f001f8(lVar7,0x11302d5c0,&UNK_10dca9900);
                if ((uVar20 & 1) == 0) {
                  return 0;
                }
              }
              lVar7 = alStack_210[2];
              iVar3 = *(int *)(lStack_1b8 + 0xb4);
              lVar4 = (long)*(int *)(lStack_1c0 + 0x30);
              FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,alStack_210[2],0x11302d5c0,
                            &UNK_10dca9900);
              FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar7 + lVar4,0x11302d5c0,
                            &UNK_10dca9900);
              (*pcVar21)(lVar7,1,lStack_78);
              lVar15 = alStack_210[2];
              if ((int)lVar7 == 1) {
                lVar4 = alStack_210[2] + lVar4;
                (*pcVar21)(lVar4,1,lStack_78);
                if ((int)lVar4 != 1) {
LAB_103ef4bdc:
                  uVar12 = 0x11302d758;
                  puVar13 = &UNK_10dca99a8;
                  pplVar16 = &plStack_100;
                  goto LAB_103ef3f14;
                }
                func_0x000103f001f8(alStack_210[2],0x11302d5c0,&UNK_10dca9900);
              }
              else {
                FUN_103ef28b0(alStack_210[2],uStack_168,0x11302d5c0,&UNK_10dca9900);
                lVar15 = lVar15 + lVar4;
                (*pcVar21)(lVar15,1,lStack_78);
                lVar8 = lStack_1c8;
                lVar7 = alStack_210[2];
                if ((int)lVar15 == 1) {
                  FUN_103efbacc(uStack_168,FUN_103ef0be4);
                  goto LAB_103ef4bdc;
                }
                func_0x000103f00238(alStack_210[2] + lVar4,lStack_1c8,FUN_103ef0be4);
                uVar17 = uStack_168;
                uVar20 = uStack_168;
                FUN_103ef0c1c(uStack_168,lVar8);
                FUN_103efbacc(lVar8,FUN_103ef0be4);
                FUN_103efbacc(uVar17,FUN_103ef0be4);
                func_0x000103f001f8(lVar7,0x11302d5c0,&UNK_10dca9900);
                if ((uVar20 & 1) == 0) {
                  return 0;
                }
              }
              puVar1 = (ulong *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0xb8));
              uVar17 = puVar1[1];
              puVar2 = (ulong *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0xb8));
              uVar20 = puVar2[1];
              if (uVar17 == 0) {
                if (uVar20 != 0) {
                  return 0;
                }
              }
              else {
                if (uVar20 == 0) {
                  return 0;
                }
                uVar22 = *puVar1;
                if (((uVar22 != *puVar2) || (uVar17 != uVar20)) &&
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar22 & 1) == 0)) {
                  return 0;
                }
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0xbc)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0xbc))) {
                return 0;
              }
              uVar17 = *(ulong *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0xc0));
              lVar4 = *(long *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0xc0));
              if (uVar17 == 0) {
                if (lVar4 != 0) {
                  return 0;
                }
              }
              else {
                if (lVar4 == 0) {
                  return 0;
                }
                func_0x0001044c8618(0);
                _objc_retain(lVar4);
                _objc_retain();
                uVar20 = uVar17;
                __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
                _objc_release(uVar17);
                _objc_release(lVar4);
                if ((uVar20 & 1) == 0) {
                  return 0;
                }
              }
              puVar1 = (ulong *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0xc4));
              uVar17 = puVar1[1];
              puVar2 = (ulong *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0xc4));
              uVar20 = puVar2[1];
              if (uVar17 == 0) {
                if (uVar20 != 0) {
                  return 0;
                }
              }
              else {
                if (uVar20 == 0) {
                  return 0;
                }
                uVar22 = *puVar1;
                if (((uVar22 != *puVar2) || (uVar17 != uVar20)) &&
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar22 & 1) == 0)) {
                  return 0;
                }
              }
              lVar4 = alStack_210[3];
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 200)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 200))) {
                return 0;
              }
              iVar3 = *(int *)(lStack_1b8 + 0xcc);
              lVar15 = (long)*(int *)(lStack_1c0 + 0x30);
              FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,alStack_210[3],0x11302d5c0,
                            &UNK_10dca9900);
              FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar4 + lVar15,0x11302d5c0,
                            &UNK_10dca9900);
              (*pcVar21)(lVar4,1,lStack_78);
              lVar7 = alStack_210[3];
              if ((int)lVar4 == 1) {
                lVar15 = alStack_210[3] + lVar15;
                (*pcVar21)(lVar15,1,lStack_78);
                if ((int)lVar15 == 1) {
                  func_0x000103f001f8(alStack_210[3],0x11302d5c0,&UNK_10dca9900);
LAB_103ef4f84:
                  lVar7 = lStack_1f0;
                  iVar3 = *(int *)(lStack_1b8 + 0xd0);
                  lVar4 = (long)*(int *)(lStack_1c0 + 0x30);
                  FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,lStack_1f0,0x11302d5c0,
                                &UNK_10dca9900);
                  FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar7 + lVar4,0x11302d5c0,
                                &UNK_10dca9900);
                  (*pcVar21)(lVar7,1,lStack_78);
                  lVar15 = lStack_1f0;
                  if ((int)lVar7 == 1) {
                    lVar4 = lStack_1f0 + lVar4;
                    (*pcVar21)(lVar4,1,lStack_78);
                    if ((int)lVar4 != 1) {
LAB_103ef5094:
                      uVar12 = 0x11302d758;
                      puVar13 = &UNK_10dca99a8;
                      pplVar16 = &plStack_f0;
                      goto LAB_103ef3f14;
                    }
                    func_0x000103f001f8(lStack_1f0,0x11302d5c0,&UNK_10dca9900);
                  }
                  else {
                    FUN_103ef28b0(lStack_1f0,uStack_150,0x11302d5c0,&UNK_10dca9900);
                    lVar15 = lVar15 + lVar4;
                    (*pcVar21)(lVar15,1,lStack_78);
                    lVar8 = lStack_1c8;
                    lVar7 = lStack_1f0;
                    if ((int)lVar15 == 1) {
                      FUN_103efbacc(uStack_150,FUN_103ef0be4);
                      goto LAB_103ef5094;
                    }
                    func_0x000103f00238(lStack_1f0 + lVar4,lStack_1c8,FUN_103ef0be4);
                    uVar17 = uStack_150;
                    uVar20 = uStack_150;
                    FUN_103ef0c1c(uStack_150,lVar8);
                    FUN_103efbacc(lVar8,FUN_103ef0be4);
                    FUN_103efbacc(uVar17,FUN_103ef0be4);
                    func_0x000103f001f8(lVar7,0x11302d5c0,&UNK_10dca9900);
                    if ((uVar20 & 1) == 0) {
                      return 0;
                    }
                  }
                  lVar7 = lStack_1e8;
                  iVar3 = *(int *)(lStack_1b8 + 0xd4);
                  lVar4 = (long)*(int *)(lStack_1c0 + 0x30);
                  FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,lStack_1e8,0x11302d5c0,
                                &UNK_10dca9900);
                  FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar7 + lVar4,0x11302d5c0,
                                &UNK_10dca9900);
                  (*pcVar21)(lVar7,1,lStack_78);
                  lVar15 = lStack_1e8;
                  if ((int)lVar7 == 1) {
                    lVar4 = lStack_1e8 + lVar4;
                    (*pcVar21)(lVar4,1,lStack_78);
                    if ((int)lVar4 != 1) {
LAB_103ef5230:
                      uVar12 = 0x11302d758;
                      puVar13 = &UNK_10dca99a8;
                      pplVar16 = &plStack_e8;
                      goto LAB_103ef3f14;
                    }
                    func_0x000103f001f8(lStack_1e8,0x11302d5c0,&UNK_10dca9900);
                  }
                  else {
                    FUN_103ef28b0(lStack_1e8,uStack_1e0,0x11302d5c0,&UNK_10dca9900);
                    lVar15 = lVar15 + lVar4;
                    (*pcVar21)(lVar15,1,lStack_78);
                    lVar7 = lStack_1c8;
                    if ((int)lVar15 == 1) {
                      FUN_103efbacc(uStack_1e0,FUN_103ef0be4);
                      goto LAB_103ef5230;
                    }
                    func_0x000103f00238(lStack_1e8 + lVar4,lStack_1c8,FUN_103ef0be4);
                    uVar17 = uStack_1e0;
                    uVar20 = uStack_1e0;
                    FUN_103ef0c1c(uStack_1e0,lVar7);
                    FUN_103efbacc(lVar7,FUN_103ef0be4);
                    FUN_103efbacc(uVar17,FUN_103ef0be4);
                    func_0x000103f001f8(lStack_1e8,0x11302d5c0,&UNK_10dca9900);
                    if ((uVar20 & 1) == 0) {
                      return 0;
                    }
                  }
                  lVar7 = lStack_1d8;
                  iVar3 = *(int *)(lStack_1b8 + 0xd8);
                  lVar4 = (long)*(int *)(lStack_1c0 + 0x30);
                  FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,lStack_1d8,0x11302d5c0,
                                &UNK_10dca9900);
                  FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar7 + lVar4,0x11302d5c0,
                                &UNK_10dca9900);
                  (*pcVar21)(lVar7,1,lStack_78);
                  lVar15 = lStack_1d8;
                  if ((int)lVar7 == 1) {
                    lVar4 = lStack_1d8 + lVar4;
                    (*pcVar21)(lVar4,1,lStack_78);
                    if ((int)lVar4 != 1) {
LAB_103ef53cc:
                      uVar12 = 0x11302d758;
                      puVar13 = &UNK_10dca99a8;
                      pplVar16 = &plStack_d8;
                      goto LAB_103ef3f14;
                    }
                    func_0x000103f001f8(lStack_1d8,0x11302d5c0,&UNK_10dca9900);
                  }
                  else {
                    FUN_103ef28b0(lStack_1d8,uStack_148,0x11302d5c0,&UNK_10dca9900);
                    lVar15 = lVar15 + lVar4;
                    (*pcVar21)(lVar15,1,lStack_78);
                    lVar7 = lStack_1c8;
                    if ((int)lVar15 == 1) {
                      FUN_103efbacc(uStack_148,FUN_103ef0be4);
                      goto LAB_103ef53cc;
                    }
                    func_0x000103f00238(lStack_1d8 + lVar4,lStack_1c8,FUN_103ef0be4);
                    uVar17 = uStack_148;
                    uVar20 = uStack_148;
                    FUN_103ef0c1c(uStack_148,lVar7);
                    FUN_103efbacc(lVar7,FUN_103ef0be4);
                    FUN_103efbacc(uVar17,FUN_103ef0be4);
                    func_0x000103f001f8(lStack_1d8,0x11302d5c0,&UNK_10dca9900);
                    if ((uVar20 & 1) == 0) {
                      return 0;
                    }
                  }
                  lVar7 = lStack_1d0;
                  iVar3 = *(int *)(lStack_1b8 + 0xdc);
                  lVar4 = (long)*(int *)(lStack_1c0 + 0x30);
                  FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,lStack_1d0,0x11302d5c0,
                                &UNK_10dca9900);
                  FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar7 + lVar4,0x11302d5c0,
                                &UNK_10dca9900);
                  (*pcVar21)(lVar7,1,lStack_78);
                  lVar15 = lStack_1d0;
                  if ((int)lVar7 == 1) {
                    lVar4 = lStack_1d0 + lVar4;
                    (*pcVar21)(lVar4,1,lStack_78);
                    if ((int)lVar4 == 1) {
                      func_0x000103f001f8(lStack_1d0,0x11302d5c0,&UNK_10dca9900);
                      return 1;
                    }
                  }
                  else {
                    FUN_103ef28b0(lStack_1d0,uStack_140,0x11302d5c0,&UNK_10dca9900);
                    lVar15 = lVar15 + lVar4;
                    (*pcVar21)(lVar15,1,lStack_78);
                    lVar7 = lStack_1c8;
                    if ((int)lVar15 != 1) {
                      func_0x000103f00238(lStack_1d0 + lVar4,lStack_1c8,FUN_103ef0be4);
                      uVar17 = uStack_140;
                      uVar20 = uStack_140;
                      FUN_103ef0c1c(uStack_140,lVar7);
                      FUN_103efbacc(lVar7,FUN_103ef0be4);
                      FUN_103efbacc(uVar17,FUN_103ef0be4);
                      func_0x000103f001f8(lStack_1d0,0x11302d5c0,&UNK_10dca9900);
                      if ((uVar20 & 1) == 0) {
                        return 0;
                      }
                      return 1;
                    }
                    FUN_103efbacc(uStack_140,FUN_103ef0be4);
                  }
                  uVar12 = 0x11302d758;
                  puVar13 = &UNK_10dca99a8;
                  pplVar16 = &plStack_d0;
                  goto LAB_103ef3f14;
                }
              }
              else {
                FUN_103ef28b0(alStack_210[3],uStack_158,0x11302d5c0,&UNK_10dca9900);
                lVar7 = lVar7 + lVar15;
                (*pcVar21)(lVar7,1,lStack_78);
                lVar8 = lStack_1c8;
                lVar4 = alStack_210[3];
                if ((int)lVar7 != 1) {
                  func_0x000103f00238(alStack_210[3] + lVar15,lStack_1c8,FUN_103ef0be4);
                  uVar17 = uStack_158;
                  uVar20 = uStack_158;
                  FUN_103ef0c1c(uStack_158,lVar8);
                  FUN_103efbacc(lVar8,FUN_103ef0be4);
                  FUN_103efbacc(uVar17,FUN_103ef0be4);
                  func_0x000103f001f8(lVar4,0x11302d5c0,&UNK_10dca9900);
                  if ((uVar20 & 1) == 0) {
                    return 0;
                  }
                  goto LAB_103ef4f84;
                }
                FUN_103efbacc(uStack_158,FUN_103ef0be4);
              }
              uVar12 = 0x11302d758;
              puVar13 = &UNK_10dca99a8;
              pplVar16 = &plStack_f8;
            }
          }
          else {
            FUN_103ef28b0(lStack_120,uStack_130,0x11302d5c8,&UNK_10dca9908);
            lVar7 = lVar7 + lVar15;
            (*pcVar24)(lVar7,1,lStack_80);
            lVar8 = lStack_c8;
            lVar4 = lStack_120;
            if ((int)lVar7 != 1) {
              func_0x000103f00238(lStack_120 + lVar15,lStack_c8,FUN_103ef1cdc);
              uVar17 = uStack_130;
              uVar20 = uStack_130;
              FUN_103ef1d1c(uStack_130,lVar8);
              FUN_103efbacc(lVar8,FUN_103ef1cdc);
              FUN_103efbacc(uVar17,FUN_103ef1cdc);
              func_0x000103f001f8(lVar4,0x11302d5c8,&UNK_10dca9908);
              if ((uVar20 & 1) == 0) {
                return 0;
              }
              goto LAB_103ef3df4;
            }
            FUN_103efbacc(uStack_130,FUN_103ef1cdc);
LAB_103ef3d6c:
            uVar12 = 0x11302d750;
            puVar13 = &UNK_10dca99a0;
            pplVar16 = (long **)&stack0xffffffffffffffe0;
          }
LAB_103ef3f14:
          plVar19 = pplVar16[-0x20];
          goto LAB_103ef3ac4;
        }
      }
      else {
        FUN_103ef28b0(plVar19,plStack_d0,0x11302d5d0,&UNK_10dca9910);
        lVar8 = (long)plVar19 + lVar4;
        (*pcVar23)(lVar8,1,lVar7);
        plVar9 = plStack_d8;
        if ((int)lVar8 != 1) {
          func_0x000103f00238((long)plVar19 + lVar4,plStack_d8,FUN_103ef14a0);
          plVar10 = plVar18;
          FUN_103ef14dc(plVar18,plVar9);
          FUN_103efbacc(plVar9,FUN_103ef14a0);
          FUN_103efbacc(plVar18,FUN_103ef14a0);
          func_0x000103f001f8(plVar19,0x11302d5d0,&UNK_10dca9910);
          if (((ulong)plVar10 & 1) == 0) {
            return 0;
          }
          goto LAB_103ef3620;
        }
LAB_103ef3aac:
        FUN_103efbacc(plVar18,FUN_103ef14a0);
      }
LAB_103ef3ab0:
      uVar12 = 0x11302d748;
      puVar13 = &UNK_10dca9998;
      goto LAB_103ef3ac4;
    }
  }
  else {
    FUN_103ef28b0(plVar19,uVar22,0x11302d5c0,&UNK_10dca9900);
    lVar7 = (long)plVar19 + lVar15;
    (*pcVar21)(lVar7,1,lVar4);
    lVar4 = lStack_1c8;
    if ((int)lVar7 != 1) {
      func_0x000103f00238((long)plVar19 + lVar15,lStack_1c8,FUN_103ef0be4);
      uVar17 = uVar22;
      FUN_103ef0c1c(uVar22,lVar4);
      FUN_103efbacc(lVar4,FUN_103ef0be4);
      FUN_103efbacc(uVar22,FUN_103ef0be4);
      func_0x000103f001f8(plVar19,0x11302d5c0,&UNK_10dca9900);
      if ((uVar17 & 1) == 0) {
        return 0;
      }
      goto LAB_103ef31f8;
    }
    FUN_103efbacc(uVar22,FUN_103ef0be4);
  }
  uVar12 = 0x11302d758;
  puVar13 = &UNK_10dca99a8;
LAB_103ef3ac4:
  func_0x000103f001f8(plVar19,uVar12,puVar13);
  return 0;
}



/* Entry: 103ef28fc; end: 103efbacb;  */

undefined8 FUN_103ef28fc(long *param_1,long *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar15;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long **pplVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x12_15;
  long extraout_x12_16;
  long extraout_x12_17;
  long extraout_x12_18;
  long extraout_x12_19;
  long extraout_x12_20;
  long extraout_x12_21;
  long extraout_x12_22;
  long extraout_x12_23;
  long extraout_x12_24;
  long extraout_x12_25;
  long extraout_x12_26;
  long extraout_x12_27;
  long extraout_x12_28;
  long extraout_x12_29;
  long extraout_x12_30;
  long extraout_x12_31;
  long extraout_x12_32;
  long extraout_x12_33;
  long extraout_x12_34;
  long extraout_x13;
  long extraout_x14;
  long extraout_x15;
  code *pcVar21;
  ulong uVar22;
  code *pcVar23;
  code *pcVar24;
  long lVar25;
  long lVar26;
  long alStack_210 [4];
  long lStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  ulong uStack_190;
  long lStack_188;
  ulong uStack_180;
  ulong uStack_178;
  long lStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long lStack_128;
  long lStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  long *aplStack_70 [2];
  
  lVar4 = 0;
  FUN_103ef14a0();
  lStack_b8 = *(long *)(lVar4 + -8);
  lStack_a0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  plVar19 = (long *)((long)alStack_210 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0x11302d5d0;
  plStack_d8 = plVar19;
  func_0x0001000285a8(0x11302d5d0,&UNK_10dca9910);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  uVar17 = (long)plVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_160 = uVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = uVar17 - extraout_x12;
  uStack_178 = uVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = uVar17 - extraout_x12_00;
  uStack_190 = uVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = uVar17 - extraout_x12_01;
  uStack_1a0 = uVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar18 = (long *)(uVar17 - extraout_x12_02);
  plStack_118 = plVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar18 = (long *)((long)plVar18 - extraout_x12_03);
  plStack_108 = plVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar18 = (long *)((long)plVar18 - extraout_x12_04);
  plStack_f8 = plVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar18 = (long *)((long)plVar18 - extraout_x12_05);
  plStack_e8 = plVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar18 = (long *)((long)plVar18 - extraout_x12_06);
  plVar19 = (long *)0x11302d748;
  plStack_d0 = plVar18;
  func_0x0001000285a8(0x11302d748,&UNK_10dca9998);
  plStack_a8 = plVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(plVar19[-1] + 0x40));
  lVar4 = (long)plVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_170 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar4 - extraout_x12_07;
  lStack_188 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar4 - extraout_x12_08;
  lStack_198 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar4 - extraout_x12_09;
  lStack_1a8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar19 = (long *)(lVar4 - extraout_x12_10);
  plStack_110 = plVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar19 = (long *)((long)plVar19 - extraout_x12_11);
  plStack_100 = plVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar19 = (long *)((long)plVar19 - extraout_x12_12);
  plStack_f0 = plVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar19 = (long *)((long)plVar19 - extraout_x12_13);
  plStack_e0 = plVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar19 = (long *)((long)plVar19 - extraout_x12_14);
  lVar4 = 0;
  plStack_c0 = plVar19;
  FUN_103ef1cdc();
  plStack_98 = *(long **)(lVar4 + -8);
  lStack_80 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(plStack_98[8]);
  lVar15 = (long)plVar19 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x11302d5c8;
  lStack_c8 = lVar15;
  func_0x0001000285a8(0x11302d5c8,&UNK_10dca9908);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  uVar17 = lVar15 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uStack_138 = uVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = uVar17 - extraout_x12_15;
  uStack_130 = uVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = uVar17 - extraout_x12_16;
  plVar19 = (long *)0x11302d750;
  uStack_b0 = uVar17;
  func_0x0001000285a8(0x11302d750,&UNK_10dca99a0);
  plStack_88 = plVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(plVar19[-1] + 0x40));
  lVar4 = uVar17 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  lStack_128 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar4 - extraout_x12_17;
  lStack_120 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar19 = (long *)(lVar4 - extraout_x12_18);
  lVar5 = 0;
  plStack_90 = plVar19;
  FUN_103ef0be4();
  lVar25 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar25 + 0x40));
  lVar26 = (long)plVar19 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x11302d5c0;
  func_0x0001000285a8(0x11302d5c0,&UNK_10dca9900);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  uVar17 = lVar26 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  uStack_140 = uVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = uVar17 - extraout_x12_19;
  uStack_148 = uVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = uVar17 - extraout_x12_20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar20 = uVar17 - extraout_x12_21;
  uStack_150 = uVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar20 = uVar20 - extraout_x12_22;
  uStack_158 = uVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar20 = uVar20 - extraout_x12_23;
  uStack_168 = uVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar20 = uVar20 - extraout_x12_24;
  uStack_180 = uVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar20 = uVar20 - extraout_x12_25;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar22 = uVar20 - extraout_x12_26;
  lVar4 = 0x11302d758;
  func_0x0001000285a8(0x11302d758,&UNK_10dca99a8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (((uVar22 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_27) -
           extraout_x12_28) - extraout_x12_29;
  lVar15 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_30;
  lVar7 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_31;
  lVar8 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_32;
  lVar14 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar18 = (long *)(lVar11 - extraout_x12_33);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar19 = (long *)((long)plVar18 - extraout_x12_34);
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar11 = 0;
  alStack_210[1] = lVar14;
  alStack_210[2] = lVar8;
  alStack_210[3] = lVar7;
  lStack_1f0 = lVar15;
  lStack_1e8 = extraout_x15;
  uStack_1e0 = uVar17;
  lStack_1d8 = extraout_x14;
  lStack_1d0 = extraout_x13;
  lStack_1c8 = lVar26;
  FUN_103ef2878();
  iVar3 = *(int *)(lVar11 + 0x14);
  lVar15 = (long)*(int *)(lVar4 + 0x30);
  lStack_1c0 = lVar4;
  lStack_1b8 = lVar11;
  plStack_1b0 = param_1;
  lStack_78 = lVar5;
  aplStack_70[0] = param_2;
  FUN_103ef28b0((long)param_1 + (long)iVar3,plVar19,0x11302d5c0,&UNK_10dca9900);
  lVar4 = lStack_78;
  FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,(long)plVar19 + lVar15,0x11302d5c0,&UNK_10dca9900
               );
  pcVar21 = *(code **)(lVar25 + 0x30);
  plVar6 = plVar19;
  (*pcVar21)(plVar19,1,lVar4);
  if ((int)plVar6 == 1) {
    lVar15 = (long)plVar19 + lVar15;
    (*pcVar21)(lVar15,1,lVar4);
    if ((int)lVar15 == 1) {
      func_0x000103f001f8(plVar19,0x11302d5c0,&UNK_10dca9900);
LAB_103ef31f8:
      plVar6 = plStack_1b0;
      lVar15 = lStack_1b8;
      iVar3 = *(int *)(lStack_1b8 + 0x18);
      lVar4 = (long)*(int *)(lStack_1c0 + 0x30);
      FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,plVar18,0x11302d5c0,&UNK_10dca9900);
      FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,(long)plVar18 + lVar4,0x11302d5c0,
                    &UNK_10dca9900);
      lVar7 = lStack_78;
      plVar19 = plVar18;
      (*pcVar21)(plVar18,1,lStack_78);
      if ((int)plVar19 == 1) {
        lVar4 = (long)plVar18 + lVar4;
        (*pcVar21)(lVar4,1,lVar7);
        if ((int)lVar4 != 1) {
LAB_103ef32ec:
          uVar12 = 0x11302d758;
          puVar13 = &UNK_10dca99a8;
          plVar19 = plVar18;
          goto LAB_103ef3ac4;
        }
        func_0x000103f001f8(plVar18,0x11302d5c0,&UNK_10dca9900);
      }
      else {
        FUN_103ef28b0(plVar18,uVar20,0x11302d5c0,&UNK_10dca9900);
        lVar8 = (long)plVar18 + lVar4;
        (*pcVar21)(lVar8,1,lVar7);
        lVar7 = lStack_1c8;
        if ((int)lVar8 == 1) {
          FUN_103efbacc(uVar20,FUN_103ef0be4);
          goto LAB_103ef32ec;
        }
        func_0x000103f00238((long)plVar18 + lVar4,lStack_1c8,FUN_103ef0be4);
        uVar17 = uVar20;
        FUN_103ef0c1c(uVar20,lVar7);
        FUN_103efbacc(lVar7,FUN_103ef0be4);
        FUN_103efbacc(uVar20,FUN_103ef0be4);
        func_0x000103f001f8(plVar18,0x11302d5c0,&UNK_10dca9900);
        if ((uVar17 & 1) == 0) {
          return 0;
        }
      }
      plVar19 = plStack_90;
      iVar3 = *(int *)(lVar15 + 0x1c);
      lVar4 = (long)(int)plStack_88[6];
      FUN_103ef28b0((long)plVar6 + (long)iVar3,plStack_90,0x11302d5c8,&UNK_10dca9908);
      plVar18 = aplStack_70[0];
      FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,(long)plVar19 + lVar4,0x11302d5c8,
                    &UNK_10dca9908);
      lVar7 = lStack_80;
      pcVar24 = (code *)plStack_98[6];
      plVar9 = plVar19;
      (*pcVar24)(plVar19,1,lStack_80);
      uVar17 = uStack_b0;
      if ((int)plVar9 == 1) {
        lVar4 = (long)plVar19 + lVar4;
        (*pcVar24)(lVar4,1,lVar7);
        if ((int)lVar4 != 1) {
LAB_103ef3458:
          uVar12 = 0x11302d750;
          puVar13 = &UNK_10dca99a0;
          goto LAB_103ef3ac4;
        }
        func_0x000103f001f8(plVar19,0x11302d5c8,&UNK_10dca9908);
      }
      else {
        FUN_103ef28b0(plVar19,uStack_b0,0x11302d5c8,&UNK_10dca9908);
        lVar8 = (long)plVar19 + lVar4;
        (*pcVar24)(lVar8,1,lVar7);
        lVar7 = lStack_c8;
        if ((int)lVar8 == 1) {
          FUN_103efbacc(uVar17,FUN_103ef1cdc);
          goto LAB_103ef3458;
        }
        func_0x000103f00238((long)plVar19 + lVar4,lStack_c8,FUN_103ef1cdc);
        uVar20 = uVar17;
        FUN_103ef1d1c(uVar17,lVar7);
        FUN_103efbacc(lVar7,FUN_103ef1cdc);
        FUN_103efbacc(uVar17,FUN_103ef1cdc);
        func_0x000103f001f8(plVar19,0x11302d5c8,&UNK_10dca9908);
        if ((uVar20 & 1) == 0) {
          return 0;
        }
      }
      plVar19 = plStack_c0;
      iVar3 = *(int *)(lVar15 + 0x20);
      lVar4 = (long)(int)plStack_a8[6];
      FUN_103ef28b0((long)plVar6 + (long)iVar3,plStack_c0,0x11302d5d0,&UNK_10dca9910);
      FUN_103ef28b0((long)plVar18 + (long)iVar3,(long)plVar19 + lVar4,0x11302d5d0,&UNK_10dca9910);
      lVar7 = lStack_a0;
      pcVar23 = *(code **)(lStack_b8 + 0x30);
      plVar9 = plVar19;
      (*pcVar23)(plVar19,1,lStack_a0);
      plVar18 = plStack_d0;
      if ((int)plVar9 == 1) {
        lVar4 = (long)plVar19 + lVar4;
        (*pcVar23)(lVar4,1,lVar7);
        if ((int)lVar4 == 1) {
          func_0x000103f001f8(plVar19,0x11302d5d0,&UNK_10dca9910);
LAB_103ef3620:
          plVar19 = plStack_e0;
          iVar3 = *(int *)(lVar15 + 0x24);
          lVar4 = (long)(int)plStack_a8[6];
          FUN_103ef28b0((long)plVar6 + (long)iVar3,plStack_e0,0x11302d5d0,&UNK_10dca9910);
          lVar7 = lStack_a0;
          FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,(long)plVar19 + lVar4,0x11302d5d0,
                        &UNK_10dca9910);
          plVar9 = plVar19;
          (*pcVar23)(plVar19,1,lVar7);
          plVar18 = plStack_e8;
          if ((int)plVar9 == 1) {
            lVar4 = (long)plVar19 + lVar4;
            (*pcVar23)(lVar4,1,lVar7);
            if ((int)lVar4 != 1) goto LAB_103ef3ab0;
            func_0x000103f001f8(plVar19,0x11302d5d0,&UNK_10dca9910);
          }
          else {
            FUN_103ef28b0(plVar19,plStack_e8,0x11302d5d0,&UNK_10dca9910);
            lVar8 = (long)plVar19 + lVar4;
            (*pcVar23)(lVar8,1,lVar7);
            plVar9 = plStack_d8;
            if ((int)lVar8 == 1) goto LAB_103ef3aac;
            func_0x000103f00238((long)plVar19 + lVar4,plStack_d8,FUN_103ef14a0);
            plVar10 = plVar18;
            FUN_103ef14dc(plVar18,plVar9);
            FUN_103efbacc(plVar9,FUN_103ef14a0);
            FUN_103efbacc(plVar18,FUN_103ef14a0);
            func_0x000103f001f8(plVar19,0x11302d5d0,&UNK_10dca9910);
            if (((ulong)plVar10 & 1) == 0) {
              return 0;
            }
          }
          plVar19 = plStack_f0;
          iVar3 = *(int *)(lVar15 + 0x28);
          lVar4 = (long)(int)plStack_a8[6];
          FUN_103ef28b0((long)plVar6 + (long)iVar3,plStack_f0,0x11302d5d0,&UNK_10dca9910);
          lVar7 = lStack_a0;
          FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,(long)plVar19 + lVar4,0x11302d5d0,
                        &UNK_10dca9910);
          plVar9 = plVar19;
          (*pcVar23)(plVar19,1,lVar7);
          plVar18 = plStack_f8;
          if ((int)plVar9 == 1) {
            lVar4 = (long)plVar19 + lVar4;
            (*pcVar23)(lVar4,1,lVar7);
            if ((int)lVar4 != 1) goto LAB_103ef3ab0;
            func_0x000103f001f8(plVar19,0x11302d5d0,&UNK_10dca9910);
          }
          else {
            FUN_103ef28b0(plVar19,plStack_f8,0x11302d5d0,&UNK_10dca9910);
            lVar8 = (long)plVar19 + lVar4;
            (*pcVar23)(lVar8,1,lVar7);
            plVar9 = plStack_d8;
            if ((int)lVar8 == 1) goto LAB_103ef3aac;
            func_0x000103f00238((long)plVar19 + lVar4,plStack_d8,FUN_103ef14a0);
            plVar10 = plVar18;
            FUN_103ef14dc(plVar18,plVar9);
            FUN_103efbacc(plVar9,FUN_103ef14a0);
            FUN_103efbacc(plVar18,FUN_103ef14a0);
            func_0x000103f001f8(plVar19,0x11302d5d0,&UNK_10dca9910);
            if (((ulong)plVar10 & 1) == 0) {
              return 0;
            }
          }
          plVar19 = plStack_100;
          iVar3 = *(int *)(lVar15 + 0x2c);
          lVar4 = (long)(int)plStack_a8[6];
          FUN_103ef28b0((long)plVar6 + (long)iVar3,plStack_100,0x11302d5d0,&UNK_10dca9910);
          lVar7 = lStack_a0;
          FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,(long)plVar19 + lVar4,0x11302d5d0,
                        &UNK_10dca9910);
          plVar9 = plVar19;
          (*pcVar23)(plVar19,1,lVar7);
          plVar18 = plStack_108;
          if ((int)plVar9 == 1) {
            lVar4 = (long)plVar19 + lVar4;
            (*pcVar23)(lVar4,1,lVar7);
            if ((int)lVar4 != 1) goto LAB_103ef3ab0;
            func_0x000103f001f8(plVar19,0x11302d5d0,&UNK_10dca9910);
          }
          else {
            FUN_103ef28b0(plVar19,plStack_108,0x11302d5d0,&UNK_10dca9910);
            lVar8 = (long)plVar19 + lVar4;
            (*pcVar23)(lVar8,1,lVar7);
            plVar9 = plStack_d8;
            if ((int)lVar8 == 1) goto LAB_103ef3aac;
            func_0x000103f00238((long)plVar19 + lVar4,plStack_d8,FUN_103ef14a0);
            plVar10 = plVar18;
            FUN_103ef14dc(plVar18,plVar9);
            FUN_103efbacc(plVar9,FUN_103ef14a0);
            FUN_103efbacc(plVar18,FUN_103ef14a0);
            func_0x000103f001f8(plVar19,0x11302d5d0,&UNK_10dca9910);
            if (((ulong)plVar10 & 1) == 0) {
              return 0;
            }
          }
          plVar19 = plStack_110;
          iVar3 = *(int *)(lVar15 + 0x30);
          lVar4 = (long)(int)plStack_a8[6];
          FUN_103ef28b0((long)plVar6 + (long)iVar3,plStack_110,0x11302d5d0,&UNK_10dca9910);
          lVar7 = lStack_a0;
          FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,(long)plVar19 + lVar4,0x11302d5d0,
                        &UNK_10dca9910);
          plVar9 = plVar19;
          (*pcVar23)(plVar19,1,lVar7);
          plVar18 = plStack_118;
          if ((int)plVar9 == 1) {
            lVar4 = (long)plVar19 + lVar4;
            (*pcVar23)(lVar4,1,lVar7);
            if ((int)lVar4 != 1) goto LAB_103ef3ab0;
            func_0x000103f001f8(plVar19,0x11302d5d0,&UNK_10dca9910);
          }
          else {
            FUN_103ef28b0(plVar19,plStack_118,0x11302d5d0,&UNK_10dca9910);
            lVar8 = (long)plVar19 + lVar4;
            (*pcVar23)(lVar8,1,lVar7);
            plVar9 = plStack_d8;
            if ((int)lVar8 == 1) goto LAB_103ef3aac;
            func_0x000103f00238((long)plVar19 + lVar4,plStack_d8,FUN_103ef14a0);
            plVar10 = plVar18;
            FUN_103ef14dc(plVar18,plVar9);
            FUN_103efbacc(plVar9,FUN_103ef14a0);
            FUN_103efbacc(plVar18,FUN_103ef14a0);
            func_0x000103f001f8(plVar19,0x11302d5d0,&UNK_10dca9910);
            if (((ulong)plVar10 & 1) == 0) {
              return 0;
            }
          }
          plVar19 = aplStack_70[0];
          puVar1 = (ulong *)((long)plVar6 + (long)*(int *)(lVar15 + 0x34));
          uVar17 = puVar1[1];
          puVar2 = (ulong *)((long)aplStack_70[0] + (long)*(int *)(lVar15 + 0x34));
          uVar20 = puVar2[1];
          if (uVar17 == 0) {
            if (uVar20 != 0) {
              return 0;
            }
          }
          else {
            if (uVar20 == 0) {
              return 0;
            }
            uVar22 = *puVar1;
            if (((uVar22 != *puVar2) || (uVar17 != uVar20)) &&
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar22 & 1) == 0)) {
              return 0;
            }
          }
          puVar1 = (ulong *)((long)plVar6 + (long)*(int *)(lVar15 + 0x38));
          uVar17 = puVar1[1];
          puVar2 = (ulong *)((long)plVar19 + (long)*(int *)(lVar15 + 0x38));
          uVar20 = puVar2[1];
          if (uVar17 == 0) {
            if (uVar20 != 0) {
              return 0;
            }
          }
          else {
            if (uVar20 == 0) {
              return 0;
            }
            uVar22 = *puVar1;
            if (((uVar22 != *puVar2) || (uVar17 != uVar20)) &&
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar22 & 1) == 0)) {
              return 0;
            }
          }
          lVar4 = lStack_120;
          if (*(long *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x3c)) !=
              *(long *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x3c))) {
            return 0;
          }
          if (*(long *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x40)) !=
              *(long *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x40))) {
            return 0;
          }
          if (*(long *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x44)) !=
              *(long *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x44))) {
            return 0;
          }
          iVar3 = *(int *)(lStack_1b8 + 0x48);
          lVar15 = (long)(int)plStack_88[6];
          FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,lStack_120,0x11302d5c8,&UNK_10dca9908);
          FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar4 + lVar15,0x11302d5c8,&UNK_10dca9908
                       );
          (*pcVar24)(lVar4,1,lStack_80);
          lVar7 = lStack_120;
          if ((int)lVar4 == 1) {
            lVar15 = lStack_120 + lVar15;
            (*pcVar24)(lVar15,1,lStack_80);
            if ((int)lVar15 != 1) goto LAB_103ef3d6c;
            func_0x000103f001f8(lStack_120,0x11302d5c8,&UNK_10dca9908);
LAB_103ef3df4:
            lVar7 = lStack_128;
            iVar3 = *(int *)(lStack_1b8 + 0x4c);
            lVar4 = (long)(int)plStack_88[6];
            FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,lStack_128,0x11302d5c8,&UNK_10dca9908);
            FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar7 + lVar4,0x11302d5c8,
                          &UNK_10dca9908);
            (*pcVar24)(lVar7,1,lStack_80);
            lVar15 = lStack_128;
            if ((int)lVar7 == 1) {
              lVar4 = lStack_128 + lVar4;
              (*pcVar24)(lVar4,1,lStack_80);
              if ((int)lVar4 == 1) {
                func_0x000103f001f8(lStack_128,0x11302d5c8,&UNK_10dca9908);
                goto LAB_103ef3f8c;
              }
LAB_103ef3f00:
              uVar12 = 0x11302d750;
              puVar13 = &UNK_10dca99a0;
              pplVar16 = (long **)&stack0xffffffffffffffd8;
            }
            else {
              FUN_103ef28b0(lStack_128,uStack_138,0x11302d5c8,&UNK_10dca9908);
              lVar15 = lVar15 + lVar4;
              (*pcVar24)(lVar15,1,lStack_80);
              lVar8 = lStack_c8;
              lVar7 = lStack_128;
              if ((int)lVar15 == 1) {
                FUN_103efbacc(uStack_138,FUN_103ef1cdc);
                goto LAB_103ef3f00;
              }
              func_0x000103f00238(lStack_128 + lVar4,lStack_c8,FUN_103ef1cdc);
              uVar17 = uStack_138;
              uVar20 = uStack_138;
              FUN_103ef1d1c(uStack_138,lVar8);
              FUN_103efbacc(lVar8,FUN_103ef1cdc);
              FUN_103efbacc(uVar17,FUN_103ef1cdc);
              func_0x000103f001f8(lVar7,0x11302d5c8,&UNK_10dca9908);
              if ((uVar20 & 1) == 0) {
                return 0;
              }
LAB_103ef3f8c:
              lVar4 = lStack_1a8;
              if (*(long *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x50)) !=
                  *(long *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x50))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x54)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x54))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x58)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x58))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x5c)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x5c))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x60)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x60))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 100)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 100))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x68)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x68))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x6c)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x6c))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x70)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x70))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x74)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x74))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x78)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x78))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x7c)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x7c))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x80)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x80))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x84)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x84))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x88)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x88))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x8c)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x8c))) {
                return 0;
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0x90)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0x90))) {
                return 0;
              }
              iVar3 = *(int *)(lStack_1b8 + 0x94);
              lVar15 = (long)(int)plStack_a8[6];
              FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,lStack_1a8,0x11302d5d0,&UNK_10dca9910);
              FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar4 + lVar15,0x11302d5d0,
                            &UNK_10dca9910);
              (*pcVar23)(lVar4,1,lStack_a0);
              lVar7 = lStack_1a8;
              if ((int)lVar4 == 1) {
                lVar15 = lStack_1a8 + lVar15;
                (*pcVar23)(lVar15,1,lStack_a0);
                if ((int)lVar15 != 1) {
LAB_103ef4340:
                  uVar12 = 0x11302d748;
                  puVar13 = &UNK_10dca9998;
                  pplVar16 = &plStack_a8;
                  goto LAB_103ef3f14;
                }
                func_0x000103f001f8(lStack_1a8,0x11302d5d0,&UNK_10dca9910);
              }
              else {
                FUN_103ef28b0(lStack_1a8,uStack_1a0,0x11302d5d0,&UNK_10dca9910);
                lVar7 = lVar7 + lVar15;
                (*pcVar23)(lVar7,1,lStack_a0);
                plVar19 = plStack_d8;
                lVar4 = lStack_1a8;
                if ((int)lVar7 == 1) {
                  FUN_103efbacc(uStack_1a0,FUN_103ef14a0);
                  goto LAB_103ef4340;
                }
                func_0x000103f00238(lStack_1a8 + lVar15,plStack_d8,FUN_103ef14a0);
                uVar17 = uStack_1a0;
                uVar20 = uStack_1a0;
                FUN_103ef14dc(uStack_1a0,plVar19);
                FUN_103efbacc(plVar19,FUN_103ef14a0);
                FUN_103efbacc(uVar17,FUN_103ef14a0);
                func_0x000103f001f8(lVar4,0x11302d5d0,&UNK_10dca9910);
                if ((uVar20 & 1) == 0) {
                  return 0;
                }
              }
              lVar7 = lStack_198;
              iVar3 = *(int *)(lStack_1b8 + 0x98);
              lVar4 = (long)(int)plStack_a8[6];
              FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,lStack_198,0x11302d5d0,&UNK_10dca9910);
              FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar7 + lVar4,0x11302d5d0,
                            &UNK_10dca9910);
              (*pcVar23)(lVar7,1,lStack_a0);
              lVar15 = lStack_198;
              if ((int)lVar7 == 1) {
                lVar4 = lStack_198 + lVar4;
                (*pcVar23)(lVar4,1,lStack_a0);
                if ((int)lVar4 != 1) {
LAB_103ef44d4:
                  uVar12 = 0x11302d748;
                  puVar13 = &UNK_10dca9998;
                  pplVar16 = &plStack_98;
                  goto LAB_103ef3f14;
                }
                func_0x000103f001f8(lStack_198,0x11302d5d0,&UNK_10dca9910);
              }
              else {
                FUN_103ef28b0(lStack_198,uStack_190,0x11302d5d0,&UNK_10dca9910);
                lVar15 = lVar15 + lVar4;
                (*pcVar23)(lVar15,1,lStack_a0);
                plVar19 = plStack_d8;
                lVar7 = lStack_198;
                if ((int)lVar15 == 1) {
                  FUN_103efbacc(uStack_190,FUN_103ef14a0);
                  goto LAB_103ef44d4;
                }
                func_0x000103f00238(lStack_198 + lVar4,plStack_d8,FUN_103ef14a0);
                uVar17 = uStack_190;
                uVar20 = uStack_190;
                FUN_103ef14dc(uStack_190,plVar19);
                FUN_103efbacc(plVar19,FUN_103ef14a0);
                FUN_103efbacc(uVar17,FUN_103ef14a0);
                func_0x000103f001f8(lVar7,0x11302d5d0,&UNK_10dca9910);
                if ((uVar20 & 1) == 0) {
                  return 0;
                }
              }
              lVar7 = lStack_188;
              iVar3 = *(int *)(lStack_1b8 + 0x9c);
              lVar4 = (long)(int)plStack_a8[6];
              FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,lStack_188,0x11302d5d0,&UNK_10dca9910);
              FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar7 + lVar4,0x11302d5d0,
                            &UNK_10dca9910);
              (*pcVar23)(lVar7,1,lStack_a0);
              lVar15 = lStack_188;
              if ((int)lVar7 == 1) {
                lVar4 = lStack_188 + lVar4;
                (*pcVar23)(lVar4,1,lStack_a0);
                if ((int)lVar4 != 1) {
LAB_103ef4668:
                  uVar12 = 0x11302d748;
                  puVar13 = &UNK_10dca9998;
                  pplVar16 = &plStack_88;
                  goto LAB_103ef3f14;
                }
                func_0x000103f001f8(lStack_188,0x11302d5d0,&UNK_10dca9910);
              }
              else {
                FUN_103ef28b0(lStack_188,uStack_178,0x11302d5d0,&UNK_10dca9910);
                lVar15 = lVar15 + lVar4;
                (*pcVar23)(lVar15,1,lStack_a0);
                plVar19 = plStack_d8;
                lVar7 = lStack_188;
                if ((int)lVar15 == 1) {
                  FUN_103efbacc(uStack_178,FUN_103ef14a0);
                  goto LAB_103ef4668;
                }
                func_0x000103f00238(lStack_188 + lVar4,plStack_d8,FUN_103ef14a0);
                uVar17 = uStack_178;
                uVar20 = uStack_178;
                FUN_103ef14dc(uStack_178,plVar19);
                FUN_103efbacc(plVar19,FUN_103ef14a0);
                FUN_103efbacc(uVar17,FUN_103ef14a0);
                func_0x000103f001f8(lVar7,0x11302d5d0,&UNK_10dca9910);
                if ((uVar20 & 1) == 0) {
                  return 0;
                }
              }
              lVar7 = lStack_170;
              iVar3 = *(int *)(lStack_1b8 + 0xa0);
              lVar4 = (long)(int)plStack_a8[6];
              FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,lStack_170,0x11302d5d0,&UNK_10dca9910);
              FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar7 + lVar4,0x11302d5d0,
                            &UNK_10dca9910);
              (*pcVar23)(lVar7,1,lStack_a0);
              lVar15 = lStack_170;
              if ((int)lVar7 == 1) {
                lVar4 = lStack_170 + lVar4;
                (*pcVar23)(lVar4,1,lStack_a0);
                if ((int)lVar4 != 1) {
LAB_103ef47fc:
                  uVar12 = 0x11302d748;
                  puVar13 = &UNK_10dca9998;
                  pplVar16 = aplStack_70;
                  goto LAB_103ef3f14;
                }
                func_0x000103f001f8(lStack_170,0x11302d5d0,&UNK_10dca9910);
              }
              else {
                FUN_103ef28b0(lStack_170,uStack_160,0x11302d5d0,&UNK_10dca9910);
                lVar15 = lVar15 + lVar4;
                (*pcVar23)(lVar15,1,lStack_a0);
                plVar19 = plStack_d8;
                lVar7 = lStack_170;
                if ((int)lVar15 == 1) {
                  FUN_103efbacc(uStack_160,FUN_103ef14a0);
                  goto LAB_103ef47fc;
                }
                func_0x000103f00238(lStack_170 + lVar4,plStack_d8,FUN_103ef14a0);
                uVar17 = uStack_160;
                uVar20 = uStack_160;
                FUN_103ef14dc(uStack_160,plVar19);
                FUN_103efbacc(plVar19,FUN_103ef14a0);
                FUN_103efbacc(uVar17,FUN_103ef14a0);
                func_0x000103f001f8(lVar7,0x11302d5d0,&UNK_10dca9910);
                if ((uVar20 & 1) == 0) {
                  return 0;
                }
              }
              if (*(long *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0xa4)) !=
                  *(long *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0xa4))) {
                return 0;
              }
              if (*(long *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0xa8)) !=
                  *(long *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0xa8))) {
                return 0;
              }
              puVar1 = (ulong *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0xac));
              uVar17 = puVar1[1];
              puVar2 = (ulong *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0xac));
              uVar20 = puVar2[1];
              if (uVar17 == 0) {
                if (uVar20 != 0) {
                  return 0;
                }
              }
              else {
                if (uVar20 == 0) {
                  return 0;
                }
                uVar22 = *puVar1;
                if (((uVar22 != *puVar2) || (uVar17 != uVar20)) &&
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar22 & 1) == 0)) {
                  return 0;
                }
              }
              lVar7 = alStack_210[1];
              iVar3 = *(int *)(lStack_1b8 + 0xb0);
              lVar4 = (long)*(int *)(lStack_1c0 + 0x30);
              FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,alStack_210[1],0x11302d5c0,
                            &UNK_10dca9900);
              FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar7 + lVar4,0x11302d5c0,
                            &UNK_10dca9900);
              (*pcVar21)(lVar7,1,lStack_78);
              lVar15 = alStack_210[1];
              if ((int)lVar7 == 1) {
                lVar4 = alStack_210[1] + lVar4;
                (*pcVar21)(lVar4,1,lStack_78);
                if ((int)lVar4 != 1) {
LAB_103ef4a40:
                  uVar12 = 0x11302d758;
                  puVar13 = &UNK_10dca99a8;
                  pplVar16 = &plStack_108;
                  goto LAB_103ef3f14;
                }
                func_0x000103f001f8(alStack_210[1],0x11302d5c0,&UNK_10dca9900);
              }
              else {
                FUN_103ef28b0(alStack_210[1],uStack_180,0x11302d5c0,&UNK_10dca9900);
                lVar15 = lVar15 + lVar4;
                (*pcVar21)(lVar15,1,lStack_78);
                lVar8 = lStack_1c8;
                lVar7 = alStack_210[1];
                if ((int)lVar15 == 1) {
                  FUN_103efbacc(uStack_180,FUN_103ef0be4);
                  goto LAB_103ef4a40;
                }
                func_0x000103f00238(alStack_210[1] + lVar4,lStack_1c8,FUN_103ef0be4);
                uVar17 = uStack_180;
                uVar20 = uStack_180;
                FUN_103ef0c1c(uStack_180,lVar8);
                FUN_103efbacc(lVar8,FUN_103ef0be4);
                FUN_103efbacc(uVar17,FUN_103ef0be4);
                func_0x000103f001f8(lVar7,0x11302d5c0,&UNK_10dca9900);
                if ((uVar20 & 1) == 0) {
                  return 0;
                }
              }
              lVar7 = alStack_210[2];
              iVar3 = *(int *)(lStack_1b8 + 0xb4);
              lVar4 = (long)*(int *)(lStack_1c0 + 0x30);
              FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,alStack_210[2],0x11302d5c0,
                            &UNK_10dca9900);
              FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar7 + lVar4,0x11302d5c0,
                            &UNK_10dca9900);
              (*pcVar21)(lVar7,1,lStack_78);
              lVar15 = alStack_210[2];
              if ((int)lVar7 == 1) {
                lVar4 = alStack_210[2] + lVar4;
                (*pcVar21)(lVar4,1,lStack_78);
                if ((int)lVar4 != 1) {
LAB_103ef4bdc:
                  uVar12 = 0x11302d758;
                  puVar13 = &UNK_10dca99a8;
                  pplVar16 = &plStack_100;
                  goto LAB_103ef3f14;
                }
                func_0x000103f001f8(alStack_210[2],0x11302d5c0,&UNK_10dca9900);
              }
              else {
                FUN_103ef28b0(alStack_210[2],uStack_168,0x11302d5c0,&UNK_10dca9900);
                lVar15 = lVar15 + lVar4;
                (*pcVar21)(lVar15,1,lStack_78);
                lVar8 = lStack_1c8;
                lVar7 = alStack_210[2];
                if ((int)lVar15 == 1) {
                  FUN_103efbacc(uStack_168,FUN_103ef0be4);
                  goto LAB_103ef4bdc;
                }
                func_0x000103f00238(alStack_210[2] + lVar4,lStack_1c8,FUN_103ef0be4);
                uVar17 = uStack_168;
                uVar20 = uStack_168;
                FUN_103ef0c1c(uStack_168,lVar8);
                FUN_103efbacc(lVar8,FUN_103ef0be4);
                FUN_103efbacc(uVar17,FUN_103ef0be4);
                func_0x000103f001f8(lVar7,0x11302d5c0,&UNK_10dca9900);
                if ((uVar20 & 1) == 0) {
                  return 0;
                }
              }
              puVar1 = (ulong *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0xb8));
              uVar17 = puVar1[1];
              puVar2 = (ulong *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0xb8));
              uVar20 = puVar2[1];
              if (uVar17 == 0) {
                if (uVar20 != 0) {
                  return 0;
                }
              }
              else {
                if (uVar20 == 0) {
                  return 0;
                }
                uVar22 = *puVar1;
                if (((uVar22 != *puVar2) || (uVar17 != uVar20)) &&
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar22 & 1) == 0)) {
                  return 0;
                }
              }
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0xbc)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0xbc))) {
                return 0;
              }
              uVar17 = *(ulong *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0xc0));
              lVar4 = *(long *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0xc0));
              if (uVar17 == 0) {
                if (lVar4 != 0) {
                  return 0;
                }
              }
              else {
                if (lVar4 == 0) {
                  return 0;
                }
                func_0x0001044c8618(0);
                _objc_retain(lVar4);
                _objc_retain();
                uVar20 = uVar17;
                __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
                _objc_release(uVar17);
                _objc_release(lVar4);
                if ((uVar20 & 1) == 0) {
                  return 0;
                }
              }
              puVar1 = (ulong *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 0xc4));
              uVar17 = puVar1[1];
              puVar2 = (ulong *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 0xc4));
              uVar20 = puVar2[1];
              if (uVar17 == 0) {
                if (uVar20 != 0) {
                  return 0;
                }
              }
              else {
                if (uVar20 == 0) {
                  return 0;
                }
                uVar22 = *puVar1;
                if (((uVar22 != *puVar2) || (uVar17 != uVar20)) &&
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar22 & 1) == 0)) {
                  return 0;
                }
              }
              lVar4 = alStack_210[3];
              if (*(int *)((long)plStack_1b0 + (long)*(int *)(lStack_1b8 + 200)) !=
                  *(int *)((long)aplStack_70[0] + (long)*(int *)(lStack_1b8 + 200))) {
                return 0;
              }
              iVar3 = *(int *)(lStack_1b8 + 0xcc);
              lVar15 = (long)*(int *)(lStack_1c0 + 0x30);
              FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,alStack_210[3],0x11302d5c0,
                            &UNK_10dca9900);
              FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar4 + lVar15,0x11302d5c0,
                            &UNK_10dca9900);
              (*pcVar21)(lVar4,1,lStack_78);
              lVar7 = alStack_210[3];
              if ((int)lVar4 == 1) {
                lVar15 = alStack_210[3] + lVar15;
                (*pcVar21)(lVar15,1,lStack_78);
                if ((int)lVar15 == 1) {
                  func_0x000103f001f8(alStack_210[3],0x11302d5c0,&UNK_10dca9900);
LAB_103ef4f84:
                  lVar7 = lStack_1f0;
                  iVar3 = *(int *)(lStack_1b8 + 0xd0);
                  lVar4 = (long)*(int *)(lStack_1c0 + 0x30);
                  FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,lStack_1f0,0x11302d5c0,
                                &UNK_10dca9900);
                  FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar7 + lVar4,0x11302d5c0,
                                &UNK_10dca9900);
                  (*pcVar21)(lVar7,1,lStack_78);
                  lVar15 = lStack_1f0;
                  if ((int)lVar7 == 1) {
                    lVar4 = lStack_1f0 + lVar4;
                    (*pcVar21)(lVar4,1,lStack_78);
                    if ((int)lVar4 != 1) {
LAB_103ef5094:
                      uVar12 = 0x11302d758;
                      puVar13 = &UNK_10dca99a8;
                      pplVar16 = &plStack_f0;
                      goto LAB_103ef3f14;
                    }
                    func_0x000103f001f8(lStack_1f0,0x11302d5c0,&UNK_10dca9900);
                  }
                  else {
                    FUN_103ef28b0(lStack_1f0,uStack_150,0x11302d5c0,&UNK_10dca9900);
                    lVar15 = lVar15 + lVar4;
                    (*pcVar21)(lVar15,1,lStack_78);
                    lVar8 = lStack_1c8;
                    lVar7 = lStack_1f0;
                    if ((int)lVar15 == 1) {
                      FUN_103efbacc(uStack_150,FUN_103ef0be4);
                      goto LAB_103ef5094;
                    }
                    func_0x000103f00238(lStack_1f0 + lVar4,lStack_1c8,FUN_103ef0be4);
                    uVar17 = uStack_150;
                    uVar20 = uStack_150;
                    FUN_103ef0c1c(uStack_150,lVar8);
                    FUN_103efbacc(lVar8,FUN_103ef0be4);
                    FUN_103efbacc(uVar17,FUN_103ef0be4);
                    func_0x000103f001f8(lVar7,0x11302d5c0,&UNK_10dca9900);
                    if ((uVar20 & 1) == 0) {
                      return 0;
                    }
                  }
                  lVar7 = lStack_1e8;
                  iVar3 = *(int *)(lStack_1b8 + 0xd4);
                  lVar4 = (long)*(int *)(lStack_1c0 + 0x30);
                  FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,lStack_1e8,0x11302d5c0,
                                &UNK_10dca9900);
                  FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar7 + lVar4,0x11302d5c0,
                                &UNK_10dca9900);
                  (*pcVar21)(lVar7,1,lStack_78);
                  lVar15 = lStack_1e8;
                  if ((int)lVar7 == 1) {
                    lVar4 = lStack_1e8 + lVar4;
                    (*pcVar21)(lVar4,1,lStack_78);
                    if ((int)lVar4 != 1) {
LAB_103ef5230:
                      uVar12 = 0x11302d758;
                      puVar13 = &UNK_10dca99a8;
                      pplVar16 = &plStack_e8;
                      goto LAB_103ef3f14;
                    }
                    func_0x000103f001f8(lStack_1e8,0x11302d5c0,&UNK_10dca9900);
                  }
                  else {
                    FUN_103ef28b0(lStack_1e8,uStack_1e0,0x11302d5c0,&UNK_10dca9900);
                    lVar15 = lVar15 + lVar4;
                    (*pcVar21)(lVar15,1,lStack_78);
                    lVar7 = lStack_1c8;
                    if ((int)lVar15 == 1) {
                      FUN_103efbacc(uStack_1e0,FUN_103ef0be4);
                      goto LAB_103ef5230;
                    }
                    func_0x000103f00238(lStack_1e8 + lVar4,lStack_1c8,FUN_103ef0be4);
                    uVar17 = uStack_1e0;
                    uVar20 = uStack_1e0;
                    FUN_103ef0c1c(uStack_1e0,lVar7);
                    FUN_103efbacc(lVar7,FUN_103ef0be4);
                    FUN_103efbacc(uVar17,FUN_103ef0be4);
                    func_0x000103f001f8(lStack_1e8,0x11302d5c0,&UNK_10dca9900);
                    if ((uVar20 & 1) == 0) {
                      return 0;
                    }
                  }
                  lVar7 = lStack_1d8;
                  iVar3 = *(int *)(lStack_1b8 + 0xd8);
                  lVar4 = (long)*(int *)(lStack_1c0 + 0x30);
                  FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,lStack_1d8,0x11302d5c0,
                                &UNK_10dca9900);
                  FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar7 + lVar4,0x11302d5c0,
                                &UNK_10dca9900);
                  (*pcVar21)(lVar7,1,lStack_78);
                  lVar15 = lStack_1d8;
                  if ((int)lVar7 == 1) {
                    lVar4 = lStack_1d8 + lVar4;
                    (*pcVar21)(lVar4,1,lStack_78);
                    if ((int)lVar4 != 1) {
LAB_103ef53cc:
                      uVar12 = 0x11302d758;
                      puVar13 = &UNK_10dca99a8;
                      pplVar16 = &plStack_d8;
                      goto LAB_103ef3f14;
                    }
                    func_0x000103f001f8(lStack_1d8,0x11302d5c0,&UNK_10dca9900);
                  }
                  else {
                    FUN_103ef28b0(lStack_1d8,uStack_148,0x11302d5c0,&UNK_10dca9900);
                    lVar15 = lVar15 + lVar4;
                    (*pcVar21)(lVar15,1,lStack_78);
                    lVar7 = lStack_1c8;
                    if ((int)lVar15 == 1) {
                      FUN_103efbacc(uStack_148,FUN_103ef0be4);
                      goto LAB_103ef53cc;
                    }
                    func_0x000103f00238(lStack_1d8 + lVar4,lStack_1c8,FUN_103ef0be4);
                    uVar17 = uStack_148;
                    uVar20 = uStack_148;
                    FUN_103ef0c1c(uStack_148,lVar7);
                    FUN_103efbacc(lVar7,FUN_103ef0be4);
                    FUN_103efbacc(uVar17,FUN_103ef0be4);
                    func_0x000103f001f8(lStack_1d8,0x11302d5c0,&UNK_10dca9900);
                    if ((uVar20 & 1) == 0) {
                      return 0;
                    }
                  }
                  lVar7 = lStack_1d0;
                  iVar3 = *(int *)(lStack_1b8 + 0xdc);
                  lVar4 = (long)*(int *)(lStack_1c0 + 0x30);
                  FUN_103ef28b0((long)plStack_1b0 + (long)iVar3,lStack_1d0,0x11302d5c0,
                                &UNK_10dca9900);
                  FUN_103ef28b0((long)aplStack_70[0] + (long)iVar3,lVar7 + lVar4,0x11302d5c0,
                                &UNK_10dca9900);
                  (*pcVar21)(lVar7,1,lStack_78);
                  lVar15 = lStack_1d0;
                  if ((int)lVar7 == 1) {
                    lVar4 = lStack_1d0 + lVar4;
                    (*pcVar21)(lVar4,1,lStack_78);
                    if ((int)lVar4 == 1) {
                      func_0x000103f001f8(lStack_1d0,0x11302d5c0,&UNK_10dca9900);
                      return 1;
                    }
                  }
                  else {
                    FUN_103ef28b0(lStack_1d0,uStack_140,0x11302d5c0,&UNK_10dca9900);
                    lVar15 = lVar15 + lVar4;
                    (*pcVar21)(lVar15,1,lStack_78);
                    lVar7 = lStack_1c8;
                    if ((int)lVar15 != 1) {
                      func_0x000103f00238(lStack_1d0 + lVar4,lStack_1c8,FUN_103ef0be4);
                      uVar17 = uStack_140;
                      uVar20 = uStack_140;
                      FUN_103ef0c1c(uStack_140,lVar7);
                      FUN_103efbacc(lVar7,FUN_103ef0be4);
                      FUN_103efbacc(uVar17,FUN_103ef0be4);
                      func_0x000103f001f8(lStack_1d0,0x11302d5c0,&UNK_10dca9900);
                      if ((uVar20 & 1) == 0) {
                        return 0;
                      }
                      return 1;
                    }
                    FUN_103efbacc(uStack_140,FUN_103ef0be4);
                  }
                  uVar12 = 0x11302d758;
                  puVar13 = &UNK_10dca99a8;
                  pplVar16 = &plStack_d0;
                  goto LAB_103ef3f14;
                }
              }
              else {
                FUN_103ef28b0(alStack_210[3],uStack_158,0x11302d5c0,&UNK_10dca9900);
                lVar7 = lVar7 + lVar15;
                (*pcVar21)(lVar7,1,lStack_78);
                lVar8 = lStack_1c8;
                lVar4 = alStack_210[3];
                if ((int)lVar7 != 1) {
                  func_0x000103f00238(alStack_210[3] + lVar15,lStack_1c8,FUN_103ef0be4);
                  uVar17 = uStack_158;
                  uVar20 = uStack_158;
                  FUN_103ef0c1c(uStack_158,lVar8);
                  FUN_103efbacc(lVar8,FUN_103ef0be4);
                  FUN_103efbacc(uVar17,FUN_103ef0be4);
                  func_0x000103f001f8(lVar4,0x11302d5c0,&UNK_10dca9900);
                  if ((uVar20 & 1) == 0) {
                    return 0;
                  }
                  goto LAB_103ef4f84;
                }
                FUN_103efbacc(uStack_158,FUN_103ef0be4);
              }
              uVar12 = 0x11302d758;
              puVar13 = &UNK_10dca99a8;
              pplVar16 = &plStack_f8;
            }
          }
          else {
            FUN_103ef28b0(lStack_120,uStack_130,0x11302d5c8,&UNK_10dca9908);
            lVar7 = lVar7 + lVar15;
            (*pcVar24)(lVar7,1,lStack_80);
            lVar8 = lStack_c8;
            lVar4 = lStack_120;
            if ((int)lVar7 != 1) {
              func_0x000103f00238(lStack_120 + lVar15,lStack_c8,FUN_103ef1cdc);
              uVar17 = uStack_130;
              uVar20 = uStack_130;
              FUN_103ef1d1c(uStack_130,lVar8);
              FUN_103efbacc(lVar8,FUN_103ef1cdc);
              FUN_103efbacc(uVar17,FUN_103ef1cdc);
              func_0x000103f001f8(lVar4,0x11302d5c8,&UNK_10dca9908);
              if ((uVar20 & 1) == 0) {
                return 0;
              }
              goto LAB_103ef3df4;
            }
            FUN_103efbacc(uStack_130,FUN_103ef1cdc);
LAB_103ef3d6c:
            uVar12 = 0x11302d750;
            puVar13 = &UNK_10dca99a0;
            pplVar16 = (long **)&stack0xffffffffffffffe0;
          }
LAB_103ef3f14:
          plVar19 = pplVar16[-0x20];
          goto LAB_103ef3ac4;
        }
      }
      else {
        FUN_103ef28b0(plVar19,plStack_d0,0x11302d5d0,&UNK_10dca9910);
        lVar8 = (long)plVar19 + lVar4;
        (*pcVar23)(lVar8,1,lVar7);
        plVar9 = plStack_d8;
        if ((int)lVar8 != 1) {
          func_0x000103f00238((long)plVar19 + lVar4,plStack_d8,FUN_103ef14a0);
          plVar10 = plVar18;
          FUN_103ef14dc(plVar18,plVar9);
          FUN_103efbacc(plVar9,FUN_103ef14a0);
          FUN_103efbacc(plVar18,FUN_103ef14a0);
          func_0x000103f001f8(plVar19,0x11302d5d0,&UNK_10dca9910);
          if (((ulong)plVar10 & 1) == 0) {
            return 0;
          }
          goto LAB_103ef3620;
        }
LAB_103ef3aac:
        FUN_103efbacc(plVar18,FUN_103ef14a0);
      }
LAB_103ef3ab0:
      uVar12 = 0x11302d748;
      puVar13 = &UNK_10dca9998;
      goto LAB_103ef3ac4;
    }
  }
  else {
    FUN_103ef28b0(plVar19,uVar22,0x11302d5c0,&UNK_10dca9900);
    lVar7 = (long)plVar19 + lVar15;
    (*pcVar21)(lVar7,1,lVar4);
    lVar4 = lStack_1c8;
    if ((int)lVar7 != 1) {
      func_0x000103f00238((long)plVar19 + lVar15,lStack_1c8,FUN_103ef0be4);
      uVar17 = uVar22;
      FUN_103ef0c1c(uVar22,lVar4);
      FUN_103efbacc(lVar4,FUN_103ef0be4);
      FUN_103efbacc(uVar22,FUN_103ef0be4);
      func_0x000103f001f8(plVar19,0x11302d5c0,&UNK_10dca9900);
      if ((uVar17 & 1) == 0) {
        return 0;
      }
      goto LAB_103ef31f8;
    }
    FUN_103efbacc(uVar22,FUN_103ef0be4);
  }
  uVar12 = 0x11302d758;
  puVar13 = &UNK_10dca99a8;
LAB_103ef3ac4:
  func_0x000103f001f8(plVar19,uVar12,puVar13);
  return 0;
}



/* Entry: 103efbacc; end: 103efbb07;  */

undefined8 FUN_103efbacc(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103efbb08; end: 103f00027;  */

undefined8 * FUN_103efbb08(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  code *pcVar23;
  undefined8 uVar24;
  
  *param_1 = *param_2;
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  lVar8 = 0;
  FUN_103ef0be4();
  lVar14 = *(long *)(lVar8 + -8);
  pcVar18 = *(code **)(lVar14 + 0x30);
  puVar9 = puVar2;
  (*pcVar18)(puVar2,1,lVar8);
  if ((int)puVar9 == 0) {
    *puVar1 = *puVar2;
    iVar7 = *(int *)(lVar8 + 0x14);
    lVar10 = 0;
    __s10Foundation4DateVMa();
    lVar15 = *(long *)(lVar10 + -8);
    puVar9 = puVar2 + iVar7;
    (**(code **)(lVar15 + 0x30))(puVar9,1,lVar10);
    if ((int)puVar9 == 0) {
      (**(code **)(lVar15 + 0x20))(puVar1 + iVar7,puVar2 + iVar7,lVar10);
      (**(code **)(lVar15 + 0x38))(puVar1 + iVar7,0,1,lVar10);
    }
    else {
      lVar10 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy(puVar1 + iVar7,puVar2 + iVar7,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    (**(code **)(lVar14 + 0x38))(puVar1,0,1,lVar8);
  }
  else {
    lVar10 = 0x11302d5c0;
    func_0x0001000285a8(0x11302d5c0,&UNK_10dca9900);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  }
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  puVar9 = puVar2;
  (*pcVar18)(puVar2,1,lVar8);
  if ((int)puVar9 == 0) {
    *puVar1 = *puVar2;
    iVar7 = *(int *)(lVar8 + 0x14);
    lVar10 = 0;
    __s10Foundation4DateVMa();
    lVar15 = *(long *)(lVar10 + -8);
    puVar9 = puVar2 + iVar7;
    (**(code **)(lVar15 + 0x30))(puVar9,1,lVar10);
    if ((int)puVar9 == 0) {
      (**(code **)(lVar15 + 0x20))(puVar1 + iVar7,puVar2 + iVar7,lVar10);
      (**(code **)(lVar15 + 0x38))(puVar1 + iVar7,0,1,lVar10);
    }
    else {
      lVar10 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy(puVar1 + iVar7,puVar2 + iVar7,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    (**(code **)(lVar14 + 0x38))(puVar1,0,1,lVar8);
  }
  else {
    lVar10 = 0x11302d5c0;
    func_0x0001000285a8(0x11302d5c0,&UNK_10dca9900);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  lVar10 = 0;
  FUN_103ef1cdc();
  lVar15 = *(long *)(lVar10 + -8);
  pcVar16 = *(code **)(lVar15 + 0x30);
  puVar11 = puVar4;
  (*pcVar16)(puVar4,1,lVar10);
  if ((int)puVar11 == 0) {
    *puVar3 = *puVar4;
    lVar22 = (long)*(int *)(lVar10 + 0x14);
    lVar17 = 0;
    __s10Foundation4DateVMa();
    lVar20 = *(long *)(lVar17 + -8);
    lVar12 = (long)puVar4 + lVar22;
    (**(code **)(lVar20 + 0x30))(lVar12,1,lVar17);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar20 + 0x20))((long)puVar3 + lVar22,(long)puVar4 + lVar22,lVar17);
      (**(code **)(lVar20 + 0x38))((long)puVar3 + lVar22,0,1,lVar17);
    }
    else {
      lVar12 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)puVar3 + lVar22,(long)puVar4 + lVar22,
              *(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    (**(code **)(lVar15 + 0x38))(puVar3,0,1,lVar10);
  }
  else {
    lVar12 = 0x11302d5c8;
    func_0x0001000285a8(0x11302d5c8,&UNK_10dca9908);
    _memcpy(puVar3,puVar4,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  }
  puVar5 = (undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar6 = (undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  lVar12 = 0;
  FUN_103ef14a0();
  lVar17 = *(long *)(lVar12 + -8);
  pcVar23 = *(code **)(lVar17 + 0x30);
  puVar13 = puVar6;
  (*pcVar23)(puVar6,1,lVar12);
  if ((int)puVar13 == 0) {
    *puVar5 = *puVar6;
    lVar19 = (long)*(int *)(lVar12 + 0x14);
    lVar22 = 0;
    __s10Foundation4DateVMa();
    lVar21 = *(long *)(lVar22 + -8);
    lVar20 = (long)puVar6 + lVar19;
    (**(code **)(lVar21 + 0x30))(lVar20,1,lVar22);
    if ((int)lVar20 == 0) {
      (**(code **)(lVar21 + 0x20))((long)puVar5 + lVar19,(long)puVar6 + lVar19,lVar22);
      (**(code **)(lVar21 + 0x38))((long)puVar5 + lVar19,0,1,lVar22);
    }
    else {
      lVar20 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)puVar5 + lVar19,(long)puVar6 + lVar19,
              *(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
    }
    (**(code **)(lVar17 + 0x38))(puVar5,0,1,lVar12);
  }
  else {
    lVar20 = 0x11302d5d0;
    func_0x0001000285a8(0x11302d5d0,&UNK_10dca9910);
    _memcpy(puVar5,puVar6,*(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
  }
  puVar5 = (undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar6 = (undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  puVar13 = puVar6;
  (*pcVar23)(puVar6,1,lVar12);
  if ((int)puVar13 == 0) {
    *puVar5 = *puVar6;
    lVar19 = (long)*(int *)(lVar12 + 0x14);
    lVar22 = 0;
    __s10Foundation4DateVMa();
    lVar21 = *(long *)(lVar22 + -8);
    lVar20 = (long)puVar6 + lVar19;
    (**(code **)(lVar21 + 0x30))(lVar20,1,lVar22);
    if ((int)lVar20 == 0) {
      (**(code **)(lVar21 + 0x20))((long)puVar5 + lVar19,(long)puVar6 + lVar19,lVar22);
      (**(code **)(lVar21 + 0x38))((long)puVar5 + lVar19,0,1,lVar22);
    }
    else {
      lVar20 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)puVar5 + lVar19,(long)puVar6 + lVar19,
              *(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
    }
    (**(code **)(lVar17 + 0x38))(puVar5,0,1,lVar12);
  }
  else {
    lVar20 = 0x11302d5d0;
    func_0x0001000285a8(0x11302d5d0,&UNK_10dca9910);
    _memcpy(puVar5,puVar6,*(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
  }
  puVar5 = (undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar6 = (undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  puVar13 = puVar6;
  (*pcVar23)(puVar6,1,lVar12);
  if ((int)puVar13 == 0) {
    *puVar5 = *puVar6;
    lVar19 = (long)*(int *)(lVar12 + 0x14);
    lVar22 = 0;
    __s10Foundation4DateVMa();
    lVar21 = *(long *)(lVar22 + -8);
    lVar20 = (long)puVar6 + lVar19;
    (**(code **)(lVar21 + 0x30))(lVar20,1,lVar22);
    if ((int)lVar20 == 0) {
      (**(code **)(lVar21 + 0x20))((long)puVar5 + lVar19,(long)puVar6 + lVar19,lVar22);
      (**(code **)(lVar21 + 0x38))((long)puVar5 + lVar19,0,1,lVar22);
    }
    else {
      lVar20 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)puVar5 + lVar19,(long)puVar6 + lVar19,
              *(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
    }
    (**(code **)(lVar17 + 0x38))(puVar5,0,1,lVar12);
  }
  else {
    lVar20 = 0x11302d5d0;
    func_0x0001000285a8(0x11302d5d0,&UNK_10dca9910);
    _memcpy(puVar5,puVar6,*(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
  }
  puVar5 = (undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar6 = (undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  puVar13 = puVar6;
  (*pcVar23)(puVar6,1,lVar12);
  if ((int)puVar13 == 0) {
    *puVar5 = *puVar6;
    lVar19 = (long)*(int *)(lVar12 + 0x14);
    lVar22 = 0;
    __s10Foundation4DateVMa();
    lVar21 = *(long *)(lVar22 + -8);
    lVar20 = (long)puVar6 + lVar19;
    (**(code **)(lVar21 + 0x30))(lVar20,1,lVar22);
    if ((int)lVar20 == 0) {
      (**(code **)(lVar21 + 0x20))((long)puVar5 + lVar19,(long)puVar6 + lVar19,lVar22);
      (**(code **)(lVar21 + 0x38))((long)puVar5 + lVar19,0,1,lVar22);
    }
    else {
      lVar20 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)puVar5 + lVar19,(long)puVar6 + lVar19,
              *(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
    }
    (**(code **)(lVar17 + 0x38))(puVar5,0,1,lVar12);
  }
  else {
    lVar20 = 0x11302d5d0;
    func_0x0001000285a8(0x11302d5d0,&UNK_10dca9910);
    _memcpy(puVar5,puVar6,*(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
  }
  puVar5 = (undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar6 = (undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  puVar13 = puVar6;
  (*pcVar23)(puVar6,1,lVar12);
  if ((int)puVar13 == 0) {
    *puVar5 = *puVar6;
    lVar19 = (long)*(int *)(lVar12 + 0x14);
    lVar22 = 0;
    __s10Foundation4DateVMa();
    lVar21 = *(long *)(lVar22 + -8);
    lVar20 = (long)puVar6 + lVar19;
    (**(code **)(lVar21 + 0x30))(lVar20,1,lVar22);
    if ((int)lVar20 == 0) {
      (**(code **)(lVar21 + 0x20))((long)puVar5 + lVar19,(long)puVar6 + lVar19,lVar22);
      (**(code **)(lVar21 + 0x38))((long)puVar5 + lVar19,0,1,lVar22);
    }
    else {
      lVar20 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)puVar5 + lVar19,(long)puVar6 + lVar19,
              *(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
    }
    (**(code **)(lVar17 + 0x38))(puVar5,0,1,lVar12);
  }
  else {
    lVar20 = 0x11302d5d0;
    func_0x0001000285a8(0x11302d5d0,&UNK_10dca9910);
    _memcpy(puVar5,puVar6,*(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
  }
  iVar7 = *(int *)(param_3 + 0x38);
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar24 = *puVar3;
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar24;
  puVar3 = (undefined8 *)((long)param_2 + (long)iVar7);
  uVar24 = *puVar3;
  puVar4 = (undefined8 *)((long)param_1 + (long)iVar7);
  puVar4[1] = puVar3[1];
  *puVar4 = uVar24;
  iVar7 = *(int *)(param_3 + 0x40);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *(undefined8 *)((long)param_1 + (long)iVar7) = *(undefined8 *)((long)param_2 + (long)iVar7);
  iVar7 = *(int *)(param_3 + 0x48);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar7);
  puVar4 = (undefined8 *)((long)param_2 + (long)iVar7);
  puVar11 = puVar4;
  (*pcVar16)(puVar4,1,lVar10);
  if ((int)puVar11 == 0) {
    *puVar3 = *puVar4;
    lVar19 = (long)*(int *)(lVar10 + 0x14);
    lVar22 = 0;
    __s10Foundation4DateVMa();
    lVar21 = *(long *)(lVar22 + -8);
    lVar20 = (long)puVar4 + lVar19;
    (**(code **)(lVar21 + 0x30))(lVar20,1,lVar22);
    if ((int)lVar20 == 0) {
      (**(code **)(lVar21 + 0x20))((long)puVar3 + lVar19,(long)puVar4 + lVar19,lVar22);
      (**(code **)(lVar21 + 0x38))((long)puVar3 + lVar19,0,1,lVar22);
    }
    else {
      lVar20 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)puVar3 + lVar19,(long)puVar4 + lVar19,
              *(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
    }
    (**(code **)(lVar15 + 0x38))(puVar3,0,1,lVar10);
  }
  else {
    lVar20 = 0x11302d5c8;
    func_0x0001000285a8(0x11302d5c8,&UNK_10dca9908);
    _memcpy(puVar3,puVar4,*(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  puVar11 = puVar4;
  (*pcVar16)(puVar4,1,lVar10);
  if ((int)puVar11 == 0) {
    *puVar3 = *puVar4;
    lVar19 = (long)*(int *)(lVar10 + 0x14);
    lVar22 = 0;
    __s10Foundation4DateVMa();
    lVar21 = *(long *)(lVar22 + -8);
    lVar20 = (long)puVar4 + lVar19;
    (**(code **)(lVar21 + 0x30))(lVar20,1,lVar22);
    if ((int)lVar20 == 0) {
      (**(code **)(lVar21 + 0x20))((long)puVar3 + lVar19,(long)puVar4 + lVar19,lVar22);
      (**(code **)(lVar21 + 0x38))((long)puVar3 + lVar19,0,1,lVar22);
    }
    else {
      lVar20 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)puVar3 + lVar19,(long)puVar4 + lVar19,
              *(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
    }
    (**(code **)(lVar15 + 0x38))(puVar3,0,1,lVar10);
  }
  else {
    lVar10 = 0x11302d5c8;
    func_0x0001000285a8(0x11302d5c8,&UNK_10dca9908);
    _memcpy(puVar3,puVar4,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  }
  iVar7 = *(int *)(param_3 + 0x54);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x50)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x50));
  *(undefined4 *)((long)param_1 + (long)iVar7) = *(undefined4 *)((long)param_2 + (long)iVar7);
  iVar7 = *(int *)(param_3 + 0x5c);
  *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x58)) =
       *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x58));
  *(undefined4 *)((long)param_1 + (long)iVar7) = *(undefined4 *)((long)param_2 + (long)iVar7);
  iVar7 = *(int *)(param_3 + 100);
  *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x60)) =
       *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x60));
  *(undefined4 *)((long)param_1 + (long)iVar7) = *(undefined4 *)((long)param_2 + (long)iVar7);
  iVar7 = *(int *)(param_3 + 0x6c);
  *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x68)) =
       *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x68));
  *(undefined4 *)((long)param_1 + (long)iVar7) = *(undefined4 *)((long)param_2 + (long)iVar7);
  iVar7 = *(int *)(param_3 + 0x74);
  *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x70)) =
       *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x70));
  *(undefined4 *)((long)param_1 + (long)iVar7) = *(undefined4 *)((long)param_2 + (long)iVar7);
  iVar7 = *(int *)(param_3 + 0x7c);
  *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x78)) =
       *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x78));
  *(undefined4 *)((long)param_1 + (long)iVar7) = *(undefined4 *)((long)param_2 + (long)iVar7);
  iVar7 = *(int *)(param_3 + 0x84);
  *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x80)) =
       *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x80));
  *(undefined4 *)((long)param_1 + (long)iVar7) = *(undefined4 *)((long)param_2 + (long)iVar7);
  iVar7 = *(int *)(param_3 + 0x8c);
  *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x88)) =
       *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x88));
  *(undefined4 *)((long)param_1 + (long)iVar7) = *(undefined4 *)((long)param_2 + (long)iVar7);
  iVar7 = *(int *)(param_3 + 0x94);
  *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x90)) =
       *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x90));
  puVar5 = (undefined4 *)((long)param_1 + (long)iVar7);
  puVar6 = (undefined4 *)((long)param_2 + (long)iVar7);
  puVar13 = puVar6;
  (*pcVar23)(puVar6,1,lVar12);
  if ((int)puVar13 == 0) {
    *puVar5 = *puVar6;
    lVar20 = (long)*(int *)(lVar12 + 0x14);
    lVar15 = 0;
    __s10Foundation4DateVMa();
    lVar22 = *(long *)(lVar15 + -8);
    lVar10 = (long)puVar6 + lVar20;
    (**(code **)(lVar22 + 0x30))(lVar10,1,lVar15);
    if ((int)lVar10 == 0) {
      (**(code **)(lVar22 + 0x20))((long)puVar5 + lVar20,(long)puVar6 + lVar20,lVar15);
      (**(code **)(lVar22 + 0x38))((long)puVar5 + lVar20,0,1,lVar15);
    }
    else {
      lVar10 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)puVar5 + lVar20,(long)puVar6 + lVar20,
              *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    (**(code **)(lVar17 + 0x38))(puVar5,0,1,lVar12);
  }
  else {
    lVar10 = 0x11302d5d0;
    func_0x0001000285a8(0x11302d5d0,&UNK_10dca9910);
    _memcpy(puVar5,puVar6,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  }
  puVar5 = (undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x98));
  puVar6 = (undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x98));
  puVar13 = puVar6;
  (*pcVar23)(puVar6,1,lVar12);
  if ((int)puVar13 == 0) {
    *puVar5 = *puVar6;
    lVar20 = (long)*(int *)(lVar12 + 0x14);
    lVar15 = 0;
    __s10Foundation4DateVMa();
    lVar22 = *(long *)(lVar15 + -8);
    lVar10 = (long)puVar6 + lVar20;
    (**(code **)(lVar22 + 0x30))(lVar10,1,lVar15);
    if ((int)lVar10 == 0) {
      (**(code **)(lVar22 + 0x20))((long)puVar5 + lVar20,(long)puVar6 + lVar20,lVar15);
      (**(code **)(lVar22 + 0x38))((long)puVar5 + lVar20,0,1,lVar15);
    }
    else {
      lVar10 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)puVar5 + lVar20,(long)puVar6 + lVar20,
              *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    (**(code **)(lVar17 + 0x38))(puVar5,0,1,lVar12);
  }
  else {
    lVar10 = 0x11302d5d0;
    func_0x0001000285a8(0x11302d5d0,&UNK_10dca9910);
    _memcpy(puVar5,puVar6,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  }
  puVar5 = (undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x9c));
  puVar6 = (undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x9c));
  puVar13 = puVar6;
  (*pcVar23)(puVar6,1,lVar12);
  if ((int)puVar13 == 0) {
    *puVar5 = *puVar6;
    lVar20 = (long)*(int *)(lVar12 + 0x14);
    lVar15 = 0;
    __s10Foundation4DateVMa();
    lVar22 = *(long *)(lVar15 + -8);
    lVar10 = (long)puVar6 + lVar20;
    (**(code **)(lVar22 + 0x30))(lVar10,1,lVar15);
    if ((int)lVar10 == 0) {
      (**(code **)(lVar22 + 0x20))((long)puVar5 + lVar20,(long)puVar6 + lVar20,lVar15);
      (**(code **)(lVar22 + 0x38))((long)puVar5 + lVar20,0,1,lVar15);
    }
    else {
      lVar10 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)puVar5 + lVar20,(long)puVar6 + lVar20,
              *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    (**(code **)(lVar17 + 0x38))(puVar5,0,1,lVar12);
  }
  else {
    lVar10 = 0x11302d5d0;
    func_0x0001000285a8(0x11302d5d0,&UNK_10dca9910);
    _memcpy(puVar5,puVar6,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  }
  puVar5 = (undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0xa0));
  puVar6 = (undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0xa0));
  puVar13 = puVar6;
  (*pcVar23)(puVar6,1,lVar12);
  if ((int)puVar13 == 0) {
    *puVar5 = *puVar6;
    lVar20 = (long)*(int *)(lVar12 + 0x14);
    lVar15 = 0;
    __s10Foundation4DateVMa();
    lVar22 = *(long *)(lVar15 + -8);
    lVar10 = (long)puVar6 + lVar20;
    (**(code **)(lVar22 + 0x30))(lVar10,1,lVar15);
    if ((int)lVar10 == 0) {
      (**(code **)(lVar22 + 0x20))((long)puVar5 + lVar20,(long)puVar6 + lVar20,lVar15);
      (**(code **)(lVar22 + 0x38))((long)puVar5 + lVar20,0,1,lVar15);
    }
    else {
      lVar10 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)puVar5 + lVar20,(long)puVar6 + lVar20,
              *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    (**(code **)(lVar17 + 0x38))(puVar5,0,1,lVar12);
  }
  else {
    lVar10 = 0x11302d5d0;
    func_0x0001000285a8(0x11302d5d0,&UNK_10dca9910);
    _memcpy(puVar5,puVar6,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  }
  iVar7 = *(int *)(param_3 + 0xa8);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xa4)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xa4));
  *(undefined8 *)((long)param_1 + (long)iVar7) = *(undefined8 *)((long)param_2 + (long)iVar7);
  iVar7 = *(int *)(param_3 + 0xb0);
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xac));
  uVar24 = *puVar3;
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xac));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar24;
  puVar1 = (undefined1 *)((long)param_1 + (long)iVar7);
  puVar2 = (undefined1 *)((long)param_2 + (long)iVar7);
  puVar9 = puVar2;
  (*pcVar18)(puVar2,1,lVar8);
  if ((int)puVar9 == 0) {
    *puVar1 = *puVar2;
    iVar7 = *(int *)(lVar8 + 0x14);
    lVar10 = 0;
    __s10Foundation4DateVMa();
    lVar15 = *(long *)(lVar10 + -8);
    puVar9 = puVar2 + iVar7;
    (**(code **)(lVar15 + 0x30))(puVar9,1,lVar10);
    if ((int)puVar9 == 0) {
      (**(code **)(lVar15 + 0x20))(puVar1 + iVar7,puVar2 + iVar7,lVar10);
      (**(code **)(lVar15 + 0x38))(puVar1 + iVar7,0,1,lVar10);
    }
    else {
      lVar10 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy(puVar1 + iVar7,puVar2 + iVar7,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    (**(code **)(lVar14 + 0x38))(puVar1,0,1,lVar8);
  }
  else {
    lVar10 = 0x11302d5c0;
    func_0x0001000285a8(0x11302d5c0,&UNK_10dca9900);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  }
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xb4));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xb4));
  puVar9 = puVar2;
  (*pcVar18)(puVar2,1,lVar8);
  if ((int)puVar9 == 0) {
    *puVar1 = *puVar2;
    iVar7 = *(int *)(lVar8 + 0x14);
    lVar10 = 0;
    __s10Foundation4DateVMa();
    lVar15 = *(long *)(lVar10 + -8);
    puVar9 = puVar2 + iVar7;
    (**(code **)(lVar15 + 0x30))(puVar9,1,lVar10);
    if ((int)puVar9 == 0) {
      (**(code **)(lVar15 + 0x20))(puVar1 + iVar7,puVar2 + iVar7,lVar10);
      (**(code **)(lVar15 + 0x38))(puVar1 + iVar7,0,1,lVar10);
    }
    else {
      lVar10 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy(puVar1 + iVar7,puVar2 + iVar7,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    (**(code **)(lVar14 + 0x38))(puVar1,0,1,lVar8);
  }
  else {
    lVar10 = 0x11302d5c0;
    func_0x0001000285a8(0x11302d5c0,&UNK_10dca9900);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  }
  iVar7 = *(int *)(param_3 + 0xbc);
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xb8));
  uVar24 = *puVar3;
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xb8));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar24;
  *(undefined4 *)((long)param_1 + (long)iVar7) = *(undefined4 *)((long)param_2 + (long)iVar7);
  iVar7 = *(int *)(param_3 + 0xc4);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xc0)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xc0));
  puVar3 = (undefined8 *)((long)param_2 + (long)iVar7);
  uVar24 = *puVar3;
  puVar4 = (undefined8 *)((long)param_1 + (long)iVar7);
  puVar4[1] = puVar3[1];
  *puVar4 = uVar24;
  iVar7 = *(int *)(param_3 + 0xcc);
  *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 200)) =
       *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 200));
  puVar1 = (undefined1 *)((long)param_1 + (long)iVar7);
  puVar2 = (undefined1 *)((long)param_2 + (long)iVar7);
  puVar9 = puVar2;
  (*pcVar18)(puVar2,1,lVar8);
  if ((int)puVar9 == 0) {
    *puVar1 = *puVar2;
    iVar7 = *(int *)(lVar8 + 0x14);
    lVar10 = 0;
    __s10Foundation4DateVMa();
    lVar15 = *(long *)(lVar10 + -8);
    puVar9 = puVar2 + iVar7;
    (**(code **)(lVar15 + 0x30))(puVar9,1,lVar10);
    if ((int)puVar9 == 0) {
      (**(code **)(lVar15 + 0x20))(puVar1 + iVar7,puVar2 + iVar7,lVar10);
      (**(code **)(lVar15 + 0x38))(puVar1 + iVar7,0,1,lVar10);
    }
    else {
      lVar10 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy(puVar1 + iVar7,puVar2 + iVar7,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    (**(code **)(lVar14 + 0x38))(puVar1,0,1,lVar8);
  }
  else {
    lVar10 = 0x11302d5c0;
    func_0x0001000285a8(0x11302d5c0,&UNK_10dca9900);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  }
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xd0));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xd0));
  puVar9 = puVar2;
  (*pcVar18)(puVar2,1,lVar8);
  if ((int)puVar9 == 0) {
    *puVar1 = *puVar2;
    iVar7 = *(int *)(lVar8 + 0x14);
    lVar10 = 0;
    __s10Foundation4DateVMa();
    lVar15 = *(long *)(lVar10 + -8);
    puVar9 = puVar2 + iVar7;
    (**(code **)(lVar15 + 0x30))(puVar9,1,lVar10);
    if ((int)puVar9 == 0) {
      (**(code **)(lVar15 + 0x20))(puVar1 + iVar7,puVar2 + iVar7,lVar10);
      (**(code **)(lVar15 + 0x38))(puVar1 + iVar7,0,1,lVar10);
    }
    else {
      lVar10 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy(puVar1 + iVar7,puVar2 + iVar7,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    (**(code **)(lVar14 + 0x38))(puVar1,0,1,lVar8);
  }
  else {
    lVar10 = 0x11302d5c0;
    func_0x0001000285a8(0x11302d5c0,&UNK_10dca9900);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  }
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xd4));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xd4));
  puVar9 = puVar2;
  (*pcVar18)(puVar2,1,lVar8);
  if ((int)puVar9 == 0) {
    *puVar1 = *puVar2;
    iVar7 = *(int *)(lVar8 + 0x14);
    lVar10 = 0;
    __s10Foundation4DateVMa();
    lVar15 = *(long *)(lVar10 + -8);
    puVar9 = puVar2 + iVar7;
    (**(code **)(lVar15 + 0x30))(puVar9,1,lVar10);
    if ((int)puVar9 == 0) {
      (**(code **)(lVar15 + 0x20))(puVar1 + iVar7,puVar2 + iVar7,lVar10);
      (**(code **)(lVar15 + 0x38))(puVar1 + iVar7,0,1,lVar10);
    }
    else {
      lVar10 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy(puVar1 + iVar7,puVar2 + iVar7,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    (**(code **)(lVar14 + 0x38))(puVar1,0,1,lVar8);
  }
  else {
    lVar10 = 0x11302d5c0;
    func_0x0001000285a8(0x11302d5c0,&UNK_10dca9900);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  }
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xd8));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xd8));
  puVar9 = puVar2;
  (*pcVar18)(puVar2,1,lVar8);
  if ((int)puVar9 == 0) {
    *puVar1 = *puVar2;
    iVar7 = *(int *)(lVar8 + 0x14);
    lVar10 = 0;
    __s10Foundation4DateVMa();
    lVar15 = *(long *)(lVar10 + -8);
    puVar9 = puVar2 + iVar7;
    (**(code **)(lVar15 + 0x30))(puVar9,1,lVar10);
    if ((int)puVar9 == 0) {
      (**(code **)(lVar15 + 0x20))(puVar1 + iVar7,puVar2 + iVar7,lVar10);
      (**(code **)(lVar15 + 0x38))(puVar1 + iVar7,0,1,lVar10);
    }
    else {
      lVar10 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy(puVar1 + iVar7,puVar2 + iVar7,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    (**(code **)(lVar14 + 0x38))(puVar1,0,1,lVar8);
  }
  else {
    lVar10 = 0x11302d5c0;
    func_0x0001000285a8(0x11302d5c0,&UNK_10dca9900);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  }
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xdc));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xdc));
  puVar9 = puVar2;
  (*pcVar18)(puVar2,1,lVar8);
  if ((int)puVar9 == 0) {
    *puVar1 = *puVar2;
    iVar7 = *(int *)(lVar8 + 0x14);
    lVar10 = 0;
    __s10Foundation4DateVMa();
    lVar15 = *(long *)(lVar10 + -8);
    puVar9 = puVar2 + iVar7;
    (**(code **)(lVar15 + 0x30))(puVar9,1,lVar10);
    if ((int)puVar9 == 0) {
      (**(code **)(lVar15 + 0x20))(puVar1 + iVar7,puVar2 + iVar7,lVar10);
      (**(code **)(lVar15 + 0x38))(puVar1 + iVar7,0,1,lVar10);
    }
    else {
      lVar10 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy(puVar1 + iVar7,puVar2 + iVar7,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    (**(code **)(lVar14 + 0x38))(puVar1,0,1,lVar8);
  }
  else {
    lVar8 = 0x11302d5c0;
    func_0x0001000285a8(0x11302d5c0,&UNK_10dca9900);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 103f00028; end: 103f0003f;  */

void FUN_103f00028(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103f00040; end: 103f001ab;  */

void FUN_103f00040(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  puVar1 = PTR___sBi64_WV_11034d670;
  puStack_1e0 = PTR___sBi64_WV_11034d670 + 0x40;
  uVar5 = 0x11302d640;
  lVar2 = 0x13f;
  FUN_103f001ac(0x13f,0x11302d640,FUN_103ef0be4);
  if (uVar5 < 0x40) {
    lVar2 = *(long *)(lVar2 + -8) + 0x40;
    uVar5 = 0x11302d648;
    lVar3 = 0x13f;
    lStack_1d8 = lVar2;
    lStack_1d0 = lVar2;
    FUN_103f001ac(0x13f,0x11302d648,FUN_103ef1cdc);
    if (uVar5 < 0x40) {
      lVar3 = *(long *)(lVar3 + -8) + 0x40;
      uVar5 = 0x11302d650;
      lVar4 = 0x13f;
      lStack_1c8 = lVar3;
      FUN_103f001ac(0x13f,0x11302d650,FUN_103ef14a0);
      if (uVar5 < 0x40) {
        lStack_1c0 = *(long *)(lVar4 + -8) + 0x40;
        puStack_198 = &UNK_10dca9968;
        puStack_188 = puVar1 + 0x40;
        puStack_190 = &UNK_10dca9968;
        puStack_158 = PTR___sBi32_WV_11034d668 + 0x40;
        puStack_a8 = &UNK_10dca9968;
        puStack_90 = &UNK_10dca9968;
        puStack_80 = &UNK_10dca9980;
        puStack_78 = &UNK_10dca9968;
        lStack_1b8 = lStack_1c0;
        lStack_1b0 = lStack_1c0;
        lStack_1a8 = lStack_1c0;
        lStack_1a0 = lStack_1c0;
        puStack_180 = puStack_188;
        puStack_178 = puStack_188;
        lStack_170 = lVar3;
        lStack_168 = lVar3;
        puStack_160 = puStack_188;
        puStack_150 = puStack_158;
        puStack_148 = puStack_158;
        puStack_140 = puStack_158;
        puStack_138 = puStack_158;
        puStack_130 = puStack_158;
        puStack_128 = puStack_158;
        puStack_120 = puStack_158;
        puStack_118 = puStack_158;
        puStack_110 = puStack_158;
        puStack_108 = puStack_158;
        puStack_100 = puStack_158;
        puStack_f8 = puStack_158;
        puStack_f0 = puStack_158;
        puStack_e8 = puStack_158;
        puStack_e0 = puStack_158;
        lStack_d8 = lStack_1c0;
        lStack_d0 = lStack_1c0;
        lStack_c8 = lStack_1c0;
        lStack_c0 = lStack_1c0;
        puStack_b8 = puStack_188;
        puStack_b0 = puStack_188;
        lStack_a0 = lVar2;
        lStack_98 = lVar2;
        puStack_88 = puStack_158;
        puStack_70 = puStack_158;
        lStack_68 = lVar2;
        lStack_60 = lVar2;
        lStack_58 = lVar2;
        lStack_50 = lVar2;
        lStack_48 = lVar2;
        _swift_initStructMetadata(param_1,0x100,0x34,&puStack_1e0,param_1 + 0x10);
      }
    }
  }
  return;
}



/* Entry: 103f001ac; end: 103f0027b;  */

void FUN_103f001ac(long param_1,long *param_2,code *param_3)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = 0xff;
    (*param_3)();
    __sSqMa();
    if (lVar1 == 0) {
      *param_2 = param_1;
    }
  }
  return;
}



/* Entry: 103f0027c; end: 103f0028f;  */

bool FUN_103f0027c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103f00290; end: 103f00367;  */

void FUN_103f00290(void)

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



/* Entry: 103f00368; end: 103f00387;  */

void FUN_103f00368(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103f00388; end: 103f003c7;  */

void FUN_103f00388(void)

{
  undefined *puVar1;
  
  if (puRam000000011302d760 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca99b0;
  _swift_getWitnessTable(&UNK_10dca99b0,&UNK_110720c00);
  puRam000000011302d760 = puVar1;
  return;
}



/* Entry: 103f003c8; end: 103f003d7;  */

undefined1  [16] FUN_103f003c8(void)

{
  return ZEXT816(0x110720c00);
}



/* Entry: 103f003d8; end: 103f003e7; -[_TtC29SCDiscoverFeedRankingServices29SCDiscoverFeedRankingServices lazyDiscoverFeedRanker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f003d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302d768));
  return;
}



/* Entry: 103f003e8; end: 103f003f7; -[_TtC29SCDiscoverFeedRankingServices29SCDiscoverFeedRankingServices lazyFriendStoriesRanker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f003e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302d770));
  return;
}



/* Entry: 103f003f8; end: 103f00407; -[_TtC29SCDiscoverFeedRankingServices29SCDiscoverFeedRankingServices lazyDiscoverFeedInteractionHistoryManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f003f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302d778));
  return;
}



/* Entry: 103f00408; end: 103f0047b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f00408(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302d768) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302d770) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302d778) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f0047c; end: 103f004db; -[_TtC29SCDiscoverFeedRankingServices29SCDiscoverFeedRankingServices init] */

void FUN_103f0047c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCDiscoverFeedRankingServices.SCDiscoverFeedRankingServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f004a8);
  (*pcVar1)();
}



/* Entry: 103f004dc; end: 103f00523; -[_TtC29SCDiscoverFeedRankingServices29SCDiscoverFeedRankingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f004dc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302d768));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302d770));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302d778));
  return;
}



/* Entry: 103f00524; end: 103f00533; -[SCDiscoverFeedInteractionEventBooleanType value] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f00524(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302d7a8);
}



/* Entry: 103f00534; end: 103f0060b; -[SCDiscoverFeedInteractionEventBooleanType timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f00534(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  FUN_103f00dd0(param_1 + _DAT_113812528,puVar4,0x112d373d8,&UNK_10d9014c0);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103f0060c; end: 103f006b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103f0060c(undefined1 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar1 = auStack_50;
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11302d7a8) = param_1;
  FUN_103f00dd0(param_2,unaff_x20 + _DAT_113812528,0x112d373d8,&UNK_10d9014c0);
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  func_0x000103f00e18(param_2,0x112d373d8,&UNK_10d9014c0);
  return puVar1;
}



/* Entry: 103f006b4; end: 103f007df; -[SCDiscoverFeedInteractionEventBooleanType initWithValue:timestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103f006b4(long param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = (long)&lStack_50 - extraout_x8;
  if (param_4 == 0) {
    lVar3 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar2,param_4);
    lVar3 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar2,param_4 == 0,1);
  *(undefined1 *)(param_1 + _DAT_11302d7a8) = param_3;
  FUN_103f00dd0(lVar2,param_1 + _DAT_113812528,0x112d373d8,&UNK_10d9014c0);
  plVar4 = &lStack_50;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  func_0x000103f00e18(lVar2,0x112d373d8,&UNK_10d9014c0);
  return plVar4;
}



/* Entry: 103f007e0; end: 103f0087b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103f007e0(undefined1 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11302d7a8) = *param_1;
  lVar1 = 0;
  FUN_103ef0be4();
  FUN_103f00dd0(param_1 + *(int *)(lVar1 + 0x14),unaff_x20 + _DAT_113812528,0x112d373d8,
                &UNK_10d9014c0);
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  FUN_103f0087c(param_1);
  return puVar2;
}



/* Entry: 103f0087c; end: 103f008b7;  */

undefined8 FUN_103f0087c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103ef0be4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103f008b8; end: 103f008eb; -[SCDiscoverFeedInteractionEventBooleanType hash] */

undefined8 FUN_103f008b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f008ec();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103f008ec; end: 103f00a27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f008ec(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [72];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_90 + -extraout_x8;
  __ss6HasherVABycfC(auStack_88);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11302d7a8));
  FUN_103f00dd0(unaff_x20 + _DAT_113812528,puVar3,0x112d373d8,&UNK_10d9014c0);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x30))(puVar3,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x000103f00e18(puVar3,0x112d373d8,&UNK_10d9014c0);
    puVar3 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar4 + 8))(puVar3,lVar1);
    puVar3 = puVar2;
    func_0x000107c44c3c(puVar2);
    _objc_release(puVar2);
  }
  __ss6HasherV8_combineyySuF(puVar3);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103f00a28; end: 103f00dcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103f00a28(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lStack_a0;
  long lStack_98;
  uint uStack_8c;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar11 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = lVar11 - extraout_x8_00;
  lVar6 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar6 = lVar4 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar6 - extraout_x12;
  FUN_103f00dd0(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x000103f00e18(auStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar3 = &lStack_88;
    _swift_dynamicCast(plVar3,auStack_80,PTR___sypN_11034f1a8 + 8,lVar1,6);
    lVar1 = _DAT_113812528;
    if (((ulong)plVar3 & 1) != 0) {
      uStack_8c = (*(byte *)(unaff_x20 + _DAT_11302d7a8) ^ *(byte *)(lStack_88 + _DAT_11302d7a8)) ^
                  1;
      lStack_a0 = lVar11;
      lStack_98 = lVar2;
      FUN_103f00dd0(lStack_88 + _DAT_113812528,lVar7,0x112d373d8,&UNK_10d9014c0);
      lVar10 = (long)*(int *)(lVar10 + 0x30);
      FUN_103f00dd0(unaff_x20 + lVar1,lVar4,0x112d373d8,&UNK_10d9014c0);
      FUN_103f00dd0(lVar7,lVar4 + lVar10,0x112d373d8,&UNK_10d9014c0);
      lVar1 = lStack_98;
      pcVar9 = *(code **)(lVar5 + 0x30);
      lVar2 = lVar4;
      (*pcVar9)(lVar4,1,lStack_98);
      if ((int)lVar2 == 1) {
        _objc_release(lStack_88);
        func_0x000103f00e18(lVar7,0x112d373d8,&UNK_10d9014c0);
        lVar10 = lVar4 + lVar10;
        (*pcVar9)(lVar10,1,lVar1);
        if ((int)lVar10 == 1) {
          func_0x000103f00e18(lVar4,0x112d373d8,&UNK_10d9014c0);
          uVar8 = 1;
        }
        else {
LAB_103f00cf8:
          func_0x000103f00e18(lVar4,0x112d373d0,&UNK_10d90f8f0);
          uVar8 = 0;
        }
      }
      else {
        FUN_103f00dd0(lVar4,lVar6,0x112d373d8,&UNK_10d9014c0);
        lVar2 = lVar4 + lVar10;
        (*pcVar9)(lVar2,1,lVar1);
        lVar11 = lStack_a0;
        if ((int)lVar2 == 1) {
          _objc_release(lStack_88);
          func_0x000103f00e18(lVar7,0x112d373d8,&UNK_10d9014c0);
          (**(code **)(lVar5 + 8))(lVar6,lVar1);
          goto LAB_103f00cf8;
        }
        lVar2 = lStack_a0;
        (**(code **)(lVar5 + 0x20))(lStack_a0,lVar4 + lVar10,lVar1);
        func_0x000100df4c40();
        lVar10 = lVar6;
        __sSQ2eeoiySbx_xtFZTj(lVar6,lVar11,lVar1,lVar2);
        uVar8 = (uint)lVar10;
        _objc_release(lStack_88);
        pcVar9 = *(code **)(lVar5 + 8);
        (*pcVar9)(lVar11,lVar1);
        func_0x000103f00e18(lVar7,0x112d373d8,&UNK_10d9014c0);
        (*pcVar9)(lVar6,lVar1);
        func_0x000103f00e18(lVar4,0x112d373d8,&UNK_10d9014c0);
      }
      uStack_8c = uStack_8c & uVar8;
      goto LAB_103f00dac;
    }
  }
  uStack_8c = 0;
LAB_103f00dac:
  return uStack_8c & 1;
}



/* Entry: 103f00dd0; end: 103f00e57;  */

undefined8 FUN_103f00dd0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103f00e58; end: 103f00ee7; -[SCDiscoverFeedInteractionEventBooleanType isEqual:] */

uint FUN_103f00e58(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103f00a28(&uStack_40);
  _objc_release(param_1);
  func_0x000103f00e18(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 103f00ee8; end: 103f00eeb; -[SCDiscoverFeedInteractionEventBooleanType copyWithZone:] */

void FUN_103f00ee8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f00eec; end: 103f0104b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f00eec(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffb0 + -extraout_x8;
  uVar1 = 0x45554c4156;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45554c4156,0xe500000000000000);
  func_0x000107c42724(param_1);
  _objc_release(uVar1);
  FUN_103f00dd0(unaff_x20 + _DAT_113812528,puVar5,0x112d373d8,&UNK_10d9014c0);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar2 + -8);
  puVar3 = puVar5;
  (**(code **)(lVar6 + 0x30))(puVar5,1,lVar2);
  puVar4 = (undefined1 *)0x0;
  if ((int)puVar3 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar6 + 8))(puVar5,lVar2);
    puVar4 = puVar3;
  }
  uVar1 = 0x4d415453454d4954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d415453454d4954,0xe900000000000050);
  func_0x000107c42744(param_1);
  _swift_unknownObjectRelease(puVar4);
  _objc_release(uVar1);
  return;
}



/* Entry: 103f0104c; end: 103f0109b; -[SCDiscoverFeedInteractionEventBooleanType encodeWithCoder:] */

void FUN_103f0104c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103f00eec(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f0109c; end: 103f010cb;  */

void FUN_103f0109c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103f010cc(param_1);
  return;
}



/* Entry: 103f010cc; end: 103f0132b;  */

undefined8 FUN_103f010cc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long extraout_x8;
  code *pcVar5;
  long extraout_x12;
  undefined8 unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar6 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar6 - extraout_x12;
  uVar1 = 0x45554c4156;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45554c4156,0xe500000000000000);
  func_0x000107c41454(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4d415453454d4954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d415453454d4954,0xe900000000000050);
  lVar2 = param_1;
  func_0x000107c41478();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x000103f00e18(&uStack_70,0x112d387f8,&UNK_10d902650);
    lVar2 = 0;
    __s10Foundation4DateVMa();
    pcVar5 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
    uVar4 = 1;
  }
  else {
    lVar2 = 0;
    __s10Foundation4DateVMa();
    lVar3 = lVar7;
    _swift_dynamicCast(lVar7,&uStack_70,PTR___sypN_11034f1a8 + 8,lVar2,6);
    pcVar5 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
    uVar4 = (uint)lVar3 ^ 1;
  }
  (*pcVar5)(lVar7,uVar4,1,lVar2);
  FUN_103f00dd0(lVar7,lVar6,0x112d373d8,&UNK_10d9014c0);
  __s10Foundation4DateVMa(0);
  lVar9 = *(long *)(lVar2 + -8);
  lVar3 = lVar6;
  (**(code **)(lVar9 + 0x30))(lVar6,1,lVar2);
  lVar8 = 0;
  if ((int)lVar3 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar9 + 8))(lVar6,lVar2);
    lVar8 = lVar3;
  }
  func_0x000107c49478();
  _objc_release(lVar8);
  _objc_release(param_1);
  func_0x000103f00e18(lVar7,0x112d373d8,&UNK_10d9014c0);
  return unaff_x20;
}



/* Entry: 103f0132c; end: 103f01353; -[SCDiscoverFeedInteractionEventBooleanType initWithCoder:] */

void FUN_103f0132c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_103f010cc();
  return;
}



/* Entry: 103f01354; end: 103f013f3; -[SCDiscoverFeedInteractionEventBooleanType description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f01354(long param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  FUN_103ef0be4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  *puVar2 = *(undefined1 *)(param_1 + _DAT_11302d7a8);
  FUN_103f00dd0(param_1 + _DAT_113812528,puVar2 + *(int *)(lVar1 + 0x14),0x112d373d8,&UNK_10d9014c0)
  ;
  FUN_103f0087c(puVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f013f4; end: 103f0146f; -[SCDiscoverFeedInteractionEventBooleanType init] */

void FUN_103f013f4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDiscoverFeedRankingServices/SCDiscoverFeedInteractionEventBooleanTypeWrapper.swift",
             0x54,2,0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f0143c);
  (*pcVar1)();
}



/* Entry: 103f01470; end: 103f0149f; -[SCDiscoverFeedInteractionEventBooleanType .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f01470(long param_1)

{
  func_0x000103f00e18(param_1 + _DAT_113812528,0x112d373d8,&UNK_10d9014c0);
  return;
}



/* Entry: 103f014a0; end: 103f014a7;  */

void FUN_103f014a0(void)

{
  if (lRam000000011302d7d8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7d4388);
  return;
}



/* Entry: 103f014a8; end: 103f014df;  */

void FUN_103f014a8(undefined8 param_1)

{
  if (lRam000000011302d7d8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7d4388);
  return;
}



/* Entry: 103f014e0; end: 103f01557;  */

void FUN_103f014e0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10dca9ad0;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,2,&puStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 103f01558; end: 103f01567; -[SCDiscoverFeedInteractionEventFloatType value] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f01558(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302d7e8);
}



/* Entry: 103f01568; end: 103f0163f; -[SCDiscoverFeedInteractionEventFloatType timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f01568(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  FUN_103f01e24(param_1 + _DAT_113812530,puVar4,0x112d373d8,&UNK_10d9014c0);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103f01640; end: 103f016ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103f01640(undefined4 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar1 = auStack_60;
  _objc_allocWithZone();
  *(undefined4 *)(unaff_x20 + _DAT_11302d7e8) = param_1;
  FUN_103f01e24(param_2,unaff_x20 + _DAT_113812530,0x112d373d8,&UNK_10d9014c0);
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  func_0x000103f01e6c(param_2,0x112d373d8,&UNK_10d9014c0);
  return puVar1;
}



/* Entry: 103f016f0; end: 103f01823; -[SCDiscoverFeedInteractionEventFloatType initWithValue:timestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103f016f0(undefined4 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_2;
  _swift_getObjectType();
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = (long)&lStack_60 - extraout_x8;
  if (param_4 == 0) {
    lVar3 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar2,param_4);
    lVar3 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar2,param_4 == 0,1);
  *(undefined4 *)(param_2 + _DAT_11302d7e8) = param_1;
  FUN_103f01e24(lVar2,param_2 + _DAT_113812530,0x112d373d8,&UNK_10d9014c0);
  plVar4 = &lStack_60;
  lStack_60 = param_2;
  lStack_58 = lVar1;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  func_0x000103f01e6c(lVar2,0x112d373d8,&UNK_10d9014c0);
  return plVar4;
}



/* Entry: 103f01824; end: 103f018bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103f01824(undefined4 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  *(undefined4 *)(unaff_x20 + _DAT_11302d7e8) = *param_1;
  lVar1 = 0;
  FUN_103ef14a0();
  FUN_103f01e24((long)param_1 + (long)*(int *)(lVar1 + 0x14),unaff_x20 + _DAT_113812530,0x112d373d8,
                &UNK_10d9014c0);
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  FUN_103f018c0(param_1);
  return puVar2;
}



/* Entry: 103f018c0; end: 103f018fb;  */

undefined8 FUN_103f018c0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103ef14a0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103f018fc; end: 103f0192f; -[SCDiscoverFeedInteractionEventFloatType hash] */

undefined8 FUN_103f018fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f01930();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103f01930; end: 103f01a7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f01930(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  float fVar5;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [72];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_90 + -extraout_x8;
  __ss6HasherVABycfC(auStack_88);
  fVar5 = 0.0;
  if (*(float *)(unaff_x20 + _DAT_11302d7e8) != 0.0) {
    fVar5 = *(float *)(unaff_x20 + _DAT_11302d7e8);
  }
  __ss6HasherV8_combineyys6UInt32VF(fVar5);
  FUN_103f01e24(unaff_x20 + _DAT_113812530,puVar3,0x112d373d8,&UNK_10d9014c0);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x30))(puVar3,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x000103f01e6c(puVar3,0x112d373d8,&UNK_10d9014c0);
    puVar3 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar4 + 8))(puVar3,lVar1);
    puVar3 = puVar2;
    func_0x000107c44c3c(puVar2);
    _objc_release(puVar2);
  }
  __ss6HasherV8_combineyySuF(puVar3);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103f01a7c; end: 103f01e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103f01a7c(undefined8 param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  code *pcVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_b0 [8];
  undefined1 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar12 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar8 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar8 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12;
  FUN_103f01e24(param_1,auStack_90,0x112d387f8,&UNK_10d902650);
  if (lStack_78 == 0) {
    func_0x000103f01e6c(auStack_90,0x112d387f8,&UNK_10d902650);
    return 0;
  }
  plVar4 = &lStack_98;
  _swift_dynamicCast(plVar4,auStack_90,PTR___sypN_11034f1a8 + 8,lVar2,6);
  lVar2 = _DAT_113812530;
  if (((ulong)plVar4 & 1) == 0) {
    return 0;
  }
  fVar13 = *(float *)(unaff_x20 + _DAT_11302d7e8);
  fVar14 = *(float *)(lStack_98 + _DAT_11302d7e8);
  puStack_a8 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = lVar8;
  FUN_103f01e24(lStack_98 + _DAT_113812530,lVar9,0x112d373d8,&UNK_10d9014c0);
  lVar12 = (long)*(int *)(lVar12 + 0x30);
  FUN_103f01e24(unaff_x20 + lVar2,lVar6,0x112d373d8,&UNK_10d9014c0);
  FUN_103f01e24(lVar9,lVar6 + lVar12,0x112d373d8,&UNK_10d9014c0);
  pcVar11 = *(code **)(lVar7 + 0x30);
  lVar2 = lVar6;
  (*pcVar11)(lVar6,1,lVar3);
  lVar8 = lStack_a0;
  if ((int)lVar2 == 1) {
    _objc_release(lStack_98);
    func_0x000103f01e6c(lVar9,0x112d373d8,&UNK_10d9014c0);
    lVar12 = lVar6 + lVar12;
    (*pcVar11)(lVar12,1,lVar3);
    if ((int)lVar12 == 1) {
      func_0x000103f01e6c(lVar6,0x112d373d8,&UNK_10d9014c0);
      uVar10 = 1;
      goto LAB_103f01df4;
    }
  }
  else {
    FUN_103f01e24(lVar6,lStack_a0,0x112d373d8,&UNK_10d9014c0);
    lVar2 = lVar6 + lVar12;
    (*pcVar11)(lVar2,1,lVar3);
    puVar1 = puStack_a8;
    if ((int)lVar2 != 1) {
      puVar5 = puStack_a8;
      (**(code **)(lVar7 + 0x20))(puStack_a8,lVar6 + lVar12,lVar3);
      func_0x000100df4c40();
      lVar12 = lVar8;
      __sSQ2eeoiySbx_xtFZTj(lVar8,puVar1,lVar3,puVar5);
      uVar10 = (uint)lVar12;
      _objc_release(lStack_98);
      pcVar11 = *(code **)(lVar7 + 8);
      (*pcVar11)(puVar1,lVar3);
      func_0x000103f01e6c(lVar9,0x112d373d8,&UNK_10d9014c0);
      (*pcVar11)(lVar8,lVar3);
      func_0x000103f01e6c(lVar6,0x112d373d8,&UNK_10d9014c0);
      goto LAB_103f01df4;
    }
    _objc_release(lStack_98);
    func_0x000103f01e6c(lVar9,0x112d373d8,&UNK_10d9014c0);
    (**(code **)(lVar7 + 8))(lVar8,lVar3);
  }
  func_0x000103f01e6c(lVar6,0x112d373d0,&UNK_10d90f8f0);
  uVar10 = 0;
LAB_103f01df4:
  return fVar13 == fVar14 & uVar10;
}



/* Entry: 103f01e24; end: 103f01eab;  */

undefined8 FUN_103f01e24(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103f01eac; end: 103f01f3b; -[SCDiscoverFeedInteractionEventFloatType isEqual:] */

uint FUN_103f01eac(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103f01a7c(&uStack_40);
  _objc_release(param_1);
  func_0x000103f01e6c(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 103f01f3c; end: 103f01f3f; -[SCDiscoverFeedInteractionEventFloatType copyWithZone:] */

void FUN_103f01f3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f01f40; end: 103f0209f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f01f40(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined4 uVar7;
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffb0 + -extraout_x8;
  uVar7 = *(undefined4 *)(unaff_x20 + _DAT_11302d7e8);
  uVar1 = 0x45554c4156;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45554c4156,0xe500000000000000);
  func_0x000107c42734(uVar7,param_1);
  _objc_release(uVar1);
  FUN_103f01e24(unaff_x20 + _DAT_113812530,puVar5,0x112d373d8,&UNK_10d9014c0);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar2 + -8);
  puVar3 = puVar5;
  (**(code **)(lVar6 + 0x30))(puVar5,1,lVar2);
  puVar4 = (undefined1 *)0x0;
  if ((int)puVar3 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar6 + 8))(puVar5,lVar2);
    puVar4 = puVar3;
  }
  uVar1 = 0x4d415453454d4954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d415453454d4954,0xe900000000000050);
  func_0x000107c42744(param_1);
  _swift_unknownObjectRelease(puVar4);
  _objc_release(uVar1);
  return;
}



/* Entry: 103f020a0; end: 103f020ef; -[SCDiscoverFeedInteractionEventFloatType encodeWithCoder:] */

void FUN_103f020a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103f01f40(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f020f0; end: 103f0211f;  */

void FUN_103f020f0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103f02120(param_1);
  return;
}



/* Entry: 103f02120; end: 103f02387;  */

undefined8 FUN_103f02120(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long extraout_x8;
  code *pcVar5;
  long extraout_x12;
  undefined8 unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar6 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar6 - extraout_x12;
  uVar1 = 0x45554c4156;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45554c4156,0xe500000000000000);
  func_0x000107c41464(param_2);
  _objc_release(uVar1);
  uVar1 = 0x4d415453454d4954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d415453454d4954,0xe900000000000050);
  lVar2 = param_2;
  func_0x000107c41478();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x000103f01e6c(&uStack_80,0x112d387f8,&UNK_10d902650);
    lVar2 = 0;
    __s10Foundation4DateVMa();
    pcVar5 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
    uVar4 = 1;
  }
  else {
    lVar2 = 0;
    __s10Foundation4DateVMa();
    lVar3 = lVar7;
    _swift_dynamicCast(lVar7,&uStack_80,PTR___sypN_11034f1a8 + 8,lVar2,6);
    pcVar5 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
    uVar4 = (uint)lVar3 ^ 1;
  }
  (*pcVar5)(lVar7,uVar4,1,lVar2);
  FUN_103f01e24(lVar7,lVar6,0x112d373d8,&UNK_10d9014c0);
  __s10Foundation4DateVMa(0);
  lVar9 = *(long *)(lVar2 + -8);
  lVar3 = lVar6;
  (**(code **)(lVar9 + 0x30))(lVar6,1,lVar2);
  lVar8 = 0;
  if ((int)lVar3 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar9 + 8))(lVar6,lVar2);
    lVar8 = lVar3;
  }
  func_0x000107c49478(param_1);
  _objc_release(lVar8);
  _objc_release(param_2);
  func_0x000103f01e6c(lVar7,0x112d373d8,&UNK_10d9014c0);
  return unaff_x20;
}



/* Entry: 103f02388; end: 103f023af; -[SCDiscoverFeedInteractionEventFloatType initWithCoder:] */

void FUN_103f02388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_103f02120();
  return;
}



/* Entry: 103f023b0; end: 103f0244f; -[SCDiscoverFeedInteractionEventFloatType description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f023b0(long param_1)

{
  long lVar1;
  long extraout_x8;
  undefined4 *puVar2;
  
  lVar1 = 0;
  FUN_103ef14a0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = (undefined4 *)(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  *puVar2 = *(undefined4 *)(param_1 + _DAT_11302d7e8);
  FUN_103f01e24(param_1 + _DAT_113812530,(undefined1 *)((long)puVar2 + (long)*(int *)(lVar1 + 0x14))
                ,0x112d373d8,&UNK_10d9014c0);
  FUN_103f018c0(puVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f02450; end: 103f024cb; -[SCDiscoverFeedInteractionEventFloatType init] */

void FUN_103f02450(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDiscoverFeedRankingServices/SCDiscoverFeedInteractionEventFloatTypeWrapper.swift",
             0x52,2,0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f02498);
  (*pcVar1)();
}



/* Entry: 103f024cc; end: 103f024fb; -[SCDiscoverFeedInteractionEventFloatType .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f024cc(long param_1)

{
  func_0x000103f01e6c(param_1 + _DAT_113812530,0x112d373d8,&UNK_10d9014c0);
  return;
}



/* Entry: 103f024fc; end: 103f02503;  */

void FUN_103f024fc(void)

{
  if (lRam000000011302d818 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7d43e0);
  return;
}



/* Entry: 103f02504; end: 103f0253b;  */

void FUN_103f02504(undefined8 param_1)

{
  if (lRam000000011302d818 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7d43e0);
  return;
}



/* Entry: 103f0253c; end: 103f025b7;  */

void FUN_103f0253c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBi32_WV_11034d668 + 0x40;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,2,&puStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 103f025b8; end: 103f025c7; -[SCDiscoverFeedInteractionEventIntegerType value] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f025b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302d828);
}



/* Entry: 103f025c8; end: 103f0269f; -[SCDiscoverFeedInteractionEventIntegerType timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f025c8(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  FUN_103f02e64(param_1 + _DAT_113812538,puVar4,0x112d373d8,&UNK_10d9014c0);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103f026a0; end: 103f02747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103f026a0(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar1 = auStack_50;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302d828) = param_1;
  FUN_103f02e64(param_2,unaff_x20 + _DAT_113812538,0x112d373d8,&UNK_10d9014c0);
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  func_0x000103f02eac(param_2,0x112d373d8,&UNK_10d9014c0);
  return puVar1;
}



/* Entry: 103f02748; end: 103f02873; -[SCDiscoverFeedInteractionEventIntegerType initWithValue:timestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103f02748(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = (long)&lStack_50 - extraout_x8;
  if (param_4 == 0) {
    lVar3 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar2,param_4);
    lVar3 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar2,param_4 == 0,1);
  *(undefined8 *)(param_1 + _DAT_11302d828) = param_3;
  FUN_103f02e64(lVar2,param_1 + _DAT_113812538,0x112d373d8,&UNK_10d9014c0);
  plVar4 = &lStack_50;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  func_0x000103f02eac(lVar2,0x112d373d8,&UNK_10d9014c0);
  return plVar4;
}



/* Entry: 103f02874; end: 103f0290f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103f02874(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302d828) = *param_1;
  lVar1 = 0;
  FUN_103ef1cdc();
  FUN_103f02e64((long)param_1 + (long)*(int *)(lVar1 + 0x14),unaff_x20 + _DAT_113812538,0x112d373d8,
                &UNK_10d9014c0);
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  FUN_103f02910(param_1);
  return puVar2;
}



/* Entry: 103f02910; end: 103f0294b;  */

undefined8 FUN_103f02910(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103ef1cdc();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103f0294c; end: 103f0297f; -[SCDiscoverFeedInteractionEventIntegerType hash] */

undefined8 FUN_103f0294c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f02980();
  _objc_release(param_1);
  return uVar1;
}


