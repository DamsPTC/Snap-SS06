/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10740764c; end: 10740767b;  */

void FUN_10740764c(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((undefined8 *)0x27c45979c95204 < param_2) {
    func_0x000104bd35f4();
    func_0x00010740a658();
    lVar2 = param_2[1];
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    if (lVar2 != 0) {
      do {
        func_0x00010740a478();
      } while (extraout_w10 != 0);
    }
    _memcpy(unaff_x19 + 0x10,unaff_x20 + 0x10,0x50);
    FUN_1074077dc(unaff_x19 + 0x60,unaff_x20 + 0x60);
    FUN_1074077dc(unaff_x19 + 0x1a0,unaff_x20 + 0x1a0);
    FUN_107407974(unaff_x19 + 0x2e0,unaff_x20 + 0x2e0);
    FUN_107407974(unaff_x19 + 0x428,unaff_x20 + 0x428);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x578);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x570);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x588);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x580);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x590);
    *(undefined8 *)(unaff_x19 + 0x598) = *(undefined8 *)(unaff_x20 + 0x598);
    *(undefined8 *)(unaff_x19 + 0x590) = uVar7;
    *(undefined8 *)(unaff_x19 + 0x588) = uVar6;
    *(undefined8 *)(unaff_x19 + 0x580) = uVar5;
    *(undefined8 *)(unaff_x19 + 0x578) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x570) = uVar3;
    func_0x000107407a9c(unaff_x19 + 0x5a0,unaff_x20 + 0x5a0);
    func_0x000107278b70(unaff_x19 + 0x5b8,unaff_x20 + 0x5b8);
    uVar1 = *(undefined4 *)(unaff_x20 + 0x5c8);
    *(undefined1 *)(unaff_x19 + 0x5cc) = *(undefined1 *)(unaff_x20 + 0x5cc);
    *(undefined4 *)(unaff_x19 + 0x5c8) = uVar1;
    func_0x000107299490(unaff_x19 + 0x5d0,unaff_x20 + 0x5d0);
    _memcpy(unaff_x19 + 0x5e0,unaff_x20 + 0x5e0,0x7c);
    lVar2 = *(long *)(unaff_x20 + 0x668);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x660);
    *(undefined8 *)(unaff_x19 + 0x668) = *(undefined8 *)(unaff_x20 + 0x668);
    *(undefined8 *)(unaff_x19 + 0x660) = uVar3;
    if (lVar2 != 0) {
      do {
        func_0x00010740a478();
      } while (extraout_w10_00 != 0);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x670);
  return;
}



/* Entry: 10740767c; end: 1074077db;  */

void FUN_10740767c(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x00010740a658();
  lVar2 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010740a478();
    } while (extraout_w10 != 0);
  }
  _memcpy(unaff_x19 + 0x10,unaff_x20 + 0x10,0x50);
  FUN_1074077dc(unaff_x19 + 0x60,unaff_x20 + 0x60);
  FUN_1074077dc(unaff_x19 + 0x1a0,unaff_x20 + 0x1a0);
  FUN_107407974(unaff_x19 + 0x2e0,unaff_x20 + 0x2e0);
  FUN_107407974(unaff_x19 + 0x428,unaff_x20 + 0x428);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x578);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x570);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x588);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x580);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x590);
  *(undefined8 *)(unaff_x19 + 0x598) = *(undefined8 *)(unaff_x20 + 0x598);
  *(undefined8 *)(unaff_x19 + 0x590) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x588) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x580) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x578) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x570) = uVar3;
  func_0x000107407a9c(unaff_x19 + 0x5a0,unaff_x20 + 0x5a0);
  func_0x000107278b70(unaff_x19 + 0x5b8,unaff_x20 + 0x5b8);
  uVar1 = *(undefined4 *)(unaff_x20 + 0x5c8);
  *(undefined1 *)(unaff_x19 + 0x5cc) = *(undefined1 *)(unaff_x20 + 0x5cc);
  *(undefined4 *)(unaff_x19 + 0x5c8) = uVar1;
  func_0x000107299490(unaff_x19 + 0x5d0,unaff_x20 + 0x5d0);
  _memcpy(unaff_x19 + 0x5e0,unaff_x20 + 0x5e0,0x7c);
  lVar2 = *(long *)(unaff_x20 + 0x668);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x660);
  *(undefined8 *)(unaff_x19 + 0x668) = *(undefined8 *)(unaff_x20 + 0x668);
  *(undefined8 *)(unaff_x19 + 0x660) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010740a478();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1074077dc; end: 10740781b;  */

void FUN_1074077dc(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010740a658();
  FUN_10740781c();
  func_0x0001072ab860(param_1 + 0x18,unaff_x20 + 0x18);
  *(undefined1 *)(unaff_x19 + 0x138) = *(undefined1 *)(unaff_x20 + 0x138);
  return;
}



/* Entry: 10740781c; end: 107407853;  */

undefined8 * FUN_10740781c(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_107407854(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 5);
  return param_1;
}



/* Entry: 107407854; end: 1074078c7;  */

void FUN_107407854(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x00010740a658();
    FUN_1074078c8();
    lVar1 = *(long *)(unaff_x19 + 8);
    if (param_3 - unaff_x20 != 0) {
      func_0x00010740ad78();
      _memmove();
    }
    *(long *)(unaff_x19 + 8) = lVar1 + (param_3 - unaff_x20);
  }
  uStack_38 = 1;
  FUN_107407948(&uStack_40);
  return;
}



/* Entry: 1074078c8; end: 1074078ff;  */

void FUN_1074078c8(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3b == 0) {
    plVar1 = param_1 + 2;
    FUN_10740790c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 4);
    return;
  }
  FUN_107407900();
  func_0x00010740a430();
  FUN_10740792c();
  return;
}



/* Entry: 107407900; end: 10740790b;  */

void FUN_107407900(void)

{
  func_0x00010740a430();
  FUN_10740792c();
  return;
}



/* Entry: 10740790c; end: 10740792b;  */

void FUN_10740790c(void)

{
  FUN_10740792c();
  return;
}



/* Entry: 10740792c; end: 107407947;  */

long FUN_10740792c(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3b == 0) {
    lVar1 = param_2 << 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1073e79c0(param_1);
  }
  return param_1;
}



/* Entry: 107407948; end: 107407973;  */

long FUN_107407948(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1073e79c0(param_1);
  }
  return param_1;
}



/* Entry: 107407974; end: 1074079a7;  */

undefined1 * FUN_107407974(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x140] = 0;
  FUN_1074079a8();
  return param_1;
}



/* Entry: 1074079a8; end: 1074079bb;  */

void FUN_1074079a8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x140) == '\x01') {
    FUN_1074077dc();
    *(undefined1 *)(param_1 + 0x140) = 1;
    return;
  }
  return;
}



/* Entry: 1074079bc; end: 1074079d7;  */

void FUN_1074079bc(long param_1)

{
  FUN_1074077dc();
  *(undefined1 *)(param_1 + 0x140) = 1;
  return;
}



/* Entry: 1074079d8; end: 107407a07;  */

long FUN_1074079d8(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_107407a08(param_1);
  }
  return param_1;
}



/* Entry: 107407a08; end: 107407a27;  */

void FUN_107407a08(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x670;
    func_0x0001073e78f4();
  }
  return;
}



/* Entry: 107407a28; end: 107407ae3;  */

void FUN_107407a28(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x670;
    func_0x0001073e78f4();
  }
  return;
}



/* Entry: 107407ae4; end: 107407b67;  */

void FUN_107407ae4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *unaff_x20;
  
  uVar2 = param_3;
  func_0x00010002c968();
  puVar1 = unaff_x20;
  if (uVar2 < 0xb) {
    *(char *)((long)unaff_x20 + 0x17) = (char)param_3;
  }
  else {
    if (0x7ffffffffffffff6 < param_3) {
      FUN_107407b68();
      func_0x000104bd47e8(&UNK_10f4102e2);
      FUN_107407b9c();
      return;
    }
    uVar2 = 0xd;
    if ((param_3 | 3) != 0xb) {
      uVar2 = (param_3 | 3) + 1;
    }
    FUN_107407b7c();
    unaff_x20[1] = param_3;
    unaff_x20[2] = uVar2 | 0x8000000000000000;
    *unaff_x20 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(puVar1);
  return;
}



/* Entry: 107407b68; end: 107407b7b;  */

void FUN_107407b68(void)

{
  func_0x000104bd47e8(&UNK_10f4102e2);
  FUN_107407b9c();
  return;
}



/* Entry: 107407b7c; end: 107407b9b;  */

void FUN_107407b7c(void)

{
  FUN_107407b9c();
  return;
}



/* Entry: 107407b9c; end: 107407bbf;  */

void FUN_107407b9c(undefined8 param_1,long param_2)

{
  if (-1 < param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 1);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010740a430();
  FUN_107407be0();
  return;
}



/* Entry: 107407bc0; end: 107407bdf;  */

void FUN_107407bc0(void)

{
  FUN_107407be0();
  return;
}



/* Entry: 107407be0; end: 107407c0b;  */

long FUN_107407be0(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_107404cc4(param_1 + 0x1a0);
  FUN_1073bcebc(param_1 + 400);
  func_0x00010726b09c(param_1 + 0x140);
  func_0x00010726afc0(param_1 + 0x128);
  func_0x00010726b09c(param_1 + 0x110);
  func_0x0001072dbd40(param_1 + 0x100);
  func_0x00010726b09c(param_1 + 200);
  func_0x00010726b09c(param_1 + 0xa0);
  func_0x00010726b164(param_1 + 8);
  return param_1;
}



/* Entry: 107407c0c; end: 107407cab;  */

long FUN_107407c0c(long param_1)

{
  FUN_107404cc4(param_1 + 0x1a0);
  FUN_1073bcebc(param_1 + 400);
  func_0x00010726b09c(param_1 + 0x140);
  func_0x00010726afc0(param_1 + 0x128);
  func_0x00010726b09c(param_1 + 0x110);
  func_0x0001072dbd40(param_1 + 0x100);
  func_0x00010726b09c(param_1 + 200);
  func_0x00010726b09c(param_1 + 0xa0);
  func_0x00010726b164(param_1 + 8);
  return param_1;
}



/* Entry: 107407cac; end: 107407d2b;  */

undefined8 FUN_107407cac(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  func_0x00010740a658();
  FUN_107407d2c();
  func_0x00010740a7f4();
  FUN_107407d9c(auStack_48);
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[3];
  uVar2 = unaff_x20[2];
  puStack_38[1] = unaff_x20[1];
  *puStack_38 = uVar1;
  puStack_38[3] = uVar3;
  puStack_38[2] = uVar2;
  puStack_38 = puStack_38 + 4;
  func_0x00010740a820();
  FUN_107407d6c();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  FUN_107407e18(auStack_48);
  return uVar1;
}



/* Entry: 107407d2c; end: 107407d6b;  */

long * FUN_107407d2c(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 4);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x7ffffffffffffff;
    }
    return plVar1;
  }
  FUN_107407d90();
  func_0x00010740a43c();
  func_0x00010740a968();
  func_0x00010740a2a8();
  return param_1;
}



/* Entry: 107407d6c; end: 107407d8f;  */

void FUN_107407d6c(void)

{
  func_0x00010740a43c();
  func_0x00010740a968();
  func_0x00010740a2a8();
  return;
}



/* Entry: 107407d90; end: 107407d9b;  */

void FUN_107407d90(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x00010740a430();
  func_0x00010740a7b4();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107407ddc();
  }
  lVar1 = param_4 + unaff_x20 * 0x20;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x20;
  return;
}



/* Entry: 107407d9c; end: 107407dfb;  */

void FUN_107407d9c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x00010740a7b4();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107407ddc();
  }
  lVar1 = param_4 + unaff_x20 * 0x20;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x20;
  return;
}



/* Entry: 107407dfc; end: 107407e17;  */

long * FUN_107407dfc(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3b == 0) {
    plVar1 = (long *)(param_2 << 5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_107407e44();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107407e18; end: 107407e43;  */

long * FUN_107407e18(long *param_1)

{
  FUN_107407e44();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107407e44; end: 107407e67;  */

void FUN_107407e44(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x20;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107407e68; end: 107407e73;  */

undefined8
FUN_107407e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
             undefined8 param_5,undefined8 *param_6)

{
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  
  func_0x00010740a6b0();
  func_0x00010740b144();
  func_0x00010740ab38();
  uStack_a8 = param_6[1];
  uStack_b0 = *param_6;
  uStack_a0 = param_6[2];
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = 0;
  FUN_107407f3c(param_1,param_3,param_4 & 0xff,auStack_98,&uStack_b0,0,0);
  func_0x0001056d1ce4(&uStack_b0);
  func_0x000104c336c8(auStack_98);
  return param_1;
}



/* Entry: 107407e74; end: 107407f3b;  */

undefined8
FUN_107407e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 *param_6)

{
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  
  func_0x00010740b144();
  func_0x00010740ab38();
  uStack_98 = param_6[1];
  uStack_a0 = *param_6;
  uStack_90 = param_6[2];
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = 0;
  FUN_107407f3c(param_1,param_3,param_4,auStack_88,&uStack_a0,0,0);
  func_0x0001056d1ce4(&uStack_a0);
  func_0x000104c336c8(auStack_88);
  return param_1;
}



/* Entry: 107407f3c; end: 107407fb3;  */

void FUN_107407f3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 *param_11,undefined8 *param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  
  *param_8 = param_1;
  param_8[1] = param_2;
  param_8[2] = param_3;
  *(undefined8 *)(param_8 + 4) = param_9;
  param_8[6] = param_4;
  param_8[7] = param_5;
  param_8[8] = param_6;
  param_8[9] = param_7;
  *(undefined1 *)(param_8 + 10) = param_10;
  *(undefined8 *)(param_8 + 0xe) = 0;
  *(undefined8 *)(param_8 + 0x10) = 0;
  *(undefined8 *)(param_8 + 0xc) = 0;
  uVar1 = *param_11;
  *(undefined8 *)(param_8 + 0xe) = param_11[1];
  *(undefined8 *)(param_8 + 0xc) = uVar1;
  *(undefined8 *)(param_8 + 0x10) = param_11[2];
  *param_11 = 0;
  param_11[1] = 0;
  param_11[2] = 0;
  *(undefined8 *)(param_8 + 0x12) = 0;
  *(undefined8 *)(param_8 + 0x14) = 0;
  *(undefined8 *)(param_8 + 0x16) = 0;
  uVar1 = *param_12;
  *(undefined8 *)(param_8 + 0x14) = param_12[1];
  *(undefined8 *)(param_8 + 0x12) = uVar1;
  *(undefined8 *)(param_8 + 0x16) = param_12[2];
  *param_12 = 0;
  param_12[1] = 0;
  param_12[2] = 0;
  param_8[0x24] = 0;
  *(undefined8 *)(param_8 + 0x1a) = 0;
  *(undefined8 *)(param_8 + 0x1c) = 0;
  *(undefined8 *)(param_8 + 0x18) = 0;
  *(undefined1 *)(param_8 + 0x1e) = 0;
  *(undefined8 *)(param_8 + 0x20) = 0;
  *(undefined8 *)((long)param_8 + 0x86) = 0;
  *(undefined8 *)(param_8 + 0x26) = param_13;
  *(undefined8 *)(param_8 + 0x28) = param_14;
  return;
}



/* Entry: 107407fb4; end: 10740800b;  */

undefined8 * FUN_107407fb4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_2 < (undefined8 *)0x186186186186187) {
    uVar2 = (param_1[2] - *param_1) / 0xa8;
    puVar6 = (undefined8 *)(uVar2 * 2);
    if (puVar6 < param_2 || (long)puVar6 - (long)param_2 == 0) {
      puVar6 = param_2;
    }
    if (0xc30c30c30c30c2 < uVar2) {
      puVar6 = (undefined8 *)0x186186186186186;
    }
    return puVar6;
  }
  FUN_107408130();
  func_0x00010002c968();
  puVar3 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar7 = (undefined8 *)(param_2[1] + (((long)puVar1 - (long)puVar3) / -0xa8) * 0xa8);
  puVar4 = puVar7;
  for (puVar6 = puVar3; puVar6 != puVar1; puVar6 = puVar6 + 0x15) {
    uVar9 = puVar6[1];
    uVar8 = *puVar6;
    uVar11 = puVar6[3];
    uVar10 = puVar6[2];
    uVar12 = *(undefined8 *)((long)puVar6 + 0x19);
    *(undefined8 *)((long)puVar4 + 0x21) = *(undefined8 *)((long)puVar6 + 0x21);
    *(undefined8 *)((long)puVar4 + 0x19) = uVar12;
    puVar4[1] = uVar9;
    *puVar4 = uVar8;
    puVar4[3] = uVar11;
    puVar4[2] = uVar10;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[6] = 0;
    uVar8 = puVar6[6];
    puVar4[7] = puVar6[7];
    puVar4[6] = uVar8;
    puVar4[8] = puVar6[8];
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    uVar8 = puVar6[9];
    puVar4[10] = puVar6[10];
    puVar4[9] = uVar8;
    puVar4[0xb] = puVar6[0xb];
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    uVar8 = puVar6[0xc];
    puVar4[0xd] = puVar6[0xd];
    puVar4[0xc] = uVar8;
    puVar4[0xe] = puVar6[0xe];
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    uVar9 = puVar6[0x10];
    uVar8 = puVar6[0xf];
    uVar11 = puVar6[0x12];
    uVar10 = puVar6[0x11];
    uVar12 = *(undefined8 *)((long)puVar6 + 0x91);
    *(undefined8 *)((long)puVar4 + 0x99) = *(undefined8 *)((long)puVar6 + 0x99);
    *(undefined8 *)((long)puVar4 + 0x91) = uVar12;
    puVar4[0x12] = uVar11;
    puVar4[0x11] = uVar10;
    puVar4[0x10] = uVar9;
    puVar4[0xf] = uVar8;
    puVar4 = puVar4 + 0x15;
  }
  for (; puVar3 != puVar1; puVar3 = puVar3 + 0x15) {
    FUN_10740819c();
  }
  unaff_x19[1] = puVar7;
  lVar5 = *unaff_x20;
  *unaff_x20 = (long)puVar7;
  unaff_x20[1] = lVar5;
  unaff_x19[1] = lVar5;
  lVar5 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = lVar5;
  lVar5 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = lVar5;
  *unaff_x19 = unaff_x19[1];
  return puVar3;
}



/* Entry: 10740800c; end: 10740812f;  */

void FUN_10740800c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  func_0x00010002c968();
  puVar2 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)(*(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar2) / -0xa8) * 0xa8);
  puVar3 = puVar6;
  for (puVar5 = puVar2; puVar5 != puVar1; puVar5 = puVar5 + 0x15) {
    uVar8 = puVar5[1];
    uVar7 = *puVar5;
    uVar10 = puVar5[3];
    uVar9 = puVar5[2];
    uVar11 = *(undefined8 *)((long)puVar5 + 0x19);
    *(undefined8 *)((long)puVar3 + 0x21) = *(undefined8 *)((long)puVar5 + 0x21);
    *(undefined8 *)((long)puVar3 + 0x19) = uVar11;
    puVar3[1] = uVar8;
    *puVar3 = uVar7;
    puVar3[3] = uVar10;
    puVar3[2] = uVar9;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[6] = 0;
    uVar7 = puVar5[6];
    puVar3[7] = puVar5[7];
    puVar3[6] = uVar7;
    puVar3[8] = puVar5[8];
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    uVar7 = puVar5[9];
    puVar3[10] = puVar5[10];
    puVar3[9] = uVar7;
    puVar3[0xb] = puVar5[0xb];
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    uVar7 = puVar5[0xc];
    puVar3[0xd] = puVar5[0xd];
    puVar3[0xc] = uVar7;
    puVar3[0xe] = puVar5[0xe];
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    uVar8 = puVar5[0x10];
    uVar7 = puVar5[0xf];
    uVar10 = puVar5[0x12];
    uVar9 = puVar5[0x11];
    uVar11 = *(undefined8 *)((long)puVar5 + 0x91);
    *(undefined8 *)((long)puVar3 + 0x99) = *(undefined8 *)((long)puVar5 + 0x99);
    *(undefined8 *)((long)puVar3 + 0x91) = uVar11;
    puVar3[0x12] = uVar10;
    puVar3[0x11] = uVar9;
    puVar3[0x10] = uVar8;
    puVar3[0xf] = uVar7;
    puVar3 = puVar3 + 0x15;
  }
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0x15) {
    FUN_10740819c();
  }
  unaff_x19[1] = puVar6;
  lVar4 = *unaff_x20;
  *unaff_x20 = (long)puVar6;
  unaff_x20[1] = lVar4;
  unaff_x19[1] = lVar4;
  lVar4 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = lVar4;
  lVar4 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = lVar4;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 107408130; end: 10740813b;  */

long FUN_107408130(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong unaff_x20;
  
  func_0x00010740a430();
  func_0x00010740a658();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x186186186186186 < unaff_x20) {
      func_0x000104bd35f4();
      func_0x0001056d1ce4(param_1 + 0x60);
      func_0x0001056d1ce4(param_1 + 0x48);
      func_0x000104c336c8(param_1 + 0x30);
      return param_1;
    }
    lVar1 = unaff_x20 * 0xa8;
    __Znwm(lVar1);
  }
  func_0x00010740a794(0xa8);
  return lVar1;
}



/* Entry: 10740813c; end: 10740819b;  */

long FUN_10740813c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong unaff_x20;
  
  func_0x00010740a658();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x186186186186186 < unaff_x20) {
      func_0x000104bd35f4();
      func_0x0001056d1ce4(param_1 + 0x60);
      func_0x0001056d1ce4(param_1 + 0x48);
      func_0x000104c336c8(param_1 + 0x30);
      return param_1;
    }
    lVar1 = unaff_x20 * 0xa8;
    __Znwm(lVar1);
  }
  func_0x00010740a794(0xa8);
  return lVar1;
}



/* Entry: 10740819c; end: 107408213;  */

long FUN_10740819c(long param_1)

{
  func_0x0001056d1ce4(param_1 + 0x60);
  func_0x0001056d1ce4(param_1 + 0x48);
  func_0x000104c336c8(param_1 + 0x30);
  return param_1;
}



/* Entry: 107408214; end: 107408233;  */

void FUN_107408214(long param_1)

{
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    func_0x0001073df894();
  }
  return;
}



/* Entry: 107408234; end: 1074082bf;  */

void FUN_107408234(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  
  func_0x00010729604c(param_2);
  plVar4 = (long *)*param_2;
  plVar1 = plVar4;
  puVar3 = param_3;
  FUN_1074082c0();
  if (((ulong)puVar3 & 1) != 0) {
    lVar2 = plVar4[1] + (long)plVar1 * 0xa8;
    func_0x000100060964(lVar2,*param_3);
    uVar5 = *param_4;
    *(undefined8 *)(lVar2 + 0x48) = param_4[1];
    *(undefined8 *)(lVar2 + 0x40) = uVar5;
    *(undefined4 *)(lVar2 + 0xa0) = 4;
  }
  lVar2 = plVar4[1];
  *param_1 = *plVar4 + (long)plVar1;
  param_1[1] = lVar2 + (long)plVar1 * 0xa8;
  *(char *)(param_1 + 2) = (char)puVar3;
  return;
}



/* Entry: 1074082c0; end: 1074083cf;  */

undefined1  [16] FUN_1074082c0(undefined8 *param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *unaff_x19;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  uint6 uVar10;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  undefined8 uVar11;
  byte bVar17;
  undefined1 auVar18 [16];
  
  func_0x00010740a658();
  Hint_Prefetch(*param_1,0,2,0);
  func_0x0001072cb490(*param_1);
  lVar5 = 0;
  uVar6 = *unaff_x19;
  uVar7 = unaff_x19[2];
  uVar4 = uVar6 >> 0xc ^ (ulong)param_1 >> 7;
  bVar2 = (byte)param_1;
  uVar10 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar4 = uVar4 & uVar7;
    uVar11 = *(undefined8 *)(uVar6 + uVar4);
    cVar12 = (char)((ulong)uVar11 >> 8);
    cVar13 = (char)((ulong)uVar11 >> 0x10);
    cVar14 = (char)((ulong)uVar11 >> 0x18);
    cVar15 = (char)((ulong)uVar11 >> 0x20);
    cVar16 = (char)((ulong)uVar11 >> 0x28);
    bVar9 = (byte)((ulong)uVar11 >> 0x30);
    bVar17 = (byte)((ulong)uVar11 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar17 == (bVar2 & 0x7f)),
                          CONCAT16(-(bVar9 == (bVar2 & 0x7f)),
                                   CONCAT15(-(cVar16 == (char)(uVar10 >> 0x28)),
                                            CONCAT14(-(cVar15 == (char)(uVar10 >> 0x20)),
                                                     CONCAT13(-(cVar14 == (char)(uVar10 >> 0x18)),
                                                              CONCAT12(-(cVar13 ==
                                                                        (char)(uVar10 >> 0x10)),
                                                                       CONCAT11(-(cVar12 ==
                                                                                 (char)(uVar10 >> 8)
                                                                                 ),-((char)uVar11 ==
                                                                                    (char)uVar10))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar1 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      param_1 = (undefined8 *)(uVar4 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar7)
      ;
      puVar3 = (undefined8 *)&stack0xffffffffffffff70;
      FUN_1074083d0(&stack0xffffffffffffff70,unaff_x19[1] + (long)param_1 * 0xa8);
      if (((ulong)puVar3 & 1) != 0) {
        uVar11 = 0;
        goto LAB_107408390;
      }
      param_1 = puVar3;
    }
    bVar9 = NEON_umaxv(CONCAT17(-(bVar17 == 0x80),
                                CONCAT16(-(bVar9 == 0x80),
                                         CONCAT15(-(cVar16 == -0x80),
                                                  CONCAT14(-(cVar15 == -0x80),
                                                           CONCAT13(-(cVar14 == -0x80),
                                                                    CONCAT12(-(cVar13 == -0x80),
                                                                             CONCAT11(-(cVar12 ==
                                                                                       -0x80),-((
                                                  char)uVar11 == -0x80)))))))),1);
    if ((bVar9 & 1) != 0) break;
    lVar5 = lVar5 + 8;
    uVar4 = lVar5 + uVar4;
  }
  func_0x00010740addc();
  func_0x00010726ca78();
  uVar11 = 1;
LAB_107408390:
  auVar18._8_8_ = uVar11;
  auVar18._0_8_ = param_1;
  return auVar18;
}



/* Entry: 1074083d0; end: 1074083eb;  */

bool FUN_1074083d0(undefined8 *param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010727a3f0(param_2,*(undefined8 *)*param_1,param_2 + 0x38);
  _strlen();
  func_0x00010014c53c();
  func_0x00010014c2bc();
  func_0x000104c2fcd4();
  func_0x000104c2fcf0();
  iVar1 = (int)&stack0xffffffffffffffe0;
  if (unaff_x21 == unaff_x19) {
    func_0x000100067218(&stack0xffffffffffffffe0,unaff_x20,unaff_x19);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 1074083ec; end: 107408427;  */

/* WARNING: Possible PIC construction at 0x000107408418: Changing call to branch */

long * FUN_1074083ec(long *param_1,ulong param_2,undefined8 param_3,uint param_4,undefined8 param_5,
                    undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  
  if ((ulong)((param_1[1] - *param_1) / 0xa8) <= param_2) {
    func_0x00010740a6b0();
    func_0x00010740b144();
    func_0x00010740ab38();
    uStack_c8 = param_6[1];
    uStack_d0 = *param_6;
    uStack_c0 = param_6[2];
    param_6[1] = 0;
    param_6[2] = 0;
    *param_6 = 0;
    FUN_107407f3c(param_1,param_3,param_4 & 0xff,auStack_b8,&uStack_d0,*param_7,param_7[1]);
    func_0x0001056d1ce4(&uStack_d0);
    func_0x000104c336c8(auStack_b8);
    return param_1;
  }
  return (long *)(*param_1 + param_2 * 0xa8);
}



/* Entry: 107408428; end: 1074084f7;  */

undefined8
FUN_107408428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  
  func_0x00010740b144();
  func_0x00010740ab38();
  uStack_a8 = param_6[1];
  uStack_b0 = *param_6;
  uStack_a0 = param_6[2];
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = 0;
  FUN_107407f3c(param_1,param_3,param_4,auStack_98,&uStack_b0,*param_7,param_7[1]);
  func_0x0001056d1ce4(&uStack_b0);
  func_0x000104c336c8(auStack_98);
  return param_1;
}



/* Entry: 1074084f8; end: 10740853f;  */

long * FUN_1074084f8(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x666666666666667) {
    uVar1 = (param_1[2] - *param_1) / 0x28;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x333333333333332 < uVar1) {
      plVar2 = (long *)0x666666666666666;
    }
    return plVar2;
  }
  FUN_107408570();
  func_0x00010740a43c();
  func_0x00010740aa68();
  func_0x00010740a2a8();
  return param_1;
}



/* Entry: 107408540; end: 10740856f;  */

void FUN_107408540(void)

{
  func_0x00010740a43c();
  func_0x00010740aa68();
  func_0x00010740a2a8();
  return;
}



/* Entry: 107408570; end: 10740857b;  */

void FUN_107408570(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010740a430();
  func_0x00010740a7b4();
  if (param_2 != 0) {
    func_0x0001074085b0(param_4);
  }
  func_0x00010740af4c(0x28);
  return;
}



/* Entry: 10740857c; end: 1074085cf;  */

void FUN_10740857c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010740a7b4();
  if (param_2 != 0) {
    func_0x0001074085b0(param_4);
  }
  func_0x00010740af4c(0x28);
  return;
}



/* Entry: 1074085d0; end: 1074085fb;  */

long * FUN_1074085d0(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0x666666666666667) {
    plVar1 = (long *)(param_2 * 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_107408628();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1074085fc; end: 107408627;  */

long * FUN_1074085fc(long *param_1)

{
  FUN_107408628();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107408628; end: 10740864b;  */

void FUN_107408628(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x28;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10740864c; end: 107408693;  */

undefined8 * FUN_10740864c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  
  func_0x00010740ae48();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_107408908();
  }
  else {
    uVar2 = *param_3;
    *extraout_x8 = *param_2;
    extraout_x8[1] = uVar2;
    extraout_x8[2] = 0;
    extraout_x8[3] = 0;
    *(undefined4 *)(extraout_x8 + 4) = 0;
    puVar1 = extraout_x8 + 5;
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -5;
}



/* Entry: 107408694; end: 1074086bb;  */

long FUN_107408694(long param_1)

{
  return *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 1;
}



/* Entry: 1074086bc; end: 107408707;  */

void FUN_1074086bc(void)

{
  func_0x00010740afc4();
  func_0x00010740b05c();
  func_0x00010740af70(&UNK_11099ed30);
  return;
}



/* Entry: 107408708; end: 107408733;  */

void FUN_107408708(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107408734; end: 10740874f;  */

void FUN_107408734(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_107408750(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107408750; end: 107408813;  */

long FUN_107408750(void)

{
  long unaff_x19;
  
  func_0x00010740afa0();
  func_0x00010730b05c(unaff_x19 + 0xd8);
  func_0x0001074087c0(unaff_x19 + 0xb8);
  func_0x00010730b13c(unaff_x19 + 0x80);
  func_0x00010730b13c(unaff_x19 + 0x48);
  FUN_1073eb118(unaff_x19 + 0x30);
  func_0x0001074087f0(unaff_x19 + 0x18);
  func_0x00010740a5ac();
  FUN_107408708();
  return unaff_x19;
}



/* Entry: 107408814; end: 107408827;  */

void FUN_107408814(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107408828; end: 10740886f;  */

void FUN_107408828(void)

{
  func_0x00010740ac8c();
  func_0x00010740871c();
  return;
}



/* Entry: 107408870; end: 1074088a3;  */

long FUN_107408870(long param_1)

{
  return *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
}



/* Entry: 1074088a4; end: 1074088bf;  */

void FUN_1074088a4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1074088c0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074088c0; end: 107408907;  */

long FUN_1074088c0(void)

{
  long unaff_x19;
  
  func_0x00010740afa0();
  func_0x00010730b05c(unaff_x19 + 0xd8);
  func_0x0001074087c0(unaff_x19 + 0xb8);
  func_0x00010730b13c(unaff_x19 + 0x80);
  func_0x00010730b13c(unaff_x19 + 0x48);
  FUN_1073eb118(unaff_x19 + 0x30);
  func_0x0001074087f0(unaff_x19 + 0x18);
  func_0x00010740a5ac();
  FUN_107408708();
  return unaff_x19;
}



/* Entry: 107408908; end: 1074089ab;  */

undefined8 FUN_107408908(long param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x00010740aafc();
  FUN_1074084f8();
  func_0x00010740a7f4();
  FUN_10740857c(auStack_58);
  uVar1 = *unaff_x20;
  *puStack_48 = *unaff_x21;
  puStack_48[1] = uVar1;
  puStack_48[2] = 0;
  puStack_48[3] = 0;
  *(undefined4 *)(puStack_48 + 4) = 0;
  puStack_48 = puStack_48 + 5;
  func_0x00010740a820();
  FUN_107408540();
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_1074085fc(auStack_58);
  return uVar1;
}



/* Entry: 1074089ac; end: 107408a97;  */

void FUN_1074089ac(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  ulong extraout_x8;
  long extraout_x8_00;
  ulong extraout_x10;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_a8 [16];
  long lStack_98;
  long lStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    uVar10 = param_2[1];
    uVar9 = *param_2;
    puVar8[2] = param_2[2];
    puVar8[1] = uVar10;
    *puVar8 = uVar9;
    puVar8 = puVar8 + 3;
LAB_107408a84:
    param_1[1] = (long)puVar8;
    return;
  }
  lVar6 = *param_1;
  lVar7 = (long)puVar8 - lVar6;
  uVar1 = lVar7 / 0x18 + 1;
  uVar3 = 0xaaaaaaaaaaaaaa9 < uVar1;
  plVar5 = param_1;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    func_0x00010740a988();
    func_0x00010740ae68();
    uVar1 = extraout_x10;
    if ((bool)uVar3) {
      uVar1 = extraout_x8;
    }
    if (uVar1 <= extraout_x8) {
      lVar4 = uVar1 * 0x18;
      __Znwm();
      puVar2 = (undefined8 *)(lVar4 + lVar7);
      uVar9 = *param_2;
      puVar2[1] = param_2[1];
      *puVar2 = uVar9;
      puVar2[2] = param_2[2];
      puVar8 = puVar2 + 3;
      _memcpy(puVar2 + (lVar7 / -0x18) * 3,lVar6,lVar7);
      *param_1 = (long)(puVar2 + (lVar7 / -0x18) * 3);
      param_1[1] = (long)puVar8;
      param_1[2] = lVar4 + uVar1 * 0x18;
      if (lVar6 != 0) {
        func_0x00010740b0fc();
      }
      goto LAB_107408a84;
    }
  }
  else {
    FUN_107408a98();
  }
  func_0x000104bd35f4();
  pcStack_48 = FUN_107408a98;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010740a430();
  pcStack_58 = FUN_107408aa4;
  lStack_80 = lVar7;
  puStack_78 = param_2;
  lStack_70 = lVar6;
  plStack_68 = param_1;
  puStack_60 = (undefined1 *)&puStack_50;
  func_0x00010740a658();
  if ((ulong)plVar5[1] < (ulong)plVar5[2]) {
    func_0x00010740b118();
    lVar6 = extraout_x8_00 + 0xc;
  }
  else {
    FUN_107408b4c(param_1,(plVar5[1] - *param_1) / 0xc + 1);
    func_0x00010740a7f4();
    FUN_107408bd0(auStack_a8);
    func_0x00010740b118(lStack_98);
    lStack_98 = lStack_98 + 0xc;
    func_0x00010740a820();
    FUN_107408b94();
    lVar6 = param_1[1];
    FUN_107408c50(auStack_a8);
  }
  param_1[1] = lVar6;
  return;
}



/* Entry: 107408a98; end: 107408aa3;  */

void FUN_107408a98(long param_1)

{
  long extraout_x8;
  long unaff_x19;
  long lVar1;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  func_0x00010740a430();
  func_0x00010740a658();
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    func_0x00010740b118();
    lVar1 = extraout_x8 + 0xc;
  }
  else {
    FUN_107408b4c();
    func_0x00010740a7f4();
    FUN_107408bd0(auStack_68);
    func_0x00010740b118(lStack_58);
    lStack_58 = lStack_58 + 0xc;
    func_0x00010740a820();
    FUN_107408b94();
    lVar1 = *(long *)(unaff_x19 + 8);
    FUN_107408c50(auStack_68);
  }
  *(long *)(unaff_x19 + 8) = lVar1;
  return;
}



/* Entry: 107408aa4; end: 107408b4b;  */

void FUN_107408aa4(long param_1)

{
  long extraout_x8;
  long unaff_x19;
  long lVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010740a658();
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    func_0x00010740b118();
    lVar1 = extraout_x8 + 0xc;
  }
  else {
    FUN_107408b4c();
    func_0x00010740a7f4();
    FUN_107408bd0(auStack_58);
    func_0x00010740b118(lStack_48);
    lStack_48 = lStack_48 + 0xc;
    func_0x00010740a820();
    FUN_107408b94();
    lVar1 = *(long *)(unaff_x19 + 8);
    FUN_107408c50(auStack_58);
  }
  *(long *)(unaff_x19 + 8) = lVar1;
  return;
}



/* Entry: 107408b4c; end: 107408b93;  */

long * FUN_107408b4c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x1555555555555556) {
    uVar1 = (param_1[2] - *param_1) / 0xc;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0xaaaaaaaaaaaaaa9 < uVar1) {
      plVar2 = (long *)0x1555555555555555;
    }
    return plVar2;
  }
  FUN_107408bc4();
  func_0x00010740a43c();
  func_0x00010740aa68();
  func_0x00010740a2a8();
  return param_1;
}



/* Entry: 107408b94; end: 107408bc3;  */

void FUN_107408b94(void)

{
  func_0x00010740a43c();
  func_0x00010740aa68();
  func_0x00010740a2a8();
  return;
}



/* Entry: 107408bc4; end: 107408bcf;  */

void FUN_107408bc4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010740a430();
  func_0x00010740a7b4();
  if (param_2 != 0) {
    func_0x000107408c04(param_4);
  }
  func_0x00010740af4c(0xc);
  return;
}



/* Entry: 107408bd0; end: 107408c23;  */

void FUN_107408bd0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010740a7b4();
  if (param_2 != 0) {
    func_0x000107408c04(param_4);
  }
  func_0x00010740af4c(0xc);
  return;
}



/* Entry: 107408c24; end: 107408c4f;  */

long * FUN_107408c24(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0x1555555555555556) {
    plVar1 = (long *)(param_2 * 0xc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_107408c7c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107408c50; end: 107408c7b;  */

long * FUN_107408c50(long *param_1)

{
  FUN_107408c7c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107408c7c; end: 107408c9f;  */

void FUN_107408c7c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0xc;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107408ca0; end: 107408d77;  */

void FUN_107408ca0(void)

{
  func_0x00010002c93c();
  func_0x000107408cc0();
  return;
}



/* Entry: 107408d78; end: 107408fcb;  */

void FUN_107408d78(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4,
                  long param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long extraout_x9;
  long extraout_x9_00;
  long lVar8;
  undefined8 *puVar9;
  long extraout_x10;
  long extraout_x10_00;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *extraout_x11;
  undefined8 *extraout_x11_00;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  ulong uVar23;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  
  if (1 < param_3) {
    if (param_3 == 2) {
      if (*(float *)(param_2 + -1) < *(float *)(param_1 + 1)) {
        uVar16 = *param_1;
        uStack_58 = (undefined5)param_1[1];
        uStack_5b = (undefined3)((ulong)uVar16 >> 0x28);
        uVar2 = *(undefined8 *)((long)param_2 + -0xb);
        *param_1 = param_2[-2];
        *(undefined8 *)((long)param_1 + 5) = uVar2;
        *(ulong *)((long)param_2 + -0xb) = CONCAT53(uStack_58,uStack_5b);
        param_2[-2] = uVar16;
      }
    }
    else if ((long)param_3 < 0x81) {
      if (param_1 != param_2) {
        lVar3 = 0;
        puVar6 = param_1;
        while (puVar6 + 2 != param_2) {
          fVar22 = *(float *)(puVar6 + 3);
          if (fVar22 < *(float *)(puVar6 + 1)) {
            uVar2 = puVar6[2];
            uVar1 = *(undefined4 *)((long)puVar6 + 0x1c);
            lVar20 = lVar3;
            do {
              lVar17 = lVar20;
              puVar11 = (undefined8 *)((long)param_1 + lVar17);
              puVar11[2] = *puVar11;
              *(undefined8 *)((long)puVar11 + 0x15) = *(undefined8 *)((long)puVar11 + 5);
              puVar4 = param_1;
              if (lVar17 == 0) goto LAB_107408e7c;
              lVar20 = lVar17 + -0x10;
            } while (fVar22 < *(float *)(puVar11 + -1));
            puVar4 = (undefined8 *)((long)param_1 + lVar17);
LAB_107408e7c:
            *puVar4 = uVar2;
            *(float *)(puVar4 + 1) = fVar22;
            *(char *)((long)puVar4 + 0xc) = (char)uVar1;
          }
          lVar3 = lVar3 + 0x10;
          puVar6 = puVar6 + 2;
        }
      }
    }
    else {
      uVar19 = param_3 >> 1;
      puVar6 = param_1 + uVar19 * 2;
      lVar3 = param_3 - (param_3 >> 1);
      if (param_5 < (long)param_3) {
        FUN_107408d78();
        FUN_107408d78(puVar6,param_2,lVar3,param_4,param_5);
        do {
          lVar20 = lVar3;
          if (lVar3 == 0) {
            return;
          }
          while( true ) {
            if (lVar20 <= param_5 || (long)uVar19 <= param_5) {
              if ((long)uVar19 <= lVar20) {
                lVar3 = 3 - (long)param_4;
                puVar11 = param_4;
                for (puVar4 = param_1; puVar4 != puVar6; puVar4 = puVar4 + 2) {
                  uVar2 = *puVar4;
                  puVar11[1] = puVar4[1];
                  *puVar11 = uVar2;
                  lVar3 = lVar3 + -0x10;
                  puVar11 = puVar11 + 2;
                }
                while( true ) {
                  if (puVar11 == param_4) {
                    return;
                  }
                  if (puVar6 == param_2) break;
                  if (*(float *)(param_4 + 1) <= *(float *)(puVar6 + 1)) {
                    uVar2 = *param_4;
                    *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_4 + 5);
                    *param_1 = uVar2;
                    param_4 = param_4 + 2;
                  }
                  else {
                    uVar2 = *puVar6;
                    *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)puVar6 + 5);
                    *param_1 = uVar2;
                    puVar6 = puVar6 + 2;
                  }
                  param_1 = param_1 + 2;
                }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR__memmove_11034c660)(param_1,param_4,-((long)param_4 + lVar3));
                return;
              }
              lVar3 = 0;
              while( true ) {
                puVar11 = (undefined8 *)((long)puVar6 + lVar3);
                puVar4 = (undefined8 *)((long)param_4 + lVar3);
                if (puVar11 == param_2) break;
                uVar2 = *puVar11;
                puVar4[1] = puVar11[1];
                *puVar4 = uVar2;
                lVar3 = lVar3 + 0x10;
              }
              while( true ) {
                puVar11 = param_2 + -2;
                if (puVar4 == param_4) {
                  return;
                }
                if (puVar6 == param_1) break;
                puVar9 = puVar4 + -2;
                puVar14 = puVar6 + -2;
                puVar18 = puVar6 + -2;
                if (*(float *)(puVar6 + -1) <= *(float *)(puVar4 + -1)) {
                  puVar4 = puVar9;
                  puVar14 = puVar6;
                  puVar18 = puVar9;
                }
                puVar6 = puVar14;
                uVar2 = *puVar18;
                *(undefined8 *)((long)param_2 + -0xb) = *(undefined8 *)((long)puVar18 + 5);
                *puVar11 = uVar2;
                param_2 = puVar11;
              }
              while (puVar4 != param_4) {
                uVar2 = puVar4[-2];
                *(undefined8 *)((long)puVar11 + 5) = *(undefined8 *)((long)puVar4 + -0xb);
                *puVar11 = uVar2;
                puVar4 = puVar4 + -2;
                puVar11 = puVar11 + -2;
              }
              return;
            }
            lVar17 = 0;
            lVar21 = -uVar19;
            while( true ) {
              if (lVar21 == 0) {
                return;
              }
              puVar11 = (undefined8 *)((long)param_1 + lVar17);
              fVar22 = *(float *)(puVar11 + 1);
              if (*(float *)(puVar6 + 1) < fVar22) break;
              lVar17 = lVar17 + 0x10;
              lVar21 = lVar21 + 1;
            }
            puVar4 = puVar6;
            if (-lVar21 < lVar20) {
              lVar3 = lVar20 / 2;
              lVar13 = lVar3 * 2;
              lVar7 = (long)puVar6 + (-lVar17 - (long)param_1) >> 4;
              uVar19 = (ulong)*(uint *)(puVar6 + lVar13 + 1);
              puVar18 = puVar11;
              while (lVar7 != 0) {
                func_0x00010740b1b0();
                puVar4 = extraout_x8;
                lVar7 = extraout_x10;
                if (fVar22 <= (float)uVar19) {
                  puVar18 = extraout_x11;
                  lVar7 = extraout_x9;
                }
              }
              uVar19 = (long)puVar18 + (-lVar17 - (long)param_1) >> 4;
              puVar6 = puVar6 + lVar13;
            }
            else {
              if (lVar21 == -1) {
                param_1 = (undefined8 *)((long)param_1 + lVar17);
                uVar16 = *param_1;
                uStack_68 = (undefined5)param_1[1];
                uStack_6b = (undefined3)((ulong)uVar16 >> 0x28);
                uVar2 = *puVar6;
                *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)puVar6 + 5);
                *param_1 = uVar2;
                *(ulong *)((long)puVar6 + 5) = CONCAT53(uStack_68,uStack_6b);
                *puVar6 = uVar16;
                return;
              }
              uVar19 = -lVar21 / 2;
              puVar18 = (undefined8 *)((long)param_1 + lVar17 + uVar19 * 0x10);
              lVar3 = (long)param_2 - (long)puVar6 >> 4;
              uVar23 = (ulong)*(uint *)(puVar18 + 1);
              puVar14 = puVar6;
              while (puVar6 = puVar14, lVar3 != 0) {
                func_0x00010740b1b0();
                puVar14 = extraout_x11_00;
                puVar4 = extraout_x8_00;
                lVar3 = extraout_x9_00;
                if ((float)uVar23 <= fVar22) {
                  puVar14 = puVar6;
                  lVar3 = extraout_x10_00;
                }
              }
              lVar3 = (long)puVar6 - (long)puVar4 >> 4;
            }
            puVar14 = puVar6;
            if ((puVar18 != puVar4) && (puVar14 = puVar18, puVar4 != puVar6)) {
              if (puVar18 + 2 == puVar4) {
                uVar2 = *puVar18;
                uStack_68 = (undefined5)puVar18[1];
                uStack_6b = (undefined3)((ulong)uVar2 >> 0x28);
                _memmove(puVar18,puVar18 + 2,((long)puVar6 - (long)puVar4) + -3);
                puVar14 = (undefined8 *)((long)puVar18 + ((long)puVar6 - (long)puVar4));
                *puVar14 = uVar2;
                *(ulong *)((long)puVar14 + 5) = CONCAT53(uStack_68,uStack_6b);
              }
              else if (puVar4 + 2 == puVar6) {
                uVar2 = puVar6[-2];
                uStack_68 = (undefined5)puVar6[-1];
                uStack_6b = (undefined3)((ulong)uVar2 >> 0x28);
                lVar7 = (long)puVar6 + (-0x10 - (long)puVar18);
                if (lVar7 != 0) {
                  _memmove((undefined8 *)-(-0x10 - (long)puVar18),puVar18,lVar7 + -3);
                }
                *(ulong *)((long)puVar18 + 5) = CONCAT53(uStack_68,uStack_6b);
                *puVar18 = uVar2;
                puVar14 = (undefined8 *)-(-0x10 - (long)puVar18);
              }
              else {
                lVar8 = (long)puVar4 - (long)puVar18;
                lVar12 = lVar8 >> 4;
                lVar7 = (long)puVar6 - (long)puVar4 >> 4;
                puVar9 = puVar4;
                puVar10 = puVar18;
                lVar13 = lVar12;
                if (lVar12 == lVar7) {
                  for (; puVar14 = puVar4, puVar10 != puVar4 && puVar9 != puVar6;
                      puVar10 = puVar10 + 2) {
                    uVar16 = *puVar10;
                    uStack_68 = (undefined5)puVar10[1];
                    uStack_6b = (undefined3)((ulong)uVar16 >> 0x28);
                    uVar2 = *puVar9;
                    *(undefined8 *)((long)puVar10 + 5) = *(undefined8 *)((long)puVar9 + 5);
                    *puVar10 = uVar2;
                    *(ulong *)((long)puVar9 + 5) = CONCAT53(uStack_68,uStack_6b);
                    *puVar9 = uVar16;
                    puVar9 = puVar9 + 2;
                  }
                }
                else {
                  do {
                    lVar5 = lVar7;
                    lVar7 = 0;
                    if (lVar5 != 0) {
                      lVar7 = lVar13 / lVar5;
                    }
                    lVar7 = lVar13 - lVar7 * lVar5;
                    lVar13 = lVar5;
                  } while (lVar7 != 0);
                  puVar14 = puVar18 + lVar5 * 2;
                  while (puVar14 != puVar18) {
                    puVar10 = puVar14 + -2;
                    uVar2 = puVar14[-2];
                    uStack_68 = (undefined5)puVar14[-1];
                    uStack_6b = (undefined3)((ulong)uVar2 >> 0x28);
                    puVar9 = puVar10;
                    puVar14 = (undefined8 *)(lVar8 + (long)puVar10);
                    do {
                      puVar15 = puVar14;
                      uVar16 = *puVar15;
                      *(undefined8 *)((long)puVar9 + 5) = *(undefined8 *)((long)puVar15 + 5);
                      *puVar9 = uVar16;
                      lVar7 = (long)puVar6 - (long)puVar15 >> 4;
                      puVar14 = (undefined8 *)((long)puVar15 + lVar8);
                      if (lVar7 <= lVar12) {
                        puVar14 = puVar18 + (lVar12 - lVar7) * 2;
                      }
                      puVar9 = puVar15;
                    } while (puVar14 != puVar10);
                    *(ulong *)((long)puVar15 + 5) = CONCAT53(uStack_68,uStack_6b);
                    *puVar15 = uVar2;
                    puVar14 = puVar10;
                  }
                  puVar14 = (undefined8 *)(((long)puVar6 - (long)puVar4) + (long)puVar18);
                }
              }
            }
            lVar7 = lVar20 - lVar3;
            if ((long)((lVar20 - (uVar19 + lVar3)) - lVar21) <= (long)(uVar19 + lVar3)) break;
            uVar19 = -(uVar19 + lVar21);
            FUN_1074091b0(puVar11,puVar18,puVar14);
            param_1 = puVar14;
            lVar20 = lVar7;
            if (lVar7 == 0) {
              return;
            }
          }
          FUN_1074091b0(puVar14,puVar6,param_2,-(uVar19 + lVar21),lVar7);
          param_1 = (undefined8 *)((long)param_1 + lVar17);
          param_2 = puVar14;
          puVar6 = puVar18;
        } while( true );
      }
      FUN_107408fe4(param_1,puVar6,uVar19);
      puVar11 = param_4 + uVar19 * 2;
      FUN_107408fe4(puVar6,param_2,lVar3,puVar11);
      puVar4 = param_4 + param_3 * 2;
      puVar6 = puVar11;
      while (param_4 != puVar11) {
        if (puVar6 == puVar4) {
          for (; param_4 != puVar11; param_4 = param_4 + 2) {
            uVar2 = *param_4;
            *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_4 + 5);
            *param_1 = uVar2;
            param_1 = param_1 + 2;
          }
          return;
        }
        if (*(float *)(param_4 + 1) <= *(float *)(puVar6 + 1)) {
          uVar2 = *param_4;
          *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_4 + 5);
          *param_1 = uVar2;
          param_4 = param_4 + 2;
        }
        else {
          uVar2 = *puVar6;
          *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)puVar6 + 5);
          *param_1 = uVar2;
          puVar6 = puVar6 + 2;
        }
        param_1 = param_1 + 2;
      }
      for (; puVar6 != puVar4; puVar6 = puVar6 + 2) {
        uVar2 = *puVar6;
        *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)puVar6 + 5);
        *param_1 = uVar2;
        param_1 = param_1 + 2;
      }
    }
  }
  return;
}



/* Entry: 107408fcc; end: 107408fe3;  */

void FUN_107408fcc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107408fe4; end: 1074091af;  */

void FUN_107408fe4(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if (param_3 != 0) {
    if (param_3 == 2) {
      if (*(float *)(param_1 + 1) <= *(float *)(param_2 + -1)) {
        uVar5 = *param_1;
        param_4[1] = param_1[1];
        *param_4 = uVar5;
        uVar7 = param_2[-1];
        uVar5 = param_2[-2];
      }
      else {
        uVar5 = param_2[-2];
        param_4[1] = param_2[-1];
        *param_4 = uVar5;
        uVar7 = param_1[1];
        uVar5 = *param_1;
      }
      param_4[3] = uVar7;
      param_4[2] = uVar5;
    }
    else if (param_3 == 1) {
      uVar5 = *param_1;
      param_4[1] = param_1[1];
      *param_4 = uVar5;
    }
    else if ((long)param_3 < 9) {
      if (param_1 != param_2) {
        lVar1 = 0;
        uVar5 = *param_1;
        param_4[1] = param_1[1];
        *param_4 = uVar5;
        puVar4 = param_4;
        while (puVar2 = param_1 + 2, puVar2 != param_2) {
          puVar6 = puVar4 + 2;
          if (*(float *)(puVar4 + 1) <= *(float *)(param_1 + 3)) {
            uVar5 = *puVar2;
            puVar4[3] = param_1[3];
            *puVar6 = uVar5;
          }
          else {
            puVar4[3] = puVar4[1];
            *puVar6 = *puVar4;
            for (lVar3 = lVar1; puVar4 = param_4, lVar3 != 0; lVar3 = lVar3 + -0x10) {
              puVar4 = (undefined8 *)((long)param_4 + lVar3);
              if (*(float *)(puVar4 + -1) <= *(float *)(param_1 + 3)) {
                puVar4 = (undefined8 *)((long)param_4 + lVar3);
                break;
              }
              *puVar4 = *(undefined8 *)((long)param_4 + lVar3 + -0x10);
              *(undefined8 *)((long)puVar4 + 5) = *(undefined8 *)((long)param_4 + lVar3 + -0xb);
            }
            uVar5 = *puVar2;
            *(undefined8 *)((long)puVar4 + 5) = *(undefined8 *)((long)param_1 + 0x15);
            *puVar4 = uVar5;
          }
          lVar1 = lVar1 + 0x10;
          puVar4 = puVar6;
          param_1 = puVar2;
        }
      }
    }
    else {
      param_3 = param_3 >> 1;
      puVar4 = param_1 + param_3 * 2;
      FUN_107408d78(param_1,puVar4,param_3,param_4,param_3);
      func_0x00010740ad78();
      FUN_107408d78();
      puVar2 = puVar4;
      while (param_1 != puVar4) {
        if (puVar2 == param_2) {
          for (; param_1 != puVar4; param_1 = param_1 + 2) {
            uVar5 = *param_1;
            param_4[1] = param_1[1];
            *param_4 = uVar5;
            param_4 = param_4 + 2;
          }
          return;
        }
        if (*(float *)(param_1 + 1) <= *(float *)(puVar2 + 1)) {
          puVar6 = param_1 + 2;
          uVar7 = param_1[1];
          uVar5 = *param_1;
        }
        else {
          uVar7 = puVar2[1];
          uVar5 = *puVar2;
          puVar2 = puVar2 + 2;
          puVar6 = param_1;
        }
        param_4[1] = uVar7;
        *param_4 = uVar5;
        param_4 = param_4 + 2;
        param_1 = puVar6;
      }
      for (; puVar2 != param_2; puVar2 = puVar2 + 2) {
        uVar5 = *puVar2;
        param_4[1] = puVar2[1];
        *param_4 = uVar5;
        param_4 = param_4 + 2;
      }
    }
  }
  return;
}



/* Entry: 1074091b0; end: 1074096b7;  */

void FUN_1074091b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                  long param_5,undefined8 *param_6,long param_7)

{
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long extraout_x9;
  long extraout_x9_00;
  long lVar4;
  undefined8 *puVar5;
  long extraout_x10;
  long extraout_x10_00;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *extraout_x11;
  undefined8 *extraout_x11_00;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  float fVar19;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  
  do {
    lVar7 = param_5;
    if (param_5 == 0) {
      return;
    }
    while( true ) {
      if (lVar7 <= param_7 || param_4 <= param_7) {
        if (param_4 <= lVar7) {
          lVar7 = 3 - (long)param_6;
          puVar8 = param_6;
          for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 2) {
            uVar10 = *puVar1;
            puVar8[1] = puVar1[1];
            *puVar8 = uVar10;
            lVar7 = lVar7 + -0x10;
            puVar8 = puVar8 + 2;
          }
          while( true ) {
            if (puVar8 == param_6) {
              return;
            }
            if (param_2 == param_3) break;
            if (*(float *)(param_6 + 1) <= *(float *)(param_2 + 1)) {
              uVar10 = *param_6;
              *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_6 + 5);
              *param_1 = uVar10;
              param_6 = param_6 + 2;
            }
            else {
              uVar10 = *param_2;
              *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_2 + 5);
              *param_1 = uVar10;
              param_2 = param_2 + 2;
            }
            param_1 = param_1 + 2;
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memmove_11034c660)(param_1,param_6,-((long)param_6 + lVar7));
          return;
        }
        lVar7 = 0;
        while( true ) {
          puVar8 = (undefined8 *)((long)param_2 + lVar7);
          puVar1 = (undefined8 *)((long)param_6 + lVar7);
          if (puVar8 == param_3) break;
          uVar10 = *puVar8;
          puVar1[1] = puVar8[1];
          *puVar1 = uVar10;
          lVar7 = lVar7 + 0x10;
        }
        while( true ) {
          puVar8 = param_3 + -2;
          if (puVar1 == param_6) {
            return;
          }
          if (param_2 == param_1) break;
          puVar5 = puVar1 + -2;
          puVar12 = param_2 + -2;
          puVar16 = param_2 + -2;
          if (*(float *)(param_2 + -1) <= *(float *)(puVar1 + -1)) {
            puVar1 = puVar5;
            puVar12 = param_2;
            puVar16 = puVar5;
          }
          param_2 = puVar12;
          uVar10 = *puVar16;
          *(undefined8 *)((long)param_3 + -0xb) = *(undefined8 *)((long)puVar16 + 5);
          *puVar8 = uVar10;
          param_3 = puVar8;
        }
        while (puVar1 != param_6) {
          uVar10 = puVar1[-2];
          *(undefined8 *)((long)puVar8 + 5) = *(undefined8 *)((long)puVar1 + -0xb);
          *puVar8 = uVar10;
          puVar1 = puVar1 + -2;
          puVar8 = puVar8 + -2;
        }
        return;
      }
      lVar15 = 0;
      lVar17 = -param_4;
      while( true ) {
        if (lVar17 == 0) {
          return;
        }
        puVar8 = (undefined8 *)((long)param_1 + lVar15);
        fVar19 = *(float *)(puVar8 + 1);
        if (*(float *)(param_2 + 1) < fVar19) break;
        lVar15 = lVar15 + 0x10;
        lVar17 = lVar17 + 1;
      }
      puVar1 = param_2;
      if (-lVar17 < lVar7) {
        param_5 = lVar7 / 2;
        lVar11 = param_5 * 2;
        lVar3 = (long)param_2 + (-lVar15 - (long)param_1) >> 4;
        uVar18 = (ulong)*(uint *)(param_2 + lVar11 + 1);
        puVar16 = puVar8;
        while (lVar3 != 0) {
          func_0x00010740b1b0();
          puVar1 = extraout_x8;
          lVar3 = extraout_x10;
          if (fVar19 <= (float)uVar18) {
            puVar16 = extraout_x11;
            lVar3 = extraout_x9;
          }
        }
        param_4 = (long)puVar16 + (-lVar15 - (long)param_1) >> 4;
        param_2 = param_2 + lVar11;
      }
      else {
        if (lVar17 == -1) {
          param_1 = (undefined8 *)((long)param_1 + lVar15);
          uVar14 = *param_1;
          uStack_68 = (undefined5)param_1[1];
          uStack_6b = (undefined3)((ulong)uVar14 >> 0x28);
          uVar10 = *param_2;
          *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_2 + 5);
          *param_1 = uVar10;
          *(ulong *)((long)param_2 + 5) = CONCAT53(uStack_68,uStack_6b);
          *param_2 = uVar14;
          return;
        }
        param_4 = -lVar17 / 2;
        puVar16 = (undefined8 *)((long)param_1 + lVar15 + param_4 * 0x10);
        lVar3 = (long)param_3 - (long)param_2 >> 4;
        uVar18 = (ulong)*(uint *)(puVar16 + 1);
        puVar12 = param_2;
        while (param_2 = puVar12, lVar3 != 0) {
          func_0x00010740b1b0();
          puVar12 = extraout_x11_00;
          puVar1 = extraout_x8_00;
          lVar3 = extraout_x9_00;
          if ((float)uVar18 <= fVar19) {
            puVar12 = param_2;
            lVar3 = extraout_x10_00;
          }
        }
        param_5 = (long)param_2 - (long)puVar1 >> 4;
      }
      puVar12 = param_2;
      if ((puVar16 != puVar1) && (puVar12 = puVar16, puVar1 != param_2)) {
        if (puVar16 + 2 == puVar1) {
          uVar10 = *puVar16;
          uStack_68 = (undefined5)puVar16[1];
          uStack_6b = (undefined3)((ulong)uVar10 >> 0x28);
          _memmove(puVar16,puVar16 + 2,((long)param_2 - (long)puVar1) + -3);
          puVar12 = (undefined8 *)((long)puVar16 + ((long)param_2 - (long)puVar1));
          *puVar12 = uVar10;
          *(ulong *)((long)puVar12 + 5) = CONCAT53(uStack_68,uStack_6b);
        }
        else if (puVar1 + 2 == param_2) {
          uVar10 = param_2[-2];
          uStack_68 = (undefined5)param_2[-1];
          uStack_6b = (undefined3)((ulong)uVar10 >> 0x28);
          lVar3 = (long)param_2 + (-0x10 - (long)puVar16);
          if (lVar3 != 0) {
            _memmove((undefined8 *)-(-0x10 - (long)puVar16),puVar16,lVar3 + -3);
          }
          *(ulong *)((long)puVar16 + 5) = CONCAT53(uStack_68,uStack_6b);
          *puVar16 = uVar10;
          puVar12 = (undefined8 *)-(-0x10 - (long)puVar16);
        }
        else {
          lVar4 = (long)puVar1 - (long)puVar16;
          lVar9 = lVar4 >> 4;
          lVar3 = (long)param_2 - (long)puVar1 >> 4;
          puVar5 = puVar1;
          puVar6 = puVar16;
          lVar11 = lVar9;
          if (lVar9 == lVar3) {
            for (; puVar12 = puVar1, puVar6 != puVar1 && puVar5 != param_2; puVar6 = puVar6 + 2) {
              uVar14 = *puVar6;
              uStack_68 = (undefined5)puVar6[1];
              uStack_6b = (undefined3)((ulong)uVar14 >> 0x28);
              uVar10 = *puVar5;
              *(undefined8 *)((long)puVar6 + 5) = *(undefined8 *)((long)puVar5 + 5);
              *puVar6 = uVar10;
              *(ulong *)((long)puVar5 + 5) = CONCAT53(uStack_68,uStack_6b);
              *puVar5 = uVar14;
              puVar5 = puVar5 + 2;
            }
          }
          else {
            do {
              lVar2 = lVar3;
              lVar3 = 0;
              if (lVar2 != 0) {
                lVar3 = lVar11 / lVar2;
              }
              lVar3 = lVar11 - lVar3 * lVar2;
              lVar11 = lVar2;
            } while (lVar3 != 0);
            puVar12 = puVar16 + lVar2 * 2;
            while (puVar12 != puVar16) {
              puVar6 = puVar12 + -2;
              uVar10 = puVar12[-2];
              uStack_68 = (undefined5)puVar12[-1];
              uStack_6b = (undefined3)((ulong)uVar10 >> 0x28);
              puVar5 = puVar6;
              puVar12 = (undefined8 *)(lVar4 + (long)puVar6);
              do {
                puVar13 = puVar12;
                uVar14 = *puVar13;
                *(undefined8 *)((long)puVar5 + 5) = *(undefined8 *)((long)puVar13 + 5);
                *puVar5 = uVar14;
                lVar3 = (long)param_2 - (long)puVar13 >> 4;
                puVar12 = (undefined8 *)((long)puVar13 + lVar4);
                if (lVar3 <= lVar9) {
                  puVar12 = puVar16 + (lVar9 - lVar3) * 2;
                }
                puVar5 = puVar13;
              } while (puVar12 != puVar6);
              *(ulong *)((long)puVar13 + 5) = CONCAT53(uStack_68,uStack_6b);
              *puVar13 = uVar10;
              puVar12 = puVar6;
            }
            puVar12 = (undefined8 *)(((long)param_2 - (long)puVar1) + (long)puVar16);
          }
        }
      }
      lVar3 = lVar7 - param_5;
      if ((lVar7 - (param_4 + param_5)) - lVar17 <= param_4 + param_5) break;
      param_4 = -(param_4 + lVar17);
      FUN_1074091b0(puVar8,puVar16,puVar12);
      param_1 = puVar12;
      lVar7 = lVar3;
      if (lVar3 == 0) {
        return;
      }
    }
    FUN_1074091b0(puVar12,param_2,param_3,-(param_4 + lVar17),lVar3);
    param_1 = (undefined8 *)((long)param_1 + lVar15);
    param_3 = puVar12;
    param_2 = puVar16;
  } while( true );
}



/* Entry: 1074096b8; end: 1074096bf;  */

void FUN_1074096b8(void)

{
  return;
}



/* Entry: 1074096c0; end: 1074096f3;  */

void FUN_1074096c0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_1109ada28;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1074096f4; end: 10740971b;  */

void FUN_1074096f4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109ada28;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10740971c; end: 107409773;  */

void FUN_10740971c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_68 [72];
  
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_1073eb6b8(auStack_68,lVar1,*(undefined8 *)(lVar1 + 0x290),lVar1 + 0x2a0,param_2,0x100);
  func_0x000107750330(auStack_68,*(undefined8 *)(param_1 + 8));
  func_0x0001073ebef4(auStack_68);
  return;
}



/* Entry: 107409774; end: 1074097ab;  */

long FUN_107409774(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109ada88);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1074097ac; end: 1074097bf;  */

undefined ** FUN_1074097ac(void)

{
  return &PTR_DAT_1109ada88;
}



/* Entry: 1074097c0; end: 1074097ef;  */

void FUN_1074097c0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1109adaa8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1074097f0; end: 10740981f;  */

void FUN_1074097f0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109adaa8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107409820; end: 107409857;  */

long FUN_107409820(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109adb08);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107409858; end: 107409863;  */

undefined ** FUN_107409858(void)

{
  return &PTR_DAT_1109adb08;
}



/* Entry: 107409864; end: 1074099a7;  */

long FUN_107409864(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x00010726364c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar2 != plVar4) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000104c32db4(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 1074099a8; end: 1074099df;  */

uint FUN_1074099a8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puStack_20;
  ulong uStack_18;
  
  uStack_18 = param_1[1];
  puStack_20 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uStack_18 = (ulong)*(byte *)((long)param_1 + 0x17);
    puStack_20 = param_1;
  }
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  iVar3 = (int)&puStack_20;
  FUN_107409a14(&puStack_20,puVar2,uVar1);
  uVar4 = (uint)(0 < iVar3);
  if (iVar3 < 0) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* Entry: 1074099e0; end: 107409a13;  */

uint FUN_1074099e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  iVar1 = (int)&uStack_20;
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_107409a14(&uStack_20,param_3,param_4);
  uVar2 = (uint)(0 < iVar1);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Entry: 107409a14; end: 107409a5b;  */

void FUN_107409a14(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if ((ulong)param_1[1] <= param_3) {
    param_3 = param_1[1];
  }
  FUN_107409a5c(*param_1,param_2,param_3);
  return;
}



/* Entry: 107409a5c; end: 107409a97;  */

undefined8 FUN_107409a5c(ushort *param_1,ushort *param_2,long param_3)

{
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if (*param_1 < *param_2) break;
    if (*param_2 < *param_1) {
      return 1;
    }
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return 0xffffffff;
}



/* Entry: 107409a98; end: 107409b0f;  */

long * FUN_107409a98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar3;
  long *plVar4;
  
  func_0x00010002c968();
  plVar3 = (long *)(unaff_x20 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, FUN_1074099a8(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_107409b00;
    }
    plVar2 = plVar4 + 4;
    FUN_1074099a8(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_107409b00:
  *unaff_x19 = plVar4;
  return plVar3;
}



/* Entry: 107409b10; end: 107409b77;  */

void FUN_107409b10(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010740a600();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x00010740a974();
  func_0x00010740aa28();
  return;
}



/* Entry: 107409b78; end: 107409bab;  */

void FUN_107409b78(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_107409bac(param_5,param_4);
  uStack_1c = param_1;
  uStack_18 = param_2;
  uStack_14 = param_3;
  FUN_107409bcc(&uStack_1c);
  return;
}



/* Entry: 107409bac; end: 107409bcb;  */

float FUN_107409bac(float *param_1,float *param_2)

{
  return *param_1 - *param_2;
}



/* Entry: 107409bcc; end: 107409be7;  */

float FUN_107409bcc(float param_1,undefined8 param_2)

{
  FUN_1073b5ea8(param_2,param_2);
  return SQRT(param_1);
}



/* Entry: 107409be8; end: 107409beb;  */

void FUN_107409be8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109adb28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


