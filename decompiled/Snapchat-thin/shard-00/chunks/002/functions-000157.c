/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1003ae52c; end: 1003ae557;  */

void FUN_1003ae52c(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  FUN_1003ae52c();
  return;
}



/* Entry: 1003ae558; end: 1003ae5c7;  */

void FUN_1003ae558(void)

{
  FUN_1003ae52c();
  return;
}



/* Entry: 1003ae5c8; end: 1003ae6eb;  */

void FUN_1003ae5c8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  FUN_1003acc80();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18;
  func_0x0001003ae650(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1003ae6ec; end: 1003ae72f;  */

long FUN_1003ae6ec(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x18;
      FUN_1003aefd0();
    }
  }
  return param_1;
}



/* Entry: 1003ae730; end: 1003ae747;  */

void FUN_1003ae730(void)

{
  return;
}



/* Entry: 1003ae748; end: 1003ae7a7;  */

long * FUN_1003ae748(long *param_1)

{
  func_0x0001003ae740();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 1003ae7a8; end: 1003ae7af;  */

void FUN_1003ae7a8(void)

{
  return;
}



/* Entry: 1003ae7b0; end: 1003ae7df;  */

long FUN_1003ae7b0(long param_1,long param_2)

{
  if (param_1 != param_2) {
    FUN_1003ae7e0();
    FUN_1003ae7fc();
    func_0x0001003addd4();
  }
  return param_1;
}



/* Entry: 1003ae7e0; end: 1003ae7fb;  */

undefined1  [16] FUN_1003ae7e0(undefined8 param_1,undefined2 *param_2)

{
  undefined2 *unaff_x19;
  undefined1 auVar1 [16];
  
  *unaff_x19 = *param_2;
  *(undefined1 *)(unaff_x19 + 1) = *(undefined1 *)(param_2 + 1);
  auVar1._8_8_ = param_2 + 4;
  auVar1._0_8_ = unaff_x19 + 4;
  return auVar1;
}



/* Entry: 1003ae7fc; end: 1003ae857;  */

undefined8 * FUN_1003ae7fc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 != param_2) {
    plVar1 = (long *)*param_1;
    plVar2 = (long *)*param_2;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    *param_1 = plVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  return param_1;
}



/* Entry: 1003ae858; end: 1003ae863;  */

void FUN_1003ae858(void)

{
  return;
}



/* Entry: 1003ae864; end: 1003ae8bf;  */

void FUN_1003ae864(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x40;
  func_0x000107c60e20();
  FUN_1003ae904();
  *param_1 = uVar1;
  return;
}



/* Entry: 1003ae8c0; end: 1003ae903;  */

void FUN_1003ae8c0(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_1003ae968(&uStack_30);
  param_1[1] = lStack_28;
  *param_1 = uStack_30;
  if (lStack_28 != 0) {
    do {
      FUN_1003aea2c();
    } while (extraout_w10 != 0);
  }
  func_0x0001003aea3c();
  return;
}



/* Entry: 1003ae904; end: 1003ae967;  */

undefined8 *
FUN_1003ae904(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &PTR_DAT_110d7dfc8;
  param_1[1] = 1;
  FUN_1003ae8c0(param_1 + 2,param_2);
  FUN_1003add0c(param_1 + 4,param_3);
  param_1[7] = param_4;
  return param_1;
}



/* Entry: 1003ae968; end: 1003aea2b;  */

void FUN_1003ae968(long *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long lStack_30;
  long lStack_28;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else if (*(long *)(param_2 + 8) == 0) {
    lVar1 = *(long *)(param_2 + 0x10);
    *param_1 = param_2;
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      do {
        FUN_1003aea2c();
      } while (extraout_w10_00 != 0);
    }
  }
  else {
    func_0x0001003ae9f0(&lStack_30);
    if (lStack_30 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = param_2;
      param_1[1] = lStack_28;
      if (lStack_28 != 0) {
        do {
          FUN_1003aea2c();
        } while (extraout_w10 != 0);
      }
    }
    FUN_1003a90c4(&lStack_30);
  }
  return;
}



/* Entry: 1003aea2c; end: 1003aea43;  */

void FUN_1003aea2c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1003aea44; end: 1003aea6b;  */

long FUN_1003aea44(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1003aea6c; end: 1003aeaab;  */

void FUN_1003aea6c(void)

{
  return;
}



/* Entry: 1003aeaac; end: 1003aeae7;  */

undefined8 * FUN_1003aeaac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    func_0x0001003aea88(uVar1);
  }
  return param_1;
}



/* Entry: 1003aeae8; end: 1003aeb0f;  */

undefined8 * FUN_1003aeae8(undefined8 *param_1)

{
  func_0x0001003aea88(*param_1);
  return param_1;
}



/* Entry: 1003aeb10; end: 1003aeb9b;  */

void FUN_1003aeb10(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  
  plVar2 = param_2;
  func_0x0001003ae290();
  plVar3 = param_2;
  uVar4 = param_3;
  FUN_1003aebc4(param_2,param_3,plVar2);
  if ((uVar4 & 1) != 0) {
    FUN_1003aef0c(param_2[1] + (long)plVar3 * 0x20,param_3);
    *(byte *)(*param_2 + (long)plVar3) = (byte)plVar2 & 0x7f;
    func_0x0001003aef2c();
  }
  lVar1 = param_2[1];
  *param_1 = *param_2 + (long)plVar3;
  param_1[1] = lVar1 + (long)plVar3 * 0x20;
  *(char *)(param_1 + 2) = (char)uVar4;
  return;
}



/* Entry: 1003aeb9c; end: 1003aebc3;  */

long FUN_1003aeb9c(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_1003aeb10(auStack_28);
  return lStack_20 + 0x18;
}



/* Entry: 1003aebc4; end: 1003aecbb;  */

undefined1  [16] FUN_1003aebc4(long *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  lVar7 = 0;
  uVar3 = param_3 >> 7;
  uVar6 = param_1[3];
  while( true ) {
    uVar3 = uVar3 & uVar6;
    uVar8 = *(ulong *)(*param_1 + uVar3);
    uVar4 = uVar8 ^ (param_3 & 0x7f) * 0x101010101010101;
    for (uVar4 = uVar4 + 0xfefefefefefefeff & (uVar4 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar1 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      plVar5 = (long *)(uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar6);
      uVar1 = param_1[1] + (long)plVar5 * 0x20;
      func_0x000107c30f94(uVar1,param_2);
      if ((uVar1 & 1) != 0) {
        uVar2 = 0;
        goto LAB_1003aec84;
      }
    }
    if ((uVar8 & ~uVar8 << 6 & 0x8080808080808080) != 0) break;
    lVar7 = lVar7 + 8;
    uVar3 = lVar7 + uVar3;
  }
  FUN_1003aecbc(param_1,param_3);
  uVar2 = 1;
  plVar5 = param_1;
LAB_1003aec84:
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = plVar5;
  return auVar9;
}



/* Entry: 1003aecbc; end: 1003aed7f;  */

void FUN_1003aecbc(long *param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long lVar3;
  ulong uVar4;
  
  FUN_1003ae238();
  lVar3 = *param_1;
  uVar4 = param_1[3];
  lVar1 = lVar3;
  FUN_1003aed80(lVar3,uVar4);
  lVar2 = unaff_x19[5];
  if (lVar2 == 0) {
    if (*(char *)(lVar3 + lVar1) == -2) {
      lVar2 = 0;
    }
    else {
      if ((uVar4 == 0) || (uVar4 - (uVar4 >> 3) >> 1 < (ulong)unaff_x19[2])) {
        FUN_1003aedc0();
      }
      else {
        func_0x000107c31024();
      }
      lVar3 = *unaff_x19;
      lVar1 = lVar3;
      FUN_1003aed80(lVar3,unaff_x19[3]);
      lVar2 = unaff_x19[5];
    }
  }
  unaff_x19[2] = unaff_x19[2] + 1;
  unaff_x19[5] = lVar2 - (ulong)(*(char *)(lVar3 + lVar1) == -0x80);
  return;
}



/* Entry: 1003aed80; end: 1003aedbf;  */

ulong FUN_1003aed80(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 1003aedc0; end: 1003aeee7;  */

void FUN_1003aedc0(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar7 = param_1[3];
  lVar8 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar8 + param_2 * 0x20;
  func_0x000107c60e20();
  *param_1 = lVar3;
  param_1[1] = lVar3 + lVar8;
  func_0x000107c610bc();
  lVar8 = 0;
  *(undefined1 *)(lVar3 + param_2) = 0xff;
  lVar3 = 6;
  if (param_2 != 7) {
    lVar3 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar3 - param_1[2];
  param_1[3] = param_2;
  for (; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar3 = lVar5;
      FUN_1003aeffc();
      lVar6 = *param_1;
      lVar4 = lVar6;
      FUN_1003aed80(lVar6,param_1[3],lVar3);
      bVar2 = (byte)lVar3 & 0x7f;
      *(byte *)(lVar6 + lVar4) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar4 - 8U) + 1) = bVar2;
      FUN_1003af01c(param_1[1] + lVar4 * 0x20,lVar5);
    }
    lVar5 = lVar5 + 0x20;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1003aeee8; end: 1003aef0b;  */

void FUN_1003aeee8(long param_1,long param_2)

{
  FUN_1003adcc0();
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  return;
}



/* Entry: 1003aef0c; end: 1003aef23;  */

void FUN_1003aef0c(long param_1)

{
  FUN_1003aeee8();
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1003aef24; end: 1003aef97;  */

void FUN_1003aef24(void)

{
  return;
}



/* Entry: 1003aef98; end: 1003aefcf;  */

void FUN_1003aef98(long param_1,undefined2 *param_2)

{
  FUN_1003adda4();
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  FUN_1003adb50();
  return;
}



/* Entry: 1003aefd0; end: 1003aeffb;  */

long FUN_1003aefd0(long param_1)

{
  FUN_1003aeae8(param_1 + 0x10);
  FUN_1003adc18(param_1 + 8);
  return param_1;
}



/* Entry: 1003aeffc; end: 1003af01b;  */

void FUN_1003aeffc(long param_1)

{
  undefined1 uStack_11;
  
  func_0x0001003a85b8(&uStack_11,*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1003af01c; end: 1003af047;  */

undefined8 FUN_1003af01c(long param_1,long param_2)

{
  long *plVar1;
  undefined8 unaff_x19;
  
  FUN_1003aeee8();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  plVar1 = (long *)(param_2 + 8);
  func_0x0001003adc0c();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  return unaff_x19;
}



/* Entry: 1003af048; end: 1003af067;  */

void FUN_1003af048(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1003af068; end: 1003af0df; -[SCValdiMarshallableObjectRegistry allocateStorageForClass:fieldValues:] */

long * FUN_1003af068(void)

{
  undefined1 in_ZR;
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  undefined8 uStack_108;
  undefined1 auStack_100 [8];
  long alStack_f8 [4];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 auStack_98 [2];
  undefined8 uStack_88;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_1003a7f28();
  FUN_1003af0e0();
  func_0x0001003b2e00();
  plVar1 = *(long **)(lStack_40 + 0x38);
  FUN_1003b2e24();
  lVar3 = *(long *)(lStack_40 + 0x38);
  uVar4 = lStack_40 + 0x48;
  FUN_1003b2e5c();
  FUN_1003b2fa8();
  func_0x0001003a8294(uStack_38);
  if ((bool)in_ZR) {
    return plVar1;
  }
  func_0x000107c60e78();
  func_0x000107c39ff8();
  FUN_1003af354();
  lStack_c0 = *(long *)(lVar3 + 0x20) + 0x18;
  uStack_b8 = 1;
  uStack_88 = extraout_x8;
  func_0x000107c60d28();
  if (uVar4 == 0) {
    func_0x000107c3a0c4();
    func_0x000107c39fc4();
  }
  else {
    func_0x0001003ad074(&lStack_c8);
    FUN_1003af364();
    if (lStack_c8 == 0) {
      uVar2 = uVar4;
      func_0x000107c61164(uVar4,PTR_s_valdiMarshallableObjectDescripto_112682f20);
      if ((uVar2 & 1) == 0) {
        FUN_1003a8364();
        FUN_1003b03b4(&uStack_d8,uVar4);
        func_0x000107c3a0d0();
        puStack_b0 = &uStack_d8;
        FUN_1003a91d4(&UNK_10f7d0213);
        FUN_1003a91fc(alStack_f8);
        func_0x000107c3a0e8(&uStack_d0);
        func_0x000107c3104c(auStack_98,&uStack_d0);
        auStack_98[0] = 0;
        func_0x000107c3a038();
        FUN_1003a8cb8(uStack_d0);
        func_0x000107c3a020();
        func_0x0001003b2d9c();
      }
      else {
        func_0x000107c5dbc8(alStack_f8,uVar4);
        func_0x0001003ad074(auStack_98);
        FUN_1003af898();
        func_0x0001003b2dc4();
        if ((bool)in_ZR) {
          func_0x0001003ad074(alStack_f8);
          FUN_1003af364();
          func_0x0001003b2dd0();
          func_0x0001003b2dd0();
          if (alStack_f8[0] == 0) {
            FUN_1003a8364();
            FUN_1003b03b4(&uStack_108,uVar4);
            func_0x000107c3a0d0();
            puStack_b0 = &uStack_108;
            FUN_1003a91d4(&UNK_10f7d0291);
            FUN_1003a91fc(alStack_f8);
            func_0x000107c3a0e8(auStack_100);
            func_0x000107c3104c(&uStack_d8,auStack_100);
            uStack_d8 = 0;
            func_0x000107c3a038();
            func_0x0001003adc54();
            func_0x000107c3a020();
            func_0x0001003adc5c();
          }
        }
        else {
          func_0x000107c3a11c();
        }
        FUN_1003b2dd8(auStack_98);
      }
    }
    func_0x0001003b2dd0();
  }
  plVar1 = &lStack_c0;
  FUN_1003ad644(plVar1);
  func_0x0001003a8294(uStack_88);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x0001003adc54();
    func_0x000107c3a020();
    func_0x0001003adc5c();
    FUN_1003b2dd8(auStack_98);
    func_0x0001003b2dd0();
    plVar1 = &lStack_c0;
    FUN_1003ad644(plVar1);
    func_0x000107c39ff8();
    return plVar1;
  }
  return plVar1;
}



/* Entry: 1003af0e0; end: 1003af0e7;  */

void FUN_1003af0e0(undefined8 param_1,long param_2,ulong param_3)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined8 extraout_x8;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  long alStack_a8 [4];
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 auStack_48 [2];
  undefined8 uStack_38;
  
  FUN_1003af354();
  lStack_70 = *(long *)(param_2 + 0x20) + 0x18;
  uStack_68 = 1;
  uStack_38 = extraout_x8;
  func_0x000107c60d28();
  if (param_3 == 0) {
    func_0x000107c3a0c4();
    func_0x000107c39fc4();
  }
  else {
    func_0x0001003ad074(&lStack_78);
    FUN_1003af364();
    if (lStack_78 == 0) {
      uVar1 = param_3;
      func_0x000107c61164(param_3,PTR_s_valdiMarshallableObjectDescripto_112682f20);
      if ((uVar1 & 1) == 0) {
        FUN_1003a8364();
        FUN_1003b03b4(&uStack_88,param_3);
        func_0x000107c3a0d0();
        puStack_60 = &uStack_88;
        FUN_1003a91d4(&UNK_10f7d0213);
        FUN_1003a91fc(alStack_a8);
        func_0x000107c3a0e8(&uStack_80);
        func_0x000107c3104c(auStack_48,&uStack_80);
        auStack_48[0] = 0;
        func_0x000107c3a038();
        FUN_1003a8cb8(uStack_80);
        func_0x000107c3a020();
        func_0x0001003b2d9c();
      }
      else {
        func_0x000107c5dbc8(alStack_a8,param_3);
        func_0x0001003ad074(auStack_48);
        FUN_1003af898();
        func_0x0001003b2dc4();
        if ((bool)in_ZR) {
          func_0x0001003ad074(alStack_a8);
          FUN_1003af364();
          func_0x0001003b2dd0();
          func_0x0001003b2dd0();
          if (alStack_a8[0] == 0) {
            FUN_1003a8364();
            FUN_1003b03b4(&uStack_b8,param_3);
            func_0x000107c3a0d0();
            puStack_60 = &uStack_b8;
            FUN_1003a91d4(&UNK_10f7d0291);
            FUN_1003a91fc(alStack_a8);
            func_0x000107c3a0e8(auStack_b0);
            func_0x000107c3104c(&uStack_88,auStack_b0);
            uStack_88 = 0;
            func_0x000107c3a038();
            func_0x0001003adc54();
            func_0x000107c3a020();
            func_0x0001003adc5c();
          }
        }
        else {
          func_0x000107c3a11c();
        }
        FUN_1003b2dd8(auStack_48);
      }
    }
    func_0x0001003b2dd0();
  }
  FUN_1003ad644(&lStack_70);
  func_0x0001003a8294(uStack_38);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x0001003adc54();
    func_0x000107c3a020();
    func_0x0001003adc5c();
    FUN_1003b2dd8(auStack_48);
    func_0x0001003b2dd0();
    FUN_1003ad644(&lStack_70);
    func_0x000107c39ff8();
    return;
  }
  return;
}



/* Entry: 1003af0e8; end: 1003af353;  */

void FUN_1003af0e8(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined8 extraout_x8;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  long alStack_a8 [4];
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 auStack_48 [2];
  undefined8 uStack_38;
  
  FUN_1003af354();
  lStack_70 = *(long *)(param_2 + 0x20) + 0x18;
  uStack_68 = 1;
  uStack_38 = extraout_x8;
  func_0x000107c60d28();
  if (param_3 == 0) {
    func_0x000107c3a0c4();
    func_0x000107c39fc4();
  }
  else {
    func_0x0001003ad074(&lStack_78);
    FUN_1003af364();
    if (lStack_78 == 0) {
      uVar1 = param_3;
      func_0x000107c61164(param_3,PTR_s_valdiMarshallableObjectDescripto_112682f20);
      if ((uVar1 & 1) == 0) {
        FUN_1003a8364();
        FUN_1003b03b4(&uStack_88,param_3);
        func_0x000107c3a0d0();
        puStack_60 = &uStack_88;
        FUN_1003a91d4(&UNK_10f7d0213);
        FUN_1003a91fc(alStack_a8);
        func_0x000107c3a0e8(&uStack_80);
        func_0x000107c3104c(auStack_48,&uStack_80);
        *param_1 = 2;
        param_1[1] = auStack_48[0];
        auStack_48[0] = 0;
        func_0x000107c3a038();
        FUN_1003a8cb8(uStack_80);
        func_0x000107c3a020();
        func_0x0001003b2d9c();
      }
      else {
        func_0x000107c5dbc8(alStack_a8,param_3);
        func_0x0001003ad074(auStack_48);
        FUN_1003af898();
        func_0x0001003b2dc4();
        if ((bool)in_ZR) {
          func_0x0001003ad074(alStack_a8);
          FUN_1003af364();
          func_0x0001003b2dd0();
          func_0x0001003b2dd0();
          if (alStack_a8[0] == 0) {
            FUN_1003a8364();
            FUN_1003b03b4(&uStack_b8,param_3);
            func_0x000107c3a0d0();
            puStack_60 = &uStack_b8;
            FUN_1003a91d4(&UNK_10f7d0291);
            FUN_1003a91fc(alStack_a8);
            func_0x000107c3a0e8(auStack_b0);
            func_0x000107c3104c(&uStack_88,auStack_b0);
            *param_1 = 2;
            param_1[1] = uStack_88;
            uStack_88 = 0;
            func_0x000107c3a038();
            func_0x0001003adc54();
            func_0x000107c3a020();
            func_0x0001003adc5c();
          }
          else {
            *param_1 = 1;
            param_1[1] = alStack_a8[0];
          }
        }
        else {
          func_0x000107c3a11c();
        }
        FUN_1003b2dd8(auStack_48);
      }
    }
    else {
      *param_1 = 1;
      param_1[1] = lStack_78;
    }
    func_0x0001003b2dd0();
  }
  FUN_1003ad644(&lStack_70);
  func_0x0001003a8294(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x0001003adc54();
  func_0x000107c3a020();
  func_0x0001003adc5c();
  FUN_1003b2dd8(auStack_48);
  func_0x0001003b2dd0();
  FUN_1003ad644(&lStack_70);
  func_0x000107c39ff8();
  return;
}



/* Entry: 1003af354; end: 1003af363;  */

void FUN_1003af354(void)

{
  return;
}



/* Entry: 1003af364; end: 1003af44f;  */

void FUN_1003af364(undefined8 param_1,long param_2,long param_3)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  undefined8 extraout_x8_00;
  undefined8 uVar2;
  long extraout_x9;
  ulong extraout_x10;
  undefined4 extraout_w11;
  int extraout_w11_00;
  undefined4 extraout_var;
  long extraout_x12;
  ulong extraout_x15;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  FUN_1003af450();
  func_0x0001003af45c(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c60d28();
  FUN_1003af470(unaff_x20 + 400);
  func_0x0001003ad068(*(undefined8 *)(unaff_x20 + 400));
  if ((bool)in_ZR) {
    uVar2 = 0;
LAB_1003af440:
    *unaff_x19 = uVar2;
    func_0x0001003af854();
    return;
  }
  FUN_1003b2a24(*(undefined8 *)(param_3 + 8));
  func_0x0001003af83c(0);
  lVar1 = extraout_x8;
  uVar3 = extraout_x15;
  do {
    uVar3 = uVar3 & extraout_x10;
    uVar4 = *(ulong *)(*(long *)(unaff_x20 + 0x130) + uVar3) ^ CONCAT44(extraout_var,extraout_w11);
    for (uVar4 = uVar4 + extraout_x12 & (uVar4 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar5 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar3 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & extraout_x10;
      if (*(long *)(*(long *)(unaff_x20 + 0x138) + uVar5 * 0x10) == extraout_x9) {
        uVar2 = 0;
        if (*(long *)(*(long *)(unaff_x20 + 0x138) + uVar5 * 0x10 + 8) != 0) {
          do {
            FUN_1003b2b50();
            uVar2 = extraout_x8_00;
          } while (extraout_w11_00 != 0);
        }
        goto LAB_1003af440;
      }
    }
    lVar1 = lVar1 + 8;
    uVar3 = lVar1 + uVar3;
  } while( true );
}



/* Entry: 1003af450; end: 1003af46f;  */

void FUN_1003af450(void)

{
  return;
}



/* Entry: 1003af470; end: 1003af50b;  */

long FUN_1003af470(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long extraout_x13;
  ulong extraout_x15;
  ulong uVar3;
  ulong uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_1003ad8ec();
  func_0x0001003af730(param_2);
  func_0x0001003af83c(*unaff_x20);
  do {
    func_0x0001003ad044();
    uVar1 = in_ZR;
    for (uVar3 = extraout_x15; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar4 = (uVar3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar3 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = extraout_x13 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & extraout_x9;
      lVar2 = extraout_x8;
      if (*(long *)(unaff_x20[1] + uVar4 * 0x10) == unaff_x19) goto LAB_1003af4fc;
      uVar1 = 0;
    }
    func_0x0001003ad058();
    in_ZR = 1;
    lVar2 = extraout_x8_00;
    uVar4 = extraout_x9_00;
  } while ((bool)uVar1);
LAB_1003af4fc:
  return lVar2 + uVar4;
}



/* Entry: 1003af50c; end: 1003af523;  */

void FUN_1003af50c(void)

{
  return;
}



/* Entry: 1003af524; end: 1003af6e7;  */

ulong FUN_1003af524(undefined8 param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 unaff_x30;
  
  if (param_3 < 0x21) {
    if (param_3 < 0x11) {
      FUN_1003af50c();
      if (8 < param_3) {
        uVar6 = *param_2;
        uVar11 = *(ulong *)((long)param_2 + (param_3 - 8));
        uVar8 = uVar11 + param_3;
        FUN_1003af804(uVar6,uVar8 >> (param_3 & 0x3f) | uVar8 << 0x40 - (param_3 & 0x3f));
        return uVar6 ^ uVar11;
      }
      if (param_3 < 4) {
        uVar8 = 0x9ae16a3b2f90404f;
        if (param_3 != 0) {
          uVar8 = (param_3 | (ulong)*(byte *)((long)param_2 + (param_3 - 1)) << 2) *
                  -0x36b62838af619aa9 ^
                  (ulong)CONCAT11(*(undefined1 *)((long)param_2 + (param_3 >> 1)),(char)*param_2) *
                  -0x651e95c4d06fbfb1;
          uVar8 = (uVar8 ^ uVar8 >> 0x2f) * -0x651e95c4d06fbfb1;
        }
        return uVar8;
      }
      uVar7 = (ulong)*(uint *)((long)param_2 + (param_3 - 4));
      uVar8 = param_3 + (uint)((int)*param_2 << 3);
    }
    else {
      FUN_1003af50c();
      lVar12 = *(long *)((long)param_2 + (param_3 - 8));
      uVar8 = lVar12 * -0x651e95c4d06fbfb1;
      uVar11 = *param_2 * -0x4b6d499041670d8d - param_2[1];
      uVar6 = param_2[1] ^ 0xc949d7c7509e6557;
      uVar8 = (uVar8 >> 0x1e | uVar8 << 0x22) + (uVar11 >> 0x2b | uVar11 * 0x200000) +
              *(long *)((long)param_2 + (param_3 - 0x10)) * -0x3c5a37a36834ced9;
      uVar7 = *param_2 * -0x4b6d499041670d8d + param_3 + (uVar6 >> 0x14 | uVar6 << 0x2c) +
              lVar12 * 0x651e95c4d06fbfb1;
    }
  }
  else {
    if (param_3 < 0x41) {
      FUN_1003af50c();
      lVar1 = *(long *)((long)param_2 + (param_3 - 0x10));
      uVar9 = *param_2 + (lVar1 + param_3) * -0x3c5a37a36834ced9;
      uVar2 = param_2[3];
      uVar8 = uVar9 + param_2[1];
      uVar6 = uVar8 + param_2[2];
      uVar11 = *(long *)((long)param_2 + (param_3 - 0x20)) + param_2[2];
      lVar12 = *(long *)((long)param_2 + (param_3 - 8)) + uVar2;
      uVar7 = lVar12 + uVar11;
      lVar13 = (uVar8 >> 7 | uVar8 << 0x39) + (uVar9 >> 0x25 | uVar9 * 0x8000000) +
               (uVar9 + uVar2 >> 0x34 | (uVar9 + uVar2) * 0x1000) + (uVar6 >> 0x1f | uVar6 << 0x21);
      uVar8 = *(long *)((long)param_2 + (param_3 - 0x18)) + uVar11;
      uVar9 = uVar8 + lVar1;
      uVar8 = (uVar9 + lVar12 + lVar13) * -0x3c5a37a36834ced9 +
              (uVar6 + uVar2 + (uVar11 >> 0x25 | uVar11 * 0x8000000) + (uVar8 >> 7 | uVar8 << 0x39)
                       + (uVar7 >> 0x34 | uVar7 * 0x1000) + (uVar9 >> 0x1f | uVar9 << 0x21)) *
              -0x651e95c4d06fbfb1;
      uVar8 = lVar13 + (uVar8 ^ uVar8 >> 0x2f) * -0x3c5a37a36834ced9;
      return (uVar8 ^ uVar8 >> 0x2f) * -0x651e95c4d06fbfb1;
    }
    lVar12 = *(long *)((long)param_2 + (param_3 - 0x28));
    uVar8 = *(long *)((long)param_2 + (param_3 - 0x38)) +
            *(long *)((long)param_2 + (param_3 - 0x10));
    uVar6 = *(long *)((long)param_2 + (param_3 - 0x30)) + param_3;
    FUN_1003af804(uVar6,*(undefined8 *)((long)param_2 + (param_3 - 0x18)));
    puVar3 = (ulong *)((long)param_2 + (param_3 - 0x40));
    uVar7 = param_3;
    func_0x000108135188(puVar3,param_3,uVar6);
    puVar4 = (ulong *)((long)param_2 + (param_3 - 0x20));
    uVar11 = uVar8 + 0xb492b66fbe98f273;
    func_0x000108135188(puVar4,uVar11,lVar12);
    puVar10 = param_2 + 4;
    lVar13 = *param_2 + lVar12 * -0x4b6d499041670d8d;
    lVar12 = -(param_3 - 1 & 0xffffffffffffffc0);
    do {
      uVar9 = (long)puVar3 + puVar10[-3] + uVar8 + lVar13;
      uVar8 = uVar8 + uVar7 + puVar10[2];
      puVar5 = puVar10 + -4;
      uVar9 = (uVar9 >> 0x25 | uVar9 * 0x8000000) * -0x4b6d499041670d8d ^ uVar11;
      uVar8 = (long)puVar3 + (uVar8 >> 0x2a | uVar8 * 0x400000) * -0x4b6d499041670d8d + puVar10[1];
      lVar13 = (uVar6 + (long)puVar4 >> 0x21 | (uVar6 + (long)puVar4) * 0x80000000) *
               -0x4b6d499041670d8d;
      uVar7 = uVar7 * -0x4b6d499041670d8d;
      func_0x000108135188(puVar5,uVar7,uVar9 + (long)puVar4);
      uVar11 = lVar13 + uVar11;
      puVar4 = puVar10;
      func_0x000108135188(puVar10,uVar11,uVar8 + puVar10[-2]);
      puVar10 = puVar10 + 8;
      lVar12 = lVar12 + 0x40;
      puVar3 = puVar5;
      uVar6 = uVar9;
    } while (lVar12 != 0);
    FUN_1003af804(puVar5,puVar4);
    FUN_1003af804(uVar7,uVar11);
    uVar8 = uVar9 + (uVar8 ^ uVar8 >> 0x2f) * -0x4b6d499041670d8d + (long)puVar5;
    uVar7 = uVar7 + lVar13;
    FUN_1003af50c(uVar8,uVar7,unaff_x30);
  }
  uVar8 = (uVar7 ^ uVar8) * -0x622015f714c7d297;
  uVar8 = (uVar7 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
  return (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
}



/* Entry: 1003af6e8; end: 1003af74b;  */

void FUN_1003af6e8(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_1003af524(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 1003af74c; end: 1003af803;  */

ulong FUN_1003af74c(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (8 < param_2) {
    uVar1 = *param_1;
    uVar3 = *(ulong *)((long)param_1 + (param_2 - 8));
    uVar2 = uVar3 + param_2;
    FUN_1003af804(uVar1,uVar2 >> (param_2 & 0x3f) | uVar2 << 0x40 - (param_2 & 0x3f));
    return uVar1 ^ uVar3;
  }
  if (3 < param_2) {
    uVar2 = (ulong)*(uint *)((long)param_1 + (param_2 - 4));
    uVar1 = (uVar2 ^ param_2 + (uint)((int)*param_1 << 3)) * -0x622015f714c7d297;
    uVar2 = (uVar2 ^ uVar1 >> 0x2f ^ uVar1) * -0x622015f714c7d297;
    return (uVar2 ^ uVar2 >> 0x2f) * -0x622015f714c7d297;
  }
  uVar2 = 0x9ae16a3b2f90404f;
  if (param_2 != 0) {
    uVar2 = (param_2 | (ulong)*(byte *)((long)param_1 + (param_2 - 1)) << 2) * -0x36b62838af619aa9 ^
            (ulong)CONCAT11(*(undefined1 *)((long)param_1 + (param_2 >> 1)),(char)*param_1) *
            -0x651e95c4d06fbfb1;
    uVar2 = (uVar2 ^ uVar2 >> 0x2f) * -0x651e95c4d06fbfb1;
  }
  return uVar2;
}



/* Entry: 1003af804; end: 1003af86b;  */

long FUN_1003af804(ulong param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = (param_2 ^ param_1) * -0x622015f714c7d297;
  uVar1 = (param_2 ^ uVar1 >> 0x2f ^ uVar1) * -0x622015f714c7d297;
  return (uVar1 ^ uVar1 >> 0x2f) * -0x622015f714c7d297;
}



/* Entry: 1003af86c; end: 1003af897; +[SCBridgeSubject valdiMarshallableObjectDescriptor] */

void FUN_1003af86c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d701e8;
  param_1[1] = &PTR_DAT_110d70230;
  param_1[2] = &PTR_DAT_110d701b8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1003af898; end: 1003b0387;  */

/* WARNING: Possible PIC construction at 0x0001003af9bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003afb38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c0b10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c0b20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c86a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c86e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c872c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c87b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c87e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c882c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c886c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c88c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c89a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c89b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c89c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c89d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c89e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c89f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8a24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8a34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8a44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8a54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8a64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8aac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8abc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8aec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8b0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8b48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8b58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8b74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8b9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8bb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8bec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8bfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8c0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be2d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be2e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be344: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be3a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be3f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be4cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be530: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be5e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be5f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be6a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be6b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be7c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be7d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be8e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be8f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be9a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be9b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bea00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bea10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003beb58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003beb68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003beb78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003beb88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003beb98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003beba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bebb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bebc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bebd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bebe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bebf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bec08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c3aec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c3afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c3b4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c3b5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c3bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c3bbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c3be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c3bf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ca2e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003caf3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003caf4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cb0a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cb0b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cb0c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cb0d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cb29c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cb2ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cb2bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cb2e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cb2fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c83c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c844c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c85d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c8620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ccb3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ccb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ccb9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ccbb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ccc00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ccc14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ccc68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ccc7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ccccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ccce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ccd38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ccd4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ccda4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ccdb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cce10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cce20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cce74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cce84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cced4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ccee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ccf58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ccf68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ccfc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ccfd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cd02c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cd03c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cd08c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cd09c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cd0c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cd0d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cd0e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cd0f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cd104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cd114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cd124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c936c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c93ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c93d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c5740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c5760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c5784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c221c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bc704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bc7b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bc7c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bc820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bc834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bc884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bc8ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bc900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bc950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bc964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bc9b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bc9cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bca20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bca34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bca84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bca98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bcae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bcafc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bcb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bcb64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bcbb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bcbc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bcc18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bcc2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bcc7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bcc90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bcce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bccf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bcd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bcd58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bcda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bcdbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bce0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bce20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bce70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bce84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bced8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bceec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bcf40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bcf54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bcfa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bcfb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd06c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd07c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd0cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd0dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd12c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd13c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd18c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd19c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd1ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd1fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd24c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd2b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd2c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd3cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd3dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd44c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd45c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd47c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd48c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd49c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd4cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd4dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd4ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd4fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd50c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bd51c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b005c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c929c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c13d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c13f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cb6cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cb6dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cb728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cb738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cb784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cb794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cb7e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cb7f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cb840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cb850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cb89c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cb8ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cb8d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cb8e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cb8f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c4a6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c4ac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c4ad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c4b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c4b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c4b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c4b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c4bb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c4bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c4bd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c4be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c4bf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c22f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bde6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bdebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bded0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bdf24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bdf38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bdf94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bdfa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be07c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be0cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be0e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be14c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be1a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be1b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be21c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003be26c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c1280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c12dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c56ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c56c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ca74c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ca79c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c9cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c9d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c9d58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c9d6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c9dbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c9dd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c9e28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c9e3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c9e8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c9ea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c9eec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c9f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c9f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c9f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c9fc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c9fd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ca020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ca030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ca07c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ca08c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ca0dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ca0ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ca144: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ca154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ca1a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ca1b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ca1e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ca1f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ca200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ca210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ca220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ca230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c0f28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c0f3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c0f50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c0f64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c0f74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c0f84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbb90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbc00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbc5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbc6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbcc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbcd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbd24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbd34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbd8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbd9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbdec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbdfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbe48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbe58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbeb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbf0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbf1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbf40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbf60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbf70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbf80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cbf90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c3538: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c3548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c35ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c35c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bdaac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bdbec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bdc00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bdc58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bdc6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bdcbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bdcd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bdd24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bdd38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bdd88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bdd9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bddf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bde04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bde58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cc6a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cc6b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003cc6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c9728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c973c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c9750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c9764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c9778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c9788: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c9798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c3e48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c2f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c2f70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c2f8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c2f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bc214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c59ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c59fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c256c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c257c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c25cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c25dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c2628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c2638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c265c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c2674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003c2684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bae00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bae14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bae60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bae74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003baec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003baed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003baf20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003baf34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003baf84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003baf98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bafe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003baff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb0a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb0bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb11c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb1d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb1e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb29c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb2ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb2fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb30c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb3b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb3c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb4a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb4b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb4c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003bb4d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b3970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003badac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003b3974) */
/* WARNING: Removing unreachable block (ram,0x0001003bb4dc) */
/* WARNING: Removing unreachable block (ram,0x0001003bb4cc) */
/* WARNING: Removing unreachable block (ram,0x0001003bb4bc) */
/* WARNING: Removing unreachable block (ram,0x0001003bb4ac) */
/* WARNING: Removing unreachable block (ram,0x0001003bb49c) */
/* WARNING: Removing unreachable block (ram,0x0001003bb48c) */
/* WARNING: Removing unreachable block (ram,0x0001003bb47c) */
/* WARNING: Removing unreachable block (ram,0x0001003bb46c) */
/* WARNING: Removing unreachable block (ram,0x0001003bb45c) */
/* WARNING: Removing unreachable block (ram,0x0001003bb434) */
/* WARNING: Removing unreachable block (ram,0x0001003bb508) */
/* WARNING: Removing unreachable block (ram,0x0001003bb450) */
/* WARNING: Removing unreachable block (ram,0x0001003bb424) */
/* WARNING: Removing unreachable block (ram,0x0001003bb3cc) */
/* WARNING: Removing unreachable block (ram,0x0001003bb3bc) */
/* WARNING: Removing unreachable block (ram,0x0001003bb36c) */
/* WARNING: Removing unreachable block (ram,0x0001003bb35c) */
/* WARNING: Removing unreachable block (ram,0x0001003bb310) */
/* WARNING: Removing unreachable block (ram,0x0001003bb300) */
/* WARNING: Removing unreachable block (ram,0x0001003bb2b0) */
/* WARNING: Removing unreachable block (ram,0x0001003bb2a0) */
/* WARNING: Removing unreachable block (ram,0x0001003bb24c) */
/* WARNING: Removing unreachable block (ram,0x0001003bb23c) */
/* WARNING: Removing unreachable block (ram,0x0001003bb1e8) */
/* WARNING: Removing unreachable block (ram,0x0001003bb1d8) */
/* WARNING: Removing unreachable block (ram,0x0001003bb188) */
/* WARNING: Removing unreachable block (ram,0x0001003bb174) */
/* WARNING: Removing unreachable block (ram,0x0001003bb120) */
/* WARNING: Removing unreachable block (ram,0x0001003bb10c) */
/* WARNING: Removing unreachable block (ram,0x0001003bb0c0) */
/* WARNING: Removing unreachable block (ram,0x0001003bb0ac) */
/* WARNING: Removing unreachable block (ram,0x0001003bb05c) */
/* WARNING: Removing unreachable block (ram,0x0001003bb048) */
/* WARNING: Removing unreachable block (ram,0x0001003baffc) */
/* WARNING: Removing unreachable block (ram,0x0001003bafe8) */
/* WARNING: Removing unreachable block (ram,0x0001003baf9c) */
/* WARNING: Removing unreachable block (ram,0x0001003baf88) */
/* WARNING: Removing unreachable block (ram,0x0001003baf38) */
/* WARNING: Removing unreachable block (ram,0x0001003baf24) */
/* WARNING: Removing unreachable block (ram,0x0001003baed8) */
/* WARNING: Removing unreachable block (ram,0x0001003baec4) */
/* WARNING: Removing unreachable block (ram,0x0001003bae78) */
/* WARNING: Removing unreachable block (ram,0x0001003bae64) */
/* WARNING: Removing unreachable block (ram,0x0001003bae18) */
/* WARNING: Removing unreachable block (ram,0x0001003bae04) */
/* WARNING: Removing unreachable block (ram,0x0001003c2688) */
/* WARNING: Removing unreachable block (ram,0x0001003c2678) */
/* WARNING: Removing unreachable block (ram,0x0001003c2660) */
/* WARNING: Removing unreachable block (ram,0x0001003c263c) */
/* WARNING: Removing unreachable block (ram,0x0001003c262c) */
/* WARNING: Removing unreachable block (ram,0x0001003c25e0) */
/* WARNING: Removing unreachable block (ram,0x0001003c25d0) */
/* WARNING: Removing unreachable block (ram,0x0001003c2580) */
/* WARNING: Removing unreachable block (ram,0x0001003c2570) */
/* WARNING: Removing unreachable block (ram,0x0001003c5a00) */
/* WARNING: Removing unreachable block (ram,0x0001003c59f0) */
/* WARNING: Removing unreachable block (ram,0x0001003bc218) */
/* WARNING: Removing unreachable block (ram,0x0001003c2fa0) */
/* WARNING: Removing unreachable block (ram,0x0001003c2f74) */
/* WARNING: Removing unreachable block (ram,0x0001003c2f5c) */
/* WARNING: Removing unreachable block (ram,0x0001003c979c) */
/* WARNING: Removing unreachable block (ram,0x0001003c978c) */
/* WARNING: Removing unreachable block (ram,0x0001003c9768) */
/* WARNING: Removing unreachable block (ram,0x0001003c9754) */
/* WARNING: Removing unreachable block (ram,0x0001003c9740) */
/* WARNING: Removing unreachable block (ram,0x0001003c972c) */
/* WARNING: Removing unreachable block (ram,0x0001003cc6b4) */
/* WARNING: Removing unreachable block (ram,0x0001003cc6a4) */
/* WARNING: Removing unreachable block (ram,0x0001003bde5c) */
/* WARNING: Removing unreachable block (ram,0x0001003bde08) */
/* WARNING: Removing unreachable block (ram,0x0001003bddf4) */
/* WARNING: Removing unreachable block (ram,0x0001003bdda0) */
/* WARNING: Removing unreachable block (ram,0x0001003bdd8c) */
/* WARNING: Removing unreachable block (ram,0x0001003bdd3c) */
/* WARNING: Removing unreachable block (ram,0x0001003bdd28) */
/* WARNING: Removing unreachable block (ram,0x0001003bdcd4) */
/* WARNING: Removing unreachable block (ram,0x0001003bdcc0) */
/* WARNING: Removing unreachable block (ram,0x0001003bdc70) */
/* WARNING: Removing unreachable block (ram,0x0001003bdc5c) */
/* WARNING: Removing unreachable block (ram,0x0001003bdc04) */
/* WARNING: Removing unreachable block (ram,0x0001003bdbf0) */
/* WARNING: Removing unreachable block (ram,0x0001003bdab0) */
/* WARNING: Removing unreachable block (ram,0x0001003c35c8) */
/* WARNING: Removing unreachable block (ram,0x0001003c35b0) */
/* WARNING: Removing unreachable block (ram,0x0001003c354c) */
/* WARNING: Removing unreachable block (ram,0x0001003c35c0) */
/* WARNING: Removing unreachable block (ram,0x0001003c3584) */
/* WARNING: Removing unreachable block (ram,0x0001003c353c) */
/* WARNING: Removing unreachable block (ram,0x0001003cbf94) */
/* WARNING: Removing unreachable block (ram,0x0001003cbf84) */
/* WARNING: Removing unreachable block (ram,0x0001003cbf74) */
/* WARNING: Removing unreachable block (ram,0x0001003cbf64) */
/* WARNING: Removing unreachable block (ram,0x0001003cbf54) */
/* WARNING: Removing unreachable block (ram,0x0001003cbf44) */
/* WARNING: Removing unreachable block (ram,0x0001003cbf20) */
/* WARNING: Removing unreachable block (ram,0x0001003cbf10) */
/* WARNING: Removing unreachable block (ram,0x0001003cbebc) */
/* WARNING: Removing unreachable block (ram,0x0001003cbeac) */
/* WARNING: Removing unreachable block (ram,0x0001003cbe5c) */
/* WARNING: Removing unreachable block (ram,0x0001003cbe4c) */
/* WARNING: Removing unreachable block (ram,0x0001003cbe00) */
/* WARNING: Removing unreachable block (ram,0x0001003cbdf0) */
/* WARNING: Removing unreachable block (ram,0x0001003cbda0) */
/* WARNING: Removing unreachable block (ram,0x0001003cbd90) */
/* WARNING: Removing unreachable block (ram,0x0001003cbd38) */
/* WARNING: Removing unreachable block (ram,0x0001003cbd28) */
/* WARNING: Removing unreachable block (ram,0x0001003cbcdc) */
/* WARNING: Removing unreachable block (ram,0x0001003cbccc) */
/* WARNING: Removing unreachable block (ram,0x0001003cbc70) */
/* WARNING: Removing unreachable block (ram,0x0001003cbc60) */
/* WARNING: Removing unreachable block (ram,0x0001003cbc04) */
/* WARNING: Removing unreachable block (ram,0x0001003cbbf4) */
/* WARNING: Removing unreachable block (ram,0x0001003cbba4) */
/* WARNING: Removing unreachable block (ram,0x0001003cbb94) */
/* WARNING: Removing unreachable block (ram,0x0001003c0f88) */
/* WARNING: Removing unreachable block (ram,0x0001003c0f78) */
/* WARNING: Removing unreachable block (ram,0x0001003c0f54) */
/* WARNING: Removing unreachable block (ram,0x0001003c0f40) */
/* WARNING: Removing unreachable block (ram,0x0001003c0f2c) */
/* WARNING: Removing unreachable block (ram,0x0001003ca234) */
/* WARNING: Removing unreachable block (ram,0x0001003ca224) */
/* WARNING: Removing unreachable block (ram,0x0001003ca214) */
/* WARNING: Removing unreachable block (ram,0x0001003ca204) */
/* WARNING: Removing unreachable block (ram,0x0001003ca1f4) */
/* WARNING: Removing unreachable block (ram,0x0001003ca1e4) */
/* WARNING: Removing unreachable block (ram,0x0001003ca1bc) */
/* WARNING: Removing unreachable block (ram,0x0001003ca268) */
/* WARNING: Removing unreachable block (ram,0x0001003ca1d8) */
/* WARNING: Removing unreachable block (ram,0x0001003ca1ac) */
/* WARNING: Removing unreachable block (ram,0x0001003ca158) */
/* WARNING: Removing unreachable block (ram,0x0001003ca148) */
/* WARNING: Removing unreachable block (ram,0x0001003ca0f0) */
/* WARNING: Removing unreachable block (ram,0x0001003ca0e0) */
/* WARNING: Removing unreachable block (ram,0x0001003ca090) */
/* WARNING: Removing unreachable block (ram,0x0001003ca080) */
/* WARNING: Removing unreachable block (ram,0x0001003ca034) */
/* WARNING: Removing unreachable block (ram,0x0001003ca024) */
/* WARNING: Removing unreachable block (ram,0x0001003c9fd4) */
/* WARNING: Removing unreachable block (ram,0x0001003c9fc4) */
/* WARNING: Removing unreachable block (ram,0x0001003c9f70) */
/* WARNING: Removing unreachable block (ram,0x0001003c9f5c) */
/* WARNING: Removing unreachable block (ram,0x0001003c9f04) */
/* WARNING: Removing unreachable block (ram,0x0001003c9ef0) */
/* WARNING: Removing unreachable block (ram,0x0001003c9ea4) */
/* WARNING: Removing unreachable block (ram,0x0001003c9e90) */
/* WARNING: Removing unreachable block (ram,0x0001003c9e40) */
/* WARNING: Removing unreachable block (ram,0x0001003c9e2c) */
/* WARNING: Removing unreachable block (ram,0x0001003c9dd4) */
/* WARNING: Removing unreachable block (ram,0x0001003c9dc0) */
/* WARNING: Removing unreachable block (ram,0x0001003c9d70) */
/* WARNING: Removing unreachable block (ram,0x0001003c9d5c) */
/* WARNING: Removing unreachable block (ram,0x0001003c9d08) */
/* WARNING: Removing unreachable block (ram,0x0001003c9cf4) */
/* WARNING: Removing unreachable block (ram,0x0001003ca7a0) */
/* WARNING: Removing unreachable block (ram,0x0001003ca7e0) */
/* WARNING: Removing unreachable block (ram,0x0001003ca750) */
/* WARNING: Removing unreachable block (ram,0x0001003c56c8) */
/* WARNING: Removing unreachable block (ram,0x0001003c56b0) */
/* WARNING: Removing unreachable block (ram,0x0001003c56b4) */
/* WARNING: Removing unreachable block (ram,0x0001003c56c0) */
/* WARNING: Removing unreachable block (ram,0x0001003c1284) */
/* WARNING: Removing unreachable block (ram,0x0001003be270) */
/* WARNING: Removing unreachable block (ram,0x0001003be220) */
/* WARNING: Removing unreachable block (ram,0x0001003be20c) */
/* WARNING: Removing unreachable block (ram,0x0001003be1bc) */
/* WARNING: Removing unreachable block (ram,0x0001003be1a8) */
/* WARNING: Removing unreachable block (ram,0x0001003be150) */
/* WARNING: Removing unreachable block (ram,0x0001003be13c) */
/* WARNING: Removing unreachable block (ram,0x0001003be0e4) */
/* WARNING: Removing unreachable block (ram,0x0001003be0d0) */
/* WARNING: Removing unreachable block (ram,0x0001003be080) */
/* WARNING: Removing unreachable block (ram,0x0001003be06c) */
/* WARNING: Removing unreachable block (ram,0x0001003be018) */
/* WARNING: Removing unreachable block (ram,0x0001003be004) */
/* WARNING: Removing unreachable block (ram,0x0001003bdfac) */
/* WARNING: Removing unreachable block (ram,0x0001003bdf98) */
/* WARNING: Removing unreachable block (ram,0x0001003bdf3c) */
/* WARNING: Removing unreachable block (ram,0x0001003bdf28) */
/* WARNING: Removing unreachable block (ram,0x0001003bded4) */
/* WARNING: Removing unreachable block (ram,0x0001003bdec0) */
/* WARNING: Removing unreachable block (ram,0x0001003bde70) */
/* WARNING: Removing unreachable block (ram,0x0001003c4bf8) */
/* WARNING: Removing unreachable block (ram,0x0001003c4be8) */
/* WARNING: Removing unreachable block (ram,0x0001003c4bd8) */
/* WARNING: Removing unreachable block (ram,0x0001003c4bc8) */
/* WARNING: Removing unreachable block (ram,0x0001003c4bb8) */
/* WARNING: Removing unreachable block (ram,0x0001003c4b94) */
/* WARNING: Removing unreachable block (ram,0x0001003c4b84) */
/* WARNING: Removing unreachable block (ram,0x0001003c4b30) */
/* WARNING: Removing unreachable block (ram,0x0001003c4b20) */
/* WARNING: Removing unreachable block (ram,0x0001003c4ad4) */
/* WARNING: Removing unreachable block (ram,0x0001003c4a70) */
/* WARNING: Removing unreachable block (ram,0x0001003cb8f4) */
/* WARNING: Removing unreachable block (ram,0x0001003cb8e4) */
/* WARNING: Removing unreachable block (ram,0x0001003cb8d4) */
/* WARNING: Removing unreachable block (ram,0x0001003cb8b0) */
/* WARNING: Removing unreachable block (ram,0x0001003cb8a0) */
/* WARNING: Removing unreachable block (ram,0x0001003cb854) */
/* WARNING: Removing unreachable block (ram,0x0001003cb844) */
/* WARNING: Removing unreachable block (ram,0x0001003cb7f4) */
/* WARNING: Removing unreachable block (ram,0x0001003cb7e4) */
/* WARNING: Removing unreachable block (ram,0x0001003cb798) */
/* WARNING: Removing unreachable block (ram,0x0001003cb788) */
/* WARNING: Removing unreachable block (ram,0x0001003cb73c) */
/* WARNING: Removing unreachable block (ram,0x0001003cb72c) */
/* WARNING: Removing unreachable block (ram,0x0001003cb6e0) */
/* WARNING: Removing unreachable block (ram,0x0001003cb6d0) */
/* WARNING: Removing unreachable block (ram,0x0001003c13f4) */
/* WARNING: Removing unreachable block (ram,0x0001003c13dc) */
/* WARNING: Removing unreachable block (ram,0x0001003c92a0) */
/* WARNING: Removing unreachable block (ram,0x0001003b0060) */
/* WARNING: Removing unreachable block (ram,0x0001003bd520) */
/* WARNING: Removing unreachable block (ram,0x0001003bd510) */
/* WARNING: Removing unreachable block (ram,0x0001003bd500) */
/* WARNING: Removing unreachable block (ram,0x0001003bd4f0) */
/* WARNING: Removing unreachable block (ram,0x0001003bd4e0) */
/* WARNING: Removing unreachable block (ram,0x0001003bd4d0) */
/* WARNING: Removing unreachable block (ram,0x0001003bd4c0) */
/* WARNING: Removing unreachable block (ram,0x0001003bd4b0) */
/* WARNING: Removing unreachable block (ram,0x0001003bd4a0) */
/* WARNING: Removing unreachable block (ram,0x0001003bd490) */
/* WARNING: Removing unreachable block (ram,0x0001003bd480) */
/* WARNING: Removing unreachable block (ram,0x0001003bd470) */
/* WARNING: Removing unreachable block (ram,0x0001003bd460) */
/* WARNING: Removing unreachable block (ram,0x0001003bd450) */
/* WARNING: Removing unreachable block (ram,0x0001003bd3e0) */
/* WARNING: Removing unreachable block (ram,0x0001003bd554) */
/* WARNING: Removing unreachable block (ram,0x0001003bd3fc) */
/* WARNING: Removing unreachable block (ram,0x0001003bd558) */
/* WARNING: Removing unreachable block (ram,0x0001003bd414) */
/* WARNING: Removing unreachable block (ram,0x0001003bd55c) */
/* WARNING: Removing unreachable block (ram,0x0001003bd42c) */
/* WARNING: Removing unreachable block (ram,0x0001003bd560) */
/* WARNING: Removing unreachable block (ram,0x0001003bd444) */
/* WARNING: Removing unreachable block (ram,0x0001003bd3d0) */
/* WARNING: Removing unreachable block (ram,0x0001003bd384) */
/* WARNING: Removing unreachable block (ram,0x0001003bd374) */
/* WARNING: Removing unreachable block (ram,0x0001003bd324) */
/* WARNING: Removing unreachable block (ram,0x0001003bd314) */
/* WARNING: Removing unreachable block (ram,0x0001003bd2c4) */
/* WARNING: Removing unreachable block (ram,0x0001003bd2b4) */
/* WARNING: Removing unreachable block (ram,0x0001003bd260) */
/* WARNING: Removing unreachable block (ram,0x0001003bd250) */
/* WARNING: Removing unreachable block (ram,0x0001003bd200) */
/* WARNING: Removing unreachable block (ram,0x0001003bd1f0) */
/* WARNING: Removing unreachable block (ram,0x0001003bd1a0) */
/* WARNING: Removing unreachable block (ram,0x0001003bd190) */
/* WARNING: Removing unreachable block (ram,0x0001003bd140) */
/* WARNING: Removing unreachable block (ram,0x0001003bd130) */
/* WARNING: Removing unreachable block (ram,0x0001003bd0e0) */
/* WARNING: Removing unreachable block (ram,0x0001003bd0d0) */
/* WARNING: Removing unreachable block (ram,0x0001003bd080) */
/* WARNING: Removing unreachable block (ram,0x0001003bd070) */
/* WARNING: Removing unreachable block (ram,0x0001003bd01c) */
/* WARNING: Removing unreachable block (ram,0x0001003bd00c) */
/* WARNING: Removing unreachable block (ram,0x0001003bcfbc) */
/* WARNING: Removing unreachable block (ram,0x0001003bcfa8) */
/* WARNING: Removing unreachable block (ram,0x0001003bcf58) */
/* WARNING: Removing unreachable block (ram,0x0001003bcf44) */
/* WARNING: Removing unreachable block (ram,0x0001003bcef0) */
/* WARNING: Removing unreachable block (ram,0x0001003bcedc) */
/* WARNING: Removing unreachable block (ram,0x0001003bce88) */
/* WARNING: Removing unreachable block (ram,0x0001003bce74) */
/* WARNING: Removing unreachable block (ram,0x0001003bce24) */
/* WARNING: Removing unreachable block (ram,0x0001003bce10) */
/* WARNING: Removing unreachable block (ram,0x0001003bcdc0) */
/* WARNING: Removing unreachable block (ram,0x0001003bcdac) */
/* WARNING: Removing unreachable block (ram,0x0001003bcd5c) */
/* WARNING: Removing unreachable block (ram,0x0001003bcd48) */
/* WARNING: Removing unreachable block (ram,0x0001003bccf8) */
/* WARNING: Removing unreachable block (ram,0x0001003bcce4) */
/* WARNING: Removing unreachable block (ram,0x0001003bcc94) */
/* WARNING: Removing unreachable block (ram,0x0001003bcc80) */
/* WARNING: Removing unreachable block (ram,0x0001003bcc30) */
/* WARNING: Removing unreachable block (ram,0x0001003bcc1c) */
/* WARNING: Removing unreachable block (ram,0x0001003bcbcc) */
/* WARNING: Removing unreachable block (ram,0x0001003bcbb8) */
/* WARNING: Removing unreachable block (ram,0x0001003bcb68) */
/* WARNING: Removing unreachable block (ram,0x0001003bcb54) */
/* WARNING: Removing unreachable block (ram,0x0001003bcb00) */
/* WARNING: Removing unreachable block (ram,0x0001003bcaec) */
/* WARNING: Removing unreachable block (ram,0x0001003bca9c) */
/* WARNING: Removing unreachable block (ram,0x0001003bca88) */
/* WARNING: Removing unreachable block (ram,0x0001003bca38) */
/* WARNING: Removing unreachable block (ram,0x0001003bca24) */
/* WARNING: Removing unreachable block (ram,0x0001003bc9d0) */
/* WARNING: Removing unreachable block (ram,0x0001003bc9bc) */
/* WARNING: Removing unreachable block (ram,0x0001003bc968) */
/* WARNING: Removing unreachable block (ram,0x0001003bc954) */
/* WARNING: Removing unreachable block (ram,0x0001003bc904) */
/* WARNING: Removing unreachable block (ram,0x0001003bc8f0) */
/* WARNING: Removing unreachable block (ram,0x0001003bc89c) */
/* WARNING: Removing unreachable block (ram,0x0001003bc888) */
/* WARNING: Removing unreachable block (ram,0x0001003bc838) */
/* WARNING: Removing unreachable block (ram,0x0001003bc824) */
/* WARNING: Removing unreachable block (ram,0x0001003bc7cc) */
/* WARNING: Removing unreachable block (ram,0x0001003bc7b8) */
/* WARNING: Removing unreachable block (ram,0x0001003bc708) */
/* WARNING: Removing unreachable block (ram,0x0001003c2220) */
/* WARNING: Removing unreachable block (ram,0x0001003c5788) */
/* WARNING: Removing unreachable block (ram,0x0001003c5764) */
/* WARNING: Removing unreachable block (ram,0x0001003c5744) */
/* WARNING: Removing unreachable block (ram,0x0001003c93d8) */
/* WARNING: Removing unreachable block (ram,0x0001003c93b0) */
/* WARNING: Removing unreachable block (ram,0x0001003c9370) */
/* WARNING: Removing unreachable block (ram,0x0001003cd128) */
/* WARNING: Removing unreachable block (ram,0x0001003cd118) */
/* WARNING: Removing unreachable block (ram,0x0001003cd108) */
/* WARNING: Removing unreachable block (ram,0x0001003cd0f8) */
/* WARNING: Removing unreachable block (ram,0x0001003cd0e8) */
/* WARNING: Removing unreachable block (ram,0x0001003cd0d8) */
/* WARNING: Removing unreachable block (ram,0x0001003cd0c8) */
/* WARNING: Removing unreachable block (ram,0x0001003cd0a0) */
/* WARNING: Removing unreachable block (ram,0x0001003cd154) */
/* WARNING: Removing unreachable block (ram,0x0001003cd0bc) */
/* WARNING: Removing unreachable block (ram,0x0001003cd090) */
/* WARNING: Removing unreachable block (ram,0x0001003cd040) */
/* WARNING: Removing unreachable block (ram,0x0001003cd030) */
/* WARNING: Removing unreachable block (ram,0x0001003ccfd8) */
/* WARNING: Removing unreachable block (ram,0x0001003ccfc8) */
/* WARNING: Removing unreachable block (ram,0x0001003ccf6c) */
/* WARNING: Removing unreachable block (ram,0x0001003ccf5c) */
/* WARNING: Removing unreachable block (ram,0x0001003ccee8) */
/* WARNING: Removing unreachable block (ram,0x0001003cced8) */
/* WARNING: Removing unreachable block (ram,0x0001003cce88) */
/* WARNING: Removing unreachable block (ram,0x0001003cce78) */
/* WARNING: Removing unreachable block (ram,0x0001003cce24) */
/* WARNING: Removing unreachable block (ram,0x0001003cce14) */
/* WARNING: Removing unreachable block (ram,0x0001003ccdbc) */
/* WARNING: Removing unreachable block (ram,0x0001003ccda8) */
/* WARNING: Removing unreachable block (ram,0x0001003ccd50) */
/* WARNING: Removing unreachable block (ram,0x0001003ccd3c) */
/* WARNING: Removing unreachable block (ram,0x0001003ccce4) */
/* WARNING: Removing unreachable block (ram,0x0001003cccd0) */
/* WARNING: Removing unreachable block (ram,0x0001003ccc80) */
/* WARNING: Removing unreachable block (ram,0x0001003ccc6c) */
/* WARNING: Removing unreachable block (ram,0x0001003ccc18) */
/* WARNING: Removing unreachable block (ram,0x0001003ccc04) */
/* WARNING: Removing unreachable block (ram,0x0001003ccbb4) */
/* WARNING: Removing unreachable block (ram,0x0001003ccba0) */
/* WARNING: Removing unreachable block (ram,0x0001003ccb54) */
/* WARNING: Removing unreachable block (ram,0x0001003ccb40) */
/* WARNING: Removing unreachable block (ram,0x0001003c8624) */
/* WARNING: Removing unreachable block (ram,0x0001003c85d4) */
/* WARNING: Removing unreachable block (ram,0x0001003c8578) */
/* WARNING: Removing unreachable block (ram,0x0001003c8450) */
/* WARNING: Removing unreachable block (ram,0x0001003c8404) */
/* WARNING: Removing unreachable block (ram,0x0001003c83c4) */
/* WARNING: Removing unreachable block (ram,0x0001003cb300) */
/* WARNING: Removing unreachable block (ram,0x0001003cb2e8) */
/* WARNING: Removing unreachable block (ram,0x0001003cb2c0) */
/* WARNING: Removing unreachable block (ram,0x0001003cb2b0) */
/* WARNING: Removing unreachable block (ram,0x0001003cb2a0) */
/* WARNING: Removing unreachable block (ram,0x0001003cb0dc) */
/* WARNING: Removing unreachable block (ram,0x0001003cb0c4) */
/* WARNING: Removing unreachable block (ram,0x0001003cb0b4) */
/* WARNING: Removing unreachable block (ram,0x0001003cb0a4) */
/* WARNING: Removing unreachable block (ram,0x0001003caf50) */
/* WARNING: Removing unreachable block (ram,0x0001003caf5c) */
/* WARNING: Removing unreachable block (ram,0x0001003cb07c) */
/* WARNING: Removing unreachable block (ram,0x0001003cb088) */
/* WARNING: Removing unreachable block (ram,0x0001003caf40) */
/* WARNING: Removing unreachable block (ram,0x0001003ca2ec) */
/* WARNING: Removing unreachable block (ram,0x0001003c3bfc) */
/* WARNING: Removing unreachable block (ram,0x0001003c3be4) */
/* WARNING: Removing unreachable block (ram,0x0001003c3bc0) */
/* WARNING: Removing unreachable block (ram,0x0001003c3bb0) */
/* WARNING: Removing unreachable block (ram,0x0001003c3b60) */
/* WARNING: Removing unreachable block (ram,0x0001003c3b50) */
/* WARNING: Removing unreachable block (ram,0x0001003c3b00) */
/* WARNING: Removing unreachable block (ram,0x0001003c3af0) */
/* WARNING: Removing unreachable block (ram,0x0001003bec0c) */
/* WARNING: Removing unreachable block (ram,0x0001003bebfc) */
/* WARNING: Removing unreachable block (ram,0x0001003bebec) */
/* WARNING: Removing unreachable block (ram,0x0001003bebdc) */
/* WARNING: Removing unreachable block (ram,0x0001003bebcc) */
/* WARNING: Removing unreachable block (ram,0x0001003bebbc) */
/* WARNING: Removing unreachable block (ram,0x0001003bebac) */
/* WARNING: Removing unreachable block (ram,0x0001003beb9c) */
/* WARNING: Removing unreachable block (ram,0x0001003beb8c) */
/* WARNING: Removing unreachable block (ram,0x0001003beb7c) */
/* WARNING: Removing unreachable block (ram,0x0001003beb6c) */
/* WARNING: Removing unreachable block (ram,0x0001003beb5c) */
/* WARNING: Removing unreachable block (ram,0x0001003bea14) */
/* WARNING: Removing unreachable block (ram,0x0001003bec40) */
/* WARNING: Removing unreachable block (ram,0x0001003bea30) */
/* WARNING: Removing unreachable block (ram,0x0001003bec44) */
/* WARNING: Removing unreachable block (ram,0x0001003bea48) */
/* WARNING: Removing unreachable block (ram,0x0001003bec48) */
/* WARNING: Removing unreachable block (ram,0x0001003bea60) */
/* WARNING: Removing unreachable block (ram,0x0001003bec4c) */
/* WARNING: Removing unreachable block (ram,0x0001003bea78) */
/* WARNING: Removing unreachable block (ram,0x0001003bec50) */
/* WARNING: Removing unreachable block (ram,0x0001003bea90) */
/* WARNING: Removing unreachable block (ram,0x0001003bec54) */
/* WARNING: Removing unreachable block (ram,0x0001003beaa8) */
/* WARNING: Removing unreachable block (ram,0x0001003bec58) */
/* WARNING: Removing unreachable block (ram,0x0001003beac0) */
/* WARNING: Removing unreachable block (ram,0x0001003bec5c) */
/* WARNING: Removing unreachable block (ram,0x0001003bead8) */
/* WARNING: Removing unreachable block (ram,0x0001003bec60) */
/* WARNING: Removing unreachable block (ram,0x0001003beaf0) */
/* WARNING: Removing unreachable block (ram,0x0001003bec64) */
/* WARNING: Removing unreachable block (ram,0x0001003beb08) */
/* WARNING: Removing unreachable block (ram,0x0001003bec68) */
/* WARNING: Removing unreachable block (ram,0x0001003beb20) */
/* WARNING: Removing unreachable block (ram,0x0001003bec6c) */
/* WARNING: Removing unreachable block (ram,0x0001003beb38) */
/* WARNING: Removing unreachable block (ram,0x0001003bec70) */
/* WARNING: Removing unreachable block (ram,0x0001003beb50) */
/* WARNING: Removing unreachable block (ram,0x0001003bea04) */
/* WARNING: Removing unreachable block (ram,0x0001003be9b8) */
/* WARNING: Removing unreachable block (ram,0x0001003be9a8) */
/* WARNING: Removing unreachable block (ram,0x0001003be958) */
/* WARNING: Removing unreachable block (ram,0x0001003be948) */
/* WARNING: Removing unreachable block (ram,0x0001003be8f8) */
/* WARNING: Removing unreachable block (ram,0x0001003be8e8) */
/* WARNING: Removing unreachable block (ram,0x0001003be898) */
/* WARNING: Removing unreachable block (ram,0x0001003be888) */
/* WARNING: Removing unreachable block (ram,0x0001003be838) */
/* WARNING: Removing unreachable block (ram,0x0001003be828) */
/* WARNING: Removing unreachable block (ram,0x0001003be7d8) */
/* WARNING: Removing unreachable block (ram,0x0001003be7c8) */
/* WARNING: Removing unreachable block (ram,0x0001003be778) */
/* WARNING: Removing unreachable block (ram,0x0001003be768) */
/* WARNING: Removing unreachable block (ram,0x0001003be718) */
/* WARNING: Removing unreachable block (ram,0x0001003be708) */
/* WARNING: Removing unreachable block (ram,0x0001003be6b8) */
/* WARNING: Removing unreachable block (ram,0x0001003be6a8) */
/* WARNING: Removing unreachable block (ram,0x0001003be658) */
/* WARNING: Removing unreachable block (ram,0x0001003be648) */
/* WARNING: Removing unreachable block (ram,0x0001003be5f8) */
/* WARNING: Removing unreachable block (ram,0x0001003be5e8) */
/* WARNING: Removing unreachable block (ram,0x0001003be598) */
/* WARNING: Removing unreachable block (ram,0x0001003be588) */
/* WARNING: Removing unreachable block (ram,0x0001003be534) */
/* WARNING: Removing unreachable block (ram,0x0001003be524) */
/* WARNING: Removing unreachable block (ram,0x0001003be4d0) */
/* WARNING: Removing unreachable block (ram,0x0001003be4c0) */
/* WARNING: Removing unreachable block (ram,0x0001003be468) */
/* WARNING: Removing unreachable block (ram,0x0001003be458) */
/* WARNING: Removing unreachable block (ram,0x0001003be408) */
/* WARNING: Removing unreachable block (ram,0x0001003be3f8) */
/* WARNING: Removing unreachable block (ram,0x0001003be3a8) */
/* WARNING: Removing unreachable block (ram,0x0001003be398) */
/* WARNING: Removing unreachable block (ram,0x0001003be348) */
/* WARNING: Removing unreachable block (ram,0x0001003be338) */
/* WARNING: Removing unreachable block (ram,0x0001003be2e8) */
/* WARNING: Removing unreachable block (ram,0x0001003be2d4) */
/* WARNING: Removing unreachable block (ram,0x0001003be284) */
/* WARNING: Removing unreachable block (ram,0x0001003c8c30) */
/* WARNING: Removing unreachable block (ram,0x0001003c8c20) */
/* WARNING: Removing unreachable block (ram,0x0001003c8c10) */
/* WARNING: Removing unreachable block (ram,0x0001003c8c00) */
/* WARNING: Removing unreachable block (ram,0x0001003c8bf0) */
/* WARNING: Removing unreachable block (ram,0x0001003c8be0) */
/* WARNING: Removing unreachable block (ram,0x0001003c8bd0) */
/* WARNING: Removing unreachable block (ram,0x0001003c8bbc) */
/* WARNING: Removing unreachable block (ram,0x0001003c8ba0) */
/* WARNING: Removing unreachable block (ram,0x0001003c8b8c) */
/* WARNING: Removing unreachable block (ram,0x0001003c8b78) */
/* WARNING: Removing unreachable block (ram,0x0001003c8b5c) */
/* WARNING: Removing unreachable block (ram,0x0001003c8b4c) */
/* WARNING: Removing unreachable block (ram,0x0001003c8b30) */
/* WARNING: Removing unreachable block (ram,0x0001003c8b20) */
/* WARNING: Removing unreachable block (ram,0x0001003c8b10) */
/* WARNING: Removing unreachable block (ram,0x0001003c8b00) */
/* WARNING: Removing unreachable block (ram,0x0001003c8af0) */
/* WARNING: Removing unreachable block (ram,0x0001003c8ae0) */
/* WARNING: Removing unreachable block (ram,0x0001003c8ad0) */
/* WARNING: Removing unreachable block (ram,0x0001003c8ac0) */
/* WARNING: Removing unreachable block (ram,0x0001003c8ab0) */
/* WARNING: Removing unreachable block (ram,0x0001003c8a9c) */
/* WARNING: Removing unreachable block (ram,0x0001003c8a8c) */
/* WARNING: Removing unreachable block (ram,0x0001003c8a7c) */
/* WARNING: Removing unreachable block (ram,0x0001003c8a68) */
/* WARNING: Removing unreachable block (ram,0x0001003c8a58) */
/* WARNING: Removing unreachable block (ram,0x0001003c8a48) */
/* WARNING: Removing unreachable block (ram,0x0001003c8a38) */
/* WARNING: Removing unreachable block (ram,0x0001003c8a28) */
/* WARNING: Removing unreachable block (ram,0x0001003c8a0c) */
/* WARNING: Removing unreachable block (ram,0x0001003c89fc) */
/* WARNING: Removing unreachable block (ram,0x0001003c89ec) */
/* WARNING: Removing unreachable block (ram,0x0001003c89dc) */
/* WARNING: Removing unreachable block (ram,0x0001003c89cc) */
/* WARNING: Removing unreachable block (ram,0x0001003c89bc) */
/* WARNING: Removing unreachable block (ram,0x0001003c89ac) */
/* WARNING: Removing unreachable block (ram,0x0001003c899c) */
/* WARNING: Removing unreachable block (ram,0x0001003c898c) */
/* WARNING: Removing unreachable block (ram,0x0001003c897c) */
/* WARNING: Removing unreachable block (ram,0x0001003c896c) */
/* WARNING: Removing unreachable block (ram,0x0001003c88c4) */
/* WARNING: Removing unreachable block (ram,0x0001003c8870) */
/* WARNING: Removing unreachable block (ram,0x0001003c8830) */
/* WARNING: Removing unreachable block (ram,0x0001003c87ec) */
/* WARNING: Removing unreachable block (ram,0x0001003c87bc) */
/* WARNING: Removing unreachable block (ram,0x0001003c8730) */
/* WARNING: Removing unreachable block (ram,0x0001003c86ec) */
/* WARNING: Removing unreachable block (ram,0x0001003c86a8) */
/* WARNING: Removing unreachable block (ram,0x0001003c0b24) */
/* WARNING: Removing unreachable block (ram,0x0001003c0b14) */
/* WARNING: Removing unreachable block (ram,0x0001003af9c0) */
/* WARNING: Removing unreachable block (ram,0x0001003badb0) */
/* WARNING: Removing unreachable block (ram,0x0001003afb58) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code *******
FUN_1003af898(code *******param_1,code *******param_2,code *******param_3,code *******param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  char in_NG;
  undefined1 in_ZR;
  undefined1 uVar6;
  char in_OV;
  undefined1 uVar7;
  code *******pppppppcVar8;
  code *******pppppppcVar9;
  code *******pppppppcVar10;
  code *******pppppppcVar11;
  code *******pppppppcVar12;
  code *******pppppppcVar13;
  undefined *puVar14;
  code *******pppppppcVar15;
  code *******pppppppcVar16;
  code *******pppppppcVar17;
  code *******pppppppcVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 uVar21;
  code *******pppppppcVar22;
  code *******pppppppcVar23;
  code ******extraout_x8;
  undefined8 extraout_x8_00;
  code *******pppppppcVar24;
  code *******extraout_x8_01;
  code *******extraout_x8_02;
  undefined8 *extraout_x8_03;
  code ******extraout_x8_04;
  code *******pppppppcVar25;
  undefined8 extraout_x9;
  code *******extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  code *******extraout_x10;
  long extraout_x10_00;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 extraout_x11;
  ulong uVar26;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x13_01;
  ulong extraout_x15;
  ulong extraout_x15_00;
  ulong extraout_x15_01;
  ulong uVar27;
  code ******extraout_x16;
  code ******extraout_x16_00;
  ulong extraout_x17;
  ulong extraout_x17_00;
  ulong uVar28;
  code *******pppppppcVar29;
  char *pcVar30;
  undefined **ppuVar31;
  code *******unaff_x21;
  code *******pppppppcVar32;
  code *******pppppppcVar33;
  code *******unaff_x25;
  code *******unaff_x26;
  code ******ppppppcVar34;
  code *******unaff_x27;
  code *******pppppppcVar35;
  long lVar36;
  code *******unaff_x28;
  code *******pppppppcVar37;
  code ******unaff_x30;
  code *******pppppppcVar38;
  code ******in_stack_00000050;
  code ******in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  code ******in_stack_00000090;
  undefined8 in_stack_00000098;
  code ******in_stack_000000a0;
  code ******in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  code ******in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  code ******in_stack_000000e0;
  code ******in_stack_000000e8;
  code *******pppppppcStack_440;
  code *******pppppppcStack_438;
  code *******in_stack_fffffffffffffbd0;
  code *******pppppppcStack_420;
  code *******pppppppcStack_418;
  code ******in_stack_fffffffffffffbf8;
  code *******pppppppcStack_400;
  code *******pppppppcStack_3f8;
  code *******pppppppcStack_3f0;
  code *******pppppppcStack_3e8;
  code *******pppppppcStack_3e0;
  code *******pppppppcStack_3d8;
  code *******pppppppcStack_3d0;
  code *******pppppppcStack_3c8;
  code *******pppppppcStack_3c0;
  code *******pppppppcStack_3b8;
  code *******pppppppcStack_3b0;
  code *******pppppppcStack_3a8;
  code *******pppppppcStack_3a0;
  code *******pppppppcStack_398;
  code *******pppppppcStack_390;
  code *******pppppppcStack_388;
  code *******pppppppcStack_380;
  code *******pppppppcStack_378;
  code *******pppppppcStack_370;
  code *******pppppppcStack_368;
  code *******pppppppcStack_360;
  code *******pppppppcStack_358;
  code *******pppppppcStack_350;
  code *******pppppppcStack_348;
  code *******pppppppcStack_340;
  code *******pppppppcStack_338;
  code *******pppppppcStack_330;
  code *******pppppppcStack_328;
  code ******ppppppcStack_320;
  code *******pppppppcStack_318;
  code *******pppppppcStack_310;
  code *******pppppppcStack_308;
  code *******pppppppcStack_300;
  code ******ppppppcStack_2f8;
  code *******pppppppcStack_2f0;
  code *******apppppppcStack_2e8 [9];
  code *******pppppppcStack_2a0;
  code *******pppppppcStack_298;
  code *******pppppppcStack_290;
  code *******pppppppcStack_288;
  code *******pppppppcStack_1c8;
  code *******pppppppcStack_1b0;
  code *******pppppppcStack_1a8;
  undefined8 uStack_1a0;
  code *******pppppppcStack_198;
  code *******pppppppcStack_190;
  code *******pppppppcStack_188;
  code *******pppppppcStack_180;
  code *******pppppppcStack_178;
  code *******pppppppcStack_170;
  undefined1 auStack_168 [16];
  undefined1 auStack_f0 [48];
  code *******pppppppcStack_c0;
  code *******pppppppcStack_b0;
  code *******pppppppcStack_a8;
  code *******pppppppcStack_a0;
  code *******pppppppcStack_98;
  code *******pppppppcStack_90;
  code *******pppppppcStack_88;
  code *******pppppppcStack_80;
  code *******pppppppcStack_78;
  code *******pppppppcStack_70;
  code *******pppppppcStack_68;
  code *******pppppppcStack_60;
  code *******pppppppcStack_58;
  code *******pppppppcStack_50;
  code *******pppppppcStack_48;
  code *******pppppppcStack_40;
  code ******ppppppcStack_38;
  code *******pppppppcStack_30;
  code *******pppppppcStack_28;
  code *******pppppppcStack_20;
  code ******ppppppcStack_18;
  code *******apppppppcStack_10 [2];
  
  FUN_1003b0388();
  pppppppcVar11 = (code *******)&pppppppcStack_440;
  pppppppcVar12 = (code *******)&pppppppcStack_440;
  pppppppcVar13 = (code *******)&pppppppcStack_440;
  pppppppcVar15 = (code *******)&pppppppcStack_440;
  pppppppcVar16 = (code *******)&pppppppcStack_440;
  pppppppcVar18 = (code *******)&pppppppcStack_440;
  pppppppcVar23 = param_4;
  pppppppcStack_438 = param_1;
  FUN_1003af354();
  pppppppcStack_420 = param_2;
  ppppppcStack_18 = extraout_x8;
  func_0x0001003b03a0(param_2[4]);
  pppppppcVar35 = (code *******)&stack0xfffffffffffffbf8;
  FUN_1003b03b4(pppppppcVar35,param_3);
  pppppppcVar8 = (code *******)&UNK_10f7d0ef0;
  if (in_stack_fffffffffffffbf8 == (code ******)0x0) {
    pppppppcVar33 = (code *******)0x0;
  }
  else {
    pppppppcVar8 = (code *******)(in_stack_fffffffffffffbf8 + 3);
    pppppppcVar33 = (code *******)(ulong)*(uint *)((long)in_stack_fffffffffffffbf8 + 0xc);
  }
  pppppppcStack_1b0 = (code *******)&pppppppcStack_198;
  uStack_1a0 = (code *******)0x8;
  pppppppcStack_1a8 = (code *******)0x0;
  pcVar30 = (char *)param_4[1];
  if ((code *******)pcVar30 != (code *******)0x0) {
    unaff_x21 = (code *******)0x0;
    unaff_x26 = (code *******)&pppppppcStack_350;
    unaff_x25 = (code *******)&UNK_10f315a70;
    if (*(code *******)pcVar30 != (code ******)0x0) {
      pppppppcStack_3c0 = (code *******)0x0;
      pppppppcStack_3b8 = (code *******)0x0;
      FUN_1003b03f4();
      func_0x0001003b03fc(&pppppppcStack_3a0);
      pppppppcVar8 = *(code ********)pcVar30;
      pppppppcStack_368 = pppppppcVar8;
      func_0x000107c613d0();
      pppppppcStack_360 = pppppppcVar8;
      FUN_1003b055c(&pppppppcStack_3c0,&pppppppcStack_368);
      pppppppcStack_348 = pppppppcStack_398;
      pppppppcStack_350 = pppppppcStack_3a0;
      pppppppcStack_340 = pppppppcStack_390;
      pppppppcStack_398 = (code *******)0x0;
      pppppppcStack_390 = (code *******)0x0;
      pppppppcStack_3a0 = (code *******)0x0;
      pppppppcStack_330 = pppppppcStack_3b8;
      pppppppcStack_338 = pppppppcStack_3c0;
      pppppppcStack_328 = pppppppcStack_3b0;
      pppppppcStack_3c0 = (code *******)0x0;
      pppppppcStack_3b8 = (code *******)0x0;
      pppppppcStack_3b0 = (code *******)0x0;
      FUN_1003b058c(&pppppppcStack_1b0,&pppppppcStack_350);
      FUN_1003b0614(&pppppppcStack_350);
      FUN_1003b063c();
      pppppppcVar35 = (code *******)&pppppppcStack_3a0;
      goto code_r0x000107c60ca0;
    }
  }
  pppppppcStack_350 = (code *******)&pppppppcStack_338;
  pppppppcStack_340 = (code *******)0x10;
  pppppppcStack_348 = (code *******)0x0;
  pppppppcVar29 = (code *******)*param_4;
  if (pppppppcVar29 != (code *******)0x0) {
    pcVar30 = (char *)&pppppppcStack_368;
    unaff_x28 = (code *******)&pppppppcStack_3c0;
    unaff_x21 = (code *******)0x2;
    unaff_x25 = (code *******)&UNK_10f4ecf00;
    while( true ) {
      ppppppcVar34 = *pppppppcVar29;
      unaff_x26 = (code *******)0x0;
      if (ppppppcVar34 == (code ******)0x0) break;
      pppppppcVar35 = (code *******)pppppppcVar29[2];
      FUN_1003a8364();
      FUN_1003a83dc(&pppppppcStack_3c8,ppppppcVar34);
      pppppppcStack_3a0 = pppppppcVar35;
      func_0x000107c613d0();
      pppppppcStack_398 = pppppppcVar35;
      FUN_1003b055c(&pppppppcStack_3c0,&pppppppcStack_3a0);
      pppppppcVar35 = pppppppcStack_1b0;
      for (lVar36 = (long)pppppppcStack_1a8 * 0x30; lVar36 != 0; lVar36 = lVar36 + -0x30) {
        ppppppcVar34 = (code ******)(long)*(char *)((long)pppppppcVar35 + 0x17);
        pppppppcVar24 = pppppppcVar35;
        if ((long)ppppppcVar34 < 0) {
          ppppppcVar34 = pppppppcVar35[1];
          pppppppcVar24 = (code *******)*pppppppcVar35;
        }
        unaff_x30 = (code ******)(long)*(char *)((long)pppppppcVar35 + 0x2f);
        if ((long)unaff_x30 < 0) {
          pppppppcVar23 = (code *******)pppppppcVar35[3];
          unaff_x30 = pppppppcVar35[4];
        }
        else {
          pppppppcVar23 = pppppppcVar35 + 3;
        }
        FUN_1003b0660(&pppppppcStack_3c0,pppppppcVar24,ppppppcVar34);
        pppppppcVar35 = pppppppcVar35 + 6;
      }
      func_0x0001003b07b8();
      uVar21 = extraout_x11;
      pppppppcVar35 = extraout_x10;
      if (in_NG == in_OV) {
        uVar21 = extraout_x8_00;
        pppppppcVar35 = unaff_x28;
      }
      FUN_1003b0994(&pppppppcStack_368,pppppppcVar35,uVar21);
      if (pppppppcStack_368 != (code *******)0x1) {
        FUN_1003a8364();
        pppppppcStack_3a0 = (code *******)&pppppppcStack_3c8;
        pppppppcStack_398 = (code *******)FUN_1003ab990;
        pppppppcStack_390 = pppppppcVar8;
        pppppppcStack_388 = pppppppcVar33;
        FUN_1003b03f4();
        FUN_1003a9204(&pppppppcStack_3f0);
        func_0x0001003ac750(&pppppppcStack_3d8,pppppppcVar35,&pppppppcStack_3f0);
        func_0x000107c31050(&pppppppcStack_3d0,&pppppppcStack_360,&pppppppcStack_3d8);
        pppppppcStack_380 = (code *******)0x2;
        pppppppcStack_378 = pppppppcStack_3d0;
        pppppppcStack_3d0 = (code *******)0x0;
        func_0x000107c3a038();
        func_0x000107c3a0f4();
        pppppppcVar35 = (code *******)&pppppppcStack_3f0;
        goto code_r0x000107c60ca0;
      }
      FUN_1003b1b50(&pppppppcStack_3a0,&pppppppcStack_3c8);
      FUN_1003b1bcc(&pppppppcStack_350,&pppppppcStack_3a0);
      FUN_1003b1c5c(&pppppppcStack_3a0);
      pppppppcVar29 = pppppppcVar29 + 3;
      FUN_1003b1c84(&pppppppcStack_368);
      FUN_1003b063c();
      pppppppcVar35 = pppppppcStack_3c8;
      FUN_1003a8cb8();
      in_OV = '\0';
      in_NG = '\0';
      in_ZR = 1;
      unaff_x27 = (code *******)0x1;
    }
  }
  FUN_1003a8364();
  pppppppcVar38 = (code *******)0x1003afb70;
  pppppppcVar9 = pppppppcVar8;
  pppppppcVar22 = pppppppcVar33;
  FUN_1003a8480(&pppppppcStack_3c0);
  pppppppcVar24 = (code *******)(ulong)*(byte *)(param_4 + 3);
  pppppppcVar25 = (code *******)&UNK_10e5fb830;
  uVar26 = (ulong)*(byte *)(pppppppcVar24 + 0x21cbf706);
  lVar36 = uVar26 * 4 + 0x1003afb8c;
  pppppppcVar10 = pppppppcVar35;
  lVar19 = extraout_x13;
  uVar27 = extraout_x15;
  ppppppcVar34 = extraout_x16;
  uVar28 = extraout_x17;
  ppuVar31 = (undefined **)pcVar30;
  pppppppcVar37 = pppppppcStack_350;
  switch(*(byte *)(param_4 + 3)) {
  default:
    pppppppcVar22 = pppppppcStack_350;
    pppppppcVar23 = pppppppcStack_348;
  case 0xb:
  case 0x25:
  case 0x29:
  case 0x2b:
  case 0x31:
  case 0x33:
  case 0x35:
  case 0x37:
  case 0x39:
  case 0x3d:
  case 0x45:
  case 0x49:
  case 0x4b:
    func_0x0001003b1cac();
code_r0x0001003afb94:
    break;
  case 1:
  case 0x10:
    pppppppcVar24 = (code *******)&pppppppcStack_3a0;
    pppppppcVar22 = pppppppcStack_350;
    pppppppcVar23 = pppppppcStack_348;
  case 0x11:
    FUN_1003b1cc0(pppppppcVar24);
    break;
  case 2:
    pppppppcVar22 = pppppppcStack_350;
    pppppppcVar23 = pppppppcStack_348;
    func_0x0001003b1cac();
  case 0xf:
    break;
  case 3:
    FUN_1003adc64(&pppppppcStack_3a0);
    break;
  case 6:
  case 0x24:
  case 0x32:
  case 0x34:
  case 0x36:
  case 0x44:
    goto code_r0x0001003afc80;
  case 8:
  case 0x5a:
    goto LAB_1003afc58;
  case 10:
    goto code_r0x0001003afc18;
  case 0xc:
  case 0x1c:
  case 0x21:
    goto code_r0x0001003afc08;
  case 0xd:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
    goto code_r0x0001003afc3c;
  case 0xe:
    goto code_r0x0001003afbdc;
  case 0x19:
    goto code_r0x0001003afbf4;
  case 0x1b:
    goto code_r0x0001003afcb4;
  case 0x1d:
    goto LAB_1003afce8;
  case 0x1e:
  case 0x1f:
  case 0x53:
  case 0x5d:
  case 0x66:
  case 0x80:
  case 0x87:
  case 0x90:
  case 0xa6:
  case 0xb5:
  case 0xc2:
  case 0xca:
  case 0xd9:
  case 0xe1:
  case 0xe9:
  case 0xf1:
  case 0xff:
    goto code_r0x0001003afd10;
  case 0x26:
    goto code_r0x0001003afed8;
  case 0x28:
    goto code_r0x0001003afcdc;
  case 0x2a:
    goto code_r0x0001003afc34;
  case 0x2c:
    goto code_r0x0001003afe04;
  case 0x2e:
    goto code_r0x0001003aff24;
  case 0x30:
  case 0x69:
  case 0x93:
  case 0xc1:
  case 0xe0:
    goto code_r0x0001003afd28;
  case 0x38:
  case 0x6e:
  case 0x98:
    goto code_r0x0001003afd70;
  case 0x3a:
    break;
  case 0x3b:
  case 0x4d:
  case 0x4f:
    goto code_r0x0001003afb94;
  case 0x3c:
    goto code_r0x0001003aff4c;
  case 0x3e:
    goto code_r0x0001003afd64;
  case 0x40:
    goto code_r0x0001003aff64;
  case 0x42:
    goto code_r0x0001003afe50;
  case 0x46:
  case 0xbd:
  case 0xdc:
    goto code_r0x0001003afc9c;
  case 0x48:
    goto code_r0x0001003afe2c;
  case 0x4a:
    goto code_r0x0001003afebc;
  case 0x4c:
  case 0x55:
  case 0x82:
  case 0xa8:
  case 0xba:
  case 0xcc:
  case 0xeb:
    goto code_r0x0001003afd1c;
  case 0x4e:
    goto code_r0x0001003afc90;
  case 0x50:
  case 0x7d:
  case 0xa3:
  case 199:
  case 0xe6:
    goto code_r0x0001003afcc4;
  case 0x51:
  case 0xa4:
  case 200:
    goto code_r0x0001003afc6c;
  case 0x52:
  case 0x5c:
  case 0x7f:
  case 0x86:
  case 0xa5:
  case 0xc9:
  case 0xe8:
    goto code_r0x0001003afce4;
  case 0x54:
  case 0x5e:
  case 0x7a:
  case 0x81:
  case 0x88:
  case 0xa7:
  case 0xb4:
  case 0xbc:
  case 0xbf:
  case 0xcb:
  case 0xd8:
  case 0xde:
  case 0xea:
  case 0xf0:
  case 0xfe:
    goto code_r0x0001003afd3c;
  case 0x56:
  case 0x6a:
  case 0x70:
  case 0x83:
  case 0x94:
  case 0x9a:
  case 0xa9:
  case 0xcd:
  case 0xec:
    goto code_r0x0001003afd30;
  case 0x57:
  case 0x77:
  case 0xaa:
  case 0xce:
    goto code_r0x0001003afcb0;
  case 0x58:
  case 0xab:
  case 0xaf:
  case 0xcf:
  case 0xd3:
  case 0xf7:
    goto code_r0x0001003afcc8;
  case 0x59:
  case 0x61:
  case 0x8b:
  case 0xac:
  case 0xd0:
    goto code_r0x0001003afcd8;
  case 0x5b:
  case 0xd1:
    goto LAB_1003afc50;
  case 0x5f:
  case 0x89:
    goto code_r0x0001003afd60;
  case 0x60:
  case 100:
  case 0x68:
  case 0x73:
  case 0x75:
  case 0x8a:
  case 0x8e:
  case 0x92:
  case 0x9d:
  case 0x9f:
  case 0xbb:
  case 0xbe:
  case 0xc0:
  case 0xc4:
  case 0xdd:
  case 0xdf:
  case 0xe3:
  case 0xfa:
    goto code_r0x0001003afd20;
  case 0x62:
  case 0x8c:
  case 0xfb:
    goto code_r0x0001003afd18;
  case 99:
  case 0x8d:
    goto code_r0x0001003afd2c;
  case 0x65:
  case 0x78:
  case 0x8f:
  case 0xf6:
    goto code_r0x0001003afd40;
  case 0x67:
  case 0x91:
    goto code_r0x0001003afcd4;
  case 0x6b:
  case 0x71:
  case 0x95:
  case 0x9b:
  case 0xb6:
  case 0xb7:
  case 0xda:
  case 0xdb:
    goto code_r0x0001003afd58;
  case 0x6c:
  case 0x72:
  case 0x96:
  case 0x9c:
  case 0xc3:
  case 0xe2:
  case 0xf2:
  case 0xfc:
    goto code_r0x0001003afd5c;
  case 0x6d:
  case 0x76:
  case 0x97:
  case 0xa0:
  case 0xf5:
    goto LAB_1003afd54;
  case 0x6f:
  case 0x99:
    goto code_r0x0001003afcbc;
  case 0x74:
  case 0x9e:
    goto code_r0x0001003afd44;
  case 0x79:
    goto code_r0x0001003afd4c;
  case 0x7b:
  case 0xa1:
  case 0xc5:
  case 0xe4:
    goto code_r0x0001003afca0;
  case 0x7e:
  case 0xe7:
    goto code_r0x0001003afc60;
  case 0x84:
  case 0xad:
  case 0xae:
  case 0xed:
    goto code_r0x0001003afc54;
  case 0x85:
  case 0xd2:
  case 0xee:
    goto code_r0x0001003afc68;
  case 0xb0:
  case 0xd4:
  case 0xf8:
    goto code_r0x0001003afd14;
  case 0xb1:
  case 0xd5:
  case 0xf9:
    goto code_r0x0001003afd34;
  case 0xb2:
  case 0xb3:
  case 0xd6:
  case 0xd7:
  case 0xfd:
    goto code_r0x0001003afc98;
  case 0xb8:
    goto code_r0x0001003afcc0;
  case 0xb9:
  case 0xf4:
    goto code_r0x0001003afd48;
  case 0xef:
    goto LAB_1003afccc;
  case 0xf3:
    goto code_r0x0001003afd24;
  }
  FUN_1003b1f88();
  FUN_1003b1fb0();
code_r0x0001003afbdc:
  FUN_1003a8cb8(pppppppcStack_3c0);
  func_0x0001003b1fe8(&pppppppcStack_350);
  func_0x0001003b2094(&pppppppcStack_1b0);
code_r0x0001003afbf4:
  in_ZR = pppppppcStack_380 == (code *******)0x1;
  if (!(bool)in_ZR) {
LAB_1003afc58:
    pppppppcVar24 = (code *******)0x2;
    pppppppcVar25 = pppppppcStack_378;
code_r0x0001003afc60:
    *pppppppcStack_438 = (code ******)pppppppcVar24;
    pppppppcStack_438[1] = (code ******)pppppppcVar25;
code_r0x0001003afc68:
    pppppppcStack_378 = (code *******)0x0;
code_r0x0001003afc6c:
    goto LAB_1003b0190;
  }
  pppppppcVar29 = (code *******)&pppppppcStack_380;
  pppppppcVar24 = (code *******)((ulong)pppppppcStack_378 & 0xff);
code_r0x0001003afc08:
  if ((int)pppppppcVar24 == 0) {
    pppppppcVar37 = (code *******)0x0;
    if (in_stack_fffffffffffffbf8 != (code ******)0x0) {
code_r0x0001003afc80:
      do {
        func_0x0001003ad994();
        pppppppcVar37 = extraout_x8_01;
      } while (extraout_w11 != 0);
    }
code_r0x0001003afc90:
    pppppppcStack_350 = pppppppcVar37;
    pppppppcStack_348 = (code *******)CONCAT62(pppppppcStack_348._2_6_,0xff00);
code_r0x0001003afc98:
    pppppppcVar24 = (code *******)&pppppppcStack_1b0;
code_r0x0001003afc9c:
    pppppppcVar35 = (code *******)&pppppppcStack_350;
code_r0x0001003afca0:
    FUN_1003ad9a4(pppppppcVar24);
code_r0x0001003afcb0:
    func_0x0001003adcb8();
code_r0x0001003afcb4:
    pppppppcVar24 = (code *******)0x1;
    pppppppcVar25 = pppppppcStack_438;
code_r0x0001003afcbc:
    *pppppppcVar25 = (code ******)pppppppcVar24;
    pppppppcVar25[1] = (code ******)pppppppcVar35;
code_r0x0001003afcc0:
    func_0x0001003aef68();
code_r0x0001003afcc4:
code_r0x0001003afcc8:
LAB_1003afdf4:
    FUN_1003a8cb8();
    goto LAB_1003b0190;
  }
  in_ZR = *(char *)(param_4 + 3) == '\x01';
  if ((bool)in_ZR) {
code_r0x0001003afc18:
    pppppppcVar8 = param_3;
    func_0x000107c60b14();
    func_0x000107c61180();
    pppppppcVar35 = pppppppcVar8;
    func_0x000107c60b00();
code_r0x0001003afc34:
    func_0x000107c61180();
    pppppppcVar33 = pppppppcVar35;
code_r0x0001003afc3c:
    func_0x000107c3a0b4();
    if (pppppppcVar33 != (code *******)0x0) {
      func_0x000107c60ef0(param_3,pppppppcVar33);
    }
LAB_1003afc50:
    func_0x000107c3a084();
code_r0x0001003afc54:
  }
  else {
LAB_1003afccc:
    ppuVar31 = &PTR_PTR_1126b3000;
    pppppppcVar35 = (code *******)PTR_PTR_1126b3d30;
code_r0x0001003afcd4:
    func_0x000107c61158();
code_r0x0001003afcd8:
    pppppppcVar22 = pppppppcVar35;
code_r0x0001003afcdc:
    pppppppcVar35 = param_3;
    func_0x000107c4a560();
code_r0x0001003afce4:
    if (((ulong)pppppppcVar35 & 1) == 0) {
LAB_1003afd54:
      FUN_1003a8364();
code_r0x0001003afd58:
code_r0x0001003afd5c:
code_r0x0001003afd60:
code_r0x0001003afd64:
      FUN_1003b03b4();
      pppppppcVar35 = (code *******)ppuVar31[0x1a6];
      func_0x000107c61158(pppppppcVar35);
code_r0x0001003afd70:
      FUN_1003b03b4(&pppppppcStack_368,pppppppcVar35);
      func_0x000107c3a0d0();
      pppppppcStack_1b0 = (code *******)&pppppppcStack_3c0;
      pppppppcStack_1a8 = extraout_x8_02;
      uStack_1a0 = (code *******)&pppppppcStack_368;
      FUN_1003a91d4(&UNK_10f7d0128);
      func_0x000107c3a080(&pppppppcStack_350);
      func_0x000107c3a0e8(&stack0xfffffffffffffbf0);
      func_0x000107c3104c(&pppppppcStack_3a0,&stack0xfffffffffffffbf0);
      *pppppppcStack_438 = (code ******)0x2;
      pppppppcStack_438[1] = (code ******)pppppppcStack_3a0;
      pppppppcStack_3a0 = (code *******)0x0;
      func_0x000107c3a038();
      func_0x0001003ac88c();
      func_0x000107c3a0b8();
      FUN_1003a8cb8(pppppppcStack_368);
      goto LAB_1003afdf4;
    }
  }
LAB_1003afce8:
  FUN_1003b2108(&pppppppcStack_3c0);
  pppppppcVar35 = (code *******)pppppppcStack_420[4];
  pppppppcVar9 = pppppppcVar29 + 1;
  pppppppcVar38 = (code *******)0x1003afd04;
  FUN_1003b2164();
  pppppppcStack_368 = pppppppcVar35;
  pppppppcVar24 = (code *******)(ulong)*(byte *)(param_4 + 3);
  lVar19 = extraout_x13_00;
  uVar27 = extraout_x15_00;
  ppppppcVar34 = extraout_x16_00;
  uVar28 = extraout_x17_00;
  pcVar30 = (char *)pppppppcVar35;
code_r0x0001003afd10:
  pppppppcVar25 = pppppppcStack_3c0;
code_r0x0001003afd14:
  unaff_x25 = (code *******)pppppppcVar25[4];
code_r0x0001003afd18:
  pppppppcVar25 = (code *******)&UNK_10e5fb000;
code_r0x0001003afd1c:
  pppppppcVar25 = (code *******)((long)pppppppcVar25 + 0x834);
code_r0x0001003afd20:
  lVar36 = 0x1003afd30;
code_r0x0001003afd24:
  uVar26 = (ulong)*(ushort *)((long)pppppppcVar25 + (long)pppppppcVar24 * 2);
code_r0x0001003afd28:
  lVar36 = lVar36 + uVar26 * 4;
code_r0x0001003afd2c:
  pppppppcVar17 = pppppppcVar35;
  pppppppcVar32 = param_4;
  pppppppcVar10 = unaff_x28;
  pppppppcVar37 = &stack0x00000050;
  switch(lVar36) {
  case 0x1003aef90:
    func_0x000107c61180();
    FUN_1003ad8f8(pcVar30);
    pppppppcVar29 = pppppppcVar35;
    break;
  case 0x1003afd30:
code_r0x0001003afd30:
code_r0x0001003afd34:
    func_0x0001003b2284();
code_r0x0001003afd3c:
    unaff_x21 = pppppppcStack_1b0;
code_r0x0001003afd40:
    if (unaff_x21 != (code *******)0x0) {
code_r0x0001003afd44:
      goto code_r0x0001003afd48;
    }
code_r0x0001003afe80:
    pppppppcVar8 = (code *******)0x0;
    goto code_r0x0001003afe84;
  case 0x1003afdfc:
code_r0x0001003afe04:
    func_0x0001003b2284();
    unaff_x21 = pppppppcStack_1b0;
    if (pppppppcStack_1b0 == (code *******)0x0) goto code_r0x0001003afe80;
    do {
      func_0x0001003b2340();
      pppppppcVar8 = pppppppcStack_1b0;
    } while (extraout_w10 != 0);
    goto code_r0x0001003afe84;
  case 0x1003afe24:
code_r0x0001003afe2c:
    pppppppcVar35 = (code *******)((long)unaff_x25 * 0x10 + 0x48);
    func_0x000107c60e20();
    unaff_x21 = pppppppcVar35;
  case 0x1003afe40:
  case 0x1003afe44:
    FUN_1003b22f0();
code_r0x0001003afe50:
    *pppppppcVar35 = (code ******)&PTR_DAT_110d7bbc0;
    do {
      func_0x0001003b2340();
    } while (extraout_w10_00 != 0);
    do {
      func_0x0001003acd68();
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(extraout_x8_03,0x10);
      if (bVar4) {
        *extraout_x8_03 = extraout_x9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((bool)in_ZR) {
      func_0x000107c39fa8();
    }
    goto code_r0x0001003afe88;
  case 0x1003aff08:
    goto code_r0x0001003aff08;
  case 0x1003affa8:
    goto code_r0x0001003affa8;
  case 0x1003afff4:
code_r0x0001003afff4:
    func_0x000107c30f44(pppppppcVar24);
    pppppppcVar8 = (code *******)&pppppppcStack_350;
    FUN_1005d466c();
    pppppppcStack_3a0 = pppppppcVar8;
    pppppppcStack_398 = pppppppcVar9;
    FUN_1003a91d4(&UNK_10f7d0149);
    func_0x000107c3a028(&pppppppcStack_1b0);
    func_0x0001003ac750(&pppppppcStack_418,pppppppcVar10,&pppppppcStack_1b0);
    func_0x000107c3104c(&pppppppcStack_3c8,&pppppppcStack_418);
    *pppppppcStack_438 = (code ******)0x2;
    pppppppcStack_438[1] = (code ******)pppppppcStack_3c8;
    pppppppcStack_3c8 = (code *******)0x0;
    func_0x000107c3a038();
    FUN_1003a8cb8(pppppppcStack_418);
    pppppppcVar35 = (code *******)&pppppppcStack_1b0;
    goto code_r0x000107c60ca0;
  case 0x1003b007c:
    goto code_r0x0001003b007c;
  case 0x1003b00c8:
    goto code_r0x0001003b00c8;
  case 0x1003b0108:
    goto code_r0x0001003b0108;
  case 0x1003b01bc:
    goto code_r0x0001003b01bc;
  case 0x1003b01d8:
    func_0x000107c3a084();
LAB_1003b0340:
    pppppppcVar8 = (code *******)&pppppppcStack_380;
    FUN_1003b1c84(pppppppcVar8);
LAB_1003b037c:
    FUN_1003b2d9c();
    func_0x0001003b2da4();
    func_0x000107c39ff8();
    return pppppppcVar8;
  case 0x1003b0224:
    func_0x0001003aef68();
    pppppppcStack_3c0 = pppppppcStack_350;
    goto LAB_1003b0238;
  case 0x1003b0280:
    func_0x0001003ad610(unaff_x27);
    func_0x0001003b2b60(in_stack_fffffffffffffbd0);
    FUN_1003b1f3c(pppppppcStack_3c0);
    goto LAB_1003b0340;
  case 0x1003b02cc:
    FUN_1003b1c5c(&pppppppcStack_3a0);
    FUN_1003b1c84(&pppppppcStack_368);
  case 0x1003b0314:
    FUN_1003b063c();
    FUN_1003a8cb8(pppppppcStack_3c8);
    func_0x0001003b1fe8(&pppppppcStack_350);
    pppppppcVar8 = (code *******)&pppppppcStack_1b0;
    func_0x0001003b2094(pppppppcVar8);
    goto LAB_1003b037c;
  case 0x1003b0460:
    return pppppppcVar9;
  case 0x1003b04f0:
    return pppppppcVar35;
  case 0x1003b0574:
    func_0x000107c60c50();
    return pppppppcVar29;
  case 0x1003b0634:
code_r0x000107c60ca0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
    return pppppppcVar35;
  case 0x1003b06c0:
    if (pppppppcVar9 < pppppppcVar23) {
      pppppppcVar23 = (code *******)0xffffffffffffffff;
    }
    else if (unaff_x30 != (code ******)0x0) {
      puVar14 = (undefined *)((long)pppppppcVar35 + (long)pppppppcVar23);
      FUN_1003b0714(puVar14,(undefined *)((long)pppppppcVar35 + (long)pppppppcVar9));
      pppppppcVar23 = (code *******)(puVar14 + -(long)pppppppcVar35);
      if (puVar14 == (undefined *)((long)pppppppcVar35 + (long)pppppppcVar9)) {
        pppppppcVar23 = (code *******)0xffffffffffffffff;
      }
    }
    return pppppppcVar23;
  case 0x1003b1180:
    ppppppcVar34 = pppppppcVar35[2];
    for (lVar36 = 0;
        ((code ******)((long)ppppppcVar34 + lVar36) < pppppppcVar35[1] &&
        ((uint)*(byte *)((long)*pppppppcVar35 + (long)ppppppcVar34 + lVar36) !=
         ((uint)pppppppcVar9 & 0xff))); lVar36 = lVar36 + 1) {
      pppppppcVar35[2] = (code ******)((long)ppppppcVar34 + lVar36 + 1);
    }
    return (code *******)((long)*pppppppcVar35 + (long)ppppppcVar34);
  case 0x1003b3958:
    func_0x000107c610f4(pppppppcVar24[0x87]);
    func_0x000107c477b0();
    break;
  case 0x1003b65e0:
    while ((int)pppppppcVar25 != 0) {
      bVar5 = 1;
      bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar35,0x10);
      if (bVar4) {
        *pppppppcVar35 = (code ******)((long)*pppppppcVar35 + 1);
        bVar5 = ExclusiveMonitorsStatus();
      }
      pppppppcVar25 = (code *******)(ulong)bVar5;
    }
    *pppppppcVar29 = (code ******)&PTR_DAT_110cc66b8;
    return pppppppcVar29;
  case 0x1003b7930:
    ppppppcVar34 = pppppppcVar9[2];
    pppppppcVar35[3] = pppppppcVar9[3];
    pppppppcVar35[2] = ppppppcVar34;
    pppppppcVar9[2] = (code ******)0x0;
    pppppppcVar9[3] = (code ******)0x0;
    return pppppppcVar35;
  case 0x1003badac:
    pppppppcVar29 = pppppppcVar35;
    break;
  case 0x1003bade0:
    func_0x000107c5fadc();
    func_0x000107c5a49c(pppppppcVar29);
    break;
  case 0x1003bc1fc:
    FUN_100083b20();
    pppppppcVar8 = pppppppcStack_438;
    func_0x000107c61174(pppppppcStack_438[0x25]);
    goto code_r0x000107c61574;
  case 0x1003bc27c:
    pppppppcStack_3b8 = (code *******)in_stack_000000e8;
    pppppppcStack_3a0 = (code *******)in_stack_000000e0;
    ppppppcStack_320 = (code ******)in_stack_000000d8;
    pppppppcStack_390 = (code *******)in_stack_000000d0;
    pppppppcStack_388 = (code *******)in_stack_000000c8;
    pppppppcStack_380 = (code *******)in_stack_000000c0;
    pppppppcStack_378 = (code *******)in_stack_000000b8;
    pppppppcStack_370 = (code *******)in_stack_000000b0;
    pppppppcStack_368 = (code *******)in_stack_000000a8;
    pppppppcStack_360 = (code *******)in_stack_000000a0;
    pppppppcStack_358 = (code *******)in_stack_00000098;
    pppppppcStack_350 = (code *******)in_stack_00000090;
    pppppppcStack_348 = (code *******)in_stack_00000088;
    pppppppcStack_340 = (code *******)in_stack_00000080;
    pppppppcStack_338 = (code *******)in_stack_00000078;
    pppppppcStack_3b0 = pppppppcVar24;
    FUN_100083b20(apppppppcStack_10);
    pppppppcStack_3f0 = apppppppcStack_10[0];
    FUN_100083b20(&ppppppcStack_18);
    FUN_100083b20(&pppppppcStack_20);
    FUN_100083b20(&pppppppcStack_28);
    FUN_100083b20(&pppppppcStack_30);
    FUN_100083b20(&ppppppcStack_38);
    FUN_100083b20(&pppppppcStack_40);
    FUN_100083b20(&pppppppcStack_48);
    pppppppcStack_3c0 = pppppppcStack_48;
    FUN_100083b20(&pppppppcStack_50);
    pppppppcStack_398 = pppppppcStack_50;
    FUN_100083b20(&pppppppcStack_58);
    pppppppcStack_328 = pppppppcStack_58;
    FUN_100083b20(&pppppppcStack_60);
    pppppppcStack_330 = pppppppcStack_60;
    FUN_100083b20(&pppppppcStack_68);
    pppppppcStack_338 = pppppppcStack_68;
    FUN_100083b20(&pppppppcStack_70);
    pppppppcStack_340 = pppppppcStack_70;
    FUN_100083b20(&pppppppcStack_78);
    pppppppcStack_348 = pppppppcStack_78;
    FUN_100083b20(&pppppppcStack_80);
    pppppppcStack_350 = pppppppcStack_80;
    FUN_100083b20(&pppppppcStack_88);
    pppppppcStack_358 = pppppppcStack_88;
    FUN_100083b20(&pppppppcStack_90);
    pppppppcStack_360 = pppppppcStack_90;
    FUN_100083b20(&pppppppcStack_98);
    pppppppcStack_368 = pppppppcStack_98;
    FUN_100083b20(&pppppppcStack_a0);
    pppppppcStack_370 = pppppppcStack_a0;
    FUN_100083b20(&pppppppcStack_a8);
    pppppppcStack_378 = pppppppcStack_a8;
    FUN_100083b20(&pppppppcStack_b0);
    pppppppcStack_380 = pppppppcStack_b0;
    FUN_100083b20(apppppppcStack_2e8);
    pppppppcStack_388 = apppppppcStack_2e8[0];
    FUN_100083b20(&pppppppcStack_2f0);
    pppppppcStack_390 = pppppppcStack_2f0;
    FUN_100083b20(&ppppppcStack_2f8);
    ppppppcStack_320 = ppppppcStack_2f8;
    FUN_100083b20(&pppppppcStack_300);
    pppppppcStack_3a0 = pppppppcStack_300;
    FUN_100083b20(&pppppppcStack_308);
    FUN_100083b20(&pppppppcStack_310);
    FUN_100083b20(&pppppppcStack_318);
    pppppppcStack_3a8 = pppppppcStack_318;
    FUN_1002331a0();
    func_0x000107c613fc();
    pppppppcVar35[8] = ppppppcStack_18;
    pppppppcVar35[9] = (code ******)pppppppcStack_20;
    pppppppcVar8 = pppppppcStack_3c0;
    pppppppcVar35[10] = (code ******)pppppppcStack_28;
    pppppppcVar35[0xb] = (code ******)pppppppcStack_30;
    pppppppcVar35[0xc] = ppppppcStack_38;
    pppppppcVar35[0xd] = (code ******)pppppppcStack_40;
    pppppppcVar23 = pppppppcStack_398;
    pppppppcVar35[0xe] = (code ******)pppppppcStack_3c0;
    pppppppcVar35[0xf] = (code ******)pppppppcVar23;
    pppppppcVar23 = pppppppcStack_330;
    pppppppcVar35[0x10] = (code ******)pppppppcStack_328;
    pppppppcVar35[0x11] = (code ******)pppppppcVar23;
    pppppppcVar23 = pppppppcStack_340;
    pppppppcVar35[0x12] = (code ******)pppppppcStack_338;
    pppppppcVar35[0x13] = (code ******)pppppppcVar23;
    pppppppcVar23 = pppppppcStack_350;
    pppppppcVar35[0x14] = (code ******)pppppppcStack_348;
    pppppppcVar35[0x15] = (code ******)pppppppcVar23;
    pppppppcVar35[0x16] = (code ******)pppppppcStack_358;
    pppppppcVar35[0x17] = (code ******)pppppppcStack_360;
    pppppppcVar35[0x18] = (code ******)pppppppcStack_368;
    pppppppcVar35[0x19] = (code ******)pppppppcStack_370;
    pppppppcVar35[0x1a] = (code ******)pppppppcStack_378;
    pppppppcVar35[0x1b] = (code ******)pppppppcStack_380;
    pppppppcVar35[0x1c] = (code ******)pppppppcStack_388;
    pppppppcVar35[0x1d] = (code ******)pppppppcStack_390;
    pppppppcVar35[0x1e] = ppppppcStack_320;
    pppppppcVar35[0x1f] = (code ******)pppppppcStack_3a0;
    pppppppcVar35[0x20] = (code ******)pppppppcStack_308;
    pppppppcVar35[0x21] = (code ******)pppppppcStack_310;
    FUN_1000285a8(0x112de4c18,&UNK_10d9aea08);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    pppppppcStack_420 = pppppppcStack_20;
    func_0x000107c61174();
    pppppppcStack_418 = pppppppcStack_28;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    pppppppcStack_400 = pppppppcStack_40;
    func_0x000107c61174();
    pppppppcVar35 = pppppppcStack_398;
    pppppppcStack_3f8 = pppppppcVar8;
    func_0x000107c61174();
    pppppppcVar8 = pppppppcStack_328;
    pppppppcStack_3e8 = pppppppcVar35;
    func_0x000107c61174();
    pppppppcVar35 = pppppppcStack_330;
    pppppppcStack_3e0 = pppppppcVar8;
    func_0x000107c61174();
    pppppppcVar8 = pppppppcStack_338;
    pppppppcStack_3d8 = pppppppcVar35;
    func_0x000107c61174();
    pppppppcVar35 = pppppppcStack_340;
    pppppppcStack_3d0 = pppppppcVar8;
    func_0x000107c61174();
    pppppppcVar8 = pppppppcStack_348;
    pppppppcStack_3c8 = pppppppcVar35;
    func_0x000107c61174();
    pppppppcVar35 = pppppppcStack_350;
    pppppppcStack_3c0 = pppppppcVar8;
    func_0x000107c61174();
    pppppppcVar8 = pppppppcStack_358;
    pppppppcStack_3b8 = pppppppcVar35;
    func_0x000107c61174();
    pppppppcVar23 = pppppppcStack_360;
    pppppppcStack_3b0 = pppppppcVar8;
    func_0x000107c61174();
    pppppppcVar35 = pppppppcStack_368;
    pppppppcStack_398 = pppppppcVar23;
    func_0x000107c61174();
    pppppppcVar8 = pppppppcStack_370;
    pppppppcStack_360 = pppppppcVar35;
    func_0x000107c61174();
    pppppppcVar35 = pppppppcStack_378;
    pppppppcVar29 = pppppppcStack_310;
    unaff_x21 = pppppppcStack_308;
    pppppppcStack_358 = pppppppcVar8;
  case 0x1003bc67c:
    func_0x000107c61174();
    pppppppcVar8 = pppppppcStack_380;
    pppppppcStack_350 = pppppppcVar35;
    func_0x000107c61174();
    pppppppcVar35 = pppppppcStack_388;
    pppppppcStack_348 = pppppppcVar8;
    func_0x000107c61174();
    pppppppcVar8 = pppppppcStack_390;
    pppppppcStack_340 = pppppppcVar35;
    func_0x000107c61174();
    pppppppcStack_338 = pppppppcVar8;
    func_0x000107c615f0(ppppppcStack_320);
    pppppppcVar8 = pppppppcStack_3a0;
    func_0x000107c61174();
    pppppppcStack_330 = pppppppcVar8;
    func_0x000107c61174();
    pppppppcStack_328 = unaff_x21;
    func_0x000107c61174(pppppppcVar29);
  case 0x1003bc6d4:
    pppppppcVar29 = pppppppcStack_3a8;
    func_0x000107c6157c(pppppppcStack_3a8);
    FUN_10025a71c();
    func_0x000107c610f8(PTR_PTR_1126a7288);
    func_0x000107c4907c();
    break;
  case 0x1003bcdf8:
    func_0x000107c5a49c(pppppppcVar29);
    break;
  case 0x1003bd1f8:
    pppppppcVar29 = unaff_x25;
    break;
  case 0x1003bd268:
    func_0x000107c61174();
    func_0x000107c61174(unaff_x21);
    func_0x000107c5fadc((ulong)unaff_x26 | 0xd,0x800000010efc6fb0);
    func_0x000107c5a49c(pppppppcVar35);
    pppppppcVar29 = pppppppcVar35;
    break;
  case 0x1003bd9f8:
    func_0x000107c61174();
    pppppppcVar8 = pppppppcStack_368;
    pppppppcStack_3c8 = pppppppcStack_360;
    func_0x000107c61174();
    pppppppcStack_3c0 = pppppppcVar8;
    func_0x000107c61174();
    pppppppcStack_3a8 = pppppppcStack_370;
    func_0x000107c61174();
    pppppppcVar8 = pppppppcStack_380;
    pppppppcStack_3a0 = pppppppcStack_378;
    func_0x000107c61174();
    pppppppcVar35 = pppppppcStack_388;
    pppppppcStack_370 = pppppppcVar8;
    func_0x000107c61174();
    pppppppcVar8 = pppppppcStack_390;
    pppppppcStack_368 = pppppppcVar35;
    func_0x000107c61174();
    pppppppcVar35 = pppppppcStack_398;
    pppppppcStack_360 = pppppppcVar8;
    func_0x000107c61174();
    pppppppcVar8 = pppppppcStack_3b0;
    pppppppcStack_358 = pppppppcVar35;
    func_0x000107c61174();
    pppppppcStack_350 = pppppppcVar8;
    func_0x000107c61174(unaff_x28);
    func_0x000107c61174();
    pppppppcVar29 = pppppppcStack_3b8;
    pppppppcStack_378 = unaff_x26;
    func_0x000107c6157c(pppppppcStack_3b8);
    FUN_10025a71c();
    func_0x000107c610f8(PTR_PTR_1126a7288);
    func_0x000107c4907c();
    break;
  case 0x1003bde68:
    pppppppcVar29 = (code *******)pcVar30;
    break;
  case 0x1003be27c:
    pppppppcVar29 = unaff_x21;
    break;
  case 0x1003c0a3c:
    pppppppcStack_3e0 = &stack0x00000050;
    pppppppcStack_3d8 = pppppppcVar38;
    func_0x000107c61144(&pppppppcStack_418,pppppppcVar35);
    puVar14 = PTR_PTR_1126ae720;
    pppppppcStack_440 = (code *******)PTR___NSConcreteStackBlock_11034bd00;
    pppppppcStack_438 = (code *******)0xc2000000;
    func_0x000107c6111c(&pppppppcStack_420,&pppppppcStack_418);
    func_0x000107c3e4fc(puVar14);
    func_0x000107c61180();
    func_0x000107c610f4(PTR_PTR_1126b9580);
    func_0x000107c61160(PTR_PTR_1126b9588);
    pppppppcVar24 = (code *******)(long)_DAT_112723db0;
    pcVar30 = (char *)pppppppcVar35;
  case 0x1003c0ad8:
    pppppppcVar35 = (code *******)((long)pcVar30 + (long)pppppppcVar24);
    func_0x000107c61148(pppppppcVar35);
  case 0x1003c0ae4:
    func_0x000107c3fa04();
    func_0x000107c61180();
    pppppppcVar33 = pppppppcVar35;
  case 0x1003c0b00:
    func_0x000107c46b88();
    pppppppcVar29 = pppppppcVar33;
    break;
  case 0x1003c0ee0:
    func_0x000107c61174();
    func_0x000107c61174(unaff_x21);
    func_0x000107c61174(param_4);
    pppppppcVar24 = (code *******)PTR_PTR_1126e8690;
  case 0x1003c0efc:
    pppppppcStack_440 = pppppppcVar33;
    pppppppcStack_438 = pppppppcVar24;
    func_0x000107c61154(&pppppppcStack_440,PTR_s_init_1125d9248);
    if (pppppppcVar11 == (code *******)0x0) {
      func_0x000107c61170(param_4);
      pppppppcVar29 = unaff_x21;
    }
    else {
      func_0x000107c61174(pppppppcVar29);
      pppppppcVar8 = *(code ********)((long)pppppppcVar11 + 8);
      *(code ********)((long)pppppppcVar11 + 8) = pppppppcVar29;
      pppppppcVar29 = pppppppcVar8;
    }
    break;
  case 0x1003c1244:
    pppppppcStack_3b0 = pppppppcVar24;
    pppppppcStack_3a8 = pppppppcVar25;
    func_0x000107c6111c(&pppppppcStack_3a0,&pppppppcStack_20);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    pppppppcVar8 = *(code ********)((long)pppppppcVar29 + (long)_DAT_112722834);
    *(char **)((long)pppppppcVar29 + (long)_DAT_112722834) = pcVar30;
    pppppppcVar29 = pppppppcVar8;
    break;
  case 0x1003c12c4:
    func_0x000107c61180();
    pppppppcVar8 = *(code ********)((long)pppppppcVar29 + (long)_DAT_112722838);
    *(code ********)((long)pppppppcVar29 + (long)_DAT_112722838) = pppppppcVar35;
    pppppppcVar29 = pppppppcVar8;
    break;
  case 0x1003c12e0:
    pcVar30 = (char *)param_4[0xe4];
    pppppppcVar24 = (code *******)&UNK_1053c2168;
    pppppppcVar25 = (code *******)&UNK_110882000;
  case 0x1003c12f8:
    pppppppcStack_3f8 = pppppppcVar25 + 0xc6;
    pppppppcStack_400 = pppppppcVar24;
  case 0x1003c1300:
    func_0x000107c6111c(&pppppppcStack_3f0,&pppppppcStack_20);
    func_0x000107c3e4fc(pcVar30);
    func_0x000107c61180();
    func_0x000107c610f4(PTR_PTR_1126b8308);
    func_0x000107c458d8();
    func_0x000107c42c20(*(undefined8 *)((long)pppppppcVar29 + (long)_DAT_11272283c));
    ppppppcVar34 = param_4[0xe4];
    pppppppcStack_420 = (code *******)&UNK_110882660;
    pppppppcStack_438 = pppppppcVar33;
    func_0x000107c6111c(&pppppppcStack_418,&pppppppcStack_20);
    func_0x000107c3e4fc(ppppppcVar34);
    func_0x000107c61180();
    pppppppcVar8 = (code *******)PTR_PTR_1126b8310;
    func_0x000107c610f4(PTR_PTR_1126b8310);
    func_0x000107c46348();
    func_0x000107c42c20(*(undefined8 *)((long)pppppppcVar29 + (long)_DAT_112722840));
    pppppppcVar29 = pppppppcVar8;
    break;
  case 0x1003c21fc:
    pppppppcVar29 = *(code ********)((long)pcVar30 + 0x10);
    func_0x000107c61174(pppppppcVar29);
    func_0x000107c4f570();
    func_0x000107c61180();
    break;
  case 0x1003c22c4:
    pppppppcVar35 = (code *******)&pppppppcStack_440;
    pppppppcStack_440 = (code *******)pcVar30;
    pppppppcStack_438 = pppppppcVar24;
  case 0x1003c22d4:
    goto code_r0x0001003c22d4;
  case 0x1003c22f8:
    goto code_r0x0001003c22f8;
  case 0x1003c2530:
    func_0x000107c61174(pppppppcVar8);
    func_0x000107c61174(unaff_x26);
    func_0x000107c5fadc((long)unaff_x28 + 0x11,(ulong)unaff_x27 | 0x8000000000000000);
    func_0x000107c5a49c(unaff_x26);
    pppppppcVar29 = unaff_x26;
    break;
  case 0x1003c2f14:
    func_0x000107c61174();
    pppppppcStack_438 = (code *******)PTR_PTR_11270e440;
    pppppppcStack_440 = param_4;
    func_0x000107c61154(&pppppppcStack_440,PTR_s_init_1125d9248);
    if (pppppppcVar12 == (code *******)0x0) {
      func_0x000107c61170(unaff_x21);
      pppppppcVar29 = (code *******)pcVar30;
    }
    else {
      lVar36 = (long)_DAT_11279664c;
      func_0x000107c61174(pppppppcVar29);
      pppppppcVar8 = *(code ********)((long)pppppppcVar12 + lVar36);
      *(code ********)((long)pppppppcVar12 + lVar36) = pppppppcVar29;
      pppppppcVar29 = pppppppcVar8;
    }
    break;
  case 0x1003c3530:
    func_0x000107c61170();
    pppppppcVar29 = (code *******)pcVar30;
    break;
  case 0x1003c3654:
    func_0x000107c4d664();
    break;
  case 0x1003c39f8:
    FUN_100083b20();
    pppppppcVar29 = pppppppcStack_438;
  case 0x1003c3a04:
    FUN_1001dcf58();
  case 0x1003c3a0c:
    func_0x000107c613fc();
  case 0x1003c3a14:
    FUN_1003c3a44(pppppppcVar33,unaff_x21,pppppppcVar29);
    *param_4 = (code ******)pppppppcVar35;
    return pppppppcVar33;
  case 0x1003c3a54:
    *(code ********)((long)pcVar30 + 0x18) = pppppppcVar9;
    *(code ********)((long)pcVar30 + 0x20) = pppppppcVar22;
    pppppppcVar8 = (code *******)PTR_PTR_1126a8258;
    pppppppcStack_400 = &stack0x00000050;
    pppppppcStack_3f8 = pppppppcVar38;
    func_0x000107c610f8();
    func_0x000107c615f0(pppppppcVar9);
    func_0x000107c61174(pppppppcVar22);
    func_0x000107c453e4();
    *(code ********)((long)pcVar30 + 0x10) = pppppppcVar8;
    func_0x000107c61174();
    func_0x000107c61174(pppppppcVar35);
    func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  case 0x1003c3ae4:
    func_0x000107c5a49c();
    pppppppcVar29 = pppppppcVar8;
    break;
  case 0x1003c3e0c:
    func_0x000107c61174(pppppppcVar22);
    pppppppcStack_438 = (code *******)PTR_PTR_112701a50;
    pppppppcStack_440 = (code *******)pcVar30;
    func_0x000107c61154(&pppppppcStack_440,PTR_s_init_1125d9248);
    if (pppppppcVar13 == (code *******)0x0) {
      func_0x000107c61170(pppppppcVar29);
      return (code *******)0x0;
    }
    func_0x000107c61174(pppppppcVar29);
    pppppppcVar8 = *(code ********)((long)pppppppcVar13 + 8);
    *(code ********)((long)pppppppcVar13 + 8) = pppppppcVar29;
    pppppppcVar29 = pppppppcVar8;
    break;
  case 0x1003c46b4:
    FUN_1003c4094();
    return pppppppcVar35;
  case 0x1003c4a6c:
    pppppppcVar29 = pppppppcVar35;
    break;
  case 0x1003c4ac4:
    func_0x000107c61170(unaff_x27);
    pppppppcVar29 = unaff_x25;
    break;
  case 0x1003c5604:
    pppppppcVar35 = param_4;
  case 0x1003c5610:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return pppppppcVar35;
  case 0x1003c563c:
    func_0x000107c61174();
    func_0x000107c3ade4(param_4);
    func_0x000107c610f4(PTR_PTR_1126b9ff0);
    func_0x000107c458f8();
    puVar14 = PTR_PTR_1126b9fe0;
    func_0x000107c610f4(PTR_PTR_1126b9fe0);
    func_0x000107c45fd8();
    pppppppcVar29 = param_4 + 0x16;
    func_0x000107c61148(pppppppcVar29);
    func_0x000107c54918(puVar14);
    break;
  case 0x1003c5700:
    func_0x000107c61174(pppppppcVar22);
    pppppppcStack_438 = (code *******)PTR_PTR_1126e8b30;
    pppppppcStack_440 = pppppppcVar35;
    func_0x000107c61154(&pppppppcStack_440,PTR_s_init_1125d9248);
    if (pppppppcVar15 != (code *******)0x0) {
      func_0x000107c61174(pppppppcVar29);
      pppppppcVar8 = *(code ********)((long)pppppppcVar15 + 8);
      *(code ********)((long)pppppppcVar15 + 8) = pppppppcVar29;
      pppppppcVar29 = pppppppcVar8;
    }
    break;
  case 0x1003c59ac:
    pppppppcStack_420 = pppppppcVar29;
    pppppppcStack_418 = (code *******)pcVar30;
    func_0x000107c61174(pcVar30);
    func_0x000107c61174(pppppppcVar29);
    func_0x000107c3e4fc(unaff_x21);
    func_0x000107c61180();
    pppppppcVar29 = pppppppcStack_418;
    break;
  case 0x1003c8264:
    func_0x000107c6111c(auStack_f0,&pppppppcStack_20);
  case 0x1003c8288:
    func_0x000107c61174(pppppppcStack_330);
    pppppppcVar32 = pppppppcStack_310;
    pppppppcVar33 = param_4;
  case 0x1003c82b4:
    unaff_x28 = pppppppcStack_378;
    func_0x000107c61174(pppppppcStack_378);
  case 0x1003c82cc:
  case 0x1003c82d0:
    func_0x000107c61174(pppppppcStack_348);
  case 0x1003c82e0:
    func_0x000107c61174(pppppppcVar8);
    pppppppcStack_3a8 = pppppppcVar8;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    ppppppcVar34 = pppppppcVar33[0xe4];
    pppppppcStack_1b0 = (code *******)&UNK_11089c9c0;
    pppppppcStack_1c8 = unaff_x27;
    func_0x000107c6111c(auStack_168,&pppppppcStack_20);
    func_0x000107c61174(pppppppcVar29);
    pppppppcVar8 = pppppppcStack_360;
    pppppppcStack_198 = pppppppcStack_338;
    pppppppcStack_3c0 = pppppppcVar29;
    pppppppcStack_1a8 = pppppppcVar29;
    uStack_1a0 = unaff_x21;
    pppppppcStack_190 = pppppppcVar32;
    pppppppcStack_188 = (code *******)pcVar30;
    func_0x000107c61174(pppppppcStack_360);
    pppppppcStack_180 = pppppppcVar8;
    func_0x000107c61174(unaff_x28);
    pppppppcVar8 = pppppppcStack_328;
    pppppppcStack_178 = unaff_x28;
    func_0x000107c61174(pppppppcStack_328);
    pppppppcStack_170 = pppppppcVar8;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    lVar36 = (long)_DAT_11272649c;
    func_0x000107c61174();
    pppppppcVar29 = *(code ********)((long)unaff_x26 + lVar36);
    *(code *******)((long)unaff_x26 + lVar36) = ppppppcVar34;
    break;
  case 0x1003c866c:
    func_0x000107c47244();
    pppppppcVar29 = *(code ********)((long)unaff_x26 + (long)_DAT_112726514);
    func_0x000107c61174(pppppppcVar29);
    func_0x000107c42c20(pppppppcVar29);
    pppppppcStack_420 = pppppppcVar35;
    break;
  case 0x1003c8ac4:
    func_0x000107c61170();
    pppppppcVar29 = pppppppcStack_c0;
    break;
  case 0x1003c8ad8:
    pppppppcVar29 = pppppppcStack_400;
    break;
  case 0x1003c8aec:
    pppppppcVar29 = pppppppcVar35;
    break;
  case 0x1003c8ee0:
    return pppppppcVar35;
  case 0x1003c8ee8:
    return pppppppcVar35;
  case 0x1003c9240:
    func_0x000107c613fc();
    pppppppcVar35[2] = (code ******)unaff_x21;
    puVar14 = &UNK_1107a3bd0;
    func_0x000107c613fc(&UNK_1107a3bd0,0x18,7);
    *(code ********)(puVar14 + 0x10) = pppppppcVar29;
    func_0x000107c61174(pcVar30);
    FUN_1003c92bc(FUN_100a47edc,pppppppcVar35,FUN_100ba5374,puVar14);
    pppppppcVar29 = (code *******)pcVar30;
    break;
  case 0x1003c92c0:
    pppppppcStack_400 = unaff_x28;
    pppppppcStack_3f8 = unaff_x27;
    pppppppcStack_3f0 = unaff_x26;
    pppppppcStack_3e8 = unaff_x25;
    pppppppcStack_3e0 = pppppppcVar8;
    pppppppcStack_3d8 = pppppppcVar33;
    pppppppcStack_3d0 = param_4;
    pppppppcStack_3c8 = unaff_x21;
    pppppppcStack_3c0 = (code *******)pcVar30;
    pppppppcStack_3b8 = pppppppcVar29;
    pppppppcStack_3b0 = &stack0x00000050;
    pppppppcStack_3a8 = pppppppcVar38;
  case 0x1003c92e0:
    pppppppcVar29 = (code *******)pcVar30;
    unaff_x21 = pppppppcVar23;
  case 0x1003c92e8:
    param_4 = pppppppcVar22;
    pppppppcVar33 = pppppppcVar9;
    pppppppcVar8 = pppppppcVar35;
  case 0x1003c9300:
    FUN_10006c804();
  case 0x1003c9304:
    lVar36 = *(long *)((long)pppppppcVar29 + _DAT_113092548);
    if (lVar36 == 0) {
      puVar1 = (undefined8 *)((long)pppppppcVar29 + _DAT_113092550);
      uVar21 = *puVar1;
      uVar2 = puVar1[1];
      *puVar1 = pppppppcVar8;
      puVar1[1] = pppppppcVar33;
      func_0x000107c6157c(pppppppcVar33);
      FUN_1003c945c(uVar21,uVar2);
      puVar1 = (undefined8 *)((long)pppppppcVar29 + _DAT_113092558);
      pppppppcVar8 = (code *******)*puVar1;
      uVar21 = puVar1[1];
      *puVar1 = param_4;
      puVar1[1] = unaff_x21;
      func_0x000107c6157c(unaff_x21);
      FUN_1003c945c(pppppppcVar8,uVar21);
      FUN_100070bfc();
      return pppppppcVar8;
    }
    pppppppcStack_440 = (code *******)PTR___NSConcreteStackBlock_11034bd00;
    pppppppcStack_438 = (code *******)0x42000000;
    pppppppcStack_420 = pppppppcVar8;
    pppppppcStack_418 = pppppppcVar33;
    func_0x000107c60bc4(&pppppppcStack_440);
    pppppppcVar8 = pppppppcStack_418;
    func_0x000107c61174(lVar36);
    func_0x000107c6157c(pppppppcVar33);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(pppppppcVar8);
    return pppppppcVar8;
  case 0x1003c9700:
    func_0x000107c61154(&pppppppcStack_440,PTR_s_init_1125d9248);
    if (pppppppcVar16 == (code *******)0x0) {
      func_0x000107c61170(pppppppcVar33);
      pppppppcVar29 = param_4;
    }
    else {
      func_0x000107c61174(pppppppcVar29);
      pppppppcVar8 = *(code ********)((long)pppppppcVar16 + 8);
      *(code ********)((long)pppppppcVar16 + 8) = pppppppcVar29;
      pppppppcVar29 = pppppppcVar8;
    }
    break;
  case 0x1003c9ac4:
    pppppppcStack_400 = pppppppcVar24;
    FUN_100083b20(apppppppcStack_10);
    pppppppcStack_3f8 = apppppppcStack_10[0];
  case 0x1003c9ae8:
    FUN_100083b20(&ppppppcStack_18);
    pppppppcStack_3e0 = (code *******)ppppppcStack_18;
    FUN_100083b20(&pppppppcStack_20);
    pppppppcStack_3f0 = pppppppcStack_20;
    FUN_100083b20(&pppppppcStack_28);
    FUN_100083b20(&pppppppcStack_30);
    pppppppcStack_418 = pppppppcStack_30;
    FUN_100083b20(&ppppppcStack_38);
    FUN_100083b20(&pppppppcStack_3b0);
    pppppppcVar13 = pppppppcStack_3b0;
    FUN_100083b20(&pppppppcStack_3b8);
    pppppppcVar12 = pppppppcStack_3b8;
    FUN_100083b20(&pppppppcStack_3c0);
    pppppppcVar11 = pppppppcStack_3c0;
    FUN_100083b20(&pppppppcStack_3c8);
    pppppppcVar16 = pppppppcStack_3c8;
    FUN_100083b20(&pppppppcStack_3d0);
    pppppppcStack_438 = pppppppcStack_3d0;
    FUN_100083b20(&pppppppcStack_3d8);
    pppppppcVar18 = pppppppcStack_3d8;
    pppppppcStack_420 = pppppppcStack_3d8;
    FUN_100218be8();
    func_0x000107c613fc();
    pppppppcVar23 = pppppppcStack_418;
    pppppppcVar8 = pppppppcStack_438;
    pppppppcVar35[4] = (code ******)pppppppcStack_3e0;
    pppppppcVar35[5] = (code ******)pppppppcStack_3f0;
    pppppppcVar35[6] = (code ******)pppppppcStack_28;
    pppppppcVar35[7] = (code ******)pppppppcStack_418;
    pppppppcVar35[8] = ppppppcStack_38;
    pppppppcVar35[9] = (code ******)pppppppcVar13;
    pppppppcVar35[10] = (code ******)pppppppcVar12;
    pppppppcVar35[0xb] = (code ******)pppppppcVar11;
    pppppppcVar35[0xc] = (code ******)pppppppcVar16;
    pppppppcVar35[0xd] = (code ******)pppppppcStack_438;
    pppppppcVar35[0xe] = (code ******)pppppppcVar18;
    ppppppcVar34 = (code ******)PTR_PTR_1126a7200;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    pppppppcStack_400 = pppppppcStack_28;
    func_0x000107c61174(pppppppcVar23);
    func_0x000107c61174(ppppppcStack_38);
    func_0x000107c61174(pppppppcVar13);
    func_0x000107c61174();
    pppppppcStack_3f0 = pppppppcVar12;
    func_0x000107c61174(pppppppcVar11);
    func_0x000107c61174();
    pppppppcStack_3e8 = pppppppcVar16;
    func_0x000107c61174();
    pppppppcStack_3e0 = pppppppcVar8;
    func_0x000107c61174(pppppppcStack_420);
    func_0x000107c453e4();
    pppppppcVar35[3] = ppppppcVar34;
    pppppppcVar29 = (code *******)PTR_PTR_1126a8440;
    func_0x000107c610f8();
    func_0x000107c453e4();
    pppppppcVar35[2] = (code ******)pppppppcVar29;
    func_0x000107c61174();
    func_0x000107c61174(pppppppcStack_3f8);
    func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
    func_0x000107c5a49c(pppppppcVar29);
    break;
  case 0x1003c9ebc:
    func_0x000107c61174(unaff_x21);
    func_0x000107c5fadc((ulong)unaff_x25 | 6,(ulong)pppppppcVar29 | 0x8000000000000000);
    func_0x000107c5a49c(unaff_x21);
    pppppppcVar29 = unaff_x21;
    break;
  case 0x1003ca2c0:
    FUN_100083b20(&pppppppcStack_438);
    pppppppcVar8 = pppppppcStack_438;
    func_0x000107c61174(pppppppcStack_438[0xb]);
    goto code_r0x000107c61574;
  case 0x1003ca2f8:
    return pppppppcVar35;
  case 0x1003ca6b8:
    func_0x00010148d2bc();
    pppppppcVar8 = (code *******)&UNK_11042a970;
    func_0x000107c613fc(&UNK_11042a970,0x50,7);
    func_0x00010148d3d4(&stack0xfffffffffffffbf0,pppppppcVar8 + 2);
    pppppppcVar8[7] = (code ******)unaff_x21;
    pppppppcVar8[8] = (code ******)param_4;
    pppppppcVar8[9] = (code ******)pppppppcVar29;
    pppppppcStack_420 = (code *******)&UNK_1019f34d4;
    pppppppcStack_440 = (code *******)PTR___NSConcreteStackBlock_11034bd00;
    pppppppcStack_438 = (code *******)0x42000000;
    pppppppcStack_418 = pppppppcVar8;
    func_0x000107c60bc4(&pppppppcStack_440);
    pppppppcVar8 = pppppppcStack_418;
    func_0x000107c615f0(unaff_x21);
    func_0x000107c61174(param_4);
    func_0x000107c6157c(pppppppcVar29);
    goto code_r0x000107c61574;
  case 0x1003cae3c:
    pppppppcVar17 = (code *******)pcVar30;
    pppppppcStack_420 = (code *******)pcVar30;
    pppppppcStack_418 = pppppppcVar29;
    func_0x000107c614f0();
    *(code ********)((long)pcVar30 + _DAT_113039d80) = pppppppcVar35;
    pppppppcVar24 = _DAT_113039d88;
    pppppppcVar29 = pppppppcVar9;
  case 0x1003cae70:
    *(code ********)((long)pcVar30 + (long)pppppppcVar24) = pppppppcVar29;
    pppppppcStack_440 = (code *******)pcVar30;
    pppppppcStack_438 = pppppppcVar17;
    func_0x000107c61154(&pppppppcStack_440,PTR_s_init_1125d9248);
    return pppppppcVar18;
  case 0x1003caeb4:
    pppppppcVar35 = (code *******)pcVar30;
  case 0x1003caec4:
LAB_107c61460:
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_deallocObject_11034f298)();
    return pppppppcVar35;
  case 0x1003caee0:
    pppppppcVar37 = (code *******)&pppppppcStack_290;
    pppppppcStack_2a0 = (code *******)pcVar30;
    pppppppcStack_298 = pppppppcVar29;
    pppppppcStack_290 = &stack0x00000050;
    pppppppcStack_288 = pppppppcVar38;
  case 0x1003caeec:
    lVar36 = (long)pppppppcVar35 + (long)_DAT_112726b64;
    func_0x000107c61148();
    lVar19 = lVar36;
    func_0x000107c3e480();
    func_0x000107c61180();
    if (lVar19 == 0) {
      func_0x000107c61170(lVar36);
      func_0x000107c61144(pppppppcVar37 + -0xd,pppppppcVar35);
      pppppppcVar8 = (code *******)PTR_PTR_1126ae720;
      puVar14 = PTR___NSConcreteStackBlock_11034bd00;
      pppppppcStack_3a0 = (code *******)PTR___NSConcreteStackBlock_11034bd00;
      pppppppcStack_398 = (code *******)0xc2000000;
      pppppppcStack_390 = (code *******)FUN_100506610;
      pppppppcStack_388 = (code *******)&UNK_11089f390;
      func_0x000107c6111c(&pppppppcStack_380,pppppppcVar37 + -0xd);
      func_0x000107c3e4fc();
      func_0x000107c61180();
      puVar20 = PTR_PTR_1126ae720;
      pppppppcStack_3d0 = (code *******)puVar14;
      pppppppcStack_3c8 = (code *******)0xc2000000;
      pppppppcStack_3c0 = (code *******)FUN_1005065a0;
      pppppppcStack_3b8 = (code *******)&UNK_110867030;
      func_0x000107c6111c(&pppppppcStack_3a8,pppppppcVar37 + -0xd);
      func_0x000107c61174(pppppppcVar8);
      pppppppcStack_3b0 = pppppppcVar8;
      func_0x000107c3e4fc(puVar20);
      func_0x000107c61180();
      func_0x000107c61144(&pppppppcStack_3d8,puVar20);
      pppppppcVar23 = (code *******)PTR_PTR_1126ae720;
      pppppppcStack_400 = (code *******)FUN_1005064f8;
      pppppppcStack_3f8 = (code *******)&UNK_11089f3c0;
      func_0x000107c6111c(&pppppppcStack_3e8,pppppppcVar37 + -0xd);
      func_0x000107c6111c(&pppppppcStack_3e0,&pppppppcStack_3d8);
      func_0x000107c61174(pppppppcVar8);
      pppppppcStack_3f0 = pppppppcVar8;
      func_0x000107c3e4fc();
      func_0x000107c61180();
      puVar20 = PTR_PTR_1126ae720;
      pppppppcStack_438 = (code *******)puVar14;
      pppppppcStack_420 = (code *******)&UNK_11089f360;
      func_0x000107c61174();
      pppppppcStack_418 = pppppppcVar23;
      func_0x000107c3e4fc(puVar20);
      func_0x000107c61180();
      func_0x000107c610f4(PTR_PTR_1126bc3b0);
      func_0x000107c474dc();
      if (pppppppcVar35 != (code *******)0x0) {
        pppppppcVar35 = *(code ********)((long)pppppppcVar35 + (long)_DAT_112726b94);
      }
      func_0x000107c61174(pppppppcVar35);
      func_0x000107c42c20(pppppppcVar35);
      pppppppcVar29 = pppppppcVar35;
    }
    else {
      pppppppcVar29 = (code *******)((long)pppppppcVar35 + (long)_DAT_112726b68);
      func_0x000107c61148(pppppppcVar29);
      func_0x000107c4b8e0();
      func_0x000107c61180();
    }
    break;
  case 0x1003cb2c4:
    func_0x000107c61170();
    func_0x000107c61120(unaff_x27 + 6);
    func_0x000107c61120(unaff_x27 + 5);
    func_0x000107c61120(&pppppppcStack_3d8);
    pppppppcVar29 = unaff_x21;
    break;
  case 0x1003cb2f8:
    pppppppcVar29 = (code *******)pcVar30;
    break;
  case 0x1003cb304:
    func_0x000107c61120();
    pppppppcVar8 = &ppppppcStack_18;
    func_0x000107c61120(pppppppcVar8);
    return pppppppcVar8;
  case 0x1003cb644:
    func_0x000107c61174(unaff_x25);
  case 0x1003cb654:
    func_0x000107c61174();
    func_0x000107c61174(unaff_x28);
    func_0x000107c615f0(pcVar30);
    func_0x000107c453e4();
    unaff_x21[2] = (code ******)pppppppcVar29;
    func_0x000107c61174();
    func_0x000107c61174(param_4);
    func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
    func_0x000107c5a49c(pppppppcVar29);
    break;
  case 0x1003cba64:
    FUN_100083b20(&pppppppcStack_3f8);
    pppppppcVar8 = pppppppcStack_3f8;
    FUN_100083b20(&pppppppcStack_400);
    param_4 = pppppppcStack_400;
    FUN_10022fb2c();
    func_0x000107c613fc();
    pppppppcVar35[3] = (code ******)pppppppcStack_418;
    pppppppcVar35[4] = (code ******)param_3;
    pppppppcVar35[5] = (code ******)pppppppcVar29;
    pppppppcVar35[6] = (code ******)unaff_x27;
    pppppppcVar35[7] = (code ******)unaff_x28;
    pppppppcVar35[8] = (code ******)unaff_x21;
    pppppppcVar35[9] = (code ******)unaff_x26;
    pppppppcVar35[10] = (code ******)pppppppcVar8;
    pppppppcVar35[0xb] = (code ******)param_4;
    in_stack_fffffffffffffbd0 = (code *******)PTR_PTR_1126a86b0;
    func_0x000107c610f8();
    pppppppcVar17 = pppppppcStack_418;
    pcVar30 = (char *)pppppppcVar35;
    unaff_x25 = param_3;
  case 0x1003cbac8:
    func_0x000107c61174();
    pppppppcStack_420 = pppppppcVar17;
    func_0x000107c61174(unaff_x25);
    func_0x000107c61174(pppppppcVar29);
    func_0x000107c61174(unaff_x27);
    func_0x000107c61174();
    pppppppcStack_440 = unaff_x28;
    func_0x000107c61174(unaff_x21);
    func_0x000107c61174();
    pppppppcStack_438 = unaff_x26;
    func_0x000107c61174();
    func_0x000107c61174();
    pppppppcStack_418 = param_4;
    func_0x000107c453e4();
    *(code ********)((long)pcVar30 + 0x10) = in_stack_fffffffffffffbd0;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
    func_0x000107c5a49c(in_stack_fffffffffffffbd0);
    pppppppcVar29 = in_stack_fffffffffffffbd0;
    break;
  case 0x1003cbee4:
    func_0x000107c5fadc(((ulong)pppppppcVar24 | 0xd000000000000000) + 0x14,
                        (ulong)pppppppcVar8 | 0x8000000000000000);
    func_0x000107c5a49c(param_4);
    pppppppcVar29 = param_4;
    break;
  case 0x1003cc670:
    uVar21 = 0;
    FUN_10021db98(0);
    func_0x000107c610f8();
    FUN_1003cc78c(pppppppcVar35,uVar21);
    func_0x000107c615e8(pppppppcVar29);
    pppppppcVar29 = param_4;
    break;
  case 0x1003cc6c4:
    return (code *******)pcVar30;
  case 0x1003cc6d4:
    return pppppppcVar35;
  case 0x1003cc6ec:
    func_0x000107c615e8(*(code *******)((long)pcVar30 + 0x10));
    pppppppcVar35 = (code *******)pcVar30;
  case 0x1003cc700:
    goto LAB_107c61460;
  case 0x1003ccab4:
    func_0x000107c61174();
    pppppppcStack_3d8 = pppppppcVar35;
    func_0x000107c61174();
    func_0x000107c453e4();
    pppppppcVar35 = param_3;
  case 0x1003ccad4:
    *(code ********)((long)pcVar30 + 0x18) = pppppppcVar35;
    pppppppcVar35 = (code *******)PTR_PTR_1126a7c00;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(code ********)((long)pcVar30 + 0x10) = pppppppcVar35;
    pcVar30 = "conditionalBeginIn";
  case 0x1003ccaf8:
    func_0x000107c61174();
  case 0x1003ccafc:
    func_0x000107c61174(pppppppcStack_400);
    func_0x000107c5fadc(0xd000000000000010,(ulong)pcVar30 | 0x8000000000000000);
    func_0x000107c5a49c(pppppppcVar35);
    pppppppcVar29 = pppppppcVar35;
    break;
  case 0x1003cce7c:
    func_0x000107c61170();
    pppppppcVar29 = unaff_x25;
    break;
  case 0x1003cceb4:
    func_0x000107c5fadc();
    func_0x000107c5a49c(pcVar30);
    pppppppcVar29 = (code *******)pcVar30;
    break;
  case 0x1003cceec:
    pppppppcStack_3c8 = pppppppcVar24;
    func_0x000107c61174(pcVar30);
    FUN_1000285a8(0x112dca948,&UNK_10d99f4a0);
    func_0x000107c60184();
    func_0x000107c5fadc(0x5372657070696c66,0xef73656369767265);
    func_0x000107c5a49c(pcVar30);
    pppppppcVar29 = (code *******)pcVar30;
    break;
  case 0x1003cd2e0:
  case 0x1003cd2e8:
    func_0x000107c613fc();
    FUN_1003cd314(param_4,pppppppcVar29);
    *unaff_x21 = (code ******)pppppppcVar35;
    return param_4;
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return pppppppcVar29;
code_r0x0001003c22d4:
  func_0x000107c61154();
  if (pppppppcVar35 == (code *******)0x0) {
    pcVar30 = (char *)0x0;
code_r0x0001003c22f8:
    func_0x000107c61170();
    return (code *******)pcVar30;
  }
  func_0x000107c61174(pppppppcVar29);
  pppppppcVar8 = (code *******)pppppppcVar35[1];
  pppppppcVar35[1] = (code ******)pppppppcVar29;
  pppppppcVar29 = pppppppcVar8;
  goto code_r0x000107c61170;
code_r0x0001003afd48:
  do {
    func_0x0001003b2340();
    lVar36 = extraout_x10_00;
code_r0x0001003afd4c:
    pppppppcVar8 = pppppppcStack_1b0;
  } while ((int)lVar36 != 0);
code_r0x0001003afe84:
  func_0x0001003b2350(pppppppcVar8);
code_r0x0001003afe88:
  ppppppcVar34 = param_4[2];
  if (ppppppcVar34 != (code ******)0x0) {
    for (; *ppppppcVar34 != (code *****)0x0; ppppppcVar34 = ppppppcVar34 + 3) {
      FUN_1003acdb8(pppppppcStack_420,*ppppppcVar34,ppppppcVar34[1],ppppppcVar34[2]);
    }
  }
  pppppppcVar33 = (code *******)0x0;
  unaff_x25 = (code *******)0x0;
  pppppppcStack_440 = (code *******)pcVar30;
  in_stack_fffffffffffffbd0 = unaff_x21;
code_r0x0001003afebc:
  pppppppcVar8 = unaff_x21 + 10;
  while (pppppppcVar29 = pppppppcStack_440, uVar7 = unaff_x25 == (code *******)pppppppcStack_3c0[4],
        unaff_x25 < pppppppcStack_3c0[4]) {
    pcVar30 = (char *)((long)pppppppcStack_3c0 + (long)pppppppcVar33);
    unaff_x21 = (code *******)*param_4;
    pppppppcVar29 = pppppppcVar8;
code_r0x0001003afed8:
    unaff_x27 = (code *******)((long)pcVar30 + 0x30);
    FUN_1003b2378();
    unaff_x26 = *(code ********)((undefined *)((long)unaff_x21 + (long)pppppppcVar33) + 8);
    if (*(code ********)((undefined *)((long)unaff_x21 + (long)pppppppcVar33) + 8) ==
        (code *******)0x0) {
      unaff_x26 = (code *******)&UNK_10f7d0ef0;
      if (*(code *******)((long)pcVar30 + 0x28) != (code ******)0x0) {
        unaff_x26 = (code *******)(*(code *******)((long)pcVar30 + 0x28) + 3);
      }
    }
code_r0x0001003aff08:
    unaff_x21 = in_stack_fffffffffffffbd0;
    pppppppcVar8 = unaff_x26;
    func_0x000107c612e8();
    pppppppcVar29[-1] = (code ******)unaff_x27;
    *pppppppcVar29 = (code ******)pppppppcVar8;
    pppppppcVar24 = (code *******)(ulong)*(byte *)(param_4 + 3);
    in_stack_fffffffffffffbd0 = unaff_x21;
    if (*(byte *)(param_4 + 3) == 0) {
      FUN_1003b25ac();
      FUN_1003b27c8(unaff_x27,pppppppcVar8,unaff_x26,unaff_x25,param_3);
    }
    else {
code_r0x0001003aff24:
      if ((int)pppppppcVar24 == 1) {
        if (*(char *)((long)pcVar30 + 0x30) == '\r') {
          pppppppcVar9 = (code *******)((long)pcVar30 + 0x30);
          func_0x000107c30f58();
          pppppppcVar24 = (code *******)&pppppppcStack_3f0;
          pppppppcVar10 = pppppppcStack_420;
code_r0x0001003aff4c:
          func_0x000107c30e70(pppppppcVar24);
          if (pppppppcStack_3f0 == (code *******)0x0) {
            FUN_1003a8364();
            pppppppcVar24 = (code *******)&pppppppcStack_350;
            goto code_r0x0001003afff4;
          }
          pppppppcVar24 = (code *******)&pppppppcStack_1b0;
          unaff_x27 = pppppppcStack_3f0;
code_r0x0001003aff64:
          func_0x000107c30e48(pppppppcVar24);
          func_0x000107c30f34();
          func_0x000107c61180();
          func_0x000107c6103c();
          func_0x000107c3a0b4();
          in_ZR = uStack_1a0._7_1_ == '\0';
          pppppppcVar24 = (code *******)&pppppppcStack_1b0;
code_r0x0001003affa8:
          func_0x000107c60eec(pppppppcVar24);
          func_0x000107c30e4c(&pppppppcStack_1b0);
          func_0x0001003ad610(unaff_x27);
          if (unaff_x27 == (code *******)0x0) goto code_r0x0001003b0180;
        }
        else {
          FUN_1003b25ac();
        }
      }
    }
    unaff_x25 = (code *******)((long)unaff_x25 + 1);
    pppppppcVar33 = pppppppcVar33 + 3;
    pppppppcVar29 = pppppppcVar29 + 2;
code_r0x0001003b007c:
    pppppppcVar8 = pppppppcVar29;
  }
  param_4 = pppppppcStack_440;
  FUN_1003b2a24();
  func_0x0001003af83c(0);
  do {
    func_0x0001003ad044();
    uVar6 = uVar7;
    pppppppcVar25 = extraout_x9_00;
    lVar19 = extraout_x13_01;
    for (uVar27 = extraout_x15_01; uVar27 != 0; uVar27 = uVar27 - 1 & uVar27) {
      uVar28 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
      uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
      uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
      uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
      uVar28 = LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20);
      ppppppcVar34 = pppppppcStack_420[0x27];
code_r0x0001003b00c8:
      pppppppcVar35 = (code *******)(lVar19 + (uVar28 >> 3) & (ulong)pppppppcVar25);
      in_ZR = 1;
      if ((code *******)ppppppcVar34[(long)pppppppcVar35 * 2] == pppppppcVar29)
      goto code_r0x0001003b0140;
      uVar6 = 0;
    }
    func_0x0001003ad058();
    uVar7 = 1;
  } while ((bool)uVar6);
  pppppppcVar35 = pppppppcStack_420 + 0x26;
  in_ZR = 0;
code_r0x0001003b0108:
  FUN_1003b2a3c();
  ppppppcVar34 = pppppppcStack_420[0x27];
  ppppppcVar34[(long)pppppppcVar35 * 2] = (code *****)pppppppcVar29;
  (ppppppcVar34 + (long)pppppppcVar35 * 2)[1] = (code *****)0x0;
  *(byte *)((long)pppppppcStack_420[0x26] + (long)pppppppcVar35) = (byte)param_4 & 0x7f;
  func_0x0001003ad5f8();
  ppppppcVar34 = *(code *******)(extraout_x12 + 0x138);
code_r0x0001003b0140:
  ppppppcVar34 = ppppppcVar34 + (long)pppppppcVar35 * 2 + 1;
  if (unaff_x21 != (code *******)0x0) {
    do {
      func_0x0001003b2b50();
      ppppppcVar34 = extraout_x8_04;
    } while (extraout_w11_00 != 0);
  }
  *ppppppcVar34 = (code *****)unaff_x21;
  func_0x0001003b2b60();
  FUN_1003b2b88(&pppppppcStack_1b0,pppppppcStack_420 + 0x32,param_3,&pppppppcStack_368);
  *pppppppcStack_438 = (code ******)0x1;
  pppppppcStack_438[1] = (code ******)pppppppcVar29;
code_r0x0001003b0180:
  func_0x0001003b2b60(unaff_x21);
  FUN_1003b1f3c(pppppppcStack_3c0);
LAB_1003b0190:
  pppppppcVar8 = (code *******)&pppppppcStack_380;
  FUN_1003b1c84();
  FUN_1003b2d9c();
  func_0x0001003b2da4();
  func_0x0001003a8294(ppppppcStack_18);
  if ((bool)in_ZR) {
    return pppppppcVar8;
  }
  func_0x000107c60e78();
code_r0x0001003b01bc:
  func_0x000107c60ebc();
  func_0x0001003ac88c();
  func_0x000107c3a0b8();
  FUN_1003a8cb8(pppppppcStack_368);
LAB_1003b0238:
  FUN_1003a8cb8(pppppppcStack_3c0);
  goto LAB_1003b0340;
}



/* Entry: 1003b0388; end: 1003b03b3;  */

void FUN_1003b0388(void)

{
  return;
}



/* Entry: 1003b03b4; end: 1003b03f3;  */

void FUN_1003b03b4(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c60b14(param_2);
  func_0x000107c61180();
  FUN_1003ad8f8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1003b03f4; end: 1003b0403;  */

void FUN_1003b03f4(void)

{
  func_0x000107c613d0();
  return;
}



/* Entry: 1003b0404; end: 1003b046f;  */

long FUN_1003b0404(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_1003a9c1c();
  FUN_1003b0470(param_2);
  lVar1 = unaff_x19;
  FUN_1003a9c88();
  func_0x0001003b04a4();
  if (lVar1 == 0) {
    func_0x000107c29934();
  }
  else {
    func_0x0001003b04f4();
    unaff_x20 = unaff_x19;
  }
  return unaff_x20;
}



/* Entry: 1003b0470; end: 1003b04af;  */

int FUN_1003b0470(ulong param_1)

{
  return (uint)*(ushort *)(&UNK_10de4aa4a + (LZCOUNT(param_1 | 1) ^ 0x3fU) * 2) -
         (uint)(param_1 <
               *(ulong *)(&UNK_10e60ceb0 +
                         (ulong)*(ushort *)(&UNK_10de4aa4a + (LZCOUNT(param_1 | 1) ^ 0x3fU) * 2) * 8
                         ));
}



/* Entry: 1003b04b0; end: 1003b04eb;  */

long FUN_1003b04b0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(ulong *)(param_1 + 0x18) < (ulong)(lVar1 + param_2)) {
    lVar1 = 0;
  }
  else {
    FUN_1003ac208();
    lVar1 = *(long *)(param_1 + 8) + lVar1;
  }
  return lVar1;
}



/* Entry: 1003b04ec; end: 1003b055b;  */

void FUN_1003b04ec(void)

{
  return;
}



/* Entry: 1003b055c; end: 1003b0583;  */

undefined8 FUN_1003b055c(undefined8 param_1,undefined8 *param_2)

{
  func_0x000107c60c50(param_1,*param_2,param_2[1]);
  return param_1;
}



/* Entry: 1003b0584; end: 1003b058b;  */

void FUN_1003b0584(void)

{
  return;
}



/* Entry: 1003b058c; end: 1003b0613;  */

undefined8 * FUN_1003b058c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puStack_18;
  
  puVar1 = (undefined8 *)(*param_1 + param_1[1] * 0x30);
  if (param_1[1] == param_1[2]) {
    func_0x000107c2a630(&puStack_18,param_1,puVar1,1);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar3 = param_2[4];
    uVar2 = param_2[3];
    puVar1[5] = param_2[5];
    puVar1[4] = uVar3;
    puVar1[3] = uVar2;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    param_1[1] = param_1[1] + 1;
    puStack_18 = puVar1;
  }
  return puStack_18;
}



/* Entry: 1003b0614; end: 1003b063b;  */

/* WARNING: Possible PIC construction at 0x0001003b0628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003b062c) */

void FUN_1003b0614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x18);
  return;
}



/* Entry: 1003b063c; end: 1003b065f;  */

void FUN_1003b063c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000080);
  return;
}



/* Entry: 1003b0660; end: 1003b06bf;  */

void FUN_1003b0660(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_40 = param_4;
  uStack_38 = param_5;
  uStack_30 = param_2;
  uStack_28 = param_3;
  while (lVar1 = param_1, func_0x0001003b0644(param_1,&uStack_30,0), lVar1 != -1) {
    func_0x0001003b07ac(param_1,lVar1,uStack_28,&uStack_40);
  }
  return;
}



/* Entry: 1003b06c0; end: 1003b0713;  */

ulong FUN_1003b06c0(long param_1,ulong param_2,long param_3,ulong param_4,long param_5)

{
  long lVar1;
  
  if (param_2 < param_4) {
    param_4 = 0xffffffffffffffff;
  }
  else if (param_5 != 0) {
    lVar1 = param_1 + param_4;
    FUN_1003b0714(lVar1,param_1 + param_2,param_3,param_3 + param_5);
    param_4 = lVar1 - param_1;
    if (lVar1 == param_1 + param_2) {
      param_4 = 0xffffffffffffffff;
    }
  }
  return param_4;
}



/* Entry: 1003b0714; end: 1003b0797;  */

long FUN_1003b0714(long param_1,long param_2,char *param_3,long param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  param_4 = param_4 - (long)param_3;
  lVar3 = param_1;
  if ((param_4 != 0) && (lVar3 = param_2, param_4 <= param_2 - param_1)) {
    cVar1 = *param_3;
    while (((lVar3 = param_2, param_4 <= param_2 - param_1 &&
            (FUN_1003b0798(param_1,(long)cVar1,((param_2 - param_1) - param_4) + 1), param_1 != 0))
           && (lVar2 = param_1, func_0x000107c610b0(), lVar3 = param_1, (int)lVar2 != 0))) {
      param_1 = param_1 + 1;
    }
  }
  return lVar3;
}



/* Entry: 1003b0798; end: 1003b07cb;  */

void FUN_1003b0798(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memchr_11034c648)();
  return;
}



/* Entry: 1003b07cc; end: 1003b0993;  */

void FUN_1003b07cc(void)

{
  undefined **ppuVar1;
  code *pcVar2;
  int iVar3;
  long unaff_x19;
  int unaff_w20;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [16];
  byte bStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  FUN_1003b0a5c();
  lVar4 = 0x1c8;
  ppuVar1 = &PTR_DAT_110d7dda8;
  do {
    ppuVar5 = ppuVar1;
    if (lVar4 == 0) {
      func_0x000107c31098();
      func_0x000107c3a1fc();
      return;
    }
    puVar6 = *ppuVar5;
    iVar3 = unaff_w20;
    func_0x0001003b0a68();
    lVar4 = lVar4 + -0x18;
    ppuVar1 = ppuVar5 + 3;
  } while (iVar3 == 0);
  iVar3 = unaff_w20;
  func_0x0001003b0a68();
  func_0x0001003b0a68();
  (*(code *)ppuVar5[2])(auStack_68);
  if ((bStack_58 & 1) == 0) {
    puStack_48 = ppuVar5[1];
    puStack_50 = puVar6;
    FUN_1003a91d4(&UNK_10f7d078c);
    FUN_1003a9204(auStack_80);
    func_0x000107c310b4();
    func_0x000107c60ca0(auStack_80);
    func_0x000107c3a1fc();
  }
  else {
    if (iVar3 != 0) {
      FUN_1008d64b4(auStack_80,auStack_68);
      if ((bStack_58 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_1003b095c;
      }
      FUN_1008d64d4(auStack_68,auStack_80);
      FUN_1003b12a0();
    }
    if (unaff_w20 == 0) {
      if ((bStack_58 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_1003b095c;
      }
      FUN_1003adcc0();
      *(undefined1 *)(unaff_x19 + 0x10) = 1;
    }
    else {
      if ((bStack_58 & 1) == 0) {
        func_0x000104bdc2c8();
LAB_1003b095c:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003b0960);
        (*pcVar2)();
      }
      FUN_1003b1968(auStack_80,auStack_68);
      func_0x0001003b1994();
      FUN_1003b12a0();
    }
  }
  func_0x0001003b12d4();
  return;
}



/* Entry: 1003b0994; end: 1003b0a5b;  */

void FUN_1003b0994(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  byte bStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined1 uStack_28;
  
  uStack_40 = 0;
  auStack_38[0] = 0;
  uStack_28 = 0;
  uStack_50 = param_2;
  uStack_48 = param_3;
  FUN_1003b07cc(auStack_68,&uStack_50);
  if ((bStack_58 & 1) == 0) {
    func_0x000107c3a25c();
  }
  else {
    uVar2 = 0;
    FUN_1003b1ac8();
    if ((uVar2 & 1) != 0) {
      if ((bStack_58 & 1) == 0) {
        func_0x000104bdc2c8();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003b0a3c);
        (*pcVar1)();
      }
      func_0x0001003b1b00(param_1,auStack_68);
      goto LAB_1003b0a18;
    }
    func_0x000107c3a25c();
  }
  *param_1 = 2;
  param_1[1] = uStack_70;
  uStack_70 = 0;
  func_0x000104bda93c(&uStack_70);
LAB_1003b0a18:
  FUN_1003b13a0();
  FUN_1003b1b30(auStack_38);
  return;
}



/* Entry: 1003b0a5c; end: 1003b0a9b;  */

void FUN_1003b0a5c(void)

{
  return;
}



/* Entry: 1003b0a9c; end: 1003b0d8f;  */

void FUN_1003b0a9c(undefined8 param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  long *unaff_x20;
  bool bVar8;
  uint uVar9;
  long *plVar10;
  int iVar11;
  bool bVar12;
  uint uStack_33c;
  undefined1 auStack_338 [368];
  byte bStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  undefined1 auStack_1a8 [320];
  undefined8 uStack_68;
  
  FUN_1003b0a5c();
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1003b0d90();
  uVar9 = (uint)param_1;
  plVar10 = unaff_x20;
  FUN_1003b0d90();
  if ((((ulong)unaff_x20[2] < (ulong)unaff_x20[1]) && (*(char *)(*unaff_x20 + unaff_x20[2]) == '|'))
     && (plVar5 = unaff_x20, FUN_1003b0de4(), (int)plVar5 != 0)) {
    bVar8 = false;
    bVar12 = false;
    iVar11 = 1;
    while( true ) {
      uVar9 = (uint)param_1;
      iVar4 = (int)plVar5;
      func_0x0001003b0e70();
      if (iVar4 == 0) break;
      plVar5 = unaff_x20;
      func_0x0001003b0a68();
      iVar4 = (int)plVar5;
      if (((ulong)plVar5 & 1) != 0) break;
      if (bVar12) {
        func_0x0001003b13a8();
        if (iVar4 == 0) break;
        func_0x0001003b13b4();
      }
      plVar5 = unaff_x20;
      func_0x0001003b0a68();
      if (((ulong)plVar5 & 1) == 0) {
        plVar5 = unaff_x20;
        func_0x0001003b0a68();
        if (((ulong)plVar5 & 1) == 0) {
          plVar5 = unaff_x20;
          func_0x0001003b0a68();
          if (((ulong)plVar5 & 1) == 0) {
            plVar5 = unaff_x20;
            func_0x0001003b0a68();
            iVar4 = 0;
            if ((int)plVar5 == 0) {
              iVar4 = iVar11;
            }
            bVar12 = true;
            iVar11 = iVar4;
          }
          else {
            bVar8 = true;
            bVar12 = true;
          }
        }
        else {
          plVar10 = (long *)0x1;
          bVar12 = true;
        }
      }
      else {
        param_1 = 1;
        bVar12 = true;
      }
    }
    uStack_33c = iVar11 << 0x18;
    uVar6 = 0x10000;
    if (!bVar8) {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0;
    uStack_33c = 0x1000000;
  }
  uVar3 = ((ulong)plVar10 & 1) == 0;
  uVar7 = 0x100;
  if ((bool)uVar3) {
    uVar7 = 0;
  }
  uStack_33c = uVar6 | uVar9 & 1 | uVar7 | uStack_33c;
  puStack_1c0 = auStack_1a8;
  uStack_1b0 = 0x14;
  uStack_1b8 = 0;
  plVar10 = unaff_x20;
  FUN_1003b0de4();
  if ((int)plVar10 != 0) {
    bVar8 = false;
    while( true ) {
      iVar11 = (int)plVar10;
      func_0x0001003b0e70();
      if (iVar11 == 0) break;
      plVar10 = unaff_x20;
      func_0x0001003b0a68();
      if (((ulong)plVar10 & 1) != 0) {
LAB_1003b0c64:
        func_0x0001003b13f8();
        goto LAB_1003b0c74;
      }
      if (bVar8) {
        func_0x0001003b13a8();
        if ((int)plVar10 == 0) goto LAB_1003b0c64;
        func_0x0001003b13b4();
      }
      func_0x0001003b0eb8();
      func_0x0001003b1314();
      if (!(bool)uVar3) {
        func_0x0001003b13a0();
        break;
      }
      func_0x0001003b1320();
      func_0x0001003b13a0();
      bVar8 = true;
    }
  }
  func_0x000107c3a260();
LAB_1003b0c74:
  FUN_1003b15e0();
  if ((bStack_1c8 & 1) == 0) {
    func_0x000107c3a1fc();
  }
  else {
    FUN_1003b166c(auStack_338);
    func_0x0001003b0a68();
    if ((int)unaff_x20 == 0) {
LAB_1003b0ce8:
      if ((bStack_1c8 & 1) == 0) goto LAB_1003b0d4c;
      FUN_1003b16a0();
      FUN_1003b16ac(&uStack_33c,auStack_338);
      func_0x0001003b127c();
      FUN_1003b12a0();
    }
    else {
      func_0x0001003b13b4();
      func_0x0001008d66a8(&puStack_1c0);
      uVar1 = uStack_1b0;
      if ((uStack_1b0 & 1) == 0) {
        func_0x000107c3a1fc();
      }
      else {
        FUN_1008d64d4(auStack_338,&puStack_1c0);
      }
      FUN_1003b12dc(&puStack_1c0);
      if ((uVar1 & 1) != 0) goto LAB_1003b0ce8;
    }
    func_0x0001003b1924(auStack_338);
  }
  func_0x0001003b192c();
  FUN_1003b1954(uStack_68);
  if ((bool)uVar3) {
    return;
  }
  func_0x000107c60e78();
LAB_1003b0d4c:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003b0d54);
  (*pcVar2)();
}



/* Entry: 1003b0d90; end: 1003b0de3;  */

bool FUN_1003b0d90(ulong param_1,char *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  do {
    lVar2 = param_3;
    if (lVar2 == 0) goto LAB_1003b0dcc;
    uVar1 = param_1;
    func_0x0001003b0a68(param_1,(long)*param_2);
    param_3 = lVar2 + -1;
    param_2 = param_2 + 1;
  } while ((uVar1 & 1) != 0);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
LAB_1003b0dcc:
  return lVar2 == 0;
}



/* Entry: 1003b0de4; end: 1003b0e5f;  */

ulong FUN_1003b0de4(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auStack_58 [24];
  ulong uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x0001003b0a68();
  if ((uVar1 & 1) == 0) {
    uStack_40 = param_2 & 0xff;
    uStack_38 = 0;
    FUN_1003a91d4(&UNK_10f7d0f42);
    FUN_1003a9204(auStack_58);
    func_0x000107c3a330();
    func_0x000107c31098(param_1);
    func_0x000107c3a324();
  }
  return uVar1;
}



/* Entry: 1003b0e60; end: 1003b0e77;  */

void FUN_1003b0e60(void)

{
  return;
}



/* Entry: 1003b0e78; end: 1003b0eaf;  */

bool FUN_1003b0e78(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (uVar1 <= uVar2) {
    func_0x000107c31098(param_1,&UNK_10f7d0f1f,0x22);
  }
  return uVar2 < uVar1;
}



/* Entry: 1003b0eb0; end: 1003b0ec3;  */

void FUN_1003b0eb0(void)

{
  return;
}



/* Entry: 1003b0ec4; end: 1003b1067;  */

void FUN_1003b0ec4(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar2;
  int extraout_w11;
  int extraout_w11_00;
  undefined1 uVar3;
  undefined8 uStack_50;
  undefined2 uStack_48;
  long lStack_40;
  short sStack_38;
  
  plVar1 = param_2;
  func_0x0001003b0a68(param_2,0x3c);
  if ((int)plVar1 == 0) {
    uVar3 = 0;
  }
  else {
    plVar1 = param_2;
    func_0x0001003b0a68(param_2,0x75);
    if (((ulong)plVar1 & 1) == 0) {
      plVar1 = param_2;
      func_0x0001003b0a68(param_2,0x6f);
      if (((ulong)plVar1 & 1) == 0) {
        plVar1 = param_2;
        func_0x0001003b0a68(param_2,0x65);
        if (((ulong)plVar1 & 1) == 0) {
          plVar1 = param_2;
          func_0x0001003b0a68(param_2,99);
          if (((ulong)plVar1 & 1) == 0) {
            func_0x000107c31098(param_2,&UNK_10f7d07b0,0x20);
            goto LAB_1003b0fd0;
          }
          uVar3 = 3;
        }
        else {
          uVar3 = 2;
        }
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0;
    }
    FUN_1003b10cc();
    if (((ulong)plVar1 & 1) == 0) goto LAB_1003b0fd0;
  }
  func_0x0001003b10d8();
  if (((ulong)plVar1 & 1) != 0) {
    if (((ulong)param_2[2] < (ulong)param_2[1]) && (*(char *)(*param_2 + param_2[2]) == '\'')) {
      func_0x0001003b10e4(&lStack_40);
      if (((byte)sStack_38 & 1) == 0) {
        func_0x000107c3a1fc();
      }
      else {
        if (lStack_40 == 0) {
          uStack_50 = 0;
          uStack_48 = CONCAT11(0xff,uVar3);
          uVar2 = 0;
        }
        else {
          do {
            FUN_1003b1234();
          } while (extraout_w11 != 0);
          uStack_48 = CONCAT11(0xff,uVar3);
          uStack_50 = extraout_x8;
          do {
            FUN_1003b1234();
            uVar2 = extraout_x8_00;
          } while (extraout_w11_00 != 0);
        }
        *param_1 = uVar2;
        *(undefined2 *)(param_1 + 1) = uStack_48;
        *(undefined1 *)(param_1 + 2) = 1;
        FUN_1003a8c94(&uStack_50);
      }
      func_0x0001003b1244();
      return;
    }
    FUN_1003b1a28();
    if ((ulong)param_2 >> 0x20 != 0) {
      lStack_40 = 0;
      sStack_38 = (ushort)(byte)param_2 << 8;
      *param_1 = 0;
      *(short *)(param_1 + 1) = sStack_38;
      *(undefined1 *)(param_1 + 2) = 1;
      FUN_1003a8c94(&lStack_40);
      return;
    }
  }
LAB_1003b0fd0:
  func_0x000107c3a1fc();
  return;
}



/* Entry: 1003b1068; end: 1003b10cb;  */

void FUN_1003b1068(undefined8 param_1)

{
  undefined1 auStack_38 [16];
  byte bStack_28;
  
  FUN_1003b0ec4(auStack_38,param_1);
  if ((bStack_28 & 1) == 0) {
    func_0x000107c3a1fc();
  }
  else {
    FUN_1003b126c();
    FUN_1003ad9a4();
    func_0x0001003b127c();
    FUN_1003b12a0();
  }
  FUN_1003b12a8(auStack_38);
  return;
}



/* Entry: 1003b10cc; end: 1003b10eb;  */

ulong FUN_1003b10cc(void)

{
  ulong unaff_x20;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001003b0a68();
  if ((unaff_x20 & 1) == 0) {
    uStack_40 = 0x3e;
    uStack_38 = 0;
    FUN_1003a91d4(&UNK_10f7d0f42);
    FUN_1003a9204(auStack_58);
    func_0x000107c3a330();
    func_0x000107c31098();
    func_0x000107c3a324();
  }
  return unaff_x20;
}



/* Entry: 1003b10ec; end: 1003b117f;  */

void FUN_1003b10ec(undefined8 *param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  byte bStack_28;
  
  uVar2 = param_2;
  FUN_1003b0de4(param_2,0x27);
  if ((uVar2 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    FUN_1003b11cc(auStack_38,param_2,0x27);
    bVar1 = (bStack_28 & 1) == 0;
    if (bVar1) {
      *(undefined1 *)param_1 = 0;
    }
    else {
      FUN_1003a8364();
      FUN_1003a8480(&uStack_40);
      *param_1 = uStack_40;
      uStack_40 = 0;
      FUN_1003a8c94(&uStack_40);
    }
    *(bool *)(param_1 + 1) = !bVar1;
  }
  return;
}



/* Entry: 1003b1180; end: 1003b11cb;  */

long FUN_1003b1180(long *param_1,char param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[2];
  for (lVar2 = 0;
      ((ulong)(lVar1 + lVar2) < (ulong)param_1[1] &&
      (*(char *)(*param_1 + lVar1 + lVar2) != param_2)); lVar2 = lVar2 + 1) {
    param_1[2] = lVar1 + lVar2 + 1;
  }
  return *param_1 + lVar1;
}



/* Entry: 1003b11cc; end: 1003b1233;  */

void FUN_1003b11cc(ulong *param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_2;
  uVar3 = param_3;
  FUN_1003b1180();
  FUN_1003b0de4(param_2,param_3);
  bVar1 = (param_2 & 1) == 0;
  if (bVar1) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    *param_1 = uVar2;
    param_1[1] = uVar3;
  }
  *(bool *)(param_1 + 2) = !bVar1;
  return;
}



/* Entry: 1003b1234; end: 1003b124b;  */

void FUN_1003b1234(void)

{
  bool bVar1;
  int *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1003b124c; end: 1003b126b;  */

void FUN_1003b124c(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_1003a8c94();
  }
  return;
}



/* Entry: 1003b126c; end: 1003b1283;  */

undefined1 * FUN_1003b126c(void)

{
  return &stack0x00000018;
}



/* Entry: 1003b1284; end: 1003b129f;  */

void FUN_1003b1284(long param_1)

{
  FUN_1003aef98();
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 1003b12a0; end: 1003b12a7;  */

void FUN_1003b12a0(void)

{
  long *plVar1;
  long unaff_x20;
  
  plVar1 = (long *)(unaff_x20 + 8);
  func_0x0001003adc0c();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  return;
}



/* Entry: 1003b12a8; end: 1003b12c7;  */

void FUN_1003b12a8(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_1003a8c94();
  }
  return;
}



/* Entry: 1003b12c8; end: 1003b12db;  */

void FUN_1003b12c8(void)

{
  return;
}



/* Entry: 1003b12dc; end: 1003b130b;  */

long FUN_1003b12dc(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_1003adc18(param_1 + 8);
  }
  return param_1;
}



/* Entry: 1003b130c; end: 1003b132b;  */

void FUN_1003b130c(void)

{
  return;
}



/* Entry: 1003b132c; end: 1003b139f;  */

long FUN_1003b132c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_1 + param_1[1] * 0x10;
  if (param_1[1] == param_1[2]) {
    func_0x000107c30fd8(&lStack_28,param_1,lVar1,1);
  }
  else {
    FUN_1003aef98(lVar1,param_2);
    param_1[1] = param_1[1] + 1;
    lStack_28 = lVar1;
  }
  return lStack_28;
}



/* Entry: 1003b13a0; end: 1003b1403;  */

undefined1 * FUN_1003b13a0(void)

{
  char in_stack_00000018;
  
  if (in_stack_00000018 == '\x01') {
    FUN_1003adc18(&stack0x00000010);
  }
  return &stack0x00000008;
}



/* Entry: 1003b1404; end: 1003b15ab;  */

long * FUN_1003b1404(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  plVar1 = param_1 + 3;
  *param_1 = (long)plVar1;
  param_1[2] = 0x14;
  param_1[1] = 0;
  lVar4 = *param_2;
  uVar5 = param_2[1];
  if (uVar5 < 0x15) {
    uVar2 = uVar5;
    if (uVar5 == 0) {
      FUN_1003b15ac(param_1,plVar1,0);
    }
    else {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        FUN_1003adcc0(plVar1,lVar4);
        lVar4 = lVar4 + 0x10;
        plVar1 = plVar1 + 2;
      }
    }
  }
  else {
    plVar3 = param_1;
    func_0x000107c30fdc(param_1,uVar5);
    lVar6 = *param_1;
    if (lVar6 != 0) {
      FUN_1003b15ac(param_1,lVar6,param_1[1]);
      param_1[1] = 0;
      if (plVar1 != (long *)lVar6) {
        func_0x000107c60e14(lVar6);
      }
    }
    param_1[1] = 0;
    param_1[2] = uVar5;
    *param_1 = (long)plVar3;
    for (lVar6 = 0; -lVar6 != uVar5 * 0x10; lVar6 = lVar6 + -0x10) {
      FUN_1003adcc0(plVar3,lVar4);
      lVar4 = lVar4 + 0x10;
      plVar3 = plVar3 + 2;
    }
    uVar5 = param_1[1] + (-lVar6 >> 4);
  }
  param_1[1] = uVar5;
  *(undefined1 *)(param_1 + 0x2b) = 1;
  return param_1;
}



/* Entry: 1003b15ac; end: 1003b15df;  */

void FUN_1003b15ac(undefined8 param_1,long param_2,long param_3)

{
  param_2 = param_2 + 8;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1003adc18(param_2);
    param_2 = param_2 + 0x10;
  }
  return;
}



/* Entry: 1003b15e0; end: 1003b15e7;  */

undefined8 * FUN_1003b15e0(void)

{
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  long in_stack_00000190;
  
  FUN_1003b15ac(&stack0x00000180,in_stack_00000180,in_stack_00000188);
  if (in_stack_00000190 != 0) {
    FUN_1003b1614(&stack0x00000180,&stack0x00000180);
  }
  return &stack0x00000180;
}



/* Entry: 1003b15e8; end: 1003b1613;  */

undefined8 * FUN_1003b15e8(undefined8 *param_1)

{
  FUN_1003b15ac(param_1,*param_1,param_1[1]);
  if (param_1[2] != 0) {
    FUN_1003b1614(param_1,param_1);
  }
  return param_1;
}



/* Entry: 1003b1614; end: 1003b162f;  */

void FUN_1003b1614(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1003b1630; end: 1003b1663;  */

long FUN_1003b1630(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1003b1614(param_1,param_1);
  }
  return param_1;
}



/* Entry: 1003b1664; end: 1003b166b;  */

void FUN_1003b1664(void)

{
  return;
}



/* Entry: 1003b166c; end: 1003b169f;  */

void FUN_1003b166c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_28 [8];
  
  FUN_1003adc98();
  func_0x0001003adca4(param_1,1,param_3,param_4,auStack_28);
  func_0x0001003adcb0();
  return;
}



/* Entry: 1003b16a0; end: 1003b16ab;  */

void FUN_1003b16a0(void)

{
  return;
}



/* Entry: 1003b16ac; end: 1003b1743;  */

void FUN_1003b16ac(void)

{
  int extraout_w11;
  long unaff_x20;
  long unaff_x21;
  long lVar1;
  long lStack_38;
  
  FUN_1003b1744();
  FUN_1003b175c();
  lVar1 = 0x30;
  for (; unaff_x20 != 0; unaff_x20 = unaff_x20 + -1) {
    FUN_1003ae7b0(lStack_38 + lVar1,unaff_x21 + lVar1 + -0x30);
    lVar1 = lVar1 + 0x10;
  }
  if (lStack_38 != 0) {
    do {
      func_0x0001003b1898();
    } while (extraout_w11 != 0);
  }
  func_0x0001003adca4();
  func_0x0001003b18a8();
  FUN_1003b18b0(&lStack_38);
  return;
}


