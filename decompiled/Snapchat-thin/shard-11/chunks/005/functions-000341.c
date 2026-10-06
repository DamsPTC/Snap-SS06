/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108650ecc; end: 108650ed7;  */

long FUN_108650ecc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a601f0;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x000108651088();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 108650ed8; end: 108650f17;  */

void FUN_108650ed8(void)

{
  FUN_10865107c();
  return;
}



/* Entry: 108650f18; end: 108650faf;  */

void FUN_108650f18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_1086510f4(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10865131c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0f80(uVar2);
  func_0x000108651088();
  func_0x000107c31bf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108650fb0; end: 10865103f;  */

long FUN_108650fb0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a601f0;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x000108651088();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 108651040; end: 10865104f;  */

void FUN_108651040(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a60230;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108651050; end: 10865107b;  */

long FUN_108651050(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10865107c; end: 10865108f;  */

long FUN_10865107c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a601f0;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x000108651088();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 108651090; end: 1086510f3;  */

undefined1  [16] FUN_108651090(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c086560(param_1);
  uVar2 = param_1;
  func_0x00010c27dd80(param_1);
  _objc_release(param_1);
  auVar3._8_8_ = uVar2 & 0xffffffff;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 1086510f4; end: 108651127;  */

void FUN_1086510f4(void)

{
  _objc_alloc(PTR_PTR_1126dad58);
  func_0x00010c020da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108651128; end: 10865119f; -[SCNUserPropertiesUserPropertyObserver initWithCpp:] */

undefined1 * FUN_108651128(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd368;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_108651520();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_1086514f8(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1086511a0; end: 10865131b; -[SCNUserPropertiesUserPropertyObserver onPropertyUpdated:value:] */

void FUN_1086511a0(long param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long *plVar2;
  ulong auStack_f0 [2];
  undefined8 uStack_df;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_90;
  undefined4 uStack_88;
  ulong auStack_80 [2];
  undefined8 uStack_6f;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char cStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  plVar2 = *(long **)(param_1 + 0x18);
  uVar1 = param_3;
  FUN_108651090();
  uStack_90 = uVar1;
  uStack_88 = param_2;
  _objc_retain(param_4);
  if (param_4 == 0) {
    auStack_f0[0] = auStack_f0[0] & 0xffffffffffffff00;
    uStack_a0 = 0;
  }
  else {
    FUN_108651558(auStack_80,param_4);
    auStack_f0[0] = auStack_80[0];
    uStack_df = uStack_6f;
    uStack_d0 = uStack_d0 & 0xffffffffffffff00;
    uStack_b8 = cStack_48 == '\x01';
    if ((bool)uStack_b8) {
      uStack_c8 = uStack_58;
      uStack_d0 = uStack_60;
      uStack_c0 = uStack_50;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_60 = 0;
    }
    uStack_a8 = uStack_38;
    uStack_b0 = uStack_40;
    uStack_a0 = 1;
    func_0x000107c279a4(&uStack_60);
  }
  func_0x000108651530();
  (**(code **)(*plVar2 + 0x10))(plVar2,&uStack_90,auStack_f0);
  func_0x0001086513dc(auStack_f0);
  func_0x000108651530();
  _objc_release(param_3);
  return;
}



/* Entry: 10865131c; end: 108651347;  */

void FUN_10865131c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10865140c();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108651348; end: 10865139b; -[SCNUserPropertiesUserPropertyObserver .cxx_destruct] */

void FUN_108651348(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a602c0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_1086514f8((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10865139c; end: 10865140b; -[SCNUserPropertiesUserPropertyObserver .cxx_construct] */

undefined8 * FUN_10865139c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_108651520();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10865140c; end: 108651483;  */

void FUN_10865140c(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a602c0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_108651520();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108651484);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108651540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108651484; end: 1086514f7;  */

void FUN_108651484(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dad60;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_108651520();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_1086514f8(&uStack_30);
  return;
}



/* Entry: 1086514f8; end: 10865151f;  */

long FUN_1086514f8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108651520; end: 108651557;  */

void FUN_108651520(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108651558; end: 108651703;  */

void FUN_108651558(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_80 [32];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf1f3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107c28304();
  uVar3 = param_2;
  func_0x00010c067ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000107c28124();
  uVar5 = param_2;
  func_0x00010c0b4fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x000107c28134();
  uVar7 = param_2;
  uVar10 = param_3;
  func_0x00010c25d700(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_80);
  uVar8 = param_2;
  func_0x00010bf885a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x000107c284cc();
  FUN_108651704(param_1,uVar2 & 0xffff,uVar4 & 0xffffffffff,uVar6,param_3 & 0xff,auStack_80,uVar9,
                uVar10 & 0xff);
  _objc_release(uVar8);
  func_0x000107c279a4(auStack_80);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 108651704; end: 108651757;  */

void FUN_108651704(undefined2 *param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 8) = param_4;
  *(undefined8 *)(param_1 + 0xc) = param_5;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  if (*(char *)(param_6 + 3) == '\x01') {
    uVar2 = param_6[1];
    uVar1 = *param_6;
    *(undefined8 *)(param_1 + 0x18) = param_6[2];
    *(undefined8 *)(param_1 + 0x14) = uVar2;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    param_6[1] = 0;
    param_6[2] = 0;
    *param_6 = 0;
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  *(undefined8 *)(param_1 + 0x20) = param_7;
  *(undefined8 *)(param_1 + 0x24) = param_8;
  return;
}



/* Entry: 108651758; end: 1086517bf;  */

undefined8 * FUN_108651758(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110a602e0;
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    func_0x000107c31400(lVar1 + 0x100);
    func_0x000107c31400(lVar1 + 0x78);
    func_0x000108651d10(lVar1);
    __ZdlPv();
  }
  func_0x000108651b80(param_1 + 4);
  func_0x0001086519f0(param_1 + 3);
  FUN_1086517d8(param_1 + 2);
  return param_1;
}



/* Entry: 1086517c0; end: 1086517c3;  */

undefined8 * FUN_1086517c0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110a602e0;
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    func_0x000107c31400(lVar1 + 0x100);
    func_0x000107c31400(lVar1 + 0x78);
    func_0x000108651d10(lVar1);
    __ZdlPv();
  }
  func_0x000108651b80(param_1 + 4);
  func_0x0001086519f0(param_1 + 3);
  FUN_1086517d8(param_1 + 2);
  return param_1;
}



/* Entry: 1086517c4; end: 1086517d7;  */

void FUN_1086517c4(void)

{
  FUN_108651758();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086517d8; end: 1086517fb;  */

undefined8 FUN_1086517d8(undefined8 param_1)

{
  FUN_1086517fc(param_1,0);
  return param_1;
}



/* Entry: 1086517fc; end: 108651813;  */

void FUN_1086517fc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_108651830(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108651814; end: 10865182f;  */

void FUN_108651814(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_108651830(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108651830; end: 108651893;  */

void FUN_108651830(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c31400(param_1 + 0x1f0);
  func_0x000107c31400(param_1 + 0x168);
  func_0x000108651870(param_1 + 0xf0);
  func_0x0001086518f0(param_1 + 0x78);
  func_0x000108651df0(param_1);
  FUN_108651994();
  func_0x000108651de8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(unaff_x19);
  return;
}



/* Entry: 108651894; end: 1086518d3;  */

void FUN_108651894(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_108651d90();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_1086518d4();
    }
  }
  return;
}



/* Entry: 1086518d4; end: 108651913;  */

void FUN_1086518d4(void)

{
  func_0x000108651db0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108651914; end: 108651953;  */

void FUN_108651914(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_108651d90();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_108651954();
    }
  }
  return;
}



/* Entry: 108651954; end: 108651993;  */

void FUN_108651954(void)

{
  func_0x000108651db0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108651994; end: 1086519d3;  */

void FUN_108651994(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_108651d90();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_1086519d4();
    }
  }
  return;
}



/* Entry: 1086519d4; end: 108651a13;  */

void FUN_1086519d4(void)

{
  func_0x000108651db0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108651a14; end: 108651a2b;  */

void FUN_108651a14(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_108651a48(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108651a2c; end: 108651a47;  */

void FUN_108651a2c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_108651a48(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108651a48; end: 108651aa3;  */

void FUN_108651a48(void)

{
  long unaff_x19;
  
  func_0x000108651e04();
  func_0x000107c31400(unaff_x19 + 0x178);
  func_0x000107c31400(unaff_x19 + 0xf0);
  func_0x000108651a80(unaff_x19 + 0x78);
  func_0x000108651df0();
  FUN_108651b24();
  func_0x000108651de8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(unaff_x19);
  return;
}



/* Entry: 108651aa4; end: 108651ae3;  */

void FUN_108651aa4(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_108651d90();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_108651ae4();
    }
  }
  return;
}



/* Entry: 108651ae4; end: 108651b23;  */

void FUN_108651ae4(void)

{
  func_0x000108651db0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108651b24; end: 108651b63;  */

void FUN_108651b24(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_108651d90();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_108651b64();
    }
  }
  return;
}



/* Entry: 108651b64; end: 108651ba3;  */

void FUN_108651b64(void)

{
  func_0x000108651db0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108651ba4; end: 108651bbb;  */

void FUN_108651ba4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_108651bd8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108651bbc; end: 108651bd7;  */

void FUN_108651bbc(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_108651bd8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108651bd8; end: 108651c33;  */

void FUN_108651bd8(void)

{
  long unaff_x19;
  
  func_0x000108651e04();
  func_0x000107c31400(unaff_x19 + 0x178);
  func_0x000107c31400(unaff_x19 + 0xf0);
  func_0x000108651c10(unaff_x19 + 0x78);
  func_0x000108651df0();
  FUN_108651cb4();
  func_0x000108651de8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(unaff_x19);
  return;
}



/* Entry: 108651c34; end: 108651c73;  */

void FUN_108651c34(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_108651d90();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_108651c74();
    }
  }
  return;
}



/* Entry: 108651c74; end: 108651cb3;  */

void FUN_108651c74(void)

{
  func_0x000108651db0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108651cb4; end: 108651cf3;  */

void FUN_108651cb4(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_108651d90();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_108651cf4();
    }
  }
  return;
}



/* Entry: 108651cf4; end: 108651d33;  */

void FUN_108651cf4(void)

{
  func_0x000108651db0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108651d34; end: 108651d73;  */

void FUN_108651d34(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_108651d90();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_108651d74();
    }
  }
  return;
}



/* Entry: 108651d74; end: 108651d8f;  */

void FUN_108651d74(void)

{
  func_0x000108651db0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108651d90; end: 108651e0f;  */

void FUN_108651d90(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(*param_1 + 8);
  lVar2 = *(long *)param_1[1];
  *(long **)(lVar2 + 8) = plVar1;
  *plVar1 = lVar2;
  param_1[2] = 0;
  return;
}



/* Entry: 108651e10; end: 108651e3b;  */

void FUN_108651e10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_108652044();
  func_0x00010065f1e8();
  uStack_28 = param_2;
  func_0x0001086521c4(param_1,&uStack_28);
  return;
}



/* Entry: 108651e3c; end: 108651e63;  */

void FUN_108651e3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  FUN_108651e64(param_1 + 0xf0,param_2,&uStack_18);
  return;
}



/* Entry: 108651e64; end: 108651ed7;  */

void FUN_108651e64(long param_1,undefined8 param_2,undefined8 param_3)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  func_0x000100693c80(param_1,param_2,param_3);
  func_0x000107c3141c(param_1);
  func_0x0001086522c0();
  func_0x0001086522b8();
  return;
}



/* Entry: 108651ed8; end: 108651f37;  */

void FUN_108651ed8(long param_1,undefined8 param_2)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  func_0x00010065f1e8(param_1,param_2);
  func_0x000107c3141c(param_1);
  func_0x0001086522c0();
  func_0x0001086522b8();
  return;
}



/* Entry: 108651f38; end: 108651f3b;  */

undefined8 * FUN_108651f38(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108651f3c; end: 108651f4f;  */

void FUN_108651f3c(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108651f50; end: 108651f83;  */

long FUN_108651f50(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_108651fd4();
  }
  else {
    FUN_108652000();
  }
  return param_1;
}



/* Entry: 108651f84; end: 108651fd3;  */

void FUN_108651f84(long param_1,undefined8 param_2)

{
  func_0x000107c313f8();
  func_0x000107c2879c(param_1);
  func_0x000107c313d8(param_2,1);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



/* Entry: 108651fd4; end: 108651fff;  */

long FUN_108651fd4(long param_1,long param_2)

{
  func_0x00010065acbc();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}



/* Entry: 108652000; end: 10865201b;  */

void FUN_108652000(long param_1)

{
  FUN_10865201c();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10865201c; end: 108652043;  */

void FUN_10865201c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = uVar1;
  return;
}



/* Entry: 108652044; end: 10865211b;  */

long FUN_108652044(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long *plVar5;
  long unaff_x19;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 auStack_d8 [16];
  undefined **appuStack_c8 [17];
  undefined8 uStack_40;
  
  func_0x0001006a6ffc();
  plVar5 = (long *)(unaff_x19 + 0x68);
  do {
    lVar4 = *plVar5;
    uVar1 = lVar4 == unaff_x19 + 0x60;
    if ((bool)uVar1) {
      func_0x000107c280c4(auStack_d8);
      lVar4 = (long)*(char *)(unaff_x19 + 0x5f);
      if (lVar4 < 0) {
        lVar3 = *(long *)(unaff_x19 + 0x48);
        lVar4 = *(long *)(unaff_x19 + 0x50);
      }
      else {
        lVar3 = unaff_x19 + 0x48;
      }
      func_0x000107c313f4(appuStack_c8,*(undefined8 *)(unaff_x19 + 0x40),lVar3,lVar4);
      appuStack_c8[0] = &PTR_FUN_110a603b0;
      uStack_40 = 0;
      func_0x000107c28204(auStack_d8);
      param_1 = 0xa0;
      __Znwm();
      func_0x0001006a711c();
      func_0x0001006a712c();
      goto LAB_1086520e0;
    }
    plVar5 = (long *)(lVar4 + 8);
  } while (*(long *)(lVar4 + 0x98) != 0);
  uVar1 = unaff_x19 + 0x60 == *plVar5;
  if (!(bool)uVar1) {
    func_0x000108652294();
  }
LAB_1086520e0:
  lVar4 = *(long *)(unaff_x19 + 0x60);
  *(long *)(lVar4 + 0x98) = unaff_x19;
  func_0x0001006a715c();
  func_0x0001006a7164();
  if ((bool)uVar1) {
    return lVar4 + 0x10;
  }
  ___stack_chk_fail();
  uVar2 = param_1;
  func_0x0001006a715c();
  func_0x00010865228c();
  pcStack_e8 = FUN_10865211c;
  lStack_100 = lVar4;
  uStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x00010065f1e8();
  lVar4 = extraout_x8;
  uStack_108 = uVar2;
  func_0x0001086521c4(extraout_x8,&uStack_108);
  return lVar4;
}



/* Entry: 10865211c; end: 108652187;  */

void FUN_10865211c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  func_0x00010065f1e8();
  uStack_28 = param_2;
  func_0x0001086521c4(param_1,&uStack_28);
  return;
}



/* Entry: 108652188; end: 10865218b;  */

undefined8 * FUN_108652188(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10865218c; end: 10865219f;  */

void FUN_10865218c(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086521a0; end: 108652283;  */

void FUN_1086521a0(void)

{
  long unaff_x19;
  
  func_0x0001006a79d8();
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 108652284; end: 1086522df;  */

void FUN_108652284(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 1086522e0; end: 10865230b;  */

void FUN_1086522e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_108652394();
  func_0x00010065f1e8();
  uStack_28 = param_2;
  func_0x0001086525c8(param_1,&uStack_28);
  return;
}



/* Entry: 10865230c; end: 108652393;  */

void FUN_10865230c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_38;
  
  lStack_38 = param_1;
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  FUN_10865283c(param_1,param_2,param_3);
  func_0x000107c3141c(param_1);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
  func_0x000107c27e6c(&lStack_38);
  return;
}



/* Entry: 108652394; end: 10865250b;  */

long FUN_108652394(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long *plVar4;
  long lVar5;
  long *plStack_108;
  long lStack_100;
  long *plStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long lStack_d8;
  undefined1 uStack_d0;
  undefined **appuStack_c8 [17];
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d0 = 1;
  lStack_d8 = param_1;
  __ZNSt3__15mutex4lockEv();
  plVar1 = (long *)(param_1 + 0x60);
  plVar4 = (long *)(param_1 + 0x68);
  do {
    plVar3 = (long *)*plVar4;
    if (plVar3 == plVar1) {
      func_0x000107c280c4(&lStack_d8);
      lVar5 = (long)*(char *)(param_1 + 0x5f);
      if (lVar5 < 0) {
        lVar2 = *(long *)(param_1 + 0x48);
        lVar5 = *(long *)(param_1 + 0x50);
      }
      else {
        lVar2 = param_1 + 0x48;
      }
      func_0x000107c313f4(appuStack_c8,*(undefined8 *)(param_1 + 0x40),lVar2,lVar5);
      appuStack_c8[0] = &PTR_FUN_110a60450;
      lStack_40 = 0;
      func_0x000107c28204(&lStack_d8);
      plVar4 = (long *)0xa0;
      __Znwm();
      func_0x000107c313fc(plVar4 + 2,appuStack_c8);
      plVar4[1] = (long)plVar1;
      plVar4[2] = (long)&PTR_FUN_110a60450;
      plVar4[0x13] = lStack_40;
      lVar5 = *(long *)(param_1 + 0x60);
      *plVar4 = lVar5;
      *(long **)(lVar5 + 8) = plVar4;
      *(long **)(param_1 + 0x60) = plVar4;
      *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
      func_0x000107c31400(appuStack_c8);
      goto LAB_1086524a4;
    }
    plVar4 = plVar3 + 1;
  } while (plVar3[0x13] != 0);
  plVar4 = (long *)*plVar4;
  if (plVar1 != plVar4) {
    lVar5 = *plVar3;
    *(long **)(lVar5 + 8) = plVar4;
    *plVar4 = lVar5;
    lVar5 = *plVar1;
    *(long **)(lVar5 + 8) = plVar3;
    *plVar3 = lVar5;
    *plVar1 = (long)plVar3;
    plVar3[1] = (long)plVar1;
  }
LAB_1086524a4:
  lVar5 = *(long *)(param_1 + 0x60);
  *(long *)(lVar5 + 0x98) = param_1;
  plVar1 = &lStack_d8;
  func_0x000107c2798c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return lVar5 + 0x10;
  }
  ___stack_chk_fail();
  plVar4 = &lStack_d8;
  func_0x000107c2798c();
  func_0x00010865292c();
  pcStack_e8 = FUN_10865250c;
  lStack_100 = lVar5;
  plStack_f8 = plVar1;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x00010065f1e8();
  lVar5 = extraout_x8;
  plStack_108 = plVar4;
  func_0x0001086525c8(extraout_x8,&plStack_108);
  return lVar5;
}



/* Entry: 10865250c; end: 10865257f;  */

void FUN_10865250c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  func_0x00010065f1e8();
  uStack_28 = param_2;
  func_0x0001086525c8(param_1,&uStack_28);
  return;
}



/* Entry: 108652580; end: 108652583;  */

undefined8 * FUN_108652580(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108652584; end: 108652597;  */

void FUN_108652584(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108652598; end: 1086525ff;  */

void FUN_108652598(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  __ZNSt3__15mutex4lockEv(uVar1);
  *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uVar1);
  return;
}



/* Entry: 108652600; end: 108652647;  */

undefined8 * FUN_108652600(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_108652648();
  return param_1;
}



/* Entry: 108652648; end: 108652727;  */

void FUN_108652648(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  int iStack_30;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (func_0x000107c3141c(), (int)lVar1 != 0)) {
    func_0x000107c313f8(*param_1);
    func_0x000107c313e0(&uStack_38);
    ppuStack_80 = &PTR_FUN_110a805a0;
    uStack_78 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_40 = 0;
    func_0x000107c3034c(&ppuStack_80,uStack_38,iStack_30 - (int)uStack_38);
    func_0x000107c27914(&uStack_38);
    if ((char)param_1[10] == '\x01') {
      FUN_108652768(param_1 + 1,&ppuStack_80);
    }
    else {
      func_0x00010865274c(param_1 + 1,&ppuStack_80);
    }
    FUN_1088b64c0(&ppuStack_80);
    return;
  }
  plVar2 = param_1 + 1;
  if ((char)param_1[10] == '\x01') {
    FUN_1088b64c0();
    *(undefined1 *)(plVar2 + 9) = 0;
  }
  return;
}



/* Entry: 108652728; end: 108652767;  */

void FUN_108652728(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_1088b64c0();
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}



/* Entry: 108652768; end: 1086527cb;  */

long FUN_108652768(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_1088b68cc(param_1);
    }
    else {
      FUN_1088b6898(param_1);
    }
  }
  return param_1;
}



/* Entry: 1086527cc; end: 1086527d7;  */

undefined8 * FUN_1086527cc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110a805a0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  FUN_108652768(param_1,param_2);
  return param_1;
}



/* Entry: 1086527d8; end: 10865281b;  */

undefined8 * FUN_1086527d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110a805a0;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  FUN_108652768(param_1,param_3);
  return param_1;
}



/* Entry: 10865281c; end: 10865283b;  */

void FUN_10865281c(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_1088b64c0();
  }
  return;
}



/* Entry: 10865283c; end: 108652873;  */

void FUN_10865283c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x00010065f1f4(param_1,1,param_2);
  FUN_1086528d0(auStack_38,param_3);
  func_0x000100867974(param_1,2,auStack_38);
  func_0x000107c27914(auStack_38);
  return;
}



/* Entry: 108652874; end: 1086528cf;  */

void FUN_108652874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  FUN_1086528d0(auStack_38,param_3);
  func_0x000100867974(param_1,param_2,auStack_38);
  func_0x000107c27914(auStack_38);
  return;
}



/* Entry: 1086528d0; end: 108652923;  */

void FUN_1086528d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x0001088b66c8();
  func_0x000107c27fdc(param_1,uVar1);
  func_0x00010b4d1758(param_2,*param_1,*(int *)(param_1 + 1) - (int)*param_1);
  return;
}



/* Entry: 108652924; end: 10865293f;  */

void FUN_108652924(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 108652940; end: 108652997;  */

void FUN_108652940(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_108652a50();
  func_0x00010065f1e8();
  uStack_28 = param_2;
  func_0x000108652bac(param_1,&uStack_28);
  return;
}



/* Entry: 108652998; end: 1086529bf;  */

void FUN_108652998(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  FUN_1086529c0(param_1 + 0x168,param_2,&uStack_18);
  return;
}



/* Entry: 1086529c0; end: 108652a4f;  */

void FUN_1086529c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_38;
  
  lStack_38 = param_1;
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  FUN_10865320c(param_1,param_2,param_3,param_4);
  func_0x000107c3141c(param_1);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
  func_0x000107c27e6c(&lStack_38);
  return;
}



/* Entry: 108652a50; end: 108652b0f;  */

long FUN_108652a50(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_108;
  
  func_0x0001006a852c();
  plVar3 = (long *)(unaff_x19 + 0x68);
  do {
    lVar2 = *plVar3;
    uVar1 = lVar2 == unaff_x19 + 0x60;
    if ((bool)uVar1) {
      func_0x0001006a8634();
      func_0x0001006a863c();
      func_0x0001006a8644();
      func_0x0001006a864c();
      func_0x0001006a8654();
      func_0x0001006a8664();
      goto LAB_108652adc;
    }
    plVar3 = (long *)(lVar2 + 8);
  } while (*(long *)(lVar2 + 0x98) != 0);
  uVar1 = unaff_x19 + 0x60 == *plVar3;
  if (!(bool)uVar1) {
    FUN_1086532f0();
  }
LAB_108652adc:
  func_0x0001006a8694();
  func_0x0001006a86a4();
  if ((bool)uVar1) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000108653354();
  func_0x00010865331c();
  func_0x00010065f1e8();
  lVar2 = extraout_x8;
  uStack_108 = param_1;
  func_0x000108652bac(extraout_x8,&uStack_108);
  return lVar2;
}



/* Entry: 108652b10; end: 108652b73;  */

void FUN_108652b10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  func_0x00010065f1e8();
  uStack_28 = param_2;
  func_0x000108652bac(param_1,&uStack_28);
  return;
}



/* Entry: 108652b74; end: 108652b77;  */

undefined8 * FUN_108652b74(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108652b78; end: 108652b8b;  */

void FUN_108652b78(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108652b8c; end: 108652c5f;  */

void FUN_108652b8c(void)

{
  long unaff_x19;
  
  func_0x0001006ab020();
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 108652c60; end: 108652c63;  */

undefined8 * FUN_108652c60(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108652c64; end: 108652c77;  */

void FUN_108652c64(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108652c78; end: 108652cd3;  */

long FUN_108652c78(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010065acbc();
  }
  else {
    FUN_108652cd4();
  }
  return param_1;
}



/* Entry: 108652cd4; end: 108652cff;  */

void FUN_108652cd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 108652d00; end: 108652dbf;  */

long FUN_108652d00(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_108;
  
  func_0x0001006a852c();
  plVar3 = (long *)(unaff_x19 + 0x68);
  do {
    lVar2 = *plVar3;
    uVar1 = lVar2 == unaff_x19 + 0x60;
    if ((bool)uVar1) {
      func_0x0001006a8634();
      func_0x0001006a863c();
      func_0x0001006a8644();
      func_0x0001006a864c();
      func_0x0001006a8654();
      func_0x0001006a8664();
      goto LAB_108652d8c;
    }
    plVar3 = (long *)(lVar2 + 8);
  } while (*(long *)(lVar2 + 0x98) != 0);
  uVar1 = unaff_x19 + 0x60 == *plVar3;
  if (!(bool)uVar1) {
    FUN_1086532f0();
  }
LAB_108652d8c:
  func_0x0001006a8694();
  func_0x0001006a86a4();
  if ((bool)uVar1) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000108653354();
  func_0x00010865331c();
  func_0x00010065f1e8();
  lVar2 = extraout_x8;
  uStack_108 = param_1;
  func_0x000108652e5c(extraout_x8,&uStack_108);
  return lVar2;
}



/* Entry: 108652dc0; end: 108652e23;  */

void FUN_108652dc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  func_0x00010065f1e8();
  uStack_28 = param_2;
  func_0x000108652e5c(param_1,&uStack_28);
  return;
}



/* Entry: 108652e24; end: 108652e27;  */

undefined8 * FUN_108652e24(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}


