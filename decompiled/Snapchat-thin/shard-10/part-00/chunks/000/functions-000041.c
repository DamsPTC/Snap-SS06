/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1073a2d2c; end: 1073a2d37;  */

undefined ** FUN_1073a2d2c(void)

{
  return &PTR_DAT_1109aa020;
}



/* Entry: 1073a2d38; end: 1073a2d5b;  */

undefined8 FUN_1073a2d38(undefined8 param_1)

{
  func_0x0001073a2e04();
  FUN_107325d70();
  return param_1;
}



/* Entry: 1073a2d5c; end: 1073a2e8f;  */

long FUN_1073a2d5c(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  func_0x000107268744(auStack_28,&stack0x00000070,&stack0x00000110);
  return lStack_20 + 0x38;
}



/* Entry: 1073a2e90; end: 1073a2f23;  */

void FUN_1073a2e90(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long extraout_x8;
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined8 uVar2;
  
  func_0x0001073a4404();
  if (extraout_x8 != 0) {
    do {
      func_0x0001073a42b4();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_3[1];
  uVar2 = *param_3;
  *(undefined8 *)(unaff_x19 + 0x18) = param_3[1];
  *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001073a42b4();
    } while (extraout_w10_00 != 0);
  }
  FUN_1073a3a0c(unaff_x19 + 0x20,param_4);
  func_0x00010726ed14(unaff_x19 + 0x88);
  *(long *)(unaff_x19 + 0x98) = unaff_x19;
  return;
}



/* Entry: 1073a2f24; end: 1073a38bb;  */

/* WARNING: Possible PIC construction at 0x0001073a2fd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073a30b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001073a2fd8) */
/* WARNING: Removing unreachable block (ram,0x0001073a30f8) */
/* WARNING: Removing unreachable block (ram,0x0001073a3160) */
/* WARNING: Removing unreachable block (ram,0x0001073a3100) */
/* WARNING: Removing unreachable block (ram,0x0001073a313c) */
/* WARNING: Removing unreachable block (ram,0x0001073a3140) */
/* WARNING: Removing unreachable block (ram,0x0001073a3148) */
/* WARNING: Removing unreachable block (ram,0x0001073a3054) */
/* WARNING: Removing unreachable block (ram,0x0001073a3194) */
/* WARNING: Removing unreachable block (ram,0x0001073a30b8) */
/* WARNING: Removing unreachable block (ram,0x0001073a31b0) */
/* WARNING: Removing unreachable block (ram,0x0001073a31cc) */
/* WARNING: Removing unreachable block (ram,0x0001073a3220) */
/* WARNING: Removing unreachable block (ram,0x0001073a3228) */
/* WARNING: Removing unreachable block (ram,0x0001073a3230) */
/* WARNING: Removing unreachable block (ram,0x0001073a3260) */
/* WARNING: Removing unreachable block (ram,0x0001073a3264) */
/* WARNING: Removing unreachable block (ram,0x0001073a3344) */
/* WARNING: Removing unreachable block (ram,0x0001073a33ac) */
/* WARNING: Removing unreachable block (ram,0x0001073a334c) */
/* WARNING: Removing unreachable block (ram,0x0001073a3388) */
/* WARNING: Removing unreachable block (ram,0x0001073a338c) */
/* WARNING: Removing unreachable block (ram,0x0001073a3394) */
/* WARNING: Removing unreachable block (ram,0x0001073a32f8) */
/* WARNING: Removing unreachable block (ram,0x0001073a33dc) */
/* WARNING: Removing unreachable block (ram,0x0001073a340c) */
/* WARNING: Removing unreachable block (ram,0x0001073a36a4) */
/* WARNING: Removing unreachable block (ram,0x0001073a36d8) */
/* WARNING: Removing unreachable block (ram,0x0001073a36ac) */
/* WARNING: Removing unreachable block (ram,0x0001073a36f4) */
/* WARNING: Removing unreachable block (ram,0x0001073a3420) */
/* WARNING: Removing unreachable block (ram,0x0001073a3430) */
/* WARNING: Removing unreachable block (ram,0x0001073a343c) */
/* WARNING: Removing unreachable block (ram,0x0001073a3458) */
/* WARNING: Removing unreachable block (ram,0x0001073a3490) */
/* WARNING: Removing unreachable block (ram,0x0001073a3494) */
/* WARNING: Removing unreachable block (ram,0x0001073a349c) */
/* WARNING: Removing unreachable block (ram,0x0001073a3534) */
/* WARNING: Removing unreachable block (ram,0x0001073a3544) */
/* WARNING: Removing unreachable block (ram,0x0001073a354c) */
/* WARNING: Removing unreachable block (ram,0x0001073a356c) */
/* WARNING: Removing unreachable block (ram,0x0001073a35f8) */
/* WARNING: Removing unreachable block (ram,0x0001073a35dc) */
/* WARNING: Removing unreachable block (ram,0x0001073a3600) */
/* WARNING: Removing unreachable block (ram,0x0001073a35ec) */
/* WARNING: Removing unreachable block (ram,0x0001073a3614) */
/* WARNING: Removing unreachable block (ram,0x0001073a3700) */
/* WARNING: Removing unreachable block (ram,0x0001073a3708) */
/* WARNING: Removing unreachable block (ram,0x0001073a3898) */
/* WARNING: Removing unreachable block (ram,0x0001073a38dc) */
/* WARNING: Removing unreachable block (ram,0x0001073a38c8) */
/* WARNING: Removing unreachable block (ram,0x0001073a3688) */

undefined1 * FUN_1073a2f24(long param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_aa0 [32];
  undefined1 auStack_a80 [64];
  undefined1 auStack_a40 [16];
  undefined1 auStack_a30 [24];
  undefined1 auStack_a18 [32];
  undefined4 uStack_9f8;
  undefined1 auStack_2d0 [64];
  undefined1 auStack_290 [512];
  undefined1 auStack_90 [64];
  
  puVar1 = auStack_aa0;
  func_0x0001073a439c();
  func_0x000107933b00(auStack_a40,0);
  func_0x000100068f84(auStack_a30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  uStack_9f8 = 1;
  func_0x00010056a150(auStack_a18,1);
  func_0x00010056a150(auStack_a18,0);
  func_0x000104c2f64c(auStack_90);
  if ((byte)(*(char *)(param_1 + 0x20) - 2U) < 4) {
    FUN_1073a38bc(auStack_a80);
  }
  else {
    FUN_1073a38bc(auStack_290);
    puVar1 = auStack_2d0;
  }
  func_0x000107c60c50(puVar1,&DAT_10f3915c2,0x10);
  return puVar1;
}



/* Entry: 1073a38bc; end: 1073a38e7;  */

undefined8 FUN_1073a38bc(undefined8 param_1,int param_2)

{
  undefined **ppuVar1;
  
  if (param_2 - 1U < 10) {
    ppuVar1 = (undefined **)(&PTR_PTR_1109aa1d0)[(ulong)(param_2 - 1U) & 0xff];
  }
  else {
    ppuVar1 = &PTR_DAT_1109aa0b0;
  }
  func_0x000107c60c50(param_1,*ppuVar1,ppuVar1[1]);
  return param_1;
}



/* Entry: 1073a38e8; end: 1073a3963;  */

void FUN_1073a38e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_2;
  uStack_50 = param_2;
  uStack_48 = param_3;
  FUN_1073a3b74();
  puStack_80 = &uStack_50;
  uStack_78 = param_4;
  uStack_70 = param_5;
  puStack_68 = puStack_80;
  uStack_60 = param_4;
  uStack_58 = param_5;
  FUN_1073a3c28(param_1,param_2,param_3,uVar1,&puStack_68,&puStack_80);
  return;
}



/* Entry: 1073a3964; end: 1073a3993;  */

void FUN_1073a3964(long param_1)

{
  func_0x000107395eb8(param_1 + 0x210);
  func_0x00010724b374(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1073a3994; end: 1073a39e3;  */

void FUN_1073a3994(undefined8 param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  
  func_0x0001073a4404();
  if (extraout_x8 != 0) {
    do {
      func_0x0001073a42b4();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  FUN_1073a3a64(unaff_x19 + 0x18,param_2 + 0x18);
  return;
}



/* Entry: 1073a39e4; end: 1073a3a0b;  */

undefined8 FUN_1073a39e4(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1073a3964(param_1 + 0x18);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1073a3a0c; end: 1073a3a63;  */

undefined1 * FUN_1073a3a0c(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  func_0x00010028af84(param_1 + 8,param_2 + 8);
  func_0x000107263b58(param_1 + 0x28,param_2 + 0x28);
  return param_1;
}



/* Entry: 1073a3a64; end: 1073a3abf;  */

long FUN_1073a3a64(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x0001072d488c(lVar1 + 0x18,param_2 + 0x18);
  FUN_1073a3ef0(param_1 + 0x210,param_2 + 0x210);
  return param_1;
}



/* Entry: 1073a3ac0; end: 1073a3b13;  */

undefined8 *
FUN_1073a3ac0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2;
  func_0x0001005d466c();
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar4 = uVar3;
  func_0x0001005d466c();
  *param_1 = param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = param_4;
  param_1[5] = uVar4;
  return param_1;
}



/* Entry: 1073a3b14; end: 1073a3b73;  */

void FUN_1073a3b14(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = param_2;
  func_0x0001005d466c();
  func_0x0001005d466c(uVar1);
  func_0x0001073a42cc();
  *(undefined1 *)(param_2 + lVar2) = 0;
  return;
}



/* Entry: 1073a3b74; end: 1073a3c27;  */

undefined8 * FUN_1073a3b74(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w10;
  undefined1 auStack_1e0 [3];
  undefined5 uStack_1dd;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_180 [32];
  undefined **ppuStack_160;
  undefined1 *puStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [256];
  long lStack_40;
  long lStack_38;
  
  puVar8 = auStack_180;
  func_0x0001073a439c();
  lStack_38 = extraout_x8;
  func_0x00010598789c(auStack_180,param_3,param_4);
  puStack_158 = auStack_140;
  uStack_148 = 0x100;
  lStack_150 = 0;
  ppuStack_160 = &PTR_DAT_1109965d0;
  lStack_40 = 0;
  puVar7 = (undefined8 *)0xdd;
  func_0x0001003a9984(&ppuStack_160,param_1,param_2,0xdd,auStack_180,0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return (undefined8 *)(lStack_150 + lStack_40);
  }
  ___stack_chk_fail();
  puVar3 = (undefined8 *)auStack_1e0;
  puVar5 = (undefined8 *)auStack_1e0;
  puVar4 = (undefined8 *)auStack_1e0;
  uVar6 = param_2;
  func_0x0001073a439c();
  uVar2 = uVar6 == 0x25;
  uStack_1b8 = extraout_x8_01;
  if (uVar6 < 0x26) {
    auStack_1e0[2] = 0;
    puVar5 = (undefined8 *)(auStack_1e0 + 2);
    *(undefined1 *)((long)puVar5 + param_2) = 0;
    uVar6 = 0x26;
    auStack_1e0._0_2_ = (short)param_2;
    FUN_1073a3d60();
    extraout_x8_00[1] = lStack_1d8;
    *extraout_x8_00 = CONCAT53(uStack_1dd,CONCAT12(auStack_1e0[2],auStack_1e0._0_2_));
    extraout_x8_00[3] = uStack_1c8;
    extraout_x8_00[2] = uStack_1d0;
    extraout_x8_00[4] = uStack_1c0;
    *(undefined4 *)(extraout_x8_00 + 5) = 1;
    extraout_x8_00[6] = 0xffffffffffffffff;
    puVar3 = puVar7;
  }
  else {
    uVar2 = param_2 == 0x51;
    if (param_2 < 0x52) {
      func_0x0001073a42e8(auStack_1e0);
      puVar1 = (undefined2 *)CONCAT53(uStack_1dd,CONCAT12(auStack_1e0[2],auStack_1e0._0_2_));
      *puVar1 = (short)param_2;
      *(undefined1 *)((long)puVar1 + param_2 + 2) = 0;
      puVar5 = (undefined8 *)(CONCAT53(uStack_1dd,CONCAT12(auStack_1e0[2],auStack_1e0._0_2_)) + 2);
      uVar6 = 0x52;
      FUN_1073a3d60(puVar7);
      extraout_x8_00[1] = lStack_1d8;
      *extraout_x8_00 = CONCAT53(uStack_1dd,CONCAT12(auStack_1e0[2],auStack_1e0._0_2_));
      if (lStack_1d8 != 0) {
        do {
          func_0x0001073a42b4();
        } while (extraout_w10 != 0);
      }
      *(undefined4 *)(extraout_x8_00 + 5) = 2;
      extraout_x8_00[6] = 0xffffffffffffffff;
      func_0x000104c2f784();
    }
    else {
      func_0x0001073a3d98(auStack_1e0,puVar8);
      puVar3 = extraout_x8_00;
      func_0x0001072625b4();
      func_0x0001073a4378();
    }
  }
  func_0x0001073a43dc(uStack_1b8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000104c2f784();
    func_0x0001073a43c4();
    puVar7 = puVar5;
    FUN_1073a3de0(puVar5,uVar6,*puVar4,puVar4[1],puVar4[2]);
    *(undefined1 *)((long)puVar5 + uVar6) = 0;
    return puVar7;
  }
  return puVar3;
}



/* Entry: 1073a3c28; end: 1073a3d5f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1073a3c28(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = (undefined2 *)&uStack_60;
  puVar2 = &uStack_60;
  uVar4 = param_4;
  func_0x0001073a439c();
  uVar1 = uVar4 == 0x25;
  uStack_38 = extraout_x8;
  if (uVar4 < 0x26) {
    uStack_60._2_1_ = 0;
    puVar3 = (undefined2 *)((long)&uStack_60 + 2);
    *(undefined1 *)((long)puVar3 + param_4) = 0;
    uVar4 = 0x26;
    uStack_60._0_2_ = (short)param_4;
    FUN_1073a3d60();
    param_1[1] = lStack_58;
    *param_1 = CONCAT53(uStack_60._3_5_,CONCAT12(uStack_60._2_1_,(undefined2)uStack_60));
    param_1[3] = uStack_48;
    param_1[2] = uStack_50;
    param_1[4] = uStack_40;
    *(undefined4 *)(param_1 + 5) = 1;
    param_1[6] = 0xffffffffffffffff;
  }
  else {
    uVar1 = param_4 == 0x51;
    if (param_4 < 0x52) {
      func_0x0001073a42e8(&uStack_60);
      puVar3 = (undefined2 *)
               CONCAT53(uStack_60._3_5_,CONCAT12(uStack_60._2_1_,(undefined2)uStack_60));
      *puVar3 = (short)param_4;
      *(undefined1 *)((long)puVar3 + param_4 + 2) = 0;
      puVar3 = (undefined2 *)
               (CONCAT53(uStack_60._3_5_,CONCAT12(uStack_60._2_1_,(undefined2)uStack_60)) + 2);
      uVar4 = 0x52;
      FUN_1073a3d60(param_5);
      param_1[1] = lStack_58;
      *param_1 = CONCAT53(uStack_60._3_5_,CONCAT12(uStack_60._2_1_,(undefined2)uStack_60));
      if (lStack_58 != 0) {
        do {
          func_0x0001073a42b4();
        } while (extraout_w10 != 0);
      }
      *(undefined4 *)(param_1 + 5) = 2;
      param_1[6] = 0xffffffffffffffff;
      func_0x000104c2f784();
    }
    else {
      func_0x0001073a3d98(&uStack_60,param_6);
      func_0x0001072625b4();
      func_0x0001073a4378();
    }
  }
  func_0x0001073a43dc(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000104c2f784();
    func_0x0001073a43c4();
    FUN_1073a3de0(puVar3,uVar4,*puVar2,puVar2[1],puVar2[2]);
    *(undefined1 *)((long)puVar3 + uVar4) = 0;
    return;
  }
  return;
}



/* Entry: 1073a3d60; end: 1073a3ddf;  */

void FUN_1073a3d60(undefined8 *param_1,long param_2,long param_3)

{
  FUN_1073a3de0(param_2,param_3,*param_1,param_1[1],param_1[2]);
  *(undefined1 *)(param_2 + param_3) = 0;
  return;
}



/* Entry: 1073a3de0; end: 1073a3e3b;  */

void FUN_1073a3de0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [32];
  
  func_0x00010598789c(auStack_50,param_4,param_5);
  func_0x000107268a34(param_1,param_2,*param_3,param_3[1],0xdd,auStack_50);
  return;
}



/* Entry: 1073a3e3c; end: 1073a3e8f;  */

undefined8 *
FUN_1073a3e3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  func_0x0001005d466c();
  uVar2 = uVar1;
  func_0x0001005d466c();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = uVar1;
  param_1[4] = param_5;
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 1073a3e90; end: 1073a3eef;  */

void FUN_1073a3e90(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = param_2;
  func_0x0001005d466c();
  func_0x0001005d466c(uVar1);
  func_0x0001073a42cc();
  *(undefined1 *)(param_2 + lVar2) = 0;
  return;
}



/* Entry: 1073a3ef0; end: 1073a3f6f;  */

long FUN_1073a3ef0(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 1073a3f70; end: 1073a3f83;  */

void FUN_1073a3f70(void)

{
  func_0x0001073a3f50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a3f84; end: 1073a3fc3;  */

undefined8 FUN_1073a3f84(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x250;
  __Znwm(0x250);
  FUN_1073a4264();
  return uVar1;
}



/* Entry: 1073a3fc4; end: 1073a3fef;  */

void FUN_1073a3fc4(long param_1,undefined8 param_2)

{
  func_0x0001073a43f0(param_2,param_1 + 8);
  FUN_1073a3994();
  return;
}



/* Entry: 1073a3ff0; end: 1073a421f;  */

void FUN_1073a3ff0(long param_1,long param_2)

{
  ulong *puVar1;
  undefined **ppuVar2;
  code *pcVar3;
  undefined ***pppuVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long *plStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  func_0x00010726fc00(&plStack_c8,param_1 + 8);
  if (plStack_c8 != (long *)0x0) {
    func_0x00010726fc3c();
    uStack_d0 = uStack_c0;
    plStack_d8 = plStack_c8;
    if (*plStack_c8 != -1) {
      plStack_c8 = (long *)0x0;
      uStack_c0 = 0;
      ppuStack_80 = (undefined **)0x0;
      uStack_78 = 0;
      func_0x0001072508cc(&ppuStack_80);
      goto LAB_1073a406c;
    }
    func_0x00010726fc88();
  }
  func_0x0001073a4368();
  plStack_d8 = (long *)0x0;
  uStack_d0 = 0;
  plStack_c8 = (long *)0x0;
  uStack_c0 = 0;
LAB_1073a406c:
  func_0x0001073a4368();
  func_0x00010726fc00(&plStack_c8,param_1 + 8);
  if (plStack_c8 == (long *)0x0) {
    func_0x0001073a4368();
  }
  else {
    lVar8 = *plStack_c8;
    func_0x0001073a4368();
    if (lVar8 != -1) {
      ppuStack_80 = &PTR_DAT_1109edf00;
      uStack_78 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      if ((((*(long *)(param_2 + 0x10) == 0) && ((*(byte *)(param_2 + 0x19) & 1) == 0)) &&
          ((*(byte *)(param_2 + 0x18) & 1) == 0)) &&
         (puVar6 = *(undefined8 **)(param_2 + 0x20), puVar6 != (undefined8 *)0x0)) {
        lVar8 = (long)*(char *)((long)puVar6 + 0x17);
        puVar7 = puVar6;
        if (lVar8 < 0) {
          puVar7 = (undefined8 *)*puVar6;
          lVar8 = puVar6[1];
        }
        pppuVar4 = &ppuStack_80;
        func_0x0001001a3c94(pppuVar4,puVar7,lVar8);
        if ((int)pppuVar4 != 0) {
          puVar1 = &uStack_70;
          if ((uStack_70 & 1) != 0) {
            puVar1 = (ulong *)(uStack_70 + 7);
          }
          for (lVar8 = (long)(int)uStack_68 << 3; lVar8 != 0; lVar8 = lVar8 + -8) {
            uVar9 = *puVar1;
            if ((*(byte *)(uVar9 + 0x10) & 1) != 0) {
              func_0x0001073a43cc(*(undefined8 *)(uVar9 + 0x18),&plStack_c8);
              ppuVar2 = &PTR_PTR_113233cf0;
              if (*(undefined ***)(uVar9 + 0x20) != (undefined **)0x0) {
                ppuVar2 = *(undefined ***)(uVar9 + 0x20);
              }
              func_0x0001073a43cc(ppuVar2[2],auStack_b0);
              ppuVar2 = &PTR_PTR_113233cd0;
              if (*(undefined ***)(uVar9 + 0x28) != (undefined **)0x0) {
                ppuVar2 = *(undefined ***)(uVar9 + 0x28);
              }
              func_0x0001073a43cc(ppuVar2[2],auStack_98);
              plVar5 = *(long **)(param_1 + 0x248);
              if (plVar5 == (long *)0x0) {
                func_0x000104bfeb48();
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1073a41d0);
                (*pcVar3)();
              }
              (**(code **)(*plVar5 + 0x30))(plVar5,&plStack_c8);
              func_0x0001073a4284(&plStack_c8);
            }
            puVar1 = puVar1 + 1;
          }
        }
      }
      func_0x0001079342bc(&ppuStack_80);
    }
  }
  func_0x000107270b00(&plStack_d8);
  return;
}



/* Entry: 1073a4220; end: 1073a4257;  */

long FUN_1073a4220(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109aa1c0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1073a4258; end: 1073a4263;  */

undefined ** FUN_1073a4258(void)

{
  return &PTR_DAT_1109aa1c0;
}



/* Entry: 1073a4264; end: 1073a42b3;  */

void FUN_1073a4264(void)

{
  func_0x0001073a43f0();
  FUN_1073a3994();
  return;
}



/* Entry: 1073a42b4; end: 1073a4417;  */

void FUN_1073a42b4(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1073a4418; end: 1073a471b;  */

void FUN_1073a4418(long param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined ***pppuVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [24];
  undefined **ppuStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined ***pppuStack_40;
  undefined8 uStack_38;
  
  func_0x0001073a4bac();
  uStack_a0 = *param_3;
  lStack_98 = param_3[1];
  if (lStack_98 == 0) {
    lStack_48 = 0;
  }
  else {
    plVar1 = (long *)(lStack_98 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      lStack_48 = lStack_98;
    } while (cVar3 != '\0');
  }
  pppuStack_40 = &ppuStack_58;
  ppuStack_58 = &PTR_FUN_1109aa240;
  uStack_50 = uStack_a0;
  uStack_38 = extraout_x8;
  func_0x00010726ee04(&uStack_a0);
  uVar2 = *(undefined1 *)(param_2 + 0x20);
  func_0x00010002b838(auStack_90,&DAT_10f40ba1c);
  FUN_10739f92c(auStack_d0,auStack_90,uVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  func_0x000100060b18(auStack_e8,&PTR_DAT_1109aa220);
  func_0x00010533a9c0(auStack_b8,auStack_d0,auStack_e8);
  func_0x0001072625b4(param_1,auStack_b8);
  func_0x00010028af84(param_1 + 0x38,param_2);
  func_0x000107263b58(param_1 + 0x58,param_2 + 0x28);
  func_0x00010028b0c8(param_1 + 0x98,param_2 + 0x68);
  func_0x00010002b838(auStack_70,&DAT_10f40ba1c);
  uVar2 = *(undefined1 *)(param_2 + 0x20);
  func_0x00010028af84(auStack_90,param_2 + 0xa8);
  FUN_10739fa50(param_1 + 0xc0,auStack_70,uVar2,auStack_90);
  func_0x0001001148fc(auStack_90);
  func_0x0001073a4bbc();
  func_0x00010002b838();
  func_0x0001073a4ba0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  func_0x0001073a4bbc();
  func_0x00010002b838();
  func_0x0001073a4ba0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  func_0x0001073a4bbc();
  func_0x00010002b838();
  func_0x0001073a4ba0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  func_0x0001073a4bbc();
  FUN_10732ae14(param_1 + 0xe8,&ppuStack_58);
  func_0x0001072d51d0(param_1 + 0x108,param_2 + 0x90);
  FUN_1073a471c(param_1 + 0x120,&DAT_10f40ba0b);
  lVar6 = *(long *)(param_2 + 0x118);
  uVar7 = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x140) = uVar7;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
  func_0x0001073a4b98();
  func_0x0001073a4bc4();
  pppuVar5 = &ppuStack_58;
  func_0x0001073288c0();
  func_0x0001073a4b78(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010015b8c8(param_1 + 0x108);
    func_0x0001073288c0(param_1 + 0xe8);
    func_0x00010028ad98(param_1 + 0xc0);
    func_0x00010028ad98(param_1 + 0x98);
    func_0x00010724b3d8(param_1 + 0x58);
    func_0x0001001148fc(param_1 + 0x38);
    func_0x000104c2f714(param_1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
    func_0x0001073a4b98();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
    func_0x0001073288c0(&ppuStack_58);
    __Unwind_Resume();
    func_0x00010002b838();
    *(undefined1 *)(pppuVar5 + 3) = 1;
    return;
  }
  return;
}



/* Entry: 1073a471c; end: 1073a4737;  */

void FUN_1073a471c(long param_1)

{
  func_0x00010002b838();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1073a4738; end: 1073a4763;  */

undefined8 * FUN_1073a4738(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109aa240;
  func_0x00010726ee04(param_1 + 1);
  return param_1;
}



/* Entry: 1073a4764; end: 1073a4777;  */

void FUN_1073a4764(void)

{
  FUN_1073a4738();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a4778; end: 1073a47c7;  */

void FUN_1073a4778(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)0x18;
  __Znwm();
  *puVar4 = &PTR_FUN_1109aa240;
  lVar5 = *(long *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1073a47c8; end: 1073a4817;  */

void FUN_1073a47c8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_FUN_1109aa240;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1073a4818; end: 1073a4977;  */

void FUN_1073a4818(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [64];
  undefined8 uStack_118;
  char cStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  char cStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char cStack_d8;
  undefined8 uStack_38;
  
  func_0x0001073a4bac();
  uStack_38 = extraout_x8;
  (**(code **)(**(long **)(param_2 + 8) + 0x20))(auStack_158);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (cStack_110 == '\x01') {
    __ZNSt3__19to_stringEy(auStack_170,uStack_118);
    func_0x0001073a4bd4();
    func_0x0001073a4b8c();
    func_0x0001073a4bcc();
    func_0x0001073a4b98();
    func_0x0001073a4bc4();
  }
  if (cStack_f0 == '\x01') {
    FUN_1073a49bc(uStack_100,uStack_f8,auStack_170);
    func_0x0001073a4bd4();
    func_0x0001073a4b8c();
    func_0x0001073a4bcc();
    func_0x0001073a4b98();
    func_0x0001073a4bc4();
  }
  uVar1 = cStack_d8 == '\x01';
  if ((bool)uVar1) {
    FUN_1073a49bc(uStack_e8,uStack_e0,auStack_170);
    func_0x0001073a4bd4();
    func_0x0001073a4b8c();
    func_0x0001073a4bcc();
    func_0x0001073a4b98();
    func_0x0001073a4bc4();
  }
  puVar2 = auStack_158;
  func_0x0001072bbee8(puVar2);
  func_0x0001073a4b78(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073a4b98();
  func_0x0001073a4bc4();
  func_0x00010028ad98(param_1);
  func_0x0001072bbee8(auStack_158);
  do {
    __Unwind_Resume(puVar2);
  } while( true );
}



/* Entry: 1073a4978; end: 1073a49af;  */

long FUN_1073a4978(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109aa2a0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1073a49b0; end: 1073a49bb;  */

undefined ** FUN_1073a49b0(void)

{
  return &PTR_DAT_1109aa2a0;
}



/* Entry: 1073a49bc; end: 1073a4b13;  */

/* WARNING: Possible PIC construction at 0x0001073a4abc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073a4b5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001073a4ac0) */
/* WARNING: Removing unreachable block (ram,0x0001073a4adc) */
/* WARNING: Removing unreachable block (ram,0x0001073a4b0c) */
/* WARNING: Removing unreachable block (ram,0x0001073a4ac4) */
/* WARNING: Removing unreachable block (ram,0x0001073a4b60) */
/* WARNING: Removing unreachable block (ram,0x0001073a4b70) */
/* WARNING: Removing unreachable block (ram,0x0001073a4b64) */

void FUN_1073a49bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined1 uStack_e4;
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
  
  func_0x0001073a4bac();
  func_0x0001073028ec(&uStack_b0,0,0x400,0);
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0x3000000000000;
  FUN_1073a4b14(param_1,&uStack_b0,"lat",3,uStack_98);
  FUN_1073a4b14(param_2,&uStack_b0,&DAT_10f30064b,3,uStack_98);
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0x100;
  puStack_120 = &uStack_e0;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0x200;
  uStack_e8 = 0x144;
  uStack_e4 = 0;
  FUN_107348798(&uStack_b0,&puStack_120);
  puVar1 = &uStack_e0;
  FUN_107326be8(puVar1);
  func_0x00010002b838(param_3,puVar1);
  func_0x000107302960(&uStack_118);
  func_0x000107302960(&uStack_e0);
  func_0x0001073029ac(&uStack_b0);
  return;
}



/* Entry: 1073a4b14; end: 1073a4b77;  */

/* WARNING: Possible PIC construction at 0x0001073a4b5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001073a4b60) */
/* WARNING: Removing unreachable block (ram,0x0001073a4b70) */
/* WARNING: Removing unreachable block (ram,0x0001073a4b64) */

void FUN_1073a4b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  func_0x0001073a4bac();
  uStack_38 = 0x405000000000000;
  uStack_48 = (ulong)param_4;
  uStack_28 = 0;
  uStack_20 = 0x216000000000000;
  uStack_40 = param_3;
  uStack_30 = param_1;
  FUN_107348ef0(param_2,&uStack_48,&uStack_30);
  return;
}



/* Entry: 1073a4b78; end: 1073a4be3;  */

void FUN_1073a4b78(void)

{
  return;
}



/* Entry: 1073a4be4; end: 1073a4c93;  */

undefined8 *
FUN_1073a4be4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_1109aa2c0;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_1073a5a78();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_1073a5a78();
    } while (extraout_w10_00 != 0);
  }
  FUN_1073a565c(param_1 + 5,param_4);
  func_0x00010726ed14(param_1 + 0xe);
  param_1[0x10] = param_1;
  return param_1;
}



/* Entry: 1073a4c94; end: 1073a4cf3;  */

undefined8 * FUN_1073a4c94(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1109aa2c0;
  plVar1 = param_1 + 0xe;
  if (*plVar1 != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0(plVar1);
  func_0x0001072508cc(plVar1);
  func_0x0001072db128(param_1 + 5);
  func_0x00010726eedc(param_1 + 3);
  func_0x0001072aa2e8(param_1 + 1);
  return param_1;
}



/* Entry: 1073a4cf4; end: 1073a4cf7;  */

undefined8 * FUN_1073a4cf4(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1109aa2c0;
  plVar1 = param_1 + 0xe;
  if (*plVar1 != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0(plVar1);
  func_0x0001072508cc(plVar1);
  func_0x0001072db128(param_1 + 5);
  func_0x00010726eedc(param_1 + 3);
  func_0x0001072aa2e8(param_1 + 1);
  return param_1;
}



/* Entry: 1073a4cf8; end: 1073a4d0b;  */

void FUN_1073a4cf8(void)

{
  FUN_1073a4c94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a4d0c; end: 1073a5623;  */

/* WARNING: Possible PIC construction at 0x0001073a5368: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001073a536c) */
/* WARNING: Removing unreachable block (ram,0x0001073a53cc) */
/* WARNING: Removing unreachable block (ram,0x0001073a53b8) */
/* WARNING: Removing unreachable block (ram,0x0001073a53d4) */
/* WARNING: Removing unreachable block (ram,0x0001073a53c0) */
/* WARNING: Removing unreachable block (ram,0x0001073a53e8) */
/* WARNING: Removing unreachable block (ram,0x0001073a54d8) */
/* WARNING: Removing unreachable block (ram,0x0001073a54e0) */
/* WARNING: Removing unreachable block (ram,0x0001073a5600) */
/* WARNING: Removing unreachable block (ram,0x0001073a546c) */

long FUN_1073a4d0c(double param_1,ulong param_2,long param_3,undefined8 *param_4,undefined8 param_5)

{
  ulong uVar1;
  byte bVar2;
  undefined8 ****ppppuVar3;
  undefined ***pppuVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  int iVar8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint uVar9;
  long *plVar10;
  undefined **ppuVar11;
  undefined **ppuStack_608;
  ulong uStack_600;
  uint uStack_5f4;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  long *plStack_5e0;
  undefined8 uStack_5d8;
  undefined4 uStack_5d0;
  undefined8 ***pppuStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  undefined1 auStack_5b0 [56];
  undefined1 uStack_578;
  undefined **ppuStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  long lStack_558;
  double dStack_550;
  undefined1 uStack_548;
  undefined *puStack_540;
  undefined8 uStack_538;
  undefined **ppuStack_530;
  undefined8 **ppuStack_528;
  ulong *puStack_520;
  uint *puStack_518;
  ulong uStack_510;
  undefined8 uStack_508;
  undefined1 auStack_4f8 [24];
  undefined1 auStack_4e0 [32];
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined **ppuStack_480;
  ulong uStack_478;
  ulong uStack_470;
  undefined8 uStack_468;
  ulong uStack_460;
  undefined1 auStack_448 [56];
  undefined1 auStack_410 [72];
  undefined1 uStack_3c8;
  undefined1 auStack_3c0 [64];
  undefined1 auStack_380 [304];
  undefined1 auStack_250 [64];
  undefined2 uStack_210;
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [40];
  undefined1 auStack_1c8 [56];
  undefined8 uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  long lStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_570 = &PTR_DAT_110d0f2f8;
  uStack_568 = 0;
  lStack_558 = 0;
  dStack_550 = 0.0;
  uStack_548 = 0;
  uStack_560 = 1;
  lVar5 = 0;
  func_0x0001072f03cc();
  lVar6 = lVar5;
  lStack_558 = lVar5;
  func_0x0001072e86f4();
  *(undefined8 *)(lVar6 + 0x10) = *param_4;
  lVar6 = lVar5;
  func_0x0001072e86f4();
  *(undefined8 *)(lVar6 + 0x18) = param_4[1];
  lVar6 = lVar5;
  func_0x0001072e8704();
  *(undefined8 *)(lVar6 + 0x10) = param_4[2];
  func_0x0001072e8704();
  ppuVar11 = (undefined **)param_4[3];
  *(undefined ***)(lVar5 + 0x18) = ppuVar11;
  uVar9 = *(byte *)(param_3 + 0x28) - 1;
  if (uVar9 < 10) {
    ppuVar7 = (undefined **)(&PTR_PTR_1109aa420)[(ulong)uVar9 & 0xff];
  }
  else {
    ppuVar7 = &PTR_DAT_1109aa300;
  }
  dStack_550 = param_1;
  func_0x000100060b18(auStack_3c0,ppuVar7);
  func_0x000100060b18(&uStack_190,&PTR_DAT_1109aa2e0);
  FUN_1073a38e8(auStack_1c8,&UNK_10f409b65,5,auStack_3c0,&uStack_190);
  func_0x0001073a5a88();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3c0);
  auStack_410[0] = 0;
  uStack_3c8 = 0;
  auStack_5b0[0] = 0;
  uStack_578 = 0;
  func_0x00010724aea8(auStack_3c0,0,auStack_1c8,auStack_410,3,auStack_5b0);
  func_0x00010724b12c(auStack_5b0);
  func_0x00010724b2ac(auStack_410);
  if (*(char *)(param_3 + 0x48) == '\x01') {
    func_0x0001072e787c(param_3 + 0x30);
    func_0x0001073a5ac8();
    func_0x000100608100(auStack_1f0,&uStack_190);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    func_0x0001073a5a88();
  }
  uStack_210 = 0x101;
  pppuStack_5c8 = (undefined8 ****)0x0;
  uStack_5c0 = 0;
  uStack_5b8 = 0;
  func_0x0001001a556c(&ppuStack_570,&pppuStack_5c8);
  uVar1 = uStack_5c0;
  ppppuVar3 = (undefined8 ****)pppuStack_5c8;
  if (-1 < (long)uStack_5b8) {
    uVar1 = uStack_5b8 >> 0x38;
    ppppuVar3 = &pppuStack_5c8;
  }
  FUN_1073a27a8(ppppuVar3,(long)ppppuVar3 + uVar1,auStack_208);
  bVar2 = *(byte *)(param_3 + 0x28);
  if ((bVar2 < 0xb) && ((1 << (ulong)(bVar2 & 0x1f) & 0x7f3U) == 0)) {
    if (bVar2 == 2) {
      func_0x0001073a5ab4();
      func_0x00010002b838(auStack_5b0,&UNK_10f40bca6);
      func_0x0001073a5ad0();
    }
    else {
      func_0x0001073a5ab4();
      func_0x00010002b838(auStack_5b0,&UNK_10f40bcb9);
      func_0x0001073a5ad0();
    }
    func_0x0001002aa0bc(&uStack_190);
    plVar10 = plStack_5e0;
  }
  else {
    ppuVar11 = (undefined **)0x0;
    uStack_5e8 = 0;
    uStack_5f0 = 0;
    uStack_5d8 = 0;
    plStack_5e0 = (long *)0x0;
    uStack_5d0 = 0x3f800000;
    plVar10 = plStack_5e0;
  }
  for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
    func_0x00010060413c(auStack_1f0,plVar10 + 2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  }
  func_0x000104c302a4(auStack_448,&DAT_10f301125,10);
  plVar10 = *(long **)(param_3 + 0x18);
  func_0x0001073a5ac8();
  (**(code **)(*plVar10 + 0x68))(&ppuStack_480,plVar10,&uStack_190);
  func_0x0001073a5a88();
  if ((char)uStack_468 == '\x01') {
    uVar1 = uStack_478;
    if (-1 < (long)uStack_470) {
      uVar1 = uStack_470 >> 0x38;
    }
    if (uVar1 != 0) {
      func_0x000107262e9c(&uStack_190,&ppuStack_480);
      func_0x000104c2f1f0(auStack_448,&uStack_190);
      func_0x000104c2f714(&uStack_190);
    }
  }
  func_0x0001001148fc(&ppuStack_480);
  iVar8 = (int)param_1;
  if (0xe < iVar8) {
    iVar8 = 0xf;
  }
  uStack_5f4 = iVar8 + 1;
  func_0x00010739d7bc(param_4);
  uStack_190 = ppuVar11;
  uStack_188 = param_2;
  func_0x00010726b794(&uStack_190,uStack_5f4);
  puStack_540 = &UNK_10f40baf1;
  uStack_538 = 0x16;
  uStack_510 = (ulong)uStack_5f4;
  ppuStack_528 = (undefined8 **)0x0;
  uStack_508 = 0;
  puStack_518 = (uint *)0x0;
  uStack_178 = 0x100;
  uStack_180 = 0;
  ppuStack_608 = ppuVar11;
  uStack_600 = param_2;
  ppuStack_530 = ppuVar11;
  puStack_520 = (ulong *)param_2;
  func_0x0001073a5b24(&uStack_170);
  func_0x0001003a9984(&uStack_190);
  ppuStack_528 = &ppuStack_608;
  puStack_520 = &uStack_600;
  uVar1 = uStack_180 + lStack_70;
  ppuStack_530 = &puStack_540;
  puStack_518 = &uStack_5f4;
  if (uVar1 < 0x26) {
    uStack_190 = (undefined **)
                 (CONCAT62((int6)((ulong)uStack_190 >> 0x10),(short)uVar1) & 0xffffffffff00ffff);
    *(undefined1 *)((long)&uStack_190 + 2 + uVar1) = 0;
    FUN_1073a56b8(&ppuStack_530,(long)&uStack_190 + 2,0x26);
    uStack_478 = uStack_188;
    ppuStack_480 = uStack_190;
    uStack_468 = uStack_178;
    uStack_470 = uStack_180;
    uStack_460 = uStack_170;
    func_0x0001073a5a98(1);
  }
  else if (uVar1 < 0x52) {
    func_0x0001073a5ae8();
    *(short *)uStack_190 = (short)uVar1;
    *(undefined1 *)((long)uStack_190 + uVar1 + 2) = 0;
    FUN_1073a56b8(&ppuStack_530,(undefined2 *)((long)uStack_190 + 2),0x52);
    uStack_478 = uStack_188;
    ppuStack_480 = uStack_190;
    if (uStack_188 != 0) {
      do {
        func_0x0001073a5a78();
      } while (extraout_w10 != 0);
    }
    func_0x0001073a5a98(2);
    func_0x000104c2f784(&uStack_190);
  }
  else {
    uStack_170 = (ulong)uStack_5f4;
    uStack_188 = 0;
    uStack_190 = ppuStack_608;
    uStack_178 = 0;
    uStack_180 = uStack_600;
    uStack_168 = 0;
    func_0x0001003a9204(auStack_4f8,&UNK_10f40baf1,0x16,0x1aa,&uStack_190);
    func_0x0001072625b4(&ppuStack_480,auStack_4f8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4f8);
  }
  func_0x00010729515c(auStack_380,&ppuStack_480);
  func_0x0001073a5b10();
  plVar10 = *(long **)(param_3 + 0x18);
  func_0x0001073a5ac8();
  (**(code **)(*plVar10 + 0x38))(plVar10,&uStack_190);
  func_0x0001073a5a88();
  uVar9 = 0x15180;
  if (((ulong)plVar10 & 0x100000000) != 0) {
    uVar9 = (uint)plVar10;
  }
  ppuVar11 = (undefined **)(ulong)uVar9;
  ppuStack_528 = (undefined8 **)0x0;
  uStack_178 = 0x100;
  uStack_180 = 0;
  ppuStack_530 = ppuVar11;
  func_0x0001073a5b24(&uStack_170);
  func_0x0001003a9984(&uStack_190,&UNK_10f40a5f4,0x1b,1,&ppuStack_530,0);
  uVar1 = uStack_180 + lStack_70;
  if (uVar1 < 0x26) {
    uStack_190 = (undefined **)
                 (CONCAT62((int6)((ulong)uStack_190 >> 0x10),(short)uVar1) & 0xffffffffff00ffff);
    *(undefined1 *)((long)&uStack_190 + 2 + uVar1) = 0;
    func_0x0001073a571c(&UNK_10f40a5f4,0x1b,ppuVar11,(long)&uStack_190 + 2,0x26);
    uStack_478 = uStack_188;
    ppuStack_480 = uStack_190;
    uStack_468 = uStack_178;
    uStack_470 = uStack_180;
    uStack_460 = uStack_170;
    func_0x0001073a5a98(1);
  }
  else if (uVar1 < 0x52) {
    func_0x0001073a5ae8();
    *(short *)uStack_190 = (short)uVar1;
    *(undefined1 *)((long)uStack_190 + uVar1 + 2) = 0;
    func_0x0001073a571c(&UNK_10f40a5f4,0x1b,ppuVar11,(undefined2 *)((long)uStack_190 + 2),0x52);
    uStack_478 = uStack_188;
    ppuStack_480 = uStack_190;
    if (uStack_188 != 0) {
      do {
        func_0x0001073a5a78();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001073a5a98(2);
    func_0x000104c2f784(&uStack_190);
  }
  else {
    ppuStack_528 = (undefined8 **)0x0;
    ppuStack_530 = ppuVar11;
    func_0x0001003a9204(&uStack_190,&UNK_10f40a5f4,0x1b,1,&ppuStack_530);
    func_0x0001072625b4(&ppuStack_480,&uStack_190);
    func_0x0001073a5a88();
  }
  func_0x00010729515c(auStack_250,&ppuStack_480);
  func_0x0001073a5b10();
  func_0x0001073a576c(auStack_4e0,param_5);
  uStack_4b8 = *(undefined8 *)(param_3 + 0x78);
  uStack_4c0 = *(undefined8 *)(param_3 + 0x70);
  if (*(long *)(param_3 + 0x78) != 0) {
    do {
      func_0x0001073a5a78();
    } while (extraout_w10_01 != 0);
  }
  uStack_4b0 = *(undefined8 *)(param_3 + 0x80);
  ppuStack_530 = (undefined **)0x0;
  ppuStack_528 = (undefined8 **)0x0;
  ppuStack_480 = (undefined **)0x0;
  uStack_478 = 0;
  pppuVar4 = &ppuStack_480;
  func_0x00010725c0a0();
  if (pppuVar4 != (undefined ***)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_3;
}



/* Entry: 1073a5624; end: 1073a564b;  */

undefined8 FUN_1073a5624(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10739e228(param_1 + 0x18);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1073a564c; end: 1073a565b;  */

void FUN_1073a564c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001073a5658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  return;
}



/* Entry: 1073a565c; end: 1073a56b7;  */

undefined1 * FUN_1073a565c(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  func_0x00010028af84(param_1 + 8,param_2 + 8);
  func_0x00010028af84(param_1 + 0x28,param_2 + 0x28);
  return param_1;
}



/* Entry: 1073a56b8; end: 1073a57ef;  */

void FUN_1073a56b8(long *param_1,long param_2,long param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  
  uStack_50 = *(undefined8 *)param_1[1];
  uStack_40 = *(undefined8 *)param_1[2];
  uStack_30 = (ulong)*(uint *)param_1[3];
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x000107268a34(param_2,param_3,*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],0x1aa,
                      &uStack_50);
  *(undefined1 *)(param_2 + param_3) = 0;
  return;
}



/* Entry: 1073a57f0; end: 1073a5803;  */

void FUN_1073a57f0(void)

{
  func_0x0001073a57cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a5804; end: 1073a5847;  */

undefined8 FUN_1073a5804(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x40;
  __Znwm(0x40);
  FUN_1073a5a14();
  return uVar1;
}



/* Entry: 1073a5848; end: 1073a5873;  */

void FUN_1073a5848(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  func_0x0001073a5af8();
  *param_2 = extraout_x8;
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_2[2] = puVar1[1];
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001073a5a78();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x18) = puVar1[2];
  func_0x0001073a576c(unaff_x19 + 0x20,puVar1 + 3);
  return;
}



/* Entry: 1073a5874; end: 1073a59cf;  */

void FUN_1073a5874(long param_1,long param_2)

{
  code *pcVar1;
  undefined ***pppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
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
  
  func_0x00010726fc00(&ppuStack_88,param_1 + 8);
  if (ppuStack_88 != (undefined **)0x0) {
    func_0x00010726fc3c();
    uStack_90 = uStack_80;
    ppuStack_98 = ppuStack_88;
    if (*ppuStack_88 != (undefined *)0xffffffffffffffff) {
      ppuStack_88 = (undefined **)0x0;
      uStack_80 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x0001072508cc(&uStack_40);
      goto LAB_1073a58e8;
    }
    func_0x00010726fc88();
  }
  func_0x0001073a5ae0();
  ppuStack_98 = (undefined **)0x0;
  uStack_90 = 0;
  ppuStack_88 = (undefined **)0x0;
  uStack_80 = 0;
LAB_1073a58e8:
  func_0x0001073a5ae0();
  func_0x00010726fc00(&ppuStack_88,param_1 + 8);
  if (ppuStack_88 == (undefined **)0x0) {
    func_0x0001073a5ae0();
  }
  else {
    puVar7 = *ppuStack_88;
    func_0x0001073a5ae0();
    if (puVar7 != (undefined *)0xffffffffffffffff) {
      ppuStack_88 = &PTR_DAT_110d0f2a8;
      uStack_80 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_50 = 0;
      uStack_58 = 0;
      uStack_48 = 0;
      if ((((*(long *)(param_2 + 0x10) == 0) && ((*(byte *)(param_2 + 0x19) & 1) == 0)) &&
          ((*(byte *)(param_2 + 0x18) & 1) == 0)) &&
         (puVar4 = *(undefined8 **)(param_2 + 0x20), puVar4 != (undefined8 *)0x0)) {
        lVar6 = (long)*(char *)((long)puVar4 + 0x17);
        puVar5 = puVar4;
        if (lVar6 < 0) {
          puVar5 = (undefined8 *)*puVar4;
          lVar6 = puVar4[1];
        }
        pppuVar2 = &ppuStack_88;
        func_0x0001001a3c94(pppuVar2,puVar5,lVar6);
        if ((int)pppuVar2 != 0) {
          plVar3 = *(long **)(param_1 + 0x38);
          if (plVar3 == (long *)0x0) {
            func_0x000104bfeb48();
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1073a59b8);
            (*pcVar1)();
          }
          (**(code **)(*plVar3 + 0x30))(plVar3,&ppuStack_88);
        }
      }
      func_0x00010b58a3a4(&ppuStack_88);
    }
  }
  func_0x000107270b00(&ppuStack_98);
  return;
}



/* Entry: 1073a59d0; end: 1073a5a07;  */

long FUN_1073a59d0(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109aa410);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1073a5a08; end: 1073a5a13;  */

undefined ** FUN_1073a5a08(void)

{
  return &PTR_DAT_1109aa410;
}



/* Entry: 1073a5a14; end: 1073a5a77;  */

void FUN_1073a5a14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 extraout_x8;
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar2;
  
  func_0x0001073a5af8();
  *param_1 = extraout_x8;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001073a5a78();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_2[2];
  func_0x0001073a576c(unaff_x19 + 0x20,param_2 + 3);
  return;
}



/* Entry: 1073a5a78; end: 1073a5b37;  */

void FUN_1073a5a78(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1073a5b38; end: 1073a5c8f;  */

undefined8 * FUN_1073a5b38(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_140;
  undefined1 auStack_138 [24];
  undefined1 uStack_120;
  undefined1 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 uStack_c8;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined1 uStack_70;
  undefined1 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_140 = 0x800000007;
  func_0x00010002b838(auStack_138,&UNK_10f40d5b2);
  uStack_120 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0x900000008;
  func_0x00010002b838(auStack_e0,&UNK_10f40d61b);
  uStack_c8 = 0;
  uStack_98 = 0;
  uStack_90 = 0xa00000009;
  func_0x00010002b838(auStack_88,&UNK_10f40d6fe);
  uStack_70 = 0;
  uStack_40 = 0;
  uVar3 = 10;
  func_0x00010054ae4c(param_1,10,&UNK_10f40bccf,&uStack_140,3);
  lVar4 = 0xb0;
  do {
    puVar1 = (undefined8 *)(auStack_138 + lVar4 + -8);
    func_0x00010054b180();
    lVar4 = lVar4 + -0x58;
  } while (lVar4 != -0x58);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar2 = &uStack_90;
  lVar4 = -0x108;
  do {
    func_0x00010054b180(puVar2);
    puVar2 = puVar2 + -0xb;
    lVar4 = lVar4 + 0x58;
  } while (lVar4 != 0);
  __Unwind_Resume();
  *puVar1 = &PTR_FUN_1109aa480;
  puVar1[1] = uVar3;
  FUN_1073a5cc8(puVar1 + 2,uVar3);
  return puVar1;
}



/* Entry: 1073a5c90; end: 1073a5cc7;  */

undefined8 * FUN_1073a5c90(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_1109aa480;
  param_1[1] = param_2;
  FUN_1073a5cc8(param_1 + 2,param_2);
  return param_1;
}



/* Entry: 1073a5cc8; end: 1073a5d1b;  */

void FUN_1073a5cc8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xff8;
  __Znwm();
  FUN_1073a62c8();
  *param_1 = uVar1;
  return;
}



/* Entry: 1073a5d1c; end: 1073a5e4f;  */

undefined8 * FUN_1073a5d1c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1109aa480;
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    func_0x00010054c360(lVar1 + 0xf70);
    func_0x00010054c360(lVar1 + 0xee8);
    func_0x00010054c360(lVar1 + 0xe60);
    func_0x00010054c360(lVar1 + 0xdd8);
    func_0x00010054c360(lVar1 + 0xd50);
    func_0x00010054c360(lVar1 + 0xcc8);
    func_0x00010054c360(lVar1 + 0xc40);
    func_0x00010054c360(lVar1 + 3000);
    func_0x00010054c360(lVar1 + 0xb30);
    func_0x00010054c360(lVar1 + 0xaa8);
    func_0x00010054c360(lVar1 + 0xa20);
    func_0x00010054c360(lVar1 + 0x998);
    func_0x00010054c360(lVar1 + 0x910);
    func_0x00010054c360(lVar1 + 0x888);
    func_0x00010054c360(lVar1 + 0x800);
    func_0x00010054c360(lVar1 + 0x778);
    func_0x00010054c360(lVar1 + 0x6f0);
    func_0x00010054c360(lVar1 + 0x668);
    func_0x00010054c360(lVar1 + 0x5e0);
    func_0x00010054c360(lVar1 + 0x558);
    func_0x00010054c360(lVar1 + 0x4d0);
    func_0x00010054c360(lVar1 + 0x448);
    func_0x00010054c360(lVar1 + 0x3c0);
    FUN_1073a5e68(lVar1 + 0x348);
    func_0x0001073a5ee8(lVar1 + 0x2d0);
    func_0x0001073a5f68(lVar1 + 600);
    func_0x0001073a5fe8(lVar1 + 0x1e0);
    func_0x0001073a6068(lVar1 + 0x168);
    func_0x0001073a60e8(lVar1 + 0xf0);
    func_0x0001073a6168(lVar1 + 0x78);
    func_0x0001073a61e8(lVar1);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073a5e50; end: 1073a5e53;  */

undefined8 * FUN_1073a5e50(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1109aa480;
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    func_0x00010054c360(lVar1 + 0xf70);
    func_0x00010054c360(lVar1 + 0xee8);
    func_0x00010054c360(lVar1 + 0xe60);
    func_0x00010054c360(lVar1 + 0xdd8);
    func_0x00010054c360(lVar1 + 0xd50);
    func_0x00010054c360(lVar1 + 0xcc8);
    func_0x00010054c360(lVar1 + 0xc40);
    func_0x00010054c360(lVar1 + 3000);
    func_0x00010054c360(lVar1 + 0xb30);
    func_0x00010054c360(lVar1 + 0xaa8);
    func_0x00010054c360(lVar1 + 0xa20);
    func_0x00010054c360(lVar1 + 0x998);
    func_0x00010054c360(lVar1 + 0x910);
    func_0x00010054c360(lVar1 + 0x888);
    func_0x00010054c360(lVar1 + 0x800);
    func_0x00010054c360(lVar1 + 0x778);
    func_0x00010054c360(lVar1 + 0x6f0);
    func_0x00010054c360(lVar1 + 0x668);
    func_0x00010054c360(lVar1 + 0x5e0);
    func_0x00010054c360(lVar1 + 0x558);
    func_0x00010054c360(lVar1 + 0x4d0);
    func_0x00010054c360(lVar1 + 0x448);
    func_0x00010054c360(lVar1 + 0x3c0);
    FUN_1073a5e68(lVar1 + 0x348);
    func_0x0001073a5ee8(lVar1 + 0x2d0);
    func_0x0001073a5f68(lVar1 + 600);
    func_0x0001073a5fe8(lVar1 + 0x1e0);
    func_0x0001073a6068(lVar1 + 0x168);
    func_0x0001073a60e8(lVar1 + 0xf0);
    func_0x0001073a6168(lVar1 + 0x78);
    func_0x0001073a61e8(lVar1);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073a5e54; end: 1073a5e67;  */

void FUN_1073a5e54(void)

{
  FUN_1073a5d1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a5e68; end: 1073a5e8b;  */

void FUN_1073a5e68(void)

{
  func_0x0001073a62bc();
  FUN_1073a5e8c();
  func_0x0001073a62b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)();
  return;
}



/* Entry: 1073a5e8c; end: 1073a5ecb;  */

void FUN_1073a5e8c(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1073a6268();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_1073a5ecc();
    }
  }
  return;
}



/* Entry: 1073a5ecc; end: 1073a5f0b;  */

void FUN_1073a5ecc(void)

{
  func_0x0001073a6288();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a5f0c; end: 1073a5f4b;  */

void FUN_1073a5f0c(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1073a6268();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_1073a5f4c();
    }
  }
  return;
}



/* Entry: 1073a5f4c; end: 1073a5f8b;  */

void FUN_1073a5f4c(void)

{
  func_0x0001073a6288();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a5f8c; end: 1073a5fcb;  */

void FUN_1073a5f8c(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1073a6268();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_1073a5fcc();
    }
  }
  return;
}



/* Entry: 1073a5fcc; end: 1073a600b;  */

void FUN_1073a5fcc(void)

{
  func_0x0001073a6288();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a600c; end: 1073a604b;  */

void FUN_1073a600c(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1073a6268();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_1073a604c();
    }
  }
  return;
}



/* Entry: 1073a604c; end: 1073a608b;  */

void FUN_1073a604c(void)

{
  func_0x0001073a6288();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a608c; end: 1073a60cb;  */

void FUN_1073a608c(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1073a6268();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_1073a60cc();
    }
  }
  return;
}



/* Entry: 1073a60cc; end: 1073a610b;  */

void FUN_1073a60cc(void)

{
  func_0x0001073a6288();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a610c; end: 1073a614b;  */

void FUN_1073a610c(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1073a6268();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_1073a614c();
    }
  }
  return;
}



/* Entry: 1073a614c; end: 1073a618b;  */

void FUN_1073a614c(void)

{
  func_0x0001073a6288();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a618c; end: 1073a61cb;  */

void FUN_1073a618c(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1073a6268();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_1073a61cc();
    }
  }
  return;
}



/* Entry: 1073a61cc; end: 1073a620b;  */

void FUN_1073a61cc(void)

{
  func_0x0001073a6288();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a620c; end: 1073a624b;  */

void FUN_1073a620c(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1073a6268();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_1073a624c();
    }
  }
  return;
}



/* Entry: 1073a624c; end: 1073a6267;  */

void FUN_1073a624c(void)

{
  func_0x0001073a6288();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a6268; end: 1073a62c7;  */

void FUN_1073a6268(long *param_1)

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



/* Entry: 1073a62c8; end: 1073a690f;  */

undefined8 * FUN_1073a62c8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = 0x32aaaba7;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  func_0x0001073a8794(param_1 + 9);
  param_1[0xc] = param_1 + 0xc;
  param_1[0xd] = param_1 + 0xc;
  param_1[0xf] = 0x32aaaba7;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = param_2;
  func_0x0001073a8794(param_1 + 0x18);
  uVar3 = 0;
  uVar4 = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1b] = param_1 + 0x1b;
  param_1[0x1c] = param_1 + 0x1b;
  uVar2 = 0x32aaaba7;
  uVar1 = 0;
  param_1[0x1e] = 0x32aaaba7;
  param_1[0x1d] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = param_2;
  func_0x0001073a8794(param_1 + 0x27);
  param_1[0x2a] = param_1 + 0x2a;
  param_1[0x2b] = param_1 + 0x2a;
  func_0x0001073a8a48(&UNK_10f40d8fc);
  param_1[0x2d] = uVar4;
  param_1[0x2c] = uVar3;
  param_1[0x2f] = uVar2;
  param_1[0x2e] = uVar1;
  param_1[0x31] = uVar2;
  param_1[0x30] = uVar1;
  param_1[0x33] = uVar2;
  param_1[0x32] = uVar1;
  param_1[0x34] = 0;
  param_1[0x35] = param_2;
  func_0x0001073a8794(param_1 + 0x36);
  param_1[0x39] = param_1 + 0x39;
  param_1[0x3a] = param_1 + 0x39;
  param_1[0x3c] = 0x32aaaba7;
  param_1[0x3b] = 0;
  uVar1 = 0;
  uVar2 = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = param_2;
  func_0x0001073a8794(param_1 + 0x45);
  param_1[0x48] = param_1 + 0x48;
  param_1[0x49] = param_1 + 0x48;
  func_0x0001073a8a48(&UNK_10f40d9ed);
  param_1[0x4b] = uVar4;
  param_1[0x4a] = uVar3;
  param_1[0x4d] = uVar2;
  param_1[0x4c] = uVar1;
  param_1[0x4f] = uVar2;
  param_1[0x4e] = uVar1;
  param_1[0x51] = uVar2;
  param_1[0x50] = uVar1;
  param_1[0x52] = 0;
  param_1[0x53] = param_2;
  func_0x0001073a8794(param_1 + 0x54);
  param_1[0x57] = param_1 + 0x57;
  param_1[0x58] = param_1 + 0x57;
  param_1[0x5a] = 0x32aaaba7;
  param_1[0x59] = 0;
  uVar1 = 0;
  uVar2 = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = param_2;
  func_0x0001073a8794(param_1 + 99);
  param_1[0x66] = param_1 + 0x66;
  param_1[0x67] = param_1 + 0x66;
  func_0x0001073a8a48(&UNK_10f40deb7);
  param_1[0x69] = uVar4;
  param_1[0x68] = uVar3;
  param_1[0x6b] = uVar2;
  param_1[0x6a] = uVar1;
  param_1[0x6d] = uVar2;
  param_1[0x6c] = uVar1;
  param_1[0x6f] = uVar2;
  param_1[0x6e] = uVar1;
  param_1[0x70] = 0;
  param_1[0x71] = param_2;
  func_0x0001073a8794(param_1 + 0x72);
  param_1[0x75] = param_1 + 0x75;
  param_1[0x76] = param_1 + 0x75;
  param_1[0x77] = 0;
  func_0x00010054bfa4(param_1 + 0x78,param_2,&UNK_10f40df30,0x37);
  func_0x00010054bfa4(param_1 + 0x89,param_2,&UNK_10f40df68,0x5e);
  func_0x00010054bfa4(param_1 + 0x9a,param_2,&UNK_10f40dfc7,0x9c);
  func_0x00010054bfa4(param_1 + 0xab,param_2,&UNK_10f40e064,0xa4);
  func_0x00010054bfa4(param_1 + 0xbc,param_2,&UNK_10f40e109,0x1c4);
  func_0x00010054bfa4(param_1 + 0xcd,param_2,&UNK_10f40e2ce,0x5f);
  func_0x0001073a8a8c(param_1 + 0xde);
  func_0x00010054bfa4(param_1 + 0xef,param_2,&UNK_10f40e35a,0x70);
  func_0x00010054bfa4(param_1 + 0x100,param_2,&UNK_10f40e3cb,0x91);
  func_0x00010054bfa4(param_1 + 0x111,param_2,&UNK_10f40e45d,0xca);
  func_0x00010054bfa4(param_1 + 0x122,param_2,&UNK_10f40e528,0xb7);
  func_0x00010054bfa4(param_1 + 0x133,param_2,&UNK_10f40e5e0,0x1c6);
  func_0x0001073a8a8c(param_1 + 0x144);
  func_0x0001073a8a98(param_1 + 0x155);
  func_0x00010054bfa4(param_1 + 0x166,param_2,&UNK_10f40e7fb,0x60);
  func_0x00010054bfa4(param_1 + 0x177,param_2,&UNK_10f40e85c,0x2a);
  func_0x0001073a8a98(param_1 + 0x188);
  func_0x00010054bfa4(param_1 + 0x199,param_2,&UNK_10f40e8af,0x3f);
  func_0x00010054bfa4(param_1 + 0x1aa,param_2,&UNK_10f40e8ef,0x2d);
  func_0x00010054bfa4(param_1 + 0x1bb,param_2,&UNK_10f40e91d,0xe7);
  func_0x00010054bfa4(param_1 + 0x1cc,param_2,&UNK_10f40ea05,0x4f);
  func_0x00010054bfa4(param_1 + 0x1dd,param_2,&UNK_10f40ea55,0x43);
  func_0x00010054bfa4(param_1 + 0x1ee,param_2,&UNK_10f40ea99,0x45);
  return param_1;
}



/* Entry: 1073a6910; end: 1073a6933;  */

void FUN_1073a6910(void)

{
  func_0x0001073a8afc();
  FUN_1073a72b4();
  func_0x0001073a8af0();
  func_0x0001073a8a64();
  func_0x0001005ecd38();
  func_0x0001073a8a58();
  func_0x0001073a73e8();
  return;
}



/* Entry: 1073a6934; end: 1073a695f;  */

void FUN_1073a6934(long param_1)

{
  func_0x0001073a8adc(param_1 + 0xf0);
  FUN_1073a6960();
  return;
}



/* Entry: 1073a6960; end: 1073a69a3;  */

void FUN_1073a6960(void)

{
  undefined8 extraout_x8;
  
  func_0x0001073a88c8();
  FUN_1073a75dc();
  func_0x0001073a889c(extraout_x8);
  func_0x0001073a8a64();
  func_0x000105653eec();
  func_0x0001073a8a58();
  func_0x0001073a7710();
  return;
}



/* Entry: 1073a69a4; end: 1073a69c7;  */

void FUN_1073a69a4(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1073a69c8(param_1 + 0x1e0,&uStack_18);
  return;
}



/* Entry: 1073a69c8; end: 1073a6a0f;  */

void FUN_1073a69c8(void)

{
  func_0x0001073a8afc();
  FUN_1073a7838();
  func_0x0001073a8af0();
  func_0x0001073a8a64();
  func_0x0001005edcc0();
  func_0x0001073a8a58();
  func_0x0001073a796c();
  return;
}



/* Entry: 1073a6a10; end: 1073a6a33;  */

void FUN_1073a6a10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_1073a6a34(param_1 + 0x2d0,&uStack_20);
  return;
}



/* Entry: 1073a6a34; end: 1073a6a57;  */

void FUN_1073a6a34(void)

{
  func_0x0001073a8afc();
  FUN_1073a7bfc();
  func_0x0001073a8af0();
  func_0x0001073a8a64();
  FUN_1073a7d30();
  func_0x0001073a8a58();
  FUN_1073a7dd0();
  return;
}



/* Entry: 1073a6a58; end: 1073a6a7b;  */

void FUN_1073a6a58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_1073a6a7c(param_1 + 0x348,&uStack_20);
  return;
}



/* Entry: 1073a6a7c; end: 1073a6a9f;  */

void FUN_1073a6a7c(void)

{
  func_0x0001073a8afc();
  FUN_1073a7e28();
  func_0x0001073a8af0();
  func_0x0001073a8a64();
  FUN_1073a7d30();
  func_0x0001073a8a58();
  func_0x0001073a7f5c();
  return;
}



/* Entry: 1073a6aa0; end: 1073a6ac3;  */

void FUN_1073a6aa0(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1073a6ac4(param_1 + 0x3c0,&uStack_18);
  return;
}



/* Entry: 1073a6ac4; end: 1073a6b0f;  */

void FUN_1073a6ac4(void)

{
  func_0x0001073a8870();
  func_0x0001073a86e0();
  func_0x0001073a8a38();
  FUN_1073a7fb4();
  func_0x0001073a86d8();
  func_0x0001073a86c0();
  func_0x0001073a86d0();
  return;
}



/* Entry: 1073a6b10; end: 1073a6b47;  */

void FUN_1073a6b10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_30 = param_5;
  uStack_28 = param_3;
  uStack_20 = param_4;
  uStack_18 = param_2;
  FUN_1073a6b48(param_1 + 0x448,&uStack_18,&uStack_28,&uStack_30,param_6);
  return;
}



/* Entry: 1073a6b48; end: 1073a6bab;  */

void FUN_1073a6b48(void)

{
  func_0x0001073a88c8();
  func_0x0001073a8924();
  func_0x0001073a86e0();
  func_0x0001073a889c();
  FUN_1073a7fdc();
  func_0x0001073a86d8();
  func_0x0001073a86c0();
  func_0x0001073a86d0();
  return;
}



/* Entry: 1073a6bac; end: 1073a6bff;  */

void FUN_1073a6bac(long param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14)

{
  undefined8 uStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_40 = param_6;
  uStack_31 = param_2;
  uStack_30 = param_7;
  uStack_28 = param_8;
  uStack_20 = param_4;
  uStack_18 = param_5;
  FUN_1073a6c00(param_1 + 0x4d0,&uStack_31,param_3,&uStack_20,&uStack_40,&uStack_30,&param_9,
                param_11,&param_12,param_14);
  return;
}



/* Entry: 1073a6c00; end: 1073a6c5f;  */

void FUN_1073a6c00(void)

{
  func_0x0001073a85e8();
  func_0x0001073a86e0();
  func_0x0001073a85c4();
  FUN_1073a8028();
  func_0x0001073a86d8();
  func_0x0001073a86c0();
  func_0x0001073a89e0();
  return;
}



/* Entry: 1073a6c60; end: 1073a6c83;  */

void FUN_1073a6c60(long param_1)

{
  func_0x0001073a87e8();
  func_0x0001073a8884(param_1 + 0x558);
  return;
}



/* Entry: 1073a6c84; end: 1073a6ceb;  */

void FUN_1073a6c84(void)

{
  func_0x0001073a85e8();
  func_0x0001073a86e0();
  func_0x0001073a85c4();
  FUN_1073a810c();
  func_0x0001073a86d8();
  func_0x0001073a86c0();
  func_0x0001073a89e0();
  return;
}


