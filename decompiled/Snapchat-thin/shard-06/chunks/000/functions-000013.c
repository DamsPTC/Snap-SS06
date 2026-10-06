/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043a9844; end: 1043a9f6f;  */

undefined1 * FUN_1043a9844(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  uVar14 = puVar2[1];
  puVar1[2] = puVar2[2];
  puVar1[1] = uVar14;
  uVar14 = puVar2[3];
  puVar1[4] = puVar2[4];
  puVar1[3] = uVar14;
  lVar3 = 0;
  FUN_1043aa0ac();
  lVar11 = (long)*(int *)(lVar3 + 0x1c);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar4 + -8);
  pcVar7 = *(code **)(lVar9 + 0x30);
  puVar5 = (undefined1 *)((long)puVar2 + lVar11);
  (*pcVar7)(puVar5,1,lVar4);
  if ((int)puVar5 == 0) {
    (**(code **)(lVar9 + 0x20))
              ((undefined1 *)((long)puVar1 + lVar11),(undefined1 *)((long)puVar2 + lVar11),lVar4);
    (**(code **)(lVar9 + 0x38))((undefined1 *)((long)puVar1 + lVar11),0,1,lVar4);
  }
  else {
    lVar13 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((undefined1 *)((long)puVar1 + lVar11),(undefined1 *)((long)puVar2 + lVar11),
            *(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  }
  lVar11 = (long)*(int *)(lVar3 + 0x20);
  uVar14 = *(undefined8 *)((long)puVar2 + lVar11);
  ((undefined8 *)((long)puVar1 + lVar11))[1] = ((undefined8 *)((long)puVar2 + lVar11))[1];
  *(undefined8 *)((long)puVar1 + lVar11) = uVar14;
  lVar13 = (long)*(int *)(lVar3 + 0x24);
  uVar14 = *(undefined8 *)((long)puVar2 + lVar13);
  ((undefined8 *)((long)puVar1 + lVar13))[1] = ((undefined8 *)((long)puVar2 + lVar13))[1];
  *(undefined8 *)((long)puVar1 + lVar13) = uVar14;
  lVar12 = (long)*(int *)(lVar3 + 0x28);
  *(undefined4 *)((long)puVar1 + lVar12) = *(undefined4 *)((long)puVar2 + lVar12);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  lVar10 = *(long *)(lVar3 + -8);
  puVar6 = puVar2;
  (**(code **)(lVar10 + 0x30))(puVar2,1,lVar3);
  if ((int)puVar6 == 0) {
    *puVar1 = *puVar2;
    uVar14 = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[1] = uVar14;
    uVar14 = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1[3] = uVar14;
    lVar8 = (long)*(int *)(lVar3 + 0x1c);
    puVar5 = (undefined1 *)((long)puVar2 + lVar8);
    (*pcVar7)(puVar5,1,lVar4);
    if ((int)puVar5 == 0) {
      (**(code **)(lVar9 + 0x20))
                ((undefined1 *)((long)puVar1 + lVar8),(undefined1 *)((long)puVar2 + lVar8),lVar4);
      (**(code **)(lVar9 + 0x38))((undefined1 *)((long)puVar1 + lVar8),0,1,lVar4);
      lVar11 = (long)*(int *)(lVar3 + 0x20);
      lVar13 = (long)*(int *)(lVar3 + 0x24);
      lVar12 = (long)*(int *)(lVar3 + 0x28);
    }
    else {
      lVar4 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((undefined1 *)((long)puVar1 + lVar8),(undefined1 *)((long)puVar2 + lVar8),
              *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    }
    uVar14 = *(undefined8 *)((long)puVar2 + lVar11);
    ((undefined8 *)((long)puVar1 + lVar11))[1] = ((undefined8 *)((long)puVar2 + lVar11))[1];
    *(undefined8 *)((long)puVar1 + lVar11) = uVar14;
    uVar14 = *(undefined8 *)((long)puVar2 + lVar13);
    ((undefined8 *)((long)puVar1 + lVar13))[1] = ((undefined8 *)((long)puVar2 + lVar13))[1];
    *(undefined8 *)((long)puVar1 + lVar13) = uVar14;
    *(undefined4 *)((long)puVar1 + lVar12) = *(undefined4 *)((long)puVar2 + lVar12);
    (**(code **)(lVar10 + 0x38))(puVar1,0,1,lVar3);
  }
  else {
    lVar3 = 0x112f8ae50;
    func_0x0001000285a8(0x112f8ae50,&UNK_10dc00160);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 1043a9f70; end: 1043a9f87;  */

void FUN_1043a9f70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1043a9f88; end: 1043aa0ab;  */

void FUN_1043a9f88(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  long lStack_30;
  long lStack_28;
  
  puStack_38 = &UNK_10dcf4808;
  lVar1 = 0x13f;
  FUN_1043aa0ac();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    func_0x0001043aa018();
    if (param_2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0x100,3,&puStack_38,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 1043aa0ac; end: 1043aa0e3;  */

void FUN_1043aa0ac(undefined8 param_1)

{
  if (lRam0000000113074608 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e801a60);
  return;
}



/* Entry: 1043aa0e4; end: 1043aa0eb;  */

bool FUN_1043aa0e4(long *param_1,long *param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar16 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar11 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar15 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar13 = (long)puVar11 - extraout_x8_00;
  lVar15 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = uVar13 - extraout_x8_01;
  if (*param_1 != *param_2) {
    return false;
  }
  uVar5 = param_1[1];
  if (((uVar5 != param_2[1]) || (param_1[2] != param_2[2])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar5 & 1) == 0)) {
    return false;
  }
  uVar5 = param_1[3];
  if (((uVar5 != param_2[3]) || (param_1[4] != param_2[4])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar5 & 1) == 0)) {
    return false;
  }
  lVar6 = 0;
  FUN_1043aa0ac();
  iVar3 = *(int *)(lVar6 + 0x1c);
  lVar15 = (long)*(int *)(lVar15 + 0x30);
  func_0x000100029394((long)param_1 + (long)iVar3,lVar10);
  func_0x000100029394((long)param_2 + (long)iVar3,lVar10 + lVar15);
  pcVar17 = *(code **)(lVar16 + 0x30);
  lVar7 = lVar10;
  (*pcVar17)(lVar10,1,lVar4);
  if ((int)lVar7 == 1) {
    lVar15 = lVar10 + lVar15;
    (*pcVar17)(lVar15,1,lVar4);
    if ((int)lVar15 != 1) {
LAB_1043aa2cc:
      func_0x0001043aaedc(lVar10,0x112d7e680,&UNK_10d95e350);
      return false;
    }
    func_0x0001043aaedc(lVar10,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000100029394(lVar10,uVar13);
    lVar7 = lVar10 + lVar15;
    (*pcVar17)(lVar7,1,lVar4);
    if ((int)lVar7 == 1) {
      (**(code **)(lVar16 + 8))(uVar13,lVar4);
      goto LAB_1043aa2cc;
    }
    puVar8 = puVar11;
    (**(code **)(lVar16 + 0x20))(puVar11,lVar10 + lVar15,lVar4);
    func_0x000101553b98();
    uVar5 = uVar13;
    __sSQ2eeoiySbx_xtFZTj(uVar13,puVar11,lVar4,puVar8);
    pcVar17 = *(code **)(lVar16 + 8);
    (*pcVar17)(puVar11,lVar4);
    (*pcVar17)(uVar13,lVar4);
    func_0x0001043aaedc(lVar10,0x112d36580,&UNK_10d9016d0);
    if ((uVar5 & 1) == 0) {
      return false;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar6 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x20));
  uVar13 = *puVar1;
  uVar5 = puVar1[1];
  uVar14 = *puVar2;
  uVar12 = puVar2[1];
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar12 >> 0x3c) goto LAB_1043aa45c;
    func_0x000100de78a0(uVar13,uVar5);
    func_0x000100de78a0(uVar14,uVar12);
    uVar9 = uVar13;
    func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar12);
    func_0x0001000b44c0(uVar14,uVar12);
    func_0x0001000b44c0(uVar13,uVar5);
    if ((uVar9 & 1) == 0) {
      return false;
    }
  }
  else {
    if (uVar12 >> 0x3c < 0xf) goto LAB_1043aa45c;
    func_0x000100de78a0(uVar13,uVar5);
    func_0x000100de78a0(uVar14,uVar12);
    func_0x0001000b44c0(uVar13,uVar5);
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar6 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x24));
  uVar13 = *puVar1;
  uVar5 = puVar1[1];
  uVar14 = *puVar2;
  uVar12 = puVar2[1];
  if (uVar5 >> 0x3c < 0xf) {
    if (uVar12 >> 0x3c < 0xf) {
      func_0x000100de78a0(uVar13,uVar5);
      func_0x000100de78a0(uVar14,uVar12);
      uVar9 = uVar13;
      func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar12);
      func_0x0001000b44c0(uVar14,uVar12);
      func_0x0001000b44c0(uVar13,uVar5);
      if ((uVar9 & 1) == 0) {
        return false;
      }
      goto LAB_1043aa4fc;
    }
  }
  else if (0xe < uVar12 >> 0x3c) {
    func_0x000100de78a0(uVar13,uVar5);
    func_0x000100de78a0(uVar14,uVar12);
    func_0x0001000b44c0(uVar13,uVar5);
LAB_1043aa4fc:
    return *(int *)((long)param_1 + (long)*(int *)(lVar6 + 0x28)) ==
           *(int *)((long)param_2 + (long)*(int *)(lVar6 + 0x28));
  }
LAB_1043aa45c:
  func_0x000100de78a0(uVar13,uVar5);
  func_0x000100de78a0(uVar14,uVar12);
  func_0x0001000b44c0(uVar13,uVar5);
  func_0x0001000b44c0(uVar14,uVar12);
  return false;
}



/* Entry: 1043aa0ec; end: 1043aa6b7;  */

bool FUN_1043aa0ec(long *param_1,long *param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar16 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar11 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar15 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar13 = (long)puVar11 - extraout_x8_00;
  lVar15 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = uVar13 - extraout_x8_01;
  if (*param_1 != *param_2) {
    return false;
  }
  uVar5 = param_1[1];
  if (((uVar5 != param_2[1]) || (param_1[2] != param_2[2])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar5 & 1) == 0)) {
    return false;
  }
  uVar5 = param_1[3];
  if (((uVar5 != param_2[3]) || (param_1[4] != param_2[4])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar5 & 1) == 0)) {
    return false;
  }
  lVar6 = 0;
  FUN_1043aa0ac();
  iVar3 = *(int *)(lVar6 + 0x1c);
  lVar15 = (long)*(int *)(lVar15 + 0x30);
  func_0x000100029394((long)param_1 + (long)iVar3,lVar10);
  func_0x000100029394((long)param_2 + (long)iVar3,lVar10 + lVar15);
  pcVar17 = *(code **)(lVar16 + 0x30);
  lVar7 = lVar10;
  (*pcVar17)(lVar10,1,lVar4);
  if ((int)lVar7 == 1) {
    lVar15 = lVar10 + lVar15;
    (*pcVar17)(lVar15,1,lVar4);
    if ((int)lVar15 != 1) {
LAB_1043aa2cc:
      func_0x0001043aaedc(lVar10,0x112d7e680,&UNK_10d95e350);
      return false;
    }
    func_0x0001043aaedc(lVar10,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000100029394(lVar10,uVar13);
    lVar7 = lVar10 + lVar15;
    (*pcVar17)(lVar7,1,lVar4);
    if ((int)lVar7 == 1) {
      (**(code **)(lVar16 + 8))(uVar13,lVar4);
      goto LAB_1043aa2cc;
    }
    puVar8 = puVar11;
    (**(code **)(lVar16 + 0x20))(puVar11,lVar10 + lVar15,lVar4);
    func_0x000101553b98();
    uVar5 = uVar13;
    __sSQ2eeoiySbx_xtFZTj(uVar13,puVar11,lVar4,puVar8);
    pcVar17 = *(code **)(lVar16 + 8);
    (*pcVar17)(puVar11,lVar4);
    (*pcVar17)(uVar13,lVar4);
    func_0x0001043aaedc(lVar10,0x112d36580,&UNK_10d9016d0);
    if ((uVar5 & 1) == 0) {
      return false;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar6 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x20));
  uVar13 = *puVar1;
  uVar5 = puVar1[1];
  uVar14 = *puVar2;
  uVar12 = puVar2[1];
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar12 >> 0x3c) goto LAB_1043aa45c;
    func_0x000100de78a0(uVar13,uVar5);
    func_0x000100de78a0(uVar14,uVar12);
    uVar9 = uVar13;
    func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar12);
    func_0x0001000b44c0(uVar14,uVar12);
    func_0x0001000b44c0(uVar13,uVar5);
    if ((uVar9 & 1) == 0) {
      return false;
    }
  }
  else {
    if (uVar12 >> 0x3c < 0xf) goto LAB_1043aa45c;
    func_0x000100de78a0(uVar13,uVar5);
    func_0x000100de78a0(uVar14,uVar12);
    func_0x0001000b44c0(uVar13,uVar5);
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar6 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x24));
  uVar13 = *puVar1;
  uVar5 = puVar1[1];
  uVar14 = *puVar2;
  uVar12 = puVar2[1];
  if (uVar5 >> 0x3c < 0xf) {
    if (uVar12 >> 0x3c < 0xf) {
      func_0x000100de78a0(uVar13,uVar5);
      func_0x000100de78a0(uVar14,uVar12);
      uVar9 = uVar13;
      func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar12);
      func_0x0001000b44c0(uVar14,uVar12);
      func_0x0001000b44c0(uVar13,uVar5);
      if ((uVar9 & 1) == 0) {
        return false;
      }
      goto LAB_1043aa4fc;
    }
  }
  else if (0xe < uVar12 >> 0x3c) {
    func_0x000100de78a0(uVar13,uVar5);
    func_0x000100de78a0(uVar14,uVar12);
    func_0x0001000b44c0(uVar13,uVar5);
LAB_1043aa4fc:
    return *(int *)((long)param_1 + (long)*(int *)(lVar6 + 0x28)) ==
           *(int *)((long)param_2 + (long)*(int *)(lVar6 + 0x28));
  }
LAB_1043aa45c:
  func_0x000100de78a0(uVar13,uVar5);
  func_0x000100de78a0(uVar14,uVar12);
  func_0x0001000b44c0(uVar13,uVar5);
  func_0x0001000b44c0(uVar14,uVar12);
  return false;
}



/* Entry: 1043aa6b8; end: 1043aa783;  */

/* WARNING: Possible PIC construction at 0x0001043aa73c: Changing call to branch */

void FUN_1043aa6b8(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  iVar3 = *(int *)(param_2 + 0x1c);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar4 + -8);
  lVar5 = param_1 + iVar3;
  (**(code **)(lVar9 + 0x30))(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar9 + 8))(param_1 + iVar3,lVar4);
  }
  puVar2 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x20));
  uVar7 = puVar2[1];
  if (uVar7 >> 0x3c < 0xf) {
    uVar6 = *puVar2;
    unaff_x30 = 0x1043aa740;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x19 = param_1;
    unaff_x20 = param_2;
    unaff_x29 = puVar1;
  }
  else {
    puVar2 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x24));
    uVar7 = puVar2[1];
    if (0xe < uVar7 >> 0x3c) {
      return;
    }
    uVar6 = *puVar2;
  }
  uVar8 = (uint)(uVar7 >> 0x3e);
  if (uVar8 != 1) {
    if (uVar8 != 2) {
      return;
    }
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000107c61574(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar7 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1043aa784; end: 1043aa8fb;  */

undefined8 * FUN_1043aa784(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  uVar7 = param_2[4];
  param_1[4] = uVar7;
  lVar8 = (long)*(int *)(param_3 + 0x1c);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar3 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  lVar4 = (long)param_2 + lVar8;
  (*pcVar10)(lVar4,1,lVar3);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar9 + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar3);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,lVar3);
  }
  else {
    lVar4 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)param_1 + lVar8,(long)param_2 + lVar8,
            *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar5 = puVar2[1];
  if (uVar5 >> 0x3c < 0xf) {
    uVar6 = *puVar2;
    func_0x00010006c00c(uVar6,uVar5);
    *puVar1 = uVar6;
    puVar1[1] = uVar5;
  }
  else {
    uVar6 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar6;
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar5 = puVar2[1];
  if (uVar5 >> 0x3c < 0xf) {
    uVar6 = *puVar2;
    func_0x00010006c00c(uVar6,uVar5);
    *puVar1 = uVar6;
    puVar1[1] = uVar5;
  }
  else {
    uVar6 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar6;
  }
  *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  return param_1;
}



/* Entry: 1043aa8fc; end: 1043aab57;  */

undefined8 * FUN_1043aa8fc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar7 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  param_1[3] = param_2[3];
  uVar7 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  lVar9 = (long)*(int *)(param_3 + 0x1c);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar4 + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  lVar5 = (long)param_1 + lVar9;
  (*pcVar12)(lVar5,1,lVar4);
  lVar6 = (long)param_2 + lVar9;
  (*pcVar12)(lVar6,1,lVar4);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 != 0) {
      (**(code **)(lVar11 + 8))((long)param_1 + lVar9,lVar4);
      goto LAB_1043aa9f0;
    }
    (**(code **)(lVar11 + 0x18))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar4);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar11 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar4);
    (**(code **)(lVar11 + 0x38))((long)param_1 + lVar9,0,1,lVar4);
  }
  else {
LAB_1043aa9f0:
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
            *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar8 = puVar2[1];
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    if (0xe < uVar8 >> 0x3c) {
      func_0x0001006e5814(puVar1);
      goto LAB_1043aaa70;
    }
    uVar10 = *puVar2;
    func_0x00010006c00c(uVar10,uVar8);
    uVar7 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = uVar10;
    puVar1[1] = uVar8;
    func_0x00010006c090(uVar7,uVar3);
  }
  else if (uVar8 >> 0x3c < 0xf) {
    uVar7 = *puVar2;
    func_0x00010006c00c(uVar7,uVar8);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
  }
  else {
LAB_1043aaa70:
    uVar7 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar7;
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar8 = puVar2[1];
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    if (uVar8 >> 0x3c < 0xf) {
      uVar10 = *puVar2;
      func_0x00010006c00c(uVar10,uVar8);
      uVar7 = *puVar1;
      uVar3 = puVar1[1];
      *puVar1 = uVar10;
      puVar1[1] = uVar8;
      func_0x00010006c090(uVar7,uVar3);
      goto LAB_1043aab18;
    }
    func_0x0001006e5814(puVar1);
  }
  else if (uVar8 >> 0x3c < 0xf) {
    uVar7 = *puVar2;
    func_0x00010006c00c(uVar7,uVar8);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    goto LAB_1043aab18;
  }
  uVar7 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar7;
LAB_1043aab18:
  *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  return param_1;
}



/* Entry: 1043aab58; end: 1043aac4b;  */

undefined8 * FUN_1043aab58(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  uVar8 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar8;
  uVar8 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar8;
  lVar6 = (long)*(int *)(param_3 + 0x1c);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar4 + -8);
  lVar5 = (long)param_2 + lVar6;
  (**(code **)(lVar7 + 0x30))(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar4);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,
            *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x24);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar8 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar8;
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar8 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar8;
  *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  return param_1;
}



/* Entry: 1043aac4c; end: 1043aae27;  */

undefined8 * FUN_1043aac4c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_2[4];
  uVar4 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  lVar9 = (long)*(int *)(param_3 + 0x1c);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar5 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar6 = (long)param_1 + lVar9;
  (*pcVar11)(lVar6,1,lVar5);
  lVar7 = (long)param_2 + lVar9;
  (*pcVar11)(lVar7,1,lVar5);
  if ((int)lVar6 == 0) {
    if ((int)lVar7 != 0) {
      (**(code **)(lVar10 + 8))((long)param_1 + lVar9,lVar5);
      goto LAB_1043aad20;
    }
    (**(code **)(lVar10 + 0x28))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar5);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar5);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar5);
  }
  else {
LAB_1043aad20:
    lVar6 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
            *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    uVar8 = puVar2[1];
    if (0xe < uVar8 >> 0x3c) {
      func_0x0001006e5814(puVar1);
      goto LAB_1043aad7c;
    }
    uVar3 = *puVar1;
    *puVar1 = *puVar2;
    puVar1[1] = uVar8;
    func_0x00010006c090(uVar3);
  }
  else {
LAB_1043aad7c:
    uVar3 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar3;
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    uVar8 = puVar2[1];
    if (uVar8 >> 0x3c < 0xf) {
      uVar3 = *puVar1;
      *puVar1 = *puVar2;
      puVar1[1] = uVar8;
      func_0x00010006c090(uVar3);
      goto LAB_1043aade8;
    }
    func_0x0001006e5814(puVar1);
  }
  uVar3 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar3;
LAB_1043aade8:
  *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  return param_1;
}



/* Entry: 1043aae28; end: 1043aae3f;  */

void FUN_1043aae28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1043aae40; end: 1043aaf73;  */

void FUN_1043aae40(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_58 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_50 = &UNK_10dcf4870;
  puStack_48 = &UNK_10dcf4870;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10dcf4888;
    puStack_28 = PTR___sBi32_WV_11034d668 + 0x40;
    puStack_30 = &UNK_10dcf4888;
    _swift_initStructMetadata(param_1,0x100,7,&puStack_58,param_1 + 0x10);
  }
  return;
}



/* Entry: 1043aaf74; end: 1043aaf7b;  */

void FUN_1043aaf74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1043aaf7c; end: 1043aafaf;  */

undefined8 * FUN_1043aaf7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1043aafb0; end: 1043ab003;  */

undefined8 * FUN_1043aafb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 1043ab004; end: 1043ab03f;  */

undefined8 * FUN_1043ab004(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 1043ab040; end: 1043ab0df;  */

int FUN_1043ab040(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1043ab0e0; end: 1043ab137;  */

uint FUN_1043ab0e0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_18 = param_2[0xb];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_1043ab138(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 1043ab138; end: 1043ab2d7;  */

undefined8 FUN_1043ab138(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if (((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)) &&
     ((uVar1 = param_1[2], uVar1 == param_2[2] && param_1[3] == param_2[3] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)))) {
    uVar1 = param_1[4];
    if (((uVar1 == param_2[4]) && (param_1[5] == param_2[5])) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar1 & 1) != 0)) {
      uVar1 = param_2[7];
      if (param_1[7] == 0) {
        if (uVar1 != 0) {
          return 0;
        }
      }
      else {
        if (uVar1 == 0) {
          return 0;
        }
        uVar2 = param_1[6];
        if (((uVar2 != param_2[6]) || (param_1[7] != uVar1)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) == 0)) {
          return 0;
        }
      }
      uVar1 = param_1[8];
      if (((uVar1 == param_2[8]) && (param_1[9] == param_2[9])) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar1 & 1) != 0)) {
        uVar1 = param_2[0xb];
        if (param_1[0xb] == 0) {
          if (uVar1 == 0) {
            return 1;
          }
        }
        else if ((uVar1 != 0) &&
                (((uVar2 = param_1[10], uVar2 == param_2[10] && (param_1[0xb] == uVar1)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar2 & 1) != 0)))) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Entry: 1043ab2d8; end: 1043ab363;  */

undefined8 * FUN_1043ab2d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar5 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar5;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  return param_1;
}



/* Entry: 1043ab364; end: 1043ab44f;  */

undefined8 * FUN_1043ab364(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
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
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[10] = param_2[10];
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 1043ab450; end: 1043ab4d3;  */

undefined8 * FUN_1043ab450(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 1043ab4d4; end: 1043ab583;  */

int FUN_1043ab4d4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1043ab584; end: 1043ab593; -[_TtC18SCTopicViewerScope22SCTopicViewerLensScope lensInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ab584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074658));
  return;
}



/* Entry: 1043ab594; end: 1043ab5ef; -[_TtC18SCTopicViewerScope22SCTopicViewerLensScope sourcePageSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ab594(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113074660))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113074660);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043ab5f0; end: 1043ab5ff; -[_TtC18SCTopicViewerScope22SCTopicViewerLensScope sourcePageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043ab5f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113074668);
}



/* Entry: 1043ab600; end: 1043ab61f; -[_TtC18SCTopicViewerScope22SCTopicViewerLensScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ab600(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113074670));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043ab620; end: 1043ab667; -[_TtC18SCTopicViewerScope22SCTopicViewerLensScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ab620(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113074678;
  _swift_beginAccess(param_1 + _DAT_113074678,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043ab668; end: 1043ab6bf; -[_TtC18SCTopicViewerScope22SCTopicViewerLensScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ab668(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113074678;
  _swift_beginAccess(param_1 + _DAT_113074678,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043ab6c0; end: 1043ab6eb; -[_TtC18SCTopicViewerScope22SCTopicViewerLensScope init] */

void FUN_1043ab6c0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCTopicViewerScope.SCTopicViewerLensScope",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043ab6ec);
  (*pcVar1)();
}



/* Entry: 1043ab6ec; end: 1043ab6ef;  */

void FUN_1043ab6ec(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043ab6f0; end: 1043ab76f; -[_TtC18SCTopicViewerScope22SCTopicViewerLensScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043ab6f0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113074658));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113074660 + 8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113074670));
  param_1 = param_1 + _DAT_113074678;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1043ab770; end: 1043ab7db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ab770(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010034376c();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113074688) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1043ab7dc; end: 1043ab7e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ab7dc(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010034376c();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113074688) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1043ab7e4; end: 1043ab82f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ab7e4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113074688) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043ab830; end: 1043ab96f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043ab830(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x0001003376e4();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar3 = _DAT_113074678;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113074678,0);
  *(long *)(lVar5 + _DAT_113074658) = param_1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113074660);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(lVar5 + _DAT_113074668) = param_4;
  *(undefined8 *)(lVar5 + _DAT_113074670) = param_5;
  _swift_beginAccess(lVar5 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_6);
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  _objc_retain(param_1);
  _swift_bridgeObjectRetain(param_3);
  _swift_unknownObjectRetain(param_5);
  plVar6 = &lStack_88;
  _objc_msgSendSuper2(plVar6,puVar2);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 1043ab970; end: 1043aba4b; -[_TtC18SCTopicViewerScope30SCTopicViewerLensScopeServices buildWithLensInfo:sourcePageSessionId:sourcePageType:uiContainer:delegate:] */

void FUN_1043ab970(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  uVar1 = param_3;
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_1);
  FUN_1043ab830(param_3,param_4,param_2,param_5,param_6,param_7);
  _objc_release(uVar1);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043aba4c; end: 1043abaab; -[_TtC18SCTopicViewerScope30SCTopicViewerLensScopeServices init] */

void FUN_1043aba4c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCTopicViewerScope.SCTopicViewerLensScopeServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043aba78);
  (*pcVar1)();
}



/* Entry: 1043abaac; end: 1043abadf; -[_TtC18SCTopicViewerScope30SCTopicViewerLensScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043abaac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113074688));
  return;
}



/* Entry: 1043abae0; end: 1043abaef; -[_TtC18SCTopicViewerScope23SCTopicViewerMusicScope musicInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043abae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130746f8));
  return;
}



/* Entry: 1043abaf0; end: 1043abb3b; -[_TtC18SCTopicViewerScope23SCTopicViewerMusicScope sourcePageSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043abaf0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113074700);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113074700))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043abb3c; end: 1043abb4b; -[_TtC18SCTopicViewerScope23SCTopicViewerMusicScope sourcePageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043abb3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113074708);
}



/* Entry: 1043abb4c; end: 1043abba7; -[_TtC18SCTopicViewerScope23SCTopicViewerMusicScope sourceSnapStoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043abb4c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113074710))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113074710);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043abba8; end: 1043abbc7; -[_TtC18SCTopicViewerScope23SCTopicViewerMusicScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043abba8(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113074718));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043abbc8; end: 1043abbd7; -[_TtC18SCTopicViewerScope23SCTopicViewerMusicScope isPrivateTrack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043abbc8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113074720);
}



/* Entry: 1043abbd8; end: 1043abc1f; -[_TtC18SCTopicViewerScope23SCTopicViewerMusicScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043abbd8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113074728;
  _swift_beginAccess(param_1 + _DAT_113074728,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043abc20; end: 1043abc77; -[_TtC18SCTopicViewerScope23SCTopicViewerMusicScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043abc20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113074728;
  _swift_beginAccess(param_1 + _DAT_113074728,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043abc78; end: 1043abdc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1043abc78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  lVar3 = _DAT_113074728;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113074728,0);
  *(undefined8 *)(unaff_x20 + _DAT_1130746f8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074700);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113074708) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074710);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113074718) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_113074720) = param_8;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_9);
  puVar2 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _swift_unknownObjectRetain(param_7);
  puVar4 = auStack_88;
  _objc_msgSendSuper2(puVar4,puVar2);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_7);
  _swift_unknownObjectRelease(param_9);
  return puVar4;
}



/* Entry: 1043abdc8; end: 1043abe23;  */

undefined8 FUN_1043abdc8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 in_x6;
  undefined8 in_stack_00000000;
  
  uVar1 = param_1;
  FUN_1043abfe4();
  _objc_release(param_1);
  _swift_unknownObjectRelease(in_x6);
  _swift_unknownObjectRelease(in_stack_00000000);
  return uVar1;
}



/* Entry: 1043abe24; end: 1043abf13; -[_TtC18SCTopicViewerScope23SCTopicViewerMusicScope initWithMusicInfo:sourcePageSessionId:sourcePageType:sourceSnapStoryId:uiContainer:isPrivateTrack:delegate:] */

undefined8
FUN_1043abe24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  if (param_6 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  }
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_7);
  _swift_unknownObjectRetain(param_9);
  uVar1 = param_3;
  FUN_1043abfe4(param_3,param_4,param_2,param_5,param_6,uVar2,param_7,param_8,param_9);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_7);
  _swift_unknownObjectRelease(param_9);
  return uVar1;
}



/* Entry: 1043abf14; end: 1043abf73; -[_TtC18SCTopicViewerScope23SCTopicViewerMusicScope init] */

void FUN_1043abf14(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCTopicViewerScope.SCTopicViewerMusicScope",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043abf40);
  (*pcVar1)();
}



/* Entry: 1043abf74; end: 1043abfe3; -[_TtC18SCTopicViewerScope23SCTopicViewerMusicScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043abf74(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130746f8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113074700 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113074710 + 8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113074718));
  param_1 = param_1 + _DAT_113074728;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1043abfe4; end: 1043ac107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043abfe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _swift_getObjectType();
  lVar3 = _DAT_113074728;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113074728,0);
  *(undefined8 *)(unaff_x20 + _DAT_1130746f8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074700);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113074708) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074710);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113074718) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_113074720) = param_8;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_9);
  puVar2 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _swift_unknownObjectRetain(param_7);
  _objc_msgSendSuper2(&stack0xffffffffffffff78,puVar2);
  return;
}



/* Entry: 1043ac108; end: 1043ac12b;  */

undefined8 FUN_1043ac108(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1043ac12c; end: 1043ac173; -[_TtC18SCTopicViewerScope25SCTopicViewerRemixesScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ac12c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113074758;
  _swift_beginAccess(param_1 + _DAT_113074758,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043ac174; end: 1043ac1cb; -[_TtC18SCTopicViewerScope25SCTopicViewerRemixesScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ac174(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113074758;
  _swift_beginAccess(param_1 + _DAT_113074758,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043ac1cc; end: 1043ac1db; -[_TtC18SCTopicViewerScope25SCTopicViewerRemixesScope remixesInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ac1cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074760));
  return;
}



/* Entry: 1043ac1dc; end: 1043ac227; -[_TtC18SCTopicViewerScope25SCTopicViewerRemixesScope sourcePageSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ac1dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113074768);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113074768))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043ac228; end: 1043ac237; -[_TtC18SCTopicViewerScope25SCTopicViewerRemixesScope sourcePageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043ac228(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113074770);
}



/* Entry: 1043ac238; end: 1043ac257; -[_TtC18SCTopicViewerScope25SCTopicViewerRemixesScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ac238(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113074778));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043ac258; end: 1043ac337; -[_TtC18SCTopicViewerScope25SCTopicViewerRemixesScope cameraPresentationBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ac258(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_113074780);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x1043ac2e8;
  puStack_48 = &UNK_110764190;
  __Block_copy(&puStack_60);
  uVar2 = uStack_38;
  _swift_retain(uVar4);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1043ac338; end: 1043ac347; -[_TtC18SCTopicViewerScope25SCTopicViewerRemixesScope storiesSnapPlaybackMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ac338(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074788));
  return;
}



/* Entry: 1043ac348; end: 1043ac4b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1043ac348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  lVar3 = _DAT_113074758;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113074758,0);
  _swift_beginAccess(unaff_x20 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_9);
  *(undefined8 *)(unaff_x20 + _DAT_113074760) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074768);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113074770) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113074778) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074780);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113074788) = param_8;
  puVar2 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _swift_unknownObjectRetain(param_5);
  _swift_retain(param_7);
  _objc_retain(param_8);
  puVar4 = auStack_88;
  _objc_msgSendSuper2(puVar4,puVar2);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_5);
  _swift_release(param_7);
  _objc_release(param_8);
  _swift_unknownObjectRelease(param_9);
  return puVar4;
}



/* Entry: 1043ac4b4; end: 1043ac5cf; -[_TtC18SCTopicViewerScope25SCTopicViewerRemixesScope initWithRemixesInfo:sourcePageSessionId:sourcePageType:uiContainer:cameraPresentationBlock:storiesSnapPlaybackMetadata:delegate:] */

undefined8
FUN_1043ac4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  __Block_copy();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  puVar1 = &UNK_110764178;
  _swift_allocObject(&UNK_110764178,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_6);
  _objc_retain(param_8);
  _swift_unknownObjectRetain(param_9);
  uVar2 = param_3;
  FUN_1043ac6b0(param_3,param_4,param_2,param_5,param_6,FUN_1043ac82c,puVar1,param_8,param_9);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_6);
  _swift_release(puVar1);
  _objc_release(param_8);
  _swift_unknownObjectRelease(param_9);
  return uVar2;
}



/* Entry: 1043ac5d0; end: 1043ac62f; -[_TtC18SCTopicViewerScope25SCTopicViewerRemixesScope init] */

void FUN_1043ac5d0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCTopicViewerScope.SCTopicViewerRemixesScope",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043ac5fc);
  (*pcVar1)();
}



/* Entry: 1043ac630; end: 1043ac6af; -[_TtC18SCTopicViewerScope25SCTopicViewerRemixesScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ac630(long param_1)

{
  FUN_1043ac7e8(param_1 + _DAT_113074758);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113074760));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113074768 + 8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113074778));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113074780 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113074788));
  return;
}



/* Entry: 1043ac6b0; end: 1043ac7e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ac6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _swift_getObjectType();
  lVar3 = _DAT_113074758;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113074758,0);
  _swift_beginAccess(unaff_x20 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_9);
  *(undefined8 *)(unaff_x20 + _DAT_113074760) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074768);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113074770) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113074778) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074780);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113074788) = param_8;
  puVar2 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _swift_unknownObjectRetain(param_5);
  _swift_retain(param_7);
  _objc_retain(param_8);
  _objc_msgSendSuper2(&stack0xffffffffffffff78,puVar2);
  return;
}



/* Entry: 1043ac7e8; end: 1043ac80b;  */

undefined8 FUN_1043ac7e8(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1043ac80c; end: 1043ac82b;  */

void FUN_1043ac80c(void)

{
  _objc_opt_self(&PTR_PTR_1129a9518);
  return;
}



/* Entry: 1043ac82c; end: 1043ac857;  */

void FUN_1043ac82c(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001043ac838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1043ac858; end: 1043ac863; -[_TtC18SCTopicViewerScope18SCTopicViewerScope hashtag] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ac858(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130747b8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130747b8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043ac864; end: 1043ac86f; -[_TtC18SCTopicViewerScope18SCTopicViewerScope sourcePageSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ac864(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130747c0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130747c0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043ac870; end: 1043ac8c7;  */

void FUN_1043ac870(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043ac8c8; end: 1043ac8d7; -[_TtC18SCTopicViewerScope18SCTopicViewerScope sourcePageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043ac8c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130747c8);
}



/* Entry: 1043ac8d8; end: 1043ac8f7; -[_TtC18SCTopicViewerScope18SCTopicViewerScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ac8d8(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_1130747d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043ac8f8; end: 1043ac93f; -[_TtC18SCTopicViewerScope18SCTopicViewerScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ac8f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130747d8;
  _swift_beginAccess(param_1 + _DAT_1130747d8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043ac940; end: 1043ac997; -[_TtC18SCTopicViewerScope18SCTopicViewerScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ac940(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130747d8;
  _swift_beginAccess(param_1 + _DAT_1130747d8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043ac998; end: 1043ac9c3; -[_TtC18SCTopicViewerScope18SCTopicViewerScope init] */

void FUN_1043ac998(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCTopicViewerScope.SCTopicViewerScope",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043ac9c4);
  (*pcVar1)();
}



/* Entry: 1043ac9c4; end: 1043aca93; -[_TtC18SCTopicViewerScope18SCTopicViewerScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043ac9c4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130747b8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130747c0 + 8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130747d0));
  param_1 = param_1 + _DAT_1130747d8;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1043aca94; end: 1043acbe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043aca94(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x00010037c810();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar3 = _DAT_1130747d8;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_1130747d8,0);
  plVar6 = (long *)(lVar5 + _DAT_1130747b8);
  *plVar6 = param_1;
  plVar6[1] = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130747c0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(lVar5 + _DAT_1130747c8) = param_5;
  *(undefined8 *)(lVar5 + _DAT_1130747d0) = param_6;
  _swift_beginAccess(lVar5 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_7);
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  _swift_unknownObjectRetain(param_6);
  plVar6 = &lStack_88;
  _objc_msgSendSuper2(plVar6,puVar2);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 1043acbe4; end: 1043accd3; -[_TtC18SCTopicViewerScope26SCTopicViewerScopeServices buildWithHashtag:sourcePageSessionId:sourcePageType:uiContainer:delegate:] */

void FUN_1043acbe4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
    uVar1 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_1);
  FUN_1043aca94(param_3,uVar1,param_4,param_2,param_5,param_6,param_7);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043accd4; end: 1043accff; -[_TtC18SCTopicViewerScope26SCTopicViewerScopeServices init] */

void FUN_1043accd4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCTopicViewerScope.SCTopicViewerScopeServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043acd00);
  (*pcVar1)();
}



/* Entry: 1043acd00; end: 1043acd03;  */

void FUN_1043acd00(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043acd04; end: 1043acd37;  */

void FUN_1043acd04(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043acd38; end: 1043acd6b; -[_TtC18SCTopicViewerScope26SCTopicViewerScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043acd38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130747e8));
  return;
}



/* Entry: 1043acd6c; end: 1043acd7b; -[_TtC18SCTopicViewerScope31SCTopicViewerThirdPartyAppScope thirdPartyAppInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043acd6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074858));
  return;
}



/* Entry: 1043acd7c; end: 1043acdd7; -[_TtC18SCTopicViewerScope31SCTopicViewerThirdPartyAppScope sourcePageSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043acd7c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113074860))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113074860);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043acdd8; end: 1043acde7; -[_TtC18SCTopicViewerScope31SCTopicViewerThirdPartyAppScope sourcePageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043acdd8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113074868);
}



/* Entry: 1043acde8; end: 1043ace07; -[_TtC18SCTopicViewerScope31SCTopicViewerThirdPartyAppScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043acde8(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113074870));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043ace08; end: 1043ace4f; -[_TtC18SCTopicViewerScope31SCTopicViewerThirdPartyAppScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ace08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113074878;
  _swift_beginAccess(param_1 + _DAT_113074878,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043ace50; end: 1043acea7; -[_TtC18SCTopicViewerScope31SCTopicViewerThirdPartyAppScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ace50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113074878;
  _swift_beginAccess(param_1 + _DAT_113074878,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043acea8; end: 1043acfc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1043acea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  lVar3 = _DAT_113074878;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113074878,0);
  *(undefined8 *)(unaff_x20 + _DAT_113074858) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074860);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113074868) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113074870) = param_5;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_6);
  puVar2 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _swift_unknownObjectRetain(param_5);
  puVar4 = auStack_88;
  _objc_msgSendSuper2(puVar4,puVar2);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_6);
  return puVar4;
}



/* Entry: 1043acfc4; end: 1043ad0cf; -[_TtC18SCTopicViewerScope31SCTopicViewerThirdPartyAppScope initWithThirdPartyAppInfo:sourcePageSessionId:sourcePageType:uiContainer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043acfc4(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  lVar3 = _DAT_113074878;
  _swift_unknownObjectWeakInit(param_1 + _DAT_113074878,0);
  *(undefined8 *)(param_1 + _DAT_113074858) = param_3;
  plVar1 = (long *)(param_1 + _DAT_113074860);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113074868) = param_5;
  *(undefined8 *)(param_1 + _DAT_113074870) = param_6;
  _swift_beginAccess(param_1 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar3,param_7);
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = param_1;
  lStack_80 = lVar4;
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_6);
  _objc_msgSendSuper2(&lStack_88,puVar2);
  return;
}



/* Entry: 1043ad0d0; end: 1043ad12f; -[_TtC18SCTopicViewerScope31SCTopicViewerThirdPartyAppScope init] */

void FUN_1043ad0d0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCTopicViewerScope.SCTopicViewerThirdPartyAppScope",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043ad0fc);
  (*pcVar1)();
}



/* Entry: 1043ad130; end: 1043ad1af; -[_TtC18SCTopicViewerScope31SCTopicViewerThirdPartyAppScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043ad130(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113074858));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113074860 + 8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113074870));
  param_1 = param_1 + _DAT_113074878;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1043ad1b0; end: 1043ad1cf;  */

void FUN_1043ad1b0(void)

{
  _objc_opt_self(&PTR_PTR_1129a97a8);
  return;
}



/* Entry: 1043ad1d0; end: 1043ad1df; -[SCStoriesTopicMusicInfo isOriginalSoundTopic] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ad1d0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130748a8);
}



/* Entry: 1043ad1e0; end: 1043ad1ef; -[SCStoriesTopicMusicInfo trackMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ad1e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130748b0));
  return;
}



/* Entry: 1043ad1f0; end: 1043ad1ff; -[SCStoriesTopicMusicInfo relatedTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ad1f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130748b8));
  return;
}


