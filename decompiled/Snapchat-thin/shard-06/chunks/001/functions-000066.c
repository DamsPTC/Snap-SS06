/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104462634; end: 10446266f;  */

undefined8 * FUN_104462634(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 104462670; end: 104462753;  */

int FUN_104462670(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
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



/* Entry: 104462754; end: 104462793;  */

void FUN_104462754(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ba70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd03430;
  _swift_getWitnessTable(&UNK_10dd03430,&UNK_110773410);
  puRam000000011307ba70 = puVar1;
  return;
}



/* Entry: 104462794; end: 104462797;  */

void FUN_104462794(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ba78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd034d0;
  _swift_getWitnessTable(&UNK_10dd034d0,&UNK_110773430);
  puRam000000011307ba78 = puVar1;
  return;
}



/* Entry: 104462798; end: 1044627d7;  */

void FUN_104462798(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ba78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd034d0;
  _swift_getWitnessTable(&UNK_10dd034d0,&UNK_110773430);
  puRam000000011307ba78 = puVar1;
  return;
}



/* Entry: 1044627d8; end: 10446285b;  */

void FUN_1044627d8(void)

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



/* Entry: 10446285c; end: 1044628bf;  */

void FUN_10446285c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 1044628c0; end: 1044628f7;  */

void FUN_1044628c0(undefined8 param_1)

{
  if (lRam000000011307bad8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e809148);
  return;
}



/* Entry: 1044628f8; end: 1044628ff;  */

byte FUN_1044628f8(ulong *param_1,ulong *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  byte bVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar10 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar11 = (long)puVar10 - extraout_x8_00;
  lVar8 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = uVar11 - extraout_x8_01;
  uVar6 = *param_1;
  if (((uVar6 == *param_2) && (param_1[1] == param_2[1])) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar6 & 1) != 0)) {
    uVar6 = param_1[2];
    if (((uVar6 == param_2[2]) && (param_1[3] == param_2[3])) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar6 & 1) != 0)) {
      uVar6 = param_1[4];
      if (((uVar6 == param_2[4]) && (param_1[5] == param_2[5])) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar6 & 1) != 0)) {
        uVar6 = param_2[7];
        if (param_1[7] == 0) {
          if (uVar6 == 0) goto LAB_104462a84;
        }
        else if ((uVar6 != 0) &&
                (((uVar3 = param_1[6], uVar3 == param_2[6] && (param_1[7] == uVar6)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar3 & 1) != 0)))) {
LAB_104462a84:
          func_0x0001007bbbf8(0);
          uVar6 = param_1[8];
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar6,param_2[8]);
          if (((uVar6 & 1) != 0) && ((char)param_1[9] == (char)param_2[9])) {
            lVar4 = 0;
            FUN_1044628c0();
            iVar1 = *(int *)(lVar4 + 0x28);
            lVar8 = (long)*(int *)(lVar8 + 0x30);
            lStack_68 = lVar4;
            func_0x000100029394((long)param_1 + (long)iVar1,lVar9);
            func_0x000100029394((long)param_2 + (long)iVar1,lVar9 + lVar8);
            pcVar12 = *(code **)(lVar13 + 0x30);
            lVar4 = lVar9;
            (*pcVar12)(lVar9,1,lVar2);
            if ((int)lVar4 == 1) {
              lVar8 = lVar9 + lVar8;
              (*pcVar12)(lVar8,1,lVar2);
              if ((int)lVar8 == 1) {
                func_0x000104463478(lVar9,0x112d36580,&UNK_10d9016d0);
LAB_104462be8:
                if (*(char *)((long)param_1 + (long)*(int *)(lStack_68 + 0x2c)) ==
                    *(char *)((long)param_2 + (long)*(int *)(lStack_68 + 0x2c))) {
                  bVar7 = *(byte *)((long)param_1 + (long)*(int *)(lStack_68 + 0x30)) ^
                          *(byte *)((long)param_2 + (long)*(int *)(lStack_68 + 0x30)) ^ 1;
                  goto LAB_104462c04;
                }
              }
              else {
LAB_104462b60:
                func_0x000104463478(lVar9,0x112d7e680,&UNK_10d95e350);
              }
            }
            else {
              func_0x000100029394(lVar9,uVar11);
              lVar4 = lVar9 + lVar8;
              (*pcVar12)(lVar4,1,lVar2);
              if ((int)lVar4 == 1) {
                (**(code **)(lVar13 + 8))(uVar11,lVar2);
                goto LAB_104462b60;
              }
              puVar5 = puVar10;
              (**(code **)(lVar13 + 0x20))(puVar10,lVar9 + lVar8,lVar2);
              func_0x000101553b98();
              uVar6 = uVar11;
              __sSQ2eeoiySbx_xtFZTj(uVar11,puVar10,lVar2,puVar5);
              pcVar12 = *(code **)(lVar13 + 8);
              (*pcVar12)(puVar10,lVar2);
              (*pcVar12)(uVar11,lVar2);
              func_0x000104463478(lVar9,0x112d36580,&UNK_10d9016d0);
              if ((uVar6 & 1) != 0) goto LAB_104462be8;
            }
          }
        }
      }
    }
  }
  bVar7 = 0;
LAB_104462c04:
  return bVar7 & 1;
}



/* Entry: 104462900; end: 104462dbb;  */

byte FUN_104462900(ulong *param_1,ulong *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  byte bVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar10 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar11 = (long)puVar10 - extraout_x8_00;
  lVar8 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = uVar11 - extraout_x8_01;
  uVar6 = *param_1;
  if (((uVar6 == *param_2) && (param_1[1] == param_2[1])) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar6 & 1) != 0)) {
    uVar6 = param_1[2];
    if (((uVar6 == param_2[2]) && (param_1[3] == param_2[3])) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar6 & 1) != 0)) {
      uVar6 = param_1[4];
      if (((uVar6 == param_2[4]) && (param_1[5] == param_2[5])) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar6 & 1) != 0)) {
        uVar6 = param_2[7];
        if (param_1[7] == 0) {
          if (uVar6 == 0) goto LAB_104462a84;
        }
        else if ((uVar6 != 0) &&
                (((uVar3 = param_1[6], uVar3 == param_2[6] && (param_1[7] == uVar6)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar3 & 1) != 0)))) {
LAB_104462a84:
          func_0x0001007bbbf8(0);
          uVar6 = param_1[8];
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar6,param_2[8]);
          if (((uVar6 & 1) != 0) && ((char)param_1[9] == (char)param_2[9])) {
            lVar4 = 0;
            FUN_1044628c0();
            iVar1 = *(int *)(lVar4 + 0x28);
            lVar8 = (long)*(int *)(lVar8 + 0x30);
            lStack_68 = lVar4;
            func_0x000100029394((long)param_1 + (long)iVar1,lVar9);
            func_0x000100029394((long)param_2 + (long)iVar1,lVar9 + lVar8);
            pcVar12 = *(code **)(lVar13 + 0x30);
            lVar4 = lVar9;
            (*pcVar12)(lVar9,1,lVar2);
            if ((int)lVar4 == 1) {
              lVar8 = lVar9 + lVar8;
              (*pcVar12)(lVar8,1,lVar2);
              if ((int)lVar8 == 1) {
                func_0x000104463478(lVar9,0x112d36580,&UNK_10d9016d0);
LAB_104462be8:
                if (*(char *)((long)param_1 + (long)*(int *)(lStack_68 + 0x2c)) ==
                    *(char *)((long)param_2 + (long)*(int *)(lStack_68 + 0x2c))) {
                  bVar7 = *(byte *)((long)param_1 + (long)*(int *)(lStack_68 + 0x30)) ^
                          *(byte *)((long)param_2 + (long)*(int *)(lStack_68 + 0x30)) ^ 1;
                  goto LAB_104462c04;
                }
              }
              else {
LAB_104462b60:
                func_0x000104463478(lVar9,0x112d7e680,&UNK_10d95e350);
              }
            }
            else {
              func_0x000100029394(lVar9,uVar11);
              lVar4 = lVar9 + lVar8;
              (*pcVar12)(lVar4,1,lVar2);
              if ((int)lVar4 == 1) {
                (**(code **)(lVar13 + 8))(uVar11,lVar2);
                goto LAB_104462b60;
              }
              puVar5 = puVar10;
              (**(code **)(lVar13 + 0x20))(puVar10,lVar9 + lVar8,lVar2);
              func_0x000101553b98();
              uVar6 = uVar11;
              __sSQ2eeoiySbx_xtFZTj(uVar11,puVar10,lVar2,puVar5);
              pcVar12 = *(code **)(lVar13 + 8);
              (*pcVar12)(puVar10,lVar2);
              (*pcVar12)(uVar11,lVar2);
              func_0x000104463478(lVar9,0x112d36580,&UNK_10d9016d0);
              if ((uVar6 & 1) != 0) goto LAB_104462be8;
            }
          }
        }
      }
    }
  }
  bVar7 = 0;
LAB_104462c04:
  return bVar7 & 1;
}



/* Entry: 104462dbc; end: 104462e53;  */

void FUN_104462dbc(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  _objc_release(*(undefined8 *)(param_1 + 0x40));
  iVar1 = *(int *)(param_2 + 0x28);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104462e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 104462e54; end: 104462f9f;  */

undefined8 * FUN_104462e54(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  uVar10 = param_2[8];
  param_1[8] = uVar10;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  lVar11 = (long)*(int *)(param_3 + 0x28);
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar6 + -8);
  pcVar8 = *(code **)(lVar9 + 0x30);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _objc_retain(uVar10);
  lVar7 = (long)param_2 + lVar11;
  (*pcVar8)(lVar7,1,lVar6);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar9 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,lVar6);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar11,0,1,lVar6);
  }
  else {
    lVar7 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)param_1 + lVar11,(long)param_2 + lVar11,
            *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  }
  iVar5 = *(int *)(param_3 + 0x30);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *(undefined1 *)((long)param_1 + (long)iVar5) = *(undefined1 *)((long)param_2 + (long)iVar5);
  return param_1;
}



/* Entry: 104462fa0; end: 10446315f;  */

undefined8 * FUN_104462fa0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
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
  param_1[4] = param_2[4];
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[6] = param_2[6];
  uVar4 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_1[8];
  param_1[8] = param_2[8];
  _objc_retain();
  _objc_release(uVar4);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  lVar5 = (long)*(int *)(param_3 + 0x28);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar1 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar2 = (long)param_1 + lVar5;
  (*pcVar7)(lVar2,1,lVar1);
  lVar3 = (long)param_2 + lVar5;
  (*pcVar7)(lVar3,1,lVar1);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar6 + 0x18))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar1);
      goto LAB_104463114;
    }
    (**(code **)(lVar6 + 8))((long)param_1 + lVar5,lVar1);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar6 + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar1);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar1);
    goto LAB_104463114;
  }
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  _memcpy((long)param_1 + lVar5,(long)param_2 + lVar5,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40))
  ;
LAB_104463114:
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  return param_1;
}



/* Entry: 104463160; end: 10446324f;  */

undefined8 * FUN_104463160(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  uVar6 = param_2[4];
  uVar8 = param_2[7];
  uVar7 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar6;
  param_1[7] = uVar8;
  param_1[6] = uVar7;
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  lVar4 = (long)*(int *)(param_3 + 0x28);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar2 + -8);
  lVar3 = (long)param_2 + lVar4;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x20))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar2);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar2);
  }
  else {
    lVar3 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)param_1 + lVar4,(long)param_2 + lVar4,
            *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x30);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  return param_1;
}



/* Entry: 104463250; end: 1044633c3;  */

undefined8 * FUN_104463250(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
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
  uVar3 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  uVar3 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  uVar3 = param_1[8];
  param_1[8] = param_2[8];
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  lVar7 = (long)*(int *)(param_3 + 0x28);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar4 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar5 = (long)param_1 + lVar7;
  (*pcVar9)(lVar5,1,lVar4);
  lVar6 = (long)param_2 + lVar7;
  (*pcVar9)(lVar6,1,lVar4);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 == 0) {
      (**(code **)(lVar8 + 0x28))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar4);
      goto LAB_10446337c;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,lVar4);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar8 + 0x20))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar4);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar4);
    goto LAB_10446337c;
  }
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  _memcpy((long)param_1 + lVar7,(long)param_2 + lVar7,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40))
  ;
LAB_10446337c:
  iVar1 = *(int *)(param_3 + 0x30);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  return param_1;
}



/* Entry: 1044633c4; end: 1044633db;  */

void FUN_1044633c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1044633dc; end: 1044634b7;  */

void FUN_1044633dc(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_68 = &UNK_10dd035c8;
  puStack_60 = &UNK_10dd035c8;
  puStack_58 = &UNK_10dd035c8;
  puStack_50 = &UNK_10dd035e0;
  puStack_48 = PTR___sBOWV_11034d658 + 0x40;
  puStack_40 = &UNK_10dd035f8;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dd035f8;
    puStack_28 = &UNK_10dd035f8;
    _swift_initStructMetadata(param_1,0x100,9,&puStack_68,param_1 + 0x10);
  }
  return;
}



/* Entry: 1044634b8; end: 1044634c3; -[SCTalkParticipant username] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044634b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307bb30);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307bb30))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044634c4; end: 1044634cf; -[SCTalkParticipant userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044634c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307bb38);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307bb38))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044634d0; end: 1044634db; -[SCTalkParticipant displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044634d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307bb40);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307bb40))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044634dc; end: 104463523;  */

void FUN_1044634dc(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104463524; end: 10446357f; -[SCTalkParticipant bitmojiAvatarId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104463524(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307bb48))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307bb48);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104463580; end: 10446358f; -[SCTalkParticipant presenceColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104463580(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307bb50));
  return;
}



/* Entry: 104463590; end: 10446359f; -[SCTalkParticipant isInjectedBot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104463590(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307bb58);
}



/* Entry: 1044635a0; end: 104463677; -[SCTalkParticipant petImageURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044635a0(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x0001044654c4(param_1 + _DAT_113813638,puVar4,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104463678; end: 104463687; -[SCTalkParticipant isBirthdayToday] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104463678(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113813640);
}



/* Entry: 104463688; end: 104463697; -[SCTalkParticipant isAiChatbot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104463688(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113813648);
}



/* Entry: 104463698; end: 10446394b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104463698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined4 param_13)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bb30);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bb38);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bb40);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bb48);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11307bb50) = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_11307bb58) = param_10;
  func_0x0001044654c4(param_12,unaff_x20 + _DAT_113813638,0x112d36580,&UNK_10d9016d0);
  *(undefined1 *)(unaff_x20 + _DAT_113813640) = (undefined1)param_13;
  *(undefined1 *)(unaff_x20 + _DAT_113813648) = param_13._1_1_;
  puVar2 = auStack_70;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  func_0x000104465484(param_12,0x112d36580,&UNK_10d9016d0);
  return puVar2;
}



/* Entry: 10446394c; end: 104463acb; -[SCTalkParticipant initWithUsername:userId:displayName:bitmojiAvatarId:presenceColor:isInjectedBot:petImageURL:isBirthdayToday:isAiChatbot:] */

void FUN_10446394c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined4 param_8,long param_9
                  ,undefined4 param_10)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined1 *puVar7;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  lVar1 = 0x112d36580;
  puVar4 = &UNK_10d9016d0;
  uStack_78 = param_7;
  uStack_6c = param_8;
  uStack_68 = param_1;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar7 = auStack_90 + lVar1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puStack_88 = puVar4;
  uStack_80 = param_3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  puVar5 = puVar4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  if (param_6 == 0) {
    param_6 = 0;
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = puVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  }
  if (param_9 == 0) {
    lVar2 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar7,param_9);
    lVar2 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar7,param_9 == 0,1);
  uVar3 = uStack_78;
  _objc_retain();
  auStack_98[lVar1 + 1] = param_10._1_1_;
  auStack_98[lVar1] = (undefined1)param_10;
  *(undefined1 **)((long)&uStack_a0 + lVar1) = puVar7;
  auStack_a8[lVar1] = (char)uStack_6c;
  *(undefined8 *)((long)&uStack_b0 + lVar1) = uVar3;
  func_0x0001044637f4(uStack_80,puStack_88,param_4,puVar4,param_5,puVar5,param_6,puVar6);
  return;
}



/* Entry: 104463acc; end: 104463afb;  */

void FUN_104463acc(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104463afc(param_1);
  return;
}



/* Entry: 104463afc; end: 104463c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104463afc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  
  puVar8 = &stack0xffffffffffffff90;
  _swift_getObjectType();
  uVar2 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bb30);
  *puVar1 = *param_1;
  puVar1[1] = uVar2;
  uVar3 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bb38);
  *puVar1 = param_1[2];
  puVar1[1] = uVar3;
  uVar4 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bb40);
  *puVar1 = param_1[4];
  puVar1[1] = uVar4;
  uVar9 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bb48);
  puVar1[1] = param_1[7];
  *puVar1 = uVar9;
  uVar9 = param_1[7];
  uVar5 = param_1[8];
  *(undefined8 *)(unaff_x20 + _DAT_11307bb50) = uVar5;
  *(undefined1 *)(unaff_x20 + _DAT_11307bb58) = *(undefined1 *)(param_1 + 9);
  lVar7 = 0;
  FUN_1044628c0();
  func_0x0001044654c4((long)param_1 + (long)*(int *)(lVar7 + 0x28),unaff_x20 + _DAT_113813638,
                      0x112d36580,&UNK_10d9016d0);
  *(undefined1 *)(unaff_x20 + _DAT_113813640) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x2c));
  *(undefined1 *)(unaff_x20 + _DAT_113813648) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x30));
  puVar6 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar9);
  _objc_retain(uVar5);
  _objc_msgSendSuper2(&stack0xffffffffffffff90,puVar6);
  FUN_104463c64(param_1);
  return puVar8;
}



/* Entry: 104463c64; end: 104463c9f;  */

undefined8 FUN_104463c64(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1044628c0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 104463ca0; end: 104463cd3; -[SCTalkParticipant hash] */

undefined8 FUN_104463ca0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104463cd4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104463cd4; end: 104463f1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104463cd4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [72];
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_90 + -extraout_x8;
  __ss6HasherVABycfC(auStack_88);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11307bb30);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar5,((undefined8 *)(unaff_x20 + _DAT_11307bb30))[1]);
  uVar1 = uVar5;
  func_0x00010bfde980();
  _objc_release(uVar5);
  __ss6HasherV8_combineyySuF(uVar1);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11307bb38);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar5,((undefined8 *)(unaff_x20 + _DAT_11307bb38))[1]);
  uVar1 = uVar5;
  func_0x00010bfde980();
  _objc_release(uVar5);
  __ss6HasherV8_combineyySuF(uVar1);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11307bb40);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar5,((undefined8 *)(unaff_x20 + _DAT_11307bb40))[1]);
  uVar1 = uVar5;
  func_0x00010bfde980();
  _objc_release(uVar5);
  __ss6HasherV8_combineyySuF(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11307bb48))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11307bb48);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  func_0x00010bfde980(*(undefined8 *)(unaff_x20 + _DAT_11307bb50));
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11307bb58));
  func_0x0001044654c4(unaff_x20 + _DAT_113813638,puVar4,0x112d36580,&UNK_10d9016d0);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar2 + -8);
  puVar3 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar2);
  if ((int)puVar3 == 1) {
    func_0x000104465484(puVar4,0x112d36580,&UNK_10d9016d0);
    puVar4 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar6 + 8))(puVar4,lVar2);
    puVar4 = puVar3;
    func_0x00010bfde980(puVar3);
    _objc_release(puVar3);
  }
  __ss6HasherV8_combineyySuF(puVar4);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113813640));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113813648));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104463f20; end: 104464437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104463f20(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  uint uVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  undefined1 auStack_c0 [8];
  undefined1 *puStack_b8;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar16 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar17 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)puVar16 - extraout_x8_00;
  lVar14 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  lVar14 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar14 - extraout_x12;
  func_0x0001044654c4(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x000104465484(auStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar6 = &lStack_88;
    _swift_dynamicCast(plVar6,auStack_80,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar6 & 1) != 0) {
      lVar8 = *(long *)(unaff_x20 + _DAT_11307bb30);
      if ((lVar8 == *(long *)(lStack_88 + _DAT_11307bb30)) &&
         (((long *)(unaff_x20 + _DAT_11307bb30))[1] == ((long *)(lStack_88 + _DAT_11307bb30))[1])) {
        uStack_94 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_94 = (uint)lVar8;
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11307bb38);
      if ((lVar8 == *(long *)(lStack_88 + _DAT_11307bb38)) &&
         (((long *)(unaff_x20 + _DAT_11307bb38))[1] == ((long *)(lStack_88 + _DAT_11307bb38))[1])) {
        uStack_98 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_98 = (uint)lVar8;
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11307bb40);
      if ((lVar8 == *(long *)(lStack_88 + _DAT_11307bb40)) &&
         (((long *)(unaff_x20 + _DAT_11307bb40))[1] == ((long *)(lStack_88 + _DAT_11307bb40))[1])) {
        uStack_9c = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_9c = (uint)lVar8;
      }
      lVar8 = ((long *)(unaff_x20 + _DAT_11307bb48))[1];
      lVar9 = ((long *)(lStack_88 + _DAT_11307bb48))[1];
      uStack_a0 = (uint)(lVar8 == 0 && lVar9 == 0);
      puStack_b8 = puVar16;
      lStack_90 = lVar12;
      if ((lVar8 != 0) && (lVar9 != 0)) {
        lVar12 = *(long *)(unaff_x20 + _DAT_11307bb48);
        if ((lVar12 == *(long *)(lStack_88 + _DAT_11307bb48)) && (lVar8 == lVar9)) {
          uStack_a0 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_a0 = (uint)lVar12;
        }
      }
      uStack_a4 = (uint)*(undefined8 *)(unaff_x20 + _DAT_11307bb50);
      func_0x00010c071ae0();
      lVar8 = _DAT_113813638;
      uStack_a8 = (uint)*(byte *)(unaff_x20 + _DAT_11307bb58);
      uStack_ac = (uint)*(byte *)(lStack_88 + _DAT_11307bb58);
      func_0x0001044654c4(lStack_88 + _DAT_113813638,lVar15,0x112d36580,&UNK_10d9016d0);
      lVar17 = (long)*(int *)(lVar17 + 0x30);
      func_0x0001044654c4(unaff_x20 + lVar8,lVar11,0x112d36580,&UNK_10d9016d0);
      func_0x0001044654c4(lVar15,lVar11 + lVar17,0x112d36580,&UNK_10d9016d0);
      lVar8 = lStack_90;
      pcVar13 = *(code **)(lStack_90 + 0x30);
      lVar12 = lVar11;
      (*pcVar13)(lVar11,1,lVar5);
      if ((int)lVar12 == 1) {
        func_0x000104465484(lVar15,0x112d36580,&UNK_10d9016d0);
        lVar17 = lVar11 + lVar17;
        (*pcVar13)(lVar17,1,lVar5);
        if ((int)lVar17 == 1) {
          func_0x000104465484(lVar11,0x112d36580,&UNK_10d9016d0);
          uVar10 = 0;
        }
        else {
LAB_104464304:
          func_0x000104465484(lVar11,0x112d7e680,&UNK_10d95e350);
          uVar10 = 1;
        }
      }
      else {
        func_0x0001044654c4(lVar11,lVar14,0x112d36580,&UNK_10d9016d0);
        lVar12 = lVar11 + lVar17;
        (*pcVar13)(lVar12,1,lVar5);
        puVar16 = puStack_b8;
        if ((int)lVar12 == 1) {
          func_0x000104465484(lVar15,0x112d36580,&UNK_10d9016d0);
          (**(code **)(lVar8 + 8))(lVar14,lVar5);
          goto LAB_104464304;
        }
        puVar7 = puStack_b8;
        (**(code **)(lVar8 + 0x20))(puStack_b8,lVar11 + lVar17,lVar5);
        func_0x000101553b98();
        lVar17 = lVar14;
        __sSQ2eeoiySbx_xtFZTj(lVar14,puVar16,lVar5,puVar7);
        pcVar13 = *(code **)(lVar8 + 8);
        (*pcVar13)(puVar16,lVar5);
        func_0x000104465484(lVar15,0x112d36580,&UNK_10d9016d0);
        (*pcVar13)(lVar14,lVar5);
        func_0x000104465484(lVar11,0x112d36580,&UNK_10d9016d0);
        uVar10 = (uint)lVar17 ^ 1;
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_113813640);
      bVar2 = *(byte *)(lStack_88 + _DAT_113813640);
      bVar3 = *(byte *)(unaff_x20 + _DAT_113813648);
      bVar4 = *(byte *)(lStack_88 + _DAT_113813648);
      _objc_release(lStack_88);
      uVar10 = (uStack_94 & uStack_98 & uStack_9c & uStack_a4 & uStack_a0 ^ 1 |
                uStack_a8 ^ uStack_ac | uVar10 | (uint)(byte)(bVar1 ^ bVar2 | bVar3 ^ bVar4)) ^ 1;
      goto LAB_104464414;
    }
  }
  uVar10 = 0;
LAB_104464414:
  return uVar10 & 1;
}



/* Entry: 104464438; end: 1044644c7; -[SCTalkParticipant isEqual:] */

uint FUN_104464438(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104463f20(&uStack_40);
  _objc_release(param_1);
  func_0x000104465484(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1044644c8; end: 1044644cb; -[SCTalkParticipant copyWithZone:] */

void FUN_1044644c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044644cc; end: 104464513; -[SCTalkParticipant description] */

void FUN_1044644cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_104464514();
  _objc_release(param_1);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104464514; end: 10446467b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104464514(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  undefined8 *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar6 = 0;
  FUN_1044628c0();
  lVar7 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = (undefined8 *)(&stack0xffffffffffffffb0 + lVar5);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_11307bb30))[1];
  *puVar8 = *(undefined8 *)(unaff_x20 + _DAT_11307bb30);
  *(undefined8 *)(&stack0xffffffffffffffb8 + lVar5) = uVar2;
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_11307bb38))[1];
  *(undefined8 *)(&stack0xffffffffffffffc0 + lVar5) = *(undefined8 *)(unaff_x20 + _DAT_11307bb38);
  *(undefined8 *)(&stack0xffffffffffffffc8 + lVar5) = uVar3;
  uVar4 = ((undefined8 *)(unaff_x20 + _DAT_11307bb40))[1];
  *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = *(undefined8 *)(unaff_x20 + _DAT_11307bb40);
  *(undefined8 *)(&stack0xffffffffffffffd8 + lVar5) = uVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bb48);
  uVar9 = puVar1[1];
  uVar10 = *puVar1;
  *(undefined8 *)(&stack0xffffffffffffffe8 + lVar5) = puVar1[1];
  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar5) = uVar10;
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_11307bb50);
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar5) = uVar10;
  (&stack0xfffffffffffffff8)[lVar5] = *(undefined1 *)(unaff_x20 + _DAT_11307bb58);
  func_0x0001044654c4(unaff_x20 + _DAT_113813638,(long)puVar8 + (long)*(int *)(lVar7 + 0x28),
                      0x112d36580,&UNK_10d9016d0);
  *(undefined1 *)((long)puVar8 + (long)*(int *)(lVar6 + 0x2c)) =
       *(undefined1 *)(unaff_x20 + _DAT_113813640);
  *(undefined1 *)((long)puVar8 + (long)*(int *)(lVar6 + 0x30)) =
       *(undefined1 *)(unaff_x20 + _DAT_113813648);
  _swift_bridgeObjectRetain(uVar9);
  _objc_retain(uVar10);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  FUN_104463c64(puVar8);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 10446467c; end: 1044646c3; -[SCTalkParticipant init] */

void FUN_10446467c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"TalkAPI/SCTalkParticipantWrapper.swift",0x26,
             2,0x62,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044646c4);
  (*pcVar1)();
}



/* Entry: 1044646c4; end: 1044646df; +[SCTalkParticipantBuilder talkParticipant] */

void FUN_1044646c4(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044646e0; end: 10446471f; +[SCTalkParticipantBuilder talkParticipantWithExistingTalkParticipant:] */

void FUN_1044646e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_104464fb4(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104464720; end: 10446472b; -[SCTalkParticipantBuilder withUsername:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104464720(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11307bb60);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  _objc_retain(param_1);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10446472c; end: 104464737; -[SCTalkParticipantBuilder withUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446472c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11307bb68);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  _objc_retain(param_1);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104464738; end: 104464743; -[SCTalkParticipantBuilder withDisplayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104464738(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11307bb70);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  _objc_retain(param_1);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104464744; end: 104464793;  */

void FUN_104464744(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + *param_4);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  _objc_retain(param_1);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104464794; end: 1044647f7; -[SCTalkParticipantBuilder withBitmojiAvatarId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104464794(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11307bb78);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1044647f8; end: 10446483f; -[SCTalkParticipantBuilder withPresenceColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1044647f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11307bb80);
  *(undefined8 *)(param_1 + _DAT_11307bb80) = param_3;
  _objc_retain(param_3);
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104464840; end: 10446484f; -[SCTalkParticipantBuilder withIsInjectedBot:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104464840(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11307bb88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 104464850; end: 10446495b; -[SCTalkParticipantBuilder withPetImageURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104464850(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_50 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_3 == 0,1);
  lVar1 = _DAT_11307bb90;
  _swift_beginAccess(param_1 + _DAT_11307bb90,auStack_48,0x21,0);
  lVar2 = param_1;
  _objc_retain(param_1);
  func_0x00010137dd74(puVar3,param_1 + lVar1);
  _swift_endAccess(auStack_48);
  func_0x000104465484(puVar3,0x112d36580,&UNK_10d9016d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10446495c; end: 10446496b; -[SCTalkParticipantBuilder withIsBirthdayToday:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446495c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11307bb98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10446496c; end: 10446497b; -[SCTalkParticipantBuilder withIsAiChatbot:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446496c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11307bba0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10446497c; end: 104464c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446497c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar17 = ((undefined8 *)(unaff_x20 + _DAT_11307bb60))[1];
  if (lVar17 == 0) {
    uVar11 = 0x656d616e72657375;
    uVar12 = 0xe800000000000000;
  }
  else {
    lVar15 = ((undefined8 *)(unaff_x20 + _DAT_11307bb68))[1];
    if (lVar15 == 0) {
      uVar11 = 0x644972657375;
      uVar12 = 0xe600000000000000;
    }
    else {
      lVar16 = ((undefined8 *)(unaff_x20 + _DAT_11307bb70))[1];
      if (lVar16 == 0) {
        uVar11 = 0x4e79616c70736964;
        uVar12 = 0xeb00000000656d61;
      }
      else {
        lVar14 = *(long *)(unaff_x20 + _DAT_11307bb80);
        if (lVar14 != 0) {
          uVar11 = *(undefined8 *)(unaff_x20 + _DAT_11307bb60);
          uVar12 = *(undefined8 *)(unaff_x20 + _DAT_11307bb68);
          uVar13 = *(undefined8 *)(unaff_x20 + _DAT_11307bb70);
          bVar4 = *(byte *)(unaff_x20 + _DAT_11307bb88);
          if (bVar4 == 2) {
            *(undefined1 *)(unaff_x20 + _DAT_11307bb88) = 0;
          }
          bVar5 = *(byte *)(unaff_x20 + _DAT_11307bb98);
          if (bVar5 == 2) {
            *(undefined1 *)(unaff_x20 + _DAT_11307bb98) = 0;
          }
          bVar6 = *(byte *)(unaff_x20 + _DAT_11307bba0);
          if (bVar6 == 2) {
            *(undefined1 *)(unaff_x20 + _DAT_11307bba0) = 0;
          }
          lVar8 = _DAT_11307bb90;
          uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11307bb78);
          uVar3 = ((undefined8 *)(unaff_x20 + _DAT_11307bb78))[1];
          _swift_beginAccess(unaff_x20 + _DAT_11307bb90,auStack_78,0,0);
          lVar9 = 0;
          FUN_104465358();
          lVar10 = lVar9;
          _objc_allocWithZone();
          puVar1 = (undefined8 *)(lVar10 + _DAT_11307bb30);
          *puVar1 = uVar11;
          puVar1[1] = lVar17;
          puVar1 = (undefined8 *)(lVar10 + _DAT_11307bb38);
          *puVar1 = uVar12;
          puVar1[1] = lVar15;
          puVar1 = (undefined8 *)(lVar10 + _DAT_11307bb40);
          *puVar1 = uVar13;
          puVar1[1] = lVar16;
          puVar1 = (undefined8 *)(lVar10 + _DAT_11307bb48);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          *(long *)(lVar10 + _DAT_11307bb50) = lVar14;
          *(byte *)(lVar10 + _DAT_11307bb58) = bVar4 & 1;
          func_0x0001044654c4(unaff_x20 + lVar8,lVar10 + _DAT_113813638,0x112d36580,&UNK_10d9016d0);
          *(byte *)(lVar10 + _DAT_113813640) = bVar5 & 1;
          *(byte *)(lVar10 + _DAT_113813648) = bVar6 & 1;
          puVar7 = PTR_s_init_1125d9248;
          lStack_88 = lVar10;
          lStack_80 = lVar9;
          _swift_bridgeObjectRetain(lVar17);
          _swift_bridgeObjectRetain(lVar15);
          _swift_bridgeObjectRetain(lVar16);
          _objc_retain(lVar14);
          _swift_bridgeObjectRetain(uVar3);
          _objc_msgSendSuper2(&lStack_88,puVar7);
          return;
        }
        uVar11 = 0x65636e6573657270;
        uVar12 = 0xed0000726f6c6f43;
      }
    }
  }
  FUN_1044651a0(uVar11,uVar12);
  _swift_willThrow();
  return;
}



/* Entry: 104464c40; end: 104464cab; -[SCTalkParticipantBuilder build] */

/* WARNING: Removing unreachable block (ram,0x000104464c8c) */

void FUN_104464c40(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10446497c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104464cac; end: 104464e23; -[SCTalkParticipantBuilder safeBuildAndReturnError:] */

/* WARNING: Removing unreachable block (ram,0x000104464ce8) */
/* WARNING: Removing unreachable block (ram,0x000104464d1c) */
/* WARNING: Removing unreachable block (ram,0x000104464cec) */

void FUN_104464cac(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10446497c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104464e24; end: 104464e43; -[SCTalkParticipantBuilder init] */

void FUN_104464e24(void)

{
  func_0x000104464d3c();
  return;
}



/* Entry: 104464e44; end: 104464e47;  */

void FUN_104464e44(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104464e48; end: 104464ee3; -[SCTalkParticipantBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104464e48(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307bb60 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307bb68 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307bb70 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307bb78 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307bb80));
  func_0x000104465484(param_1 + _DAT_11307bb90,0x112d36580,&UNK_10d9016d0);
  return;
}



/* Entry: 104464ee4; end: 104464f17;  */

void FUN_104464ee4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104464f18; end: 104464fb3; -[SCTalkParticipant .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104464f18(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307bb30 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307bb38 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307bb40 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307bb48 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307bb50));
  func_0x000104465484(param_1 + _DAT_113813638,0x112d36580,&UNK_10d9016d0);
  return;
}



/* Entry: 104464fb4; end: 10446519f;  */

/* WARNING: Possible PIC construction at 0x000104464ff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104464ff4) */

void FUN_104464fb4(long param_1)

{
  if (param_1 == 0) {
    func_0x00010446539c();
    _objc_allocWithZone();
  }
  else {
    func_0x00010446539c(0);
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1044651a0; end: 104465357;  */

undefined * FUN_1044651a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar6 = auStack_90;
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  __ss11_StringGutsV4growyySiF(0x33);
  __sSS6appendyySSF(0xd000000000000027,0x800000010f11f8b0);
  __sSS6appendyySSF(param_1,param_2);
  __sSS6appendyySSF(0x736e752073692027,0xea00000000007465);
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0xe000000000000000;
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  _swift_setDeallocating(lVar2);
  func_0x000104465484((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f11f880);
  lVar2 = lVar4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(lVar4);
  func_0x00010c00e2e0(puVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  return puVar5;
}



/* Entry: 104465358; end: 1044653af;  */

void FUN_104465358(undefined8 param_1)

{
  if (lRam000000011307bbd0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e809170);
  return;
}



/* Entry: 1044653b0; end: 1044653df;  */

void FUN_1044653b0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,param_3);
  return;
}



/* Entry: 1044653e0; end: 1044653fb;  */

void FUN_1044653e0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_68 = &UNK_10dd03640;
  puStack_60 = &UNK_10dd03640;
  puStack_58 = &UNK_10dd03640;
  puStack_50 = &UNK_10dd03640;
  puStack_48 = &UNK_10dd03688;
  puStack_40 = &UNK_10dd036a0;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dd036a0;
    puStack_28 = &UNK_10dd036a0;
    _swift_updateClassMetadata2(param_1,0x100,9,&puStack_68,param_1 + 0x50);
  }
  return;
}



/* Entry: 1044653fc; end: 10446550b;  */

void FUN_1044653fc(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_50 = &UNK_10dd03640;
  lVar1 = 0x13f;
  uStack_68 = param_4;
  uStack_60 = param_4;
  uStack_58 = param_4;
  uStack_48 = param_5;
  uStack_40 = param_6;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    uStack_30 = param_6;
    uStack_28 = param_6;
    _swift_updateClassMetadata2(param_1,0x100,9,&uStack_68,param_1 + 0x50);
  }
  return;
}



/* Entry: 10446550c; end: 10446550f;  */

void FUN_10446550c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104465510; end: 10446551b; -[SCIncomingCallRequest conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104465510(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307bc18);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307bc18))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10446551c; end: 10446552b; -[SCIncomingCallRequest media] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10446551c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307bc20);
}



/* Entry: 10446552c; end: 104465537; -[SCIncomingCallRequest senderUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446552c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307bc28);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307bc28))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104465538; end: 104465543; -[SCIncomingCallRequest talkCorePayload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104465538(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307bc30);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307bc30))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104465544; end: 10446558b;  */

void FUN_104465544(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10446558c; end: 10446559b; -[SCIncomingCallRequest isGroup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10446558c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307bc38);
}



/* Entry: 10446559c; end: 1044655f7; -[SCIncomingCallRequest sealedEnvelope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446559c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307bc40))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307bc40);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044655f8; end: 1044657af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044655f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bc18);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307bc20) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bc28);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bc30);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_11307bc38) = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bc40);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044657b0; end: 1044658cb; -[SCIncomingCallRequest initWithConversationId:media:senderUserId:talkCorePayload:isGroup:sealedEnvelope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044657b0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,long param_8)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar4 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar5 = lVar4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_8 == 0) {
    param_8 = 0;
    lVar6 = 0;
  }
  else {
    lVar6 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11307bc18);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11307bc20) = param_4;
  puVar1 = (undefined8 *)(param_1 + _DAT_11307bc28);
  *puVar1 = param_5;
  puVar1[1] = lVar4;
  puVar1 = (undefined8 *)(param_1 + _DAT_11307bc30);
  *puVar1 = param_6;
  puVar1[1] = lVar5;
  *(undefined1 *)(param_1 + _DAT_11307bc38) = param_7;
  plVar2 = (long *)(param_1 + _DAT_11307bc40);
  *plVar2 = param_8;
  plVar2[1] = lVar6;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044658cc; end: 1044659cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044658cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_90 [8];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_allocWithZone();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bc18);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  *(undefined8 *)(unaff_x20 + _DAT_11307bc20) = param_1[2];
  uStack_48 = param_1[4];
  uStack_50 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bc28);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[6];
  uStack_60 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bc30);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  *(undefined1 *)(unaff_x20 + _DAT_11307bc38) = *(undefined1 *)(param_1 + 7);
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bc40);
  puVar1[1] = uStack_68;
  *puVar1 = uStack_70;
  func_0x000100402194(&uStack_40,auStack_80);
  func_0x000100402194(&uStack_50,auStack_80);
  func_0x000100402194(&uStack_60,auStack_80);
  func_0x000104465f50(&uStack_70,auStack_80,0x112d35ff8,&UNK_10d900cd0);
  FUN_1044659d0(param_1);
  _objc_msgSendSuper2(auStack_90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044659d0; end: 104465a03;  */

undefined8 FUN_1044659d0(undefined8 param_1)

{
  (*(code *)(undefined *)0x1044622b4)();
  return param_1;
}



/* Entry: 104465a04; end: 104465a37; -[SCIncomingCallRequest hash] */

undefined8 FUN_104465a04(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104465a38();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104465a38; end: 104465b7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104465a38(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11307bc18);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11307bc18))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11307bc20));
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11307bc28);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11307bc28))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11307bc30);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11307bc30))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11307bc38));
  if (((undefined8 *)(unaff_x20 + _DAT_11307bc40))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11307bc40);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104465b7c; end: 104465db3;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104465b7c(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  func_0x000104465f50(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
    return 0;
  }
  plVar4 = &lStack_88;
  _swift_dynamicCast(plVar4,auStack_80,PTR___sypN_11034f1a8 + 8,lVar6,6);
  if (((ulong)plVar4 & 1) == 0) {
    return 0;
  }
  uVar7 = *(ulong *)(unaff_x20 + _DAT_11307bc18);
  if (uVar7 == *(ulong *)(lStack_88 + _DAT_11307bc18) &&
      ((ulong *)(unaff_x20 + _DAT_11307bc18))[1] == ((ulong *)(lStack_88 + _DAT_11307bc18))[1]) {
    uVar7 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
  }
  lVar11 = *(long *)(unaff_x20 + _DAT_11307bc20);
  lVar12 = *(long *)(lStack_88 + _DAT_11307bc20);
  lVar6 = *(long *)(unaff_x20 + _DAT_11307bc28);
  if (lVar6 == *(long *)(lStack_88 + _DAT_11307bc28) &&
      ((long *)(unaff_x20 + _DAT_11307bc28))[1] == ((long *)(lStack_88 + _DAT_11307bc28))[1]) {
    uVar3 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    uVar3 = (uint)lVar6;
  }
  lVar6 = *(long *)(unaff_x20 + _DAT_11307bc30);
  if ((lVar6 == *(long *)(lStack_88 + _DAT_11307bc30)) &&
     (((long *)(unaff_x20 + _DAT_11307bc30))[1] == ((long *)(lStack_88 + _DAT_11307bc30))[1])) {
    uVar10 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    uVar10 = (uint)lVar6;
  }
  bVar1 = *(byte *)(unaff_x20 + _DAT_11307bc38);
  bVar2 = *(byte *)(lStack_88 + _DAT_11307bc38);
  lVar6 = ((long *)(unaff_x20 + _DAT_11307bc40))[1];
  lVar9 = ((long *)(lStack_88 + _DAT_11307bc40))[1];
  if (lVar6 == 0) {
    _swift_bridgeObjectRetain(lVar9);
    _objc_release(lStack_88);
    if (lVar9 == 0) {
      uVar8 = 1;
    }
    else {
      _swift_bridgeObjectRelease(lVar9);
      uVar8 = 0;
    }
  }
  else {
    uVar8 = 0;
    if (lVar9 != 0) {
      lVar5 = *(long *)(unaff_x20 + _DAT_11307bc40);
      if ((lVar5 == *(long *)(lStack_88 + _DAT_11307bc40)) && (lVar6 == lVar9)) {
        _objc_release(lStack_88);
        uVar8 = 1;
        goto joined_r0x000104465d18;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar8 = (uint)lVar5;
    }
    _objc_release(lStack_88);
  }
joined_r0x000104465d18:
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  return (uint)(lVar11 == lVar12) & uVar3 & uVar10 & ((bVar1 ^ bVar2) ^ 1) & uVar8;
}



/* Entry: 104465db4; end: 104465e33; -[SCIncomingCallRequest isEqual:] */

uint FUN_104465db4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104465b7c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104465e34; end: 104465e37; -[SCIncomingCallRequest copyWithZone:] */

void FUN_104465e34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104465e38; end: 104465e6b; -[SCIncomingCallRequest description] */

void FUN_104465e38(void)

{
  undefined1 auStack_60 [80];
  
  FUN_104465f98(auStack_60);
  FUN_1044659d0(auStack_60);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104465e6c; end: 104465ee7; -[SCIncomingCallRequest init] */

void FUN_104465e6c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"TalkAPI/SCIncomingCallRequestWrapper.swift",
             0x2a,2,0x51,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104465eb4);
  (*pcVar1)();
}



/* Entry: 104465ee8; end: 104465f97; -[SCIncomingCallRequest .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104465ee8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307bc18 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307bc28 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307bc30 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307bc40 + 8))
  ;
  return;
}



/* Entry: 104465f98; end: 104466047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104465f98(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = ((undefined8 *)(param_2 + _DAT_11307bc18))[1];
  uVar6 = *(undefined8 *)(param_2 + _DAT_11307bc20);
  uVar7 = *(undefined8 *)(param_2 + _DAT_11307bc28);
  uVar3 = ((undefined8 *)(param_2 + _DAT_11307bc28))[1];
  uVar8 = *(undefined8 *)(param_2 + _DAT_11307bc30);
  uVar4 = ((undefined8 *)(param_2 + _DAT_11307bc30))[1];
  uVar5 = *(undefined1 *)(param_2 + _DAT_11307bc38);
  puVar1 = (undefined8 *)(param_2 + _DAT_11307bc40);
  *param_1 = *(undefined8 *)(param_2 + _DAT_11307bc18);
  param_1[1] = uVar2;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  param_1[4] = uVar3;
  param_1[5] = uVar8;
  param_1[6] = uVar4;
  *(undefined1 *)(param_1 + 7) = uVar5;
  uVar7 = puVar1[1];
  uVar8 = *puVar1;
  param_1[9] = puVar1[1];
  param_1[8] = uVar8;
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar7);
  return;
}



/* Entry: 104466048; end: 104466067;  */

void FUN_104466048(void)

{
  _objc_opt_self(&PTR_PTR_1129b9a60);
  return;
}



/* Entry: 104466068; end: 104466113;  */

void FUN_104466068(void)

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



/* Entry: 104466114; end: 104466153;  */

void FUN_104466114(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 104466154; end: 1044661d7; -[SCActivateAction description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104466154(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_11307bc70) == '\x01') {
    if (*(char *)(param_1 + _DAT_11307bc88 + 8) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104466184);
      (*pcVar1)();
    }
  }
  else {
    if (*(char *)(param_1 + _DAT_11307bc78 + 8) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1044661d4);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + _DAT_11307bc80 + 8) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1044661d8);
      (*pcVar1)();
    }
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044661d8; end: 10446621f; -[SCActivateAction init] */

void FUN_1044661d8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"TalkAPI/SCActivateActionWrapper.swift",0x25,2
             ,0x31,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104466220);
  (*pcVar1)();
}



/* Entry: 104466220; end: 10446623f; -[SCActivateAction hash] */

void FUN_104466220(void)

{
  FUN_104466240();
  return;
}



/* Entry: 104466240; end: 10446649b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104466240(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_11307bc70));
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307bc78) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11307bc78);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307bc80) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11307bc80);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307bc88) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11307bc88);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10446649c; end: 10446651b; -[SCActivateAction isEqual:] */

uint FUN_10446649c(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x00010446635c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10446651c; end: 10446651f; -[SCActivateAction copyWithZone:] */

void FUN_10446651c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104466520; end: 1044665bb; +[SCActivateAction startCallWithCallMedia:sourceType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104466520(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11307bc70) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307bc78);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307bc80);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307bc88);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044665bc; end: 1044666f3; +[SCActivateAction updateMediaWithCallMedia:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044665bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11307bc70) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307bc78);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307bc80);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307bc88);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044666f4; end: 104466747; -[SCActivateAction matchStartCall:updateMedia:] */

void FUN_1044666f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x00010446664c(FUN_104466944,auStack_40,0x104466958,auStack_60);
  _objc_release(param_1);
  return;
}



/* Entry: 104466748; end: 10446679b;  */

void FUN_104466748(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


