/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100dd2f2c; end: 100dd301b;  */

long * FUN_100dd2f2c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar5 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar2 = param_2;
    func_0x000107c614c4(param_2,param_3);
    if ((int)plVar2 == 1) {
      lVar5 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
      uVar3 = 1;
    }
    else {
      if ((int)plVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar5 + 0x40));
        return param_1;
      }
      lVar5 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
      uVar3 = 0;
    }
    func_0x000107c6159c(param_1,param_3,uVar3);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 100dd301c; end: 100dd3067;  */

void FUN_100dd301c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_1;
  func_0x000107c614c4();
  if ((uint)uVar1 < 2) {
    lVar2 = 0;
    func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x000100dd3058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
    return;
  }
  return;
}



/* Entry: 100dd3068; end: 100dd320f;  */

undefined8 FUN_100dd3068(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)uVar2 == 1) {
    lVar1 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
    uVar2 = 1;
  }
  else {
    if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    lVar1 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
    uVar2 = 0;
  }
  func_0x000107c6159c(param_1,param_3,uVar2);
  return param_1;
}



/* Entry: 100dd3210; end: 100dd3223;  */

void FUN_100dd3210(undefined8 param_1)

{
  if (lRam0000000112d35eb0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e60e3b8);
  return;
}



/* Entry: 100dd3224; end: 100dd33cb;  */

undefined8 FUN_100dd3224(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)uVar2 == 1) {
    lVar1 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,param_2,lVar1);
    uVar2 = 1;
  }
  else {
    if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    lVar1 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,param_2,lVar1);
    uVar2 = 0;
  }
  func_0x000107c6159c(param_1,param_3,uVar2);
  return param_1;
}



/* Entry: 100dd33cc; end: 100dd33fb;  */

void FUN_100dd33cc(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100dd33d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 100dd33fc; end: 100dd345f;  */

void FUN_100dd33fc(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lStack_28 = lStack_30;
    func_0x000107c61528(param_1,0x100,2,&lStack_30);
  }
  return;
}



/* Entry: 100dd3460; end: 100dd3543;  */

long * FUN_100dd3460(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar2 = 0;
    func_0x000107c5eea4();
    lVar5 = *(long *)(lVar2 + -8);
    plVar3 = param_2;
    (**(code **)(lVar5 + 0x30))(param_2,3,lVar2);
    if ((int)plVar3 == 0) {
      (**(code **)(lVar5 + 0x10))(param_1,param_2,lVar2);
      (**(code **)(lVar5 + 0x38))(param_1,0,3,lVar2);
    }
    else {
      lVar2 = 0;
      FUN_100dd3544();
      func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
    }
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  }
  else {
    lVar2 = *param_2;
    *param_1 = lVar2;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar2 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 100dd3544; end: 100dd3557;  */

void FUN_100dd3544(undefined8 param_1)

{
  if (lRam0000000112d35fe8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e60e408);
  return;
}



/* Entry: 100dd3558; end: 100dd360f;  */

long FUN_100dd3558(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar1 + -8);
  lVar2 = param_2;
  (**(code **)(lVar3 + 0x30))(param_2,3,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar3 + 0x10))(param_1,param_2,lVar1);
    (**(code **)(lVar3 + 0x38))(param_1,0,3,lVar1);
  }
  else {
    lVar2 = 0;
    FUN_100dd3544();
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x14));
  return param_1;
}



/* Entry: 100dd3610; end: 100dd3713;  */

long FUN_100dd3610(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar1 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  lVar3 = param_1;
  (*pcVar5)(param_1,3,lVar1);
  lVar2 = param_2;
  (*pcVar5)(param_2,3,lVar1);
  if ((int)lVar3 == 0) {
    if ((int)lVar2 == 0) {
      (**(code **)(lVar4 + 0x18))(param_1,param_2,lVar1);
      goto LAB_100dd36d4;
    }
    (**(code **)(lVar4 + 8))(param_1,lVar1);
  }
  else if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 0x10))(param_1,param_2,lVar1);
    (**(code **)(lVar4 + 0x38))(param_1,0,3,lVar1);
    goto LAB_100dd36d4;
  }
  lVar3 = 0;
  FUN_100dd3544();
  func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
LAB_100dd36d4:
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x14));
  return param_1;
}



/* Entry: 100dd3714; end: 100dd37cb;  */

long FUN_100dd3714(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar1 + -8);
  lVar2 = param_2;
  (**(code **)(lVar3 + 0x30))(param_2,3,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar3 + 0x20))(param_1,param_2,lVar1);
    (**(code **)(lVar3 + 0x38))(param_1,0,3,lVar1);
  }
  else {
    lVar2 = 0;
    FUN_100dd3544();
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x14));
  return param_1;
}



/* Entry: 100dd37cc; end: 100dd38cf;  */

long FUN_100dd37cc(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar1 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  lVar3 = param_1;
  (*pcVar5)(param_1,3,lVar1);
  lVar2 = param_2;
  (*pcVar5)(param_2,3,lVar1);
  if ((int)lVar3 == 0) {
    if ((int)lVar2 == 0) {
      (**(code **)(lVar4 + 0x28))(param_1,param_2,lVar1);
      goto LAB_100dd3890;
    }
    (**(code **)(lVar4 + 8))(param_1,lVar1);
  }
  else if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 0x20))(param_1,param_2,lVar1);
    (**(code **)(lVar4 + 0x38))(param_1,0,3,lVar1);
    goto LAB_100dd3890;
  }
  lVar3 = 0;
  FUN_100dd3544();
  func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
LAB_100dd3890:
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x14));
  return param_1;
}



/* Entry: 100dd38d0; end: 100dd38fb;  */

void FUN_100dd38d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 100dd38fc; end: 100dd392b;  */

void FUN_100dd38fc(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 100dd392c; end: 100dd399b;  */

void FUN_100dd392c(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_100dd3544();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10d900670;
    func_0x000107c6153c(param_1,0x100,2,&lStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 100dd399c; end: 100dd3a6f;  */

long * FUN_100dd399c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar5 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar2 = 0;
    func_0x000107c5eea4();
    lVar6 = *(long *)(lVar2 + -8);
    plVar3 = param_2;
    (**(code **)(lVar6 + 0x30))(param_2,3,lVar2);
    if ((int)plVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar5 + 0x40));
      return param_1;
    }
    (**(code **)(lVar6 + 0x10))(param_1,param_2,lVar2);
    (**(code **)(lVar6 + 0x38))(param_1,0,3,lVar2);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 100dd3a70; end: 100dd3ad7;  */

void FUN_100dd3a70(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar1 + -8);
  uVar2 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,3,lVar1);
  if ((int)uVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100dd3ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1,lVar1);
  return;
}



/* Entry: 100dd3ad8; end: 100dd3b87;  */

undefined8 FUN_100dd3ad8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar1 + -8);
  uVar2 = param_2;
  (**(code **)(lVar3 + 0x30))(param_2,3,lVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  (**(code **)(lVar3 + 0x10))(param_1,param_2,lVar1);
  (**(code **)(lVar3 + 0x38))(param_1,0,3,lVar1);
  return param_1;
}



/* Entry: 100dd3b88; end: 100dd3c87;  */

undefined8 FUN_100dd3b88(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar1 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  uVar2 = param_1;
  (*pcVar5)(param_1,3,lVar1);
  uVar3 = param_2;
  (*pcVar5)(param_2,3,lVar1);
  if ((int)uVar2 == 0) {
    if ((int)uVar3 != 0) {
      (**(code **)(lVar4 + 8))(param_1,lVar1);
      goto LAB_100dd3c30;
    }
    (**(code **)(lVar4 + 0x18))(param_1,param_2,lVar1);
  }
  else {
    if ((int)uVar3 != 0) {
LAB_100dd3c30:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    (**(code **)(lVar4 + 0x10))(param_1,param_2,lVar1);
    (**(code **)(lVar4 + 0x38))(param_1,0,3,lVar1);
  }
  return param_1;
}



/* Entry: 100dd3c88; end: 100dd3d37;  */

undefined8 FUN_100dd3c88(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar1 + -8);
  uVar2 = param_2;
  (**(code **)(lVar3 + 0x30))(param_2,3,lVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  (**(code **)(lVar3 + 0x20))(param_1,param_2,lVar1);
  (**(code **)(lVar3 + 0x38))(param_1,0,3,lVar1);
  return param_1;
}



/* Entry: 100dd3d38; end: 100dd3e37;  */

undefined8 FUN_100dd3d38(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar1 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  uVar2 = param_1;
  (*pcVar5)(param_1,3,lVar1);
  uVar3 = param_2;
  (*pcVar5)(param_2,3,lVar1);
  if ((int)uVar2 == 0) {
    if ((int)uVar3 != 0) {
      (**(code **)(lVar4 + 8))(param_1,lVar1);
      goto LAB_100dd3de0;
    }
    (**(code **)(lVar4 + 0x28))(param_1,param_2,lVar1);
  }
  else {
    if ((int)uVar3 != 0) {
LAB_100dd3de0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    (**(code **)(lVar4 + 0x20))(param_1,param_2,lVar1);
    (**(code **)(lVar4 + 0x38))(param_1,0,3,lVar1);
  }
  return param_1;
}



/* Entry: 100dd3e38; end: 100dd3e4f;  */

void FUN_100dd3e38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 100dd3e50; end: 100dd3e87;  */

void FUN_100dd3e50(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x000100dd3e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,3,lVar1);
  return;
}



/* Entry: 100dd3e88; end: 100dd3e8b;  */

void FUN_100dd3e88(void)

{
  return;
}



/* Entry: 100dd3e8c; end: 100dd3f1f;  */

void FUN_100dd3e8c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x000100dd3ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,3,lVar1);
  return;
}



/* Entry: 100dd3f20; end: 100dd405b;  */

void FUN_100dd3f20(undefined8 *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  code *pcVar5;
  long extraout_x8;
  undefined1 *puVar6;
  code *pcVar7;
  
  lVar2 = 0;
  FUN_100dd3544();
  pcVar5 = FUN_100dd3544;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,3,3,lVar2);
  FUN_100dd437c(param_2,puVar3);
  FUN_100dd45fc();
  pcVar7 = (code *)0x0;
  puVar6 = (undefined1 *)0x0;
  if ((param_2 & 1) != 0) {
    func_0x000100df2124();
    lVar2 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    lVar4 = lVar2;
    FUN_100dd2c78();
    puVar1 = PTR___sSis7CVarArgsWP_11034df08;
    *(undefined **)(lVar2 + 0x38) = PTR___sSiN_11034deb0;
    *(undefined **)(lVar2 + 0x40) = puVar1;
    *(long *)(lVar2 + 0x20) = lVar4;
    pcVar7 = pcVar5;
    func_0x000107c5fb00(puVar3,pcVar5,lVar2);
    func_0x000107c6142c(pcVar5);
    puVar6 = puVar3;
  }
  *param_1 = puVar6;
  param_1[1] = pcVar7;
  return;
}



/* Entry: 100dd405c; end: 100dd408f;  */

void FUN_100dd405c(undefined1 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100dd38e8();
  *param_1 = *(undefined1 *)(param_2 + *(int *)(lVar1 + 0x14));
  return;
}



/* Entry: 100dd4090; end: 100dd40f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100dd4090(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x20;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (8 < *(ulong *)(*unaff_x20 + _DAT_112d35ce0)) {
    func_0x000107c60614(&UNK_11073c4f0,&stack0xffffffffffffffe8,&UNK_11073c4f0,PTR___sSiN_11034deb0)
    ;
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd40f8);
    (*pcVar1)();
  }
  if (*(ulong *)(*unaff_x20 + _DAT_112d35ce0) != 5) {
    lVar4 = -0x2fffffffffffffef;
    func_0x000107c5fadc(0xd000000000000011,0x800000010ef10710);
    uVar5 = 0xd000000000000016;
    func_0x000107c5fadc(0xd000000000000016,0x800000010ef106c0);
    uVar6 = 0;
    func_0x000107c5fe40(0);
    lVar2 = lVar4;
    uVar3 = uVar5;
    func_0x0001000f6108(lVar4,uVar5,uVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    if (lVar2 != 0) {
      lVar4 = lVar2;
      func_0x000107c5faec(lVar2);
      func_0x000107c61170(lVar2);
      auVar8._8_8_ = uVar3;
      auVar8._0_8_ = lVar4;
      return auVar8;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100df2124);
    (*pcVar1)();
  }
  lVar2 = -0x2fffffffffffffd9;
  func_0x000107c5fadc(0xd000000000000027,0x800000010ef106e0);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef106c0);
  uVar6 = 0;
  func_0x000107c5fe40(0);
  lVar4 = lVar2;
  uVar5 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar6);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  if (lVar4 != 0) {
    lVar2 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar5;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100df2058);
  (*pcVar1)();
}



/* Entry: 100dd40f8; end: 100dd4187;  */

undefined8 FUN_100dd40f8(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar3 = *unaff_x20;
  func_0x000103dbf46c();
  func_0x000107c6157c(uVar3);
  uVar1 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  pcVar2 = FUN_100dd41f0;
  func_0x0001000bfde0(FUN_100dd41f0,uVar3,uVar1);
  func_0x000107c61574(param_1);
  func_0x000107c61574(uVar3);
  FUN_100dd41f8();
  func_0x000104884898();
  func_0x000107c61574(pcVar2);
  return uVar3;
}



/* Entry: 100dd4188; end: 100dd41ef;  */

undefined * FUN_100dd4188(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  func_0x000103dbf46c();
  pcVar1 = FUN_100dd405c;
  func_0x0001000bfde0(FUN_100dd405c,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(param_1);
  puVar2 = PTR___sSbSQsWP_11034dd50;
  func_0x000104884898(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(pcVar1);
  return puVar2;
}



/* Entry: 100dd41f0; end: 100dd41f7;  */

void FUN_100dd41f0(undefined8 *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  code *pcVar5;
  long extraout_x8;
  undefined1 *puVar6;
  code *pcVar7;
  
  lVar2 = 0;
  FUN_100dd3544();
  pcVar5 = FUN_100dd3544;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,3,3,lVar2);
  FUN_100dd437c(param_2,puVar3);
  FUN_100dd45fc();
  pcVar7 = (code *)0x0;
  puVar6 = (undefined1 *)0x0;
  if ((param_2 & 1) != 0) {
    func_0x000100df2124();
    lVar2 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    lVar4 = lVar2;
    FUN_100dd2c78();
    puVar1 = PTR___sSis7CVarArgsWP_11034df08;
    *(undefined **)(lVar2 + 0x38) = PTR___sSiN_11034deb0;
    *(undefined **)(lVar2 + 0x40) = puVar1;
    *(long *)(lVar2 + 0x20) = lVar4;
    pcVar7 = pcVar5;
    func_0x000107c5fb00(puVar3,pcVar5,lVar2);
    func_0x000107c6142c(pcVar5);
    puVar6 = puVar3;
  }
  *param_1 = puVar6;
  param_1[1] = pcVar7;
  return;
}



/* Entry: 100dd41f8; end: 100dd427b;  */

void FUN_100dd41f8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_18;
  
  if (puRam0000000112d36000 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d35ff8;
  func_0x00010002969c(0x112d35ff8,&UNK_10d900cd0);
  puStack_18 = PTR___sSSSQsWP_11034da98;
  puVar2 = PTR___sxSgSQsSQRzlMc_11034f190;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&puStack_18);
  puRam0000000112d36000 = puVar2;
  return;
}



/* Entry: 100dd427c; end: 100dd437b;  */

undefined * FUN_100dd427c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100dd437c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d36020;
    func_0x0001000285a8(0x112d36020,&UNK_10d92f8b0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 100dd437c; end: 100dd45fb;  */

uint FUN_100dd437c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar6 - extraout_x12;
  lVar3 = 0;
  FUN_100dd3544();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar9 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d36010;
  func_0x0001000285a8(0x112d36010,&UNK_10d900728);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = lVar9 - extraout_x8_01;
  lVar3 = (long)*(int *)(lVar3 + 0x30);
  FUN_100dd4984(param_1,lVar5,FUN_100dd3544);
  FUN_100dd4984(param_2,lVar5 + lVar3,FUN_100dd3544);
  pcVar10 = *(code **)(lVar11 + 0x30);
  lVar4 = lVar5;
  (*pcVar10)(lVar5,3,lVar2);
  iVar1 = (int)lVar4;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      FUN_100dd4984(lVar5,lVar9,FUN_100dd3544);
      lVar4 = lVar5 + lVar3;
      (*pcVar10)(lVar4,3,lVar2);
      if ((int)lVar4 == 0) {
        pcVar10 = *(code **)(lVar11 + 0x20);
        (*pcVar10)(lVar7,lVar9,lVar2);
        (*pcVar10)(puVar6,lVar5 + lVar3,lVar2);
        lVar3 = lVar7;
        func_0x000107c5ee90(lVar7,puVar6);
        uVar8 = (uint)lVar3;
        pcVar10 = *(code **)(lVar11 + 8);
        (*pcVar10)(puVar6,lVar2);
        (*pcVar10)(lVar7,lVar2);
        FUN_100dd45fc(lVar5,FUN_100dd3544);
        goto LAB_100dd4574;
      }
      (**(code **)(lVar11 + 8))(lVar9,lVar2);
    }
    else {
      lVar3 = lVar5 + lVar3;
      (*pcVar10)(lVar3,3,lVar2);
      if ((int)lVar3 == 1) goto LAB_100dd4528;
    }
  }
  else if (iVar1 == 2) {
    lVar3 = lVar5 + lVar3;
    (*pcVar10)(lVar3,3,lVar2);
    if ((int)lVar3 == 2) {
LAB_100dd4528:
      FUN_100dd45fc(lVar5,FUN_100dd3544);
      uVar8 = 1;
      goto LAB_100dd4574;
    }
  }
  else {
    lVar3 = lVar5 + lVar3;
    (*pcVar10)(lVar3,3,lVar2);
    if ((int)lVar3 == 3) goto LAB_100dd4528;
  }
  func_0x000100dd49c8(lVar5,0x112d36010,&UNK_10d900728);
  uVar8 = 0;
LAB_100dd4574:
  return uVar8 & 1;
}



/* Entry: 100dd45fc; end: 100dd4637;  */

undefined8 FUN_100dd45fc(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100dd4638; end: 100dd4983;  */

uint FUN_100dd4638(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  uint uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar4 = 0;
  uStack_70 = param_1;
  lStack_68 = param_2;
  func_0x000107c5eea4();
  lStack_80 = *(long *)(lVar4 + -8);
  lStack_78 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  lVar13 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar13 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar15 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar12 - extraout_x12_01;
  lVar5 = 0;
  FUN_100dd3210();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar8 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar8 - extraout_x12_02;
  lVar4 = 0x112d36018;
  func_0x0001000285a8(0x112d36018,&UNK_10d900730);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar14 - extraout_x8_01;
  lVar4 = (long)*(int *)(lVar4 + 0x30);
  FUN_100dd4984(uStack_70,lVar10,FUN_100dd3210);
  FUN_100dd4984(lStack_68,lVar10 + lVar4,FUN_100dd3210);
  lVar6 = lVar10;
  func_0x000107c614c4(lVar10,lVar5);
  lVar2 = lStack_78;
  lVar1 = lStack_80;
  iVar3 = (int)lVar6;
  if (iVar3 < 2) {
    lStack_68 = lVar12;
    if (iVar3 == 0) {
      FUN_100dd4984(lVar10,lVar14,FUN_100dd3210);
      lVar6 = lVar10 + lVar4;
      func_0x000107c614c4(lVar6,lVar5);
      if ((int)lVar6 == 0) {
        pcVar9 = *(code **)(lVar1 + 0x20);
        (*pcVar9)(lVar11,lVar14,lVar2);
        lVar6 = lStack_68;
        (*pcVar9)(lStack_68,lVar10 + lVar4,lVar2);
        lVar4 = lVar11;
        func_0x000107c5ee90(lVar11,lVar6);
        uVar7 = (uint)lVar4;
        pcVar9 = *(code **)(lVar1 + 8);
        (*pcVar9)(lVar6,lVar2);
        lVar15 = lVar11;
LAB_100dd4948:
        (*pcVar9)(lVar15,lVar2);
        FUN_100dd45fc(lVar10,FUN_100dd3210);
        goto LAB_100dd4960;
      }
    }
    else {
      FUN_100dd4984(lVar10,lVar8,FUN_100dd3210);
      lVar6 = lVar10 + lVar4;
      func_0x000107c614c4(lVar6,lVar5);
      lVar14 = lVar8;
      if ((int)lVar6 == 1) {
        pcVar9 = *(code **)(lVar1 + 0x20);
        (*pcVar9)(lVar15,lVar8,lVar2);
        (*pcVar9)(lVar13,lVar10 + lVar4,lVar2);
        lVar4 = lVar15;
        func_0x000107c5ee90(lVar15,lVar13);
        uVar7 = (uint)lVar4;
        pcVar9 = *(code **)(lVar1 + 8);
        (*pcVar9)(lVar13,lVar2);
        goto LAB_100dd4948;
      }
    }
    (**(code **)(lVar1 + 8))(lVar14,lVar2);
  }
  else if (iVar3 == 2) {
    lVar4 = lVar10 + lVar4;
    func_0x000107c614c4(lVar4,lVar5);
    if ((int)lVar4 == 2) goto LAB_100dd4844;
  }
  else if (iVar3 == 3) {
    lVar4 = lVar10 + lVar4;
    func_0x000107c614c4(lVar4,lVar5);
    if ((int)lVar4 == 3) {
LAB_100dd4844:
      FUN_100dd45fc(lVar10,FUN_100dd3210);
      uVar7 = 1;
      goto LAB_100dd4960;
    }
  }
  else {
    lVar4 = lVar10 + lVar4;
    func_0x000107c614c4(lVar4,lVar5);
    if ((int)lVar4 == 4) goto LAB_100dd4844;
  }
  func_0x000100dd49c8(lVar10,0x112d36018,&UNK_10d900730);
  uVar7 = 0;
LAB_100dd4960:
  return uVar7 & 1;
}



/* Entry: 100dd4984; end: 100dd4a07;  */

undefined8 FUN_100dd4984(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100dd4a08; end: 100dd4a0f;  */

void FUN_100dd4a08(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar1 + -8);
  uVar2 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,3,lVar1);
  if ((int)uVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100dd3ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1,lVar1);
  return;
}



/* Entry: 100dd4a10; end: 100dd4acf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100dd4a10(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d36048;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d36048);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b0c40;
    func_0x000107c61168(PTR_PTR_1126b0c40);
    func_0x000107c450a4(0x4048000000000000,0x4048000000000000);
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c46db4();
    func_0x000107c5a050();
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 100dd4ad0; end: 100dd4ae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100dd4ad0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d36050;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d36050);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_100dd4ae4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 100dd4ae4; end: 100dd4bfb;  */

undefined * FUN_100dd4ae4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c5a100(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar2);
  FUN_100df21f0();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c56ba8(puVar1);
  func_0x000107c61170(puVar1);
  uVar3 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef0fe70);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  return puVar1;
}



/* Entry: 100dd4bfc; end: 100dd4c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100dd4bfc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d36058;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d36058);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_100dd4c10();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100dd4c10; end: 100dd4d67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100dd4c10(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a100();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61174(puVar1);
  func_0x000107c5a050();
  func_0x0001000a8868(param_1 + _DAT_112d36030,*(undefined8 *)(param_1 + _DAT_112d36030 + 0x18));
  ppuVar4 = &PTR_DAT_110352608;
  uVar3 = 0;
  FUN_100dd2ebc(0);
  FUN_100dd4090();
  func_0x000107c5fadc();
  func_0x000107c6142c(ppuVar4);
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c59c74(puVar1);
  func_0x000107c56ba8(puVar1);
  func_0x000107c61170(puVar1);
  uVar3 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef0fe40);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  return puVar1;
}



/* Entry: 100dd4d68; end: 100dd4d7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100dd4d68(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d36060;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d36060);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    (*(code *)0x100dd4dd8)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 100dd4d7c; end: 100dd4eef;  */

long FUN_100dd4d7c(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 100dd4ef0; end: 100dd4f03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100dd4ef0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d36068;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d36068);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_100dd4f04();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100dd4f04; end: 100dd5007;  */

undefined * FUN_100dd4f04(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001008479c8();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 7;
  *(undefined8 *)(param_1 + 0x10) = 3;
  lVar1 = param_1;
  FUN_100dd4a10();
  *(long *)(param_1 + 0x20) = lVar1;
  FUN_100dd4ad0();
  *(long *)(param_1 + 0x28) = lVar1;
  FUN_100dd4bfc();
  *(long *)(param_1 + 0x30) = lVar1;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  uVar3 = 0;
  FUN_100dd65bc(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  lVar1 = param_1;
  func_0x000107c5fc48(param_1,uVar3);
  func_0x000107c61574(param_1);
  func_0x000107c45784(puVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c5a050(puVar2);
  func_0x000107c52b2c(puVar2);
  func_0x000107c59594(0x402e000000000000,puVar2);
  func_0x000107c52610(puVar2);
  func_0x000107c54280(puVar2);
  return puVar2;
}



/* Entry: 100dd5008; end: 100dd501b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100dd5008(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d36070;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d36070);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_100dd501c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100dd501c; end: 100dd5123;  */

undefined * FUN_100dd501c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x000107c61168(PTR_PTR_1126aec40);
  func_0x000107c3ee98();
  func_0x000107c61180();
  func_0x000107c59a2c();
  func_0x000107c61174(puVar1);
  puVar2 = puVar1;
  func_0x000107c5a050();
  func_0x000100df2234();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59e1c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61174(puVar1);
  func_0x000107c3d8b8();
  func_0x000107c54514(puVar1);
  func_0x000107c61170(puVar1);
  uVar3 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010ef0fde0);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  return puVar1;
}



/* Entry: 100dd5124; end: 100dd5137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100dd5124(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d36078;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d36078);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_100dd5198();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100dd5138; end: 100dd5197;  */

long FUN_100dd5138(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar2;
}



/* Entry: 100dd5198; end: 100dd52e3;  */

undefined * FUN_100dd5198(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar2 = PTR__OBJC_CLASS___UIDatePicker_1126af760;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIDatePicker_1126af760);
  func_0x000107c453e4();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5a050();
  func_0x000107c5eea0(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee70();
  func_0x000107c53e18(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c5ee70();
  func_0x000107c56388(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c53e30(puVar2);
  func_0x000107c57694(puVar2);
  func_0x000107c3d8b8(puVar2);
  uVar4 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef0fdb0);
  func_0x000107c520f4(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return puVar2;
}



/* Entry: 100dd52e4; end: 100dd530b; -[_TtC22AgeVerificationFeature37AgeVerificationBirthdayViewController initWithCoder:] */

void FUN_100dd52e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_100dd6430();
  return;
}



/* Entry: 100dd530c; end: 100dd5ac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd530c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long unaff_x20;
  
  FUN_100dd6410();
  puVar10 = PTR_s_viewDidLoad_112684cd8;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidLoad_112684cd8);
  lVar2 = unaff_x20;
  func_0x000107c44ca0();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000100df224c();
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar10);
  func_0x000107c59e18(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  lVar2 = unaff_x20;
  func_0x000107c44ca0();
  func_0x000107c61180();
  func_0x000107c54210();
  func_0x000107c61170(lVar2);
  func_0x000107c5a304();
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd5a9c);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  FUN_100dd4ef0();
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd5aa0);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  FUN_100dd5124();
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd5aa4);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  FUN_100dd4d68();
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd5aa8);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  FUN_100dd5008();
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 0x19;
  *(undefined8 *)(lVar3 + 0x10) = 0xc;
  lVar2 = _DAT_112d36068;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d36068);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd5aac);
    (*pcVar1)();
  }
  lVar6 = lVar5;
  func_0x000107c4ac04();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  lVar5 = lVar6;
  func_0x000107c5cbe4(lVar6);
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  uVar7 = uVar4;
  func_0x000107c40284(0x405e000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar5);
  *(undefined8 *)(lVar3 + 0x20) = uVar7;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd5ab0);
    (*pcVar1)();
  }
  lVar6 = lVar5;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  uVar7 = uVar4;
  func_0x000107c40284(0x4034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar3 + 0x28) = uVar7;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd5ab4);
    (*pcVar1)();
  }
  lVar5 = lVar2;
  func_0x000107c3f75c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  uVar7 = uVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar5);
  *(undefined8 *)(lVar3 + 0x30) = uVar7;
  lVar2 = _DAT_112d36070;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d36070);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x000107c4ac04();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    lVar5 = lVar6;
    func_0x000107c3ec1c(lVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    uVar7 = uVar4;
    func_0x000107c40284(0xc03c000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar5);
    *(undefined8 *)(lVar3 + 0x38) = uVar7;
    uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar5 = _DAT_112d36078;
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d36078);
    func_0x000107c4acb0(uVar8);
    func_0x000107c61180();
    uVar4 = uVar7;
    func_0x000107c40284(0x4038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    *(undefined8 *)(lVar3 + 0x40) = uVar4;
    uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c5ce8c();
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar5);
    func_0x000107c5ce8c(uVar8);
    func_0x000107c61180();
    uVar4 = uVar7;
    func_0x000107c40284(0xc038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    *(undefined8 *)(lVar3 + 0x48) = uVar4;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c3f75c();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd5abc);
      (*pcVar1)();
    }
    lVar9 = lVar6;
    func_0x000107c3f75c();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    uVar7 = uVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar9);
    *(undefined8 *)(lVar3 + 0x50) = uVar7;
    uVar7 = *(undefined8 *)(unaff_x20 + lVar5);
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c5cbe4(uVar8);
    func_0x000107c61180();
    uVar4 = uVar7;
    func_0x000107c40284(0xc03e000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    *(undefined8 *)(lVar3 + 0x58) = uVar4;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar5);
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar2 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd5ac0);
      (*pcVar1)();
    }
    lVar6 = lVar2;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    uVar7 = uVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar3 + 0x60) = uVar7;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar5);
    func_0x000107c3f75c();
    func_0x000107c61180();
    lVar2 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd5ac4);
      (*pcVar1)();
    }
    lVar6 = lVar2;
    func_0x000107c3f75c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    uVar7 = uVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar3 + 0x68) = uVar7;
    lVar2 = _DAT_112d36060;
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d36060);
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar5);
    func_0x000107c5cbe4(uVar8);
    func_0x000107c61180();
    uVar4 = uVar7;
    func_0x000107c40284(0xc024000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    *(undefined8 *)(lVar3 + 0x70) = uVar4;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c3f75c();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar2 = unaff_x20;
      func_0x000107c3f75c(unaff_x20);
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      uVar7 = uVar4;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(lVar2);
      *(undefined8 *)(lVar3 + 0x78) = uVar7;
      uVar4 = 0;
      FUN_100dd65bc(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar2 = lVar3;
      func_0x000107c5fc48(lVar3,uVar4);
      func_0x000107c61574(lVar3);
      func_0x000107c3d048(puVar10);
      func_0x000107c61170(lVar2);
      FUN_100dd5b8c();
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd5ac8);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd5ab8);
  (*pcVar1)();
}



/* Entry: 100dd5ac8; end: 100dd5aef; -[_TtC22AgeVerificationFeature37AgeVerificationBirthdayViewController viewDidLoad] */

void FUN_100dd5ac8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100dd530c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100dd5af0; end: 100dd5b8b; -[_TtC22AgeVerificationFeature37AgeVerificationBirthdayViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd5af0(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  FUN_100dd3210();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c6159c(puVar2);
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(puVar2);
  FUN_100dd6570(puVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100dd5b8c; end: 100dd5d2b;  */

/* WARNING: Possible PIC construction at 0x000100dd5c74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dd5c78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd5b8c(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  
  func_0x0001000a8868(unaff_x20 + _DAT_112d36030,*(undefined8 *)(unaff_x20 + _DAT_112d36030 + 0x18))
  ;
  plVar1 = (long *)0x0;
  FUN_100dd2ebc();
  FUN_100dd40f8();
  puVar2 = &UNK_1103526c0;
  func_0x000107c613fc(&UNK_1103526c0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcVar3 = FUN_100dd65ac;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(FUN_100dd65ac);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d36040),pcVar4,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar3);
  return;
}



/* Entry: 100dd5d2c; end: 100dd5e13;  */

void FUN_100dd5d2c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  lVar2 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (lVar2 != 0) {
      FUN_100dd5e14(uVar1,lVar2);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 100dd5e14; end: 100dd6027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd5e14(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  long lStack_68;
  
  ppuVar1 = &puStack_90;
  uVar5 = param_1;
  uVar7 = param_2;
  FUN_100df226c();
  lVar9 = *(long *)(unaff_x20 + _DAT_112d36038);
  func_0x000107c6157c(lVar9);
  uVar8 = uVar7;
  func_0x000107c5fadc(uVar5,uVar7);
  func_0x000107c6142c(uVar7);
  pcStack_70 = FUN_100dd6544;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100de205c;
  puStack_78 = &UNK_110352660;
  lStack_68 = lVar9;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c61170(uVar5);
  lVar9 = lStack_68;
  func_0x000107c61574();
  FUN_100df2338();
  lVar3 = lVar9;
  FUN_100de9c28();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 3;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined **)(lVar3 + 0x20) = puVar2;
  puVar4 = PTR_PTR_1126aed78;
  func_0x000107c610f8(PTR_PTR_1126aed78);
  func_0x000107c61174(puVar2);
  func_0x000107c5fadc(lVar9,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c5fadc(param_1,param_2);
  uVar5 = 0;
  FUN_100dd65bc(0,0x112d360a8,&PTR_PTR_1126aed70);
  lVar6 = lVar3;
  func_0x000107c5fc48(lVar3,uVar5);
  func_0x000107c61574(lVar3);
  func_0x000107c48d50(puVar4);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar6);
  func_0x000107c59bc8(puVar4);
  func_0x000107c4f018();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 100dd6028; end: 100dd60c7;  */

void FUN_100dd6028(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  uStack_40 = 0x100dd6568;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110352688;
  uStack_38 = param_2;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar1);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100dd60c8; end: 100dd613b;  */

void FUN_100dd60c8(void)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  FUN_100dd3210();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c6159c(puVar2);
  func_0x0001002a64a8(puVar2);
  FUN_100dd6570(puVar2);
  return;
}



/* Entry: 100dd613c; end: 100dd6143; -[_TtC22AgeVerificationFeature37AgeVerificationBirthdayViewController backPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd613c(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  FUN_100dd3210();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c6159c(puVar2);
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(puVar2);
  FUN_100dd6570(puVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100dd6144; end: 100dd6227; -[_TtC22AgeVerificationFeature37AgeVerificationBirthdayViewController continuePressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd6144(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  
  lVar1 = 0;
  FUN_100dd3210();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61174(param_1);
  uVar2 = param_1;
  FUN_100dd5124();
  uVar3 = uVar2;
  func_0x000107c41324();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c5ee94(puVar4,uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c6159c(puVar4,lVar1,0);
  func_0x0001002a64a8(puVar4);
  FUN_100dd6570(puVar4);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100dd6228; end: 100dd622f; -[_TtC22AgeVerificationFeature37AgeVerificationBirthdayViewController birthdayPickerDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd6228(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  FUN_100dd3210();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c6159c(puVar2);
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(puVar2);
  FUN_100dd6570(puVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100dd6230; end: 100dd62cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd6230(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  FUN_100dd3210();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c6159c(puVar2);
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(puVar2);
  FUN_100dd6570(puVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100dd62d0; end: 100dd62fb; -[_TtC22AgeVerificationFeature37AgeVerificationBirthdayViewController initWithNibName:bundle:] */

void FUN_100dd62d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AgeVerificationFeature.AgeVerificationBirthdayViewController",0x3c,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd62fc);
  (*pcVar1)();
}



/* Entry: 100dd62fc; end: 100dd6357; -[_TtC22AgeVerificationFeature37AgeVerificationBirthdayViewController initWithNibName:bundle:transitionType:] */

void FUN_100dd62fc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AgeVerificationFeature.AgeVerificationBirthdayViewController",0x3c,
                      "init(nibName:bundle:transitionType:)",0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd6328);
  (*pcVar1)();
}



/* Entry: 100dd6358; end: 100dd640f; -[_TtC22AgeVerificationFeature37AgeVerificationBirthdayViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100dd63a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dd63c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dd63e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dd63c8) */
/* WARNING: Removing unreachable block (ram,0x000100dd63a8) */
/* WARNING: Removing unreachable block (ram,0x000100dd63e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd6358(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112d36030);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d36038));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d36040));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d36048));
  return;
}



/* Entry: 100dd6410; end: 100dd642f;  */

void FUN_100dd6410(void)

{
  func_0x000107c61168(&PTR_PTR_1127971e8);
  return;
}



/* Entry: 100dd6430; end: 100dd6543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd6430(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112d36038;
  uVar3 = 0x112d360c0;
  func_0x0001000285a8(0x112d360c0,&UNK_10d900798);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_112d36040;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112d36048) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d36050) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d36058) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d36060) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d36068) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d36070) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d36078) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "AgeVerificationFeature/AgeVerificationBirthdayViewController.swift",0x42,2,
                      0x70,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100dd6544);
  (*pcVar2)();
}



/* Entry: 100dd6544; end: 100dd656f;  */

void FUN_100dd6544(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  
  ppuVar1 = &puStack_60;
  uStack_40 = 0x100dd6568;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110352688;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar1);
  return;
}



/* Entry: 100dd6570; end: 100dd65ab;  */

undefined8 FUN_100dd6570(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100dd3210();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100dd65ac; end: 100dd65bb;  */

void FUN_100dd65ac(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  lVar2 = param_1[1];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if (lVar2 != 0) {
      FUN_100dd5e14(uVar1,lVar2);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 100dd65bc; end: 100dd65fb;  */

void FUN_100dd65bc(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100dd65fc; end: 100dd6603;  */

void FUN_100dd65fc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100dd6604; end: 100dd66f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100dd6604(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112d360c8;
  puVar3 = &stack0xffffffffffffffb0;
  puVar2 = PTR_PTR_1126aeff0;
  func_0x000107c610f8();
  func_0x000107c45eac();
  func_0x000107c55130();
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c();
  }
  FUN_100dd6b1c();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_initWithNibName_bundle__1125e9850,param_1,
                      param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61174(puVar3);
  func_0x000107c5677c();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  return puVar3;
}



/* Entry: 100dd66f4; end: 100dd6753; -[_TtC22AgeVerificationFeature36AgeVerificationPendingViewController initWithNibName:bundle:] */

void FUN_100dd66f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_4);
  FUN_100dd6604(param_3,param_2,param_4);
  return;
}



/* Entry: 100dd6754; end: 100dd67f3; -[_TtC22AgeVerificationFeature36AgeVerificationPendingViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd6754(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  lVar1 = _DAT_112d360c8;
  puVar3 = PTR_PTR_1126aeff0;
  func_0x000107c610f8();
  func_0x000107c45eac();
  func_0x000107c55130();
  func_0x000107c5a050(puVar3);
  *(undefined **)(param_1 + lVar1) = puVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "AgeVerificationFeature/AgeVerificationPendingViewController.swift",0x41,2,
                      0x15,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100dd67f4);
  (*pcVar2)();
}



/* Entry: 100dd67f4; end: 100dd6ab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd67f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  FUN_100dd6b1c();
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_viewDidLoad_112684cd8);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd6aa0);
    (*pcVar1)();
  }
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d360c8);
  func_0x000107c3d89c();
  func_0x000107c61170(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd6aa4);
    (*pcVar1)();
  }
  func_0x000107c3ec60();
  func_0x000107c61170(lVar2);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c469a4(param_1,param_2,param_3,param_4);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd6aa8);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c52110();
    func_0x000107c61170();
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 5;
    *(undefined8 *)(lVar2 + 0x10) = 2;
    uVar8 = uVar9;
    func_0x000107c3f75c();
    func_0x000107c61180();
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd6ab0);
      (*pcVar1)();
    }
    lVar5 = lVar4;
    func_0x000107c3f75c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    uVar6 = uVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar5);
    *(undefined8 *)(lVar2 + 0x20) = uVar6;
    uVar8 = uVar9;
    func_0x000107c3f764();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar4 = unaff_x20;
      func_0x000107c3f764(unaff_x20);
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      uVar6 = uVar8;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      func_0x000107c61170(lVar4);
      *(undefined8 *)(lVar2 + 0x28) = uVar6;
      uVar8 = 0;
      func_0x000100847984(0);
      lVar4 = lVar2;
      func_0x000107c5fc48(lVar2,uVar8);
      func_0x000107c61574(lVar2);
      func_0x000107c3d048(puVar7);
      func_0x000107c61170(lVar4);
      func_0x000107c5ba54(uVar9);
      func_0x000107c61170(puVar3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd6ab4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd6aac);
  (*pcVar1)();
}



/* Entry: 100dd6ab4; end: 100dd6adb; -[_TtC22AgeVerificationFeature36AgeVerificationPendingViewController viewDidLoad] */

void FUN_100dd6ab4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100dd67f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100dd6adc; end: 100dd6b0b;  */

void FUN_100dd6adc(void)

{
  FUN_100dd6b1c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100dd6b0c; end: 100dd6b1b; -[_TtC22AgeVerificationFeature36AgeVerificationPendingViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd6b0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d360c8));
  return;
}



/* Entry: 100dd6b1c; end: 100dd6b3b;  */

void FUN_100dd6b1c(void)

{
  func_0x000107c61168(&PTR_PTR_1127973c8);
  return;
}



/* Entry: 100dd6b3c; end: 100dd6db7;  */

undefined1 * FUN_100dd6b3c(void)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  uint uVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar9;
  ulong uVar10;
  undefined8 unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_90 [8];
  long lStack_88;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ec74();
  lStack_88 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_88 + 0x40));
  lVar13 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5ef18();
  lVar16 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar15 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  func_0x000107c5ef64();
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar14 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar16 + 0x68))
            (lVar15,*(undefined4 *)
                     PTR___s10Foundation8CalendarV10IdentifierO9gregorianyA2EmFWC_110350cc8,lVar4);
  func_0x000107c5ef1c(lVar14,lVar15);
  (**(code **)(lVar16 + 8))(lVar15,lVar4);
  lVar4 = 0x112d36588;
  func_0x0001000285a8(0x112d36588,&UNK_10d900a30);
  lVar16 = 0;
  func_0x000107c5ef5c();
  lVar11 = *(long *)(lVar16 + -8);
  uVar9 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar10 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
  func_0x000107c613fc(lVar4,uVar10 + *(long *)(lVar11 + 0x48),uVar9 | 7);
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  (**(code **)(lVar11 + 0x68))
            (lVar4 + uVar10,
             *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4yearyA2EmFWC_110350d88,lVar16);
  lVar15 = lVar4;
  FUN_100ddce0c(lVar4);
  func_0x000107c61588(lVar4);
  (**(code **)(lVar11 + 8))(lVar4 + uVar10,lVar16);
  func_0x000107c6145c(lVar4,0x20,7);
  func_0x000107c5eea0(puVar6);
  func_0x000107c5ef28(lVar13,lVar15,unaff_x20,puVar6);
  func_0x000107c6142c(lVar15);
  (**(code **)(lVar8 + 8))(puVar6);
  uVar7 = (uint)lVar2;
  func_0x000107c5ec54();
  (**(code **)(lStack_88 + 8))(lVar13,lVar3);
  (**(code **)(lVar12 + 8))(lVar14,lVar5);
  puVar1 = (undefined1 *)0x0;
  if ((uVar7 & 0xff) != 1) {
    puVar1 = puVar6;
  }
  return puVar1;
}



/* Entry: 100dd6db8; end: 100dd6dbb;  */

uint FUN_100dd6db8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar5;
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
  uint uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined1 *puStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  uStack_70 = param_1;
  uStack_68 = param_2;
  func_0x000107c5ede0();
  lStack_80 = *(long *)(lVar2 + -8);
  lStack_78 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  puStack_90 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lStack_98 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = (undefined1 *)(lVar2 - extraout_x12_00);
  puStack_a0 = puVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = (long)puVar5 - extraout_x12_01;
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = (undefined1 *)(lVar2 - extraout_x12_02);
  puStack_88 = puVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar5 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar9 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12_05;
  lVar3 = 0;
  FUN_100dd8cfc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar15 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar15 - extraout_x12_06;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - extraout_x12_07;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar11 - extraout_x12_08;
  lVar2 = 0x112d36560;
  func_0x0001000285a8(0x112d36560,&UNK_10d900a08);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar12 - extraout_x8_01;
  lVar2 = (long)*(int *)(lVar2 + 0x30);
  FUN_100ddcd84(uStack_70,lVar8,FUN_100dd8cfc);
  FUN_100ddcd84(uStack_68,lVar8 + lVar2,FUN_100dd8cfc);
  lVar4 = lVar8;
  func_0x000107c614c4(lVar8,lVar3);
  puVar5 = puStack_88;
  iVar1 = (int)lVar4;
  if (iVar1 < 2) {
    if (iVar1 != 0) {
      FUN_100ddcd84(lVar8,lVar11,FUN_100dd8cfc);
      lVar4 = lVar8 + lVar2;
      func_0x000107c614c4(lVar4,lVar3);
      lVar12 = lStack_78;
      lVar3 = lStack_80;
      lVar10 = lVar11;
      if ((int)lVar4 != 1) goto LAB_100ddc064;
      pcVar7 = *(code **)(lStack_80 + 0x20);
      (*pcVar7)(lVar9,lVar11,lStack_78);
      (*pcVar7)(puVar5,lVar8 + lVar2,lVar12);
      lVar2 = lVar9;
      func_0x000107c5edac(lVar9,puVar5);
      uVar6 = (uint)lVar2;
      pcVar7 = *(code **)(lVar3 + 8);
      goto LAB_100ddc030;
    }
    FUN_100ddcd84(lVar8,lVar12,FUN_100dd8cfc);
    lVar9 = lVar8 + lVar2;
    func_0x000107c614c4(lVar9,lVar3);
    lVar3 = lStack_78;
    lVar4 = lStack_80;
    lVar10 = lVar12;
    if ((int)lVar9 != 0) {
LAB_100ddc064:
      (**(code **)(lStack_80 + 8))(lVar10,lStack_78);
      goto LAB_100ddc074;
    }
    pcVar7 = *(code **)(lStack_80 + 0x20);
    (*pcVar7)(lVar14,lVar12,lStack_78);
    (*pcVar7)(lVar13,lVar8 + lVar2,lVar3);
    lVar2 = lVar14;
    func_0x000107c5edac(lVar14,lVar13);
    uVar6 = (uint)lVar2;
    pcVar7 = *(code **)(lVar4 + 8);
    (*pcVar7)(lVar13,lVar3);
    (*pcVar7)(lVar14,lVar3);
  }
  else {
    if (iVar1 == 2) {
      FUN_100ddcd84(lVar8,lVar10,FUN_100dd8cfc);
      lVar4 = lVar8 + lVar2;
      func_0x000107c614c4(lVar4,lVar3);
      lVar12 = lStack_78;
      lVar3 = lStack_80;
      lVar9 = lStack_a8;
      if ((int)lVar4 != 2) goto LAB_100ddc064;
      pcVar7 = *(code **)(lStack_80 + 0x20);
      (*pcVar7)(lStack_a8,lVar10,lStack_78);
      puVar5 = puStack_a0;
    }
    else {
      if (iVar1 != 3) {
        lVar2 = lVar8 + lVar2;
        func_0x000107c614c4(lVar2,lVar3);
        if ((int)lVar2 == 4) {
          FUN_100dda294(lVar8,FUN_100dd8cfc);
          uVar6 = 1;
          goto LAB_100ddc090;
        }
LAB_100ddc074:
        func_0x000100ddd4b4(lVar8,0x112d36560,&UNK_10d900a08);
        uVar6 = 0;
        goto LAB_100ddc090;
      }
      FUN_100ddcd84(lVar8,lVar15,FUN_100dd8cfc);
      lVar4 = lVar8 + lVar2;
      func_0x000107c614c4(lVar4,lVar3);
      lVar12 = lStack_78;
      lVar3 = lStack_80;
      lVar9 = lStack_98;
      lVar10 = lVar15;
      if ((int)lVar4 != 3) goto LAB_100ddc064;
      pcVar7 = *(code **)(lStack_80 + 0x20);
      (*pcVar7)(lStack_98,lVar15,lStack_78);
      puVar5 = puStack_90;
    }
    (*pcVar7)(puVar5,lVar8 + lVar2,lVar12);
    lVar2 = lVar9;
    func_0x000107c5edac(lVar9,puVar5);
    uVar6 = (uint)lVar2;
    pcVar7 = *(code **)(lVar3 + 8);
LAB_100ddc030:
    (*pcVar7)(puVar5,lVar12);
    (*pcVar7)(lVar9,lVar12);
  }
  FUN_100dda294(lVar8,FUN_100dd8cfc);
LAB_100ddc090:
  return uVar6 & 1;
}



/* Entry: 100dd6dbc; end: 100dd6e67;  */

void FUN_100dd6dbc(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 100dd6e68; end: 100dd6e87;  */

bool FUN_100dd6e68(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100dd6e88; end: 100dd7a43;  */

void FUN_100dd6e88(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar7;
  undefined1 *puVar8;
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
  code *pcVar9;
  long lVar10;
  undefined1 *puVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lStack_140;
  undefined1 *puStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar4 = 0;
  lStack_98 = param_3;
  uStack_88 = param_2;
  lStack_78 = param_1;
  FUN_100dd8cfc();
  lStack_80 = *(long *)(lVar4 + -8);
  lStack_70 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  lVar7 = (long)&lStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112d36368;
  lStack_c8 = lVar7;
  func_0x0001000285a8(0x112d36368,&UNK_10d9008e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar7 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12;
  lStack_d0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12_00;
  lStack_a8 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12_01;
  lStack_e0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12_02;
  lStack_b0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12_03;
  lStack_f8 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12_04;
  lStack_b8 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12_05;
  lStack_100 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12_06;
  lStack_c0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12_07;
  lStack_108 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12_08;
  lStack_e8 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12_09;
  lStack_118 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12_10;
  lStack_d8 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12_11;
  lStack_110 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12_12;
  lStack_f0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12_13;
  lVar4 = 0;
  lStack_120 = lVar7;
  FUN_100dd9bb4();
  lStack_90 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar7 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_128 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12_14;
  lStack_130 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar8 = (undefined1 *)(lVar7 - extraout_x12_15);
  puStack_138 = puVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar8 = puVar8 + -extraout_x12_16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_140 = (long)puVar8 - extraout_x12_17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = ((long)puVar8 - extraout_x12_17) - extraout_x12_18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar16 - extraout_x12_19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar15 - extraout_x12_20;
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = lVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar10 - extraout_x12_21;
  lVar4 = 0;
  FUN_100dd9480();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar11 = (undefined1 *)(lVar17 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  FUN_100ddcd84(uStack_88,puVar11);
  puVar6 = puVar11;
  func_0x000107c614c4(puVar11,lVar4);
  lVar14 = lStack_70;
  lVar2 = lStack_78;
  lVar7 = lStack_c8;
  lVar4 = lStack_128;
  puVar1 = puStack_138;
  iVar3 = (int)puVar6;
  if (iVar3 < 4) {
    if (iVar3 < 2) {
      if (iVar3 == 0) {
        *puVar8 = *puVar11;
        func_0x000107c6159c(puVar8,lStack_90,2);
        lVar14 = lStack_70;
        lVar7 = lStack_80;
        lVar5 = lStack_100;
        pcVar9 = *(code **)(lStack_80 + 0x38);
        (*pcVar9)(lStack_100,1,1,lStack_70);
        FUN_100ddd3d8(puVar8,lVar2,FUN_100dd9bb4);
        lVar4 = lStack_b8;
      }
      else {
        FUN_100dda294(puVar11,FUN_100dd9480);
        lVar4 = lStack_130;
        func_0x000107c6159c(lStack_130,lStack_90,5);
        lVar14 = lStack_70;
        lVar7 = lStack_80;
        lVar5 = lStack_e0;
        pcVar9 = *(code **)(lStack_80 + 0x38);
        (*pcVar9)(lStack_e0,1,1,lStack_70);
        FUN_100ddd3d8(lVar4,lVar2,FUN_100dd9bb4);
        lVar4 = lStack_a8;
      }
    }
    else if (iVar3 == 2) {
      pcVar9 = *(code **)(lVar13 + 0x20);
      (*pcVar9)(lVar17,puVar11,lVar5);
      (*pcVar9)(lVar18,lVar17,lVar5);
      func_0x000107c6159c(lVar18,lStack_90,0);
      lVar14 = lStack_70;
      lVar7 = lStack_80;
      lVar5 = lStack_120;
      pcVar9 = *(code **)(lStack_80 + 0x38);
      (*pcVar9)(lStack_120,1,1,lStack_70);
      FUN_100ddd3d8(lVar18,lVar2,FUN_100dd9bb4);
      lVar4 = lStack_f0;
    }
    else {
      pcVar9 = *(code **)(lVar13 + 0x20);
      (*pcVar9)(lVar10,puVar11,lVar5);
      (*pcVar9)(lVar15,lVar10,lVar5);
      func_0x000107c6159c(lVar15,lStack_90,1);
      lVar14 = lStack_70;
      lVar7 = lStack_80;
      lVar5 = lStack_110;
      pcVar9 = *(code **)(lStack_80 + 0x38);
      (*pcVar9)(lStack_110,1,1,lStack_70);
      FUN_100ddd3d8(lVar15,lVar2,FUN_100dd9bb4);
      lVar4 = lStack_d8;
    }
  }
  else if (iVar3 < 6) {
    if (iVar3 == 4) {
      FUN_100ddd3d8(puVar11,lStack_c8,FUN_100dd8cfc);
      lVar4 = lStack_140;
      func_0x000107c6159c(lStack_140,lStack_90,5);
      lVar5 = lStack_108;
      FUN_100ddd3d8(lVar7,lStack_108,FUN_100dd8cfc);
      lVar7 = lStack_80;
      pcVar9 = *(code **)(lStack_80 + 0x38);
      (*pcVar9)(lVar5,0,1,lVar14);
      FUN_100ddd3d8(lVar4,lVar2,FUN_100dd9bb4);
      lVar4 = lStack_c0;
    }
    else {
      *puStack_138 = *puVar11;
      func_0x000107c6159c(puVar1,lStack_90,3);
      lVar7 = lStack_80;
      lVar5 = lStack_f8;
      pcVar9 = *(code **)(lStack_80 + 0x38);
      (*pcVar9)(lStack_f8,1,1,lVar14);
      FUN_100ddd3d8(puVar1,lVar2,FUN_100dd9bb4);
      lVar4 = lStack_b0;
    }
  }
  else if (iVar3 == 6) {
    func_0x000107c6159c(lStack_128,lStack_90,7);
    lVar7 = lStack_80;
    lVar5 = lStack_d0;
    pcVar9 = *(code **)(lStack_80 + 0x38);
    (*pcVar9)(lStack_d0,1,1,lVar14);
    FUN_100ddd3d8(lVar4,lVar2,FUN_100dd9bb4);
    lVar4 = lStack_a0;
  }
  else {
    func_0x000107c6159c(lVar16,lStack_90,6);
    lVar7 = lStack_80;
    lVar5 = lStack_118;
    pcVar9 = *(code **)(lStack_80 + 0x38);
    (*pcVar9)(lStack_118,1,1,lVar14);
    FUN_100ddd3d8(lVar16,lVar2,FUN_100dd9bb4);
    lVar4 = lStack_e8;
  }
  func_0x000100ddd41c(lVar5,lVar4);
  lVar5 = 0;
  func_0x000100dda8ec();
  lVar5 = (long)*(int *)(lVar5 + 0x14);
  pcVar12 = *(code **)(lVar7 + 0x30);
  lVar7 = lVar4;
  (*pcVar12)(lVar4,1,lVar14);
  if ((int)lVar7 == 1) {
    func_0x000100ddd46c(lStack_98 + lVar5,lVar2 + lVar5,0x112d36368,&UNK_10d9008e0);
    lVar7 = lVar4;
    (*pcVar12)(lVar4,1,lVar14);
    if ((int)lVar7 != 1) {
      func_0x000100ddd4b4(lVar4,0x112d36368,&UNK_10d9008e0);
    }
  }
  else {
    FUN_100ddd3d8(lVar4,lVar2 + lVar5,FUN_100dd8cfc);
    (*pcVar9)(lVar2 + lVar5,0,1,lVar14);
  }
  return;
}



/* Entry: 100dd7a44; end: 100dd7bbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd7a44(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  code *pcVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  byte *pbVar7;
  
  lVar3 = 0;
  FUN_100dd8cfc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  pbVar5 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_100dd9480();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  pbVar7 = pbVar5 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100ddcd84(param_1,pbVar7);
  pbVar4 = pbVar7;
  func_0x000107c614c4(pbVar7,lVar3);
  iVar2 = (int)pbVar4;
  if (iVar2 == 0) {
    bVar1 = *pbVar7;
    func_0x0001000a8868(unaff_x20 + _DAT_112d36118,
                        *(undefined8 *)(unaff_x20 + _DAT_112d36118 + 0x18));
    FUN_100de4c18((ulong)bVar1 + 0xd6,0);
  }
  else {
    if (iVar2 == 4) {
      pcVar6 = FUN_100dd8cfc;
      FUN_100ddd3d8(pbVar7,pbVar5,FUN_100dd8cfc);
      func_0x0001000a8868(unaff_x20 + _DAT_112d36118,
                          *(undefined8 *)(unaff_x20 + _DAT_112d36118 + 0x18));
      FUN_100de4a48(pbVar5,0);
    }
    else {
      if (iVar2 == 7) {
        func_0x0001000a8868(unaff_x20 + _DAT_112d36118,
                            *(undefined8 *)(unaff_x20 + _DAT_112d36118 + 0x18));
        FUN_100de4a2c(0xd3,1);
        return;
      }
      pcVar6 = FUN_100dd9480;
      pbVar5 = pbVar7;
    }
    FUN_100dda294(pbVar5,pcVar6);
  }
  return;
}



/* Entry: 100dd7bc0; end: 100dd7fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100dd7bc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  ulong uVar13;
  long extraout_x12;
  long unaff_x20;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 *puVar19;
  code *pcVar20;
  long alStack_b0 [4];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar6 = 0;
  uStack_90 = param_2;
  lStack_78 = param_3;
  lStack_70 = param_1;
  FUN_100dd9480();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar19 = (undefined1 *)((long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar7 = 0;
  FUN_100dd8cfc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar15 = (long)puVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  func_0x000107c5ede0();
  lVar17 = *(long *)(lVar8 + -8);
  lVar16 = *(long *)(lVar17 + 0x40);
  lStack_80 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar15 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar18 - extraout_x12;
  lStack_68 = lVar12;
  func_0x0001000285a8(0x112d365a8,&UNK_10d900a40);
  func_0x000107c613fc();
  uVar9 = 1;
  func_0x00010008747c();
  lVar8 = unaff_x20 + _DAT_112d360f8;
  func_0x000100ddd0a0();
  if (lVar8 == 0) {
    *puVar19 = 0;
    func_0x000107c6159c(puVar19,lVar6,0);
    func_0x000100087c34(puVar19);
  }
  else {
    lStack_88 = lVar8;
    FUN_100ddcd84(lStack_70,lVar15,FUN_100dd8cfc);
    lVar10 = lVar15;
    func_0x000107c614c4(lVar15,lVar7);
    lVar5 = lStack_68;
    lVar7 = lStack_78;
    lVar8 = lStack_80;
    if ((uint)lVar10 < 4) {
      pcVar20 = *(code **)(lVar17 + 0x20);
      (*pcVar20)(lStack_68,lVar15,lStack_80);
      lVar6 = unaff_x20 + _DAT_112d36100;
      lStack_78 = *(undefined8 *)(lVar6 + 0x18);
      lVar7 = *(long *)(lVar6 + 0x20);
      func_0x0001000a8868();
      puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112d36110) + _DAT_1130524c0);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      lStack_70 = lVar6;
      (**(code **)(lVar17 + 0x10))(lVar18,lVar5,lVar8);
      uVar13 = (ulong)*(byte *)(lVar17 + 0x50);
      uVar14 = uVar13 + 0x18 & (uVar13 ^ 0xffffffffffffffff);
      puVar11 = &UNK_110352728;
      func_0x000107c613fc(&UNK_110352728,uVar14 + lVar16,uVar13 | 7);
      *(undefined8 *)(puVar11 + 0x10) = uVar9;
      (*pcVar20)(puVar11 + uVar14,lVar18,lVar8);
      pcVar20 = *(code **)(lVar7 + 8);
      func_0x000107c61434(uVar3);
      func_0x000107c61580(uVar9,2);
      *(long *)(lVar12 + -8) = lVar7;
      lVar6 = lStack_78;
      *(undefined8 *)(lVar12 + -0x18) = uVar9;
      *(long *)(lVar12 + -0x10) = lVar6;
      *(undefined8 *)(lVar12 + -0x20) = 0x100dddfb4;
      lVar6 = lStack_88;
      (*pcVar20)(uVar2,uVar3,lStack_88,0,0,0,FUN_100ddd534,puVar11);
      func_0x000107c6142c(uVar3);
      func_0x000107c61574(puVar11);
      func_0x000107c61574(uVar9);
      func_0x000107c61170(lVar6);
      (**(code **)(lVar17 + 8))(lStack_68,lVar8);
      return uVar9;
    }
    if (lStack_78 != 0) {
      lVar8 = unaff_x20 + _DAT_112d36100;
      uVar2 = *(undefined8 *)(lVar8 + 0x18);
      lVar6 = *(long *)(lVar8 + 0x20);
      func_0x0001000a8868(lVar8,uVar2);
      puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112d36110) + _DAT_1130524c0);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      pcVar20 = *(code **)(lVar6 + 8);
      func_0x000107c61434(uVar4);
      func_0x000107c61580(uVar9,2);
      func_0x000107c61434(lVar7);
      *(undefined8 *)(lVar12 + -0x10) = uVar2;
      *(long *)(lVar12 + -8) = lVar6;
      *(code **)(lVar12 + -0x20) = FUN_100ddd56c;
      *(undefined8 *)(lVar12 + -0x18) = uVar9;
      lVar8 = lStack_88;
      (*pcVar20)(uVar3,uVar4,lStack_88,uStack_90,lVar7,2,FUN_100ddd564,uVar9);
      func_0x000107c6142c(uVar4);
      func_0x000107c61578(uVar9,2);
      func_0x000107c6142c(lVar7);
      func_0x000107c61170(lVar8);
      return uVar9;
    }
    *puVar19 = 0;
    func_0x000107c6159c(puVar19,lVar6,0);
    func_0x000100087c34(puVar19);
    func_0x000107c61170(lStack_88);
  }
  FUN_100dda294(puVar19,FUN_100dd9480);
  return uVar9;
}



/* Entry: 100dd7fb8; end: 100dd8047;  */

void FUN_100dd7fb8(void)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  FUN_100dd9480();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  *puVar2 = 3;
  func_0x000107c6159c(puVar2);
  func_0x000100087c34(puVar2);
  FUN_100dda294(puVar2,FUN_100dd9480);
  return;
}



/* Entry: 100dd8048; end: 100dd80ff;  */

void FUN_100dd8048(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar1 = 0;
  FUN_100dd9480();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(puVar3,param_2,lVar2);
  func_0x000107c6159c(puVar3,lVar1,2);
  func_0x000100087c34(puVar3);
  FUN_100dda294(puVar3,FUN_100dd9480);
  return;
}



/* Entry: 100dd8100; end: 100dd818b;  */

void FUN_100dd8100(void)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  FUN_100dd9480();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  *puVar2 = 0;
  func_0x000107c6159c(puVar2);
  func_0x000100087c34(puVar2);
  FUN_100dda294(puVar2,FUN_100dd9480);
  return;
}



/* Entry: 100dd818c; end: 100dd842b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100dd818c(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar10;
  long unaff_x20;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_a0 [8];
  long lStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_68;
  
  lVar3 = 0x112d36578;
  func_0x0001000285a8(0x112d36578,&UNK_10d900a20);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_a0 + -extraout_x8;
  lVar4 = 0;
  FUN_100ddcdc8();
  lVar12 = *(long *)(lVar4 + -8);
  lVar3 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lStack_78 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100dd6b3c(_DAT_112d360f8);
  uVar11 = *(ulong *)(*(long *)(unaff_x20 + _DAT_112d36110) + _DAT_1130524b8);
  lStack_80 = lVar3;
  if (uVar11 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar11) {
      uVar13 = uVar11;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar11);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar13 != 0) {
    uVar14 = 0;
    uStack_88 = uVar11 & 0xc000000000000001;
    uStack_90 = uVar11 & 0xffffffffffffff8;
    lStack_98 = lVar4;
    do {
      if (uStack_88 == 0) {
        if (*(ulong *)(uStack_90 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100dd8414);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(uVar11 + uVar14 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar14;
        FUN_100de9c4c(uVar14,uVar11);
      }
      uVar1 = uVar14 + 1;
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100dd8410);
        (*pcVar2)();
      }
      uStack_68 = uVar5;
      FUN_100dd842c(puVar10,&uStack_68,lStack_80);
      func_0x000107c61170(uVar5);
      puVar6 = puVar10;
      (**(code **)(lVar12 + 0x30))(puVar10,1,lVar4);
      if ((int)puVar6 == 1) {
        func_0x000100ddd4b4(puVar10,0x112d36578,&UNK_10d900a20);
      }
      else {
        FUN_100ddd3d8(puVar10,lStack_78,FUN_100ddcdc8);
        puVar7 = puVar9;
        func_0x000107c61558();
        puVar8 = puVar9;
        if (((ulong)puVar7 & 1) == 0) {
          puVar8 = (undefined *)0x0;
          FUN_100dea04c(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
        }
        uVar5 = *(ulong *)(puVar8 + 0x10);
        puVar9 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar5) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          FUN_100dea04c(puVar9,uVar5 + 1,1,puVar8);
        }
        *(ulong *)(puVar9 + 0x10) = uVar5 + 1;
        FUN_100ddd3d8(lStack_78,
                      puVar9 + *(long *)(lVar12 + 0x48) * uVar5 +
                               ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff)),FUN_100ddcdc8
                     );
        lVar4 = lStack_98;
      }
      uVar14 = uVar14 + 1;
    } while (uVar1 != uVar13);
  }
  func_0x000107c6142c(uVar11);
  return puVar9;
}



/* Entry: 100dd842c; end: 100dd8a77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd842c(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x13;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_70;
  long *plStack_68;
  
  lVar7 = 0x112d36580;
  plStack_68 = param_1;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar11 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_70 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar11 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12_01;
  lVar2 = 0;
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar10 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar10 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar12 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lStack_70;
  lVar9 = lVar15 - extraout_x12_04;
  lVar5 = *param_2;
  if ((*(long *)(lVar5 + _DAT_1130524a8) <= param_3) &&
     (param_3 <= *(long *)(lVar5 + _DAT_1130524b0))) {
    lVar8 = *(long *)(lVar5 + _DAT_1130524a0);
    if (lVar8 < 2) {
      if (lVar8 == 0) {
        func_0x000100ddd46c(lVar5 + _DAT_113813098,lVar13,0x112d36580,&UNK_10d9016d0);
        lVar5 = lVar13;
        (**(code **)(extraout_x13 + 0x30))(lVar13,1,lVar2);
        lVar7 = lVar13;
        if ((int)lVar5 != 1) {
          (**(code **)(extraout_x13 + 0x20))(lVar15,lVar13,lVar2);
          lVar5 = 0;
          FUN_100ddcdc8();
          plVar3 = plStack_68;
          iVar1 = *(int *)(lVar5 + 0x18);
          (**(code **)(extraout_x13 + 0x10))((long)plStack_68 + (long)iVar1,lVar15,lVar2);
          lVar11 = 0;
          FUN_100dd8cfc();
          lVar7 = (long)plVar3 + (long)iVar1;
          func_0x000107c6159c(lVar7,lVar11,0);
          func_0x000100df237c();
          (**(code **)(extraout_x13 + 8))(lVar15,lVar2);
          *plVar3 = lVar7;
          plVar3[1] = lVar11;
          lVar7 = 0x154;
          goto LAB_100dd89bc;
        }
      }
      else {
        if (lVar8 != 1) goto LAB_100dd87e8;
        func_0x000100ddd46c(lVar5 + _DAT_113813098,lVar14,0x112d36580,&UNK_10d9016d0);
        lVar5 = lVar14;
        (**(code **)(extraout_x13 + 0x30))(lVar14,1,lVar2);
        lVar7 = lVar14;
        if ((int)lVar5 != 1) {
          (**(code **)(extraout_x13 + 0x20))(lVar9,lVar14,lVar2);
          lVar5 = 0;
          FUN_100ddcdc8();
          plVar3 = plStack_68;
          iVar1 = *(int *)(lVar5 + 0x18);
          (**(code **)(extraout_x13 + 0x10))((long)plStack_68 + (long)iVar1,lVar9,lVar2);
          lVar11 = 0;
          FUN_100dd8cfc();
          lVar7 = (long)plVar3 + (long)iVar1;
          func_0x000107c6159c(lVar7,lVar11,1);
          func_0x000100df2358();
          (**(code **)(extraout_x13 + 8))(lVar9,lVar2);
          *plVar3 = lVar7;
          plVar3[1] = lVar11;
          plVar3[2] = 0x2e4;
          pcVar6 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
          uVar4 = 0;
          goto LAB_100dd8808;
        }
      }
    }
    else if (lVar8 == 2) {
      func_0x000100ddd46c(lVar5 + _DAT_113813098,lVar11,0x112d36580,&UNK_10d9016d0);
      lVar5 = lVar11;
      (**(code **)(extraout_x13 + 0x30))(lVar11,1,lVar2);
      lVar7 = lVar11;
      if ((int)lVar5 != 1) {
        (**(code **)(extraout_x13 + 0x20))(lVar12,lVar11,lVar2);
        lVar5 = 0;
        FUN_100ddcdc8();
        plVar3 = plStack_68;
        iVar1 = *(int *)(lVar5 + 0x18);
        (**(code **)(extraout_x13 + 0x10))((long)plStack_68 + (long)iVar1,lVar12,lVar2);
        lVar11 = 0;
        FUN_100dd8cfc();
        lVar7 = (long)plVar3 + (long)iVar1;
        func_0x000107c6159c(lVar7,lVar11,2);
        func_0x000100df239c();
        (**(code **)(extraout_x13 + 8))(lVar12,lVar2);
        *plVar3 = lVar7;
        plVar3[1] = lVar11;
        lVar7 = 0x72;
LAB_100dd89bc:
        plVar3[2] = lVar7;
        pcVar6 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
LAB_100dd89cc:
        uVar4 = 0;
        goto LAB_100dd8808;
      }
    }
    else {
      if (lVar8 != 3) {
        if (lVar8 == 4) {
          lVar5 = 0;
          FUN_100ddcdc8();
          iVar1 = *(int *)(lVar5 + 0x18);
          lVar2 = 0;
          FUN_100dd8cfc();
          plVar3 = plStack_68;
          lVar7 = (long)plStack_68 + (long)iVar1;
          func_0x000107c6159c(lVar7,lVar2,4);
          FUN_100df23e0();
          *plVar3 = lVar7;
          plVar3[1] = lVar2;
          plVar3[2] = 0x1d4;
          pcVar6 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
          uVar4 = 0;
          goto LAB_100dd8808;
        }
        goto LAB_100dd87e8;
      }
      func_0x000100ddd46c(lVar5 + _DAT_113813098,lStack_70,0x112d36580,&UNK_10d9016d0);
      lVar5 = lVar7;
      (**(code **)(extraout_x13 + 0x30))(lVar7,1,lVar2);
      if ((int)lVar5 != 1) {
        (**(code **)(extraout_x13 + 0x20))(lVar10,lVar7,lVar2);
        lVar5 = 0;
        FUN_100ddcdc8();
        plVar3 = plStack_68;
        iVar1 = *(int *)(lVar5 + 0x18);
        (**(code **)(extraout_x13 + 0x10))((long)plStack_68 + (long)iVar1,lVar10,lVar2);
        lVar11 = 0;
        FUN_100dd8cfc();
        lVar7 = (long)plVar3 + (long)iVar1;
        func_0x000107c6159c(lVar7,lVar11,3);
        func_0x000100df23c0();
        (**(code **)(extraout_x13 + 8))(lVar10,lVar2);
        *plVar3 = lVar7;
        plVar3[1] = lVar11;
        plVar3[2] = 0x1ac;
        pcVar6 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
        goto LAB_100dd89cc;
      }
    }
    func_0x000100ddd4b4(lVar7,0x112d36580,&UNK_10d9016d0);
  }
LAB_100dd87e8:
  lVar5 = 0;
  FUN_100ddcdc8();
  pcVar6 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  uVar4 = 1;
  plVar3 = plStack_68;
LAB_100dd8808:
  (*pcVar6)(plVar3,uVar4,1,lVar5);
  return;
}



/* Entry: 100dd8a78; end: 100dd8b13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd8a78(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_112d360f8;
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x0001000834e4(unaff_x20 + _DAT_112d36100);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112d36108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112d36110));
  func_0x0001000834e4(unaff_x20 + _DAT_112d36118);
  func_0x000100ddd4b4(unaff_x20 + _DAT_112d36120,0x112d36368,&UNK_10d9008e0);
  return;
}



/* Entry: 100dd8b14; end: 100dd8be3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd8b14(long *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  func_0x000103dbf870();
  lVar1 = _DAT_112d360f8;
  lVar2 = 0;
  func_0x000107c5eea4();
  pcVar3 = *(code **)(*(long *)(lVar2 + -8) + 8);
  func_0x000107c6157c(param_1);
  (*pcVar3)((long)param_1 + lVar1,lVar2);
  func_0x0001000834e4((long)param_1 + _DAT_112d36100);
  func_0x000107c61574(*(undefined8 *)((long)param_1 + _DAT_112d36108));
  func_0x000107c61170(*(undefined8 *)((long)param_1 + _DAT_112d36110));
  func_0x0001000834e4((long)param_1 + _DAT_112d36118);
  func_0x000100ddd4b4((long)param_1 + _DAT_112d36120,0x112d36368,&UNK_10d9008e0);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)
            (param_1,*(undefined4 *)(*param_1 + 0x30),*(undefined2 *)(*param_1 + 0x34));
  return;
}



/* Entry: 100dd8be4; end: 100dd8bf7;  */

void FUN_100dd8be4(undefined8 param_1)

{
  if (lRam0000000112d36150 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e60e570);
  return;
}



/* Entry: 100dd8bf8; end: 100dd8cfb;  */

void FUN_100dd8bf8(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = &UNK_10d900820;
    puStack_40 = PTR___sBoWV_11034d678 + 0x40;
    puStack_38 = PTR___sBOWV_11034d658 + 0x40;
    puStack_30 = &UNK_10d900820;
    lVar1 = 0x13f;
    func_0x000100dd8ca8();
    if (param_2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      func_0x000107c61524(param_1,0x100,6,&lStack_50,param_1 + 0xd8);
    }
  }
  return;
}


