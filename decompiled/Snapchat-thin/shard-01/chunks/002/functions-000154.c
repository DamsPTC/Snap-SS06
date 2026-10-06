/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100db6378; end: 100db66a7;  */

undefined8 FUN_100db6378(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar4;
  
  lVar7 = (long)param_2 - (long)param_1;
  lVar1 = lVar7 + 0xf;
  if (-1 < lVar7) {
    lVar1 = lVar7;
  }
  lVar1 = lVar1 >> 4;
  lVar9 = (long)param_3 - (long)param_2;
  lVar5 = lVar9 + 0xf;
  if (-1 < lVar9) {
    lVar5 = lVar9;
  }
  lVar5 = lVar5 >> 4;
  if (lVar1 < lVar5) {
    if (((param_4 < param_1) || (param_1 + lVar1 * 2 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar1 << 4);
    }
    puVar4 = param_4 + lVar1 * 2;
    puVar11 = param_1;
    if (0xf < lVar7) {
      do {
        if (param_3 <= param_2) break;
        uVar13 = *param_2;
        uVar10 = param_2[1];
        uVar3 = *param_4;
        uVar8 = uVar13;
        func_0x000107c614f0();
        func_0x000107c615f0(uVar13);
        func_0x000107c615f0(uVar3);
        func_0x00010434d2a8(uVar8,uVar10);
        uVar8 = *(ulong *)(&UNK_10dceeea8 + (uVar8 & 0xff) * 8);
        uVar10 = uVar3;
        func_0x000107c614f0();
        func_0x00010434d2a8();
        uVar10 = *(ulong *)(&UNK_10dceeea8 + (uVar10 & 0xff) * 8);
        func_0x000107c615e8(uVar13);
        func_0x000107c615e8(uVar3);
        if (uVar8 < uVar10) {
          puVar12 = param_4;
          puVar6 = param_2 + 2;
          puVar2 = param_2;
        }
        else {
          puVar12 = param_4 + 2;
          puVar6 = param_2;
          puVar2 = param_4;
        }
        param_2 = puVar6;
        param_4 = puVar12;
        if (puVar11 != puVar2) {
          uVar13 = *puVar2;
          puVar11[1] = puVar2[1];
          *puVar11 = uVar13;
        }
        puVar11 = puVar11 + 2;
      } while (param_4 < puVar4);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar5 * 2 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar5 << 4);
    }
    puVar2 = param_4 + lVar5 * 2;
    puVar4 = puVar2;
    puVar11 = param_2;
    if ((param_1 < param_2) && (0xf < lVar9)) {
      do {
        puVar6 = param_2 + -2;
        puVar12 = param_3;
        while( true ) {
          param_3 = puVar12 + -2;
          puVar4 = puVar2 + -2;
          uVar13 = *puVar4;
          uVar10 = puVar2[-1];
          uVar3 = param_2[-2];
          uVar8 = uVar13;
          func_0x000107c614f0();
          func_0x000107c615f0(uVar13);
          func_0x000107c615f0(uVar3);
          func_0x00010434d2a8(uVar8,uVar10);
          uVar8 = *(ulong *)(&UNK_10dceeea8 + (uVar8 & 0xff) * 8);
          uVar10 = uVar3;
          func_0x000107c614f0();
          func_0x00010434d2a8();
          uVar10 = *(ulong *)(&UNK_10dceeea8 + (uVar10 & 0xff) * 8);
          func_0x000107c615e8(uVar13);
          func_0x000107c615e8(uVar3);
          if (uVar8 < uVar10) break;
          if (puVar12 != puVar2) {
            uVar13 = *puVar4;
            puVar12[-1] = puVar2[-1];
            *param_3 = uVar13;
          }
          puVar2 = puVar4;
          puVar11 = param_2;
          puVar12 = param_3;
          if (puVar4 <= param_4) goto LAB_100db6644;
        }
        if (puVar12 != param_2) {
          uVar13 = *puVar6;
          puVar12[-1] = param_2[-1];
          *param_3 = uVar13;
        }
        puVar4 = puVar2;
        puVar11 = puVar6;
      } while ((param_1 < puVar6) && (param_2 = puVar6, param_4 < puVar2));
    }
  }
LAB_100db6644:
  uVar3 = (long)puVar4 - (long)param_4;
  uVar13 = uVar3 + 0xf;
  if (-1 < (long)uVar3) {
    uVar13 = uVar3;
  }
  if ((puVar11 != param_4) || ((ulong *)((long)param_4 + (uVar13 & 0xfffffffffffffff0)) <= puVar11))
  {
    func_0x000107c610b8(puVar11,param_4,((long)uVar13 >> 4) << 4);
  }
  return 1;
}



/* Entry: 100db66a8; end: 100db67b7;  */

void FUN_100db66a8(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db67b8; end: 100db67db;  */

undefined8 FUN_100db67b8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100db67dc; end: 100db67df;  */

void FUN_100db67dc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db67e0; end: 100db6907;  */

void FUN_100db67e0(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db6908; end: 100db690b;  */

void FUN_100db6908(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db690c; end: 100db698f;  */

void FUN_100db690c(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db6990; end: 100db69e7;  */

undefined8 * FUN_100db6990(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100db69e8; end: 100db6a13;  */

undefined8 * FUN_100db69e8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    return param_1;
  }
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 100db6a14; end: 100db6b9f;  */

undefined8 FUN_100db6a14(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100db6ba0; end: 100db6bc3;  */

void FUN_100db6ba0(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db6bc4; end: 100db6bef;  */

undefined8 * FUN_100db6bc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100db6bf0; end: 100db6d67;  */

ulong FUN_100db6bf0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if ((int)param_2 == 0x7ffffffe) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    if (0xfffffffe < uVar4) {
      uVar4 = 0xffffffff;
    }
    uVar2 = (int)uVar4 - 1;
    if (0x7fffffff < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)(uVar2 + 1);
  }
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  lVar5 = *(long *)(lVar3 + -8);
  if ((int)param_2 == *(int *)(lVar5 + 0x54)) {
    iVar1 = *(int *)(param_3 + 0x24);
  }
  else {
    lVar3 = 0x113072218;
    func_0x0001000285a8(0x113072218,&UNK_10dcf1478);
    lVar5 = *(long *)(lVar3 + -8);
    iVar1 = *(int *)(param_3 + 0x44);
  }
  uVar4 = param_1 + iVar1;
                    /* WARNING: Could not recover jumptable at 0x000100db6cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x30))(uVar4,param_2,lVar3);
  return uVar4;
}



/* Entry: 100db6d68; end: 100db6d7f;  */

bool FUN_100db6d68(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100db6d80; end: 100db6da7;  */

void FUN_100db6d80(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db6da8; end: 100db6dd3;  */

void FUN_100db6da8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db6dd4; end: 100db6dff;  */

undefined8 * FUN_100db6dd4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100db6e00; end: 100db72bb;  */

ulong FUN_100db6e00(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
    uVar2 = param_1 + *(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000100db6e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
    return uVar2;
  }
  uVar3 = (uint)*(byte *)(param_1 + *(int *)(param_3 + 0x1c));
  if (uVar3 < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)((uVar3 + 0x7ffffffe & 0x7fffffff) + 1);
  }
  return uVar2;
}



/* Entry: 100db72bc; end: 100db72d3;  */

bool FUN_100db72bc(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100db72d4; end: 100db72fb;  */

void FUN_100db72d4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db72fc; end: 100db730b;  */

void FUN_100db72fc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db730c; end: 100db7337;  */

void FUN_100db730c(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100db7338();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 100db7338; end: 100db7347;  */

undefined1  [16] FUN_100db7338(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 100db7348; end: 100db7373;  */

undefined8 * FUN_100db7348(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100db7374; end: 100db73ef;  */

undefined8 FUN_100db7374(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100db73f0; end: 100db74f7;  */

ulong FUN_100db73f0(ulong param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  func_0x000107c5eec8();
  if ((int)param_2 == *(int *)(*(long *)(lVar2 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x000100db7440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,param_2,lVar2);
    return param_1;
  }
  uVar3 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x18) + 8);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar1 = (int)uVar3 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (ulong)(uVar1 + 1);
}



/* Entry: 100db74f8; end: 100db751b;  */

undefined8 FUN_100db74f8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100db751c; end: 100db753f;  */

void FUN_100db751c(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db7540; end: 100db754b;  */

void FUN_100db7540(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db754c; end: 100db7577;  */

undefined8 * FUN_100db754c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100db7578; end: 100db768f;  */

ulong FUN_100db7578(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((int)param_2 == 0x7ffffffe) {
    uVar3 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    uVar1 = (int)uVar3 - 1;
    if (0x7fffffff < uVar1) {
      uVar1 = 0xffffffff;
    }
    return (ulong)(uVar1 + 1);
  }
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar3 = param_1 + *(int *)(param_3 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000100db760c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(uVar3,param_2,lVar2);
  return uVar3;
}



/* Entry: 100db7690; end: 100db76bb;  */

undefined8 * FUN_100db7690(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100db76bc; end: 100db7b1f;  */

ulong FUN_100db76bc(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((int)param_2 == 0x7ffffffe) {
    uVar3 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    uVar1 = (int)uVar3 - 1;
    if (0x7fffffff < uVar1) {
      uVar1 = 0xffffffff;
    }
    return (ulong)(uVar1 + 1);
  }
  lVar2 = 0x1130741a0;
  func_0x0001000285a8(0x1130741a0,&UNK_10dcf41a0);
  uVar3 = param_1 + *(int *)(param_3 + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x000100db7750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(uVar3,param_2,lVar2);
  return uVar3;
}



/* Entry: 100db7b20; end: 100db7b23;  */

undefined8 * FUN_100db7b20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 100db7b24; end: 100db7b47;  */

void FUN_100db7b24(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db7b48; end: 100db7bc3;  */

void FUN_100db7b48(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 1) {
    func_0x000107c61174(lVar1);
  }
  *param_1 = lVar1;
  *(char *)(param_1 + 1) = (char)param_2[1];
  return;
}



/* Entry: 100db7bc4; end: 100db7be7;  */

void FUN_100db7bc4(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db7be8; end: 100db7c0b;  */

undefined8 FUN_100db7be8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100db7c0c; end: 100db7c2f;  */

void FUN_100db7c0c(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db7c30; end: 100db7c3f;  */

void FUN_100db7c30(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db7c40; end: 100db7c63;  */

undefined8 FUN_100db7c40(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100db7c64; end: 100db7c7b;  */

bool FUN_100db7c64(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100db7c7c; end: 100db7ca3;  */

void FUN_100db7c7c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db7ca4; end: 100db7cf7;  */

void FUN_100db7ca4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db7cf8; end: 100db7e0f;  */

ulong FUN_100db7cf8(ulong param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  if ((int)param_2 == *(int *)(*(long *)(lVar2 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x000100db7d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,param_2,lVar2);
    return param_1;
  }
  uVar3 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x1c));
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar1 = (int)uVar3 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (ulong)(uVar1 + 1);
}



/* Entry: 100db7e10; end: 100db7e6f;  */

void FUN_100db7e10(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x100db7e10);
  (*pcVar1)();
}



/* Entry: 100db7e70; end: 100db7e87;  */

void FUN_100db7e70(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100db7e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3,param_1,param_2);
  return;
}



/* Entry: 100db7e88; end: 100db7f1b;  */

void FUN_100db7e88(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x100db7e88);
  (*pcVar1)();
}



/* Entry: 100db7f1c; end: 100db7f43;  */

bool FUN_100db7f1c(ulong *param_1)

{
  ulong *unaff_x20;
  
  return (*param_1 & (*unaff_x20 ^ 0xffffffffffffffff)) == 0;
}



/* Entry: 100db7f44; end: 100db7f87;  */

undefined8 * FUN_100db7f44(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x0001043ed8a4(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Entry: 100db7f88; end: 100db7fab;  */

undefined8 FUN_100db7f88(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100db7fac; end: 100db80c3;  */

ulong FUN_100db7fac(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((int)param_2 == 0x7ffffffe) {
    uVar3 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    uVar1 = (int)uVar3 - 1;
    if (0x7fffffff < uVar1) {
      uVar1 = 0xffffffff;
    }
    return (ulong)(uVar1 + 1);
  }
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar3 = param_1 + *(int *)(param_3 + 0x2c);
                    /* WARNING: Could not recover jumptable at 0x000100db8040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(uVar3,param_2,lVar2);
  return uVar3;
}



/* Entry: 100db80c4; end: 100db8127;  */

undefined1 * FUN_100db80c4(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100db8128; end: 100db813f;  */

bool FUN_100db8128(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100db8140; end: 100db8167;  */

void FUN_100db8140(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db8168; end: 100db816b;  */

void FUN_100db8168(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db816c; end: 100db8197;  */

void FUN_100db816c(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000100db81a4();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 100db8198; end: 100db81b3;  */

void FUN_100db8198(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 100db81b4; end: 100db81f3;  */

ulong * FUN_100db81b4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (0xfffffffe < uVar1) {
    func_0x000107c61434();
  }
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 100db81f4; end: 100db8207;  */

void FUN_100db81f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db8208; end: 100db824f;  */

void FUN_100db8208(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db8250; end: 100db829f;  */

undefined8 FUN_100db8250(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100db82a0; end: 100db82af;  */

void FUN_100db82a0(long param_1)

{
  *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) & 0x1f;
  return;
}



/* Entry: 100db82b0; end: 100db82ef;  */

ulong * FUN_100db82b0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (0xfffffffe < uVar1) {
    func_0x000107c61434();
  }
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 100db82f0; end: 100db82ff;  */

void FUN_100db82f0(long param_1)

{
  *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) & 0x1f;
  return;
}



/* Entry: 100db8300; end: 100db835f;  */

long FUN_100db8300(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100db8360; end: 100db8377;  */

void FUN_100db8360(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db8378; end: 100db83a3;  */

undefined1  [16] FUN_100db8378(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x000107c61434(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 100db83a4; end: 100db83bf;  */

void FUN_100db83a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db83c0; end: 100db83eb;  */

undefined8 * FUN_100db83c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100db83ec; end: 100db83ef;  */

undefined8 * FUN_100db83ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 100db83f0; end: 100db841f;  */

undefined8 * FUN_100db83f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 100db8420; end: 100db8427;  */

int FUN_100db8420(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100db8428; end: 100db847f;  */

void FUN_100db8428(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x000104419e54();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 100db8480; end: 100db84a3;  */

void FUN_100db8480(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db84a4; end: 100db84e7;  */

undefined8 * FUN_100db84a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x00010441ad4c(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Entry: 100db84e8; end: 100db850b;  */

undefined8 FUN_100db84e8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100db850c; end: 100db852f;  */

void FUN_100db850c(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db8530; end: 100db857b;  */

void FUN_100db8530(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db857c; end: 100db85a3;  */

void FUN_100db857c(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db85a4; end: 100db85bf;  */

void FUN_100db85a4(void)

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



/* Entry: 100db85c0; end: 100db8653;  */

void FUN_100db85c0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_3 + 0x28);
  lVar2 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x000100db8604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1 + iVar1,param_2,lVar2);
  return;
}



/* Entry: 100db8654; end: 100db8677;  */

undefined8 FUN_100db8654(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100db8678; end: 100db86eb;  */

undefined8 * FUN_100db8678(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_unknownObjectRetain();
  _swift_unknownObjectRetain(uVar1);
  return param_1;
}



/* Entry: 100db86ec; end: 100db8717;  */

undefined8 * FUN_100db86ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100db8718; end: 100db872b;  */

bool FUN_100db8718(ulong *param_1)

{
  ulong *unaff_x20;
  
  return (*param_1 & (*unaff_x20 ^ 0xffffffffffffffff)) == 0;
}



/* Entry: 100db872c; end: 100db875f;  */

undefined8 * FUN_100db872c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100db8760; end: 100db884f;  */

ulong FUN_100db8760(long param_1,undefined8 param_2,long param_3)

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
  func_0x00010443b3b4();
  uVar2 = param_1 + *(int *)(param_3 + 0x24);
                    /* WARNING: Could not recover jumptable at 0x000100db87d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Entry: 100db8850; end: 100db8883;  */

undefined8 * FUN_100db8850(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100db8884; end: 100db8917;  */

void FUN_100db8884(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
                    /* WARNING: Could not recover jumptable at 0x000100db88c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
  return;
}



/* Entry: 100db8918; end: 100db891b;  */

undefined8 * FUN_100db8918(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 100db891c; end: 100db8933;  */

bool FUN_100db891c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100db8934; end: 100db895b;  */

void FUN_100db8934(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db895c; end: 100db89a7;  */

void FUN_100db895c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db89a8; end: 100db89d7;  */

undefined8 * FUN_100db89a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 100db89d8; end: 100db89f3;  */

void FUN_100db89d8(undefined8 param_1)

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



/* Entry: 100db89f4; end: 100db8a1b;  */

void FUN_100db89f4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db8a1c; end: 100db8a4b;  */

void FUN_100db8a1c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db8a4c; end: 100db8a73;  */

void FUN_100db8a4c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db8a74; end: 100db8abb;  */

void FUN_100db8a74(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}


