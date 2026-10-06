/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108790114; end: 1087901e3;  */

bool FUN_108790114(long param_1)

{
  param_1 = param_1 + 0x18;
  FUN_108794e0c(param_1);
  return param_1 != 0;
}



/* Entry: 1087901e4; end: 108790207;  */

void FUN_1087901e4(long param_1)

{
  func_0x000107c334f0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108790208; end: 10879031b;  */

void FUN_108790208(void)

{
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x00010879630c();
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_60 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  FUN_10879031c();
  if ((lStack_48 != lStack_40) || (lStack_60 != lStack_58)) {
    FUN_10878f930();
  }
  FUN_1087904b4();
  FUN_108790514();
  func_0x000108791c84(&lStack_60);
  func_0x000108791d1c(&lStack_48);
  return;
}



/* Entry: 10879031c; end: 1087904b3;  */

void FUN_10879031c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_e28 [664];
  undefined1 auStack_b90 [424];
  undefined1 auStack_9e8 [424];
  char cStack_840;
  long alStack_838 [83];
  byte bStack_5a0;
  long alStack_598 [83];
  byte bStack_300;
  undefined1 auStack_2f8 [680];
  
  FUN_10886986c(auStack_2f8,**(undefined8 **)(param_1 + 0x10));
  FUN_1086d5044(alStack_598,auStack_2f8);
  _bzero(alStack_838,0x2a0);
  while ((((bStack_300 & 1) != 0 || ((bStack_5a0 & 1) != 0)) && (alStack_598[0] != alStack_838[0])))
  {
    plVar1 = alStack_598;
    FUN_1086d505c();
    FUN_108869aa4(auStack_9e8,**(undefined8 **)(param_1 + 0x10),*plVar1);
    if (0x1b < *(uint *)(plVar1 + 0x14) ||
        (1 << (ulong)(*(uint *)(plVar1 + 0x14) & 0x1f) & 0xe483e80U) == 0) {
      if (cStack_840 == '\x01') {
        FUN_1086d5190(auStack_e28,plVar1);
        func_0x000107c28970(auStack_b90,auStack_9e8);
        FUN_108790654(param_3,auStack_e28);
        FUN_108791afc(auStack_e28);
      }
      else {
        FUN_1087907cc(param_4,plVar1);
      }
    }
    func_0x000107c288dc(auStack_9e8);
    FUN_10879579c(alStack_598);
  }
  func_0x0001087963d0(alStack_838);
  func_0x0001087963d0(alStack_598);
  FUN_1086d4da0(auStack_2f8);
  return;
}



/* Entry: 1087904b4; end: 108790513;  */

undefined8
FUN_1087904b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_108791418();
  FUN_10878f97c(param_1,uVar1,param_4,param_6,param_5);
  return uVar1;
}



/* Entry: 108790514; end: 108790653;  */

void FUN_108790514(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  if ((param_2 == 0) || (0 < (int)param_3)) {
    uStack_70 = 0;
    uStack_68 = 0;
    ppuStack_80 = &PTR_FUN_110a6f328;
    uStack_78 = 0;
    uStack_60 = 10;
    func_0x000107c278b8(auStack_98,&UNK_10f4ba752);
    pppuVar1 = &ppuStack_80;
    FUN_1087915bc(pppuVar1,auStack_98,(int)param_3 != 0 || param_2 != 0);
    func_0x000107c278b8(auStack_b0,&UNK_10f4ba76d);
    func_0x000107c28af4(param_3);
    FUN_108791610(pppuVar1,auStack_b0,param_3);
    FUN_108791a34(auStack_58,pppuVar1);
    func_0x000108796550();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
    FUN_108788618(&ppuStack_80);
    func_0x000108796764();
    FUN_108791a34(auStack_d8,auStack_58);
    func_0x000108796678();
    func_0x00010879634c();
    FUN_108788618(auStack_d8);
    FUN_108788618(auStack_58);
  }
  return;
}



/* Entry: 108790654; end: 1087907cb;  */

ulong FUN_108790654(ulong *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  ulong extraout_x9;
  long extraout_x10;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong *puStack_80;
  ulong *puStack_78;
  ulong *puStack_70;
  undefined1 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  uVar3 = param_1[1];
  if (uVar3 < param_1[2]) {
    FUN_108792080(uVar3,param_2);
    uVar4 = uVar3 + 0x440;
  }
  else {
    uVar4 = *param_1;
    if (0x3c3c3c3c3c3c3c < (long)(uVar3 - uVar4) / 0x440 + 1U) {
      FUN_108791b24();
      uVar4 = *(ulong *)(uVar3 + 8);
      if (uVar4 < *(ulong *)(uVar3 + 0x10)) {
        FUN_1087920e8();
        uVar4 = uVar4 + 0x290;
      }
      else {
        uVar4 = uVar3;
        FUN_10879210c();
      }
      *(ulong *)(uVar3 + 8) = uVar4;
      return uVar4 - 0x290;
    }
    lVar6 = param_2;
    func_0x000108796230();
    lVar5 = extraout_x10;
    if (0x1e1e1e1e1e1e1d < extraout_x9) {
      lVar5 = extraout_x8;
    }
    if (lVar5 == 0) {
      lVar5 = 0;
      lVar6 = 0;
    }
    else {
      FUN_108791b30();
    }
    lVar1 = lVar5 + (uVar3 - uVar4);
    FUN_108792080(lVar1,param_2);
    uVar4 = *param_1;
    uVar2 = param_1[1];
    uVar7 = lVar1 + ((long)(uVar2 - uVar4) / -0x440) * 0x440;
    puStack_78 = &uStack_60;
    puStack_70 = &uStack_58;
    uStack_58 = uVar7;
    puStack_80 = param_1 + 2;
    uStack_60 = uVar7;
    for (uVar3 = uVar4; uVar3 != uVar2; uVar3 = uVar3 + 0x440) {
      FUN_108792080(uStack_58,uVar3);
      uStack_58 = uStack_58 + 0x440;
    }
    uStack_68 = 1;
    for (; uVar4 != uVar2; uVar4 = uVar4 + 0x440) {
      FUN_108791afc(uVar4);
    }
    uVar4 = lVar1 + 0x440;
    FUN_108791ba8(&puStack_80);
    uVar3 = *param_1;
    *param_1 = uVar7;
    param_1[1] = uVar4;
    param_1[2] = lVar5 + lVar6 * 0x440;
    if (uVar3 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = uVar4;
  return uVar3;
}



/* Entry: 1087907cc; end: 108790807;  */

long FUN_1087907cc(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1087920e8();
    lVar2 = uVar1 + 0x290;
  }
  else {
    lVar2 = param_1;
    FUN_10879210c();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x290;
}



/* Entry: 108790808; end: 108790a37;  */

void FUN_108790808(long param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong extraout_x8;
  ulong extraout_x9;
  ulong extraout_x10;
  long lVar8;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar9;
  long lVar10;
  undefined1 auStack_760 [24];
  undefined1 auStack_748 [904];
  long lStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined1 auStack_3a8 [904];
  long lStack_20;
  long lStack_18;
  undefined8 uStack_10;
  
  func_0x0001087967ac();
  func_0x000108795fb0();
  FUN_10879d654(&lStack_20,**(undefined8 **)(param_1 + 0x10),*param_2);
  if (lStack_20 != lStack_18) {
    if (param_4 != 0) {
      FUN_108869004(**(undefined8 **)(unaff_x21 + 0x10),*unaff_x20);
    }
    FUN_10878ef08(auStack_3a8);
    FUN_1087db7fc(*(undefined8 *)(*(long *)(unaff_x21 + 0x10) + 0x80),&lStack_20,5,unaff_x20 + 0xe,
                  auStack_3a8,unaff_x20[0x13]);
    func_0x000107c27994(auStack_760,unaff_x20 + 0xe);
    FUN_108639eb0(auStack_748,auStack_3a8);
    lStack_3b8 = lStack_18;
    lStack_3c0 = lStack_20;
    uStack_3b0 = uStack_10;
    lStack_18 = 0;
    uStack_10 = 0;
    lStack_20 = 0;
    uVar4 = unaff_x19[1];
    if (uVar4 < (ulong)unaff_x19[2]) {
      func_0x00010879249c(uVar4,auStack_760);
      lVar8 = uVar4 + 0x3b8;
    }
    else {
      lVar8 = *unaff_x19;
      if (0x44d72044d72044 < (long)(uVar4 - lVar8) / 0x3b8 + 1U) {
        FUN_108792508();
LAB_108790a00:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x108790a04);
        (*pcVar3)();
      }
      func_0x000108796230();
      uVar1 = extraout_x10;
      if (0x226b90226b9021 < extraout_x9) {
        uVar1 = extraout_x8;
      }
      if (uVar1 == 0) {
        lVar5 = 0;
      }
      else {
        if (extraout_x8 < uVar1) {
          func_0x000104bd35f4();
          goto LAB_108790a00;
        }
        lVar5 = uVar1 * 0x3b8;
        __Znwm();
      }
      lVar8 = lVar5 + (uVar4 - lVar8);
      func_0x00010879249c(lVar8,auStack_760);
      lVar9 = *unaff_x19;
      lVar2 = unaff_x19[1];
      lVar10 = lVar8 + ((lVar2 - lVar9) / -0x3b8) * 0x3b8;
      lVar6 = lVar10;
      for (lVar7 = lVar9; lVar7 != lVar2; lVar7 = lVar7 + 0x3b8) {
        func_0x00010879249c(lVar6,lVar7);
        lVar6 = lVar6 + 0x3b8;
      }
      for (; lVar9 != lVar2; lVar9 = lVar9 + 0x3b8) {
        FUN_108792514(lVar9);
      }
      lVar8 = lVar8 + 0x3b8;
      lVar7 = *unaff_x19;
      *unaff_x19 = lVar10;
      unaff_x19[1] = lVar8;
      unaff_x19[2] = lVar5 + uVar1 * 0x3b8;
      if (lVar7 != 0) {
        __ZdlPv();
      }
    }
    unaff_x19[1] = lVar8;
    FUN_108792514(auStack_760);
    func_0x000104bee3a8(auStack_3a8);
  }
  func_0x000104bee864(&lStack_20);
  return;
}



/* Entry: 108790a38; end: 108790e37;  */

uint FUN_108790a38(undefined8 param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x19;
  undefined8 uVar13;
  long lVar14;
  undefined8 auStack_ea8 [3];
  undefined1 auStack_e90 [656];
  undefined8 uStack_c00;
  undefined1 auStack_bf8 [24];
  undefined1 auStack_be0 [64];
  undefined1 auStack_ba0 [40];
  long *plStack_b78;
  long *plStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined4 uStack_b10;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  long lStack_ae8;
  undefined4 uStack_ae0;
  long lStack_ad8;
  undefined4 uStack_ad0;
  undefined4 uStack_acc;
  int iStack_9bc;
  byte bStack_908;
  undefined8 uStack_58;
  
  func_0x000108796038();
  uStack_58 = extraout_x8;
  if (*param_3 == param_3[1]) {
    uVar4 = 0;
    uVar3 = 1;
  }
  else {
    func_0x00010879630c();
    uStack_af8 = 0;
    uStack_b00 = 0;
    lStack_ae8 = 0;
    uStack_af0 = 0;
    uStack_ae0 = 0x3f800000;
    uStack_b28 = 0;
    uStack_b30 = 0;
    uStack_b18 = 0;
    uStack_b20 = 0;
    uStack_b10 = 0x3f800000;
    uStack_b40 = 0;
    uStack_b48 = 0;
    uStack_b38 = 0;
    uStack_b58 = 0;
    uStack_b60 = 0;
    uStack_b50 = 0;
    plStack_b70 = (long *)0x0;
    plStack_b78 = (long *)0x0;
    uStack_b68 = 0;
    lStack_ad8 = 0x400000005;
    uStack_ad0 = 2;
    FUN_1086d3338(auStack_ba0,&lStack_ad8,3);
    uVar13 = *(undefined8 *)(**(long **)(unaff_x19 + 0x10) + 0x18);
    func_0x000107c278b8(auStack_bf8,&UNK_10f4ba704);
    func_0x000107c31420(auStack_be0,uVar13,auStack_bf8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_bf8);
    uVar4 = 0;
    puVar1 = (undefined8 *)param_3[1];
    for (puVar6 = (undefined8 *)*param_3; uVar3 = puVar6 == puVar1, !(bool)uVar3;
        puVar6 = puVar6 + 0x88) {
      if ((*(byte *)(puVar6 + 0x52) & 1) == 0) {
        lStack_ad8 = puVar6[0x56];
        FUN_10867b1ac(&uStack_b00,&lStack_ad8);
        FUN_1086903bc(&uStack_b48);
        uVar4 = uVar4 + 1;
      }
      else {
        uVar13 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x60);
        FUN_108790e38(uVar13,auStack_ba0,puVar6);
        if ((int)uVar13 != 0) {
          auStack_ea8[0] = puVar6[0x56];
          uStack_c00 = *puVar6;
          FUN_10867b1ac(&uStack_b00,auStack_ea8);
          FUN_10867b1ac(&uStack_b30,&uStack_c00);
          FUN_1086903bc(&uStack_b48);
          FUN_108790808();
          func_0x0001087962cc();
          FUN_10879d584(&lStack_ad8);
          if (lStack_ad8 != CONCAT44(uStack_acc,uStack_ad0)) {
            func_0x0001087962cc();
            FUN_10886907c();
          }
          func_0x000104bee7dc(&lStack_ad8);
          lVar14 = *(long *)(unaff_x19 + 0x10);
          FUN_108792544(auStack_e90,puVar6);
          FUN_10878f2e0(&lStack_ad8,lVar14,lVar14 + 0x30,auStack_e90);
          FUN_1086cf6c4(auStack_e90);
          FUN_108790f0c(&plStack_b78,&lStack_ad8);
          uVar4 = uVar4 + 1;
          func_0x000108794568(&lStack_ad8);
        }
      }
    }
    if (lStack_ae8 != 0) {
      func_0x0001087962cc();
      FUN_10886488c();
    }
    func_0x000107c31428(auStack_be0);
    if (lStack_ae8 != 0) {
      func_0x0001087962cc();
      FUN_1086a1148(&lStack_ad8);
      plVar5 = *(long **)(*(long *)(unaff_x19 + 0x10) + 0x40);
      if ((bStack_908 & 1) == 0) {
        func_0x0001087966c8();
        (**(code **)(*plVar5 + 8))();
      }
      else {
        uVar3 = iStack_9bc == 3;
        func_0x0001087966c8();
        (**(code **)*plVar5)();
      }
      func_0x00010867b9fc(auStack_ea8);
      (**(code **)(**(long **)(*(long *)(unaff_x19 + 0x10) + 0x50) + 0x150))();
      FUN_1087910f0();
      func_0x000107c288c8(&lStack_ad8);
    }
    param_2 = plStack_b78;
    param_3 = plStack_b70;
    FUN_108791140();
    func_0x000107c31424(auStack_be0);
    FUN_1086d378c(auStack_ba0);
    func_0x0001087945b8(&plStack_b78);
    func_0x0001087945f8(&uStack_b60);
    func_0x000104be1274(&uStack_b48);
    func_0x00010867bb84(&uStack_b30);
    func_0x00010867bb84(&uStack_b00);
  }
  func_0x000108795f50(uStack_58);
  if ((bool)uVar3) {
    return uVar4;
  }
  ___stack_chk_fail();
  func_0x000108796154();
  func_0x00010867b9fc();
  func_0x000107c288c8(&lStack_ad8);
  func_0x000107c31424(auStack_be0);
  FUN_1086d378c(auStack_ba0);
  func_0x0001087945b8(&plStack_b78);
  func_0x0001087945f8(&uStack_b60);
  func_0x000104be1274(&uStack_b48);
  func_0x00010867bb84(&uStack_b30);
  puVar6 = &uStack_b00;
  func_0x00010867bb84(puVar6);
  uVar4 = (uint)puVar6;
  func_0x000108796028();
  FUN_108790114();
  uVar7 = param_2[1];
  uVar8 = 1;
  if ((uVar7 != 0) && (param_2[3] != 0)) {
    uVar9 = (ulong)(int)param_3[0x11];
    uVar10 = uVar7 - 1;
    if ((uVar7 & uVar10) == 0) {
      uVar11 = uVar10 & uVar9;
    }
    else {
      uVar11 = uVar9;
      if (uVar7 <= uVar9) {
        uVar11 = 0;
        if (uVar7 != 0) {
          uVar11 = uVar9 / uVar7;
        }
        uVar11 = uVar9 - uVar11 * uVar7;
      }
    }
    plVar5 = *(long **)(*param_2 + uVar11 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_108790eec;
          uVar12 = plVar5[1];
          if (uVar12 != uVar9) break;
          if (*(int *)(plVar5 + 2) == (int)param_3[0x11]) {
            uVar8 = 0;
            goto LAB_108790ef0;
          }
        }
        if ((uVar7 & uVar10) == 0) {
          uVar12 = uVar12 & uVar10;
        }
        else if (uVar7 <= uVar12) {
          uVar2 = 0;
          if (uVar7 != 0) {
            uVar2 = uVar12 / uVar7;
          }
          uVar12 = uVar12 - uVar2 * uVar7;
        }
      } while (uVar12 == uVar11);
    }
LAB_108790eec:
    uVar8 = 1;
  }
LAB_108790ef0:
  return uVar8 & (uVar4 ^ 1);
}



/* Entry: 108790e38; end: 108790f0b;  */

uint FUN_108790e38(undefined8 param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  FUN_108790114(param_1,param_3 + 0x70);
  uVar2 = param_2[1];
  uVar3 = 1;
  if ((uVar2 != 0) && (param_2[3] != 0)) {
    uVar4 = (ulong)*(int *)(param_3 + 0x88);
    uVar5 = uVar2 - 1;
    if ((uVar2 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
      }
    }
    plVar7 = *(long **)(*param_2 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_108790eec;
          uVar8 = plVar7[1];
          if (uVar8 != uVar4) break;
          if (*(int *)(plVar7 + 2) == *(int *)(param_3 + 0x88)) {
            uVar3 = 0;
            goto LAB_108790ef0;
          }
        }
        if ((uVar2 & uVar5) == 0) {
          uVar8 = uVar8 & uVar5;
        }
        else if (uVar2 <= uVar8) {
          uVar1 = 0;
          if (uVar2 != 0) {
            uVar1 = uVar8 / uVar2;
          }
          uVar8 = uVar8 - uVar1 * uVar2;
        }
      } while (uVar8 == uVar6);
    }
LAB_108790eec:
    uVar3 = 1;
  }
LAB_108790ef0:
  return uVar3 & ((uint)param_1 ^ 1);
}



/* Entry: 108790f0c; end: 1087910ef;  */

void FUN_108790f0c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong extraout_x8;
  ulong extraout_x9;
  ulong extraout_x10;
  long *unaff_x19;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined1 uStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x0001087960cc();
  puVar9 = (ulong *)(param_1 + 2);
  uVar5 = param_1[1];
  if (uVar5 < *puVar9) {
    FUN_108792710(uVar5);
    lVar2 = uVar5 + 0xa80;
    unaff_x19[1] = lVar2;
  }
  else {
    lVar6 = uVar5 - *unaff_x19;
    if (0x18618618618618 < lVar6 / 0xa80 + 1U) {
      FUN_108792798();
LAB_1087910c0:
      func_0x000104bd35f4();
      func_0x000108794524(&lStack_a8);
      func_0x000108796030();
      func_0x000108795fb0();
      for (; param_1 != unaff_x19; param_1 = param_1 + 0x77) {
        plVar3 = *(long **)(*(long *)(lVar6 + 0x10) + 0x70);
        (**(code **)(*plVar3 + 0x30))(plVar3,param_1,param_1 + 3,param_1 + 0x74,5);
      }
      return;
    }
    func_0x000108796230();
    uVar5 = extraout_x10;
    if (0xc30c30c30c30b < extraout_x9) {
      uVar5 = extraout_x8;
    }
    puStack_88 = puVar9;
    if (uVar5 == 0) {
      lVar2 = 0;
    }
    else {
      if (extraout_x8 < uVar5) goto LAB_1087910c0;
      lVar2 = uVar5 * 0xa80;
      __Znwm();
    }
    lVar6 = lVar2 + lVar6;
    lVar8 = lVar2 + uVar5 * 0xa80;
    lStack_a8 = lVar2;
    lStack_a0 = lVar6;
    lStack_98 = lVar6;
    lStack_90 = lVar8;
    FUN_108792710();
    lVar2 = lVar6 + 0xa80;
    lVar4 = *unaff_x19;
    lVar1 = unaff_x19[1];
    lVar6 = lVar6 + ((lVar1 - lVar4) / -0xa80) * 0xa80;
    plStack_78 = &lStack_60;
    plStack_70 = &lStack_58;
    uStack_68 = 0;
    lStack_58 = lVar6;
    lStack_98 = lVar2;
    puStack_80 = puVar9;
    lStack_60 = lVar6;
    for (lVar7 = lVar4; lVar7 != lVar1; lVar7 = lVar7 + 0xa80) {
      FUN_1087927a4(lStack_58,lVar7);
      lStack_58 = lStack_58 + 0xa80;
    }
    uStack_68 = 1;
    for (; lVar4 != lVar1; lVar4 = lVar4 + 0xa80) {
      func_0x000108794568(lVar4);
    }
    func_0x0001087944e4(&puStack_80);
    lStack_a8 = *unaff_x19;
    *unaff_x19 = lVar6;
    unaff_x19[1] = lVar2;
    lStack_90 = unaff_x19[2];
    unaff_x19[2] = lVar8;
    lStack_a0 = lStack_a8;
    lStack_98 = lStack_a8;
    func_0x000108794524(&lStack_a8);
  }
  unaff_x19[1] = lVar2;
  return;
}



/* Entry: 1087910f0; end: 10879113f;  */

void FUN_1087910f0(void)

{
  long *plVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108795fb0();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x3b8) {
    plVar1 = *(long **)(*(long *)(unaff_x21 + 0x10) + 0x70);
    (**(code **)(*plVar1 + 0x30))(plVar1,unaff_x20,unaff_x20 + 0x18,unaff_x20 + 0x3a0,5);
  }
  return;
}



/* Entry: 108791140; end: 1087911d7;  */

void FUN_108791140(void)

{
  long lVar1;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_658 [24];
  undefined1 auStack_640 [1552];
  
  func_0x000108795fb0();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0xa80) {
    lVar1 = *(long *)(unaff_x21 + 0x10);
    FUN_1087a007c(auStack_640,lVar1 + 0x30,lVar1,lVar1 + 0xa0,lVar1 + 0xb0,lVar1 + 0xc0,unaff_x20);
    func_0x0001087966c8(*(undefined8 *)(unaff_x21 + 0x10));
    FUN_1087a1b9c(extraout_x8 + 0x20,extraout_x8 + 0x40,unaff_x20,auStack_640,auStack_658);
    func_0x000108794638(auStack_658);
    func_0x000108686860(auStack_640);
  }
  return;
}



/* Entry: 1087911d8; end: 108791417;  */

ulong FUN_1087911d8(long param_1,undefined8 param_2,long *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x22;
  long lVar6;
  undefined1 auStack_e90 [24];
  long lStack_e78;
  long lStack_e70;
  undefined8 uStack_e68;
  long lStack_e60;
  ulong uStack_e58;
  undefined1 auStack_e30 [656];
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined1 auStack_b88 [40];
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined1 auStack_b48 [24];
  undefined1 auStack_b30 [64];
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined4 auStack_ad8 [672];
  undefined8 uStack_58;
  
  func_0x000108796038();
  uStack_58 = extraout_x8;
  if (*param_3 == param_3[1]) {
    uVar5 = 0;
    uVar1 = 1;
  }
  else {
    func_0x0001087960cc();
    uStack_ae8 = 0;
    uStack_af0 = 0;
    uStack_ae0 = 0;
    uVar4 = *(undefined8 *)(**(long **)(param_1 + 0x10) + 0x18);
    func_0x000107c278b8(auStack_b48,&UNK_10f4ba730);
    func_0x000107c31420(auStack_b30,uVar4,auStack_b48);
    func_0x0001087965fc();
    uStack_b58 = 0;
    uStack_b60 = 0;
    uStack_b50 = 0;
    auStack_ad8[0] = 5;
    FUN_1086d3338(auStack_b88,auStack_ad8,1);
    uVar5 = 0;
    uStack_b98 = 0;
    uStack_ba0 = 0;
    uStack_b90 = 0;
    lVar3 = param_3[1];
    for (unaff_x22 = *param_3; uVar1 = unaff_x22 == lVar3, !(bool)uVar1;
        unaff_x22 = unaff_x22 + 0x290) {
      uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x60);
      FUN_108790e38(uVar4,auStack_b88,unaff_x22);
      if ((int)uVar4 != 0) {
        FUN_108790808();
        lVar6 = *(long *)(unaff_x19 + 0x10);
        FUN_108792544(auStack_e30,unaff_x22);
        param_4 = auStack_e30;
        FUN_10878f2e0(auStack_ad8,lVar6,lVar6 + 0x30);
        FUN_1086cf6c4(auStack_e30);
        FUN_108790f0c(&uStack_ba0,auStack_ad8);
        func_0x0001087962cc();
        FUN_108869b70();
        func_0x0001087962cc();
        FUN_1088606d0();
        uVar5 = (ulong)((int)uVar5 + 1);
        func_0x000108794568(auStack_ad8);
      }
    }
    FUN_1087910f0();
    func_0x000107c31428(auStack_b30);
    FUN_1087a67c4(*(long *)(unaff_x19 + 0x10) + 0x50);
    FUN_108791140();
    func_0x0001087945b8(&uStack_ba0);
    FUN_1086d378c(auStack_b88);
    func_0x000108791c84(&uStack_b60);
    func_0x000107c31424(auStack_b30);
    func_0x0001087945f8();
  }
  func_0x000108795f50(uStack_58);
  if ((bool)uVar1) {
    return uVar5;
  }
  ___stack_chk_fail();
  func_0x000108791c84(&uStack_b60);
  func_0x000107c31424(auStack_b30);
  puVar2 = &uStack_af0;
  func_0x0001087945f8();
  func_0x000108796028();
  lStack_e78 = 0;
  lStack_e70 = 0;
  uStack_e68 = 0;
  lStack_e60 = unaff_x22;
  uStack_e58 = uVar5;
  FUN_1087914e4();
  func_0x000108796660();
  FUN_10879156c();
  lVar3 = lStack_e78;
  if (lStack_e78 != lStack_e70) {
    uVar4 = *(undefined8 *)(puVar2[2] + 0x60);
    func_0x000107c279ac(auStack_e90,&lStack_e78);
    func_0x000108790134(uVar4,auStack_e90,param_4,0);
    func_0x000107c27a04(auStack_e90);
    lVar3 = lStack_e70;
  }
  lVar3 = lVar3 - lStack_e78;
  func_0x000107c27a04(&lStack_e78);
  return lVar3 / 0x18;
}



/* Entry: 108791418; end: 1087914e3;  */

long FUN_108791418(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  FUN_1087914e4(param_1,param_2,&lStack_48);
  func_0x000108796660();
  FUN_10879156c();
  lVar1 = lStack_48;
  if (lStack_48 != lStack_40) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x60);
    func_0x000107c279ac(auStack_60,&lStack_48);
    func_0x000108790134(uVar2,auStack_60,param_4,0);
    func_0x000107c27a04(auStack_60);
    lVar1 = lStack_40;
  }
  lVar1 = lVar1 - lStack_48;
  func_0x000107c27a04(&lStack_48);
  return lVar1 / 0x18;
}



/* Entry: 1087914e4; end: 10879156b;  */

void FUN_1087914e4(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000108796654();
  lVar1 = param_2[1];
  for (lVar3 = *param_2; lVar3 != lVar1; lVar3 = lVar3 + 0x440) {
    if (*(char *)(lVar3 + 0x290) == '\x01') {
      func_0x000108796530(auStack_48);
      uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x60);
      FUN_108790114(uVar2,auStack_48);
      if ((int)uVar2 != 0) {
        func_0x00010086ca80();
      }
      func_0x000107c27914(auStack_48);
    }
  }
  return;
}



/* Entry: 10879156c; end: 1087915bb;  */

void FUN_10879156c(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  func_0x000108796654();
  lVar1 = param_2[1];
  for (lVar3 = *param_2; lVar3 != lVar1; lVar3 = lVar3 + 0x290) {
    uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x60);
    FUN_108790114(uVar2,lVar3 + 0x70);
    if ((int)uVar2 != 0) {
      func_0x000107c28840();
    }
  }
  return;
}



/* Entry: 1087915bc; end: 10879160f;  */

void FUN_1087915bc(void)

{
  func_0x0001087963d8();
  FUN_108791610();
  func_0x000108796118();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  return;
}



/* Entry: 108791610; end: 108791663;  */

void FUN_108791610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108796654();
  func_0x0001087963d8();
  _strlen(param_3);
  FUN_108794674();
  func_0x000108796118();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  return;
}



/* Entry: 108791664; end: 108791693;  */

void FUN_108791664(long param_1)

{
  long unaff_x20;
  
  func_0x000108796654();
  func_0x000107c27940(param_1 + 8);
  func_0x000107c27940(unaff_x20 + 8);
  return;
}



/* Entry: 108791694; end: 1087916cb;  */

long FUN_108791694(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c27994();
  func_0x000107c27994(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 1087916cc; end: 1087916e7;  */

void FUN_1087916cc(long param_1)

{
  FUN_1086ac624();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 1087916e8; end: 10879196b;  */

long FUN_1087916e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar1 = param_1;
  uVar2 = param_6;
  func_0x0001087964f8();
  FUN_1086858d8(lVar1 + 0x18,uVar2);
  FUN_108639fcc(param_1 + 0x78,param_6);
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  FUN_108639eb0(param_1 + 0xf8,param_3);
  FUN_10879196c(param_1 + 0x480,param_4);
  *(undefined1 *)(param_1 + 0x550) = 0;
  *(undefined1 *)(param_1 + 0x618) = 0;
  *(undefined8 *)(param_1 + 0x620) = param_5;
  *(undefined8 *)(param_1 + 0x628) = param_8;
  *(undefined1 *)(param_1 + 0x630) = 1;
  *(undefined8 *)(param_1 + 0x638) = param_7;
  *(undefined1 *)(param_1 + 0x640) = 1;
  *(undefined1 *)(param_1 + 0x648) = 0;
  *(undefined1 *)(param_1 + 0x64c) = 0;
  *(undefined1 *)(param_1 + 0x650) = 0;
  *(undefined1 *)(param_1 + 0x654) = 0;
  *(undefined1 *)(param_1 + 0x658) = 0;
  *(undefined1 *)(param_1 + 0x660) = 0;
  *(undefined1 *)(param_1 + 0x688) = 0;
  *(undefined8 *)(param_1 + 0x698) = 0;
  *(undefined8 *)(param_1 + 0x690) = 0;
  *(undefined8 *)(param_1 + 0x6a8) = 0;
  *(undefined8 *)(param_1 + 0x6a0) = 0;
  *(undefined8 *)(param_1 + 0x6b8) = 0;
  *(undefined8 *)(param_1 + 0x6b0) = 0;
  *(undefined8 *)(param_1 + 0x6c0) = 0;
  *(undefined4 *)(param_1 + 0x6c8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x730) = 0;
  *(undefined8 *)(param_1 + 0x728) = 0;
  *(undefined8 *)(param_1 + 0x720) = 0;
  *(undefined8 *)(param_1 + 0x718) = 0;
  *(undefined8 *)(param_1 + 0x710) = 0;
  *(undefined8 *)(param_1 + 0x708) = 0;
  *(undefined8 *)(param_1 + 0x700) = 0;
  *(undefined8 *)(param_1 + 0x6f8) = 0;
  *(undefined8 *)(param_1 + 0x6f0) = 0;
  *(undefined8 *)(param_1 + 0x6e8) = 0;
  *(undefined8 *)(param_1 + 0x6e0) = 0;
  *(undefined8 *)(param_1 + 0x6d8) = 0;
  *(undefined8 *)(param_1 + 0x6d0) = 0;
  *(undefined4 *)(param_1 + 0x738) = 0x3f800000;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  func_0x0001052916b0(param_1 + 0x740,&uStack_80,&uStack_98,&uStack_b0,&uStack_c8);
  func_0x000104bee7a0(&uStack_c8);
  func_0x000104bee7dc(&uStack_b0);
  func_0x000104bee864(&uStack_98);
  func_0x000107c27a04(&uStack_80);
  *(undefined1 *)(param_1 + 0x7a0) = 0;
  *(undefined1 *)(param_1 + 0x7a8) = 0;
  *(undefined1 *)(param_1 + 0x7b0) = 0;
  *(undefined1 *)(param_1 + 0x7c8) = 0;
  *(undefined8 *)(param_1 + 0x7d8) = 0;
  *(undefined8 *)(param_1 + 2000) = 0;
  *(undefined8 *)(param_1 + 0x7e8) = 0;
  *(undefined8 *)(param_1 + 0x7e0) = 0;
  *(undefined4 *)(param_1 + 0x7f0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x800) = 0;
  *(undefined8 *)(param_1 + 0x7f8) = 0;
  *(undefined8 *)(param_1 + 0x810) = 0;
  *(undefined8 *)(param_1 + 0x808) = 0;
  *(undefined4 *)(param_1 + 0x818) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x828) = 0;
  *(undefined8 *)(param_1 + 0x820) = 0;
  *(undefined8 *)(param_1 + 0x838) = 0;
  *(undefined8 *)(param_1 + 0x830) = 0;
  *(undefined4 *)(param_1 + 0x840) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x850) = 0;
  *(undefined8 *)(param_1 + 0x848) = 0;
  *(undefined8 *)(param_1 + 0x860) = 0;
  *(undefined8 *)(param_1 + 0x858) = 0;
  *(undefined4 *)(param_1 + 0x868) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x870) = param_9;
  *(undefined1 *)(param_1 + 0x874) = 0;
  *(undefined8 *)(param_1 + 0x878) = param_11;
  *(undefined8 *)(param_1 + 0x880) = param_12;
  FUN_1086ac5cc(param_1 + 0x888,param_13);
  *(undefined8 *)(param_1 + 0x8d0) = 0;
  *(undefined8 *)(param_1 + 0x8c8) = 0;
  *(undefined8 *)(param_1 + 0x8c0) = 0;
  uStack_e0 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_f8 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_110 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  uStack_128 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  func_0x0001052916b0(param_1 + 0x8d8,&uStack_e0,&uStack_f8,&uStack_110,&uStack_128);
  func_0x000104bee7a0(&uStack_128);
  func_0x000104bee7dc(&uStack_110);
  func_0x000104bee864(&uStack_f8);
  func_0x000107c27a04(&uStack_e0);
  *(undefined8 *)(param_1 + 0x948) = 0;
  *(undefined8 *)(param_1 + 0x940) = 0;
  *(undefined8 *)(param_1 + 0x938) = 0;
  *(undefined2 *)(param_1 + 0x950) = 1;
  *(undefined1 *)(param_1 + 0x952) = 0;
  *(undefined1 *)(param_1 + 0x954) = 0;
  *(undefined1 *)(param_1 + 0x958) = 0;
  *(undefined1 *)(param_1 + 0x960) = 0;
  *(undefined1 *)(param_1 + 0x9b8) = 0;
  *(undefined8 *)(param_1 + 0x9c0) = 0;
  *(undefined8 *)(param_1 + 0x9d0) = 0;
  *(undefined8 *)(param_1 + 0x9c8) = 0;
  return param_1;
}



/* Entry: 10879196c; end: 108791987;  */

void FUN_10879196c(long param_1)

{
  FUN_1086ac390();
  *(undefined1 *)(param_1 + 200) = 1;
  return;
}



/* Entry: 108791988; end: 1087919c7;  */

void FUN_108791988(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107c334e4();
  func_0x000107c3194c();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined4 *)(unaff_x20 + 0x48) = *(undefined4 *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return;
}



/* Entry: 1087919c8; end: 1087919e3;  */

void FUN_1087919c8(long param_1)

{
  FUN_1087919e4();
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 1087919e4; end: 108791a13;  */

void FUN_1087919e4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x0001087964f8();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 108791a14; end: 108791a33;  */

void FUN_108791a14(long param_1)

{
  if (*(char *)(param_1 + 0x440) == '\x01') {
    FUN_108791afc();
  }
  return;
}



/* Entry: 108791a34; end: 108791a9b;  */

void FUN_108791a34(undefined8 *param_1,long param_2)

{
  func_0x000108791a68();
  *param_1 = &PTR_FUN_110a6f328;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  return;
}



/* Entry: 108791a9c; end: 108791acb;  */

void FUN_108791a9c(long param_1)

{
  func_0x000108796460();
  *(undefined1 *)(param_1 + 0x290) = 0;
  FUN_108791acc();
  return;
}



/* Entry: 108791acc; end: 108791adf;  */

void FUN_108791acc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x290) == '\x01') {
    FUN_108792544();
    *(undefined1 *)(param_1 + 0x290) = 1;
    return;
  }
  return;
}



/* Entry: 108791ae0; end: 108791afb;  */

void FUN_108791ae0(long param_1)

{
  FUN_108792544();
  *(undefined1 *)(param_1 + 0x290) = 1;
  return;
}



/* Entry: 108791afc; end: 108791b23;  */

void FUN_108791afc(long param_1)

{
  func_0x000107c288e0(param_1 + 0x298);
  if (*(char *)(param_1 + 0x290) == '\x01') {
    FUN_1086cf6c4();
  }
  return;
}



/* Entry: 108791b24; end: 108791b2f;  */

void FUN_108791b24(ulong param_1)

{
  long unaff_x20;
  
  func_0x000108795f64();
  if (param_1 < 0x3c3c3c3c3c3c3d) {
    __Znwm(param_1 * 0x440);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001087960cc();
  FUN_108791a9c();
  func_0x000107c28a9c(param_1 + 0x298,unaff_x20 + 0x298);
  return;
}



/* Entry: 108791b30; end: 108791b6f;  */

void FUN_108791b30(ulong param_1)

{
  long unaff_x20;
  
  if (param_1 < 0x3c3c3c3c3c3c3d) {
    __Znwm(param_1 * 0x440);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001087960cc();
  FUN_108791a9c();
  func_0x000107c28a9c(param_1 + 0x298,unaff_x20 + 0x298);
  return;
}



/* Entry: 108791b70; end: 108791ba7;  */

void FUN_108791b70(long param_1)

{
  long unaff_x20;
  
  func_0x0001087960cc();
  FUN_108791a9c();
  func_0x000107c28a9c(param_1 + 0x298,unaff_x20 + 0x298);
  return;
}



/* Entry: 108791ba8; end: 108791c47;  */

void FUN_108791ba8(void)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long lVar2;
  
  func_0x000108796454();
  if ((extraout_x8 & 1) == 0) {
    lVar2 = **(long **)(unaff_x19 + 8);
    lVar1 = **(long **)(unaff_x19 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x440;
      FUN_108791afc();
    }
  }
  return;
}



/* Entry: 108791c48; end: 108791c4f;  */

void FUN_108791c48(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c334e4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x440;
    FUN_108791afc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108791c50; end: 108791cdf;  */

void FUN_108791c50(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c334e4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x440;
    FUN_108791afc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108791ce0; end: 108791ce7;  */

void FUN_108791ce0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c334e4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x290;
    FUN_1086cf6c4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108791ce8; end: 108791d3f;  */

void FUN_108791ce8(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c334e4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x290;
    FUN_1086cf6c4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108791d40; end: 10879207f;  */

void FUN_108791d40(long param_1,ulong param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined1 in_ZR;
  bool bVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long lVar6;
  long *plStack_6a8;
  undefined1 uStack_6a0;
  long lStack_690;
  long lStack_688;
  long lStack_680;
  undefined1 auStack_678 [424];
  byte bStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  undefined1 auStack_4b8 [664];
  undefined1 auStack_220 [424];
  undefined1 uStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  undefined8 uStack_48;
  
  lVar6 = param_1;
  func_0x000108796038();
  lVar6 = *(long *)(lVar6 + 0x470);
  uStack_48 = extraout_x8;
  func_0x0001087962cc();
  FUN_108862cf0(auStack_4b8);
  func_0x000107c28998(auStack_678,auStack_4b8);
  func_0x000107c28948(auStack_4b8);
  if ((bStack_4d0 & 1) == 0) {
    FUN_10878f774(*(long *)(lVar6 + 0x10) + 0x10,param_1 + 8);
    auStack_4b8[0] = 0;
    uStack_78 = 0;
    FUN_10878f7cc(&plStack_70,auStack_4b8,1);
    func_0x0001087963fc();
    func_0x000108796764();
    func_0x0001087965cc();
    func_0x000108796678();
    func_0x00010879634c();
    func_0x0001087963f4();
    func_0x0001087963b0();
  }
  else {
    FUN_108791a9c(auStack_4b8,param_1 + 0x30);
    puVar5 = auStack_678;
    func_0x000107c28a9c(auStack_220);
    lStack_690 = 0;
    lStack_688 = 0;
    lStack_680 = 0;
    plStack_6a8 = &lStack_690;
    uStack_6a0 = 0;
    lVar4 = 1;
    FUN_108791b30();
    plStack_70 = &lStack_680;
    lStack_680 = lVar4 + (long)puVar5 * 0x440;
    plStack_68 = &lStack_4c8;
    plStack_60 = &lStack_4c0;
    uStack_58 = 0;
    lStack_690 = lVar4;
    lStack_688 = lVar4;
    lStack_4c8 = lVar4;
    lStack_4c0 = lVar4;
    FUN_108791b70();
    lVar4 = lStack_4c0 + 0x440;
    uStack_58 = 1;
    lStack_4c0 = lVar4;
    FUN_108791ba8(&plStack_70);
    uStack_6a0 = 1;
    lStack_688 = lVar4;
    func_0x000108791be8(&plStack_6a8);
    FUN_108791afc(auStack_4b8);
    func_0x000107c27994(&plStack_70,param_1 + 0x18);
    func_0x00010868c9c4(auStack_4b8,&plStack_70,1);
    func_0x0001087966c8();
    lVar4 = lVar6;
    FUN_10878f930(lVar6,auStack_4b8,&lStack_690,&plStack_6a8);
    func_0x000108791c84(&plStack_6a8);
    func_0x000107c27a04(auStack_4b8);
    func_0x000107c27914(&plStack_70);
    param_2 = param_2 & 0x101;
    bVar1 = 0 < (int)lVar4;
    bVar3 = bVar1 || param_2 == 0x101;
    in_ZR = bVar3;
    FUN_10878f97c(lVar6,0,bVar3,param_1 + 8,0);
    FUN_108791b70(auStack_4b8,lStack_690);
    uStack_78 = 1;
    FUN_10878f7cc(&plStack_70,auStack_4b8,bVar3);
    func_0x0001087963fc();
    if (!bVar1 && param_2 != 0x101) {
      in_ZR = param_2 == 0x100;
      uVar2 = 0x10004;
      if (!(bool)in_ZR) {
        uVar2 = 0x10005;
      }
      FUN_10878f9a0(&plStack_70,uVar2);
    }
    func_0x000108796764();
    func_0x0001087965cc();
    func_0x000108796678();
    func_0x00010879634c();
    func_0x0001087963f4();
    func_0x0001087963b0();
    func_0x000108791d1c(&lStack_690);
  }
  func_0x000107c288dc(auStack_678);
  func_0x000108795f50(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001087963f4();
  func_0x0001087963b0();
  func_0x000108791d1c(&lStack_690);
  func_0x000107c288dc(auStack_678);
  do {
    func_0x000108796028();
    func_0x000107c28948(auStack_4b8);
  } while( true );
}



/* Entry: 108792080; end: 1087920ab;  */

void FUN_108792080(long param_1)

{
  long unaff_x19;
  
  func_0x000107c334e4();
  FUN_1087920ac();
  func_0x000107c28970(param_1 + 0x298,unaff_x19 + 0x298);
  return;
}



/* Entry: 1087920ac; end: 1087920d3;  */

void FUN_1087920ac(long param_1)

{
  func_0x000108796460();
  *(undefined1 *)(param_1 + 0x290) = 0;
  FUN_1087920d4();
  return;
}



/* Entry: 1087920d4; end: 1087920e7;  */

void FUN_1087920d4(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x290) == '\x01') {
    FUN_1086d4f60();
    *(undefined1 *)(param_1 + 0x290) = 1;
    return;
  }
  return;
}



/* Entry: 1087920e8; end: 10879210b;  */

void FUN_1087920e8(long param_1)

{
  long unaff_x19;
  
  func_0x000107c334f0();
  FUN_1086d4f60();
  *(long *)(unaff_x19 + 8) = param_1 + 0x290;
  return;
}



/* Entry: 10879210c; end: 10879219f;  */

long FUN_10879210c(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x0001087960cc();
  FUN_1087921a0();
  FUN_108792264(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x290,unaff_x19 + 2);
  FUN_1086d4f60(lStack_48);
  lStack_48 = lStack_48 + 0x290;
  FUN_108792200();
  lVar1 = unaff_x19[1];
  func_0x000108792434(auStack_58);
  return lVar1;
}



/* Entry: 1087921a0; end: 1087921ff;  */

long * FUN_1087921a0(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  
  if (param_2 < (long *)0x63e7063e7063e8) {
    uVar1 = (param_1[2] - *param_1) / 0x290;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x31f3831f3831f2 < uVar1) {
      plVar2 = (long *)0x63e7063e7063e7;
    }
    return plVar2;
  }
  FUN_108792258();
  func_0x000107c334e4();
  plVar2 = param_1 + 2;
  lVar3 = param_2[1] + ((param_1[1] - *param_1) / -0x290) * 0x290;
  FUN_108792300(plVar2,*param_1,param_1[1],lVar3);
  *(long *)(unaff_x19 + 8) = lVar3;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000108796180();
  return plVar2;
}



/* Entry: 108792200; end: 108792257;  */

void FUN_108792200(long *param_1,long param_2)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar1;
  
  func_0x000107c334e4();
  lVar1 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x290) * 0x290;
  FUN_108792300(param_1 + 2,*param_1,param_1[1],lVar1);
  *(long *)(unaff_x19 + 8) = lVar1;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000108796180();
  return;
}



/* Entry: 108792258; end: 108792263;  */

long * FUN_108792258(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x000108795f64();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001087922b0();
  }
  lVar1 = param_4 + param_3 * 0x290;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x290;
  return param_1;
}



/* Entry: 108792264; end: 1087922cf;  */

long * FUN_108792264(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001087922b0();
  }
  lVar1 = param_4 + param_3 * 0x290;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x290;
  return param_1;
}



/* Entry: 1087922d0; end: 1087922ff;  */

void FUN_1087922d0(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong unaff_x19;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x63e7063e7063e8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x290);
    return;
  }
  func_0x000104bd35f4();
  func_0x000108795fb0();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (; lStack_48 = param_4, param_2 != unaff_x19; param_2 = param_2 + 0x290) {
    FUN_1086d4f60(param_4,param_2);
    param_4 = lStack_48 + 0x290;
  }
  uStack_58 = 1;
  FUN_108792398();
  FUN_1087923c8(&uStack_70);
  return;
}



/* Entry: 108792300; end: 108792397;  */

void FUN_108792300(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000108795fb0();
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != unaff_x19; param_2 = param_2 + 0x290) {
    FUN_1086d4f60(param_4,param_2);
    param_4 = lStack_38 + 0x290;
  }
  uStack_48 = 1;
  FUN_108792398();
  FUN_1087923c8(&uStack_60);
  return;
}



/* Entry: 108792398; end: 1087923c7;  */

void FUN_108792398(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x290) {
    FUN_1086cf6c4();
  }
  return;
}



/* Entry: 1087923c8; end: 1087923f3;  */

void FUN_1087923c8(void)

{
  uint extraout_w8;
  
  func_0x000108796454();
  if ((extraout_w8 & 1) == 0) {
    FUN_1087923f4();
  }
  return;
}



/* Entry: 1087923f4; end: 108792403;  */

void FUN_1087923f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x0001087962ec();
  while (param_3 != param_5) {
    param_3 = param_3 + -0x290;
    FUN_1086cf6c4();
  }
  return;
}



/* Entry: 108792404; end: 10879245f;  */

void FUN_108792404(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x290;
    FUN_1086cf6c4();
  }
  return;
}



/* Entry: 108792460; end: 108792467;  */

void FUN_108792460(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c334e4(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x290;
    FUN_1086cf6c4();
  }
  return;
}



/* Entry: 108792468; end: 108792507;  */

void FUN_108792468(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c334e4();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x290;
    FUN_1086cf6c4();
  }
  return;
}



/* Entry: 108792508; end: 108792513;  */

long FUN_108792508(long param_1)

{
  long lStack_38;
  
  func_0x000108795f64();
  func_0x000104bee864(param_1 + 0x3a0);
  func_0x000104bee3a8(param_1 + 0x18);
  lStack_38 = param_1;
  func_0x000100100fd4(&lStack_38);
  return param_1;
}



/* Entry: 108792514; end: 108792543;  */

long FUN_108792514(long param_1)

{
  long lStack_28;
  
  func_0x000104bee864(param_1 + 0x3a0);
  func_0x000104bee3a8(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 108792544; end: 10879270f;  */

void FUN_108792544(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010879630c();
  *param_1 = *param_2;
  func_0x000107c27994(param_1 + 1,param_2 + 1);
  func_0x000107c28aa0(param_1 + 4,param_2 + 4);
  *(undefined4 *)(unaff_x19 + 0x40) = *(undefined4 *)(unaff_x21 + 0x40);
  func_0x000104be0ccc(unaff_x19 + 0x48,unaff_x21 + 0x48);
  *(undefined4 *)(unaff_x19 + 0x68) = *(undefined4 *)(unaff_x21 + 0x68);
  func_0x000108796530(unaff_x19 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x21 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x21 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x21 + 0x98);
  *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x21 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0x98) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x90) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x88) = uVar1;
  FUN_10867be90(unaff_x19 + 0xa8,unaff_x21 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x21 + 200);
  uVar1 = *(undefined8 *)(unaff_x21 + 0xc0);
  *(undefined1 *)(unaff_x19 + 0xd0) = *(undefined1 *)(unaff_x21 + 0xd0);
  *(undefined8 *)(unaff_x19 + 200) = uVar2;
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar1;
  func_0x000104be0ccc(unaff_x19 + 0xd8,unaff_x21 + 0xd8);
  func_0x000104be0ccc(unaff_x19 + 0xf8,unaff_x21 + 0xf8);
  func_0x000104be0ccc(unaff_x19 + 0x118,unaff_x21 + 0x118);
  *(undefined1 *)(unaff_x19 + 0x138) = *(undefined1 *)(unaff_x21 + 0x138);
  func_0x000107c279d4(unaff_x19 + 0x140,unaff_x21 + 0x140);
  FUN_108656428(unaff_x19 + 0x160,unaff_x21 + 0x160);
  *(undefined1 *)(unaff_x19 + 0x228) = *(undefined1 *)(unaff_x21 + 0x228);
  func_0x000107c279d4(unaff_x19 + 0x230,unaff_x21 + 0x230);
  func_0x000104be0ccc(unaff_x19 + 0x250,unaff_x21 + 0x250);
  uVar2 = *(undefined8 *)(unaff_x21 + 0x278);
  uVar1 = *(undefined8 *)(unaff_x21 + 0x270);
  uVar3 = *(undefined8 *)(unaff_x21 + 0x279);
  *(undefined8 *)(unaff_x19 + 0x281) = *(undefined8 *)(unaff_x21 + 0x281);
  *(undefined8 *)(unaff_x19 + 0x279) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x278) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x270) = uVar1;
  return;
}



/* Entry: 108792710; end: 108792743;  */

void FUN_108792710(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c334e4();
  func_0x0001087964c8();
  FUN_108792744();
  uVar1 = *(undefined8 *)(unaff_x19 + 0xa70);
  *(undefined8 *)(unaff_x20 + 0xa78) = *(undefined8 *)(unaff_x19 + 0xa78);
  *(undefined8 *)(unaff_x20 + 0xa70) = uVar1;
  *(undefined8 *)(unaff_x19 + 0xa78) = 0;
  *(undefined8 *)(unaff_x19 + 0xa70) = 0;
  return;
}



/* Entry: 108792744; end: 108792797;  */

void FUN_108792744(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108795f7c();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_1086ac094(param_1 + 0x20,unaff_x20 + 0x20);
  func_0x000108796420();
  func_0x000105302f48(unaff_x19 + 0xa18,unaff_x20 + 0xa18);
  func_0x000105302f48(unaff_x19 + 0xa38,unaff_x20 + 0xa38);
  return;
}



/* Entry: 108792798; end: 1087927a3;  */

void FUN_108792798(void)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000108795f64();
  func_0x0001087960cc();
  func_0x0001087964c8();
  FUN_1087927e4();
  lVar1 = *(long *)(unaff_x20 + 0xa78);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa70);
  *(undefined8 *)(unaff_x19 + 0xa78) = *(undefined8 *)(unaff_x20 + 0xa78);
  *(undefined8 *)(unaff_x19 + 0xa70) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000108796160();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1087927a4; end: 1087927e3;  */

void FUN_1087927a4(void)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x0001087960cc();
  func_0x0001087964c8();
  FUN_1087927e4();
  lVar1 = *(long *)(unaff_x20 + 0xa78);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa70);
  *(undefined8 *)(unaff_x19 + 0xa78) = *(undefined8 *)(unaff_x20 + 0xa78);
  *(undefined8 *)(unaff_x19 + 0xa70) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000108796160();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1087927e4; end: 10879285f;  */

void FUN_1087927e4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108795f7c();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_108792860(param_1 + 0x20,unaff_x20 + 0x20);
  func_0x000108796420();
  func_0x00010724cbe8(unaff_x19 + 0xa18,unaff_x20 + 0xa18);
  func_0x00010724cbe8(unaff_x19 + 0xa38,unaff_x20 + 0xa38);
  return;
}



/* Entry: 108792860; end: 108792b83;  */

void FUN_108792860(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000108795f7c();
  func_0x000108796340();
  FUN_1086858d8();
  FUN_1086858d8(unaff_x19 + 0x78,unaff_x20 + 0x78);
  FUN_108792b84(unaff_x19 + 0xd8,unaff_x20 + 0xd8);
  FUN_108685044(unaff_x19 + 0xf8,unaff_x20 + 0xf8);
  FUN_108792be4(unaff_x19 + 0x480,unaff_x20 + 0x480);
  FUN_108792be4(unaff_x19 + 0x550,unaff_x20 + 0x550);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x628);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x620);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x638);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x630);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x648);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x640);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x649);
  *(undefined8 *)(unaff_x19 + 0x651) = *(undefined8 *)(unaff_x20 + 0x651);
  *(undefined8 *)(unaff_x19 + 0x649) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x648) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x640) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x638) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x630) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x628) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x620) = uVar1;
  FUN_108792c44(unaff_x19 + 0x660,unaff_x20 + 0x660);
  func_0x000107c279ac(unaff_x19 + 0x690,unaff_x20 + 0x690);
  FUN_108792ca4(unaff_x19 + 0x6a8,unaff_x20 + 0x6a8);
  func_0x0001087930b8(unaff_x19 + 0x6d0,unaff_x20 + 0x6d0);
  func_0x000108793330(unaff_x19 + 0x6e8,unaff_x20 + 0x6e8);
  func_0x0001087935b4(unaff_x19 + 0x700,unaff_x20 + 0x700);
  FUN_108793804(unaff_x19 + 0x718,unaff_x20 + 0x718);
  FUN_1086858d8(unaff_x19 + 0x740,unaff_x20 + 0x740);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x7a0);
  *(undefined8 *)(unaff_x19 + 0x7a8) = *(undefined8 *)(unaff_x20 + 0x7a8);
  *(undefined8 *)(unaff_x19 + 0x7a0) = uVar1;
  func_0x000104be0ccc(unaff_x19 + 0x7b0,unaff_x20 + 0x7b0);
  FUN_108793c18(unaff_x19 + 2000,unaff_x20 + 2000);
  FUN_10879402c(unaff_x19 + 0x7f8,unaff_x20 + 0x7f8);
  FUN_108793c18(unaff_x19 + 0x820,unaff_x20 + 0x820);
  FUN_10879402c(unaff_x19 + 0x848,unaff_x20 + 0x848);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x878);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x870);
  *(undefined1 *)(unaff_x19 + 0x880) = *(undefined1 *)(unaff_x20 + 0x880);
  *(undefined8 *)(unaff_x19 + 0x878) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x870) = uVar1;
  FUN_108664290(unaff_x19 + 0x888,unaff_x20 + 0x888);
  func_0x000107c279ac(unaff_x19 + 0x8c0,unaff_x20 + 0x8c0);
  FUN_1086858d8(unaff_x19 + 0x8d8,unaff_x20 + 0x8d8);
  FUN_108685948(unaff_x19 + 0x938,unaff_x20 + 0x938);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x950);
  *(undefined1 *)(unaff_x19 + 0x958) = *(undefined1 *)(unaff_x20 + 0x958);
  *(undefined8 *)(unaff_x19 + 0x950) = uVar1;
  FUN_108794440(unaff_x19 + 0x960,unaff_x20 + 0x960);
  func_0x0001086866c4(unaff_x19 + 0x9c0,unaff_x20 + 0x9c0);
  return;
}



/* Entry: 108792b84; end: 108792bb3;  */

void FUN_108792b84(long param_1)

{
  func_0x000108796460();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_108792bb4();
  return;
}



/* Entry: 108792bb4; end: 108792bc7;  */

void FUN_108792bb4(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10877c1a4();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  return;
}



/* Entry: 108792bc8; end: 108792be3;  */

void FUN_108792bc8(long param_1)

{
  FUN_10877c1a4();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 108792be4; end: 108792c13;  */

void FUN_108792be4(long param_1)

{
  func_0x000108796460();
  *(undefined1 *)(param_1 + 200) = 0;
  FUN_108792c14();
  return;
}



/* Entry: 108792c14; end: 108792c27;  */

void FUN_108792c14(long param_1,long param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_108656428();
    *(undefined1 *)(param_1 + 200) = 1;
    return;
  }
  return;
}



/* Entry: 108792c28; end: 108792c43;  */

void FUN_108792c28(long param_1)

{
  FUN_108656428();
  *(undefined1 *)(param_1 + 200) = 1;
  return;
}



/* Entry: 108792c44; end: 108792c73;  */

void FUN_108792c44(long param_1)

{
  func_0x000108796460();
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_108792c74();
  return;
}



/* Entry: 108792c74; end: 108792c87;  */

void FUN_108792c74(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    func_0x000100864944();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 108792c88; end: 108792ca3;  */

void FUN_108792c88(long param_1)

{
  func_0x000100864944();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 108792ca4; end: 108792cdb;  */

void FUN_108792ca4(void)

{
  func_0x000108795ee0();
  func_0x000108792d10();
  func_0x000108796690();
  func_0x000108792cdc();
  return;
}



/* Entry: 108792cdc; end: 108792d8b;  */

void FUN_108792cdc(void)

{
  long unaff_x19;
  long *unaff_x20;
  
  func_0x000108795fb0();
  for (; unaff_x20 != (long *)unaff_x19; unaff_x20 = (long *)*unaff_x20) {
    func_0x00010879663c();
    func_0x000108792e68();
  }
  return;
}



/* Entry: 108792d8c; end: 108792e37;  */

void FUN_108792d8c(long param_1,long param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  
  if (param_2 == 0) {
    FUN_108792e38(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    func_0x0001087966bc();
    FUN_108792e50();
    func_0x0001087966e0();
    FUN_108792e38();
    func_0x0001087961b8();
    uVar3 = extraout_x9;
    while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
      func_0x000108796604();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x00010879605c();
      func_0x000108796048();
      plVar4 = extraout_x9_01;
      while (*plVar4 != 0) {
        func_0x0001087966b0();
        lVar2 = extraout_x8;
        plVar4 = extraout_x12;
        uVar3 = extraout_x11;
        if ((bool)uVar1) {
          uVar5 = extraout_x13 & extraout_x10;
        }
        else {
          uVar5 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x000108796788();
            lVar2 = extraout_x8_00;
            uVar3 = extraout_x11_00;
            plVar4 = extraout_x12_00;
            uVar5 = extraout_x13_00;
          }
        }
        uVar1 = uVar5 == uVar3;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + uVar5 * 8) == 0) {
            func_0x000108796770();
            plVar4 = extraout_x12_01;
          }
          else {
            func_0x000108795f00();
            plVar4 = extraout_x9_02;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 108792e38; end: 108792e4f;  */

void FUN_108792e38(long *param_1,long param_2)

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



/* Entry: 108792e50; end: 108792e9b;  */

void FUN_108792e50(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000108792e80();
  return;
}



/* Entry: 108792e9c; end: 108792fdb;  */

undefined1  [16] FUN_108792e9c(ulong param_1)

{
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar2;
  long extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong uVar3;
  ulong extraout_x10;
  ulong unaff_x20;
  long *unaff_x21;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined1 auVar4 [16];
  
  func_0x000108796794();
  func_0x000108795f20();
  func_0x000108796648();
  if (unaff_x24 != 0) {
    func_0x000108796728();
    if ((bool)in_ZR) {
      func_0x0001087962c0();
    }
    else {
      func_0x00010879671c();
      if ((bool)in_CY) {
        func_0x000108796710();
      }
    }
    func_0x00010879666c();
    if (unaff_x21 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*unaff_x21;
          if (unaff_x21 == (long *)0x0) goto LAB_108792f24;
          func_0x0001087964e0();
          if (!(bool)in_ZR) break;
          func_0x00010879610c();
          if ((param_1 & 1) != 0) {
            uVar1 = 0;
            goto LAB_108792fc4;
          }
        }
        if ((unaff_x24 & unaff_x26) == 0) {
          uVar3 = extraout_x8 & unaff_x26;
        }
        else {
          uVar3 = extraout_x8;
          if (unaff_x24 <= extraout_x8) {
            func_0x000108796704();
            uVar3 = extraout_x8_00;
          }
        }
        in_NG = (long)(uVar3 - unaff_x25) < 0;
        in_ZR = uVar3 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_108792f24:
  func_0x0001087960b8();
  FUN_108792fdc();
  func_0x000108796084();
  if ((unaff_x24 == 0) || (func_0x000108796280(), (bool)in_NG)) {
    func_0x000108796010();
    in_ZR = unaff_x24 == 3;
    func_0x000108795ff8();
    func_0x000108792d10();
    func_0x000108796290();
    if ((bool)in_ZR) {
      func_0x0001087962c0();
    }
    else {
      in_ZR = unaff_x20 == unaff_x24;
      if (unaff_x24 <= unaff_x20) {
        func_0x0001087966ec();
      }
    }
  }
  func_0x000108796684();
  if (extraout_x9 == 0) {
    func_0x000108795ec0();
    if (extraout_x9_00 != 0) {
      func_0x000108796270();
      lVar2 = extraout_x8_01;
      if ((bool)in_ZR) {
        uVar3 = extraout_x9_01 & extraout_x10;
      }
      else {
        uVar3 = extraout_x9_01;
        if (unaff_x24 <= extraout_x9_01) {
          func_0x0001087966d4();
          lVar2 = extraout_x8_02;
          uVar3 = extraout_x9_02;
        }
      }
      *(long **)(lVar2 + uVar3 * 8) = unaff_x21;
    }
  }
  else {
    func_0x0001087960a4();
  }
  func_0x000108795fc0();
  FUN_108793048();
  uVar1 = 1;
LAB_108792fc4:
  auVar4._8_8_ = uVar1;
  auVar4._0_8_ = unaff_x21;
  return auVar4;
}



/* Entry: 108792fdc; end: 10879301b;  */

void FUN_108792fdc(void)

{
  func_0x000108796070();
  __Znwm(0x1d0);
  func_0x000108796260();
  FUN_10879301c();
  func_0x0001087966f8();
  return;
}



/* Entry: 10879301c; end: 108793047;  */

void FUN_10879301c(void)

{
  func_0x000108795f7c();
  func_0x000108796340();
  func_0x000107c28a9c();
  return;
}



/* Entry: 108793048; end: 108793067;  */

void FUN_108793048(void)

{
  func_0x00010879674c();
  FUN_108793068();
  return;
}



/* Entry: 108793068; end: 10879307f;  */

void FUN_108793068(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x000108796214(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x0001086a91dc(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108793080; end: 1087930e3;  */

void FUN_108793080(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x000108796214();
  if ((bool)in_ZR) {
    func_0x0001086a91dc(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087930e4; end: 10879312f;  */

void FUN_1087930e4(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
    func_0x000108796124();
    FUN_108793130();
    func_0x000108796244();
    FUN_108793174();
  }
  func_0x00010879647c();
  func_0x000108793308();
  return;
}



/* Entry: 108793130; end: 108793173;  */

void FUN_108793130(long *param_1,ulong param_2)

{
  long *plVar1;
  long unaff_x19;
  
  if (param_2 < 0x1e1e1e1e1e1e1e2) {
    plVar1 = param_1 + 2;
    FUN_1087931ac();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x11);
  }
  else {
    FUN_1087931a0();
    func_0x0001087964ec();
    param_1 = param_1 + 2;
    func_0x0001087931f4();
    *(long **)(unaff_x19 + 8) = param_1;
  }
  return;
}



/* Entry: 108793174; end: 10879319f;  */

void FUN_108793174(long param_1)

{
  long unaff_x19;
  
  func_0x0001087964ec();
  param_1 = param_1 + 0x10;
  func_0x0001087931f4();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1087931a0; end: 1087931ab;  */

void FUN_1087931a0(void)

{
  func_0x000108795f64();
  FUN_1087931cc();
  return;
}



/* Entry: 1087931ac; end: 1087931cb;  */

void FUN_1087931ac(void)

{
  FUN_1087931cc();
  return;
}



/* Entry: 1087931cc; end: 108793207;  */

void FUN_1087931cc(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x1e1e1e1e1e1e1e2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x88);
    return;
  }
  func_0x000104bd35f4();
  FUN_108793208();
  return;
}



/* Entry: 108793208; end: 108793263;  */

long FUN_108793208(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x000108795f88();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x88) {
    func_0x000108796660();
    FUN_108793264();
    unaff_x20 = uStack_38 + 0x88;
    uStack_38 = unaff_x20;
  }
  func_0x00010879648c();
  FUN_10879329c();
  return unaff_x20;
}



/* Entry: 108793264; end: 10879329b;  */

void FUN_108793264(long param_1)

{
  long unaff_x20;
  
  func_0x0001087960cc();
  FUN_108685a78();
  FUN_108686110(param_1 + 0x58,unaff_x20 + 0x58);
  return;
}



/* Entry: 10879329c; end: 1087932c7;  */

void FUN_10879329c(void)

{
  uint extraout_w8;
  
  func_0x000108796454();
  if ((extraout_w8 & 1) == 0) {
    FUN_1087932c8();
  }
  return;
}



/* Entry: 1087932c8; end: 1087932d7;  */

void FUN_1087932c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x0001087962ec();
  while (param_3 != param_5) {
    param_3 = param_3 + -0x88;
    func_0x0001086a9160();
  }
  return;
}



/* Entry: 1087932d8; end: 10879335b;  */

void FUN_1087932d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x88;
    func_0x0001086a9160();
  }
  return;
}


