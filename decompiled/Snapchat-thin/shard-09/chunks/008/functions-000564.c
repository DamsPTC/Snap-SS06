/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10726ce70; end: 10726ce93;  */

void FUN_10726ce70(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_10726af18(lVar1);
  *(undefined4 *)(lVar1 + 0x60) = 0;
  return;
}



/* Entry: 10726ce94; end: 10726ce9b;  */

void FUN_10726ce94(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  if (*(int *)(*param_1 + 0x60) == 1) {
    *param_2 = *param_3;
    return;
  }
  func_0x000107274a44();
  FUN_10726ced0();
  return;
}



/* Entry: 10726ce9c; end: 10726cecf;  */

void FUN_10726ce9c(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  if (*(int *)(param_1 + 0x60) == 1) {
    *param_2 = *param_3;
    return;
  }
  func_0x000107274a44();
  FUN_10726ced0();
  return;
}



/* Entry: 10726ced0; end: 10726cedb;  */

void FUN_10726ced0(undefined8 *param_1)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  
  func_0x0001072745b4(*param_1,param_1[1]);
  *unaff_x20 = *unaff_x19;
  func_0x00010727507c(1);
  return;
}



/* Entry: 10726cedc; end: 10726cf03;  */

void FUN_10726cedc(void)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  
  func_0x0001072745b4();
  *unaff_x20 = *unaff_x19;
  func_0x00010727507c(1);
  return;
}



/* Entry: 10726cf04; end: 10726cf0b;  */

void FUN_10726cf04(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*(int *)(*param_1 + 0x60) == 2) {
    *param_2 = *param_3;
    return;
  }
  func_0x000107274a44();
  FUN_10726cf40();
  return;
}



/* Entry: 10726cf0c; end: 10726cf3f;  */

void FUN_10726cf0c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*(int *)(param_1 + 0x60) == 2) {
    *param_2 = *param_3;
    return;
  }
  func_0x000107274a44();
  FUN_10726cf40();
  return;
}



/* Entry: 10726cf40; end: 10726cf4b;  */

void FUN_10726cf40(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001072745b4(*param_1,param_1[1]);
  *unaff_x20 = *unaff_x19;
  func_0x00010727507c(2);
  return;
}



/* Entry: 10726cf4c; end: 10726cf73;  */

void FUN_10726cf4c(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001072745b4();
  *unaff_x20 = *unaff_x19;
  func_0x00010727507c(2);
  return;
}



/* Entry: 10726cf74; end: 10726cf7b;  */

void FUN_10726cf74(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x60) == 3) {
    func_0x000104c342bc(param_2,param_3);
    func_0x000104c2f698();
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
    return;
  }
  func_0x000107274a44();
  FUN_10726cfb0();
  return;
}



/* Entry: 10726cf7c; end: 10726cfaf;  */

void FUN_10726cf7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x60) == 3) {
    func_0x000104c342bc(param_2,param_3);
    func_0x000104c2f698();
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
    return;
  }
  func_0x000107274a44();
  FUN_10726cfb0();
  return;
}



/* Entry: 10726cfb0; end: 10726cfbb;  */

void FUN_10726cfb0(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001072745b4(*param_1,param_1[1]);
  func_0x000107274d28();
  func_0x000104c318bc();
  *(undefined4 *)(unaff_x20 + 0x60) = 3;
  return;
}



/* Entry: 10726cfbc; end: 10726cfe3;  */

void FUN_10726cfbc(void)

{
  long unaff_x20;
  
  func_0x0001072745b4();
  func_0x000107274d28();
  func_0x000104c318bc();
  *(undefined4 *)(unaff_x20 + 0x60) = 3;
  return;
}



/* Entry: 10726cfe4; end: 10726cfeb;  */

void FUN_10726cfe4(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(*param_1 + 0x60) == 4) {
    uVar1 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar1;
    return;
  }
  func_0x000107274a44();
  FUN_10726d020();
  return;
}



/* Entry: 10726cfec; end: 10726d01f;  */

void FUN_10726cfec(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x60) == 4) {
    uVar1 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar1;
    return;
  }
  func_0x000107274a44();
  FUN_10726d020();
  return;
}



/* Entry: 10726d020; end: 10726d02b;  */

void FUN_10726d020(undefined8 *param_1)

{
  func_0x0001072745b4(*param_1,param_1[1]);
  func_0x00010727500c();
  func_0x00010727507c(4);
  return;
}



/* Entry: 10726d02c; end: 10726d04f;  */

void FUN_10726d02c(void)

{
  func_0x0001072745b4();
  func_0x00010727500c();
  func_0x00010727507c(4);
  return;
}



/* Entry: 10726d050; end: 10726d057;  */

void FUN_10726d050(long *param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(*param_1 + 0x60) == 5) {
    func_0x0001072744c8(param_2,param_3);
    FUN_10726af9c();
    return;
  }
  func_0x000107274a44();
  FUN_10726d08c();
  return;
}



/* Entry: 10726d058; end: 10726d08b;  */

void FUN_10726d058(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x60) == 5) {
    func_0x0001072744c8(param_2,param_3);
    FUN_10726af9c();
    return;
  }
  func_0x000107274a44();
  FUN_10726d08c();
  return;
}



/* Entry: 10726d08c; end: 10726d097;  */

void FUN_10726d08c(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001072745b4(*param_1,param_1[1]);
  func_0x00010727500c();
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  func_0x00010727507c(5);
  return;
}



/* Entry: 10726d098; end: 10726d0e3;  */

void FUN_10726d098(void)

{
  func_0x0001072744c8();
  FUN_10726af9c();
  return;
}



/* Entry: 10726d0e4; end: 10726d0eb;  */

void FUN_10726d0e4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(*param_1 + 0x60) == 6) {
    func_0x0001072747d8(param_2,param_3);
    func_0x00010726d14c();
    func_0x000107274600();
    return;
  }
  func_0x000107274a44();
  FUN_10726d120();
  return;
}



/* Entry: 10726d0ec; end: 10726d11f;  */

void FUN_10726d0ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x60) == 6) {
    func_0x0001072747d8(param_2,param_3);
    func_0x00010726d14c();
    func_0x000107274600();
    return;
  }
  func_0x000107274a44();
  FUN_10726d120();
  return;
}



/* Entry: 10726d120; end: 10726d12b;  */

void FUN_10726d120(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  func_0x0001072745b4(*param_1,param_1[1]);
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  func_0x000107274600();
  func_0x00010727507c(6);
  return;
}



/* Entry: 10726d12c; end: 10726d1a7;  */

void FUN_10726d12c(void)

{
  func_0x0001072747d8();
  func_0x00010726d14c();
  func_0x000107274600();
  return;
}



/* Entry: 10726d1a8; end: 10726d1af;  */

void FUN_10726d1a8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x60) == 7) {
    func_0x0001072747d8(param_2,param_3);
    func_0x000104c2f1f0();
    *(undefined1 *)(unaff_x20 + 0x38) = *(undefined1 *)(unaff_x19 + 0x38);
    func_0x0001002a8208(unaff_x20 + 0x40,unaff_x19 + 0x40);
    return;
  }
  func_0x000107274a44();
  FUN_10726d218();
  return;
}



/* Entry: 10726d1b0; end: 10726d1e3;  */

void FUN_10726d1b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x60) == 7) {
    func_0x0001072747d8(param_2,param_3);
    func_0x000104c2f1f0();
    *(undefined1 *)(unaff_x20 + 0x38) = *(undefined1 *)(unaff_x19 + 0x38);
    func_0x0001002a8208(unaff_x20 + 0x40,unaff_x19 + 0x40);
    return;
  }
  func_0x000107274a44();
  FUN_10726d218();
  return;
}



/* Entry: 10726d1e4; end: 10726d217;  */

void FUN_10726d1e4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747d8();
  func_0x000104c2f1f0();
  *(undefined1 *)(unaff_x20 + 0x38) = *(undefined1 *)(unaff_x19 + 0x38);
  func_0x0001002a8208(unaff_x20 + 0x40,unaff_x19 + 0x40);
  return;
}



/* Entry: 10726d218; end: 10726d223;  */

void FUN_10726d218(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001072745b4(*param_1,param_1[1]);
  func_0x000107274d28();
  FUN_10726ccd4();
  *(undefined4 *)(unaff_x20 + 0x60) = 7;
  return;
}



/* Entry: 10726d224; end: 10726d24b;  */

void FUN_10726d224(void)

{
  long unaff_x20;
  
  func_0x0001072745b4();
  func_0x000107274d28();
  FUN_10726ccd4();
  *(undefined4 *)(unaff_x20 + 0x60) = 7;
  return;
}



/* Entry: 10726d24c; end: 10726d253;  */

void FUN_10726d24c(long *param_1,long param_2,long param_3)

{
  undefined1 auStack_20 [16];
  
  if (*(int *)(*param_1 + 0x60) == 8) {
    if (param_2 != param_3) {
      func_0x000107275894();
      FUN_10726d2c4();
      FUN_10726b20c(auStack_20);
    }
    return;
  }
  func_0x000107274a44();
  FUN_10726d288();
  return;
}



/* Entry: 10726d254; end: 10726d287;  */

void FUN_10726d254(long param_1,long param_2,long param_3)

{
  undefined1 auStack_20 [16];
  
  if (*(int *)(param_1 + 0x60) == 8) {
    if (param_2 != param_3) {
      func_0x000107275894();
      FUN_10726d2c4();
      FUN_10726b20c(auStack_20);
    }
    return;
  }
  func_0x000107274a44();
  FUN_10726d288();
  return;
}



/* Entry: 10726d288; end: 10726d293;  */

void FUN_10726d288(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001072745b4(*param_1,param_1[1]);
  func_0x00010727500c();
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  func_0x00010727507c(8);
  return;
}



/* Entry: 10726d294; end: 10726d2c3;  */

void FUN_10726d294(long param_1,long param_2)

{
  undefined1 auStack_20 [16];
  
  if (param_1 != param_2) {
    func_0x000107275894();
    FUN_10726d2c4();
    FUN_10726b20c(auStack_20);
  }
  return;
}



/* Entry: 10726d2c4; end: 10726d30f;  */

void FUN_10726d2c4(void)

{
  func_0x0001072744c8();
  FUN_10726b20c();
  return;
}



/* Entry: 10726d310; end: 10726d317;  */

void FUN_10726d310(long *param_1,long param_2,long param_3)

{
  undefined1 auStack_20 [16];
  
  if (*(int *)(*param_1 + 0x60) == 9) {
    if (param_2 != param_3) {
      func_0x000107275894();
      FUN_10726d388();
      func_0x00010726b230(auStack_20);
    }
    return;
  }
  func_0x000107274a44();
  FUN_10726d34c();
  return;
}



/* Entry: 10726d318; end: 10726d34b;  */

void FUN_10726d318(long param_1,long param_2,long param_3)

{
  undefined1 auStack_20 [16];
  
  if (*(int *)(param_1 + 0x60) == 9) {
    if (param_2 != param_3) {
      func_0x000107275894();
      FUN_10726d388();
      func_0x00010726b230(auStack_20);
    }
    return;
  }
  func_0x000107274a44();
  FUN_10726d34c();
  return;
}



/* Entry: 10726d34c; end: 10726d357;  */

void FUN_10726d34c(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001072745b4(*param_1,param_1[1]);
  func_0x00010727500c();
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  func_0x00010727507c(9);
  return;
}



/* Entry: 10726d358; end: 10726d387;  */

void FUN_10726d358(long param_1,long param_2)

{
  undefined1 auStack_20 [16];
  
  if (param_1 != param_2) {
    func_0x000107275894();
    FUN_10726d388();
    func_0x00010726b230(auStack_20);
  }
  return;
}



/* Entry: 10726d388; end: 10726d3d3;  */

void FUN_10726d388(void)

{
  func_0x0001072744c8();
  func_0x00010726b230();
  return;
}



/* Entry: 10726d3d4; end: 10726d47f;  */

void FUN_10726d3d4(undefined8 param_1,long param_2,ulong param_3,undefined1 *param_4)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_b0 [104];
  undefined8 uStack_48;
  
  uVar3 = param_3;
  func_0x0001072747cc();
  func_0x000107274388();
  uStack_48 = extraout_x8;
  FUN_10726c9e8();
  if ((uVar3 & 1) == 0) {
    auStack_b0[0] = *param_4;
    func_0x000107274c90(1);
    puVar2 = auStack_b0;
    FUN_10726af18();
  }
  else {
    puVar2 = (undefined1 *)(unaff_x20[1] + param_2 * 0xa8);
    FUN_10726d480(puVar2,param_3,param_4);
  }
  lVar1 = unaff_x20[1];
  *unaff_x19 = *unaff_x20 + param_2;
  unaff_x19[1] = lVar1 + param_2 * 0xa8;
  *(char *)(unaff_x19 + 2) = (char)uVar3;
  func_0x00010727416c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107274eb4();
  puVar2[0x40] = (char)*unaff_x19;
  *(undefined4 *)(puVar2 + 0xa0) = 1;
  return;
}



/* Entry: 10726d480; end: 10726d4a7;  */

void FUN_10726d480(long param_1)

{
  undefined1 *unaff_x19;
  
  func_0x000107274eb4();
  *(undefined1 *)(param_1 + 0x40) = *unaff_x19;
  *(undefined4 *)(param_1 + 0xa0) = 1;
  return;
}



/* Entry: 10726d4a8; end: 10726d51f;  */

undefined1  [16] FUN_10726d4a8(ulong param_1)

{
  undefined8 uVar1;
  ulong extraout_x8;
  ulong unaff_x22;
  ulong unaff_x28;
  undefined1 auVar2 [16];
  
  func_0x0001072759bc();
  func_0x0001072746bc();
  func_0x000107274648();
  do {
    func_0x000107274aac();
    for (; unaff_x28 != 0; unaff_x28 = unaff_x28 - 1 & unaff_x28) {
      func_0x000107274fac();
      FUN_10726d570();
      if ((param_1 & 1) != 0) {
        uVar1 = 0;
        goto LAB_10726d500;
      }
    }
    func_0x0001072752f4();
  } while ((extraout_x8 & 1) == 0);
  func_0x000107274b34();
  FUN_10726d520();
  uVar1 = 1;
  unaff_x22 = param_1;
LAB_10726d500:
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = unaff_x22;
  return auVar2;
}



/* Entry: 10726d520; end: 10726d56f;  */

void FUN_10726d520(long param_1)

{
  long lVar1;
  long *unaff_x19;
  
  func_0x0001072747cc();
  func_0x000100061de0();
  lVar1 = *unaff_x19;
  if ((*(long *)(lVar1 + -8) == 0) && (*(char *)(lVar1 + param_1) != -2)) {
    FUN_10726d5f4();
    func_0x0001001685d4();
    func_0x000100061de0();
    lVar1 = *unaff_x19;
  }
  func_0x00010727443c(lVar1);
  return;
}



/* Entry: 10726d570; end: 10726d57b;  */

bool FUN_10726d570(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 10726d57c; end: 10726d5f3;  */

void FUN_10726d57c(void)

{
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long lVar1;
  
  func_0x000107274f98();
  FUN_10726d624();
  for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar1)) {
      func_0x00010727575c();
      func_0x0001072749d4();
      func_0x0001072742a4(unaff_w21 & 0x7f);
      func_0x000107275324();
      func_0x00010726d65c();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10726d5f4; end: 10726d623;  */

undefined * FUN_10726d5f4(undefined *param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  undefined *puVar4;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long lVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  if ((8 < uVar3) &&
     (uVar1 = uVar3 * 0x19 + *(long *)(param_1 + 0x18) * -0x20 == 0,
     (ulong)(*(long *)(param_1 + 0x18) * 0x20) <= uVar3 * 0x19)) {
    func_0x000107274388();
    puVar2 = &UNK_110996580;
    func_0x00010ae6c914();
    func_0x00010727416c(extraout_x8);
    if ((bool)uVar1) {
      return param_1;
    }
    ___stack_chk_fail();
    puVar4 = *(undefined **)(puVar2 + 0x30);
    if (puVar4 == (undefined *)0xffffffffffffffff) {
      puVar4 = puVar2;
      func_0x000104c2fcd4();
      func_0x000104c2fcf0(puVar2);
      func_0x0001001030f4(puVar4,puVar4 + (long)puVar2);
      func_0x000104c343b0();
      func_0x000104c2ffc0();
    }
    return puVar4;
  }
  func_0x000107274f98(param_1,uVar3 << 1 | 1);
  FUN_10726d624();
  for (lVar5 = 0; unaff_x23 != lVar5; lVar5 = lVar5 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar5)) {
      func_0x00010727575c();
      func_0x0001072749d4();
      func_0x0001072742a4(unaff_w21 & 0x7f);
      func_0x000107275324();
      func_0x00010726d65c();
    }
  }
  if (unaff_x23 != 0) {
    puVar2 = (undefined *)(unaff_x22 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar2);
    return puVar2;
  }
  return param_1;
}



/* Entry: 10726d624; end: 10726d6d3;  */

void FUN_10726d624(undefined8 param_1)

{
  func_0x000107274f8c();
  func_0x000107274e50();
  func_0x000107274e24();
  func_0x0001000631d0(param_1,0x50);
  return;
}



/* Entry: 10726d6d4; end: 10726d70f;  */

undefined * FUN_10726d6d4(undefined *param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 extraout_x8;
  undefined *puVar2;
  
  func_0x000107274388();
  puVar1 = &UNK_110996580;
  func_0x00010ae6c914();
  func_0x00010727416c(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar2 = *(undefined **)(puVar1 + 0x30);
  if (puVar2 == (undefined *)0xffffffffffffffff) {
    puVar2 = puVar1;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(puVar1);
    func_0x0001001030f4(puVar2,puVar2 + (long)puVar1);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return puVar2;
}



/* Entry: 10726d710; end: 10726d717;  */

long FUN_10726d710(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 10726d718; end: 10726d777;  */

long FUN_10726d718(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x00010726d754();
    lVar2 = uVar1 + 0x70;
  }
  else {
    lVar2 = param_1;
    FUN_10726d778();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x70;
}



/* Entry: 10726d778; end: 10726d803;  */

undefined8 FUN_10726d778(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x0001072747cc();
  FUN_10726d83c();
  func_0x000107275874();
  FUN_10726d8e4(auStack_58);
  FUN_10726d804(lStack_48);
  lStack_48 = lStack_48 + 0x70;
  func_0x000107274c54();
  FUN_10726d894();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010726da98(auStack_58);
  return uVar1;
}



/* Entry: 10726d804; end: 10726d83b;  */

void FUN_10726d804(long param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x0001072747d8();
  FUN_10726928c();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  FUN_1072692b0(param_1 + 0x30,unaff_x19 + 0x30);
  return;
}



/* Entry: 10726d83c; end: 10726d893;  */

long * FUN_10726d83c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x24924924924924a) {
    uVar1 = (param_1[2] - *param_1) / 0x70;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x124924924924923 < uVar1) {
      plVar2 = (long *)0x249249249249249;
    }
    return plVar2;
  }
  FUN_10726d8d8();
  func_0x0001072747d8();
  plVar2 = param_1 + 2;
  FUN_10726d97c(plVar2,*param_1,param_1[1],param_2[1] + ((param_1[1] - *param_1) / -0x70) * 0x70);
  func_0x000107274a5c();
  return plVar2;
}



/* Entry: 10726d894; end: 10726d8d7;  */

void FUN_10726d894(long *param_1,long param_2)

{
  func_0x0001072747d8();
  FUN_10726d97c(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x70) * 0x70);
  func_0x000107274a5c();
  return;
}



/* Entry: 10726d8d8; end: 10726d8e3;  */

void FUN_10726d8d8(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x00010727455c();
  func_0x00010014ae40();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010726d92c();
  }
  lVar1 = param_4 + unaff_x20 * 0x70;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x70;
  return;
}



/* Entry: 10726d8e4; end: 10726d94b;  */

void FUN_10726d8e4(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x00010014ae40();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010726d92c();
  }
  lVar1 = param_4 + unaff_x20 * 0x70;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x70;
  return;
}



/* Entry: 10726d94c; end: 10726d97b;  */

void FUN_10726d94c(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong unaff_x19;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x24924924924924a) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x70);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107274670();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (; lStack_48 = param_4, param_2 != unaff_x19; param_2 = param_2 + 0x70) {
    FUN_10726d804(param_4,param_2);
    param_4 = lStack_48 + 0x70;
  }
  func_0x000107274b68();
  func_0x000107275250();
  FUN_10726da00();
  FUN_10726da30(&uStack_70);
  return;
}



/* Entry: 10726d97c; end: 10726d9ff;  */

void FUN_10726d97c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  long lStack_40;
  long lStack_38;
  
  func_0x000107274670();
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != unaff_x19; param_2 = param_2 + 0x70) {
    FUN_10726d804(param_4,param_2);
    param_4 = lStack_38 + 0x70;
  }
  func_0x000107274b68();
  func_0x000107275250();
  FUN_10726da00();
  FUN_10726da30(&uStack_60);
  return;
}



/* Entry: 10726da00; end: 10726da2f;  */

void FUN_10726da00(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x70) {
    FUN_107269394();
  }
  return;
}



/* Entry: 10726da30; end: 10726da5b;  */

void FUN_10726da30(void)

{
  uint extraout_w8;
  
  func_0x0001072752d8();
  if ((extraout_w8 & 1) == 0) {
    FUN_10726da5c();
  }
  return;
}



/* Entry: 10726da5c; end: 10726da6b;  */

void FUN_10726da5c(long param_1)

{
  long unaff_x19;
  
  func_0x000107274bfc();
  func_0x000107275458();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x70;
    FUN_107269394();
  }
  return;
}



/* Entry: 10726da6c; end: 10726dac3;  */

void FUN_10726da6c(long param_1)

{
  long unaff_x19;
  
  func_0x000107275458();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x70;
    FUN_107269394();
  }
  return;
}



/* Entry: 10726dac4; end: 10726dacb;  */

void FUN_10726dac4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747d8(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x70;
    FUN_107269394();
  }
  return;
}



/* Entry: 10726dacc; end: 10726daff;  */

void FUN_10726dacc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747d8();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x70;
    FUN_107269394();
  }
  return;
}



/* Entry: 10726db00; end: 10726db4b;  */

void FUN_10726db00(void)

{
  func_0x00010726db18();
  return;
}



/* Entry: 10726db4c; end: 10726dc97;  */

undefined1  [16] FUN_10726db4c(ulong param_1)

{
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar3;
  long extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong uVar4;
  ulong extraout_x10;
  ulong unaff_x20;
  long *unaff_x21;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined1 auVar5 [16];
  
  func_0x000107275128();
  func_0x00010727471c();
  func_0x000100102e7c();
  func_0x0001072754b8();
  if (unaff_x24 != 0) {
    func_0x0001072757f4();
    if ((bool)in_ZR) {
      unaff_x25 = unaff_x26 & unaff_x20;
    }
    else {
      func_0x000107275464();
      if ((bool)in_CY) {
        func_0x000107274d10();
      }
    }
    func_0x000107275978();
    if (unaff_x21 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*unaff_x21;
          if (unaff_x21 == (long *)0x0) goto LAB_10726dbd8;
          func_0x000107274fd0();
          if (!(bool)in_ZR) break;
          func_0x0001072755dc();
          if ((param_1 & 1) != 0) {
            uVar2 = 0;
            goto LAB_10726dc80;
          }
        }
        if ((unaff_x24 & unaff_x26) == 0) {
          uVar4 = extraout_x8 & unaff_x26;
        }
        else {
          uVar4 = extraout_x8;
          if (unaff_x24 <= extraout_x8) {
            func_0x0001072750f8();
            uVar4 = extraout_x8_00;
          }
        }
        in_NG = (long)(uVar4 - unaff_x25) < 0;
        in_ZR = uVar4 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_10726dbd8:
  func_0x000107274680();
  FUN_10726dc98();
  func_0x00010727423c();
  if ((unaff_x24 == 0) || (func_0x0001072747bc(), (bool)in_NG)) {
    func_0x0001072743fc();
    uVar1 = unaff_x24 == 3;
    func_0x00010727413c();
    func_0x0001001338e4();
    func_0x000107274aec();
    if ((bool)uVar1) {
      in_ZR = 1;
    }
    else {
      in_ZR = unaff_x20 == unaff_x24;
      if (unaff_x24 <= unaff_x20) {
        func_0x000107274d10();
      }
    }
  }
  func_0x0001072752b4();
  if (extraout_x9 == 0) {
    func_0x0001072742c8();
    func_0x0001072757e8();
    if (extraout_x9_00 != 0) {
      func_0x0001072747ac();
      lVar3 = extraout_x8_01;
      if ((bool)in_ZR) {
        uVar4 = extraout_x9_01 & extraout_x10;
      }
      else {
        uVar4 = extraout_x9_01;
        if (unaff_x24 <= extraout_x9_01) {
          func_0x0001072750ec();
          lVar3 = extraout_x8_02;
          uVar4 = extraout_x9_02;
        }
      }
      *(long **)(lVar3 + uVar4 * 8) = unaff_x21;
    }
  }
  else {
    func_0x000107274428();
  }
  func_0x000107274274();
  func_0x000100133b04();
  uVar2 = 1;
LAB_10726dc80:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = unaff_x21;
  return auVar5;
}



/* Entry: 10726dc98; end: 10726dcdb;  */

void FUN_10726dc98(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar1;
  
  func_0x0001072746d4();
  func_0x000107275294();
  *unaff_x21 = param_1;
  unaff_x21[1] = unaff_x22;
  unaff_x21[2] = 1;
  *param_1 = 0;
  param_1[1] = unaff_x20;
  uVar1 = *unaff_x19;
  param_1[3] = unaff_x19[1];
  param_1[2] = uVar1;
  param_1[4] = unaff_x19[2];
  func_0x000107274c78();
  return;
}



/* Entry: 10726dcdc; end: 10726dd07;  */

void FUN_10726dcdc(undefined8 *param_1)

{
  long unaff_x19;
  
  func_0x000107274b5c();
  FUN_10726db00();
  *(undefined8 **)(unaff_x19 + 8) = param_1;
  *(undefined8 *)(unaff_x19 + 8) = *param_1;
  return;
}



/* Entry: 10726dd08; end: 10726dd4f;  */

void FUN_10726dd08(long param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = param_1;
  FUN_10726dd50();
  if ((lVar1 == 1) && (func_0x000107274ee4(), extraout_x8 != 0)) {
    func_0x000107274f70();
    func_0x000107275200();
    func_0x000107275208();
  }
  FUN_10726dd8c(param_1);
  return;
}



/* Entry: 10726dd50; end: 10726dd8b;  */

long FUN_10726dd50(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[1] + 8) + 1;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x18);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar4;
}



/* Entry: 10726dd8c; end: 10726ddaf;  */

void FUN_10726dd8c(long param_1)

{
  func_0x000107274970();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10726ddb0; end: 10726ddf3;  */

void FUN_10726ddb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107274670();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10726de3c(param_2,param_3);
  func_0x000107275250();
  FUN_10726ddf4();
  return;
}



/* Entry: 10726ddf4; end: 10726de3b;  */

void FUN_10726ddf4(void)

{
  long in_x3;
  
  func_0x000107274c2c();
  if (in_x3 != 0) {
    func_0x0001072741f4();
    FUN_10726de5c();
    func_0x0001072743a8();
    FUN_10726de90();
  }
  func_0x0001072745c0();
  func_0x00010726dfe0();
  return;
}



/* Entry: 10726de3c; end: 10726de5b;  */

long FUN_10726de3c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  for (; param_1 != (long *)param_2; param_1 = (long *)*param_1) {
    lVar1 = lVar1 + 1;
  }
  return lVar1;
}



/* Entry: 10726de5c; end: 10726de8f;  */

void FUN_10726de5c(undefined8 param_1)

{
  undefined1 in_CY;
  undefined8 *unaff_x19;
  
  func_0x000107274e9c();
  if ((bool)in_CY) {
    FUN_10726deb8();
    func_0x000107274d4c();
    func_0x000107274cd8();
    func_0x00010726df04();
    unaff_x19[1] = param_1;
  }
  else {
    func_0x000107274c40();
    FUN_10726dec4();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    func_0x0001072750a8(0x38);
  }
  return;
}



/* Entry: 10726de90; end: 10726deb7;  */

void FUN_10726de90(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x000107274d4c();
  func_0x000107274cd8();
  func_0x00010726df04();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10726deb8; end: 10726dec3;  */

void FUN_10726deb8(void)

{
  func_0x00010727455c();
  FUN_10726dee4();
  return;
}



/* Entry: 10726dec4; end: 10726dee3;  */

void FUN_10726dec4(void)

{
  FUN_10726dee4();
  return;
}



/* Entry: 10726dee4; end: 10726df17;  */

void FUN_10726dee4(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  
  func_0x000107274e9c();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  FUN_10726df18();
  return;
}



/* Entry: 10726df18; end: 10726df6f;  */

long FUN_10726df18(void)

{
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lStack_38;
  
  func_0x0001072749e4();
  func_0x000107274180();
  for (; unaff_x21 != (long *)unaff_x20; unaff_x21 = (long *)*unaff_x21) {
    func_0x000104c2fe00(unaff_x19,unaff_x21 + 2);
    unaff_x19 = lStack_38 + 0x38;
    lStack_38 = unaff_x19;
  }
  func_0x00010727461c();
  FUN_10726df70();
  return unaff_x19;
}



/* Entry: 10726df70; end: 10726df9b;  */

void FUN_10726df70(void)

{
  uint extraout_w8;
  
  func_0x0001072752d8();
  if ((extraout_w8 & 1) == 0) {
    FUN_10726df9c();
  }
  return;
}



/* Entry: 10726df9c; end: 10726dfab;  */

void FUN_10726df9c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x000107274bfc();
  while (param_3 != param_5) {
    param_3 = param_3 + -0x38;
    func_0x000104c2f714(param_3);
  }
  return;
}



/* Entry: 10726dfac; end: 10726e033;  */

void FUN_10726dfac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x38;
    func_0x000104c2f714(param_3);
  }
  return;
}



/* Entry: 10726e034; end: 10726e03b;  */

void FUN_10726e034(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x0001072747d8(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x38;
    func_0x000104c2f714(lVar1);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10726e03c; end: 10726e077;  */

void FUN_10726e03c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x0001072747d8();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x38;
    func_0x000104c2f714(lVar1);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10726e078; end: 10726e09b;  */

void FUN_10726e078(void)

{
  func_0x0001072745e4();
  func_0x00010726e008();
  return;
}



/* Entry: 10726e09c; end: 10726e10b;  */

void FUN_10726e09c(void)

{
  func_0x0001072750cc();
  func_0x00010743fa44();
  return;
}



/* Entry: 10726e10c; end: 10726e257;  */

undefined1  [16] FUN_10726e10c(ulong param_1)

{
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar3;
  long extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong uVar4;
  ulong extraout_x10;
  ulong unaff_x20;
  long *unaff_x21;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined1 auVar5 [16];
  
  func_0x000107275128();
  func_0x00010727471c();
  func_0x000100102e7c();
  func_0x0001072754b8();
  if (unaff_x24 != 0) {
    func_0x0001072757f4();
    if ((bool)in_ZR) {
      unaff_x25 = unaff_x26 & unaff_x20;
    }
    else {
      func_0x000107275464();
      if ((bool)in_CY) {
        func_0x000107274d10();
      }
    }
    func_0x000107275978();
    if (unaff_x21 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*unaff_x21;
          if (unaff_x21 == (long *)0x0) goto LAB_10726e198;
          func_0x000107274fd0();
          if (!(bool)in_ZR) break;
          func_0x0001072755dc();
          if ((param_1 & 1) != 0) {
            uVar2 = 0;
            goto LAB_10726e240;
          }
        }
        if ((unaff_x24 & unaff_x26) == 0) {
          uVar4 = extraout_x8 & unaff_x26;
        }
        else {
          uVar4 = extraout_x8;
          if (unaff_x24 <= extraout_x8) {
            func_0x0001072750f8();
            uVar4 = extraout_x8_00;
          }
        }
        in_NG = (long)(uVar4 - unaff_x25) < 0;
        in_ZR = uVar4 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_10726e198:
  func_0x000107274680();
  FUN_10726e258();
  func_0x00010727423c();
  if ((unaff_x24 == 0) || (func_0x0001072747bc(), (bool)in_NG)) {
    func_0x0001072743fc();
    uVar1 = unaff_x24 == 3;
    func_0x00010727413c();
    func_0x00010016854c();
    func_0x000107274aec();
    if ((bool)uVar1) {
      in_ZR = 1;
    }
    else {
      in_ZR = unaff_x20 == unaff_x24;
      if (unaff_x24 <= unaff_x20) {
        func_0x000107274d10();
      }
    }
  }
  func_0x0001072752b4();
  if (extraout_x9 == 0) {
    func_0x0001072742c8();
    func_0x0001072757e8();
    if (extraout_x9_00 != 0) {
      func_0x0001072747ac();
      lVar3 = extraout_x8_01;
      if ((bool)in_ZR) {
        uVar4 = extraout_x9_01 & extraout_x10;
      }
      else {
        uVar4 = extraout_x9_01;
        if (unaff_x24 <= extraout_x9_01) {
          func_0x0001072750ec();
          lVar3 = extraout_x8_02;
          uVar4 = extraout_x9_02;
        }
      }
      *(long **)(lVar3 + uVar4 * 8) = unaff_x21;
    }
  }
  else {
    func_0x000107274428();
  }
  func_0x000107274274();
  func_0x000100168724();
  uVar2 = 1;
LAB_10726e240:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = unaff_x21;
  return auVar5;
}



/* Entry: 10726e258; end: 10726e2a3;  */

void FUN_10726e258(void)

{
  long extraout_x8;
  
  func_0x00010727498c();
  __Znwm(0x30);
  func_0x000107275374();
  FUN_10726e2a4();
  *(undefined1 *)(extraout_x8 + 0x10) = 1;
  return;
}



/* Entry: 10726e2a4; end: 10726e2ff;  */

void FUN_10726e2a4(long param_1,long param_2)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return;
}



/* Entry: 10726e300; end: 10726e37b;  */

void FUN_10726e300(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x00010014ae40();
  func_0x00010002b838(auStack_38);
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  uStack_40 = unaff_x20[2];
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  FUN_10726e37c(unaff_x19 + 0x20,auStack_38,&uStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  *(undefined1 *)(unaff_x19 + 0x4c) = 1;
  return;
}



/* Entry: 10726e37c; end: 10726e423;  */

long FUN_10726e37c(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001000fecf4(param_1 + 8);
  func_0x0001000fecf4(param_1 + 8,param_3);
  return param_1;
}



/* Entry: 10726e424; end: 10726e43b;  */

void FUN_10726e424(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10726e43c; end: 10726e48b;  */

void FUN_10726e43c(void)

{
  func_0x0001072745e4();
  func_0x00010726e460();
  return;
}



/* Entry: 10726e48c; end: 10726e493;  */

void FUN_10726e48c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747d8(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x70;
    FUN_107269394();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10726e494; end: 10726e4c7;  */

void FUN_10726e494(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747d8();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x70;
    FUN_107269394();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10726e4c8; end: 10726e4f7;  */

void FUN_10726e4c8(void)

{
  long extraout_x8;
  
  func_0x000107274f8c();
  if (extraout_x8 != 0) {
    FUN_10726e4f8();
    func_0x000107274f80();
  }
  return;
}



/* Entry: 10726e4f8; end: 10726e533;  */

void FUN_10726e4f8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x00010726d6b0(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x50;
  }
  return;
}



/* Entry: 10726e534; end: 10726e5fb;  */

void FUN_10726e534(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_118 [24];
  undefined4 auStack_100 [6];
  undefined4 uStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_b8;
  undefined1 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [112];
  
  uStack_e8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  ppuStack_e0 = &PTR_FUN_110996720;
  uStack_d8 = 0;
  uStack_b8 = 0;
  uStack_b4 = 1;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  auStack_100[0] = param_2;
  uStack_c0 = param_2;
  FUN_107267f50(auStack_118,param_3);
  puVar1 = auStack_100;
  FUN_10726e300(puVar1,&UNK_10f406af7,auStack_118);
  FUN_10726e6c0(auStack_90,puVar1);
  func_0x000107274984();
  FUN_107262330(auStack_100);
  FUN_10726e698(param_1,auStack_90);
  FUN_107262330(auStack_90);
  return;
}


