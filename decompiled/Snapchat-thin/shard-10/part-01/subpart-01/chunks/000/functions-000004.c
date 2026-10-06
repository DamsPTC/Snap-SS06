/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10777b714; end: 10777b743;  */

undefined2 FUN_10777b714(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f2664();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777b934; end: 10777b963;  */

undefined2 FUN_10777b934(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f28a0();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777bb54; end: 10777bb83;  */

undefined2 FUN_10777bb54(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f2a88();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777bd74; end: 10777bda3;  */

undefined2 FUN_10777bd74(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f2478();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777bf6c; end: 10777bfb3;  */

uint FUN_10777bf6c(long param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x68) == 3) {
    func_0x00010777d774();
    uVar1 = (uint)param_1;
    func_0x00010777d1c4();
    func_0x0001077f2be8();
    uVar1 = uVar1 & 0xffff;
    func_0x00010777d650();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10777c20c; end: 10777c27f;  */

undefined1 * FUN_10777c20c(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 extraout_w8;
  undefined1 uVar4;
  undefined1 extraout_w8_00;
  int extraout_w8_01;
  int extraout_w10;
  long unaff_x19;
  uint uVar5;
  undefined1 *unaff_x21;
  undefined1 auStack_170 [8];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_108;
  
  func_0x00010777d1f4();
  func_0x00010777da1c();
  func_0x00010777d950();
  func_0x00010777d5e0();
  uVar5 = (uint)unaff_x21;
  uVar1 = uVar5 == 0xff;
  if (uVar5 < 0x100) {
    func_0x00010777d748();
    uVar4 = extraout_w8;
  }
  else {
    func_0x00010777d540();
    func_0x00010777d2c0();
    func_0x000107404cc4();
    uVar4 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x10) = uVar4;
  func_0x00010777d1dc();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar2 = param_1;
  func_0x00010777d638();
  puVar3 = puVar2;
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar1) {
    uStack_160 = *(undefined8 *)(puVar2 + 0x10);
    uStack_168 = *(undefined8 *)(puVar2 + 8);
    if (*(long *)(puVar2 + 0x10) != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    uStack_108 = 5;
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar1 = uVar5 == 0xff;
    if (uVar5 < 0x100) goto code_r0x00010777c3d0;
    func_0x00010777d400();
    func_0x00010777bfb4();
code_r0x00010777c3f8:
    func_0x00010777d2c0();
    func_0x000107404cc4();
    uVar4 = 1;
  }
  else {
    if (extraout_w8_01 == 6) {
      unaff_x21 = auStack_170;
      func_0x00010777da44();
      func_0x000107348eb0();
      func_0x00010777d950();
      uVar5 = (uint)puVar3 & 0xffff;
      func_0x00010777d640();
      uVar1 = uVar5 == 0xff;
      if (0xff < uVar5) {
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
    else if (extraout_w8_01 == 7) {
      unaff_x21 = auStack_170;
      func_0x00010777da44();
      func_0x000107348ecc();
      func_0x00010777d950();
      uVar5 = (uint)puVar3 & 0xffff;
      func_0x00010777d640();
      uVar1 = uVar5 == 0xff;
      if (0xff < uVar5) {
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
    else {
      if (extraout_w8_01 == 8) {
        func_0x00010777dce0();
        func_0x00010777d398(*(undefined8 *)(puVar2 + 8));
        func_0x000107535980(auStack_170);
        unaff_x21 = (undefined1 *)(*(undefined8 **)(puVar2 + 8))[1];
        for (puVar3 = (undefined1 *)**(undefined8 **)(puVar2 + 8); uVar1 = puVar3 == unaff_x21,
            !(bool)uVar1; puVar3 = puVar3 + 0x70) {
          puVar2 = puVar3;
          FUN_10777bf6c();
          uVar5 = (uint)puVar2 & 0xffff;
          uVar1 = uVar5 == 0x100;
          if (uVar5 < 0x100) {
            func_0x00010777d724();
            goto code_r0x00010777c41c;
          }
          func_0x00010777d700();
          func_0x000107535a48();
        }
        func_0x00010777dac0();
        func_0x000107535ae0();
        func_0x00010777d338();
        func_0x000107404cc4();
code_r0x00010777c41c:
        puVar3 = auStack_170;
        func_0x0001073e7720();
        goto code_r0x00010777c408;
      }
      unaff_x21 = auStack_170;
      func_0x00010777da44();
      func_0x0001074fd134();
      func_0x00010777d950();
      uVar5 = (uint)puVar3 & 0xffff;
      func_0x00010777d640();
      uVar1 = uVar5 == 0xff;
      if (0xff < uVar5) {
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
code_r0x00010777c3d0:
    func_0x00010777d748();
    uVar4 = extraout_w8_00;
  }
  param_1[0x10] = uVar4;
code_r0x00010777c408:
  func_0x00010777d1dc();
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar2 = unaff_x21 + 8;
  func_0x00010726af18();
  func_0x00010777d638();
  if ((((*(int *)(puVar2 + 0x68) != 0) && (*(int *)(puVar2 + 0x68) != 1)) &&
      (*(int *)(puVar2 + 0x68) != 2)) && (*(int *)(puVar2 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2dd0();
    func_0x00010777d374();
    return (undefined1 *)(ulong)((uint)puVar3 & 0xffff);
  }
  return (undefined1 *)0x0;
}



/* Entry: 10777c6c8; end: 10777c77f;  */

ulong FUN_10777c6c8(ulong param_1)

{
  func_0x00010777c6e0();
  return param_1 & 0xffffffffff;
}



/* Entry: 10777c94c; end: 10777c9a3;  */

undefined2 FUN_10777c94c(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f3294();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777cb6c; end: 10777cbc3;  */

undefined2 FUN_10777cb6c(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f33dc();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777cd8c; end: 10777cde3;  */

undefined2 FUN_10777cd8c(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2fb8();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777d03c; end: 10777d09b;  */

ulong FUN_10777d03c(long param_1,undefined8 *param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  uint *puVar2;
  uint uStack_34;
  
  if ((((*(int *)(param_1 + 0x68) == 0) || (*(int *)(param_1 + 0x68) == 1)) ||
      (*(int *)(param_1 + 0x68) == 2)) ||
     (((*(int *)(param_1 + 0x68) == 3 || (*(int *)(param_1 + 0x68) == 4)) ||
      (*(int *)(param_1 + 0x68) != 8)))) {
    return 0;
  }
  func_0x00010777dbe0();
  if (extraout_x8 == 0x1c0) {
    puVar2 = &uStack_34;
    for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x70) {
      lVar1 = unaff_x20;
      func_0x000107280530(unaff_x20,*param_2);
      if (((uint)lVar1 >> 8 & 1) == 0) goto code_r0x00010777d0f8;
      *(char *)puVar2 = (char)lVar1;
      puVar2 = (uint *)((long)puVar2 + 1);
    }
    lVar1 = 1;
  }
  else {
code_r0x00010777d0f8:
    lVar1 = 0;
    uStack_34 = 0;
  }
  return (ulong)uStack_34 | lVar1 << 0x20;
}



/* Entry: 10777dee4; end: 10777e14f;  */

void FUN_10777dee4(long param_1,long param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long lVar4;
  int iVar6;
  undefined8 extraout_x8;
  long *aplStack_708 [2];
  int iStack_6f8;
  undefined1 auStack_6f0 [24];
  long lStack_6d8;
  undefined1 auStack_6d0 [400];
  ushort uStack_540;
  long lStack_538;
  undefined1 auStack_530 [400];
  ushort uStack_3a0;
  long lStack_398;
  undefined1 auStack_390 [400];
  ushort uStack_200;
  long lStack_1f8;
  undefined1 auStack_1f0 [248];
  undefined8 uStack_f8;
  ushort auStack_60 [4];
  undefined8 uStack_58;
  undefined1 *puVar5;
  
  lVar4 = param_3;
  func_0x00010777f8f4();
  iVar6 = (int)lVar4;
  uStack_58 = extraout_x8;
  FUN_1077515a0();
  if ((iVar6 == 0) || (*(long *)(param_3 + 0xf8) == 0)) {
LAB_10777e018:
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x70) = 1;
    *(undefined4 *)(param_1 + 0x78) = 1;
LAB_10777e028:
    func_0x00010777f8e0(uStack_58);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar4 = param_3;
    func_0x0001077515e0();
    uVar1 = (uint)lVar4 & 0xffff;
    in_ZR = uVar1 == 0xff;
    if (uVar1 < 0x100) goto LAB_10777e018;
    uVar1 = ((uint)lVar4 & 0xff) - 1;
    in_ZR = uVar1 == 1;
    if (1 < uVar1) goto LAB_10777e018;
    func_0x0001077522e8(aplStack_708,param_3 + 0x178);
    lStack_538 = param_2;
    func_0x000107751334(auStack_530,param_3);
    lStack_6d8 = param_2;
    uStack_3a0 = (ushort)lVar4;
    func_0x000107751334(auStack_6d0,param_3);
    lStack_398 = lStack_538;
    uStack_540 = (ushort)lVar4;
    func_0x000107751334(auStack_390,auStack_530);
    uStack_200 = uStack_3a0;
    lStack_1f8 = lStack_6d8;
    func_0x000107751334(auStack_1f0,auStack_6d0);
    lVar4 = lStack_1f8;
    auStack_60[0] = uStack_540;
    if (iStack_6f8 == 0) {
      (**(code **)(*aplStack_708[0] + 0x48))();
      (**(code **)(*aplStack_708[0] + 0x38))(auStack_6f0);
      uVar3 = SUB81(auStack_6f0,0);
      func_0x000107330078();
      if ((uStack_200 & 0x100) == 0) {
        func_0x000104bdc2c8();
        goto LAB_10777e0e4;
      }
      func_0x00010777ea64();
LAB_10777e0a0:
      func_0x00010777ea38(&lStack_398);
      *(undefined1 *)(param_1 + 0x10) = uVar3;
      *(undefined4 *)(param_1 + 0x70) = 1;
      *(undefined4 *)(param_1 + 0x78) = 1;
      func_0x000107267da8(auStack_6d0);
      func_0x000107267da8(auStack_530);
      func_0x000107267df4(aplStack_708);
      goto LAB_10777e028;
    }
    FUN_107834100(auStack_6f0,aplStack_708[0],uStack_f8,0x2000);
    if ((auStack_60[0] & 0x100) != 0) {
      puVar5 = auStack_6f0;
      func_0x00010777ea64(puVar5,auStack_60,uStack_f8,0x2000,lVar4 + 0xc0);
      uVar3 = SUB81(puVar5,0);
      func_0x0001072977d0(auStack_6f0);
      goto LAB_10777e0a0;
    }
  }
  func_0x000104bdc2c8();
LAB_10777e0e4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10777e0e8);
  (*pcVar2)();
}



/* Entry: 10777ea34; end: 10777ea37;  */

void FUN_10777ea34(void)

{
  return;
}



/* Entry: 10777f418; end: 10777f45f;  */

long * FUN_10777f418(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x18;
    func_0x0001073c6654();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10777f78c; end: 10777f883;  */

void FUN_10777f78c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined1 uStack_e6;
  undefined4 uStack_e5;
  undefined1 uStack_e1;
  undefined1 auStack_e0 [8];
  undefined4 uStack_d8;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [120];
  undefined8 uStack_38;
  
  func_0x00010777f8f4();
  puVar1 = (undefined8 *)0xf8;
  uStack_38 = extraout_x8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1109d6c40;
  func_0x000107325f14(auStack_b0,param_2);
  func_0x00010726928c(auStack_d0,param_3);
  uStack_d8 = 2;
  uStack_e6 = 0;
  uStack_e5 = 0x1010101;
  uStack_e1 = 0;
  func_0x0001072c9f9c(puVar1 + 3,0x17,auStack_e0,&uStack_e6);
  func_0x0001072c9884(auStack_e0);
  puVar1[3] = &PTR_DAT_1109d6bb8;
  func_0x000107327a90(puVar1 + 0xc,auStack_b0);
  func_0x00010726928c(puVar1 + 0x1b,auStack_d0);
  func_0x000104c3365c(auStack_d0);
  func_0x000107327aec(auStack_b0);
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  func_0x00010777f8e0(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__119__shared_weak_countD2Ev();
  __ZdlPv();
  func_0x00010777f924();
  *puVar1 = &PTR_DAT_1109d6c40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10777fb74; end: 10777fcab;  */

/* WARNING: Possible PIC construction at 0x00010777fc10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010777fc98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010777fc9c) */

void FUN_10777fb74(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [120];
  uint uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001073730ac(param_1);
  if (*param_2 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    func_0x000107753050(auStack_b8,*param_2,param_3,&uStack_100);
    func_0x00010724b3d8(&uStack_100);
    if (uStack_40 == 1) {
      puVar2 = auStack_b8;
      func_0x0001073405dc();
      if (*(int *)(puVar2 + 0x68) == 8) {
        lVar1 = (*(long **)(puVar2 + 8))[1];
        for (lVar4 = **(long **)(puVar2 + 8); lVar4 != lVar1; lVar4 = lVar4 + 0x70) {
          if (*(int *)(lVar4 + 0x68) == 3) {
            lVar3 = lVar4;
            func_0x00010732393c(lVar4);
            func_0x000107372e84(param_1,lVar3);
          }
        }
      }
      else if (*(int *)(puVar2 + 0x68) == 3) {
        func_0x000107372e84(param_1,puVar2 + 8);
      }
    }
  }
  if (uStack_40 != 0xffffffff) {
    func_0x000107285594((&PTR_DAT_110996f18)[uStack_40]);
  }
  return;
}



/* Entry: 10777ffd4; end: 107780017;  */

void FUN_10777ffd4(void)

{
  undefined8 *unaff_x19;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000;
  in_stack_00000000 = 0;
  in_stack_00000008 = 0;
  func_0x000107274970();
  if ((undefined1 *)register0x00000008 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107780600; end: 1077808d3;  */

void FUN_107780600(long *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  double dVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int iVar7;
  undefined8 extraout_x8;
  byte bVar8;
  undefined1 auStack_1a0 [16];
  undefined8 *apuStack_190 [2];
  undefined8 *apuStack_180 [2];
  ulong auStack_170 [12];
  undefined1 uStack_110;
  undefined **ppuStack_108;
  long lStack_100;
  ulong uStack_f8;
  undefined ***pppuStack_f0;
  undefined1 auStack_e8 [24];
  undefined1 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [56];
  byte bStack_70;
  undefined8 uStack_68;
  
  lVar3 = param_2;
  func_0x000107781398();
  uStack_68 = extraout_x8;
  func_0x00010778039c(auStack_a8,lVar3 + 0x18);
  auStack_170[0] = 0;
  dVar4 = (double)(param_2 + 0xb8);
  uVar6 = param_3;
  func_0x00010778049c(dVar4,param_3,auStack_170);
  iVar7 = (int)dVar4;
  if ((uVar6 & 1) == 0) {
    iVar7 = 0;
  }
  auStack_170[0] = auStack_170[0] & 0xffffffffffffff00;
  lVar3 = param_2 + 0xf8;
  func_0x000107780540(lVar3,param_3,auStack_170);
  uVar1 = (uint)lVar3 & 0xffff;
  if (uVar1 < 0x101) {
    uVar1 = 0;
  }
  auStack_170[0] = auStack_170[0] & 0xffffffffffffff00;
  uStack_110 = 0;
  uVar2 = *(char *)(param_2 + 0x1c0) == '\x01';
  if ((bool)uVar2) {
    ppuStack_108 = (undefined **)((ulong)ppuStack_108 & 0xffffffffffffff00);
    uStack_d0 = 0;
    puStack_c8 = (undefined *)0x0;
    func_0x0001072d124c(apuStack_190);
    func_0x0001072f7a2c(apuStack_180,param_2 + 0x130,param_3,&ppuStack_108,apuStack_190);
    func_0x000107781430();
    func_0x000107781420();
    ppuStack_108 = (undefined **)((ulong)ppuStack_108 & 0xffffffffffffff00);
    uStack_d0 = 0;
    puStack_c8 = (undefined *)0x0;
    func_0x0001072d124c(auStack_1a0);
    func_0x0001072f7a2c(apuStack_190,param_2 + 0x178,param_3,&ppuStack_108,auStack_1a0);
    func_0x00010726b09c(auStack_1a0);
    func_0x000107781420();
    func_0x0001077808d4(&ppuStack_108,*apuStack_180[0],apuStack_180[0][1]);
    func_0x0001077808d4(auStack_e8,*apuStack_190[0],apuStack_190[0][1]);
    puStack_c8 = &UNK_10e52b660;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x0001074e37b8(auStack_170,&ppuStack_108);
    func_0x000107266af0(&ppuStack_108);
    func_0x000107781430();
    func_0x00010726b09c(apuStack_180);
  }
  if ((bStack_70 & 1) == 0) {
    bVar8 = *(byte *)(param_2 + 0x90);
  }
  else {
    bVar8 = 1;
  }
  puVar5 = (undefined8 *)0x170;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_1109d6d50;
  ppuStack_108 = &PTR_DAT_1109d6da0;
  pppuStack_f0 = &ppuStack_108;
  lStack_100 = param_2;
  uStack_f8 = param_3;
  func_0x000107780bcc(puVar5 + 3,param_2,auStack_a8,bVar8 & 1,param_2 + 0x98,iVar7,uVar1 & 1,
                      &ppuStack_108,auStack_170);
  func_0x000107781210(&ppuStack_108);
  *param_1 = (long)(puVar5 + 3);
  param_1[1] = (long)puVar5;
  func_0x000107781358(0);
  func_0x000107410b98(auStack_170);
  func_0x00010724b3d8(auStack_a8);
  func_0x000107781384(uStack_68);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107266af0(&ppuStack_108);
  func_0x000107781430();
  func_0x00010726b09c(apuStack_180);
  func_0x000107410b98(auStack_170);
  func_0x00010724b3d8(auStack_a8);
  do {
    func_0x0001077813bc();
  } while( true );
}



/* Entry: 107780d58; end: 107780dab;  */

void FUN_107780d58(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x38) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1109d6c80)[*(uint *)(param_1 + 0x38)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  return;
}



/* Entry: 107780f28; end: 107780f3b;  */

void FUN_107780f28(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    func_0x0001074e3930();
    *(undefined1 *)(param_1 + 0x60) = 1;
    return;
  }
  return;
}



/* Entry: 107781140; end: 107781147;  */

void FUN_107781140(void)

{
  return;
}



/* Entry: 107781258; end: 10778126b;  */

void FUN_107781258(void)

{
  func_0x000107781348();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107781384; end: 10778149b;  */

void FUN_107781384(void)

{
  return;
}



/* Entry: 107781b38; end: 107781b93;  */

/* WARNING: Possible PIC construction at 0x000107330270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107330348: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107330274) */
/* WARNING: Removing unreachable block (ram,0x000107330298) */
/* WARNING: Removing unreachable block (ram,0x000107330290) */
/* WARNING: Removing unreachable block (ram,0x00010733034c) */
/* WARNING: Removing unreachable block (ram,0x000107330370) */
/* WARNING: Removing unreachable block (ram,0x000107330368) */
/* WARNING: Removing unreachable block (ram,0x000107344d98) */

undefined8 * FUN_107781b38(undefined8 *param_1,undefined1 *param_2)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  undefined1 auVar7 [8];
  code *pcVar8;
  undefined1 uVar9;
  bool bVar10;
  uint uVar11;
  double dVar12;
  long lVar13;
  double dVar14;
  undefined2 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  double *pdVar19;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar20;
  undefined8 *extraout_x8_05;
  undefined8 *puVar21;
  long extraout_x8_06;
  undefined1 *puVar22;
  uint uVar23;
  int iVar24;
  int extraout_w9;
  undefined1 uVar25;
  int extraout_w11;
  undefined8 *extraout_x12;
  long lVar26;
  undefined8 *puVar27;
  uint uVar28;
  int iVar29;
  ulong uVar30;
  long unaff_x29;
  float fVar31;
  double dVar32;
  long in_stack_00000050;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined1 auStack_220 [8];
  undefined1 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [400];
  undefined1 *puStack_70;
  code *pcStack_68;
  ulong uStack_60;
  long *plStack_50;
  undefined *puStack_48;
  undefined1 uStack_3d;
  undefined1 auStack_3c [28];
  ulong uStack_20;
  long lStack_10;
  undefined8 uStack_8;
  
  pdVar19 = (double *)(unaff_x29 + -0x70);
  uVar18 = 0xd;
  func_0x0001003a994c(&stack0x00000050);
  puVar22 = param_2;
  uVar30 = uVar18;
  in_stack_00000050 = unaff_x29;
  func_0x0001003a9964();
  iVar29 = (int)uVar30;
  uVar9 = puVar22 == (undefined1 *)0x2;
  uStack_8 = extraout_x8_00;
  if ((!(bool)uVar9) || (puVar21 = param_1, func_0x000100574918(), (int)puVar21 == 0)) {
    func_0x0001003a9974();
    puStack_218 = auStack_200;
    uStack_208 = 500;
    uStack_210 = 0;
    auStack_220 = (undefined1  [8])extraout_x8_01;
    func_0x0001003a9984(auStack_220,param_1,param_2,uVar18,pdVar19,0);
    func_0x0001003ac6b8();
code_r0x0001003a9298:
    puVar17 = (undefined8 *)auStack_220;
    func_0x0001003ac644(puVar17);
    goto code_r0x0001003a92a0;
  }
  if ((long)uVar18 < 0) {
    if ((0 < (int)(uint)uVar18) && (uVar1 = *(uint *)(pdVar19 + 2), uVar1 != 0))
    goto code_r0x0001003a92c8;
    goto code_r0x0001003a98cc;
  }
  uVar1 = (uint)uVar18 & 0xf;
  if ((uVar18 & 0xf) == 0) goto code_r0x0001003a98cc;
code_r0x0001003a92c8:
  uVar1 = uVar1 - 1;
  uVar9 = uVar1 == 0xe;
  if (0xe < uVar1) {
    func_0x000107c3aa80();
    puVar17 = puVar21;
    goto code_r0x0001003a92a0;
  }
  pcVar8 = (code *)pdVar19[1];
  fVar5 = *(float *)pdVar19;
  uVar30 = (ulong)(uint)fVar5;
  uVar11 = *(uint *)((long)pdVar19 + 4);
  dVar32 = *pdVar19;
  puVar15 = (undefined2 *)*pdVar19;
  dVar12 = *pdVar19;
  dVar14 = *pdVar19;
  puVar17 = extraout_x8;
  uStack_60 = uVar30;
  uStack_20 = uVar30;
  switch(uVar1) {
  case 0:
    puVar17 = (undefined8 *)auStack_220;
    if ((int)fVar5 < 0) {
      puVar17 = (undefined8 *)(auStack_220 + 1);
      auStack_220[0] = 0x2d;
    }
    uVar9 = fVar5 == 0.0;
    fVar31 = (float)-(int)fVar5;
    if (-1 < (int)fVar5) {
      fVar31 = fVar5;
    }
    uVar18 = (ulong)(uint)fVar31;
    uVar30 = uVar18;
    func_0x00010054bacc(uVar18);
    func_0x00010054bb78(puVar17,uVar18,uVar30);
    func_0x000107c3a9d4();
    break;
  case 1:
    uVar18 = uVar30;
    func_0x00010054bacc(uVar30);
    puVar17 = (undefined8 *)auStack_220;
    func_0x00010054bb78(puVar17,uVar30,uVar18);
    func_0x000107c3a9d4();
    break;
  case 2:
    func_0x000107c3aa7c();
    if ((bool)uVar9) {
      puVar17 = (undefined8 *)(uVar30 | extraout_x8_03 << 0x20);
      func_0x000107c3aa4c(extraout_x8);
      lStack_10 = in_stack_00000050;
      func_0x0001073447e0();
      puStack_48 = &UNK_10733034c;
      puStack_70 = param_2;
      pcStack_68 = pcVar8;
      plStack_50 = &lStack_10;
      func_0x000107345c14(auStack_3c);
      puVar21 = (undefined8 *)-(long)puVar17;
      if (-1 < (long)puVar17) {
        puVar21 = puVar17;
      }
      func_0x0001003b0470(puVar21);
      if ((long)pcVar8 < 0) {
        *(undefined1 *)extraout_x8 = 0x2d;
      }
      func_0x000107345ba8();
      func_0x0001003b04f4();
      return puVar17;
    }
    goto code_r0x0001003a98c8;
  case 3:
    func_0x000107c3aa7c();
    if ((bool)uVar9) {
      puVar21 = (undefined8 *)(uVar30 | extraout_x8_04 << 0x20);
      func_0x000107c3aa4c(extraout_x8,puVar21);
      lStack_10 = in_stack_00000050;
      func_0x0001073447e0();
      puStack_48 = &UNK_107330274;
      plStack_50 = &lStack_10;
      func_0x000100a2b988(&uStack_3d);
      func_0x0001003b0470(puVar21);
      func_0x000107345dfc();
      func_0x0001003b04f4();
      return puVar21;
    }
    goto code_r0x0001003a98c8;
  case 4:
    puVar17 = (undefined8 *)auStack_220;
    if ((long)pcVar8 < 0) {
      puVar17 = (undefined8 *)(auStack_220 + 1);
      auStack_220[0] = 0x2d;
    }
    uVar30 = (long)pcVar8 >> 0x3f;
    lVar2 = ((ulong)*pdVar19 ^ uVar30) - uVar30;
    uVar9 = lVar2 == 0;
    lVar26 = ((ulong)pcVar8 ^ uVar30) - (uVar30 + (((ulong)*pdVar19 ^ uVar30) < uVar30));
    lVar13 = lVar2;
    func_0x000107c3176c(lVar2,lVar26);
    func_0x000107c31770(puVar17,lVar2,lVar26,lVar13);
    func_0x000107c3a9d4();
    break;
  case 5:
    dVar14 = dVar12;
    func_0x000107c3176c(dVar12,pcVar8);
    puVar17 = (undefined8 *)auStack_220;
    func_0x000107c31770(puVar17,dVar12,pcVar8,dVar14);
    func_0x000107c3a9d4();
    break;
  case 6:
    uVar9 = ((uint)fVar5 & 1) == 0;
    lVar2 = 4;
    if ((bool)uVar9) {
      lVar2 = 5;
    }
    pcVar3 = "true";
    if ((bool)uVar9) {
      pcVar3 = "false";
    }
    func_0x000107c610b4(auStack_220,pcVar3,lVar2);
    func_0x00010015492c(extraout_x8,auStack_220,auStack_220 + lVar2);
    break;
  case 7:
    auStack_220[0] = SUB41(fVar5,0);
    func_0x00010015492c(extraout_x8,auStack_220,auStack_220 + 1);
    break;
  case 8:
    fVar31 = fVar5;
    func_0x000107c3aa80();
    auStack_220 = (undefined1  [8])0x0;
    if ((int)fVar5 < 0) {
      auStack_220 = (undefined1  [8])0x10000000000;
      fVar31 = -fVar31;
    }
    if ((((uint)fVar5 ^ 0xffffffff) & 0x7f800000) == 0) {
      uVar9 = ABS(fVar31) == INFINITY;
      func_0x0001073304d4(extraout_x8,uVar9,&UNK_10e60dafc,auStack_220);
    }
    else {
      func_0x000107c31744();
      auVar7 = auStack_220;
      uVar18 = (ulong)auStack_220 >> 0x20;
      puVar16 = puVar21;
      func_0x00010054bacc();
      uVar30 = (ulong)auVar7 >> 0x28 & 0xff;
      iVar29 = (int)uVar30;
      uVar11 = (uint)puVar16;
      uVar1 = uVar11;
      if (iVar29 != 0) {
        uVar1 = uVar11 + 1;
      }
      uVar20 = (ulong)uVar1;
      uVar1 = uVar11 + (int)((ulong)puVar21 >> 0x20);
      uVar4 = auVar7._4_4_;
      uVar28 = auVar7._0_4_;
      if (((ulong)auVar7 >> 0x20 & 0xff) == 0) {
        if (-4 < (int)uVar1) {
          uVar23 = uVar28;
          if ((int)uVar28 < 1) {
            uVar23 = 0x10;
          }
          if ((int)uVar1 <= (int)uVar23) goto code_r0x0001003a9768;
        }
      }
      else if ((uVar4 & 0xff) != 1) {
code_r0x0001003a9768:
        if ((long)puVar21 < 0) {
          if ((int)uVar1 < 1) {
            uVar4 = uVar28;
            if ((int)(uVar28 + uVar1) < 0 == SCARRY4(uVar28,uVar1)) {
              uVar4 = -uVar1;
            }
            uVar9 = uVar28 < 0x80000000 && uVar11 == 0;
            if (uVar28 >= 0x80000000 || uVar11 != 0) {
              uVar4 = -uVar1;
            }
            puVar27 = (undefined8 *)(ulong)uVar4;
            func_0x000107c3aa40();
            func_0x000107c3a9c8();
            puVar21 = puVar16;
            if (iVar29 != 0) {
              puVar21 = (undefined8 *)((long)puVar16 + 1);
              *(undefined *)puVar16 = (&UNK_10e60dacd)[uVar30];
            }
            puVar17 = (undefined8 *)((long)puVar21 + 1);
            *(undefined1 *)puVar21 = 0x30;
            if ((((ulong)auVar7 & 0x10000000000000) != 0 || uVar11 != 0) || uVar4 != 0) {
              *(undefined1 *)((long)puVar21 + 1) = 0x2e;
              func_0x000107c3aa8c(puVar17);
              func_0x000107330b24(extraout_x8_06 + 2,puVar27);
              puVar17 = puVar27;
              func_0x000107c3aab0();
            }
          }
          else {
            uVar1 = uVar28 - uVar11 & (int)(uVar4 << 0xb) >> 0x1f;
            func_0x000107c3aa40();
            func_0x000107c3a9c8();
            puVar17 = puVar16;
            if (iVar29 != 0) {
              func_0x000107c3aa38();
              puVar17 = puVar16;
            }
            func_0x000107c31774();
            uVar9 = uVar1 == 1;
            if (0 < (int)uVar1) {
              func_0x000107c3aa8c();
              goto code_r0x0001003a9840;
            }
          }
        }
        else {
          bVar10 = (uVar4 & 0xff) != 2 && (uVar28 == uVar1 || (int)(uVar28 - uVar1) < 0);
          func_0x000107c3aa78(((ulong)puVar21 >> 0x20) + uVar20);
          puVar17 = extraout_x8_05;
          iVar24 = extraout_w9;
          if (!bVar10) {
            puVar17 = extraout_x12;
            iVar24 = extraout_w11;
          }
          uVar9 = ((ulong)auVar7 & 0x10000000000000) == 0;
          puVar16 = extraout_x8_05;
          iVar6 = extraout_w9;
          if (!(bool)uVar9) {
            puVar16 = puVar17;
            iVar6 = iVar24;
          }
          func_0x000107c3aa40();
          func_0x000107c3a9c8();
          if (iVar29 != 0) {
            func_0x000107c3aa38();
          }
          func_0x000107c3aab0();
          func_0x000107c3aa8c();
          func_0x000107330b24(puVar16,(ulong)puVar21 >> 0x20);
          puVar17 = puVar16;
          if ((uVar4 >> 0x14 & 1) != 0) {
            puVar17 = (undefined8 *)((long)puVar16 + 1);
            *(undefined1 *)puVar16 = 0x2e;
            uVar9 = iVar6 == 1;
            if (0 < iVar6) {
              func_0x000107c3aa8c(puVar17);
code_r0x0001003a9840:
              func_0x000107330b24();
            }
          }
        }
        func_0x000107c3a9c8();
        break;
      }
      puVar17 = (undefined8 *)(ulong)(uVar1 - 1);
      iVar24 = 0;
      if (uVar11 != 1) {
        iVar24 = 0x2e;
      }
      uVar1 = uVar28 - uVar11 & ((int)(uVar28 - uVar11) >> 0x1f ^ 0xffffffffU);
      bVar10 = (uVar18 & 0x100000) != 0;
      if (bVar10) {
        iVar24 = 0x2e;
      }
      uVar11 = 0;
      if (bVar10) {
        uVar20 = uVar1 + uVar20;
        uVar11 = uVar1;
      }
      uVar25 = 0x65;
      if (((ulong)auVar7 & 0x1000000000000) != 0) {
        uVar25 = 0x45;
      }
      func_0x000107c3aa94(uVar20);
      uVar9 = iVar24 == 0;
      func_0x000107c3aa40();
      if (iVar29 != 0) {
        func_0x000107c3aa38();
      }
      func_0x000107c31774();
      if (uVar11 != 0) {
        func_0x000107c3aa8c();
        func_0x000107330b24(puVar16,uVar11);
      }
      *(undefined1 *)puVar16 = uVar25;
      func_0x000107330ac0(puVar17,(long)puVar16 + 1);
    }
    break;
  case 9:
    puVar17 = (undefined8 *)auStack_220;
    auStack_220 = (undefined1  [8])*pdVar19;
    func_0x000107330414(extraout_x8,puVar17);
    break;
  case 10:
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    puStack_258 = (undefined8 *)0x0;
    if ((int)uVar11 < 0) {
      puStack_258 = (undefined8 *)0x10000000000;
      dVar32 = -dVar32;
    }
    uVar9 = (~uVar11 & 0x7ff00000) == 0;
    if ((bool)uVar9) {
      uVar9 = ABS(dVar32) == INFINITY;
      func_0x0001073304d4(extraout_x8,uVar9,&UNK_10e60db10,&puStack_258);
    }
    else {
      func_0x000107c31748();
      auStack_220 = (undefined1  [8])puVar21;
      puStack_218 = puVar22;
      func_0x000107330548(extraout_x8,auStack_220,&UNK_10e60db10,puStack_258,0x2e);
    }
    break;
  case 0xb:
    func_0x000107c3aa80();
    if (dVar14 == 0.0) goto code_r0x0001003a98d0;
    dVar12 = dVar14;
    func_0x000107c613d0(dVar14);
    func_0x000107c31778(extraout_x8,dVar14,dVar12);
    break;
  case 0xc:
    func_0x000107c3aa80();
    func_0x000107c31778(extraout_x8);
    break;
  case 0xd:
    func_0x000107c3aa80();
    func_0x000107c3177c();
    uVar30 = ((ulong)puVar15 & 0xffffffff) + 2;
    func_0x000107c3aa40();
    puVar21 = (undefined8 *)(puVar15 + 1);
    *puVar15 = 0x7830;
    func_0x0001003ac67c(uStack_8);
    if ((bool)uVar9) {
      func_0x000107c3aa48();
      func_0x000107c3aa4c();
      puVar22 = (undefined1 *)((long)puVar21 + (long)iVar29);
      do {
        puVar22 = puVar22 + -1;
        *puVar22 = (&UNK_10e60dabc)[uVar30 & 0xf];
        bVar10 = 0xf < uVar30;
        uVar30 = uVar30 >> 4;
      } while (bVar10);
      return puVar21;
    }
    goto code_r0x0001003a98c8;
  case 0xe:
    func_0x0001003a9974(*pdVar19);
    puStack_258 = (undefined8 *)auStack_220;
    puStack_218 = auStack_200;
    uStack_208 = 500;
    uStack_210 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_250 = 0;
    uStack_240 = 0;
    auStack_220 = (undefined1  [8])extraout_x8_02;
    (*pcVar8)();
    func_0x0001003ac6b8();
    goto code_r0x0001003a9298;
  }
code_r0x0001003a92a0:
  func_0x0001003ac67c(uStack_8);
  puVar21 = puVar17;
  if ((bool)uVar9) {
    return puVar17;
  }
code_r0x0001003a98c8:
  func_0x000107c60e78();
code_r0x0001003a98cc:
  func_0x000107c3aa14();
code_r0x0001003a98d0:
  func_0x000107c3a9ec();
  func_0x000106e53aac();
  func_0x000107c60e54(puVar21,&PTR_DAT_110d9ebd0,&DAT_10bd486fc);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1003a9900);
  (*pcVar8)();
}



/* Entry: 107781de4; end: 10778223f;  */

void FUN_107781de4(undefined4 *param_1,long param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  long lVar5;
  long unaff_x21;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long *aplStack_2e0 [2];
  char cStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 auStack_288 [56];
  undefined **appuStack_250 [8];
  undefined1 auStack_210 [56];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_160 [16];
  char cStack_150;
  undefined4 auStack_e8 [2];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_a8 [56];
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  func_0x000107783740();
  puStack_2a8 = &UNK_10e52b660;
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_290 = 0;
  uStack_38 = extraout_x8;
  func_0x000107781c60(&puStack_1d8);
  func_0x0001077837d4("id");
  func_0x000104c318bc();
  func_0x000107783858(auStack_e8);
  func_0x000107783884();
  func_0x000104c2f714(&puStack_1d8);
  puVar3 = *(undefined8 **)(param_2 + 8);
  func_0x00010778384c();
  uStack_1d0 = *puVar3;
  puStack_1d8 = &DAT_10f6389e8;
  func_0x000107783830();
  func_0x0001077822dc();
  func_0x000107781c6c(auStack_70,param_2);
  uVar4 = 0;
  func_0x000104c2d614();
  if ((uVar4 & 1) == 0) {
    func_0x0001077837d4("source");
    func_0x000104c318bc();
    func_0x000107783858(&puStack_1d8);
    func_0x000107783884();
  }
  func_0x000107781c78(auStack_a8,param_2);
  uVar4 = 0;
  func_0x000104c2d614();
  if ((uVar4 & 1) == 0) {
    func_0x0001077837d4(&UNK_10f41700e);
    func_0x000104c318bc();
    func_0x000107783858(&puStack_1d8);
    func_0x000107783884();
  }
  lVar5 = *(long *)(param_2 + 8);
  if ((*(byte *)(lVar5 + 0xe0) & 1) == 0) {
    if (*(char *)(lVar5 + 0x128) == '\0') goto LAB_107781f58;
LAB_107781f08:
    func_0x000107268350(&puStack_1d8,lVar5 + 0xe8);
  }
  else {
    if (*(char *)(lVar5 + 0x128) != '\0') goto LAB_107781f08;
    (**(code **)(**(long **)(lVar5 + 0xd0) + 0x28))(&puStack_1d8);
  }
  func_0x0001077837d4(&DAT_10f33c7a6);
  func_0x000104c32a18();
  appuStack_250[0] = &puStack_2a8;
  func_0x00010774e1b8(auStack_e8,appuStack_250,auStack_160,unaff_x21 + 8);
  func_0x000104c3323c(unaff_x21 + 8);
  func_0x000104c3323c(&puStack_1d8);
  lVar5 = *(long *)(param_2 + 8);
LAB_107781f58:
  if (*(float *)(lVar5 + 0x130) != -INFINITY) {
    puStack_1d8 = &UNK_10f40a408;
    uStack_1d0 = CONCAT44(uStack_1d0._4_4_,*(float *)(lVar5 + 0x130));
    func_0x000107783830();
    func_0x000107782348();
    lVar5 = *(long *)(param_2 + 8);
  }
  if (*(float *)(lVar5 + 0x134) != INFINITY) {
    puStack_1d8 = &UNK_10f40a400;
    uStack_1d0 = CONCAT44(uStack_1d0._4_4_,*(float *)(lVar5 + 0x134));
    func_0x000107783830();
    func_0x000107782348();
    lVar5 = *(long *)(param_2 + 8);
  }
  func_0x000107783988(lVar5,auStack_160);
  func_0x000107284db4(auStack_160);
  uVar2 = 0;
  if (cStack_150 == '\x01') {
    func_0x000100060964(auStack_210,&DAT_10f2ff52c);
    func_0x000107783988(*(undefined8 *)(param_2 + 8),aplStack_2e0);
    uVar2 = cStack_2d0 == '\x01';
    if ((bool)uVar2) {
      (**(code **)(*aplStack_2e0[0] + 0x28))(appuStack_250);
    }
    else {
      appuStack_250[0] = (undefined **)CONCAT44(appuStack_250[0]._4_4_,7);
    }
    func_0x000107386324(&puStack_1d8,auStack_210,appuStack_250);
    func_0x00010778331c(auStack_160,&puStack_1d8);
    func_0x000107268084(&uStack_2c0,auStack_160,1);
    auStack_e8[0] = 1;
    uStack_d8 = uStack_2b8;
    uStack_e0 = uStack_2c0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    func_0x000100060964(auStack_288,&UNK_10f4273ef);
    func_0x000107267f10(&puStack_2a8,auStack_288);
    func_0x000104c3302c();
    func_0x000104c2f714(auStack_288);
    func_0x000104c3323c(auStack_e8);
    func_0x000104c335c0(&uStack_2c0);
    func_0x0001072684c8(auStack_160);
    func_0x000104c32ad0(&puStack_1d8);
    func_0x000104c3323c(appuStack_250);
    func_0x000107284db4(aplStack_2e0);
    func_0x000104c2f714(auStack_210);
  }
  cVar1 = *(char *)(*(long *)(param_2 + 8) + 0x138);
  if (cVar1 != '\0') {
    uVar2 = cVar1 == '\x01';
    lVar5 = 0x18;
    if (!(bool)uVar2) {
      lVar5 = 0x28;
    }
    uStack_1d0 = *(undefined8 *)(&UNK_1109deac8 + lVar5);
    puStack_1d8 = &DAT_10f2ef6d6;
    func_0x000107783830();
    func_0x0001077822dc();
  }
  func_0x000104c33260(&uStack_2f0,&puStack_2a8);
  *param_1 = 1;
  *(undefined8 *)(param_1 + 4) = uStack_2e8;
  *(undefined8 *)(param_1 + 2) = uStack_2f0;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  func_0x0001077838fc();
  func_0x000104c2f714(auStack_a8);
  func_0x000104c2f714(auStack_70);
  func_0x000104c33548(&puStack_2a8);
  func_0x00010778372c(uStack_38);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107284db4(aplStack_2e0);
  func_0x000104c2f714(auStack_210);
  func_0x000104c2f714(auStack_a8);
  do {
    func_0x000104c2f714(auStack_70);
    func_0x000104c33548(&puStack_2a8);
    func_0x0001077837a0();
  } while( true );
}



/* Entry: 107782f2c; end: 107782fdb;  */

void FUN_107782f2c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [24];
  char cStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010753e004(auStack_58,param_2,&uStack_38);
  if (cStack_40 != '\x01') {
    param_1[1] = uStack_30;
    *param_1 = uStack_38;
    param_1[2] = uStack_28;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_38 = 0;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,auStack_58);
  }
  *(uint *)(param_1 + 3) = (uint)(cStack_40 != '\x01');
  func_0x0001001148fc(auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  return;
}



/* Entry: 1077832b8; end: 1077832df;  */

long FUN_1077832b8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107783430; end: 10778344f;  */

undefined1 * FUN_107783430(undefined1 *param_1)

{
  if (*(int *)(param_1 + 0x28) == 1) {
    return param_1 + 8;
  }
  func_0x00010563ab98();
  *param_1 = 0;
  param_1[0x18] = 0;
  func_0x00010778348c();
  return param_1;
}



/* Entry: 107783560; end: 107783583;  */

void FUN_107783560(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000107783584(&uStack_18);
  return;
}



/* Entry: 107783718; end: 1077839b7;  */

void FUN_107783718(void)

{
  long unaff_x19;
  
  *(undefined1 *)(unaff_x19 + 8) = 0;
  *(undefined1 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x28) = 1;
  return;
}



/* Entry: 107783cb8; end: 107783cf3;  */

void FUN_107783cb8(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107785478(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107786560();
  return;
}



/* Entry: 107784150; end: 10778424f;  */

void FUN_107784150(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_11;
  
  switch(param_3) {
  case 0:
    FUN_107784c0c(param_2 + 0x1d8,&uStack_11);
    break;
  case 1:
    func_0x000107784cb8(param_2 + 0x248,&uStack_11);
    break;
  case 2:
    func_0x000107784e48(param_2 + 0x2b0,&uStack_11);
    break;
  case 3:
    func_0x000107784f0c(param_2 + 0x310,&uStack_11);
    break;
  case 4:
    uStack_38 = *(undefined8 *)(param_2 + 0x228);
    uStack_40 = *(undefined8 *)(param_2 + 0x220);
    uStack_28 = *(undefined8 *)(param_2 + 0x238);
    uStack_30 = *(undefined8 *)(param_2 + 0x230);
    uStack_20 = *(undefined8 *)(param_2 + 0x240);
    goto code_r0x000107784210;
  case 5:
    puVar1 = (undefined8 *)(param_2 + 0x288);
    uStack_20 = *(undefined8 *)(param_2 + 0x2a8);
    goto code_r0x000107784204;
  case 6:
    puVar1 = (undefined8 *)(param_2 + 0x2e8);
    uStack_20 = *(undefined8 *)(param_2 + 0x308);
code_r0x000107784204:
    uStack_38 = puVar1[1];
    uStack_40 = *puVar1;
    uStack_28 = puVar1[3];
    uStack_30 = puVar1[2];
code_r0x000107784210:
    func_0x000107784b98(&uStack_40);
    return;
  case 7:
    uStack_38 = *(undefined8 *)(param_2 + 0x3b8);
    uStack_40 = *(undefined8 *)(param_2 + 0x3b0);
    uStack_28 = *(undefined8 *)(param_2 + 0x3c8);
    uStack_30 = *(undefined8 *)(param_2 + 0x3c0);
    uStack_20 = *(undefined8 *)(param_2 + 0x3d0);
    goto code_r0x000107784210;
  case 8:
    param_2 = param_2 + 0x168;
    goto code_r0x000107784244;
  case 9:
    param_2 = param_2 + 0x1a0;
code_r0x000107784244:
    func_0x000107785298(param_2,&uStack_11);
    break;
  default:
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined4 *)param_1 = 7;
    return;
  }
  return;
}



/* Entry: 107784c0c; end: 107784c3b;  */

/* WARNING: Possible PIC construction at 0x000107784d04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107784d08) */
/* WARNING: Removing unreachable block (ram,0x000107784d24) */
/* WARNING: Removing unreachable block (ram,0x000107784d1c) */

void FUN_107784c0c(float *param_1,float *param_2,float *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *extraout_x8;
  float *extraout_x8_00;
  undefined8 extraout_x8_01;
  float *extraout_x8_02;
  float *extraout_x8_03;
  undefined8 extraout_x8_04;
  float *extraout_x8_05;
  float *extraout_x8_06;
  float *extraout_x8_07;
  undefined4 *extraout_x8_08;
  undefined8 unaff_x19;
  float *unaff_x20;
  undefined8 unaff_x21;
  long lVar8;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar9;
  undefined *unaff_x30;
  undefined *puVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [72];
  
  if (param_2[0x10] != 0.0) {
    uVar4 = param_2[0x10] == 1.4013e-45;
    pfVar5 = param_1;
    if ((bool)uVar4) {
      unaff_x29 = &stack0xfffffffffffffff0;
      pfVar5 = param_2;
      func_0x000107786380();
      func_0x00010785e288(auStack_68);
      func_0x000107786470();
      func_0x00010778643c();
      func_0x000107786334();
      if ((bool)uVar4) {
        return;
      }
      ___stack_chk_fail();
      unaff_x30 = &LAB_107784c7c;
      __Unwind_Resume();
      register0x00000008 = (BADSPACEBASE *)auStack_70;
      param_3 = param_2;
      param_2 = pfVar5;
      pfVar5 = extraout_x8;
    }
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x70);
    *(float **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    puVar9 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x000107786360();
    func_0x00010778657c();
    func_0x000107786470();
    func_0x00010778643c();
    func_0x000107786334();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    puVar10 = &UNK_107784cb8;
    __Unwind_Resume();
    param_1 = extraout_x8_00;
    if (param_3[0xe] != 0.0) {
      uVar4 = 0;
      pfVar6 = param_3;
      pfVar7 = extraout_x8_00;
      if (param_3[0xe] == 1.4013e-45) {
        *(float **)((long)register0x00000008 + -0x90) = unaff_x20;
        *(float **)((long)register0x00000008 + -0x88) = pfVar5;
        *(undefined1 **)((long)register0x00000008 + -0x80) = puVar9;
        *(undefined **)((long)register0x00000008 + -0x78) = &UNK_107784cb8;
        func_0x000107786380();
        puVar1 = (undefined1 *)((long)register0x00000008 + -0x180);
        *(undefined8 *)((long)register0x00000008 + -0x110) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x108) = unaff_x21;
        *(float **)((long)register0x00000008 + -0x100) = unaff_x20;
        *(float **)((long)register0x00000008 + -0xf8) = pfVar5;
        *(undefined1 **)((long)register0x00000008 + -0xf0) =
             (undefined1 *)((long)register0x00000008 + -0x80);
        *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_107784d08;
        puVar9 = (undefined1 *)((long)register0x00000008 + -0xf0);
        func_0x000107786398((undefined1 *)((long)register0x00000008 + -0xd8));
        *(undefined8 *)((long)register0x00000008 + -0x118) = extraout_x8_01;
        *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
        func_0x0001072ac134((undefined1 *)((long)register0x00000008 + -0x170),2);
        for (lVar8 = 0; uVar4 = lVar8 == 8, !(bool)uVar4; lVar8 = lVar8 + 4) {
          fVar11 = *(float *)((long)param_3 + lVar8);
          *(undefined4 *)((long)register0x00000008 + -0x158) = 3;
          *(double *)((long)register0x00000008 + -0x150) = (double)fVar11;
          func_0x0001072aad1c((undefined1 *)((long)register0x00000008 + -0x170),
                              (undefined1 *)((long)register0x00000008 + -0x158));
          func_0x000104c3323c((undefined1 *)((long)register0x00000008 + -0x158));
        }
        pfVar6 = (float *)((long)register0x00000008 + -0x170);
        func_0x000107327958((undefined1 *)((long)register0x00000008 + -0x180));
        *pfVar5 = 0.0;
        uVar12 = *(undefined8 *)((long)register0x00000008 + -0x180);
        *(undefined8 *)(pfVar5 + 4) = *(undefined8 *)((long)register0x00000008 + -0x178);
        *(undefined8 *)(pfVar5 + 2) = uVar12;
        *(undefined8 *)((long)register0x00000008 + -0x180) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x178) = 0;
        func_0x000104c33108((undefined1 *)((long)register0x00000008 + -0x180));
        pfVar5 = (float *)((long)register0x00000008 + -0x170);
        func_0x000107269124();
        func_0x00010778634c(*(undefined8 *)((long)register0x00000008 + -0x118));
        if ((bool)uVar4) {
          return;
        }
        ___stack_chk_fail();
        param_2 = (float *)((long)register0x00000008 + -0x170);
        func_0x000107269124();
        puVar10 = &UNK_107784e0c;
        func_0x000107786550();
        pfVar7 = extraout_x8_02;
        unaff_x20 = param_3;
      }
      puVar2 = puVar1 + -0x70;
      *(float **)(puVar1 + -0x20) = unaff_x20;
      *(float **)(puVar1 + -0x18) = pfVar5;
      *(undefined1 **)(puVar1 + -0x10) = puVar9;
      *(undefined **)(puVar1 + -8) = puVar10;
      puVar9 = puVar1 + -0x10;
      func_0x000107786360();
      func_0x00010778657c();
      func_0x000107786470();
      func_0x00010778643c();
      func_0x000107786334();
      if ((bool)uVar4) {
        return;
      }
      ___stack_chk_fail();
      puVar10 = &UNK_107784e48;
      __Unwind_Resume();
      param_1 = extraout_x8_03;
      if (param_2[0xc] != 0.0) {
        uVar4 = param_2[0xc] == 1.4013e-45;
        pfVar5 = extraout_x8_03;
        if ((bool)uVar4) {
          puVar2 = puVar1 + -0xd0;
          *(undefined1 **)(puVar1 + -0x80) = puVar9;
          *(undefined **)(puVar1 + -0x78) = &UNK_107784e48;
          puVar9 = puVar1 + -0x80;
          pfVar6 = extraout_x8_03;
          func_0x000107786418();
          *(undefined8 *)(puVar1 + -0x88) = extraout_x8_04;
          fVar11 = *param_2;
          *(undefined4 *)(puVar1 + -200) = 3;
          *(double *)(puVar1 + -0xc0) = (double)fVar11;
          param_2 = (float *)(puVar1 + -200);
          func_0x000104c32a18();
          *(undefined1 *)(pfVar6 + 0x10) = 1;
          func_0x000107786500();
          func_0x00010778634c(*(undefined8 *)(puVar1 + -0x88));
          if ((bool)uVar4) {
            return;
          }
          puVar10 = &UNK_107784ed0;
          ___stack_chk_fail();
          pfVar5 = extraout_x8_05;
        }
        puVar3 = puVar2 + -0x70;
        *(float **)(puVar2 + -0x20) = unaff_x20;
        *(float **)(puVar2 + -0x18) = pfVar7;
        *(undefined1 **)(puVar2 + -0x10) = puVar9;
        *(undefined **)(puVar2 + -8) = puVar10;
        puVar9 = puVar2 + -0x10;
        func_0x000107786360();
        func_0x00010778657c();
        func_0x000107786470();
        func_0x00010778643c();
        func_0x000107786334();
        if (!(bool)uVar4) {
          ___stack_chk_fail();
          puVar10 = &UNK_107784f0c;
          __Unwind_Resume();
          param_1 = extraout_x8_06;
          if (pfVar6[0x26] == 0.0) goto LAB_1077863ac;
          pfVar7 = pfVar6 + 2;
          uVar4 = pfVar6[0x26] == 1.4013e-45;
          pfVar6 = extraout_x8_06;
          if ((bool)uVar4) {
            puVar3 = puVar2 + -0xe0;
            *(float **)(puVar2 + -0x90) = unaff_x20;
            *(float **)(puVar2 + -0x88) = pfVar5;
            *(undefined1 **)(puVar2 + -0x80) = puVar9;
            *(undefined **)(puVar2 + -0x78) = &UNK_107784f0c;
            puVar9 = puVar2 + -0x80;
            func_0x000107786380();
            func_0x00010775f12c(puVar2 + -0xd8);
            func_0x000107786470();
            func_0x00010778647c(1);
            func_0x000107786334();
            if ((bool)uVar4) {
              return;
            }
            ___stack_chk_fail();
            puVar10 = &UNK_107784f80;
            __Unwind_Resume();
            param_2 = pfVar7;
            pfVar6 = extraout_x8_07;
          }
          *(float **)(puVar3 + -0x20) = unaff_x20;
          *(float **)(puVar3 + -0x18) = pfVar5;
          *(undefined1 **)(puVar3 + -0x10) = puVar9;
          *(undefined **)(puVar3 + -8) = puVar10;
          func_0x000107786360();
          func_0x00010778657c();
          func_0x000107786470();
          func_0x00010778643c();
          func_0x000107786334();
          if (!(bool)uVar4) {
            ___stack_chk_fail();
            __Unwind_Resume();
            *(float **)(puVar3 + -0x90) = unaff_x20;
            *(float **)(puVar3 + -0x88) = pfVar6;
            *(undefined1 **)(puVar3 + -0x80) = puVar3 + -0x10;
            *(undefined **)(puVar3 + -0x78) = &UNK_107784fbc;
            func_0x000107269c1c(puVar3 + -0xa0);
            if (*(char *)(param_2 + 2) == '\x01') {
              func_0x0001077867e0(*(undefined8 *)param_2);
              func_0x000107785078(puVar3 + -0xc0);
            }
            if (*(char *)(param_2 + 6) == '\x01') {
              func_0x0001077867e0(*(undefined8 *)(param_2 + 4));
              func_0x0001077850a0(puVar3 + -0xc0,puVar3 + -0xa0,"delay",puVar3 + -0xa8);
            }
            uVar13 = *(undefined8 *)(puVar3 + -0x98);
            uVar12 = *(undefined8 *)(puVar3 + -0xa0);
            *(undefined8 *)(puVar3 + -0xa0) = 0;
            *(undefined8 *)(puVar3 + -0x98) = 0;
            *extraout_x8_08 = 1;
            *(undefined8 *)(extraout_x8_08 + 4) = uVar13;
            *(undefined8 *)(extraout_x8_08 + 2) = uVar12;
            *(undefined8 *)(puVar3 + -0xd0) = 0;
            *(undefined8 *)(puVar3 + -200) = 0;
            func_0x000104c335c0(puVar3 + -0xd0);
            func_0x000104c335c0(puVar3 + -0xa0);
            return;
          }
        }
        return;
      }
    }
  }
LAB_1077863ac:
  param_1[0x10] = 0.0;
  param_1[0x11] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  *param_1 = 9.80909e-45;
  return;
}



/* Entry: 107784e78; end: 107784ecf;  */

void FUN_107784e78(long param_1,undefined8 param_2,float *param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *puVar5;
  undefined4 *extraout_x8_03;
  undefined8 unaff_x20;
  undefined8 ******ppppppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [72];
  undefined8 *****pppppuStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [80];
  undefined8 ****ppppuStack_70;
  undefined *puStack_68;
  undefined4 auStack_58 [2];
  double dStack_50;
  undefined8 uStack_18;
  
  func_0x000107786418();
  dStack_50 = (double)*param_3;
  auStack_58[0] = 3;
  puVar4 = (undefined8 *)auStack_58;
  uStack_18 = extraout_x8;
  func_0x000104c32a18();
  *(undefined1 *)(param_1 + 0x40) = 1;
  func_0x000107786500();
  func_0x00010778634c(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = auStack_d0;
  puStack_68 = &UNK_107784ed0;
  ppppppuVar6 = (undefined8 ******)&ppppuStack_70;
  ppppuStack_70 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x000107786360();
  func_0x00010778657c();
  func_0x000107786470();
  func_0x00010778643c();
  func_0x000107786334();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar7 = &UNK_107784f0c;
    __Unwind_Resume();
    if (*(int *)(param_1 + 0x98) == 0) {
      extraout_x8_01[8] = 0;
      extraout_x8_01[5] = 0;
      extraout_x8_01[4] = 0;
      extraout_x8_01[7] = 0;
      extraout_x8_01[6] = 0;
      extraout_x8_01[1] = 0;
      *extraout_x8_01 = 0;
      extraout_x8_01[3] = 0;
      extraout_x8_01[2] = 0;
      *(undefined4 *)extraout_x8_01 = 7;
      return;
    }
    puVar3 = (undefined8 *)(param_1 + 8);
    uVar2 = *(int *)(param_1 + 0x98) == 1;
    puVar5 = extraout_x8_01;
    if ((bool)uVar2) {
      puVar1 = auStack_140;
      puStack_d8 = &UNK_107784f0c;
      pppppuStack_e0 = ppppppuVar6;
      func_0x000107786380();
      func_0x00010775f12c(auStack_138);
      func_0x000107786470();
      func_0x00010778647c(1);
      func_0x000107786334();
      if ((bool)uVar2) {
        return;
      }
      ___stack_chk_fail();
      puVar7 = &UNK_107784f80;
      __Unwind_Resume();
      puVar4 = puVar3;
      puVar5 = extraout_x8_02;
      ppppppuVar6 = &pppppuStack_e0;
    }
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = extraout_x8_00;
    *(undefined8 *******)(puVar1 + -0x10) = ppppppuVar6;
    *(undefined **)(puVar1 + -8) = puVar7;
    func_0x000107786360();
    func_0x00010778657c();
    func_0x000107786470();
    func_0x00010778643c();
    func_0x000107786334();
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      __Unwind_Resume();
      *(undefined8 *)(puVar1 + -0x90) = unaff_x20;
      *(undefined8 **)(puVar1 + -0x88) = puVar5;
      *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x10;
      *(undefined **)(puVar1 + -0x78) = &UNK_107784fbc;
      func_0x000107269c1c(puVar1 + -0xa0);
      if (*(char *)(puVar4 + 1) == '\x01') {
        func_0x0001077867e0(*puVar4);
        func_0x000107785078(puVar1 + -0xc0);
      }
      if (*(char *)(puVar4 + 3) == '\x01') {
        func_0x0001077867e0(puVar4[2]);
        func_0x0001077850a0(puVar1 + -0xc0,puVar1 + -0xa0,"delay",puVar1 + -0xa8);
      }
      uVar9 = *(undefined8 *)(puVar1 + -0x98);
      uVar8 = *(undefined8 *)(puVar1 + -0xa0);
      *(undefined8 *)(puVar1 + -0xa0) = 0;
      *(undefined8 *)(puVar1 + -0x98) = 0;
      *extraout_x8_03 = 1;
      *(undefined8 *)(extraout_x8_03 + 4) = uVar9;
      *(undefined8 *)(extraout_x8_03 + 2) = uVar8;
      *(undefined8 *)(puVar1 + -0xd0) = 0;
      *(undefined8 *)(puVar1 + -200) = 0;
      func_0x000104c335c0(puVar1 + -0xd0);
      func_0x000104c335c0(puVar1 + -0xa0);
      return;
    }
  }
  return;
}



/* Entry: 1077850e8; end: 1077850eb;  */

void FUN_1077850e8(void)

{
  func_0x00010778664c();
  func_0x000107785108();
  return;
}



/* Entry: 1077851d4; end: 1077851ef;  */

void FUN_1077851d4(void)

{
  func_0x00010778664c();
  func_0x0001077851f0();
  return;
}



/* Entry: 107785358; end: 1077853d7;  */

long FUN_107785358(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = (param_2 - param_1) / 0x18;
  while (lVar2 = param_1, uVar1 != 0) {
    uVar5 = uVar1 >> 1;
    lVar4 = lVar2 + uVar5 * 0x18;
    lVar3 = lVar4;
    func_0x0001077853d8(lVar4,param_3);
    uVar1 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
    param_1 = lVar4 + 0x18;
    if ((int)lVar3 == 0) {
      uVar1 = uVar5;
      param_1 = lVar2;
    }
  }
  return lVar2;
}



/* Entry: 1077855ac; end: 1077855af;  */

void FUN_1077855ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d7158;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10778583c; end: 107785853;  */

void FUN_10778583c(void)

{
  func_0x000107785854();
  return;
}



/* Entry: 107785a04; end: 107785a2b;  */

void FUN_107785a04(undefined8 param_1,undefined8 param_2)

{
  func_0x000107786544();
  func_0x0001073dd630(param_2);
  func_0x0001077866f4();
  func_0x000107786790();
  func_0x000107786770();
  return;
}



/* Entry: 107785c48; end: 107785c5b;  */

undefined8 FUN_107785c48(void)

{
  return 1;
}



/* Entry: 107785d58; end: 107785d87;  */

void FUN_107785d58(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x000107786544();
  func_0x000107432d98();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  *(undefined4 *)(unaff_x20 + 8) = 1;
  return;
}



/* Entry: 107785ebc; end: 107785ecf;  */

void FUN_107785ebc(long *param_1)

{
  if (*(int *)(*param_1 + 0x38) != 0) {
    func_0x000107786568();
    func_0x000107785ef8();
  }
  return;
}



/* Entry: 107785f9c; end: 107785fcf;  */

void FUN_107785f9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x38) == 2) {
    func_0x000107786544(param_2,param_3);
    func_0x0001072f6188();
    uVar1 = *(undefined1 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined1 *)(unaff_x20 + 0x30) = uVar1;
    return;
  }
  func_0x000107786568();
  func_0x000107786000();
  return;
}



/* Entry: 107786114; end: 107786167;  */

void FUN_107786114(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x90) != -1 || *(int *)(param_2 + 0x90) != -1) {
    if (*(int *)(param_2 + 0x90) == -1) {
      if (*(uint *)(param_1 + 0x90) != 0xffffffff) {
        func_0x0001072ce6fc((&PTR_DAT_11099ae10)[*(uint *)(param_1 + 0x90)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
      return;
    }
    func_0x00010778658c();
  }
  return;
}



/* Entry: 107786270; end: 1077862a3;  */

void FUN_107786270(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x90) == 2) {
    func_0x000107786544(param_2,param_3);
    func_0x0001072f6188();
    func_0x000107295ba8(unaff_x20 + 0x28,unaff_x19 + 0x28);
    return;
  }
  func_0x000107786568();
  func_0x0001077862d0();
  return;
}



/* Entry: 107786938; end: 10778695f;  */

undefined8 * FUN_107786938(undefined8 *param_1)

{
  func_0x0001073bc804(param_1 + 9);
  *param_1 = &PTR_DAT_1109ab0d0;
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 107786a64; end: 107786adf;  */

undefined8 * FUN_107786a64(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x000107786ae0(auStack_40,param_2,param_3);
  func_0x000107786ea0(auStack_30,auStack_40);
  func_0x000107781b94(param_1,auStack_30);
  func_0x0001073ad4c4(auStack_30);
  func_0x000107786ed8();
  *param_1 = &PTR_DAT_1109d7360;
  return param_1;
}



/* Entry: 107786ccc; end: 107786d5f;  */

/* WARNING: Possible PIC construction at 0x000107786cf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107786cfc) */
/* WARNING: Removing unreachable block (ram,0x000107786d44) */
/* WARNING: Removing unreachable block (ram,0x000107786d5c) */
/* WARNING: Removing unreachable block (ram,0x000107786d30) */

undefined1 * FUN_107786ccc(void)

{
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  func_0x000107786f08();
  uStack_48 = 1;
  func_0x000107786d88();
  return auStack_50;
}



/* Entry: 107786e80; end: 107786e9f;  */

void FUN_107786e80(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d7408;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107787034; end: 107787067;  */

long FUN_107787034(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = &PTR_DAT_1109d74d0;
  func_0x0001073ad824(param_1 + 0x2d);
  func_0x0001077866dc(param_1);
  *unaff_x20 = extraout_x8;
  func_0x000107284db4(param_1 + 0x28);
  func_0x000107284d8c(unaff_x19 + 0xd0);
  func_0x000107283194(unaff_x19 + 0xc0);
  func_0x0001072c9b9c(unaff_x19 + 0xb0);
  func_0x000104c2f714(unaff_x19 + 0x78);
  func_0x000104c2f714(unaff_x19 + 0x40);
  func_0x000104c2f714(unaff_x20 + 1);
  return unaff_x19;
}



/* Entry: 1077871a4; end: 1077871df;  */

void FUN_1077871a4(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010778b514(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010778c86c();
  return;
}



/* Entry: 107787f74; end: 107788823;  */

/* WARNING: Possible PIC construction at 0x0001077893b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077893b4) */
/* WARNING: Removing unreachable block (ram,0x0001077893fc) */
/* WARNING: Removing unreachable block (ram,0x000107789404) */
/* WARNING: Removing unreachable block (ram,0x000107789418) */
/* WARNING: Removing unreachable block (ram,0x0001077893bc) */
/* WARNING: Removing unreachable block (ram,0x0001077893d0) */
/* WARNING: Removing unreachable block (ram,0x0001077893d8) */
/* WARNING: Removing unreachable block (ram,0x000107789c38) */
/* WARNING: Removing unreachable block (ram,0x0001077893e0) */
/* WARNING: Removing unreachable block (ram,0x000107789c40) */
/* WARNING: Removing unreachable block (ram,0x000107789c48) */
/* WARNING: Removing unreachable block (ram,0x000107789c4c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_107787f74(ulong param_1,ulong param_2,ulong *param_3,ulong *param_4,ulong param_5,
                  undefined1 *param_6,undefined **param_7)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  undefined **ppuVar12;
  undefined1 uVar13;
  undefined1 extraout_w8;
  long lVar14;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  long extraout_x8_26;
  long extraout_x8_27;
  long extraout_x8_28;
  long extraout_x8_29;
  long extraout_x8_30;
  long extraout_x8_31;
  long extraout_x8_32;
  long extraout_x8_33;
  long extraout_x8_34;
  long extraout_x8_35;
  long extraout_x8_36;
  long extraout_x8_37;
  long extraout_x8_38;
  long extraout_x8_39;
  long extraout_x8_40;
  long extraout_x8_41;
  long extraout_x8_42;
  long extraout_x8_43;
  long extraout_x8_44;
  long extraout_x8_45;
  long extraout_x8_46;
  long extraout_x8_47;
  long extraout_x8_48;
  long extraout_x8_49;
  long extraout_x8_50;
  long extraout_x8_51;
  long extraout_x8_52;
  long extraout_x8_53;
  long extraout_x8_54;
  long extraout_x8_55;
  long extraout_x8_56;
  long extraout_x8_57;
  long extraout_x8_58;
  long extraout_x8_59;
  long extraout_x8_60;
  long extraout_x8_61;
  long extraout_x8_62;
  long extraout_x8_63;
  long extraout_x8_64;
  ulong *extraout_x8_65;
  long extraout_x8_66;
  long extraout_x8_67;
  long extraout_x8_68;
  long extraout_x8_69;
  long extraout_x8_70;
  long extraout_x8_71;
  ulong uVar15;
  ulong *extraout_x8_72;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  ulong *extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  long extraout_x9_10;
  ulong *extraout_x9_11;
  long extraout_x9_12;
  uint uVar16;
  uint uVar17;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar18;
  ulong in_register_00005008;
  ulong in_register_00005028;
  undefined1 uStack_201;
  undefined1 **ppuStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong *puStack_1c0;
  ulong uStack_1b8;
  undefined *puStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined *apuStack_188 [4];
  undefined1 uStack_168;
  byte bStack_160;
  byte bStack_150;
  byte bStack_148;
  byte bStack_140;
  byte bStack_130;
  byte bStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong auStack_98 [3];
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  puVar4 = param_3;
  func_0x00010778c688();
  uVar3 = (int)param_5 == 0x59;
  switch(param_5 & 0xffffffff) {
  case 0:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0xa9;
      goto code_r0x00010778849c;
    }
    break;
  case 1:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0xb5;
code_r0x000107788520:
      FUN_107784c0c(param_3,param_4,&stack0xffffffffffffffef);
      return;
    }
    break;
  case 2:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0xc3;
      goto code_r0x0001077885a4;
    }
    break;
  case 3:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0xd0;
      goto code_r0x00010778849c;
    }
    break;
  case 4:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0xdc;
      goto code_r0x0001077885a4;
    }
    break;
  case 5:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0xe9;
      goto code_r0x0001077885a4;
    }
    break;
  case 6:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0xf6;
      goto code_r0x00010778849c;
    }
    break;
  case 7:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0x102;
      goto code_r0x00010778849c;
    }
    break;
  case 8:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0x10e;
      goto code_r0x00010778849c;
    }
    break;
  case 9:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0x11a;
      goto code_r0x00010778849c;
    }
    break;
  case 10:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0x126;
      goto code_r0x0001077885a4;
    }
    break;
  case 0xb:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0x133;
code_r0x00010778876c:
      func_0x000107785298(param_3,param_4,&stack0xffffffffffffffef);
      return;
    }
    break;
  case 0xc:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0x13f;
      goto code_r0x00010778849c;
    }
    break;
  case 0xd:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0x14b;
      goto code_r0x00010778849c;
    }
    break;
  case 0xe:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0x157;
      goto code_r0x00010778849c;
    }
    break;
  case 0xf:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0x163;
      goto code_r0x000107788520;
    }
    break;
  case 0x10:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0x171;
      goto code_r0x0001077885a4;
    }
    break;
  case 0x11:
    func_0x00010778c564();
    if ((bool)uVar3) {
      FUN_10778b120(param_3,param_4 + 0x17e,&stack0xffffffffffffffef);
      return;
    }
    break;
  case 0x12:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0x18a;
      goto code_r0x00010778876c;
    }
    break;
  case 0x13:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0x196;
      goto code_r0x000107788520;
    }
    break;
  case 0x14:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0x1a4;
      goto code_r0x00010778849c;
    }
    break;
  case 0x15:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0x1b0;
      goto code_r0x0001077885cc;
    }
    break;
  case 0x16:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0x1be;
      goto code_r0x0001077885cc;
    }
    break;
  case 0x17:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0x1cc;
      goto code_r0x0001077885cc;
    }
    break;
  case 0x18:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0x1da;
      goto code_r0x0001077885cc;
    }
    break;
  case 0x19:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0x1e8;
      goto code_r0x0001077885cc;
    }
    break;
  case 0x1a:
    if ((int)param_4[0x1fc] == 0) goto LAB_10778863c;
    uVar3 = (int)param_4[0x1fc] == 1;
    if ((bool)uVar3) {
      auStack_98[0] = 0;
      auStack_98[1] = 0;
      auStack_98[2] = 0;
      func_0x00010778ca0c(auStack_98);
      for (lVar14 = 0; uVar3 = lVar14 == 4, !(bool)uVar3; lVar14 = lVar14 + 1) {
        uStack_80 = CONCAT44(uStack_80._4_4_,6);
        uStack_78 = CONCAT71(uStack_78._1_7_,*(undefined1 *)((long)(param_4 + 0x1f6) + lVar14));
        func_0x0001072aad1c(auStack_98,&uStack_80);
        func_0x00010778ca14();
      }
      func_0x000107327958(&uStack_b0,auStack_98);
      uStack_80 = uStack_80 & 0xffffffff00000000;
      uStack_70 = uStack_a8;
      uStack_78 = uStack_b0;
      func_0x00010778c8d4();
      puVar4 = auStack_98;
      func_0x000107269124();
      param_4 = &uStack_80;
      func_0x00010778c840();
      uVar13 = 1;
      param_1 = uStack_b0;
      in_register_00005008 = uStack_a8;
    }
    else {
      puVar4 = (ulong *)param_4[0x1f6];
      (**(code **)(*puVar4 + 0x28))(&uStack_80);
      param_4 = &uStack_80;
      func_0x00010778c840();
      uVar13 = 2;
    }
    *(undefined1 *)(param_3 + 8) = uVar13;
    func_0x00010778ca14();
    goto LAB_1077887e0;
  case 0x1b:
    func_0x00010778c564();
    if ((bool)uVar3) {
      lVar14 = 0x1010;
code_r0x000107788498:
      param_4 = (ulong *)((long)param_4 + lVar14);
code_r0x00010778849c:
      func_0x000107784e48(param_3,param_4,&stack0xffffffffffffffef);
      return;
    }
    break;
  case 0x1c:
    func_0x00010778c564();
    if ((bool)uVar3) {
      lVar14 = 0x1070;
code_r0x0001077885c8:
      param_4 = (ulong *)((long)param_4 + lVar14);
code_r0x0001077885cc:
      func_0x00010778b208(param_3,param_4,&stack0xffffffffffffffef);
      return;
    }
    break;
  case 0x1d:
    func_0x00010778c564();
    if ((bool)uVar3) {
      lVar14 = 0x10e0;
code_r0x0001077885a0:
      param_4 = (ulong *)((long)param_4 + lVar14);
code_r0x0001077885a4:
      func_0x000107784cb8(param_3,param_4,&stack0xffffffffffffffef);
      return;
    }
    break;
  case 0x1e:
    func_0x00010778c564();
    if ((bool)uVar3) {
      lVar14 = 0x1148;
code_r0x000107788470:
      uVar3 = 1;
      puVar9 = (undefined8 *)((long)param_4 + lVar14);
      unaff_x29 = &stack0xfffffffffffffff0;
      func_0x00010778c688();
      if (*(int *)(puVar9 + 10) == 0) {
        func_0x00010778c7c4();
      }
      else {
        uVar3 = *(int *)(puVar9 + 10) == 1;
        if ((bool)uVar3) {
          auStack_98[1] = 0;
          auStack_98[2] = 0;
          uStack_80 = 0;
          func_0x00010778ca0c(auStack_98 + 1);
          lVar14 = 0x20;
          do {
            func_0x000107784d2c(&uStack_78,puVar9);
            func_0x00010778ca48();
            func_0x00010778c8e8();
            puVar9 = puVar9 + 1;
            lVar14 = lVar14 + -8;
          } while (lVar14 != 0);
          func_0x00010778ca28();
          uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
          uStack_68 = auStack_98[0];
          uStack_70 = uStack_a0;
          func_0x00010778c8d4();
          func_0x00010778c9a8();
          func_0x00010778c840();
          uVar13 = 1;
        }
        else {
          (**(code **)(*(long *)*puVar9 + 0x28))(&uStack_78);
          func_0x00010778c840();
          uVar13 = 2;
        }
        *(undefined1 *)(param_3 + 8) = uVar13;
        func_0x00010778c8e8();
      }
      func_0x00010778c564();
      if ((bool)uVar3) {
        return;
      }
      ___stack_chk_fail();
      unaff_x30 = &UNK_10778b104;
      func_0x00010778c858();
      register0x00000008 = (BADSPACEBASE *)&uStack_a0;
code_r0x00010778b104:
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
      FUN_10778b36c();
      return;
    }
    break;
  case 0x1f:
    func_0x00010778c564();
    if ((bool)uVar3) {
      lVar14 = 0x11c8;
      goto code_r0x000107788498;
    }
    break;
  case 0x20:
    func_0x00010778c564();
    if ((bool)uVar3) {
      lVar14 = 0x1228;
      goto code_r0x000107788498;
    }
    break;
  case 0x21:
    func_0x00010778c564();
    if ((bool)uVar3) {
      lVar14 = 0x1288;
      goto code_r0x0001077885c8;
    }
    break;
  case 0x22:
    func_0x00010778c564();
    if ((bool)uVar3) {
      lVar14 = 0x12f8;
      goto code_r0x000107788470;
    }
    break;
  case 0x23:
    func_0x00010778c564();
    if ((bool)uVar3) {
      lVar14 = 0x1378;
      goto code_r0x0001077885a0;
    }
    break;
  case 0x24:
    func_0x00010778c564();
    if ((bool)uVar3) {
      lVar14 = 0x13e0;
      goto code_r0x000107788470;
    }
    break;
  case 0x25:
    func_0x00010778c564();
    if ((bool)uVar3) {
      lVar14 = 0x1460;
      goto code_r0x000107788498;
    }
    break;
  case 0x26:
    func_0x00010778c564();
    if ((bool)uVar3) {
      lVar14 = 0x14c0;
      goto code_r0x0001077885c8;
    }
    break;
  case 0x27:
    in_register_00005008 = param_4[0xb1];
    param_1 = param_4[0xb0];
    in_register_00005028 = param_4[0xb3];
    param_2 = param_4[0xb2];
    uStack_60 = param_4[0xb4];
    uStack_80 = param_1;
    uStack_78 = in_register_00005008;
    uStack_70 = param_2;
    uStack_68 = in_register_00005028;
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x28:
    in_register_00005008 = param_4[0xbf];
    param_1 = param_4[0xbe];
    in_register_00005028 = param_4[0xc1];
    param_2 = param_4[0xc0];
    uStack_60 = param_4[0xc2];
    uStack_80 = param_1;
    uStack_78 = in_register_00005008;
    uStack_70 = param_2;
    uStack_68 = in_register_00005028;
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x29:
    func_0x00010778c664(param_4 + 0xcb);
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x2a:
    func_0x00010778c664(param_4 + 0xd7);
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x2b:
    in_register_00005008 = param_4[0xe5];
    param_1 = param_4[0xe4];
    in_register_00005028 = param_4[0xe7];
    param_2 = param_4[0xe6];
    uStack_60 = param_4[0xe8];
    uStack_80 = param_1;
    uStack_78 = in_register_00005008;
    uStack_70 = param_2;
    uStack_68 = in_register_00005028;
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x2c:
    func_0x00010778c664(param_4 + 0xf1);
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x2d:
    func_0x00010778c664(param_4 + 0xfd);
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x2e:
    func_0x00010778c664(param_4 + 0x109);
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x2f:
    func_0x00010778c664(param_4 + 0x115);
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x30:
    func_0x00010778c664(param_4 + 0x121);
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x31:
    in_register_00005008 = param_4[0x12f];
    param_1 = param_4[0x12e];
    in_register_00005028 = param_4[0x131];
    param_2 = param_4[0x130];
    uStack_60 = param_4[0x132];
    uStack_80 = param_1;
    uStack_78 = in_register_00005008;
    uStack_70 = param_2;
    uStack_68 = in_register_00005028;
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x32:
    in_register_00005008 = param_4[0x13b];
    param_1 = param_4[0x13a];
    in_register_00005028 = param_4[0x13d];
    param_2 = param_4[0x13c];
    uStack_60 = param_4[0x13e];
    uStack_80 = param_1;
    uStack_78 = in_register_00005008;
    uStack_70 = param_2;
    uStack_68 = in_register_00005028;
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x33:
    in_register_00005008 = param_4[0x147];
    param_1 = param_4[0x146];
    in_register_00005028 = param_4[0x149];
    param_2 = param_4[0x148];
    uStack_60 = param_4[0x14a];
    uStack_80 = param_1;
    uStack_78 = in_register_00005008;
    uStack_70 = param_2;
    uStack_68 = in_register_00005028;
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x34:
    in_register_00005008 = param_4[0x153];
    param_1 = param_4[0x152];
    in_register_00005028 = param_4[0x155];
    param_2 = param_4[0x154];
    uStack_60 = param_4[0x156];
    uStack_80 = param_1;
    uStack_78 = in_register_00005008;
    uStack_70 = param_2;
    uStack_68 = in_register_00005028;
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x35:
    in_register_00005008 = param_4[0x15f];
    param_1 = param_4[0x15e];
    in_register_00005028 = param_4[0x161];
    param_2 = param_4[0x160];
    uStack_60 = param_4[0x162];
    uStack_80 = param_1;
    uStack_78 = in_register_00005008;
    uStack_70 = param_2;
    uStack_68 = in_register_00005028;
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x36:
    in_register_00005008 = param_4[0x16d];
    param_1 = param_4[0x16c];
    in_register_00005028 = param_4[0x16f];
    param_2 = param_4[0x16e];
    uStack_60 = param_4[0x170];
    uStack_80 = param_1;
    uStack_78 = in_register_00005008;
    uStack_70 = param_2;
    uStack_68 = in_register_00005028;
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x37:
    func_0x00010778c664(param_4 + 0x179);
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x38:
    func_0x00010778c664(param_4 + 0x185);
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x39:
    func_0x00010778c664(param_4 + 0x191);
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x3a:
    func_0x00010778c664(param_4 + 0x19f);
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x3b:
    func_0x00010778c664(param_4 + 0x1ab);
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x3c:
    func_0x00010778c664(param_4 + 0x1b9);
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x3d:
    func_0x00010778c664(param_4 + 0x1c7);
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x3e:
    func_0x00010778c664(param_4 + 0x1d5);
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x3f:
    func_0x00010778c664(param_4 + 0x1e3);
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x40:
    func_0x00010778c664(param_4 + 0x1f1);
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x41:
    func_0x00010778c664(param_4 + 0x1fd);
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x42:
    func_0x00010778c664(param_4 + 0x209);
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x43:
    func_0x00010778c664(param_4 + 0x217);
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x44:
    in_register_00005008 = param_4[0x225];
    param_1 = param_4[0x224];
    in_register_00005028 = param_4[0x227];
    param_2 = param_4[0x226];
    uStack_60 = param_4[0x228];
    uStack_80 = param_1;
    uStack_78 = in_register_00005008;
    uStack_70 = param_2;
    uStack_68 = in_register_00005028;
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x45:
    in_register_00005008 = param_4[0x235];
    param_1 = param_4[0x234];
    in_register_00005028 = param_4[0x237];
    param_2 = param_4[0x236];
    uStack_60 = param_4[0x238];
    uStack_80 = param_1;
    uStack_78 = in_register_00005008;
    uStack_70 = param_2;
    uStack_68 = in_register_00005028;
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x46:
    in_register_00005008 = param_4[0x241];
    param_1 = param_4[0x240];
    in_register_00005028 = param_4[0x243];
    param_2 = param_4[0x242];
    uStack_60 = param_4[0x244];
    uStack_80 = param_1;
    uStack_78 = in_register_00005008;
    uStack_70 = param_2;
    uStack_68 = in_register_00005028;
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x47:
    in_register_00005008 = param_4[0x24d];
    param_1 = param_4[0x24c];
    in_register_00005028 = param_4[0x24f];
    param_2 = param_4[0x24e];
    uStack_60 = param_4[0x250];
    uStack_80 = param_1;
    uStack_78 = in_register_00005008;
    uStack_70 = param_2;
    uStack_68 = in_register_00005028;
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x48:
    in_register_00005008 = param_4[0x25b];
    param_1 = param_4[0x25a];
    in_register_00005028 = param_4[0x25d];
    param_2 = param_4[0x25c];
    uStack_60 = param_4[0x25e];
    uStack_80 = param_1;
    uStack_78 = in_register_00005008;
    uStack_70 = param_2;
    uStack_68 = in_register_00005028;
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x49:
    in_register_00005008 = param_4[0x26b];
    param_1 = param_4[0x26a];
    in_register_00005028 = param_4[0x26d];
    param_2 = param_4[0x26c];
    uStack_60 = param_4[0x26e];
    uStack_80 = param_1;
    uStack_78 = in_register_00005008;
    uStack_70 = param_2;
    uStack_68 = in_register_00005028;
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x4a:
    func_0x00010778c664(param_4 + 0x277);
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x4b:
    func_0x00010778c664(param_4 + 0x287);
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x4c:
    func_0x00010778c664(param_4 + 0x293);
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x4d:
    func_0x00010778c664(param_4 + 0x2a1);
    func_0x00010778c634();
    goto LAB_1077887e0;
  case 0x4e:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0x2d;
      goto code_r0x00010778876c;
    }
    break;
  case 0x4f:
    func_0x00010778c564();
    if ((bool)uVar3) goto code_r0x00010778b104;
    break;
  case 0x50:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0x43;
      goto code_r0x00010778876c;
    }
    break;
  case 0x51:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0x4a;
      goto code_r0x00010778876c;
    }
    break;
  case 0x52:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0x51;
      goto code_r0x00010778876c;
    }
    break;
  case 0x53:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0x58;
      goto code_r0x00010778876c;
    }
    break;
  case 0x54:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0x5f;
      goto code_r0x00010778876c;
    }
    break;
  case 0x55:
    func_0x00010778c564();
    if ((bool)uVar3) goto code_r0x00010778b104;
    break;
  case 0x56:
    func_0x00010778c564();
    if ((bool)uVar3) goto code_r0x00010778b104;
    break;
  case 0x57:
    func_0x00010778c564();
    if ((bool)uVar3) goto code_r0x00010778b104;
    break;
  case 0x58:
    func_0x00010778c564();
    if ((bool)uVar3) goto code_r0x00010778b104;
    break;
  case 0x59:
    func_0x00010778c564();
    if ((bool)uVar3) {
      param_4 = param_4 + 0xa2;
      goto code_r0x00010778876c;
    }
    break;
  default:
LAB_10778863c:
    func_0x00010778c7c4();
LAB_1077887e0:
    func_0x00010778c564();
    if ((bool)uVar3) {
      return;
    }
  }
  ___stack_chk_fail();
  puVar5 = auStack_98;
  func_0x000107269124();
  func_0x00010778c858();
  puStack_b8 = &DAT_107788824;
  puVar11 = param_6;
  ppuVar12 = param_7;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010778c620();
  puStack_1c0 = param_4;
  uStack_1b8 = param_5;
  uStack_108 = extraout_x8;
  func_0x00010772d2fc(apuStack_188,&puStack_1c0);
  ppuVar6 = &PTR_DAT_1109d75d8;
  ppuVar8 = (undefined **)&UNK_1109d7e48;
  ppuVar10 = apuStack_188;
  FUN_107785358(&PTR_DAT_1109d75d8,&UNK_1109d7e48,ppuVar10);
  uVar3 = ppuVar6 == (undefined **)&UNK_1109d7e48;
  if ((bool)uVar3) {
code_r0x000107788898:
    *(undefined1 *)puVar4 = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
    goto code_r0x00010778a0fc;
  }
  ppuVar7 = apuStack_188;
  ppuVar8 = ppuVar6;
  func_0x000107785400(ppuVar7,ppuVar6);
  if ((int)ppuVar7 != 0) goto code_r0x000107788898;
  bVar1 = *(byte *)(ppuVar6 + 1);
  uVar3 = bVar1 == 0x59;
  uVar16 = (uint)bVar1;
  if (bVar1 < 0x5a) {
    uVar17 = (uint)bVar1;
    switch(bVar1) {
    case 0:
    case 3:
    case 6:
    case 0xe:
      func_0x00010778c6a4();
      func_0x00010778c5b0();
      func_0x00010733b904();
      if ((bStack_150 & 1) != 0) {
        uVar3 = uVar16 == 0xe;
        if ((bool)uVar3) {
          func_0x00010778c79c();
          ppuVar6 = apuStack_188;
          ppuVar8 = (undefined **)(extraout_x8_11 + 0xab8);
          func_0x000107786038(ppuVar6,ppuVar8);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
              ppuVar8 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c7a8(puStack_1b0 + 0xab8);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c7a8(*param_7 + 0xab8);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
        }
        else {
          uVar3 = uVar16 == 3;
          if ((bool)uVar3) {
            func_0x00010778c79c();
            ppuVar6 = apuStack_188;
            ppuVar8 = (undefined **)(extraout_x8_09 + 0x680);
            func_0x000107786038(ppuVar6,ppuVar8);
            if (((ulong)ppuVar6 & 1) == 0) {
              if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
                ppuVar8 = (undefined **)*param_7;
                func_0x00010778c784();
                func_0x00010778c7a8(puStack_1b0 + 0x680);
                func_0x00010778c614();
                func_0x00010778c77c();
              }
              else {
                func_0x00010778c7a8(*param_7 + 0x680);
              }
              func_0x00010778c640();
              func_0x00010778c78c();
            }
          }
          else {
            uVar3 = uVar16 == 6;
            if ((bool)uVar3) {
              func_0x00010778c79c();
              ppuVar6 = apuStack_188;
              ppuVar8 = (undefined **)(extraout_x8_10 + 0x7b0);
              func_0x000107786038(ppuVar6,ppuVar8);
              if (((ulong)ppuVar6 & 1) == 0) {
                if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
                  ppuVar8 = (undefined **)*param_7;
                  func_0x00010778c784();
                  func_0x00010778c7a8(puStack_1b0 + 0x7b0);
                  func_0x00010778c614();
                  func_0x00010778c77c();
                }
                else {
                  func_0x00010778c7a8(*param_7 + 0x7b0);
                }
                func_0x00010778c640();
                func_0x00010778c78c();
              }
            }
            else {
              if (uVar16 != 0) {
                func_0x00010778c9b8();
                func_0x00010778c850();
                uVar3 = uVar16 - 1 == 0xc;
                switch(uVar16 - 1) {
                case 0:
                  goto code_r0x000107788d8c;
                case 1:
                case 3:
                case 9:
                  goto code_r0x000107788ed8;
                case 4:
                  goto code_r0x000107789114;
                case 6:
                case 7:
                case 8:
                case 0xb:
                case 0xc:
                  goto code_r0x0001077888c8;
                case 10:
                  goto code_r0x000107789084;
                }
                goto code_r0x00010778996c;
              }
              func_0x00010778c79c();
              ppuVar6 = apuStack_188;
              ppuVar8 = (undefined **)(extraout_x8_02 + 0x548);
              func_0x000107786038(ppuVar6,ppuVar8);
              if (((ulong)ppuVar6 & 1) == 0) {
                if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
                  ppuVar8 = (undefined **)*param_7;
                  func_0x00010778c784();
                  func_0x00010778c7a8(puStack_1b0 + 0x548);
                  func_0x00010778c614();
                  func_0x00010778c77c();
                }
                else {
                  func_0x00010778c7a8(*param_7 + 0x548);
                }
                func_0x00010778c640();
                func_0x00010778c78c();
              }
            }
          }
        }
        goto code_r0x00010778a0e8;
      }
      func_0x00010778c5cc();
      if (extraout_x8_03 != 0) {
        func_0x00010778c5f4();
        func_0x00010778c698();
        func_0x00010778c604();
code_r0x000107788a44:
        func_0x00010778c6bc();
        func_0x00010778c848();
      }
code_r0x000107788a4c:
      func_0x00010778c590();
      goto code_r0x00010778a0ec;
    case 1:
    case 0xf:
    case 0x13:
code_r0x000107788d8c:
      func_0x00010778c6a4();
      func_0x00010778c5b0();
      func_0x0001077848c0();
      if ((bStack_140 & 1) == 0) {
        func_0x00010778c5cc();
        if (extraout_x8_13 != 0) {
          func_0x00010778c5f4();
          func_0x00010778c698();
          func_0x00010778c604();
          func_0x00010778c6bc();
          func_0x00010778c848();
        }
        func_0x00010778c590();
      }
      else {
        uVar3 = uVar16 == 0x13;
        if ((bool)uVar3) {
          func_0x00010778c79c();
          ppuVar6 = apuStack_188;
          ppuVar8 = (undefined **)(extraout_x8_15 + 0xcb0);
          func_0x000107785bfc(ppuVar6,ppuVar8);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
              ppuVar8 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c8c0(puStack_1b0 + 0xcb0);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c8c0(*param_7 + 0xcb0);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
        }
        else {
          uVar3 = uVar16 == 0xf;
          if ((bool)uVar3) {
            func_0x00010778c79c();
            ppuVar6 = apuStack_188;
            ppuVar8 = (undefined **)(extraout_x8_14 + 0xb18);
            func_0x000107785bfc(ppuVar6,ppuVar8);
            if (((ulong)ppuVar6 & 1) == 0) {
              if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
                ppuVar8 = (undefined **)*param_7;
                func_0x00010778c784();
                func_0x00010778c8c0(puStack_1b0 + 0xb18);
                func_0x00010778c614();
                func_0x00010778c77c();
              }
              else {
                func_0x00010778c8c0(*param_7 + 0xb18);
              }
              func_0x00010778c640();
              func_0x00010778c78c();
            }
          }
          else {
            uVar3 = uVar16 == 1;
            if (!(bool)uVar3) {
              ppuVar7 = apuStack_188;
              func_0x00010754e888();
              func_0x00010778c850();
              uVar3 = uVar17 - 2 == 0x10;
              switch(uVar17 - 2) {
              case 0:
              case 2:
              case 8:
              case 0xe:
                goto code_r0x000107788ed8;
              case 3:
                goto code_r0x000107789114;
              case 5:
              case 6:
              case 7:
              case 10:
              case 0xb:
                goto code_r0x0001077888c8;
              case 9:
              case 0x10:
                goto code_r0x000107789084;
              case 0xf:
                goto code_r0x0001077893a8;
              }
              goto code_r0x00010778996c;
            }
            func_0x00010778c79c();
            ppuVar6 = apuStack_188;
            ppuVar8 = (undefined **)(extraout_x8_12 + 0x5a8);
            func_0x000107785bfc(ppuVar6,ppuVar8);
            if (((ulong)ppuVar6 & 1) == 0) {
              if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
                ppuVar8 = (undefined **)*param_7;
                func_0x00010778c784();
                func_0x00010778c8c0(puStack_1b0 + 0x5a8);
                func_0x00010778c614();
                func_0x00010778c77c();
              }
              else {
                func_0x00010778c8c0(*param_7 + 0x5a8);
              }
              func_0x00010778c640();
              func_0x00010778c78c();
            }
          }
        }
        func_0x00010778c888();
      }
      func_0x00010778c8b4();
      func_0x00010754e888();
      break;
    case 2:
    case 4:
    case 10:
    case 0x10:
    case 0x1d:
    case 0x23:
code_r0x000107788ed8:
      func_0x00010778c744();
      func_0x00010778c5b0();
      func_0x0001073398b8();
      if ((bStack_148 & 1) == 0) {
        func_0x00010778c5cc();
        if (extraout_x8_17 != 0) {
          func_0x00010778c5f4();
          func_0x00010778c698();
          func_0x00010778c604();
          goto code_r0x000107788f74;
        }
        goto code_r0x000107788f7c;
      }
      uVar3 = uVar17 == 0x23;
      if ((bool)uVar3) {
        func_0x00010778c79c();
        func_0x00010778c860();
        func_0x000107785dfc();
        if (((ulong)ppuVar7 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar8 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c7f4(puStack_1b0);
            func_0x000107785e68();
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c7f4(*param_7);
            func_0x000107785e68();
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
      }
      else {
        uVar3 = uVar16 == 4;
        if ((bool)uVar3) {
          func_0x00010778c79c();
          ppuVar6 = apuStack_188;
          ppuVar8 = (undefined **)(extraout_x8_24 + 0x6e0);
          func_0x000107785dfc(ppuVar6,ppuVar8);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
              ppuVar8 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c810(puStack_1b0 + 0x6e0);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c810(*param_7 + 0x6e0);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
        }
        else {
          uVar3 = uVar16 == 10;
          if ((bool)uVar3) {
            func_0x00010778c79c();
            ppuVar6 = apuStack_188;
            ppuVar8 = (undefined **)(extraout_x8_18 + 0x930);
            func_0x000107785dfc(ppuVar6,ppuVar8);
            if (((ulong)ppuVar6 & 1) == 0) {
              if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
                ppuVar8 = (undefined **)*param_7;
                func_0x00010778c784();
                func_0x00010778c810(puStack_1b0 + 0x930);
                func_0x00010778c614();
                func_0x00010778c77c();
              }
              else {
                func_0x00010778c810(*param_7 + 0x930);
              }
              func_0x00010778c640();
              func_0x00010778c78c();
            }
          }
          else {
            uVar3 = uVar16 == 0x10;
            if ((bool)uVar3) {
              func_0x00010778c79c();
              ppuVar6 = apuStack_188;
              ppuVar8 = (undefined **)(extraout_x8_19 + 0xb88);
              func_0x000107785dfc(ppuVar6,ppuVar8);
              if (((ulong)ppuVar6 & 1) == 0) {
                if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
                  ppuVar8 = (undefined **)*param_7;
                  func_0x00010778c784();
                  func_0x00010778c810(puStack_1b0 + 0xb88);
                  func_0x00010778c614();
                  func_0x00010778c77c();
                }
                else {
                  func_0x00010778c810(*param_7 + 0xb88);
                }
                func_0x00010778c640();
                func_0x00010778c78c();
              }
            }
            else {
              uVar3 = uVar16 == 0x1d;
              if ((bool)uVar3) {
                func_0x00010778c79c();
                func_0x00010778c860();
                func_0x000107785dfc();
                if (((ulong)ppuVar7 & 1) == 0) {
                  if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
                    ppuVar8 = (undefined **)*param_7;
                    func_0x00010778c784();
                    func_0x00010778c7f4(puStack_1b0);
                    func_0x000107785e68();
                    func_0x00010778c614();
                    func_0x00010778c77c();
                  }
                  else {
                    func_0x00010778c7f4(*param_7);
                    func_0x000107785e68();
                  }
                  func_0x00010778c640();
                  func_0x00010778c78c();
                }
              }
              else {
                uVar3 = uVar16 == 2;
                if (!(bool)uVar3) {
                  ppuVar7 = apuStack_188;
                  func_0x000107339974();
                  func_0x00010778c850();
                  uVar3 = uVar16 - 5 == 0x1d;
                  switch(uVar16 - 5) {
                  case 0:
                    goto code_r0x000107789114;
                  case 2:
                  case 3:
                  case 4:
                  case 7:
                  case 8:
                  case 0xf:
                  case 0x16:
                  case 0x1a:
                  case 0x1b:
                    goto code_r0x0001077888c8;
                  case 6:
                  case 0xd:
                    goto code_r0x000107789084;
                  case 0xc:
                    goto code_r0x0001077893a8;
                  case 0x10:
                  case 0x11:
                  case 0x12:
                  case 0x13:
                  case 0x14:
                  case 0x17:
                  case 0x1c:
                    goto code_r0x000107789308;
                  case 0x15:
                    goto code_r0x0001077894ec;
                  case 0x19:
                  case 0x1d:
                    goto code_r0x000107789454;
                  }
                  goto code_r0x00010778996c;
                }
                func_0x00010778c79c();
                ppuVar6 = apuStack_188;
                ppuVar8 = (undefined **)(extraout_x8_16 + 0x618);
                func_0x000107785dfc(ppuVar6,ppuVar8);
                if (((ulong)ppuVar6 & 1) == 0) {
                  if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
                    ppuVar8 = (undefined **)*param_7;
                    func_0x00010778c784();
                    func_0x00010778c810(puStack_1b0 + 0x618);
                    func_0x00010778c614();
                    func_0x00010778c77c();
                  }
                  else {
                    func_0x00010778c810(*param_7 + 0x618);
                  }
                  func_0x00010778c640();
                  func_0x00010778c78c();
                }
              }
            }
          }
        }
      }
code_r0x000107789ee4:
      func_0x00010778c888();
      goto code_r0x000107789ee8;
    case 5:
code_r0x000107789114:
      func_0x00010778c6a4();
      func_0x00010778c5b0();
      func_0x0001073398b8();
      if ((bStack_148 & 1) != 0) {
        func_0x00010778c79c();
        ppuVar6 = apuStack_188;
        ppuVar8 = (undefined **)(extraout_x8_22 + 0x748);
        func_0x000107785dfc(ppuVar6,ppuVar8);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar8 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c810(puStack_1b0 + 0x748);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c810(*param_7 + 0x748);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        goto code_r0x000107789ee4;
      }
      func_0x00010778c5cc();
      if (extraout_x8_23 != 0) {
        func_0x00010778c5f4();
        func_0x00010778c698();
        func_0x00010778c604();
code_r0x000107788f74:
        func_0x00010778c6bc();
        func_0x00010778c848();
      }
code_r0x000107788f7c:
      func_0x00010778c590();
code_r0x000107789ee8:
      func_0x00010778c8b4();
      func_0x000107339974();
      break;
    case 7:
    case 8:
    case 9:
    case 0xc:
    case 0xd:
    case 0x14:
    case 0x1b:
    case 0x1f:
    case 0x20:
    case 0x25:
code_r0x0001077888c8:
      func_0x00010778c744();
      func_0x00010778c5b0();
      func_0x00010733b904();
      if ((bStack_150 & 1) == 0) {
        func_0x00010778c5cc();
        if (extraout_x8_01 != 0) {
          func_0x00010778c5f4();
          func_0x00010778c698();
          func_0x00010778c604();
          goto code_r0x000107788a44;
        }
        goto code_r0x000107788a4c;
      }
      uVar3 = uVar16 - 7 == 0xd;
      switch(uVar16 - 7) {
      case 0:
        func_0x00010778c79c();
        ppuVar6 = apuStack_188;
        ppuVar8 = (undefined **)(extraout_x8_00 + 0x810);
        func_0x000107786038(ppuVar6,ppuVar8);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar8 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c7a8(puStack_1b0 + 0x810);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c7a8(*param_7 + 0x810);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      case 1:
        func_0x00010778c79c();
        ppuVar6 = apuStack_188;
        ppuVar8 = (undefined **)(extraout_x8_07 + 0x870);
        func_0x000107786038(ppuVar6,ppuVar8);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar8 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c7a8(puStack_1b0 + 0x870);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c7a8(*param_7 + 0x870);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      case 2:
        func_0x00010778c79c();
        ppuVar6 = apuStack_188;
        ppuVar8 = (undefined **)(extraout_x8_05 + 0x8d0);
        func_0x000107786038(ppuVar6,ppuVar8);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar8 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c7a8(puStack_1b0 + 0x8d0);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c7a8(*param_7 + 0x8d0);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      case 3:
      case 4:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
code_r0x000107788a54:
        func_0x00010778c9b8();
        func_0x00010778c850();
        uVar3 = uVar17 - 0xb == 0x19;
        switch(uVar17 - 0xb) {
        case 0:
        case 7:
          goto code_r0x000107789084;
        case 6:
          goto code_r0x0001077893a8;
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0x11:
        case 0x16:
          goto code_r0x000107789308;
        case 0xf:
          goto code_r0x0001077894ec;
        case 0x13:
        case 0x17:
        case 0x19:
          goto code_r0x000107789454;
        }
        goto code_r0x00010778996c;
      case 5:
        func_0x00010778c79c();
        ppuVar6 = apuStack_188;
        ppuVar8 = (undefined **)(extraout_x8_04 + 0x9f8);
        func_0x000107786038(ppuVar6,ppuVar8);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar8 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c7a8(puStack_1b0 + 0x9f8);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c7a8(*param_7 + 0x9f8);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      case 6:
        func_0x00010778c79c();
        ppuVar6 = apuStack_188;
        ppuVar8 = (undefined **)(extraout_x8_06 + 0xa58);
        func_0x000107786038(ppuVar6,ppuVar8);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar8 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c7a8(puStack_1b0 + 0xa58);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c7a8(*param_7 + 0xa58);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      case 0xd:
        func_0x00010778c79c();
        ppuVar6 = apuStack_188;
        ppuVar8 = (undefined **)(extraout_x8_08 + 0xd20);
        func_0x000107786038(ppuVar6,ppuVar8);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar8 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c7a8(puStack_1b0 + 0xd20);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c7a8(*param_7 + 0xd20);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      default:
        uVar3 = uVar16 == 0x1b;
        if ((bool)uVar3) {
          func_0x00010778c79c();
          func_0x00010778c818();
          if (((ulong)ppuVar7 & 1) == 0) {
            if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
              ppuVar8 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c6d8(puStack_1b0);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c6d8(*param_7);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
        }
        else {
          uVar3 = uVar16 == 0x1f;
          if ((bool)uVar3) {
            func_0x00010778c79c();
            func_0x00010778c818();
            if (((ulong)ppuVar7 & 1) == 0) {
              if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
                ppuVar8 = (undefined **)*param_7;
                func_0x00010778c784();
                func_0x00010778c6d8(puStack_1b0);
                func_0x00010778c614();
                func_0x00010778c77c();
              }
              else {
                func_0x00010778c6d8(*param_7);
              }
              func_0x00010778c640();
              func_0x00010778c78c();
            }
          }
          else {
            uVar3 = uVar16 == 0x20;
            if ((bool)uVar3) {
              func_0x00010778c79c();
              func_0x00010778c818();
              if (((ulong)ppuVar7 & 1) == 0) {
                if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
                  ppuVar8 = (undefined **)*param_7;
                  func_0x00010778c784();
                  func_0x00010778c6d8(puStack_1b0);
                  func_0x00010778c614();
                  func_0x00010778c77c();
                }
                else {
                  func_0x00010778c6d8(*param_7);
                }
                func_0x00010778c640();
                func_0x00010778c78c();
              }
            }
            else {
              uVar3 = uVar17 == 0x25;
              if (!(bool)uVar3) goto code_r0x000107788a54;
              func_0x00010778c79c();
              func_0x00010778c818();
              if (((ulong)ppuVar7 & 1) == 0) {
                if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
                  ppuVar8 = (undefined **)*param_7;
                  func_0x00010778c784();
                  func_0x00010778c6d8(puStack_1b0);
                  func_0x00010778c614();
                  func_0x00010778c77c();
                }
                else {
                  func_0x00010778c6d8(*param_7);
                }
                func_0x00010778c640();
                func_0x00010778c78c();
              }
            }
          }
        }
      }
code_r0x00010778a0e8:
      func_0x00010778c888();
code_r0x00010778a0ec:
      func_0x00010778c8b4();
      func_0x00010727e950();
      break;
    case 0xb:
    case 0x12:
    case 0x53:
    case 0x54:
code_r0x000107789084:
      func_0x00010778c744();
      func_0x00010778c5b0();
      func_0x00010733e5bc();
      if ((bStack_150 & 1) != 0) {
        uVar3 = uVar16 == 0x54;
        if ((bool)uVar3) {
          func_0x00010778c79c();
          ppuVar6 = apuStack_188;
          ppuVar8 = (undefined **)(extraout_x8_27 + 0x2f8);
          func_0x000107785b50(ppuVar6,ppuVar8);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
              ppuVar8 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c808(puStack_1b0 + 0x2f8);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c808(*param_7 + 0x2f8);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
        }
        else {
          uVar3 = uVar16 == 0x12;
          if ((bool)uVar3) {
            func_0x00010778c79c();
            ppuVar6 = apuStack_188;
            ppuVar8 = (undefined **)(extraout_x8_25 + 0xc50);
            func_0x000107785b50(ppuVar6,ppuVar8);
            if (((ulong)ppuVar6 & 1) == 0) {
              if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
                ppuVar8 = (undefined **)*param_7;
                func_0x00010778c784();
                func_0x00010778c998(puStack_1b0 + 0xc50);
                func_0x00010778c614();
                func_0x00010778c77c();
              }
              else {
                func_0x00010778c998(*param_7 + 0xc50);
              }
              func_0x00010778c640();
              func_0x00010778c78c();
            }
          }
          else {
            uVar3 = uVar16 == 0x53;
            if ((bool)uVar3) {
              func_0x00010778c79c();
              ppuVar6 = apuStack_188;
              ppuVar8 = (undefined **)(extraout_x8_26 + 0x2c0);
              func_0x000107785b50(ppuVar6,ppuVar8);
              if (((ulong)ppuVar6 & 1) == 0) {
                if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
                  ppuVar8 = (undefined **)*param_7;
                  func_0x00010778c784();
                  func_0x00010778c808(puStack_1b0 + 0x2c0);
                  func_0x00010778c614();
                  func_0x00010778c77c();
                }
                else {
                  func_0x00010778c808(*param_7 + 0x2c0);
                }
                func_0x00010778c640();
                func_0x00010778c78c();
              }
            }
            else {
              uVar3 = uVar16 == 0xb;
              if (!(bool)uVar3) {
                func_0x00010778c9b0();
                func_0x00010778c850();
                uVar3 = uVar17 - 0x11 == 0x15;
                switch(uVar17 - 0x11) {
                case 0:
                  goto code_r0x0001077893a8;
                case 1:
                case 2:
                case 3:
                case 10:
                case 0xc:
                case 0xe:
                case 0xf:
                case 0x12:
                case 0x14:
                  break;
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 0xb:
                case 0x10:
                case 0x15:
                  goto code_r0x000107789308;
                case 9:
                  goto code_r0x0001077894ec;
                case 0xd:
                case 0x11:
                case 0x13:
                  goto code_r0x000107789454;
                default:
                  uVar3 = uVar17 - 0x50 == 3;
                  if ((uVar17 - 0x50 < 3) || (uVar3 = true, uVar17 == 0x4e))
                  goto code_r0x0001077897f8;
                  uVar3 = uVar17 == 0x4f;
                  if ((bool)uVar3) goto code_r0x0001077898c0;
                }
                goto code_r0x00010778996c;
              }
              func_0x00010778c79c();
              ppuVar6 = apuStack_188;
              ppuVar8 = (undefined **)(extraout_x8_20 + 0x998);
              func_0x000107785b50(ppuVar6,ppuVar8);
              if (((ulong)ppuVar6 & 1) == 0) {
                if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
                  ppuVar8 = (undefined **)*param_7;
                  func_0x00010778c784();
                  func_0x00010778c998(puStack_1b0 + 0x998);
                  func_0x00010778c614();
                  func_0x00010778c77c();
                }
                else {
                  func_0x00010778c998(*param_7 + 0x998);
                }
                func_0x00010778c640();
                func_0x00010778c78c();
              }
            }
          }
        }
        goto code_r0x00010778a07c;
      }
      func_0x00010778c5cc();
      if (extraout_x8_21 != 0) {
        func_0x00010778c5f4();
        func_0x00010778c698();
        func_0x00010778c604();
code_r0x000107789888:
        func_0x00010778c6bc();
        func_0x00010778c848();
      }
code_r0x000107789890:
      func_0x00010778c590();
      goto code_r0x00010778a080;
    case 0x11:
code_r0x0001077893a8:
      func_0x00010778c744();
      func_0x00010778c5b0();
      puVar18 = &UNK_1077893b4;
      goto code_r0x00010778ac78;
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1c:
    case 0x21:
    case 0x26:
code_r0x000107789308:
      func_0x00010778c744();
      func_0x00010778c5b0();
      func_0x000107343028();
      if ((bStack_140 & 1) == 0) {
        func_0x00010778c5cc();
        if (extraout_x8_29 != 0) {
          func_0x00010778c5f4();
          func_0x00010778c698();
          func_0x00010778c604();
          func_0x00010778c6bc();
          func_0x00010778c848();
        }
        func_0x00010778c590();
      }
      else {
        uVar3 = uVar17 - 0x15 == 0x11;
        switch(uVar17 - 0x15) {
        case 0:
          func_0x00010778c79c();
          ppuVar6 = apuStack_188;
          ppuVar8 = (undefined **)(extraout_x8_28 + 0xd80);
          func_0x00010778c12c(ppuVar6,ppuVar8);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
              ppuVar8 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c800(puStack_1b0 + 0xd80);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c800(*param_7 + 0xd80);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 1:
          func_0x00010778c79c();
          ppuVar6 = apuStack_188;
          ppuVar8 = (undefined **)(extraout_x8_33 + 0xdf0);
          func_0x00010778c12c(ppuVar6,ppuVar8);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
              ppuVar8 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c800(puStack_1b0 + 0xdf0);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c800(*param_7 + 0xdf0);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 2:
          func_0x00010778c79c();
          ppuVar6 = apuStack_188;
          ppuVar8 = (undefined **)(extraout_x8_34 + 0xe60);
          func_0x00010778c12c(ppuVar6,ppuVar8);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
              ppuVar8 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c800(puStack_1b0 + 0xe60);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c800(*param_7 + 0xe60);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 3:
          func_0x00010778c79c();
          ppuVar6 = apuStack_188;
          ppuVar8 = (undefined **)(extraout_x8_35 + 0xed0);
          func_0x00010778c12c(ppuVar6,ppuVar8);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
              ppuVar8 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c800(puStack_1b0 + 0xed0);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c800(*param_7 + 0xed0);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 4:
          func_0x00010778c79c();
          ppuVar6 = apuStack_188;
          ppuVar8 = (undefined **)(extraout_x8_36 + 0xf40);
          func_0x00010778c12c(ppuVar6,ppuVar8);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
              ppuVar8 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c800(puStack_1b0 + 0xf40);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c800(*param_7 + 0xf40);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        default:
          ppuVar7 = (undefined **)0x0;
          func_0x000107343508();
          func_0x00010778c850();
          uVar2 = uVar17 - 0x1a >> 1 & 0x7f | (uVar17 - 0x1a) * 0x80 & 0xff;
          uVar3 = uVar2 - 4 == 2;
          if (1 < uVar2 - 4) {
            if (uVar2 == 0) goto code_r0x0001077894ec;
            uVar3 = uVar2 == 2;
            if (!(bool)uVar3) goto code_r0x00010778996c;
          }
          goto code_r0x000107789454;
        case 7:
          func_0x00010778c79c();
          func_0x00010778c860();
          func_0x00010778c12c();
          if (((ulong)ppuVar7 & 1) == 0) {
            if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
              ppuVar8 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c764(puStack_1b0);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c764(*param_7);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 0xc:
          func_0x00010778c79c();
          func_0x00010778c860();
          func_0x00010778c12c();
          if (((ulong)ppuVar7 & 1) == 0) {
            if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
              ppuVar8 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c764(puStack_1b0);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c764(*param_7);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 0x11:
          func_0x00010778c79c();
          func_0x00010778c860();
          func_0x00010778c12c();
          if (((ulong)ppuVar7 & 1) == 0) {
            if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
              ppuVar8 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c764(puStack_1b0);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c764(*param_7);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
        }
        func_0x00010778c888();
      }
      func_0x00010778c8b4();
      func_0x000107343508();
      break;
    case 0x1a:
code_r0x0001077894ec:
      puStack_1d8 = (undefined *)0x0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      func_0x00010778c924();
      func_0x00010755d8d4();
      if ((bStack_150 & 1) == 0) {
        func_0x00010778c5cc();
        if (extraout_x8_32 != 0) {
          func_0x00010778c5f4();
          func_0x00010778c698();
          func_0x00010778c604();
          func_0x00010778c6bc();
          func_0x00010778c848();
        }
        func_0x00010778c590();
      }
      else {
        func_0x00010778c79c();
        ppuVar6 = apuStack_188;
        ppuVar8 = (undefined **)(extraout_x8_31 + 0xfb0);
        func_0x00010778c198(ppuVar6,ppuVar8);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar8 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c9f4(puStack_1b0);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c9f4(*param_7);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        func_0x00010778c888();
      }
      func_0x00010778c8b4();
      func_0x00010778b4b4();
      break;
    case 0x1e:
    case 0x22:
    case 0x24:
code_r0x000107789454:
      puStack_1d8 = (undefined *)0x0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      func_0x00010778c924();
      func_0x00010755d660();
      if ((bStack_130 & 1) == 0) {
        func_0x00010778c5cc();
        if (extraout_x8_30 != 0) {
          func_0x00010778c5f4();
          func_0x00010778c698();
          func_0x00010778c604();
          func_0x00010778c6bc();
          func_0x00010778c848();
        }
        func_0x00010778c590();
      }
      else {
        uVar3 = uVar17 == 0x24;
        if ((bool)uVar3) {
          func_0x00010778c79c();
          func_0x00010778c860();
          func_0x00010778c348();
          if (((ulong)ppuVar7 & 1) == 0) {
            if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
              ppuVar8 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c770(puStack_1b0);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c770(*param_7);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
        }
        else {
          uVar3 = uVar16 == 0x22;
          if ((bool)uVar3) {
            func_0x00010778c79c();
            func_0x00010778c860();
            func_0x00010778c348();
            if (((ulong)ppuVar7 & 1) == 0) {
              if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
                ppuVar8 = (undefined **)*param_7;
                func_0x00010778c784();
                func_0x00010778c770(puStack_1b0);
                func_0x00010778c614();
                func_0x00010778c77c();
              }
              else {
                func_0x00010778c770(*param_7);
              }
              func_0x00010778c640();
              func_0x00010778c78c();
            }
          }
          else {
            uVar3 = uVar16 == 0x1e;
            if (!(bool)uVar3) {
              func_0x00010778b4e4(apuStack_188);
              goto code_r0x000107789968;
            }
            func_0x00010778c79c();
            func_0x00010778c860();
            func_0x00010778c348();
            if (((ulong)ppuVar7 & 1) == 0) {
              if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
                ppuVar8 = (undefined **)*param_7;
                func_0x00010778c784();
                func_0x00010778c770(puStack_1b0);
                func_0x00010778c614();
                func_0x00010778c77c();
              }
              else {
                func_0x00010778c770(*param_7);
              }
              func_0x00010778c640();
              func_0x00010778c78c();
            }
          }
        }
        func_0x00010778c888();
      }
      func_0x00010778c8b4();
      func_0x00010778b4e4();
      break;
    default:
      goto code_r0x00010778996c;
    case 0x4e:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x59:
code_r0x0001077897f8:
      func_0x00010778c6a4();
      func_0x00010778c5b0();
      func_0x00010733e5bc();
      if ((bStack_150 & 1) == 0) {
        func_0x00010778c5cc();
        if (extraout_x8_38 != 0) {
          func_0x00010778c5f4();
          func_0x00010778c698();
          func_0x00010778c604();
          goto code_r0x000107789888;
        }
        goto code_r0x000107789890;
      }
      uVar3 = uVar16 - 0x4e == 0xb;
      switch(uVar16 - 0x4e) {
      case 0:
        func_0x00010778c79c();
        ppuVar6 = apuStack_188;
        ppuVar8 = (undefined **)(extraout_x8_37 + 0x168);
        func_0x000107785b50(ppuVar6,ppuVar8);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar8 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c808(puStack_1b0 + 0x168);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c808(*param_7 + 0x168);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      default:
        func_0x00010778c9b0();
        func_0x00010778c850();
        uVar2 = uVar16 - 0x4f;
        uVar3 = uVar2 == 9;
        if ((uVar2 < 10) && (uVar3 = (1 << (ulong)(uVar2 & 0x1f) & 0x3c1U) == 0, !(bool)uVar3))
        goto code_r0x0001077898c0;
        goto code_r0x00010778996c;
      case 2:
        func_0x00010778c79c();
        ppuVar6 = apuStack_188;
        ppuVar8 = (undefined **)(extraout_x8_51 + 0x218);
        func_0x000107785b50(ppuVar6,ppuVar8);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar8 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c808(puStack_1b0 + 0x218);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c808(*param_7 + 0x218);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      case 3:
        func_0x00010778c79c();
        ppuVar6 = apuStack_188;
        ppuVar8 = (undefined **)(extraout_x8_50 + 0x250);
        func_0x000107785b50(ppuVar6,ppuVar8);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar8 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c808(puStack_1b0 + 0x250);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c808(*param_7 + 0x250);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      case 4:
        func_0x00010778c79c();
        ppuVar6 = apuStack_188;
        ppuVar8 = (undefined **)(extraout_x8_52 + 0x288);
        func_0x000107785b50(ppuVar6,ppuVar8);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar8 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c808(puStack_1b0 + 0x288);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c808(*param_7 + 0x288);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      case 0xb:
        func_0x00010778c79c();
        ppuVar6 = apuStack_188;
        ppuVar8 = (undefined **)(extraout_x8_53 + 0x510);
        func_0x000107785b50(ppuVar6,ppuVar8);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar8 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c808(puStack_1b0 + 0x510);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c808(*param_7 + 0x510);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
      }
code_r0x00010778a07c:
      func_0x00010778c888();
code_r0x00010778a080:
      func_0x00010778c8b4();
      func_0x00010733e5d8();
      break;
    case 0x4f:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
code_r0x0001077898c0:
      func_0x00010778c6a4();
      func_0x00010778c5b0();
      func_0x000107323db4();
      if ((bStack_110 & 1) == 0) {
        func_0x00010778c5cc();
        if (extraout_x8_41 != 0) {
          func_0x00010778c5f4();
          func_0x00010778c698();
          func_0x00010778c604();
          func_0x00010778c6bc();
          func_0x00010778c848();
        }
        func_0x00010778c590();
      }
      else {
        uVar3 = uVar17 - 0x4f == 9;
        switch(uVar17 - 0x4f) {
        case 0:
          func_0x00010778c79c();
          ppuVar6 = apuStack_188;
          ppuVar8 = (undefined **)(extraout_x8_39 + 0x1a0);
          func_0x00010778be7c(ppuVar6,ppuVar8);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
              ppuVar8 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c9e8();
              func_0x00010778c838(extraout_x8_40 + 0x1a8);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c9dc();
              func_0x00010778c838(extraout_x8_55 + 0x1a8);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        default:
          func_0x00010732493c(apuStack_188);
code_r0x000107789968:
          func_0x00010778c850();
          goto code_r0x00010778996c;
        case 6:
          func_0x00010778c79c();
          ppuVar6 = apuStack_188;
          ppuVar8 = (undefined **)(extraout_x8_44 + 0x330);
          func_0x00010778be7c(ppuVar6,ppuVar8);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
              ppuVar8 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c9e8();
              func_0x00010778c838(extraout_x8_45 + 0x338);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c9dc();
              func_0x00010778c838(extraout_x8_56 + 0x338);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 7:
          func_0x00010778c79c();
          ppuVar6 = apuStack_188;
          ppuVar8 = (undefined **)(extraout_x8_42 + 0x3a8);
          func_0x00010778be7c(ppuVar6,ppuVar8);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
              ppuVar8 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c9e8();
              func_0x00010778c838(extraout_x8_43 + 0x3b0);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c9dc();
              func_0x00010778c838(extraout_x8_54 + 0x3b0);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 8:
          func_0x00010778c79c();
          ppuVar6 = apuStack_188;
          ppuVar8 = (undefined **)(extraout_x8_46 + 0x420);
          func_0x00010778be7c(ppuVar6,ppuVar8);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
              ppuVar8 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c9e8();
              func_0x00010778c838(extraout_x8_47 + 0x428);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c9dc();
              func_0x00010778c838(extraout_x8_57 + 0x428);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 9:
          func_0x00010778c79c();
          ppuVar6 = apuStack_188;
          ppuVar8 = (undefined **)(extraout_x8_48 + 0x498);
          func_0x00010778be7c(ppuVar6,ppuVar8);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
              ppuVar8 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c9e8();
              func_0x00010778c838(extraout_x8_49 + 0x4a0);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c9dc();
              func_0x00010778c838(extraout_x8_58 + 0x4a0);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
        }
        func_0x00010778c888();
      }
      func_0x00010778c8b4();
      func_0x00010732493c();
    }
    ppuVar6 = &puStack_1d8;
    goto code_r0x00010778a0f8;
  }
code_r0x00010778996c:
  puStack_1b0 = (undefined *)0x0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  ppuVar8 = &puStack_1b0;
  func_0x00010754bb48(apuStack_188,param_6,ppuVar8,param_7);
  if ((bStack_160 & 1) == 0) {
    puVar4[1] = uStack_1a8;
    *puVar4 = (ulong)puStack_1b0;
    puVar4[2] = uStack_1a0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    puStack_1b0 = (undefined *)0x0;
    uVar13 = 1;
    goto code_r0x00010778a7b4;
  }
  uVar3 = uVar16 - 0x27 == 0x26;
  switch(uVar16 - 0x27) {
  case 0:
    if ((puVar5[2] != 0) && (*(long *)(puVar5[2] + 8) == 0)) {
      func_0x00010778c728();
      func_0x00010778cb14();
      goto code_r0x00010778a7b0;
    }
    func_0x00010778c794();
    func_0x00010778c718();
    func_0x00010778cb14();
    goto code_r0x00010778a79c;
  case 1:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c718();
      func_0x00010778ca9c();
      goto code_r0x00010778a79c;
    }
    func_0x00010778c728();
    func_0x00010778ca9c();
    goto code_r0x00010778a7b0;
  case 2:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_1d8[0x678] = uStack_168;
code_r0x00010778a700:
      func_0x00010778c7b0();
      extraout_x9_04[1] = in_register_00005008;
      *extraout_x9_04 = param_1;
      extraout_x9_04[3] = in_register_00005028;
      extraout_x9_04[2] = param_2;
      goto code_r0x00010778a79c;
    }
    *(undefined1 *)(puVar5[1] + 0x678) = uStack_168;
    break;
  case 3:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_1d8[0x6d8] = uStack_168;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar5[1] + 0x6d8) = uStack_168;
    break;
  case 4:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c718();
      func_0x00010778cad8();
      goto code_r0x00010778a79c;
    }
    func_0x00010778c728();
    func_0x00010778cad8();
    goto code_r0x00010778a7b0;
  case 5:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_1d8[0x7a8] = uStack_168;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar5[1] + 0x7a8) = uStack_168;
    break;
  case 6:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_1d8[0x808] = uStack_168;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar5[1] + 0x808) = uStack_168;
    break;
  case 7:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_1d8[0x868] = uStack_168;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar5[1] + 0x868) = uStack_168;
    break;
  case 8:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_1d8[0x8c8] = uStack_168;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar5[1] + 0x8c8) = uStack_168;
    break;
  case 9:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_1d8[0x928] = uStack_168;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar5[1] + 0x928) = uStack_168;
    break;
  case 10:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c718();
      func_0x00010778ca74();
      goto code_r0x00010778a79c;
    }
    func_0x00010778c728();
    func_0x00010778ca74();
    goto code_r0x00010778a7b0;
  case 0xb:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c718();
      func_0x00010778caec();
      goto code_r0x00010778a79c;
    }
    func_0x00010778c728();
    func_0x00010778caec();
    goto code_r0x00010778a7b0;
  case 0xc:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c718();
      func_0x00010778cac4();
      goto code_r0x00010778a79c;
    }
    func_0x00010778c728();
    func_0x00010778cac4();
    goto code_r0x00010778a7b0;
  case 0xd:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c718();
      func_0x00010778ca88();
      goto code_r0x00010778a79c;
    }
    func_0x00010778c728();
    func_0x00010778ca88();
    goto code_r0x00010778a7b0;
  case 0xe:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c718();
      func_0x00010778cb00();
      goto code_r0x00010778a79c;
    }
    func_0x00010778c728();
    func_0x00010778cb00();
    goto code_r0x00010778a7b0;
  case 0xf:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c718();
      func_0x00010778cab0();
      goto code_r0x00010778a79c;
    }
    func_0x00010778c728();
    func_0x00010778cab0();
    goto code_r0x00010778a7b0;
  case 0x10:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_1d8[0xbe8] = uStack_168;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar5[1] + 0xbe8) = uStack_168;
    break;
  case 0x11:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_1d8[0xc48] = uStack_168;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar5[1] + 0xc48) = uStack_168;
    break;
  case 0x12:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_1d8[0xca8] = uStack_168;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar5[1] + 0xca8) = uStack_168;
    break;
  case 0x13:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_1d8[0xd18] = uStack_168;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar5[1] + 0xd18) = uStack_168;
    break;
  case 0x14:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_1d8[0xd78] = uStack_168;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar5[1] + 0xd78) = uStack_168;
    break;
  case 0x15:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_1d8[0xde8] = uStack_168;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar5[1] + 0xde8) = uStack_168;
    break;
  case 0x16:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_1d8[0xe58] = uStack_168;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar5[1] + 0xe58) = uStack_168;
    break;
  case 0x17:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_1d8[0xec8] = uStack_168;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar5[1] + 0xec8) = uStack_168;
    break;
  case 0x18:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_1d8[0xf38] = uStack_168;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar5[1] + 0xf38) = uStack_168;
    break;
  case 0x19:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_1d8[0xfa8] = uStack_168;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar5[1] + 0xfa8) = uStack_168;
    break;
  case 0x1a:
    if ((puVar5[2] != 0) && (*(long *)(puVar5[2] + 8) == 0)) {
      lVar14 = puVar5[1] + 0xfe8;
code_r0x00010778aa8c:
      func_0x00010778c7b0(lVar14);
      extraout_x8_72[1] = in_register_00005008;
      *extraout_x8_72 = param_1;
      extraout_x8_72[3] = in_register_00005028;
      extraout_x8_72[2] = param_2;
      *(undefined1 *)(extraout_x8_72 + 4) = uStack_168;
      goto code_r0x00010778a7b0;
    }
    func_0x00010778c794();
    puVar18 = puStack_1d8 + 0xfe8;
    goto code_r0x00010778a78c;
  case 0x1b:
    if ((puVar5[2] != 0) && (*(long *)(puVar5[2] + 8) == 0)) {
      uVar15 = puVar5[1];
      lVar14 = 0x1048;
code_r0x00010778aa88:
      lVar14 = uVar15 + lVar14;
      goto code_r0x00010778aa8c;
    }
    func_0x00010778c794();
    lVar14 = 0x1048;
    goto code_r0x00010778a788;
  case 0x1c:
    if ((puVar5[2] != 0) && (*(long *)(puVar5[2] + 8) == 0)) {
      uVar15 = puVar5[1];
      lVar14 = 0x10b8;
      goto code_r0x00010778aa88;
    }
    func_0x00010778c794();
    lVar14 = 0x10b8;
    goto code_r0x00010778a788;
  case 0x1d:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c6c8(puStack_1d8);
      *(ulong *)(extraout_x8_64 + 0x1128) = in_register_00005008;
      *(ulong *)(extraout_x8_64 + 0x1120) = param_1;
      *(ulong *)(extraout_x8_64 + 0x1138) = in_register_00005028;
      *(ulong *)(extraout_x8_64 + 0x1130) = param_2;
      lVar14 = extraout_x9_05;
code_r0x00010778a75c:
      *(undefined1 *)(lVar14 + 0x20) = uStack_168;
      goto code_r0x00010778a79c;
    }
    func_0x00010778c6c8(puVar5[1]);
    *(ulong *)(extraout_x8_71 + 0x1128) = in_register_00005008;
    *(ulong *)(extraout_x8_71 + 0x1120) = param_1;
    *(ulong *)(extraout_x8_71 + 0x1138) = in_register_00005028;
    *(ulong *)(extraout_x8_71 + 0x1130) = param_2;
    lVar14 = extraout_x9_12;
    goto code_r0x00010778aa74;
  case 0x1e:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c6c8(puStack_1d8);
      *(ulong *)(extraout_x8_62 + 0x11a8) = in_register_00005008;
      *(ulong *)(extraout_x8_62 + 0x11a0) = param_1;
      *(ulong *)(extraout_x8_62 + 0x11b8) = in_register_00005028;
      *(ulong *)(extraout_x8_62 + 0x11b0) = param_2;
      lVar14 = extraout_x9_02;
      goto code_r0x00010778a75c;
    }
    func_0x00010778c6c8(puVar5[1]);
    *(ulong *)(extraout_x8_69 + 0x11a8) = in_register_00005008;
    *(ulong *)(extraout_x8_69 + 0x11a0) = param_1;
    *(ulong *)(extraout_x8_69 + 0x11b8) = in_register_00005028;
    *(ulong *)(extraout_x8_69 + 0x11b0) = param_2;
    lVar14 = extraout_x9_09;
    goto code_r0x00010778aa74;
  case 0x1f:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c6c8(puStack_1d8);
      *(ulong *)(extraout_x8_61 + 0x1208) = in_register_00005008;
      *(ulong *)(extraout_x8_61 + 0x1200) = param_1;
      *(ulong *)(extraout_x8_61 + 0x1218) = in_register_00005028;
      *(ulong *)(extraout_x8_61 + 0x1210) = param_2;
      lVar14 = extraout_x9_01;
      goto code_r0x00010778a75c;
    }
    func_0x00010778c6c8(puVar5[1]);
    *(ulong *)(extraout_x8_68 + 0x1208) = in_register_00005008;
    *(ulong *)(extraout_x8_68 + 0x1200) = param_1;
    *(ulong *)(extraout_x8_68 + 0x1218) = in_register_00005028;
    *(ulong *)(extraout_x8_68 + 0x1210) = param_2;
    lVar14 = extraout_x9_08;
    goto code_r0x00010778aa74;
  case 0x20:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c6c8(puStack_1d8);
      *(ulong *)(extraout_x8_63 + 0x1268) = in_register_00005008;
      *(ulong *)(extraout_x8_63 + 0x1260) = param_1;
      *(ulong *)(extraout_x8_63 + 0x1278) = in_register_00005028;
      *(ulong *)(extraout_x8_63 + 0x1270) = param_2;
      lVar14 = extraout_x9_03;
      goto code_r0x00010778a75c;
    }
    func_0x00010778c6c8(puVar5[1]);
    *(ulong *)(extraout_x8_70 + 0x1268) = in_register_00005008;
    *(ulong *)(extraout_x8_70 + 0x1260) = param_1;
    *(ulong *)(extraout_x8_70 + 0x1278) = in_register_00005028;
    *(ulong *)(extraout_x8_70 + 0x1270) = param_2;
    lVar14 = extraout_x9_10;
    goto code_r0x00010778aa74;
  case 0x21:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c6c8(puStack_1d8);
      *(ulong *)(extraout_x8_60 + 0x12d8) = in_register_00005008;
      *(ulong *)(extraout_x8_60 + 0x12d0) = param_1;
      *(ulong *)(extraout_x8_60 + 0x12e8) = in_register_00005028;
      *(ulong *)(extraout_x8_60 + 0x12e0) = param_2;
      lVar14 = extraout_x9_00;
      goto code_r0x00010778a75c;
    }
    func_0x00010778c6c8(puVar5[1]);
    *(ulong *)(extraout_x8_67 + 0x12d8) = in_register_00005008;
    *(ulong *)(extraout_x8_67 + 0x12d0) = param_1;
    *(ulong *)(extraout_x8_67 + 0x12e8) = in_register_00005028;
    *(ulong *)(extraout_x8_67 + 0x12e0) = param_2;
    lVar14 = extraout_x9_07;
    goto code_r0x00010778aa74;
  case 0x22:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c6c8(puStack_1d8);
      *(ulong *)(extraout_x8_59 + 0x1358) = in_register_00005008;
      *(ulong *)(extraout_x8_59 + 0x1350) = param_1;
      *(ulong *)(extraout_x8_59 + 0x1368) = in_register_00005028;
      *(ulong *)(extraout_x8_59 + 0x1360) = param_2;
      lVar14 = extraout_x9;
      goto code_r0x00010778a75c;
    }
    func_0x00010778c6c8(puVar5[1]);
    *(ulong *)(extraout_x8_66 + 0x1358) = in_register_00005008;
    *(ulong *)(extraout_x8_66 + 0x1350) = param_1;
    *(ulong *)(extraout_x8_66 + 0x1368) = in_register_00005028;
    *(ulong *)(extraout_x8_66 + 0x1360) = param_2;
    lVar14 = extraout_x9_06;
code_r0x00010778aa74:
    *(undefined1 *)(lVar14 + 0x20) = uStack_168;
    goto code_r0x00010778a7b0;
  case 0x23:
    if ((puVar5[2] != 0) && (*(long *)(puVar5[2] + 8) == 0)) {
      uVar15 = puVar5[1];
      lVar14 = 0x13b8;
      goto code_r0x00010778aa88;
    }
    func_0x00010778c794();
    lVar14 = 0x13b8;
    goto code_r0x00010778a788;
  case 0x24:
    if ((puVar5[2] != 0) && (*(long *)(puVar5[2] + 8) == 0)) {
      uVar15 = puVar5[1];
      lVar14 = 0x1438;
      goto code_r0x00010778aa88;
    }
    func_0x00010778c794();
    lVar14 = 0x1438;
    goto code_r0x00010778a788;
  case 0x25:
    if ((puVar5[2] != 0) && (*(long *)(puVar5[2] + 8) == 0)) {
      uVar15 = puVar5[1];
      lVar14 = 0x1498;
      goto code_r0x00010778aa88;
    }
    func_0x00010778c794();
    lVar14 = 0x1498;
    goto code_r0x00010778a788;
  case 0x26:
    if ((puVar5[2] != 0) && (*(long *)(puVar5[2] + 8) == 0)) {
      uVar15 = puVar5[1];
      lVar14 = 0x1508;
      goto code_r0x00010778aa88;
    }
    func_0x00010778c794();
    lVar14 = 0x1508;
code_r0x00010778a788:
    puVar18 = puStack_1d8 + lVar14;
code_r0x00010778a78c:
    func_0x00010778c7b0(puVar18);
    extraout_x8_65[1] = in_register_00005008;
    *extraout_x8_65 = param_1;
    extraout_x8_65[3] = in_register_00005028;
    extraout_x8_65[2] = param_2;
    *(undefined1 *)(extraout_x8_65 + 4) = uStack_168;
code_r0x00010778a79c:
    ppuVar8 = &puStack_1d8;
    func_0x00010778be38(puVar5 + 1,ppuVar8);
    func_0x00010778ada4(&puStack_1d8);
  default:
    goto code_r0x00010778a7b0;
  }
  func_0x00010778c7b0();
  extraout_x9_11[1] = in_register_00005008;
  *extraout_x9_11 = param_1;
  extraout_x9_11[3] = in_register_00005028;
  extraout_x9_11[2] = param_2;
code_r0x00010778a7b0:
  func_0x00010778c888();
  uVar13 = extraout_w8;
code_r0x00010778a7b4:
  *(undefined1 *)(puVar4 + 3) = uVar13;
  ppuVar6 = &puStack_1b0;
  ppuVar10 = param_7;
code_r0x00010778a0f8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar6);
code_r0x00010778a0fc:
  func_0x00010778c57c(uStack_108);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010778c6e4();
  func_0x00010754e888(apuStack_188);
  ppuVar7 = &puStack_1d8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar7);
  puVar18 = &UNK_10778ac78;
  func_0x00010778c858();
code_r0x00010778ac78:
  ppuStack_200 = &puStack_c0;
  puStack_1f8 = puVar18;
  func_0x00010755ac94(&uStack_201,ppuVar7,ppuVar8,ppuVar10,*puVar11,*(undefined1 *)ppuVar12);
  return;
}



/* Entry: 10778b120; end: 10778b14f;  */

/* WARNING: Possible PIC construction at 0x00010778b170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010778b258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010778b3bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010778b25c) */
/* WARNING: Removing unreachable block (ram,0x00010778b27c) */
/* WARNING: Removing unreachable block (ram,0x00010778b274) */
/* WARNING: Removing unreachable block (ram,0x00010778b174) */
/* WARNING: Removing unreachable block (ram,0x00010778b194) */
/* WARNING: Removing unreachable block (ram,0x00010778b18c) */
/* WARNING: Removing unreachable block (ram,0x00010778b3c0) */
/* WARNING: Removing unreachable block (ram,0x00010778b3e0) */
/* WARNING: Removing unreachable block (ram,0x00010778b3d8) */

char * FUN_10778b120(undefined8 *param_1,char *param_2,char *param_3,undefined8 param_4,
                    undefined8 param_5,char param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined1 uVar3;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  char *unaff_x19;
  char *unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined8 uStack_180;
  undefined8 uStack_178;
  char acStack_170 [32];
  double dStack_150;
  undefined *puStack_d8;
  char acStack_d0 [56];
  undefined8 uStack_98;
  undefined1 auStack_70 [8];
  char acStack_68 [64];
  undefined8 uStack_28;
  undefined8 *puVar2;
  
  pcVar4 = param_2;
  if (*(int *)(param_2 + 0x30) != 0) {
    uVar3 = *(int *)(param_2 + 0x30) == 1;
    if ((bool)uVar3) {
      func_0x00010778c620();
      uVar3 = *param_2 == '\0';
      puVar9 = &DAT_10f42a7a5;
      if ((bool)uVar3) {
        puVar9 = &DAT_10f42a7a1;
      }
      cVar6 = (char)acStack_d0;
      pcVar4 = acStack_d0;
      func_0x00010724cc70(acStack_68,puVar9);
      uStack_98 = extraout_x8;
      func_0x000100060964(acStack_d0);
      func_0x000104c33004(acStack_68);
      func_0x000104c2f714();
      func_0x00010724cc40(uStack_98);
      if (!(bool)uVar3) {
        ___stack_chk_fail();
        puStack_d8 = &UNK_10724aea8;
        *pcVar4 = cVar6;
        pcVar4[1] = param_6;
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        func_0x000104c2fe00(pcVar4 + 8,param_4);
        pcVar4[0x40] = '\0';
        pcVar4[0x78] = '\0';
        func_0x00010724af54(pcVar4 + 0x80,param_5);
        func_0x00010724afdc(pcVar4 + 0xd0,param_7);
        pcVar4[0x110] = '\0';
        pcVar4[0x118] = '\0';
        pcVar4[0x120] = '\0';
        pcVar4[0x128] = '\0';
        pcVar4[0x130] = '\0';
        pcVar4[0x148] = '\0';
        pcVar4[0x170] = '\0';
        pcVar4[0x1a8] = '\0';
        pcVar4[0x1b0] = '\0';
        pcVar4[0x1b1] = '\0';
        pcVar4[0x158] = '\0';
        pcVar4[0x159] = '\0';
        pcVar4[0x15a] = '\0';
        pcVar4[0x15b] = '\0';
        pcVar4[0x15c] = '\0';
        pcVar4[0x15d] = '\0';
        pcVar4[0x15e] = '\0';
        pcVar4[0x15f] = '\0';
        pcVar4[0x160] = '\0';
        pcVar4[0x161] = '\0';
        pcVar4[0x162] = '\0';
        pcVar4[0x163] = '\0';
        pcVar4[0x164] = '\0';
        pcVar4[0x165] = '\0';
        pcVar4[0x166] = '\0';
        pcVar4[0x167] = '\0';
        pcVar4[0x150] = '\0';
        pcVar4[0x151] = '\0';
        pcVar4[0x152] = '\0';
        pcVar4[0x153] = '\0';
        pcVar4[0x154] = '\0';
        pcVar4[0x155] = '\0';
        pcVar4[0x156] = '\0';
        pcVar4[0x157] = '\0';
        pcVar4[0x168] = '\0';
        pcVar4[0x1c0] = '\0';
        pcVar4[0x1c1] = '\0';
        pcVar4[0x1c2] = '\0';
        pcVar4[0x1c3] = '\0';
        pcVar4[0x1c4] = '\0';
        pcVar4[0x1c5] = '\0';
        pcVar4[0x1c6] = '\0';
        pcVar4[0x1c7] = '\0';
        pcVar4[0x1b8] = '\0';
        pcVar4[0x1b9] = '\0';
        pcVar4[0x1ba] = '\0';
        pcVar4[0x1bb] = '\0';
        pcVar4[0x1bc] = '\0';
        pcVar4[0x1bd] = '\0';
        pcVar4[0x1be] = '\0';
        pcVar4[0x1bf] = '\0';
        pcVar4[0x1d0] = '\0';
        pcVar4[0x1d1] = '\0';
        pcVar4[0x1d2] = '\0';
        pcVar4[0x1d3] = '\0';
        pcVar4[0x1d4] = '\0';
        pcVar4[0x1d5] = '\0';
        pcVar4[0x1d6] = '\0';
        pcVar4[0x1d7] = '\0';
        pcVar4[0x1c8] = '\0';
        pcVar4[0x1c9] = '\0';
        pcVar4[0x1ca] = '\0';
        pcVar4[0x1cb] = '\0';
        pcVar4[0x1cc] = '\0';
        pcVar4[0x1cd] = '\0';
        pcVar4[0x1ce] = '\0';
        pcVar4[0x1cf] = '\0';
        pcVar4[0x1e0] = '\0';
        pcVar4[0x1e1] = '\0';
        pcVar4[0x1e2] = '\0';
        pcVar4[0x1e3] = '\0';
        pcVar4[0x1e4] = '\0';
        pcVar4[0x1e5] = '\0';
        pcVar4[0x1e6] = '\0';
        pcVar4[0x1e7] = '\0';
        pcVar4[0x1d8] = '\0';
        pcVar4[0x1d9] = '\0';
        pcVar4[0x1da] = '\0';
        pcVar4[0x1db] = '\0';
        pcVar4[0x1dc] = '\0';
        pcVar4[0x1dd] = '\0';
        pcVar4[0x1de] = '\0';
        pcVar4[0x1df] = '\0';
        pcVar4[0x1e8] = '\0';
        pcVar4[0x1e9] = '\0';
        pcVar4[0x1ea] = '\0';
        pcVar4[0x1eb] = '\0';
        pcVar4[0x1ec] = '\0';
        pcVar4[0x1ed] = '\0';
        pcVar4[0x1ee] = '\0';
        pcVar4[0x1ef] = '\0';
        pcVar4[0x1f0] = '\0';
        pcVar4[0x1f1] = '\0';
        pcVar4[0x1f2] = -0x80;
        pcVar4[499] = '?';
        return pcVar4;
      }
      return acStack_68;
    }
    puVar2 = (undefined8 *)auStack_70;
    puVar8 = &stack0xfffffffffffffff0;
    func_0x00010778c620();
    func_0x00010778c7e0();
    func_0x00010778c980();
    func_0x00010778c758();
    func_0x00010778c738(2);
    func_0x00010778c57c(uStack_28);
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      puVar9 = &UNK_10778b208;
      __Unwind_Resume();
      pcVar4 = param_3;
      param_1 = extraout_x8_00;
      if (*(int *)(param_3 + 0x40) == 0) goto LAB_10778c6f0;
      uVar3 = 0;
      pcVar5 = param_3;
      if (*(int *)(param_3 + 0x40) == 1) {
        func_0x00010778c620();
        puVar2 = &uStack_180;
        puVar8 = &stack0xffffffffffffff10;
        func_0x00010778c620(&puStack_d8);
        acStack_170[0] = '\0';
        acStack_170[1] = '\0';
        acStack_170[2] = '\0';
        acStack_170[3] = '\0';
        acStack_170[4] = '\0';
        acStack_170[5] = '\0';
        acStack_170[6] = '\0';
        acStack_170[7] = '\0';
        acStack_170[8] = '\0';
        acStack_170[9] = '\0';
        acStack_170[10] = '\0';
        acStack_170[0xb] = '\0';
        acStack_170[0xc] = '\0';
        acStack_170[0xd] = '\0';
        acStack_170[0xe] = '\0';
        acStack_170[0xf] = '\0';
        acStack_170[0x10] = '\0';
        acStack_170[0x11] = '\0';
        acStack_170[0x12] = '\0';
        acStack_170[0x13] = '\0';
        acStack_170[0x14] = '\0';
        acStack_170[0x15] = '\0';
        acStack_170[0x16] = '\0';
        acStack_170[0x17] = '\0';
        pcVar4 = acStack_170;
        func_0x00010778ca0c();
        for (lVar7 = 0; uVar3 = lVar7 == 0x10, !(bool)uVar3; lVar7 = lVar7 + 4) {
          dStack_150 = (double)*(float *)(param_3 + lVar7);
          acStack_170[0x18] = '\x03';
          acStack_170[0x19] = '\0';
          acStack_170[0x1a] = '\0';
          acStack_170[0x1b] = '\0';
          func_0x00010778ca48();
          func_0x00010778c8e8();
        }
        func_0x00010778ca28();
        unaff_x19[0] = '\0';
        unaff_x19[1] = '\0';
        unaff_x19[2] = '\0';
        unaff_x19[3] = '\0';
        *(undefined8 *)(unaff_x19 + 0x10) = uStack_178;
        *(undefined8 *)(unaff_x19 + 8) = uStack_180;
        func_0x00010778c8d4();
        func_0x00010778c9a8();
        func_0x00010778c564();
        if ((bool)uVar3) {
          return pcVar4;
        }
        ___stack_chk_fail();
        param_2 = pcVar4;
        func_0x00010778c9a8();
        puVar9 = &UNK_10778b328;
        func_0x00010778c858();
        unaff_x19 = pcVar4;
        unaff_x20 = param_3;
      }
      puVar1 = (undefined1 *)((long)puVar2 + -0x70);
      *(char **)((long)puVar2 + -0x20) = unaff_x20;
      *(char **)((long)puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)((long)puVar2 + -0x10) = puVar8;
      *(undefined **)((long)puVar2 + -8) = puVar9;
      puVar8 = (undefined1 *)((long)puVar2 + -0x10);
      func_0x00010778c620();
      func_0x00010778c7e0();
      func_0x00010778c980();
      func_0x00010778c758();
      func_0x00010778c738(2);
      func_0x00010778c57c(*(undefined8 *)((long)puVar2 + -0x28));
      param_3 = param_2;
      if (!(bool)uVar3) {
        ___stack_chk_fail();
        pcVar10 = FUN_10778b36c;
        __Unwind_Resume();
        pcVar4 = param_2;
        param_1 = extraout_x8_01;
        if (*(int *)(param_2 + 0x70) == 0) goto LAB_10778c6f0;
        uVar3 = *(int *)(param_2 + 0x70) == 1;
        if ((bool)uVar3) {
          *(char **)((long)puVar2 + -0x90) = unaff_x20;
          *(char **)((long)puVar2 + -0x88) = unaff_x19;
          *(undefined1 **)((long)puVar2 + -0x80) = puVar8;
          *(code **)((long)puVar2 + -0x78) = FUN_10778b36c;
          func_0x00010778c620(param_2 + 8);
          *(undefined8 *)((long)puVar2 + -0x98) = extraout_x8_02;
          puVar1 = (undefined1 *)((long)puVar2 + -0x140);
          pcVar5 = (char *)((long)puVar2 + -0x140);
          *(char **)((long)puVar2 + -0x100) = unaff_x20;
          *(char **)((long)puVar2 + -0xf8) = unaff_x19;
          *(undefined1 **)((long)puVar2 + -0xf0) = (undefined1 *)((long)puVar2 + -0x80);
          *(undefined **)((long)puVar2 + -0xe8) = &UNK_10778b3c0;
          puVar8 = (undefined1 *)((long)puVar2 + -0xf0);
          func_0x00010778c620((undefined1 *)((long)puVar2 + -0xd8));
          *(undefined8 *)((long)puVar2 + -0x108) = extraout_x8_03;
          func_0x000104c2fe00((undefined1 *)((long)puVar2 + -0x140));
          func_0x000104c33004(unaff_x19,(undefined1 *)((long)puVar2 + -0x140));
          func_0x000104c2f714();
          func_0x00010778c57c(*(undefined8 *)((long)puVar2 + -0x108));
          if ((bool)uVar3) {
            return pcVar5;
          }
          pcVar10 = (code *)&LAB_10778b440;
          ___stack_chk_fail();
        }
        *(char **)(puVar1 + -0x20) = unaff_x20;
        *(char **)(puVar1 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar1 + -0x10) = puVar8;
        *(code **)(puVar1 + -8) = pcVar10;
        func_0x00010778c620();
        func_0x00010778c7e0();
        func_0x00010778c980();
        func_0x00010778c758();
        func_0x00010778c738(2);
        func_0x00010778c57c(*(undefined8 *)(puVar1 + -0x28));
        param_3 = pcVar5;
        if (!(bool)uVar3) {
          ___stack_chk_fail();
          __Unwind_Resume();
          *(char **)(puVar1 + -0x90) = unaff_x20;
          *(char **)(puVar1 + -0x88) = unaff_x19;
          *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x10;
          *(undefined **)(puVar1 + -0x78) = &UNK_10778b484;
          if (pcVar5[0x38] == '\x01') {
            func_0x00010748aaa4(pcVar5);
          }
          return pcVar5;
        }
      }
    }
    return param_3;
  }
LAB_10778c6f0:
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)param_1 = 7;
  return pcVar4;
}



/* Entry: 10778b36c; end: 10778b39b;  */

/* WARNING: Possible PIC construction at 0x00010778b3bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010778b3c0) */
/* WARNING: Removing unreachable block (ram,0x00010778b3e0) */
/* WARNING: Removing unreachable block (ram,0x00010778b3d8) */

undefined1 * FUN_10778b36c(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined1 auStack_d0 [56];
  undefined8 uStack_98;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_68 [72];
  
  if (*(int *)(param_2 + 0x70) == 0) {
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined4 *)param_1 = 7;
    return param_2;
  }
  uVar1 = *(int *)(param_2 + 0x70) == 1;
  if ((bool)uVar1) {
    func_0x00010778c620(param_2 + 8);
    param_3 = auStack_d0;
    puStack_78 = &UNK_10778b3c0;
    unaff_x29 = &puStack_80;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x00010778c620(auStack_68);
    uStack_98 = extraout_x8;
    func_0x000104c2fe00(auStack_d0);
    func_0x000104c33004();
    func_0x000104c2f714();
    func_0x00010778c57c(uStack_98);
    if ((bool)uVar1) {
      return param_3;
    }
    unaff_x30 = &LAB_10778b440;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)auStack_d0;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010778c620();
  func_0x00010778c7e0();
  func_0x00010778c980();
  func_0x00010778c758();
  func_0x00010778c738(2);
  func_0x00010778c57c(*(undefined8 *)((long)register0x00000008 + -0x28));
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x78) = &UNK_10778b484;
    if (param_3[0x38] == '\x01') {
      func_0x00010748aaa4(param_3);
    }
    return param_3;
  }
  return param_3;
}



/* Entry: 10778b5d8; end: 10778b607;  */

undefined8 * FUN_10778b5d8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0xc0784b2efd5e6) {
    puVar1 = (undefined8 *)(param_2 * 0x1548);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109d7e58;
  func_0x00010778b674(param_1 + 3);
  return param_1;
}



/* Entry: 10778b83c; end: 10778b853;  */

void FUN_10778b83c(void)

{
  func_0x00010778b854();
  return;
}



/* Entry: 10778bd44; end: 10778bd6b;  */

void FUN_10778bd44(undefined8 param_1,undefined8 param_2)

{
  func_0x00010778c87c();
  func_0x0001073ddbd0(param_2);
  func_0x00010778c9d0();
  func_0x00010778ca60();
  func_0x00010778c970();
  return;
}



/* Entry: 10778bf58; end: 10778bfab;  */

void FUN_10778bf58(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x30) != -1 || *(int *)(param_2 + 0x30) != -1) {
    if (*(int *)(param_2 + 0x30) == -1) {
      if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
        func_0x00010748f4e4((&PTR_DAT_1109b3db8)[*(uint *)(param_1 + 0x30)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      return;
    }
    func_0x00010778c8a8();
  }
  return;
}



/* Entry: 10778c08c; end: 10778c093;  */

void FUN_10778c08c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x30) == 2) {
    func_0x00010778c87c(param_2,param_3);
    func_0x0001072f6188();
    *(undefined2 *)(unaff_x20 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
    return;
  }
  func_0x00010778c0f4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10778c1e4; end: 10778c1ff;  */

undefined8 FUN_10778c1e4(void)

{
  return 1;
}



/* Entry: 10778c42c; end: 10778c47f;  */

void FUN_10778c42c(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x50) != -1 || *(int *)(param_2 + 0x50) != -1) {
    if (*(int *)(param_2 + 0x50) == -1) {
      if (*(uint *)(param_1 + 0x50) != 0xffffffff) {
        func_0x00010748f4e4((&PTR_DAT_1109b3d88)[*(uint *)(param_1 + 0x50)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
      return;
    }
    func_0x00010778c8a8();
  }
  return;
}



/* Entry: 10778cfb4; end: 10778cfdf;  */

undefined ** FUN_10778cfb4(void)

{
  return &PTR_DAT_1109d7530;
}



/* Entry: 10778d3a0; end: 10778d3b3;  */

void FUN_10778d3a0(void)

{
  func_0x00010778d374();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10778d970; end: 10778daa3;  */

undefined8 FUN_10778d970(long param_1,undefined8 *param_2)

{
  long extraout_x8;
  undefined8 *puStack_30;
  undefined1 *puStack_28;
  
  func_0x00010734936c(param_2);
  if (*(int *)(param_1 + 0x198) != 0) {
    func_0x00010778f77c(&DAT_10f428581);
    func_0x0001077858cc(param_2,param_1 + 0x168);
  }
  if (*(int *)(param_1 + 0x1d0) != 0) {
    func_0x00010778f77c(&DAT_10f428570);
    puStack_30 = param_2;
    func_0x0001073dd72c(param_1 + 0x1a0);
    puStack_28 = (undefined1 *)&puStack_30;
    func_0x00010778fa48(*(undefined4 *)(param_1 + 0x1d0));
    (*(code *)(&PTR_DAT_1109d8388)[extraout_x8])(&puStack_28,param_1 + 0x1a0);
  }
  if (*(int *)(param_1 + 0x208) != 0) {
    func_0x00010778f77c(&DAT_10f42855a);
    func_0x0001077858cc(param_2,param_1 + 0x1d8);
  }
  if (*(int *)(param_1 + 0x240) != 0) {
    func_0x00010778f77c(&DAT_10f42848d);
    func_0x00010778f294(param_2,param_1 + 0x210);
  }
  if (*(int *)(param_1 + 0x2b8) != 0) {
    func_0x00010778f77c(&DAT_10f428509);
    func_0x00010778fa20();
  }
  if (*(int *)(param_1 + 0x330) != 0) {
    func_0x00010778f77c(&DAT_10f428417);
    func_0x00010778fa20();
  }
  if (*(int *)(param_1 + 0x3a8) != 0) {
    func_0x00010778f77c(&DAT_10f428539);
    func_0x00010778fa20();
  }
  param_2[4] = param_2[4] + -0x10;
  func_0x000107349610(*param_2,0x7d);
  return 1;
}



/* Entry: 10778ee20; end: 10778ee43;  */

void FUN_10778ee20(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  func_0x00010778ee44(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 10778ef9c; end: 10778efdf;  */

undefined8 * FUN_10778ef9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001077839b8();
  *puVar1 = &PTR_DAT_1109d8440;
  _bzero(puVar1 + 0x2d,0x248);
  func_0x00010778f0c8(param_1 + 0x76);
  return param_1;
}



/* Entry: 10778f1a8; end: 10778f1f7;  */

void FUN_10778f1a8(undefined8 *param_1,char *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_18;
  
  puVar1 = &UNK_1109df618;
  if (*param_2 != '\x01') {
    puVar1 = &UNK_1109df628;
  }
  puVar2 = &UNK_1109df608;
  if (*param_2 != '\0') {
    puVar2 = puVar1;
  }
  uStack_18 = *(undefined8 *)(puVar2 + 8);
  func_0x00010778f25c(*(undefined8 *)*param_1,&uStack_18);
  return;
}



/* Entry: 10778f398; end: 10778f3db;  */

undefined8 FUN_10778f398(long param_1)

{
  undefined8 *puStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    uStack_18 = 0;
  }
  else {
    puStack_20 = &uStack_18;
    func_0x00010778f440(&puStack_20,param_1);
  }
  return uStack_18;
}



/* Entry: 10778f5ac; end: 10778f613;  */

long FUN_10778f5ac(long param_1,long param_2)

{
  uint uVar1;
  long lStack_28;
  
  uVar1 = *(uint *)(param_2 + 0x30);
  if (*(int *)(param_1 + 0x30) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      func_0x00010778fa18();
    }
    else {
      lStack_28 = param_1;
      (*(code *)(&PTR_DAT_1109d8400)[uVar1])(&lStack_28,param_1,param_2);
    }
  }
  return param_1;
}



/* Entry: 10778fc88; end: 10778fd53;  */

long FUN_10778fc88(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = &PTR_DAT_1109d8440;
  func_0x00010778ed34(param_1 + 0x76);
  func_0x00010778f074(param_1 + 0x2d);
  func_0x0001077866dc(param_1);
  *unaff_x20 = extraout_x8;
  func_0x000107284db4(param_1 + 0x28);
  func_0x000107284d8c(unaff_x19 + 0xd0);
  func_0x000107283194(unaff_x19 + 0xc0);
  func_0x0001072c9b9c(unaff_x19 + 0xb0);
  func_0x000104c2f714(unaff_x19 + 0x78);
  func_0x000104c2f714(unaff_x19 + 0x40);
  func_0x000104c2f714(unaff_x20 + 1);
  return unaff_x19;
}



/* Entry: 10778fef4; end: 10778ff23;  */

long FUN_10778fef4(long param_1)

{
  _bzero(param_1,0xd0);
  func_0x00010778ff24(param_1 + 8);
  return param_1;
}



/* Entry: 107790054; end: 1077902d3;  */

void FUN_107790054(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puStack_40;
  
  uVar4 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107791a5c();
  puStack_40[1] = 0;
  puStack_40[2] = 0;
  *puStack_40 = &PTR_DAT_1109d8730;
  func_0x000107785684(puStack_40 + 3,param_2);
  puStack_40[3] = &PTR_DAT_1109d8798;
  func_0x00010727d614(puStack_40 + 0x30,param_2 + 0x168);
  func_0x00010727d614(puStack_40 + 0x37,param_2 + 0x1a0);
  func_0x00010727d614(puStack_40 + 0x3e,param_2 + 0x1d8);
  func_0x00010727d614(puStack_40 + 0x45,param_2 + 0x210);
  func_0x00010727d614(puStack_40 + 0x4c,param_2 + 0x248);
  func_0x00010727d614(puStack_40 + 0x53,param_2 + 0x280);
  func_0x00010727d614(puStack_40 + 0x5a,param_2 + 0x2b8);
  func_0x00010727d614(puStack_40 + 0x61,param_2 + 0x2f0);
  func_0x00010727d614(puStack_40 + 0x68,param_2 + 0x328);
  func_0x00010727d614(puStack_40 + 0x6f,param_2 + 0x360);
  func_0x00010727d614(puStack_40 + 0x76,param_2 + 0x398);
  func_0x00010727d614(puStack_40 + 0x7d,param_2 + 0x3d0);
  func_0x00010727d614(puStack_40 + 0x84,param_2 + 0x408);
  puStack_40[0x8b] = *(undefined8 *)(param_2 + 0x440);
  lVar5 = *(long *)(param_2 + 0x448);
  puStack_40[0x8c] = lVar5;
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
  uVar7 = *(undefined8 *)(param_2 + 0x458);
  uVar6 = *(undefined8 *)(param_2 + 0x450);
  uVar9 = *(undefined8 *)(param_2 + 0x468);
  uVar8 = *(undefined8 *)(param_2 + 0x460);
  puStack_40[0x91] = *(undefined8 *)(param_2 + 0x470);
  puStack_40[0x8e] = uVar7;
  puStack_40[0x8d] = uVar6;
  puStack_40[0x90] = uVar9;
  puStack_40[0x8f] = uVar8;
  func_0x0001074c4824(puStack_40 + 0x92,param_2 + 0x478);
  func_0x0001077919fc();
  *param_1 = (long)(puStack_40 + 3);
  param_1[1] = (long)puStack_40;
  func_0x000107791990();
  func_0x0001077918dc(uVar4);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072c9b9c(puStack_40 + 0x8b);
  func_0x0001077917d4(puStack_40 + 0x30);
  do {
    func_0x000107785780(puStack_40 + 3);
    __ZNSt3__119__shared_weak_countD2Ev(puStack_40);
    func_0x0001077919fc();
    func_0x000107791a40();
    func_0x000107266a30(puStack_40 + 0x5a);
    func_0x000107266a30(puStack_40 + 0x53);
    func_0x000107266a30(puStack_40 + 0x4c);
    func_0x000107266a30(puStack_40 + 0x45);
    func_0x000107266a30(puStack_40 + 0x3e);
    func_0x000107266a30(puStack_40 + 0x37);
    func_0x000107266a30(puStack_40 + 0x30);
  } while( true );
}



/* Entry: 1077909b8; end: 107790acb;  */

void FUN_1077909b8(undefined8 *param_1,long *param_2,int param_3)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined1 uStack_81;
  undefined1 *puStack_80;
  undefined *puStack_78;
  long alStack_68 [5];
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  uVar1 = param_3 == 0x10;
  switch(param_3) {
  case 0:
    plVar2 = param_2 + 0x88;
    func_0x000107791900();
    plVar2 = (long *)*plVar2;
    lStack_28 = extraout_x8;
    if (plVar2 == (long *)0x0) {
      func_0x0001077919d0();
    }
    else {
      (**(code **)(*plVar2 + 0x28))(alStack_68);
      param_2 = alStack_68;
      func_0x000104c32a18();
      *(undefined1 *)(unaff_x19 + 0x40) = 2;
      plVar2 = alStack_68;
      func_0x000104c3323c(plVar2);
    }
    func_0x0001077918dc(lStack_28);
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    __Unwind_Resume();
    puStack_78 = &UNK_1077915b8;
    puStack_80 = &stack0xfffffffffffffff0;
    FUN_1077915e0(&uStack_81,plVar2,param_2);
    return;
  case 1:
    param_2 = param_2 + 0x8f;
    break;
  case 2:
    lStack_38 = param_2[0x8b];
    lStack_40 = param_2[0x8a];
    lStack_28 = param_2[0x8d];
    lStack_30 = param_2[0x8c];
    goto code_r0x000107790a58;
  case 3:
    lStack_38 = param_2[0x97];
    lStack_40 = param_2[0x96];
    lStack_28 = param_2[0x99];
    lStack_30 = param_2[0x98];
code_r0x000107790a58:
    func_0x000107784b98(&lStack_40);
    return;
  case 4:
    param_2 = param_2 + 0x2d;
    break;
  case 5:
    param_2 = param_2 + 0x34;
    break;
  case 6:
    param_2 = param_2 + 0x3b;
    break;
  case 7:
    param_2 = param_2 + 0x42;
    break;
  case 8:
    param_2 = param_2 + 0x49;
    break;
  case 9:
    param_2 = param_2 + 0x50;
    break;
  case 10:
    param_2 = param_2 + 0x57;
    break;
  case 0xb:
    param_2 = param_2 + 0x5e;
    break;
  case 0xc:
    param_2 = param_2 + 0x65;
    break;
  case 0xd:
    param_2 = param_2 + 0x6c;
    break;
  case 0xe:
    param_2 = param_2 + 0x73;
    break;
  case 0xf:
    param_2 = param_2 + 0x7a;
    break;
  case 0x10:
    param_2 = param_2 + 0x81;
    break;
  default:
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined4 *)param_1 = 7;
    return;
  }
  func_0x000107784e48(param_2,&stack0xffffffffffffffef);
  return;
}



/* Entry: 1077915e0; end: 107791657;  */

long FUN_1077915e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  long *unaff_x19;
  long lStack_40;
  
  func_0x000107791900();
  func_0x000107791a5c();
  lVar1 = lStack_40;
  func_0x0001077916b0(lStack_40,param_2,param_3);
  *unaff_x19 = lStack_40 + 0x18;
  unaff_x19[1] = lStack_40;
  func_0x0001077919fc();
  func_0x0001077918dc(extraout_x8);
  if ((bool)in_ZR) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x0001077919fc();
  func_0x000107791998();
  *(undefined8 *)(lVar1 + 8) = param_2;
  lVar2 = lVar1;
  func_0x000107791680();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 107791774; end: 107791793;  */

void FUN_107791774(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d8730;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107791bf0; end: 107791bf3;  */

undefined8 * FUN_107791bf0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109ab0d0;
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 1077920ac; end: 10779228f;  */

undefined8 * FUN_1077920ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *unaff_x19;
  long *plStack_5f0;
  undefined1 *puStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 *puStack_5d8;
  undefined1 *puStack_5d0;
  undefined *puStack_5c8;
  long lStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  long lStack_590;
  undefined8 uStack_588;
  undefined1 auStack_530 [112];
  undefined1 auStack_4c0 [72];
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined1 uStack_458;
  undefined1 auStack_450 [96];
  undefined1 auStack_3f0 [96];
  undefined1 auStack_390 [56];
  undefined1 auStack_358 [104];
  undefined1 auStack_2f0 [96];
  undefined1 auStack_290 [96];
  undefined1 auStack_230 [200];
  undefined1 auStack_168 [104];
  undefined1 auStack_100 [96];
  undefined1 auStack_a0 [104];
  undefined8 uStack_38;
  
  func_0x0001077947e4();
  uStack_38 = extraout_x8;
  func_0x000107791d04(&lStack_5c0,*(undefined8 *)(param_1 + 8));
  func_0x000107262f3c(lStack_5c0 + 8,param_2);
  func_0x0001077940b4(&lStack_590);
  lVar1 = lStack_5c0;
  func_0x000107784a7c(lStack_5c0 + 0x2f0,&lStack_590);
  func_0x000107784a14(lVar1 + 0x350,auStack_530);
  func_0x00010749e148(lVar1 + 0x3c0,auStack_4c0);
  *(undefined8 *)(lVar1 + 0x410) = uStack_470;
  *(undefined8 *)(lVar1 + 0x408) = uStack_478;
  *(undefined8 *)(lVar1 + 0x420) = uStack_460;
  *(undefined8 *)(lVar1 + 0x418) = uStack_468;
  *(undefined1 *)(lVar1 + 0x428) = uStack_458;
  func_0x000107784a7c(lVar1 + 0x430,auStack_450);
  func_0x000107784a7c(lVar1 + 0x490,auStack_3f0);
  func_0x0001077914cc(lVar1 + 0x4f0,auStack_390);
  func_0x000107784a4c(lVar1 + 0x528,auStack_358);
  func_0x000107784a7c(lVar1 + 0x590,auStack_2f0);
  func_0x000107784a7c(lVar1 + 0x5f0,auStack_290);
  func_0x000107784ab4(lVar1 + 0x650,auStack_230);
  func_0x000107784a4c(lVar1 + 0x718,auStack_168);
  func_0x00010778adec(lVar1 + 0x780,auStack_100);
  func_0x000107784a7c(lVar1 + 0x7e0,auStack_a0);
  func_0x000107793b1c(&lStack_590);
  puVar2 = (undefined8 *)0x48;
  __Znwm();
  uStack_588 = uStack_5b8;
  lStack_590 = lStack_5c0;
  lStack_5c0 = 0;
  uStack_5b8 = 0;
  uStack_5b0 = 0;
  uStack_5a8 = 0;
  uStack_5a0 = 0;
  uStack_598 = 0;
  plVar5 = &lStack_590;
  func_0x000107781b94();
  func_0x0001073ad4c4(&lStack_590);
  func_0x0001073e3e04(&uStack_5a0);
  *puVar2 = &PTR_DAT_1109d8868;
  puVar3 = &uStack_5b0;
  func_0x0001073e3e04();
  *unaff_x19 = puVar2;
  func_0x0001077949f4();
  func_0x000107794738(uStack_38);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x0001073ad4c4(&lStack_590);
  func_0x0001073e3e04(&uStack_5a0);
  func_0x0001073e3e04(&uStack_5b0);
  puVar4 = puVar2;
  __ZdlPv();
  func_0x0001077949f4();
  func_0x000107794960();
  puStack_5c8 = &DAT_107792290;
  puStack_5e0 = puVar2;
  puStack_5d8 = puVar3;
  puStack_5d0 = &stack0xfffffffffffffff0;
  func_0x00010734936c(plVar5);
  if (*(int *)(puVar4 + 0x33) != 0) {
    func_0x0001077947ac(&DAT_10f4288d6);
    plStack_5f0 = plVar5;
    func_0x0001073e43f4(puVar4 + 0x2d);
    puStack_5e8 = (undefined1 *)&plStack_5f0;
    func_0x000107794bb0(*(undefined4 *)(puVar4 + 0x33));
    (*(code *)(&PTR_FUN_1109d8c48)[extraout_x8_00])(&puStack_5e8,puVar4 + 0x2d);
  }
  if (*(int *)(puVar4 + 0x3a) != 0) {
    func_0x0001077947ac(&DAT_10f428a31);
    plStack_5f0 = plVar5;
    func_0x0001073e4550(puVar4 + 0x34);
    puStack_5e8 = (undefined1 *)&plStack_5f0;
    func_0x000107794bb0(*(undefined4 *)(puVar4 + 0x3a));
    (*(code *)(&PTR_DAT_1109d8c60)[extraout_x8_01])(&puStack_5e8,puVar4 + 0x34);
  }
  if (*(int *)(puVar4 + 0x41) != 0) {
    func_0x0001077947ac(&DAT_10f42899a);
    func_0x0001077858cc(plVar5,puVar4 + 0x3b);
  }
  if (*(int *)(puVar4 + 0x48) != 0) {
    func_0x0001077947ac(&DAT_10f42897c);
    func_0x000107794b74();
  }
  if (*(int *)(puVar4 + 0x4f) != 0) {
    func_0x0001077947ac(&DAT_10f428aad);
    func_0x000107794b74();
  }
  if (*(int *)(puVar4 + 0x56) != 0) {
    func_0x0001077947ac(&DAT_10f4288a8);
    func_0x0001077858cc(plVar5,puVar4 + 0x50);
  }
  if (*(int *)(puVar4 + 0x5d) != 0) {
    func_0x0001077947ac(&DAT_10f4289f4);
    func_0x000107794b74();
  }
  plVar5[4] = plVar5[4] + -0x10;
  func_0x000107349610(*plVar5,0x7d);
  return (undefined8 *)0x1;
}



/* Entry: 107793a90; end: 107793b9f;  */

void FUN_107793a90(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107791d04(&uStack_40,*(undefined8 *)(param_2 + 8));
  if (lStack_38 != 0) {
    plVar1 = (long *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = lStack_38;
  *param_1 = uStack_40;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_1077832b8(&uStack_30);
  func_0x0001077949f4();
  return;
}



/* Entry: 107793e3c; end: 107793ec3;  */

/* WARNING: Possible PIC construction at 0x000107793e68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107793e6c) */
/* WARNING: Removing unreachable block (ram,0x000107793ea8) */
/* WARNING: Removing unreachable block (ram,0x000107793ec0) */
/* WARNING: Removing unreachable block (ram,0x000107793ea0) */
/* WARNING: Removing unreachable block (ram,0x000107794a74) */

undefined1 * FUN_107793e3c(void)

{
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  func_0x0001077947e4();
  uStack_48 = 1;
  func_0x000107793eec();
  return auStack_50;
}



/* Entry: 107793fcc; end: 107793feb;  */

void FUN_107793fcc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d8bd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077941f0; end: 1077941f3;  */

undefined8 FUN_1077941f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return 1;
}



/* Entry: 107794338; end: 10779433f;  */

void FUN_107794338(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 10779454c; end: 107794557;  */

undefined8 FUN_10779454c(void)

{
  return 1;
}



/* Entry: 107794d94; end: 107794d97;  */

long FUN_107794d94(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = &PTR_FUN_1109d8d48;
  func_0x000107793b1c(param_1 + 0x5e);
  func_0x000107794064(param_1 + 0x2d);
  func_0x0001077866dc(param_1);
  *unaff_x20 = extraout_x8;
  func_0x000107284db4(param_1 + 0x28);
  func_0x000107284d8c(unaff_x19 + 0xd0);
  func_0x000107283194(unaff_x19 + 0xc0);
  func_0x0001072c9b9c(unaff_x19 + 0xb0);
  func_0x000104c2f714(unaff_x19 + 0x78);
  func_0x000104c2f714(unaff_x19 + 0x40);
  func_0x000104c2f714(unaff_x20 + 1);
  return unaff_x19;
}



/* Entry: 107794f10; end: 107794fbb;  */

ulong FUN_107794f10(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  
  bVar7 = *(int *)(param_1 + 0x58) == 0;
  uVar1 = 2;
  if (bVar7) {
    uVar1 = 3;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    uVar1 = (ulong)bVar7;
  }
  uVar2 = uVar1 | 4;
  if (*(int *)(param_1 + 0xf8) != 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 8;
  if (*(int *)(param_1 + 0x130) != 0) {
    uVar1 = uVar2;
  }
  uVar2 = 0x10;
  if (*(int *)(param_1 + 0x180) != 0) {
    uVar2 = 0;
  }
  uVar3 = 0x20;
  if (*(int *)(param_1 + 0x1b8) != 0) {
    uVar3 = 0;
  }
  uVar4 = 0x40;
  if (*(int *)(param_1 + 0x1f0) != 0) {
    uVar4 = 0;
  }
  uVar5 = 0x80;
  if (*(int *)(param_1 + 0x2c0) != 0) {
    uVar5 = 0;
  }
  uVar6 = 0x100;
  if (*(int *)(param_1 + 0x308) != 0) {
    uVar6 = 0;
  }
  return uVar3 | uVar2 | uVar4 | uVar5 | uVar6 | uVar1;
}



/* Entry: 1077951a0; end: 1077951d3;  */

void FUN_1077951a0(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107797f98(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077994b4();
  return;
}



/* Entry: 107795f14; end: 107796373;  */

/* WARNING: Possible PIC construction at 0x00010779657c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107796580) */
/* WARNING: Removing unreachable block (ram,0x00010779667c) */
/* WARNING: Removing unreachable block (ram,0x000107796684) */
/* WARNING: Removing unreachable block (ram,0x000107796698) */
/* WARNING: Removing unreachable block (ram,0x000107796588) */
/* WARNING: Removing unreachable block (ram,0x000107796594) */
/* WARNING: Removing unreachable block (ram,0x000107796bf8) */
/* WARNING: Removing unreachable block (ram,0x000107796c0c) */
/* WARNING: Removing unreachable block (ram,0x000107796c14) */
/* WARNING: Removing unreachable block (ram,0x000107797200) */
/* WARNING: Removing unreachable block (ram,0x000107796c1c) */
/* WARNING: Removing unreachable block (ram,0x00010779720c) */
/* WARNING: Removing unreachable block (ram,0x000107796b70) */
/* WARNING: Removing unreachable block (ram,0x000107796b84) */
/* WARNING: Removing unreachable block (ram,0x000107796b8c) */
/* WARNING: Removing unreachable block (ram,0x0001077971b8) */
/* WARNING: Removing unreachable block (ram,0x000107796b94) */
/* WARNING: Removing unreachable block (ram,0x0001077971c4) */
/* WARNING: Removing unreachable block (ram,0x000107796bb4) */
/* WARNING: Removing unreachable block (ram,0x000107796bc8) */
/* WARNING: Removing unreachable block (ram,0x000107796bd0) */
/* WARNING: Removing unreachable block (ram,0x0001077971e8) */
/* WARNING: Removing unreachable block (ram,0x000107796bd8) */
/* WARNING: Removing unreachable block (ram,0x0001077971f4) */
/* WARNING: Removing unreachable block (ram,0x000107796c3c) */
/* WARNING: Removing unreachable block (ram,0x0001077965ac) */
/* WARNING: Removing unreachable block (ram,0x0001077965c0) */
/* WARNING: Removing unreachable block (ram,0x0001077965c8) */
/* WARNING: Removing unreachable block (ram,0x0001077971d0) */
/* WARNING: Removing unreachable block (ram,0x0001077965d0) */
/* WARNING: Removing unreachable block (ram,0x0001077971dc) */
/* WARNING: Removing unreachable block (ram,0x000107797214) */
/* WARNING: Removing unreachable block (ram,0x000107797218) */
/* WARNING: Recovered jumptable eliminated as dead code */

void FUN_107795f14(ulong param_1,ulong param_2,ulong *param_3,ulong param_4,ulong param_5,
                  undefined **param_6,undefined **param_7)

{
  byte bVar1;
  undefined1 uVar2;
  ulong *puVar3;
  long lVar4;
  ulong *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined1 uVar12;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  long extraout_x8_26;
  long extraout_x8_27;
  long extraout_x8_28;
  long extraout_x8_29;
  long extraout_x8_30;
  long extraout_x8_31;
  long extraout_x8_32;
  long extraout_x8_33;
  long extraout_x8_34;
  long extraout_x8_35;
  long extraout_x8_36;
  long extraout_x8_37;
  long extraout_x8_38;
  long extraout_x8_39;
  long extraout_x8_40;
  long extraout_x8_41;
  long extraout_x8_42;
  long extraout_x8_43;
  long extraout_x8_44;
  long extraout_x8_45;
  long extraout_x8_46;
  long extraout_x8_47;
  long extraout_x8_48;
  code *extraout_x9;
  ulong *extraout_x9_00;
  ulong *extraout_x9_01;
  uint uVar13;
  ulong uVar15;
  undefined *puVar16;
  ulong in_register_00005008;
  ulong in_register_00005028;
  undefined1 uStack_1c1;
  undefined1 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined1 uStack_1b0;
  undefined *apuStack_198 [3];
  ulong uStack_180;
  ulong uStack_178;
  undefined *puStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined *apuStack_148 [4];
  undefined1 uStack_128;
  byte bStack_120;
  byte bStack_110;
  byte bStack_100;
  byte bStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  uint uVar14;
  
  puVar3 = &uStack_70;
  puVar5 = param_3;
  func_0x0001077991d0();
  uVar2 = (int)param_5 == 0x30;
  switch(param_5 & 0xffffffff) {
  case 0:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x7f0;
code_r0x0001077961ec:
      FUN_10778b36c(param_3,lVar4,&stack0xffffffffffffffef);
      return;
    }
    break;
  case 1:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x890;
code_r0x000107796308:
      func_0x000107784e48(param_3,lVar4,&stack0xffffffffffffffef);
      return;
    }
    break;
  case 2:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x8f0;
code_r0x0001077961cc:
      func_0x000107797c9c(param_3,lVar4,&stack0xffffffffffffffef);
      return;
    }
    break;
  case 3:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x958;
      goto code_r0x000107796308;
    }
    break;
  case 4:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x9b8;
      goto code_r0x0001077961cc;
    }
    break;
  case 5:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0xa20;
      goto code_r0x000107796308;
    }
    break;
  case 6:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0xa80;
      goto code_r0x0001077961cc;
    }
    break;
  case 7:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0xae8;
      goto code_r0x000107796308;
    }
    break;
  case 8:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0xb48;
      goto code_r0x0001077961cc;
    }
    break;
  case 9:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0xbb0;
      goto code_r0x000107796308;
    }
    break;
  case 10:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0xc10;
      goto code_r0x000107796308;
    }
    break;
  case 0xb:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0xc70;
      goto code_r0x000107796308;
    }
    break;
  case 0xc:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0xcd0;
      goto code_r0x000107796308;
    }
    break;
  case 0xd:
    func_0x000107799248(param_4 + 0x868);
    func_0x000107799218();
    goto LAB_10779635c;
  case 0xe:
    func_0x000107799248(param_4 + 0x8c8);
    func_0x000107799218();
    goto LAB_10779635c;
  case 0xf:
    in_register_00005008 = *(ulong *)(param_4 + 0x938);
    param_1 = *(ulong *)(param_4 + 0x930);
    in_register_00005028 = *(ulong *)(param_4 + 0x948);
    param_2 = *(ulong *)(param_4 + 0x940);
    uStack_50 = *(undefined8 *)(param_4 + 0x950);
    uStack_70 = param_1;
    uStack_68 = in_register_00005008;
    uStack_60 = param_2;
    uStack_58 = in_register_00005028;
    func_0x000107799218();
    goto LAB_10779635c;
  case 0x10:
    in_register_00005008 = *(ulong *)(param_4 + 0x998);
    param_1 = *(ulong *)(param_4 + 0x990);
    in_register_00005028 = *(ulong *)(param_4 + 0x9a8);
    param_2 = *(ulong *)(param_4 + 0x9a0);
    uStack_50 = *(undefined8 *)(param_4 + 0x9b0);
    uStack_70 = param_1;
    uStack_68 = in_register_00005008;
    uStack_60 = param_2;
    uStack_58 = in_register_00005028;
    func_0x000107799218();
    goto LAB_10779635c;
  case 0x11:
    func_0x000107799248(param_4 + 0x9f8);
    func_0x000107799218();
    goto LAB_10779635c;
  case 0x12:
    func_0x000107799248(param_4 + 0xa58);
    func_0x000107799218();
    goto LAB_10779635c;
  case 0x13:
    in_register_00005008 = *(ulong *)(param_4 + 0xac8);
    param_1 = *(ulong *)(param_4 + 0xac0);
    in_register_00005028 = *(ulong *)(param_4 + 0xad8);
    param_2 = *(ulong *)(param_4 + 0xad0);
    uStack_50 = *(undefined8 *)(param_4 + 0xae0);
    uStack_70 = param_1;
    uStack_68 = in_register_00005008;
    uStack_60 = param_2;
    uStack_58 = in_register_00005028;
    func_0x000107799218();
    goto LAB_10779635c;
  case 0x14:
    in_register_00005008 = *(ulong *)(param_4 + 0xb28);
    param_1 = *(ulong *)(param_4 + 0xb20);
    in_register_00005028 = *(ulong *)(param_4 + 0xb38);
    param_2 = *(ulong *)(param_4 + 0xb30);
    uStack_50 = *(undefined8 *)(param_4 + 0xb40);
    uStack_70 = param_1;
    uStack_68 = in_register_00005008;
    uStack_60 = param_2;
    uStack_58 = in_register_00005028;
    func_0x000107799218();
    goto LAB_10779635c;
  case 0x15:
    func_0x000107799248(param_4 + 0xb88);
    func_0x000107799218();
    goto LAB_10779635c;
  case 0x16:
    func_0x000107799248(param_4 + 0xbe8);
    func_0x000107799218();
    goto LAB_10779635c;
  case 0x17:
    func_0x000107799248(param_4 + 0xc48);
    func_0x000107799218();
    goto LAB_10779635c;
  case 0x18:
    func_0x000107799248(param_4 + 0xca8);
    func_0x000107799218();
    goto LAB_10779635c;
  case 0x19:
    func_0x000107799248(param_4 + 0xd08);
    func_0x000107799218();
    goto LAB_10779635c;
  case 0x1a:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x168;
      goto code_r0x000107796308;
    }
    break;
  case 0x1b:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x1a0;
code_r0x0001077962a0:
      func_0x000107785298(param_3,lVar4,&stack0xffffffffffffffef);
      return;
    }
    break;
  case 0x1c:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x1d8;
      goto code_r0x0001077962a0;
    }
    break;
  case 0x1d:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x210;
      goto code_r0x000107796308;
    }
    break;
  case 0x1e:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x248;
      goto code_r0x0001077961ec;
    }
    break;
  case 0x1f:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x2c0;
      goto code_r0x0001077961ec;
    }
    break;
  case 0x20:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x338;
      goto code_r0x000107796308;
    }
    break;
  case 0x21:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x370;
      goto code_r0x000107796308;
    }
    break;
  case 0x22:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x3a8;
      goto code_r0x000107796308;
    }
    break;
  case 0x23:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x3e0;
      goto code_r0x0001077961ec;
    }
    break;
  case 0x24:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x458;
      goto code_r0x0001077961ec;
    }
    break;
  case 0x25:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x4d0;
code_r0x00010779626c:
      func_0x000107797dfc(param_3,lVar4,&stack0xffffffffffffffef);
      return;
    }
    break;
  case 0x26:
    if (*(int *)(param_4 + 0x548) == 0) goto LAB_1077962f4;
    uVar2 = *(int *)(param_4 + 0x548) == 1;
    if ((bool)uVar2) {
      param_4 = (ulong)*(byte *)(param_4 + 0x518);
      func_0x0001077f34cc();
      func_0x00010724ae4c();
      func_0x000107799554();
      uVar12 = 1;
      puVar5 = puVar3;
    }
    else {
      puVar5 = *(ulong **)(param_4 + 0x518);
      func_0x000107799464();
      (*extraout_x9)(&uStack_70);
      func_0x000107799554();
      uVar12 = 2;
    }
    *(undefined1 *)(param_3 + 8) = uVar12;
    func_0x00010779953c();
    goto LAB_10779635c;
  case 0x27:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x550;
      goto code_r0x0001077962a0;
    }
    break;
  case 0x28:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x588;
      goto code_r0x0001077962a0;
    }
    break;
  case 0x29:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x5c0;
      goto code_r0x0001077961ec;
    }
    break;
  case 0x2a:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x638;
      goto code_r0x00010779626c;
    }
    break;
  case 0x2b:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x680;
      goto code_r0x000107796308;
    }
    break;
  case 0x2c:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x6b8;
      goto code_r0x000107796308;
    }
    break;
  case 0x2d:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x6f0;
      goto code_r0x000107796308;
    }
    break;
  case 0x2e:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      func_0x000107793bbc(param_3,param_4 + 0x728,&stack0xffffffffffffffef);
      return;
    }
    break;
  case 0x2f:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x770;
      goto code_r0x00010779626c;
    }
    break;
  case 0x30:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = param_4 + 0x7b8;
      goto code_r0x000107796308;
    }
    break;
  default:
LAB_1077962f4:
    func_0x000107799480();
LAB_10779635c:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      return;
    }
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puStack_78 = &DAT_107796374;
  ppuVar10 = param_6;
  ppuVar11 = param_7;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x0001077991a8();
  uStack_180 = param_4;
  uStack_178 = param_5;
  uStack_c8 = extraout_x8;
  func_0x00010772d2fc(apuStack_148,&uStack_180);
  ppuVar6 = &PTR_DAT_1109d8e90;
  ppuVar9 = (undefined **)&UNK_1109d9328;
  ppuVar8 = apuStack_148;
  FUN_107785358(&PTR_DAT_1109d8e90,&UNK_1109d9328,ppuVar8);
  uVar2 = ppuVar6 == (undefined **)&UNK_1109d9328;
  if ((bool)uVar2) {
code_r0x0001077963e8:
    *(undefined1 *)param_3 = 0;
    *(undefined1 *)(param_3 + 3) = 0;
    goto code_r0x0001077972a8;
  }
  ppuVar7 = apuStack_148;
  ppuVar9 = ppuVar6;
  func_0x000107785400(ppuVar7,ppuVar6);
  if ((int)ppuVar7 != 0) goto code_r0x0001077963e8;
  bVar1 = *(byte *)(ppuVar6 + 1);
  uVar15 = (ulong)bVar1;
  uVar13 = (uint)bVar1;
  uVar14 = (uint)bVar1;
  if (bVar1 < 0x2e) {
    uVar2 = false;
    if ((1L << (uVar15 & 0x3f) & 0x380724001eaaU) == 0) {
      uVar2 = (1L << (uVar15 & 0x3f) & 0x210c0000001U) == 0;
      if ((bool)uVar2) {
code_r0x000107796568:
        if ((1L << (uVar15 & 0x3f) & 0x154U) == 0) goto code_r0x0001077968a4;
code_r0x000107796574:
        func_0x000107799258();
        func_0x0001077990ec();
        puVar16 = &UNK_107796580;
        goto code_r0x000107797a58;
      }
      func_0x0001077993a4();
      puStack_170 = (undefined *)CONCAT71(puStack_170._1_7_,extraout_w8);
      uStack_1b0 = 0;
      func_0x0001077990ec();
      func_0x000107323db4();
      if ((bStack_d0 & 1) == 0) {
        func_0x000107799128();
        if (extraout_x8_04 != 0) {
          func_0x000107799140();
          func_0x000107799224();
          func_0x000107799150();
          goto code_r0x00010779666c;
        }
        goto code_r0x000107796674;
      }
      uVar2 = uVar14 == 0x29;
      if ((bool)uVar2) {
        func_0x00010779929c();
        ppuVar6 = apuStack_148;
        ppuVar9 = (undefined **)(extraout_x8_29 + 0x5c0);
        func_0x00010778be7c(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077994cc();
            func_0x000107799344(extraout_x8_30 + 0x5c8);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x000107799458();
            func_0x000107799344(extraout_x8_40 + 0x5c8);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
      }
      else {
        uVar2 = uVar14 == 0x1e;
        if ((bool)uVar2) {
          func_0x00010779929c();
          ppuVar6 = apuStack_148;
          ppuVar9 = (undefined **)(extraout_x8_23 + 0x248);
          func_0x00010778be7c(ppuVar6,ppuVar9);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
              ppuVar9 = (undefined **)*param_7;
              func_0x000107799278();
              func_0x0001077994cc();
              func_0x000107799344(extraout_x8_24 + 0x250);
              func_0x000107799160();
              func_0x000107799270();
            }
            else {
              func_0x000107799458();
              func_0x000107799344(extraout_x8_37 + 0x250);
            }
            func_0x00010779916c();
            func_0x000107799280();
          }
        }
        else {
          uVar2 = uVar14 == 0x1f;
          if ((bool)uVar2) {
            func_0x00010779929c();
            ppuVar6 = apuStack_148;
            ppuVar9 = (undefined **)(extraout_x8_27 + 0x2c0);
            func_0x00010778be7c(ppuVar6,ppuVar9);
            if (((ulong)ppuVar6 & 1) == 0) {
              if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
                ppuVar9 = (undefined **)*param_7;
                func_0x000107799278();
                func_0x0001077994cc();
                func_0x000107799344(extraout_x8_28 + 0x2c8);
                func_0x000107799160();
                func_0x000107799270();
              }
              else {
                func_0x000107799458();
                func_0x000107799344(extraout_x8_39 + 0x2c8);
              }
              func_0x00010779916c();
              func_0x000107799280();
            }
          }
          else {
            uVar2 = uVar14 == 0x24;
            if ((bool)uVar2) {
              func_0x00010779929c();
              ppuVar6 = apuStack_148;
              ppuVar9 = (undefined **)(extraout_x8_25 + 0x458);
              func_0x00010778be7c(ppuVar6,ppuVar9);
              if (((ulong)ppuVar6 & 1) == 0) {
                if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
                  ppuVar9 = (undefined **)*param_7;
                  func_0x000107799278();
                  func_0x0001077994cc();
                  func_0x000107799344(extraout_x8_26 + 0x460);
                  func_0x000107799160();
                  func_0x000107799270();
                }
                else {
                  func_0x000107799458();
                  func_0x000107799344(extraout_x8_38 + 0x460);
                }
                func_0x00010779916c();
                func_0x000107799280();
              }
            }
            else {
              if (uVar14 != 0) {
                ppuVar7 = apuStack_148;
                func_0x00010732493c(ppuVar7);
                func_0x0001077994ac();
                if (0x22 < uVar14) goto code_r0x0001077968a4;
                uVar2 = (1L << (uVar15 & 0x3f) & 0x724001eaaU) == 0;
                if (!(bool)uVar2) goto code_r0x00010779641c;
                goto code_r0x000107796568;
              }
              func_0x00010779929c();
              ppuVar6 = apuStack_148;
              ppuVar9 = (undefined **)(extraout_x8_01 + 0x7f0);
              func_0x00010778be7c(ppuVar6,ppuVar9);
              if (((ulong)ppuVar6 & 1) == 0) {
                if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
                  ppuVar9 = (undefined **)*param_7;
                  func_0x000107799278();
                  func_0x0001077994cc();
                  func_0x000107799524();
                  func_0x000107799160();
                  func_0x000107799270();
                }
                else {
                  func_0x000107799458();
                  func_0x000107799524();
                }
                func_0x00010779916c();
                func_0x000107799280();
              }
            }
          }
        }
      }
code_r0x000107797294:
      func_0x000107799428();
      param_7 = ppuVar8;
code_r0x000107797298:
      func_0x000107799444();
      func_0x00010732493c();
      goto code_r0x0001077972a0;
    }
code_r0x00010779641c:
    func_0x0001077993a4();
    puStack_170 = (undefined *)CONCAT71(puStack_170._1_7_,1);
    uStack_1b0 = 0;
    func_0x0001077990ec();
    func_0x00010733b904();
    if ((bStack_110 & 1) == 0) {
      func_0x000107799128();
      if (extraout_x8_02 != 0) {
        func_0x000107799140();
        func_0x000107799224();
        func_0x000107799150();
        goto code_r0x000107796550;
      }
      goto code_r0x000107796558;
    }
    uVar2 = uVar14 - 1 == 0xb;
    switch(uVar14 - 1) {
    case 0:
      func_0x00010779929c();
      ppuVar6 = apuStack_148;
      ppuVar9 = (undefined **)(extraout_x8_00 + 0x890);
      func_0x000107786038(ppuVar6,ppuVar9);
      if (((ulong)ppuVar6 & 1) == 0) {
        if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
          ppuVar9 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077992e4(puStack_170 + 0x890);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077992e4(*param_7 + 0x890);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      break;
    case 1:
    case 3:
    case 5:
    case 7:
code_r0x00010779687c:
      ppuVar7 = apuStack_148;
      func_0x00010727e950(ppuVar7);
      func_0x0001077994ac();
      if ((uVar14 < 9) && ((1 << (ulong)(uVar13 & 0x1f) & 0x154U) != 0)) goto code_r0x000107796574;
      goto code_r0x0001077968a4;
    case 2:
      func_0x00010779929c();
      ppuVar6 = apuStack_148;
      ppuVar9 = (undefined **)(extraout_x8_08 + 0x958);
      func_0x000107786038(ppuVar6,ppuVar9);
      if (((ulong)ppuVar6 & 1) == 0) {
        if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
          ppuVar9 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077992e4(puStack_170 + 0x958);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077992e4(*param_7 + 0x958);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      break;
    case 4:
      func_0x00010779929c();
      ppuVar6 = apuStack_148;
      ppuVar9 = (undefined **)(extraout_x8_10 + 0xa20);
      func_0x000107786038(ppuVar6,ppuVar9);
      if (((ulong)ppuVar6 & 1) == 0) {
        if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
          ppuVar9 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077992e4(puStack_170 + 0xa20);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077992e4(*param_7 + 0xa20);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      break;
    case 6:
      func_0x00010779929c();
      ppuVar6 = apuStack_148;
      ppuVar9 = (undefined **)(extraout_x8_06 + 0xae8);
      func_0x000107786038(ppuVar6,ppuVar9);
      if (((ulong)ppuVar6 & 1) == 0) {
        if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
          ppuVar9 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077992e4(puStack_170 + 0xae8);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077992e4(*param_7 + 0xae8);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      break;
    case 8:
      func_0x00010779929c();
      ppuVar6 = apuStack_148;
      ppuVar9 = (undefined **)(extraout_x8_07 + 0xbb0);
      func_0x000107786038(ppuVar6,ppuVar9);
      if (((ulong)ppuVar6 & 1) == 0) {
        if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
          ppuVar9 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077992e4(puStack_170 + 0xbb0);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077992e4(*param_7 + 0xbb0);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      break;
    case 9:
      func_0x00010779929c();
      ppuVar6 = apuStack_148;
      ppuVar9 = (undefined **)(extraout_x8_09 + 0xc10);
      func_0x000107786038(ppuVar6,ppuVar9);
      if (((ulong)ppuVar6 & 1) == 0) {
        if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
          ppuVar9 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077992e4(puStack_170 + 0xc10);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077992e4(*param_7 + 0xc10);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      break;
    case 10:
      func_0x00010779929c();
      ppuVar6 = apuStack_148;
      ppuVar9 = (undefined **)(extraout_x8_05 + 0xc70);
      func_0x000107786038(ppuVar6,ppuVar9);
      if (((ulong)ppuVar6 & 1) == 0) {
        if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
          ppuVar9 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077992e4(puStack_170 + 0xc70);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077992e4(*param_7 + 0xc70);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      break;
    case 0xb:
      func_0x00010779929c();
      ppuVar6 = apuStack_148;
      ppuVar9 = (undefined **)(extraout_x8_11 + 0xcd0);
      func_0x000107786038(ppuVar6,ppuVar9);
      if (((ulong)ppuVar6 & 1) == 0) {
        if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
          ppuVar9 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077992e4(puStack_170 + 0xcd0);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077992e4(*param_7 + 0xcd0);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      break;
    default:
      uVar2 = uVar14 - 0x1a == 0x13;
      switch(uVar14 - 0x1a) {
      case 0:
        func_0x00010779929c();
        ppuVar6 = apuStack_148;
        ppuVar9 = (undefined **)(extraout_x8_03 + 0x168);
        func_0x000107786038(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_170 + 0x168);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x168);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
        break;
      default:
        goto code_r0x00010779687c;
      case 3:
        func_0x00010779929c();
        ppuVar6 = apuStack_148;
        ppuVar9 = (undefined **)(extraout_x8_18 + 0x210);
        func_0x000107786038(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_170 + 0x210);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x210);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
        break;
      case 6:
        func_0x00010779929c();
        ppuVar6 = apuStack_148;
        ppuVar9 = (undefined **)(extraout_x8_20 + 0x338);
        func_0x000107786038(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_170 + 0x338);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x338);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
        break;
      case 7:
        func_0x00010779929c();
        ppuVar6 = apuStack_148;
        ppuVar9 = (undefined **)(extraout_x8_16 + 0x370);
        func_0x000107786038(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_170 + 0x370);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x370);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
        break;
      case 8:
        func_0x00010779929c();
        ppuVar6 = apuStack_148;
        ppuVar9 = (undefined **)(extraout_x8_17 + 0x3a8);
        func_0x000107786038(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_170 + 0x3a8);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x3a8);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
        break;
      case 0x11:
        func_0x00010779929c();
        ppuVar6 = apuStack_148;
        ppuVar9 = (undefined **)(extraout_x8_19 + 0x680);
        func_0x000107786038(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_170 + 0x680);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x680);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
        break;
      case 0x12:
        func_0x00010779929c();
        ppuVar6 = apuStack_148;
        ppuVar9 = (undefined **)(extraout_x8_15 + 0x6b8);
        func_0x000107786038(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_170 + 0x6b8);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x6b8);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
        break;
      case 0x13:
        func_0x00010779929c();
        ppuVar6 = apuStack_148;
        ppuVar9 = (undefined **)(extraout_x8_21 + 0x6f0);
        func_0x000107786038(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_170 + 0x6f0);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x6f0);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
      }
    }
    goto code_r0x0001077971a8;
  }
code_r0x0001077968a4:
  uVar2 = uVar13 - 0x1b == 1;
  if (uVar13 - 0x1b < 2) {
    func_0x000107799258();
    func_0x0001077990ec();
    func_0x00010733e5bc();
    if ((bStack_110 & 1) == 0) {
      func_0x000107799128();
      if (extraout_x8_31 != 0) {
        func_0x000107799140();
        func_0x000107799224();
        func_0x000107799150();
        goto code_r0x000107796e10;
      }
      goto code_r0x000107796e18;
    }
    func_0x00010779929c();
    uVar2 = uVar13 == 0x1b;
    if ((bool)uVar2) {
      ppuVar6 = apuStack_148;
      ppuVar9 = (undefined **)(extraout_x8_12 + 0x1a0);
      func_0x000107785b50(ppuVar6,ppuVar9);
      if (((ulong)ppuVar6 & 1) == 0) {
        if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
          ppuVar9 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x000107799364(puStack_170 + 0x1a0);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x000107799364(*param_7 + 0x1a0);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
    }
    else {
      ppuVar6 = apuStack_148;
      ppuVar9 = (undefined **)(extraout_x8_12 + 0x1d8);
      func_0x000107785b50(ppuVar6,ppuVar9);
      if (((ulong)ppuVar6 & 1) == 0) {
        if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
          ppuVar9 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x000107799364(puStack_170 + 0x1d8);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x000107799364(*param_7 + 0x1d8);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
    }
    goto code_r0x0001077974cc;
  }
  uVar2 = uVar14 - 0x23 == 7;
  switch(uVar14 - 0x23) {
  case 0:
    func_0x0001077993a4();
    puStack_170 = (undefined *)((ulong)puStack_170 & 0xffffffffffffff00);
    uStack_1b0 = 0;
    func_0x0001077990ec();
    func_0x000107323db4();
    if ((bStack_d0 & 1) != 0) {
      func_0x00010779929c();
      ppuVar6 = apuStack_148;
      ppuVar9 = (undefined **)(extraout_x8_13 + 0x3e0);
      func_0x00010778be7c(ppuVar6,ppuVar9);
      if (((ulong)ppuVar6 & 1) == 0) {
        if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
          ppuVar9 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077994cc();
          func_0x000107799344(extraout_x8_14 + 1000);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x000107799458();
          func_0x000107799344(extraout_x8_48 + 1000);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      goto code_r0x000107797294;
    }
    func_0x000107799128();
    if (extraout_x8_41 != 0) {
      func_0x000107799140();
      func_0x000107799224();
      func_0x000107799150();
code_r0x00010779666c:
      func_0x00010779923c();
      func_0x000107799390();
    }
code_r0x000107796674:
    func_0x000107799108();
    param_7 = ppuVar8;
    goto code_r0x000107797298;
  case 1:
  case 4:
  case 5:
  case 6:
    goto code_r0x0001077973f0;
  case 2:
  case 7:
code_r0x000107796efc:
    func_0x000107799258();
    func_0x0001077990ec();
    func_0x00010733d400();
    if ((bStack_100 & 1) == 0) {
      func_0x000107799128();
      if (extraout_x8_34 != 0) {
        func_0x000107799140();
        func_0x000107799224();
        func_0x000107799150();
        func_0x00010779923c();
        func_0x000107799390();
      }
      func_0x000107799108();
    }
    else {
      uVar2 = uVar14 == 0x2f;
      if ((bool)uVar2) {
        func_0x00010779929c();
        ppuVar6 = apuStack_148;
        ppuVar9 = (undefined **)(extraout_x8_43 + 0x770);
        func_0x000107798a18(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x000107799408(puStack_170 + 0x770);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x000107799408(*param_7 + 0x770);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
      }
      else {
        uVar2 = uVar14 == 0x2a;
        if ((bool)uVar2) {
          func_0x00010779929c();
          ppuVar6 = apuStack_148;
          ppuVar9 = (undefined **)(extraout_x8_42 + 0x638);
          func_0x000107798a18(ppuVar6,ppuVar9);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
              ppuVar9 = (undefined **)*param_7;
              func_0x000107799278();
              func_0x000107799408(puStack_170 + 0x638);
              func_0x000107799160();
              func_0x000107799270();
            }
            else {
              func_0x000107799408(*param_7 + 0x638);
            }
            func_0x00010779916c();
            func_0x000107799280();
          }
        }
        else {
          uVar2 = uVar14 == 0x25;
          if (!(bool)uVar2) {
            func_0x00010733d41c(apuStack_148);
            func_0x0001077994ac();
            uVar2 = true;
            if (uVar14 == 0x26) goto code_r0x000107797384;
            goto code_r0x0001077973f0;
          }
          func_0x00010779929c();
          ppuVar6 = apuStack_148;
          ppuVar9 = (undefined **)(extraout_x8_33 + 0x4d0);
          func_0x000107798a18(ppuVar6,ppuVar9);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
              ppuVar9 = (undefined **)*param_7;
              func_0x000107799278();
              func_0x000107799408(puStack_170 + 0x4d0);
              func_0x000107799160();
              func_0x000107799270();
            }
            else {
              func_0x000107799408(*param_7 + 0x4d0);
            }
            func_0x00010779916c();
            func_0x000107799280();
          }
        }
      }
      func_0x000107799428();
    }
    func_0x000107799444();
    func_0x00010733d41c();
    param_7 = ppuVar8;
    goto code_r0x0001077972a0;
  case 3:
code_r0x000107797384:
    func_0x0001077993a4();
    ppuVar6 = apuStack_198;
    ppuVar11 = (undefined **)0x0;
    ppuVar10 = param_7;
    func_0x0001075587c8(apuStack_148,&puStack_170,param_6,ppuVar6,param_7,0,0);
    if ((bStack_110 & 1) == 0) {
      func_0x000107799128();
      ppuVar9 = param_6;
      if (extraout_x8_46 != 0) {
        func_0x000107799140();
        func_0x000107799224();
        func_0x000107799150();
        func_0x00010779923c();
        func_0x000107799390();
        ppuVar9 = param_6;
      }
      func_0x000107799108();
    }
    else {
      func_0x00010779929c();
      ppuVar8 = apuStack_148;
      ppuVar9 = (undefined **)(extraout_x8_44 + 0x518);
      func_0x000107798bfc(ppuVar8,ppuVar9);
      if (((ulong)ppuVar8 & 1) == 0) {
        if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
          ppuVar9 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077994f0(puStack_170);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077994f0(*param_7);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      func_0x000107799428();
    }
    func_0x000107799444();
    func_0x000107797f6c();
    param_7 = ppuVar6;
code_r0x0001077972a0:
    ppuVar6 = apuStack_198;
    goto code_r0x0001077972a4;
  default:
    uVar2 = true;
    if (uVar14 == 0x2f) goto code_r0x000107796efc;
code_r0x0001077973f0:
    uVar2 = uVar14 - 0x27 == 1;
    if (uVar14 - 0x27 < 2) {
      func_0x0001077993a4();
      puStack_170 = (undefined *)((ulong)puStack_170 & 0xffffffffffffff00);
      uStack_1b0 = 0;
      func_0x0001077990ec();
      func_0x00010733e5bc();
      if ((bStack_110 & 1) == 0) {
        func_0x000107799128();
        if (extraout_x8_47 != 0) {
          func_0x000107799140();
          func_0x000107799224();
          func_0x000107799150();
code_r0x000107796e10:
          func_0x00010779923c();
          func_0x000107799390();
        }
code_r0x000107796e18:
        func_0x000107799108();
      }
      else {
        func_0x00010779929c();
        uVar2 = uVar13 == 0x27;
        if ((bool)uVar2) {
          ppuVar6 = apuStack_148;
          ppuVar9 = (undefined **)(extraout_x8_45 + 0x550);
          func_0x000107785b50(ppuVar6,ppuVar9);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
              ppuVar9 = (undefined **)*param_7;
              func_0x000107799278();
              func_0x000107799364(puStack_170 + 0x550);
              func_0x000107799160();
              func_0x000107799270();
            }
            else {
              func_0x000107799364(*param_7 + 0x550);
            }
            func_0x00010779916c();
            func_0x000107799280();
          }
        }
        else {
          ppuVar6 = apuStack_148;
          ppuVar9 = (undefined **)(extraout_x8_45 + 0x588);
          func_0x000107785b50(ppuVar6,ppuVar9);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
              ppuVar9 = (undefined **)*param_7;
              func_0x000107799278();
              func_0x000107799364(puStack_170 + 0x588);
              func_0x000107799160();
              func_0x000107799270();
            }
            else {
              func_0x000107799364(*param_7 + 0x588);
            }
            func_0x00010779916c();
            func_0x000107799280();
          }
        }
code_r0x0001077974cc:
        func_0x000107799428();
      }
      func_0x000107799444();
      func_0x00010733e5d8();
      param_7 = ppuVar8;
      goto code_r0x0001077972a0;
    }
    uVar2 = uVar14 == 0x30;
    if ((bool)uVar2) {
      func_0x0001077993a4();
      puStack_170 = (undefined *)((ulong)puStack_170 & 0xffffffffffffff00);
      uStack_1b0 = 0;
      func_0x0001077990ec();
      func_0x00010733b904();
      if ((bStack_110 & 1) == 0) {
        func_0x000107799128();
        if (extraout_x8_36 != 0) {
          func_0x000107799140();
          func_0x000107799224();
          func_0x000107799150();
code_r0x000107796550:
          func_0x00010779923c();
          func_0x000107799390();
        }
code_r0x000107796558:
        func_0x000107799108();
        param_7 = ppuVar8;
      }
      else {
        func_0x00010779929c();
        ppuVar6 = apuStack_148;
        ppuVar9 = (undefined **)(extraout_x8_32 + 0x7b8);
        func_0x000107786038(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_170 + 0x7b8);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x7b8);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
code_r0x0001077971a8:
        func_0x000107799428();
        param_7 = ppuVar8;
      }
      func_0x000107799444();
      func_0x00010727e950();
      goto code_r0x0001077972a0;
    }
    uVar2 = uVar13 == 0x2e;
    if ((bool)uVar2) {
      func_0x000107799258();
      func_0x0001077990ec();
      func_0x0001077939c8();
      if ((bStack_100 & 1) == 0) {
        func_0x000107799128();
        if (extraout_x8_35 != 0) {
          func_0x000107799140();
          func_0x000107799224();
          func_0x000107799150();
          func_0x00010779923c();
          func_0x000107799390();
        }
        func_0x000107799108();
      }
      else {
        func_0x00010779929c();
        ppuVar6 = apuStack_148;
        ppuVar9 = (undefined **)(extraout_x8_22 + 0x728);
        func_0x00010779465c(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x000107799560(puStack_170);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x000107799560(*param_7);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
        func_0x000107799428();
      }
      func_0x000107799444();
      func_0x000107793d90();
      param_7 = ppuVar8;
      goto code_r0x0001077972a0;
    }
    puStack_170 = (undefined *)0x0;
    uStack_168 = 0;
    uStack_160 = 0;
    ppuVar9 = &puStack_170;
    func_0x00010754bb48(apuStack_148,param_6,ppuVar9,param_7);
    if ((bStack_120 & 1) == 0) {
      param_3[1] = uStack_168;
      *param_3 = (ulong)puStack_170;
      param_3[2] = uStack_160;
      uStack_168 = 0;
      uStack_160 = 0;
      puStack_170 = (undefined *)0x0;
      uVar12 = 1;
      goto code_r0x000107797790;
    }
  }
  uVar2 = uVar13 - 0xd == 0xc;
  switch(uVar13 - 0xd) {
  case 0:
    if ((puVar5[2] != 0) && (*(long *)(puVar5[2] + 8) == 0)) {
      *(undefined1 *)(puVar5[1] + 0x888) = uStack_128;
      break;
    }
    func_0x0001077992ec();
    apuStack_198[0][0x888] = uStack_128;
code_r0x000107797770:
    func_0x000107799398();
    extraout_x9_00[1] = in_register_00005008;
    *extraout_x9_00 = param_1;
    extraout_x9_00[3] = in_register_00005028;
    extraout_x9_00[2] = param_2;
code_r0x000107797778:
    ppuVar9 = apuStack_198;
    func_0x0001077989d4(puVar5 + 1,ppuVar9);
    func_0x000107797b84(apuStack_198);
    goto code_r0x00010779778c;
  case 1:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x0001077992ec();
      apuStack_198[0][0x8e8] = uStack_128;
      goto code_r0x000107797770;
    }
    *(undefined1 *)(puVar5[1] + 0x8e8) = uStack_128;
    break;
  case 2:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x0001077992ec();
      func_0x000107799398(apuStack_198[0]);
      func_0x000107799594();
      goto code_r0x000107797778;
    }
    func_0x000107799398(puVar5[1]);
    func_0x000107799594();
    goto code_r0x00010779778c;
  case 3:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x0001077992ec();
      func_0x000107799398(apuStack_198[0]);
      func_0x0001077995f0();
      goto code_r0x000107797778;
    }
    func_0x000107799398(puVar5[1]);
    func_0x0001077995f0();
    goto code_r0x00010779778c;
  case 4:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x0001077992ec();
      apuStack_198[0][0xa18] = uStack_128;
      goto code_r0x000107797770;
    }
    *(undefined1 *)(puVar5[1] + 0xa18) = uStack_128;
    break;
  case 5:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x0001077992ec();
      apuStack_198[0][0xa78] = uStack_128;
      goto code_r0x000107797770;
    }
    *(undefined1 *)(puVar5[1] + 0xa78) = uStack_128;
    break;
  case 6:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x0001077992ec();
      func_0x000107799398(apuStack_198[0]);
      func_0x0001077995bc();
      goto code_r0x000107797778;
    }
    func_0x000107799398(puVar5[1]);
    func_0x0001077995bc();
    goto code_r0x00010779778c;
  case 7:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x0001077992ec();
      func_0x000107799398(apuStack_198[0]);
      func_0x0001077995dc();
      goto code_r0x000107797778;
    }
    func_0x000107799398(puVar5[1]);
    func_0x0001077995dc();
    goto code_r0x00010779778c;
  case 8:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x0001077992ec();
      apuStack_198[0][0xba8] = uStack_128;
      goto code_r0x000107797770;
    }
    *(undefined1 *)(puVar5[1] + 0xba8) = uStack_128;
    break;
  case 9:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x0001077992ec();
      apuStack_198[0][0xc08] = uStack_128;
      goto code_r0x000107797770;
    }
    *(undefined1 *)(puVar5[1] + 0xc08) = uStack_128;
    break;
  case 10:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x0001077992ec();
      apuStack_198[0][0xc68] = uStack_128;
      goto code_r0x000107797770;
    }
    *(undefined1 *)(puVar5[1] + 0xc68) = uStack_128;
    break;
  case 0xb:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x0001077992ec();
      apuStack_198[0][0xcc8] = uStack_128;
      goto code_r0x000107797770;
    }
    *(undefined1 *)(puVar5[1] + 0xcc8) = uStack_128;
    break;
  case 0xc:
    if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) != 0)) {
      func_0x0001077992ec();
      apuStack_198[0][0xd28] = uStack_128;
      goto code_r0x000107797770;
    }
    *(undefined1 *)(puVar5[1] + 0xd28) = uStack_128;
    break;
  default:
    goto code_r0x00010779778c;
  }
  func_0x000107799398();
  extraout_x9_01[1] = in_register_00005008;
  *extraout_x9_01 = param_1;
  extraout_x9_01[3] = in_register_00005028;
  extraout_x9_01[2] = param_2;
code_r0x00010779778c:
  func_0x000107799428();
  uVar12 = extraout_w8_00;
code_r0x000107797790:
  *(undefined1 *)(param_3 + 3) = uVar12;
  ppuVar6 = &puStack_170;
code_r0x0001077972a4:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar6);
  ppuVar8 = param_7;
code_r0x0001077972a8:
  func_0x0001077990c8(uStack_c8);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077995d0();
  func_0x00010733e5d8();
  ppuVar7 = apuStack_198;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar7);
  puVar16 = &UNK_107797a58;
  func_0x00010779934c();
code_r0x000107797a58:
  ppuStack_1c0 = &puStack_80;
  puStack_1b8 = puVar16;
  func_0x000107555700(&uStack_1c1,ppuVar7,ppuVar9,ppuVar8,*(undefined1 *)ppuVar10,
                      *(undefined1 *)ppuVar11);
  return;
}



/* Entry: 107797d18; end: 107797db7;  */

/* WARNING: Possible PIC construction at 0x000107797e4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107797e50) */
/* WARNING: Removing unreachable block (ram,0x000107797e70) */
/* WARNING: Removing unreachable block (ram,0x000107797e68) */

undefined8 * FUN_107797d18(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar6;
  undefined8 *******pppppppuVar7;
  undefined *puVar8;
  undefined1 auStack_220 [16];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [64];
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 ******ppppppuStack_190;
  undefined *puStack_188;
  undefined1 auStack_178 [72];
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 ******ppppppuStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [80];
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *****pppppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  double dStack_70;
  undefined8 uStack_38;
  
  func_0x0001077991a8();
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  puVar3 = &uStack_90;
  puVar5 = (undefined8 *)0x3;
  uStack_38 = extraout_x8;
  func_0x0001072ac134();
  for (lVar6 = 0; uVar2 = lVar6 == 0xc, !(bool)uVar2; lVar6 = lVar6 + 4) {
    dStack_70 = (double)*(float *)((long)param_1 + lVar6);
    uStack_78 = 3;
    func_0x000107799574();
    func_0x000107799450();
  }
  func_0x000107799530();
  func_0x0001077993b0();
  func_0x0001077994c4();
  func_0x0001077990c8(uStack_38);
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = puVar3;
  func_0x0001077994c4();
  func_0x00010779934c();
  puVar1 = auStack_110;
  puStack_a8 = &UNK_107797db8;
  pppppppuVar7 = (undefined8 *******)&pppppuStack_b0;
  puStack_c0 = param_1;
  puStack_b8 = puVar3;
  pppppuStack_b0 = (undefined8 *****)&stack0xfffffffffffffff0;
  func_0x0001077991a8();
  func_0x0001077992bc();
  func_0x000107799434();
  func_0x0001077992a8();
  func_0x000104c32a18();
  func_0x0001077992f4(2);
  func_0x0001077990b0();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    puVar8 = &UNK_107797dfc;
    __Unwind_Resume();
    if (*(int *)(puVar4 + 8) == 0) {
      extraout_x8_00[8] = 0;
      extraout_x8_00[5] = 0;
      extraout_x8_00[4] = 0;
      extraout_x8_00[7] = 0;
      extraout_x8_00[6] = 0;
      extraout_x8_00[1] = 0;
      *extraout_x8_00 = 0;
      extraout_x8_00[3] = 0;
      extraout_x8_00[2] = 0;
      *(undefined4 *)extraout_x8_00 = 7;
      return puVar4;
    }
    uVar2 = 0;
    if (*(int *)(puVar4 + 8) == 1) {
      puStack_118 = &UNK_107797dfc;
      puStack_130 = param_1;
      puStack_128 = puVar3;
      ppppppuStack_120 = pppppppuVar7;
      func_0x0001077991a8();
      puVar1 = auStack_220;
      uStack_1a8 = 3;
      puStack_188 = &UNK_107797e50;
      pppppppuVar7 = &ppppppuStack_190;
      puVar5 = puVar4;
      lStack_1b0 = lVar6;
      puStack_1a0 = param_1;
      puStack_198 = puVar3;
      ppppppuStack_190 = &ppppppuStack_120;
      func_0x0001077991a8(auStack_178);
      uStack_1b8 = extraout_x8_01;
      uStack_208 = 0;
      uStack_200 = 0;
      uStack_210 = 0;
      puVar3 = &uStack_210;
      func_0x0001072ac134(puVar3,(((long *)*puVar5)[1] - *(long *)*puVar5) / 0x38);
      puVar5 = (undefined8 *)((undefined8 *)*puVar4)[1];
      for (param_1 = *(undefined8 **)*puVar4; uVar2 = param_1 == puVar5, !(bool)uVar2;
          param_1 = param_1 + 7) {
        puVar3 = param_1;
        func_0x00010778b3e8(auStack_1f8);
        func_0x000107799574();
        func_0x000107799450();
      }
      func_0x000107799530();
      func_0x0001077993b0();
      func_0x0001077994c4();
      func_0x0001077990c8(uStack_1b8);
      if ((bool)uVar2) {
        return puVar3;
      }
      ___stack_chk_fail();
      puVar5 = puVar3;
      func_0x0001077994c4();
      puVar8 = &UNK_107797f28;
      func_0x00010779934c();
    }
    *(undefined8 **)(puVar1 + -0x20) = param_1;
    *(undefined8 **)(puVar1 + -0x18) = puVar3;
    *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar7;
    *(undefined **)(puVar1 + -8) = puVar8;
    func_0x0001077991a8();
    func_0x0001077992bc();
    func_0x000107799434();
    func_0x0001077992a8();
    func_0x000104c32a18();
    func_0x0001077992f4(2);
    func_0x0001077990b0();
    puVar4 = puVar5;
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      __Unwind_Resume();
      *(undefined8 **)(puVar1 + -0x90) = param_1;
      *(undefined8 **)(puVar1 + -0x88) = puVar3;
      *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x10;
      *(undefined **)(puVar1 + -0x78) = &UNK_107797f6c;
      if (*(char *)(puVar5 + 7) == '\x01') {
        func_0x00010779954c();
      }
      return puVar5;
    }
  }
  return puVar4;
}



/* Entry: 107797fbc; end: 107798043;  */

/* WARNING: Possible PIC construction at 0x000107797fe8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107797fec) */
/* WARNING: Removing unreachable block (ram,0x000107798028) */
/* WARNING: Removing unreachable block (ram,0x000107798040) */
/* WARNING: Removing unreachable block (ram,0x000107798020) */
/* WARNING: Removing unreachable block (ram,0x00010779949c) */

undefined1 * FUN_107797fbc(void)

{
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  func_0x0001077991a8();
  uStack_48 = 1;
  func_0x00010779806c();
  return auStack_50;
}



/* Entry: 107798148; end: 107798167;  */

void FUN_107798148(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d9338;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107798494; end: 1077984b7;  */

void FUN_107798494(void)

{
  func_0x0001077992d0();
  func_0x000107799328();
  return;
}



/* Entry: 10779861c; end: 10779863b;  */

void FUN_10779861c(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x00010779863c(&uStack_18);
  return;
}



/* Entry: 1077987c4; end: 1077987e7;  */

void FUN_1077987c4(void)

{
  func_0x000107799334();
  func_0x0001073f1aa4();
  func_0x00010779941c();
  func_0x0001077992d0();
  func_0x000107799328();
  return;
}



/* Entry: 107798924; end: 1077989a7;  */

void FUN_107798924(void)

{
  undefined1 uStack_21;
  
  func_0x00010779894c(&uStack_21);
  func_0x00010779917c();
  return;
}



/* Entry: 107798b14; end: 107798b3f;  */

void FUN_107798b14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    lStack_20 = param_1;
    uStack_18 = param_3;
    func_0x000107798b40(&lStack_20);
  }
  return;
}



/* Entry: 107798c4c; end: 107798c67;  */

undefined8 FUN_107798c4c(void)

{
  return 1;
}



/* Entry: 107798f78; end: 107798fcb;  */

void FUN_107798f78(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x38) != -1 || *(int *)(param_2 + 0x38) != -1) {
    if (*(int *)(param_2 + 0x38) == -1) {
      if (*(uint *)(param_1 + 0x38) != 0xffffffff) {
        func_0x0001073e677c((&PTR_DAT_1109ac9f0)[*(uint *)(param_1 + 0x38)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
      return;
    }
    func_0x000107799410();
  }
  return;
}



/* Entry: 107799980; end: 1077999a3;  */

undefined ** FUN_107799980(void)

{
  return &PTR_DAT_1109d8de8;
}



/* Entry: 107799cb4; end: 10779a737;  */

void FUN_107799cb4(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined1 in_ZR;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 extraout_x8;
  code *extraout_x9;
  code *extraout_x9_00;
  code *extraout_x9_01;
  code *extraout_x9_02;
  code *extraout_x9_03;
  code *extraout_x9_04;
  code *extraout_x9_05;
  code *extraout_x9_06;
  code *extraout_x9_07;
  code *extraout_x9_08;
  code *extraout_x9_09;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uStack_4f0;
  undefined1 auStack_4d0 [24];
  undefined1 auStack_4b8 [24];
  undefined1 auStack_4a0 [24];
  undefined1 auStack_488 [24];
  undefined1 auStack_470 [24];
  undefined1 auStack_458 [24];
  long lStack_440;
  ulong uStack_438;
  ulong auStack_430 [2];
  undefined1 auStack_420 [8];
  undefined1 auStack_418 [48];
  char cStack_3e8;
  uint uStack_2f0;
  byte bStack_2e8;
  undefined1 auStack_2e0 [16];
  char cStack_2d0;
  byte bStack_2a8;
  long alStack_2a0 [13];
  undefined1 auStack_238 [296];
  int iStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [16];
  byte bStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 *apuStack_a8 [2];
  long lStack_98;
  undefined8 uStack_80;
  
  plVar6 = param_2;
  func_0x00010779b9e8();
  plVar7 = plVar6 + 1;
  plVar2 = plVar7;
  uStack_80 = extraout_x8;
  (**(code **)(*plVar6 + 0x10))();
  if ((int)plVar2 == 0) {
    plVar6 = plVar7;
    (**(code **)(*param_2 + 0x18))();
    if (((ulong)plVar6 & 1) == 0) {
      func_0x00010779ba84(auStack_2e0);
      func_0x00010779bb20();
      func_0x0001004c3cd0(auStack_420);
      func_0x00010779bb5c();
      func_0x00010779ba7c();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_2a0);
      func_0x00010779ba1c();
      func_0x00010779ba24();
      func_0x00010779bb14();
      goto LAB_10779a4bc;
    }
    lStack_440 = 0;
    uStack_438 = 0;
    auStack_430[0] = 0;
    plVar2 = plVar7;
    (**(code **)(*param_2 + 0x20))();
    func_0x0001074dfa70(&lStack_440,plVar2);
    uStack_4f0 = 0xff800000;
    for (plVar6 = (long *)0x0; in_ZR = plVar2 == plVar6, !(bool)in_ZR;
        plVar6 = (long *)((long)plVar6 + 1)) {
      (**(code **)(*param_2 + 0x28))(&lStack_b8,plVar7,plVar6);
      uVar3 = 0;
      (**(code **)(lStack_b8 + 0x30))();
      if ((uVar3 & 1) == 0) {
        func_0x00010779b984();
        func_0x00010779ba84(auStack_d0);
        func_0x00010779bb20();
        func_0x0001004c3cd0(apuStack_a8);
        func_0x00010779bb88();
        func_0x00010048a6c8(auStack_2e0,apuStack_a8);
        func_0x00010779baf4(auStack_e8);
        func_0x00010533a9c0(auStack_420,auStack_2e0,auStack_e8);
        func_0x00010779bb5c();
        func_0x00010779ba7c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_2a0);
        func_0x00010779ba1c();
        func_0x00010779ba08();
        func_0x00010779ba24();
        func_0x00010779b9f8();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
        func_0x00010779bb14();
LAB_10779a4a8:
        func_0x00010779bb68();
        goto LAB_10779a4b4;
      }
      iStack_110 = 0;
      alStack_2a0[1] = 0;
      alStack_2a0[0] = 0;
      alStack_2a0[3] = 0;
      alStack_2a0[2] = 0;
      alStack_2a0[5] = 0;
      alStack_2a0[4] = 0;
      alStack_2a0[7] = 0;
      alStack_2a0[6] = 0;
      alStack_2a0[9] = 0;
      alStack_2a0[8] = 0;
      alStack_2a0[0xb] = 0;
      alStack_2a0[10] = 0;
      uStack_fc = 0x3f800000;
      uStack_100 = 0x3f800000;
      uStack_104 = 0x7f800000;
      uStack_108 = 0xff800000;
      uStack_f8 = 0x3f800000;
      uVar8 = uStack_4f0;
      func_0x00010779ba10();
      (*extraout_x9)(auStack_2e0,auStack_b0,&DAT_10f68f148);
      in_ZR = 0;
      if (cStack_2d0 == '\x01') {
        func_0x00010779ba8c(auStack_420);
        in_ZR = cStack_3e8 == '\x01';
        if ((bool)in_ZR) {
          func_0x00010779bb44(apuStack_a8);
          func_0x000100066230(alStack_2a0,apuStack_a8);
          func_0x00010779b9f8();
        }
        func_0x00010779ba74();
      }
      func_0x0001072f5f4c(auStack_2e0);
      func_0x00010779ba10();
      (*extraout_x9_00)(auStack_d0,auStack_b0,&DAT_10f6389e8);
      if ((bStack_c0 & 1) == 0) {
        func_0x00010779b984();
        func_0x00010779ba84(auStack_458);
        func_0x00010779bb20();
        func_0x0001004c3cd0(auStack_e8);
        func_0x00010779bb88();
        func_0x00010048a6c8(apuStack_a8,auStack_e8);
        func_0x00010779baf4(auStack_470);
        func_0x00010533a9c0(auStack_2e0,apuStack_a8,auStack_470);
        func_0x00010048a6c8(auStack_420,auStack_2e0,&UNK_10f428fe5);
        func_0x00010779ba7c();
        func_0x00010779ba1c();
        func_0x00010779ba24();
        func_0x00010779ba54();
        func_0x00010779b9f8();
        func_0x00010779ba08();
        func_0x00010779ba4c();
        func_0x00010779bb14();
LAB_10779a49c:
        func_0x0001072f5f4c(auStack_d0);
        func_0x00010779bb3c();
        goto LAB_10779a4a8;
      }
      func_0x00010779ba8c(auStack_2e0);
      if ((bStack_2a8 & 1) == 0) {
        func_0x00010779b984();
        func_0x00010779ba84(auStack_470);
        func_0x00010779bb20();
        func_0x0001004c3cd0(auStack_458);
        func_0x00010779bb88();
        func_0x00010048a6c8(auStack_e8,auStack_458);
        func_0x00010779baf4(auStack_488);
        func_0x00010533a9c0(apuStack_a8,auStack_e8,auStack_488);
        func_0x00010048a6c8(auStack_420,apuStack_a8,&UNK_10f429002);
        func_0x00010779ba7c();
        func_0x00010779ba1c();
        func_0x00010779b9f8();
        func_0x00010779bae0();
        func_0x00010779ba08();
        func_0x00010779ba4c();
        func_0x00010779ba54();
        func_0x00010779bb14();
        func_0x00010779bb2c();
        goto LAB_10779a49c;
      }
      func_0x00010724ef84(auStack_420,auStack_2e0);
      func_0x000100066230(alStack_2a0 + 3,auStack_420);
      func_0x00010779ba1c();
      func_0x00010779ba10();
      (*extraout_x9_01)(apuStack_a8,auStack_b0,&DAT_10f311774);
      if ((char)lStack_98 == '\x01') {
        func_0x00010779ba8c(auStack_420);
        if (cStack_3e8 == '\x01') {
          func_0x00010779bb44(auStack_e8);
          func_0x000100066230(alStack_2a0 + 6,auStack_e8);
          func_0x00010779ba08();
        }
        func_0x00010779ba74();
      }
      func_0x0001072f5f4c(apuStack_a8);
      func_0x00010779ba10();
      (*extraout_x9_02)(apuStack_a8,auStack_b0,&DAT_10f3b93c3);
      in_ZR = 0;
      if ((char)lStack_98 == '\x01') {
        func_0x00010779ba8c(auStack_420);
        in_ZR = cStack_3e8 == '\x01';
        if ((bool)in_ZR) {
          func_0x00010779bb44(auStack_e8);
          func_0x000100066230(alStack_2a0 + 9,auStack_e8);
          func_0x00010779ba08();
        }
        func_0x00010779ba74();
      }
      func_0x0001072f5f4c(apuStack_a8);
      func_0x00010779ba10();
      func_0x00010779ba94();
      uVar3 = 0;
      (*extraout_x9_03)();
      func_0x00010779bae8();
      if ((bool)in_ZR) {
        func_0x00010779bad4();
        func_0x00010779ba5c();
        if ((uVar3 & 1) != 0) {
          func_0x00010779bab8();
          uStack_108 = uVar8;
        }
      }
      func_0x00010779ba2c();
      func_0x00010779ba10();
      func_0x00010779ba94();
      uVar3 = 0;
      (*extraout_x9_04)();
      func_0x00010779bae8();
      if ((bool)in_ZR) {
        func_0x00010779bad4();
        func_0x00010779ba5c();
        if ((uVar3 & 1) != 0) {
          func_0x00010779bab8();
          uStack_104 = uVar8;
        }
      }
      func_0x00010779ba2c();
      func_0x00010779ba10();
      func_0x00010779ba94();
      puVar5 = &DAT_10f2ca5f5;
      (*extraout_x9_05)();
      func_0x00010779bae8();
      if ((bool)in_ZR) {
        func_0x00010779bad4();
        func_0x00010779ba5c();
        if (((ulong)puVar5 & 1) != 0) {
          func_0x00010779bab8();
          uStack_100 = uVar8;
        }
      }
      func_0x00010779ba2c();
      func_0x00010779ba10();
      func_0x00010779ba94();
      uVar3 = 0;
      (*extraout_x9_06)();
      func_0x00010779bae8();
      if ((bool)in_ZR) {
        func_0x00010779bad4();
        func_0x00010779ba5c();
        if ((uVar3 & 1) != 0) {
          func_0x00010779bab8();
          uStack_fc = uVar8;
        }
      }
      func_0x00010779ba2c();
      func_0x00010779ba10();
      func_0x00010779ba94();
      puVar5 = &UNK_10f429025;
      (*extraout_x9_07)();
      func_0x00010779bae8();
      if ((bool)in_ZR) {
        func_0x00010779bad4();
        func_0x00010779ba5c();
        if (((ulong)puVar5 & 1) != 0) {
          func_0x00010779bab8();
          uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar8);
        }
      }
      func_0x00010779ba2c();
      func_0x00010779ba10();
      func_0x00010779ba94();
      uVar3 = 0;
      (*extraout_x9_08)();
      func_0x00010779bae8();
      if ((bool)in_ZR) {
        func_0x00010779bad4();
        func_0x00010779ba5c();
        if ((uVar3 & 1) != 0) {
          func_0x00010779bab8();
          uStack_f8 = CONCAT44(uVar8,(undefined4)uStack_f8);
        }
      }
      func_0x00010779ba2c();
      func_0x00010779ba10();
      (*extraout_x9_09)(auStack_e8,auStack_b0,&DAT_10f2d99b4);
      func_0x0001077b0394(auStack_420,alStack_2a0 + 3,auStack_e8,param_3,param_4);
      bVar1 = bStack_2e8;
      if ((bStack_2e8 & 1) == 0) {
        func_0x00010779ba84(auStack_4b8);
        func_0x00010779bb20(auStack_4a0);
        func_0x0001004c3cd0();
        func_0x00010779bb88(auStack_488,auStack_4a0);
        func_0x00010048a6c8();
        func_0x00010779baf4(auStack_4d0);
        func_0x00010533a9c0(auStack_470,auStack_488,auStack_4d0);
        func_0x00010048a6c8(auStack_458,auStack_470,&UNK_10f42903a);
        func_0x000100610910(apuStack_a8,auStack_458,param_3);
        func_0x00010779ba7c();
        func_0x00010779b9f8();
        func_0x00010779ba4c();
        func_0x00010779ba54();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4d0);
        func_0x00010779bae0();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4a0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4b8);
      }
      else {
        if (iStack_110 != -1 || uStack_2f0 != 0xffffffff) {
          if (uStack_2f0 == 0xffffffff) {
            func_0x0001073e63b0(auStack_238);
          }
          else {
            apuStack_a8[0] = auStack_238;
            (*(code *)(&PTR_DAT_1109d96c0)[uStack_2f0])(apuStack_a8,auStack_238,auStack_418);
          }
        }
        in_ZR = uStack_438 == auStack_430[0];
        if (uStack_438 < auStack_430[0]) {
          func_0x0001074e1328(uStack_438,alStack_2a0);
          uStack_438 = uStack_438 + 0x1b0;
        }
        else {
          plVar4 = &lStack_440;
          func_0x0001074e19e0(plVar4,(long)(uStack_438 - lStack_440) / 0x1b0 + 1);
          func_0x0001074e11bc(apuStack_a8,plVar4,(long)(uStack_438 - lStack_440) / 0x1b0,auStack_430
                             );
          func_0x0001074e1328(lStack_98,alStack_2a0);
          lStack_98 = lStack_98 + 0x1b0;
          func_0x0001074e113c(&lStack_440,apuStack_a8);
          uVar3 = uStack_438;
          func_0x0001074e1640(apuStack_a8);
          uStack_438 = uVar3;
        }
      }
      func_0x00010779b654(auStack_420);
      func_0x0001072f5f4c(auStack_e8);
      func_0x00010779bb2c();
      func_0x0001072f5f4c(auStack_d0);
      func_0x00010779bb3c();
      func_0x00010779bb68();
      if (bVar1 == 0) {
        func_0x00010779b984();
        goto LAB_10779a4b4;
      }
    }
    param_1[1] = uStack_438;
    *param_1 = lStack_440;
    param_1[2] = auStack_430[0];
    uStack_438 = 0;
    auStack_430[0] = 0;
    lStack_440 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
LAB_10779a4b4:
    plVar6 = &lStack_440;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    alStack_2a0[2] = 0;
    alStack_2a0[0] = 0;
    alStack_2a0[1] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    plVar6 = alStack_2a0;
  }
  func_0x0001073e6588(plVar6);
LAB_10779a4bc:
  func_0x00010779b9a0(uStack_80);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010779b9f8();
    func_0x00010779bae0();
    func_0x00010779ba08();
    func_0x00010779ba4c();
    func_0x00010779ba54();
    func_0x00010779bb2c();
    do {
      func_0x0001072f5f4c(auStack_d0);
      func_0x00010779bb3c();
      func_0x00010779bb68();
      func_0x0001073e6588(&lStack_440);
      func_0x00010779baa0();
      func_0x00010779b970();
    } while( true );
  }
  return;
}


