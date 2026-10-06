/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10818c494; end: 10818c5cf;  */

void FUN_10818c494(long param_1,long param_2,long param_3)

{
  undefined1 auStack_188 [40];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined8 uStack_124;
  undefined8 uStack_11c;
  undefined1 auStack_d0 [144];
  long lStack_40;
  undefined4 uStack_38;
  
  uStack_38 = 0;
  if (param_2 != 0) {
    uStack_38 = *(undefined4 *)(param_2 + 0xc60);
  }
  lStack_40 = param_2;
  FUN_10818ccbc(&uStack_160,param_2,param_3);
  func_0x00010818c754();
  FUN_10818d01c(&uStack_160,param_1 + 0x18,auStack_188,1);
  FUN_1081660c4(auStack_d0,&uStack_160);
  func_0x00010818c7f0();
  uStack_12c = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_124 = 0x3f800000;
  uStack_11c = 0x40800000;
  if (param_3 != 0) {
    func_0x00010818c754();
    FUN_10818ca28(param_3,auStack_188,&uStack_160,0);
  }
  FUN_1083762f4(&uStack_160,*(undefined4 *)(param_1 + 0x38));
  FUN_10833c3b4(param_2,0,&uStack_160);
  FUN_1081885d4(param_1,param_2,0);
  FUN_108375e94(&uStack_160);
  FUN_10818cd40(auStack_d0);
  FUN_10815b978(&lStack_40);
  return;
}



/* Entry: 10818c5d0; end: 10818c5d3;  */

void FUN_10818c5d0(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  func_0x000106f47224(param_1 + 7);
  *param_1 = &PTR_FUN_110a2b5f8;
  lStack_28 = param_1[6];
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10818a6d4(param_1,&lStack_28);
  FUN_108188604();
  FUN_108154cb4(param_1 + 6);
  FUN_10818a578(param_1);
  return;
}



/* Entry: 10818c5d4; end: 10818c5e7;  */

void FUN_10818c5d4(void)

{
  FUN_10818c630();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10818c5e8; end: 10818c62f;  */

void FUN_10818c5e8(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x50);
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 10818c630; end: 10818c657;  */

void FUN_10818c630(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  func_0x000106f47224(param_1 + 7);
  *param_1 = &PTR_FUN_110a2b5f8;
  lStack_28 = param_1[6];
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10818a6d4(param_1,&lStack_28);
  FUN_108188604();
  FUN_108154cb4(param_1 + 6);
  FUN_10818a578(param_1);
  return;
}



/* Entry: 10818c658; end: 10818c893;  */

void FUN_10818c658(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010818c834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10818c894; end: 10818c8b3;  */

void FUN_10818c894(undefined8 *param_1)

{
  func_0x00010818a53c();
  *param_1 = &PTR_FUN_110a2c1c8;
  return;
}



/* Entry: 10818c8b4; end: 10818c90f;  */

void FUN_10818c8b4(long param_1,uint param_2)

{
  ushort uVar1;
  
  if (param_2 != ((*(ushort *)(param_1 + 0x28) & 0x40) == 0)) {
    FUN_10818a7f4(param_1,1);
    uVar1 = *(ushort *)(param_1 + 0x28) & 0x3f80;
    if (param_2 == 0) {
      uVar1 = uVar1 | 0x40;
    }
    *(ushort *)(param_1 + 0x28) = uVar1 | *(ushort *)(param_1 + 0x28) & 0xc03f;
  }
  return;
}



/* Entry: 10818c910; end: 10818c947;  */

void FUN_10818c910(long *param_1)

{
  if ((((*(ushort *)(param_1 + 5) >> 6 & 1) == 0) &&
      (*(float *)(param_1 + 3) < *(float *)(param_1 + 4))) &&
     (*(float *)((long)param_1 + 0x1c) < *(float *)((long)param_1 + 0x24))) {
                    /* WARNING: Could not recover jumptable at 0x00010818c944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))();
    return;
  }
  return;
}



/* Entry: 10818c948; end: 10818c9e7;  */

long * FUN_10818c948(long *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1 + 0x18;
  FUN_108188ea8(*param_2,param_2[1]);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010818c984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,param_2);
    return param_1;
  }
  return (long *)0x0;
}



/* Entry: 10818c9e8; end: 10818ca27;  */

uint FUN_10818c9e8(float param_1,uint param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm((float)(double)(long)(param_1 * (float)param_2 + 0.5),0x4effffff);
  if (fVar1 <= -2.1474835e+09) {
    fVar1 = -2.1474835e+09;
  }
  return (int)fVar1 & 0xff;
}



/* Entry: 10818ca28; end: 10818cc13;  */

void FUN_10818ca28(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  float fVar6;
  float fVar7;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar5 = param_3;
  FUN_108188360();
  FUN_10818c9e8(*(undefined4 *)(param_1 + 0x70));
  fVar6 = (float)(uVar5 & 0xffffffff) * 0.003921569;
  fVar7 = 1.0;
  if (fVar6 <= 1.0) {
    fVar7 = fVar6;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  *(float *)(param_3 + 0x3c) = fVar7;
  uStack_50 = 0;
  if (*(long *)(param_3 + 0x18) != 0) {
    do {
      func_0x00010818d5e8();
      uStack_50 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_10811e68c(&uStack_48,param_1,&uStack_50);
  uVar4 = uStack_48;
  uStack_48 = 0;
  FUN_108164954((long *)(param_3 + 0x18),uVar4);
  FUN_108115b2c(&uStack_48);
  FUN_108115b2c(&uStack_50);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010818d644(&uStack_58,(long *)(param_1 + 8),param_1 + 0x20);
    uVar4 = uStack_58;
    uStack_58 = 0;
    func_0x000108114f18(param_3 + 8,uVar4);
    func_0x000106f47224(&uStack_58);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x18) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uStack_60 = 0;
    FUN_108166224(param_3 + 0x28);
    FUN_108154c6c(&uStack_60);
  }
  if (((param_4 & 1) == 0) && (*(long *)(param_1 + 0x10) != 0)) {
    func_0x00010818d644(auStack_70,(long *)(param_1 + 0x10),param_1 + 0x48);
    uStack_78 = 0;
    if (*(long *)(param_3 + 8) != 0) {
      do {
        func_0x00010818d5e8();
        uStack_78 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    FUN_1083ba7d0(&uStack_68,5,auStack_70,&uStack_78);
    uVar4 = uStack_68;
    uStack_68 = 0;
    func_0x000108114f18((long *)(param_3 + 8),uVar4);
    func_0x000106f47224(&uStack_68);
    func_0x00010818d5f8();
    func_0x00010818d630();
  }
  return;
}



/* Entry: 10818cc14; end: 10818ccbb;  */

void FUN_10818cc14(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = 0;
  uStack_60 = 0x3f800000;
  uStack_48 = 0;
  uStack_50 = 0x3f800000;
  uStack_40 = 0x103f800000;
  uVar1 = param_3;
  func_0x0001081421c8(param_3,param_4);
  if (((int)uVar1 == 0) || (FUN_10818cfd0(param_4,&uStack_60), (int)param_4 == 0)) {
    uStack_58 = uRam0000000113254e28;
    uStack_60 = uRam0000000113254e20;
    uStack_48 = uRam0000000113254e38;
    uStack_50 = uRam0000000113254e30;
    uStack_40 = uRam0000000113254e40;
  }
  else {
    FUN_108363e94(&uStack_60,param_3);
  }
  FUN_1083be074(param_1,*param_2,&uStack_60);
  return;
}



/* Entry: 10818ccbc; end: 10818cd3f;  */

long * FUN_10818ccbc(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = param_2;
  if (param_3 == 0) {
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    lVar4 = lRam0000000113254e38;
    lVar3 = lRam0000000113254e30;
    lVar2 = lRam0000000113254e28;
    lVar1 = lRam0000000113254e20;
    param_1[6] = lRam0000000113254e28;
    param_1[5] = lVar1;
    param_1[8] = lVar4;
    param_1[7] = lVar3;
    lVar5 = lRam0000000113254e40;
    param_1[9] = lRam0000000113254e40;
    param_1[0xe] = lVar5;
    param_1[0xb] = lVar2;
    param_1[10] = lVar1;
    param_1[0xd] = lVar4;
    param_1[0xc] = lVar3;
    *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  }
  else {
    FUN_10818d514(param_1 + 1,param_3);
  }
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0xc60);
  return param_1;
}



/* Entry: 10818cd40; end: 10818cdef;  */

undefined8 * FUN_10818cd40(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  
  iVar2 = *(int *)(param_1 + 0x11);
  if (-1 < iVar2) {
    if (param_1[0x10] != 0) {
      func_0x00010818d64c();
      uStack_34 = 0x3f800000;
      uStack_2c = 0x40800000;
      FUN_1083762f4(auStack_70,6);
      uVar1 = uStack_68;
      uStack_68 = param_1[0x10];
      param_1[0x10] = 0;
      func_0x00010818d5a0(uVar1);
      func_0x00010818d5f8();
      (**(code **)(*(long *)*param_1 + 0xa8))((long *)*param_1,auStack_70);
      func_0x00010818d628();
      iVar2 = *(int *)(param_1 + 0x11);
    }
    FUN_10833baf4(*param_1,iVar2);
  }
  func_0x000106f47224(param_1 + 0x10);
  FUN_108166234(param_1 + 1);
  return param_1;
}



/* Entry: 10818cdf0; end: 10818ce73;  */

long FUN_10818cdf0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = *param_2;
  *param_2 = 0;
  FUN_10811e68c(&uStack_28,param_1 + 8,&uStack_30);
  uVar1 = uStack_28;
  uStack_28 = 0;
  FUN_108164954(param_1 + 8,uVar1);
  FUN_108115b2c(&uStack_28);
  FUN_108115b2c(&uStack_30);
  return param_1;
}



/* Entry: 10818ce74; end: 10818ceb3;  */

long FUN_10818ce74(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_108165bec();
    uVar1 = param_3[4];
    uVar4 = *param_3;
    uVar3 = param_3[3];
    uVar2 = param_3[2];
    *(undefined8 *)(param_1 + 0x30) = param_3[1];
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return param_1;
}



/* Entry: 10818ceb4; end: 10818cfcf;  */

long FUN_10818ceb4(long param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  plVar3 = (long *)(param_1 + 0x18);
  if (*plVar3 == 0) {
    FUN_108165bec(plVar3,param_2);
    uVar2 = param_3[4];
    uVar6 = *param_3;
    uVar5 = param_3[3];
    uVar4 = param_3[2];
    *(undefined8 *)(param_1 + 0x58) = param_3[1];
    *(undefined8 *)(param_1 + 0x50) = uVar6;
    *(undefined8 *)(param_1 + 0x68) = uVar5;
    *(undefined8 *)(param_1 + 0x60) = uVar4;
    *(undefined8 *)(param_1 + 0x70) = uVar2;
  }
  else {
    uStack_58 = 0;
    uStack_60 = 0x3f800000;
    uStack_48 = 0;
    uStack_50 = 0x3f800000;
    uStack_40 = 0x103f800000;
    if (*param_2 != 0) {
      lVar1 = param_1 + 0x50;
      FUN_10818cfd0(lVar1,&uStack_60);
      if ((int)lVar1 != 0) {
        FUN_1081600e0(auStack_88,&uStack_60,param_3);
        lStack_98 = *plVar3;
        *plVar3 = 0;
        FUN_1083be074(auStack_a0,*param_2,auStack_88);
        FUN_1083ba7d0(&uStack_90,5,&lStack_98,auStack_a0);
        uVar2 = uStack_90;
        uStack_90 = 0;
        func_0x000108114f18(plVar3,uVar2);
        func_0x00010818d630();
        func_0x000106f47224(auStack_a0);
        func_0x00010818d5f8();
      }
    }
  }
  return param_1;
}



/* Entry: 10818cfd0; end: 10818d01b;  */

float * FUN_10818cfd0(double param_1,ulong param_2,long param_3)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  float *pfVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  float *unaff_x19;
  float *unaff_x20;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar5 = param_2;
  func_0x0001081420b8();
  if ((int)uVar5 != 0) {
    if (param_3 != 0) {
      func_0x000108363ab4(param_3);
    }
    return (float *)0x1;
  }
  func_0x000108365e64(param_2,param_3);
  uVar4 = (uint)param_2;
  if (uVar4 < 4) {
    if (uVar4 < 2) {
      fVar7 = unaff_x20[2];
      if (!NAN((fVar7 - fVar7) * unaff_x20[5])) {
        if (unaff_x19 != (float *)0x0) {
          FUN_108363dac(-fVar7,-unaff_x20[5],unaff_x19);
        }
        return (float *)0x1;
      }
    }
    else {
      fVar9 = 1.0 / *unaff_x20;
      fVar7 = 1.0 / unaff_x20[4];
      if (!NAN((fVar9 - fVar9) * fVar7)) {
        fVar10 = -(unaff_x20[2] * fVar9);
        fVar11 = unaff_x20[5];
        bVar2 = NAN((fVar10 - fVar10) * -(fVar11 * fVar7));
        if (unaff_x19 == (float *)0x0) {
          return (float *)(ulong)!bVar2;
        }
        if (bVar2) {
          return (float *)0x0;
        }
        unaff_x19[6] = 0.0;
        unaff_x19[7] = 0.0;
        unaff_x19[3] = 0.0;
        unaff_x19[1] = 0.0;
        *unaff_x19 = fVar9;
        unaff_x19[2] = fVar10;
        unaff_x19[4] = fVar7;
        unaff_x19[5] = -(fVar11 * fVar7);
        unaff_x19[8] = 1.0;
        unaff_x19[9] = (float)(uVar4 | 0x10);
        return (float *)0x1;
      }
    }
  }
  else {
    FUN_108365b30(unaff_x20,uVar4 & 8);
    fVar7 = 1.4551915e-11;
    dVar8 = 0.0;
    if (1.4551915e-11 < ABS((float)param_1)) {
      dVar8 = 1.0 / param_1;
    }
    if (dVar8 != 0.0) {
      bVar2 = unaff_x19 != unaff_x20;
      uStack_58 = 0;
      uStack_60 = 0x3f800000;
      uStack_48 = 0;
      uStack_50 = 0x3f800000;
      uStack_40 = 0x103f800000;
      bVar3 = unaff_x19 != (float *)0x0;
      pfVar6 = (float *)&uStack_60;
      if (bVar2 && bVar3) {
        pfVar6 = unaff_x19;
      }
      fVar9 = unaff_x20[4];
      if ((param_2 & 8) == 0) {
        func_0x000108365ca8();
        *pfVar6 = fVar9;
        fVar9 = -unaff_x20[1];
        func_0x000108365ca8();
        func_0x000108365eb8();
        *(float *)(extraout_x8 + 8) =
             (float)(dVar8 * (-((double)fVar7 * (double)unaff_x20[4]) +
                             (double)unaff_x20[5] * (double)fVar9));
        fVar7 = -unaff_x20[3];
        func_0x000108365ca8();
        *(float *)(extraout_x8_00 + 0xc) = fVar7;
        fVar7 = *unaff_x20;
        func_0x000108365ca8();
        *(float *)(extraout_x8_01 + 0x10) = fVar7;
        *(float *)(extraout_x8_01 + 0x14) =
             (float)(dVar8 * (-((double)unaff_x20[5] * (double)*unaff_x20) +
                             (double)unaff_x20[2] * (double)unaff_x20[3]));
        *(undefined8 *)(extraout_x8_01 + 0x18) = 0;
        fVar7 = 1.0;
      }
      else {
        func_0x000108365c90(dVar8,fVar9,unaff_x20[5],unaff_x20[8],unaff_x20[7]);
        *pfVar6 = fVar9;
        fVar7 = unaff_x20[2];
        func_0x000108365c90();
        func_0x000108365eb8();
        func_0x000108365c90();
        *(float *)(extraout_x8_02 + 8) = fVar7;
        fVar7 = -(unaff_x20[8] * unaff_x20[3]) + unaff_x20[6] * unaff_x20[5];
        func_0x000108365ca8();
        *(float *)(extraout_x8_03 + 0xc) = fVar7;
        fVar7 = -(unaff_x20[6] * unaff_x20[2]) + unaff_x20[8] * *unaff_x20;
        func_0x000108365ca8();
        *(float *)(extraout_x8_04 + 0x10) = fVar7;
        fVar7 = -(unaff_x20[5] * *unaff_x20) + unaff_x20[3] * unaff_x20[2];
        func_0x000108365ca8();
        *(float *)(extraout_x8_05 + 0x14) = fVar7;
        fVar7 = unaff_x20[3];
        func_0x000108365c90();
        *(float *)(extraout_x8_06 + 0x18) = fVar7;
        fVar7 = unaff_x20[1];
        func_0x000108365c90();
        *(float *)(extraout_x8_07 + 0x1c) = fVar7;
        fVar7 = (float)(dVar8 * (double)(-(unaff_x20[3] * unaff_x20[1]) + unaff_x20[4] * *unaff_x20)
                       );
      }
      pfVar1 = (float *)&uStack_60;
      if (bVar2 && bVar3) {
        pfVar1 = unaff_x19;
      }
      pfVar1[8] = fVar7;
      FUN_1082c36d0();
      if ((int)pfVar6 == 0) {
        return pfVar6;
      }
      pfVar1 = (float *)&uStack_60;
      if (bVar2 && bVar3) {
        pfVar1 = unaff_x19;
      }
      pfVar1[9] = unaff_x20[9];
      if (unaff_x19 != unaff_x20) {
        return pfVar6;
      }
      *(undefined8 *)(unaff_x19 + 2) = uStack_58;
      *(undefined8 *)unaff_x19 = uStack_60;
      *(undefined8 *)(unaff_x19 + 6) = uStack_48;
      *(undefined8 *)(unaff_x19 + 4) = uStack_50;
      *(undefined8 *)(unaff_x19 + 8) = uStack_40;
      return pfVar6;
    }
  }
  return (float *)0x0;
}



/* Entry: 10818d01c; end: 10818d11b;  */

undefined8 * FUN_10818d01c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uStack_88;
  undefined1 auStack_80 [60];
  undefined8 uStack_44;
  undefined8 uStack_3c;
  
  if (param_4 != 0) {
    iVar2 = (int)param_1 + 8;
    func_0x00010818c994();
    if (iVar2 != 0) {
      func_0x00010818d64c();
      uStack_44 = 0x3f800000;
      uStack_3c = 0x40800000;
      FUN_10818ca28(param_1 + 1,param_3,auStack_80,1);
      FUN_10833c3b4(*param_1,param_2,auStack_80);
      plVar3 = param_1 + 3;
      if (*plVar3 != 0) {
        func_0x00010818d644(&uStack_88,plVar3,param_1 + 10);
        uVar1 = uStack_88;
        uStack_88 = 0;
        func_0x000108114f18(param_1 + 0x10,uVar1);
        func_0x00010818d5f8();
      }
      FUN_108164954(param_1 + 1,0);
      func_0x000108114f18(plVar3,0);
      FUN_108166224(param_1 + 4,0);
      *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
      func_0x00010818d628();
    }
  }
  return param_1;
}



/* Entry: 10818d11c; end: 10818d313;  */

undefined8 * FUN_10818d11c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  int extraout_w11;
  ulong auStack_140 [5];
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
  undefined8 uStack_c0;
  undefined1 auStack_b4 [16];
  undefined1 uStack_a4;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  
  if (*param_4 != 0) {
    uStack_4c = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    lStack_60 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
    uStack_44 = 0x3f800000;
    uStack_3c = 0x40800000;
    FUN_10818ca28(param_1 + 1,param_3,&uStack_80,0);
    if (lStack_78 != 0) {
      lStack_90 = *param_4;
      *param_4 = 0;
      do {
        func_0x00010818d5e8();
      } while (extraout_w11 != 0);
      auStack_140[0] = auStack_140[0] & 0xffffffffffffff00;
      auStack_140[2] = auStack_140[2] & 0xffffffffffffff00;
      FUN_10818d314(auStack_98,auStack_a0,auStack_140);
      auStack_b4[0] = 0;
      uStack_a4 = 0;
      FUN_1083aebac(&uStack_88,5,&lStack_90,auStack_98,auStack_b4);
      uVar1 = uStack_88;
      uStack_88 = 0;
      FUN_108167c3c(param_4,uVar1);
      FUN_10811e834(&uStack_88);
      FUN_10811e834(auStack_98);
      func_0x000106f47224(auStack_a0);
      FUN_10811e834(&lStack_90);
    }
    lVar2 = lStack_60;
    lStack_60 = *param_4;
    *param_4 = 0;
    uStack_c0 = 0;
    func_0x00010818d5c4(lVar2);
    FUN_10811e834(&uStack_c0);
    FUN_10833c3b4(*param_1,param_2,&uStack_80);
    auStack_140[1] = 0;
    auStack_140[0] = 0;
    auStack_140[3] = 0;
    auStack_140[2] = 0;
    uStack_118 = uRam0000000113254e28;
    auStack_140[4] = uRam0000000113254e20;
    uStack_108 = uRam0000000113254e38;
    uStack_110 = uRam0000000113254e30;
    uStack_100 = uRam0000000113254e40;
    uStack_d8 = uRam0000000113254e40;
    uStack_f0 = uRam0000000113254e28;
    uStack_f8 = uRam0000000113254e20;
    uStack_e0 = uRam0000000113254e38;
    uStack_e8 = uRam0000000113254e30;
    uStack_d0 = 0x3f800000;
    FUN_1081661b0(param_1 + 1,auStack_140);
    FUN_108166234(auStack_140);
    FUN_108375e94(&uStack_80);
  }
  return param_1;
}



/* Entry: 10818d314; end: 10818d35f;  */

void FUN_10818d314(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = *param_1;
  *param_1 = 0;
  FUN_1083b5684(&uStack_28,0,param_2);
  func_0x00010818d5f8();
  return;
}



/* Entry: 10818d360; end: 10818d41f;  */

undefined8 * FUN_10818d360(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uStack_38;
  
  puVar1 = param_1;
  FUN_10818c894(param_1,2);
  puVar2 = puVar1 + 6;
  *puVar2 = 0;
  *puVar1 = &PTR_DAT_110a2c208;
  puVar1[7] = 0;
  puVar1[8] = 0;
  uVar5 = *param_2;
  puVar1[7] = param_2[1];
  *puVar2 = uVar5;
  puVar1[8] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  plVar4 = (long *)puVar1[7];
  for (plVar3 = (long *)*puVar2; plVar3 != plVar4; plVar3 = plVar3 + 1) {
    uVar5 = 0;
    if (*plVar3 != 0) {
      do {
        func_0x00010818d5e8();
        uVar5 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_38 = uVar5;
    FUN_10818a5b8(param_1,&uStack_38);
    func_0x00010818d620();
  }
  return param_1;
}



/* Entry: 10818d420; end: 10818d4a3;  */

void FUN_10818d420(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  long *plVar2;
  long *plVar3;
  undefined8 uStack_38;
  
  *param_1 = &PTR_DAT_110a2c208;
  plVar3 = (long *)param_1[7];
  for (plVar2 = (long *)param_1[6]; plVar2 != plVar3; plVar2 = plVar2 + 1) {
    uVar1 = 0;
    if (*plVar2 != 0) {
      do {
        func_0x00010818d5e8();
        uVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_38 = uVar1;
    FUN_10818a6d4(param_1,&uStack_38);
    func_0x00010818d620();
  }
  FUN_10815640c(param_1 + 6);
  FUN_10818a578(param_1);
  return;
}



/* Entry: 10818d4a4; end: 10818d50b;  */

bool FUN_10818d4a4(long param_1)

{
  long *plVar1;
  ushort uVar2;
  long *plVar3;
  long *plVar4;
  long extraout_x8;
  long lVar5;
  int extraout_w11;
  
  plVar1 = *(long **)(param_1 + 0x38);
  plVar3 = *(long **)(param_1 + 0x30);
  do {
    plVar4 = plVar3;
    if (plVar4 == plVar1) break;
    lVar5 = 0;
    if (*plVar4 != 0) {
      do {
        func_0x00010818d5e8();
        lVar5 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uVar2 = *(ushort *)(lVar5 + 0x28);
    func_0x00010818d620();
    plVar3 = plVar4 + 1;
  } while ((uVar2 >> 2 & 1) == 0);
  return plVar4 != plVar1;
}



/* Entry: 10818d50c; end: 10818d513;  */

void FUN_10818d50c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10818d510);
  (*pcVar1)();
}



/* Entry: 10818d514; end: 10818d59f;  */

undefined8 * FUN_10818d514(undefined8 *param_1,long *param_2)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 uVar1;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  
  uVar1 = 0;
  if (*param_2 != 0) {
    do {
      func_0x00010818d5e8();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *param_1 = uVar1;
  uVar1 = 0;
  if (param_2[1] != 0) {
    do {
      func_0x00010818d5e8();
      uVar1 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  param_1[1] = uVar1;
  uVar1 = 0;
  if (param_2[2] != 0) {
    do {
      func_0x00010818d5e8();
      uVar1 = extraout_x8_01;
    } while (extraout_w11_01 != 0);
  }
  param_1[2] = uVar1;
  uVar1 = 0;
  if (param_2[3] != 0) {
    do {
      func_0x00010818d5e8();
      uVar1 = extraout_x8_02;
    } while (extraout_w11_02 != 0);
  }
  param_1[3] = uVar1;
  _memcpy(param_1 + 4,param_2 + 4,0x54);
  return param_1;
}



/* Entry: 10818d5a0; end: 10818d6e3;  */

void FUN_10818d5a0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010818d640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10818d6e4; end: 10818d707;  */

void FUN_10818d6e4(undefined8 *param_1)

{
  func_0x00010818a53c(param_1,1);
  *param_1 = &PTR_FUN_110a2c260;
  return;
}



/* Entry: 10818d708; end: 10818d903;  */

void FUN_10818d708(ulong *param_1,ulong *param_2,ulong *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  ulong unaff_x19;
  long unaff_x23;
  long unaff_x24;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar5 = *param_2;
  uVar7 = *param_3;
  if (uVar5 == 0) {
    *param_3 = 0;
    *param_1 = uVar7;
    return;
  }
  if (uVar7 == 0) {
    *param_2 = 0;
    *param_1 = uVar5;
    return;
  }
  func_0x00010818e148();
  if ((uVar5 & 1) == 0) {
    iVar4 = (int)*param_3;
    func_0x00010818e148();
    if (iVar4 == 0) {
      puVar6 = (undefined8 *)0x68;
      __Znwm();
      func_0x00010818e170();
      puVar6[6] = unaff_x23;
      *puVar6 = &PTR_FUN_110a2c360;
      uStack_68 = 0;
      uStack_60 = 0;
      puVar6[7] = unaff_x24;
      FUN_10810c9b4(puVar6 + 8);
      if (puVar6[6] != 0) {
        do {
          func_0x00010818e0d4();
        } while (extraout_w11_00 != 0);
      }
      func_0x00010818e124();
      func_0x00010818e188();
      if (puVar6[7] != 0) {
        do {
          func_0x00010818e0d4();
        } while (extraout_w11_01 != 0);
      }
      func_0x00010818e124();
      func_0x00010818e188();
      *param_1 = unaff_x19;
      FUN_108155404(&uStack_68);
      puVar6 = &uStack_60;
      goto LAB_10818d888;
    }
  }
  puVar6 = (undefined8 *)0x80;
  __Znwm();
  func_0x00010818e170();
  *puVar6 = &PTR_FUN_110a2c300;
  puVar6[6] = unaff_x23;
  puVar6[7] = unaff_x24;
  uStack_58 = 0;
  uStack_50 = 0;
  puVar6[9] = 0;
  puVar6[8] = 0x3f800000;
  puVar6[0xb] = 0;
  puVar6[10] = 0x3f80000000000000;
  puVar6[0xd] = 0x3f800000;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0x3f80000000000000;
  puVar6[0xe] = 0;
  if (unaff_x23 != 0) {
    piVar1 = (int *)(unaff_x23 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010818e124();
  func_0x00010818e188();
  if (puVar6[7] != 0) {
    do {
      func_0x00010818e0d4();
    } while (extraout_w11 != 0);
  }
  func_0x00010818e124();
  func_0x00010818e188();
  *param_1 = unaff_x19;
  FUN_108155404(&uStack_58);
  puVar6 = &uStack_50;
LAB_10818d888:
  FUN_108155404(puVar6);
  return;
}



/* Entry: 10818d904; end: 10818da63;  */

void FUN_10818d904(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  int extraout_w11;
  undefined8 unaff_x19;
  long unaff_x22;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    *param_1 = 0;
  }
  else {
    func_0x00010818e148();
    if ((int)lVar4 == 0) {
      puVar5 = (undefined8 *)0x60;
      __Znwm();
      func_0x00010818e1e0();
      *puVar5 = &PTR_FUN_110a2c420;
      puVar5[6] = unaff_x22;
      uStack_48 = 0;
      FUN_10810c9b4(puVar5 + 7);
      if (puVar5[6] != 0) {
        do {
          func_0x00010818e0d4();
        } while (extraout_w11 != 0);
      }
      func_0x00010818e140();
      func_0x00010818e1c8();
      *param_1 = unaff_x19;
      puVar5 = &uStack_48;
    }
    else {
      puVar5 = (undefined8 *)0x78;
      __Znwm();
      func_0x00010818e1e0();
      puVar5[6] = unaff_x22;
      *puVar5 = &PTR_FUN_110a2c3c0;
      uStack_40 = 0;
      puVar5[8] = 0;
      puVar5[7] = 0x3f800000;
      puVar5[10] = 0;
      puVar5[9] = 0x3f80000000000000;
      puVar5[0xc] = 0x3f800000;
      puVar5[0xb] = 0;
      puVar5[0xe] = 0x3f80000000000000;
      puVar5[0xd] = 0;
      if (unaff_x22 != 0) {
        piVar1 = (int *)(unaff_x22 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x00010818e140();
      func_0x00010818e1c8();
      *param_1 = unaff_x19;
      puVar5 = &uStack_40;
    }
    FUN_108155404(puVar5);
  }
  return;
}



/* Entry: 10818da64; end: 10818db1b;  */

undefined8 * FUN_10818da64(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *param_2;
  *param_2 = 0;
  FUN_1081884a0(param_1,&uStack_38,0);
  FUN_108154cb4(&uStack_38);
  *param_1 = &PTR_FUN_110a2c2a8;
  lVar1 = *param_3;
  *param_3 = 0;
  param_1[7] = lVar1;
  uStack_40 = 0;
  if (lVar1 != 0) {
    do {
      func_0x00010818e0d4();
      uStack_40 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x00010818e140();
  FUN_1081687b4(&uStack_40);
  return param_1;
}



/* Entry: 10818db1c; end: 10818db6b;  */

void FUN_10818db1c(long param_1)

{
  int extraout_w11;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    do {
      func_0x00010818e0d4();
    } while (extraout_w11 != 0);
  }
  func_0x00010818e0e4();
  func_0x00010818e130();
  func_0x00010818e138();
  FUN_108188544(param_1);
  return;
}



/* Entry: 10818db6c; end: 10818db6f;  */

void FUN_10818db6c(long param_1)

{
  int extraout_w11;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    do {
      func_0x00010818e0d4();
    } while (extraout_w11 != 0);
  }
  func_0x00010818e0e4();
  func_0x00010818e130();
  func_0x00010818e138();
  FUN_108188544(param_1);
  return;
}



/* Entry: 10818db70; end: 10818db83;  */

void FUN_10818db70(void)

{
  FUN_10818db1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10818db84; end: 10818dc2b;  */

void FUN_10818db84(undefined8 param_1,long param_2)

{
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_80 [64];
  long lStack_40;
  int iStack_38;
  
  func_0x00010818e190();
  iStack_38 = 0;
  if (param_2 != 0) {
    iStack_38 = *(int *)(unaff_x20 + 0xc60);
    *(int *)(unaff_x20 + 0xc60) = iStack_38 + 1;
    *(int *)(*(long *)(unaff_x20 + 0xc40) + 0x58) =
         *(int *)(*(long *)(unaff_x20 + 0xc40) + 0x58) + 1;
  }
  lStack_40 = param_2;
  (**(code **)(**(long **)(unaff_x21 + 0x38) + 0x30))(auStack_80);
  func_0x00010833e2f0();
  FUN_1081885d4();
  FUN_10815b978(&lStack_40);
  return;
}



/* Entry: 10818dc2c; end: 10818dc7f;  */

void FUN_10818dc2c(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  func_0x00010818e104(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_10835e8c4(uVar1,uVar2,0,0,&uStack_60);
  uStack_60 = uVar1;
  uStack_5c = uVar2;
  func_0x0001081885dc(param_1,&uStack_60);
  return;
}



/* Entry: 10818dc80; end: 10818dcfb;  */

undefined4
FUN_10818dc80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             long param_5)

{
  long unaff_x21;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [40];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  func_0x00010818e190();
  FUN_10818a8b4(*(undefined8 *)(param_5 + 0x38));
  func_0x00010818e1a8(*(undefined8 *)(unaff_x21 + 0x38));
  FUN_1081600e0(auStack_90);
  FUN_1081885e4();
  uStack_40 = param_1;
  uStack_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  FUN_108189c38(auStack_68,&uStack_40,1);
  return uStack_40;
}



/* Entry: 10818dcfc; end: 10818dd03;  */

void FUN_10818dcfc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10818dd00);
  (*pcVar1)();
}



/* Entry: 10818dd04; end: 10818dd73;  */

void FUN_10818dd04(void)

{
  long extraout_x8;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x19;
  
  func_0x00010818e160();
  if (extraout_x8 != 0) {
    do {
      func_0x00010818e0d4();
    } while (extraout_w11 != 0);
  }
  func_0x00010818e0e4();
  func_0x00010818e130();
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    do {
      func_0x00010818e0d4();
    } while (extraout_w11_00 != 0);
  }
  func_0x00010818e0e4();
  func_0x00010818e130();
  func_0x00010818e1d8();
  func_0x00010818e138();
  func_0x00010818e1a0();
  return;
}



/* Entry: 10818dd74; end: 10818dd87;  */

void FUN_10818dd74(void)

{
  FUN_10818dd04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10818dd88; end: 10818ddeb;  */

void FUN_10818dd88(void)

{
  long unaff_x21;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [64];
  
  func_0x00010818e190();
  func_0x00010818e1d0();
  func_0x00010818e1b8();
  (**(code **)(**(long **)(unaff_x21 + 0x30) + 0x30))(auStack_70);
  func_0x00010818e104(*(undefined8 *)(unaff_x21 + 0x38));
  FUN_10835e5d0(unaff_x21 + 0x40,auStack_70,auStack_b0);
  func_0x00010818e0f0();
  return;
}



/* Entry: 10818ddec; end: 10818de0b;  */

undefined8 FUN_10818ddec(void)

{
  return 1;
}



/* Entry: 10818de0c; end: 10818de7b;  */

void FUN_10818de0c(void)

{
  long extraout_x8;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x19;
  
  func_0x00010818e160();
  if (extraout_x8 != 0) {
    do {
      func_0x00010818e0d4();
    } while (extraout_w11 != 0);
  }
  func_0x00010818e0e4();
  func_0x00010818e130();
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    do {
      func_0x00010818e0d4();
    } while (extraout_w11_00 != 0);
  }
  func_0x00010818e0e4();
  func_0x00010818e130();
  func_0x00010818e1d8();
  func_0x00010818e138();
  func_0x00010818e1a0();
  return;
}



/* Entry: 10818de7c; end: 10818de8f;  */

void FUN_10818de7c(void)

{
  FUN_10818de0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10818de90; end: 10818def3;  */

void FUN_10818de90(void)

{
  long unaff_x21;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [40];
  
  func_0x00010818e190();
  func_0x00010818e1d0();
  func_0x00010818e1b8();
  func_0x00010818e1a8(*(undefined8 *)(unaff_x21 + 0x30));
  (**(code **)(**(long **)(unaff_x21 + 0x38) + 0x28))(auStack_80);
  FUN_108364350(unaff_x21 + 0x40,auStack_58,auStack_80);
  func_0x00010818e0f0();
  return;
}



/* Entry: 10818def4; end: 10818df13;  */

undefined8 FUN_10818def4(void)

{
  return 0;
}



/* Entry: 10818df14; end: 10818df57;  */

void FUN_10818df14(void)

{
  long extraout_x8;
  int extraout_w11;
  
  func_0x00010818e160();
  if (extraout_x8 != 0) {
    do {
      func_0x00010818e0d4();
    } while (extraout_w11 != 0);
  }
  func_0x00010818e0e4();
  func_0x00010818e130();
  func_0x00010818e138();
  func_0x00010818e1a0();
  return;
}



/* Entry: 10818df58; end: 10818df6b;  */

void FUN_10818df58(void)

{
  FUN_10818df14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10818df6c; end: 10818dfd7;  */

void FUN_10818df6c(long param_1)

{
  ulong uVar1;
  undefined1 auStack_60 [64];
  
  uVar1 = 0;
  func_0x00010818e1d0();
  func_0x00010818e104(*(undefined8 *)(param_1 + 0x30));
  FUN_10835eccc(auStack_60,param_1 + 0x38);
  if ((uVar1 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x44) = 0;
    *(undefined8 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x6c) = 0;
    *(undefined8 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  }
  func_0x00010818e0f0();
  return;
}



/* Entry: 10818dfd8; end: 10818dfff;  */

undefined8 FUN_10818dfd8(void)

{
  return 1;
}



/* Entry: 10818e000; end: 10818e043;  */

void FUN_10818e000(void)

{
  long extraout_x8;
  int extraout_w11;
  
  func_0x00010818e160();
  if (extraout_x8 != 0) {
    do {
      func_0x00010818e0d4();
    } while (extraout_w11 != 0);
  }
  func_0x00010818e0e4();
  func_0x00010818e130();
  func_0x00010818e138();
  func_0x00010818e1a0();
  return;
}



/* Entry: 10818e044; end: 10818e057;  */

void FUN_10818e044(void)

{
  FUN_10818e000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10818e058; end: 10818e0af;  */

void FUN_10818e058(long param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [40];
  
  func_0x00010818e1d0();
  (**(code **)(**(long **)(param_1 + 0x30) + 0x28))(auStack_48);
  puVar1 = auStack_48;
  FUN_10818cfd0(puVar1,param_1 + 0x38);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x000108363ab4(param_1 + 0x38);
  }
  func_0x00010818e0f0();
  return;
}



/* Entry: 10818e0b0; end: 10818e207;  */

undefined8 FUN_10818e0b0(void)

{
  return 0;
}



/* Entry: 10818e208; end: 10818e517;  */

void FUN_10818e208(long param_1)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010818e530(param_1);
  uStack_68._0_4_ = 1;
  uStack_60 = 0xff00000000000001;
  uStack_58 = 0;
  uStack_50._0_4_ = 0;
  uStack_48 = 0x1138270b0;
  func_0x00010818e518(param_1,&uStack_68);
  func_0x00010818ee98();
  FUN_10818e7c8(0);
  *(undefined8 *)(param_1 + 0x38) = 0x3f80000000000002;
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x44) = 2;
  if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x4c) = 1;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 2;
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  uStack_68._0_4_ = 0;
  uStack_60 = 0xff00000000000001;
  uStack_58 = 0;
  uStack_50 = (ulong)uStack_50._4_4_ << 0x20;
  uStack_48 = 0x1138270b0;
  func_0x00010818e518(param_1 + 0x60,&uStack_68);
  func_0x00010818ee98();
  uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  *(undefined4 *)(param_1 + 0x98) = 2;
  func_0x00010818ea48(param_1 + 0xa0,&uStack_68);
  func_0x00010818e81c(&uStack_60);
  *(undefined4 *)(param_1 + 200) = 2;
  if ((*(byte *)(param_1 + 0xd4) & 1) == 0) {
    *(undefined1 *)(param_1 + 0xd4) = 1;
  }
  *(undefined8 *)(param_1 + 0xcc) = 0x100000000;
  *(undefined8 *)(param_1 + 0xd8) = 2;
  *(undefined1 *)(param_1 + 0xe0) = 1;
  *(undefined4 *)(param_1 + 0xe4) = 2;
  if ((*(byte *)(param_1 + 0xec) & 1) == 0) {
    *(undefined1 *)(param_1 + 0xec) = 1;
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0x4080000000000002;
  *(undefined1 *)(param_1 + 0xf8) = 1;
  *(undefined8 *)(param_1 + 0xfc) = 0x3f80000000000002;
  *(undefined1 *)(param_1 + 0x104) = 1;
  *(undefined4 *)(param_1 + 0x108) = 2;
  if ((*(byte *)(param_1 + 0x114) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x114) = 1;
  }
  *(undefined8 *)(param_1 + 0x10c) = 0x13f800000;
  *(undefined4 *)(param_1 + 0x118) = 2;
  if ((*(byte *)(param_1 + 0x120) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x120) = 1;
  }
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0xff00000000000002;
  *(undefined1 *)(param_1 + 300) = 1;
  *(undefined8 *)(param_1 + 0x130) = 0x100000002;
  *(undefined1 *)(param_1 + 0x138) = 1;
  *(undefined8 *)(param_1 + 0x13c) = 0x200000002;
  *(undefined1 *)(param_1 + 0x144) = 1;
  *(undefined4 *)(param_1 + 0x148) = 2;
  func_0x00010818edd0(param_1 + 0x150);
  func_0x00010818ee04(param_1 + 0x150,&UNK_10f47dad5);
  *(undefined1 *)(param_1 + 0x160) = 1;
  *(undefined8 *)(param_1 + 0x168) = 2;
  *(undefined1 *)(param_1 + 0x170) = 1;
  *(undefined8 *)(param_1 + 0x17c) = 0x141c00000;
  *(undefined8 *)(param_1 + 0x174) = 2;
  *(undefined1 *)(param_1 + 0x184) = 1;
  *(undefined8 *)(param_1 + 0x188) = 0x900000002;
  *(undefined1 *)(param_1 + 400) = 1;
  *(undefined8 *)(param_1 + 0x194) = 2;
  *(undefined1 *)(param_1 + 0x19c) = 1;
  *(undefined8 *)(param_1 + 0x1d8) = 2;
  *(undefined1 *)(param_1 + 0x1e0) = 1;
  uStack_68 = 0xff00000000000001;
  uStack_60 = 0;
  func_0x00010818eeb0(param_1 + 0x238);
  func_0x00010818eec0();
  *(undefined8 *)(param_1 + 600) = 0x3f80000000000002;
  *(undefined1 *)(param_1 + 0x260) = 1;
  uStack_68 = 0xff00000000000001;
  uStack_60 = 0;
  func_0x00010818eeb0(param_1 + 0x268);
  func_0x00010818eec0();
  *(undefined8 *)(param_1 + 0x288) = 0x3f80000000000002;
  *(undefined1 *)(param_1 + 0x290) = 1;
  uStack_68 = 0xffffffff00000001;
  uStack_60 = 0;
  func_0x00010818eeb0(param_1 + 0x298);
  func_0x00010818eec0();
  return;
}



/* Entry: 10818e518; end: 10818e6a7;  */

undefined4 * FUN_10818e518(undefined4 *param_1)

{
  *param_1 = 2;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    func_0x00010818e908();
  }
  else {
    FUN_10818e94c();
  }
  return param_1 + 2;
}



/* Entry: 10818e6a8; end: 10818e757;  */

void FUN_10818e6a8(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010818eea0();
  if ((bool)in_ZR) {
    func_0x00010818e7a4(unaff_x19 + 8);
  }
  return;
}



/* Entry: 10818e758; end: 10818e777;  */

void FUN_10818e758(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10818e778();
  }
  return;
}



/* Entry: 10818e778; end: 10818e7c7;  */

long FUN_10818e778(long param_1)

{
  FUN_1083a3c7c(param_1 + 0x20);
  func_0x00010818e7a4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10818e7c8; end: 10818e7d3;  */

void FUN_10818e7c8(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 != 0) {
    return;
  }
  if (param_1 != (int *)0x0) {
    FUN_108153a60(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10818e7d4; end: 10818e84f;  */

void FUN_10818e7d4(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 == 0) {
    if (param_1 != (int *)0x0) {
      FUN_108153a60(param_1 + 2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10818e850; end: 10818e867;  */

void FUN_10818e850(undefined8 *param_1)

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



/* Entry: 10818e868; end: 10818e94b;  */

long FUN_10818e868(long param_1)

{
  FUN_10818e6a8(param_1 + 0x2a0);
  FUN_10818e6a8(param_1 + 0x270);
  FUN_10818e6a8(param_1 + 0x240);
  func_0x00010818e6d0(param_1 + 0x218);
  func_0x00010818e6d0(param_1 + 0x1f0);
  func_0x00010818e6d0(param_1 + 0x1b8);
  func_0x00010818e700(param_1 + 0x150);
  func_0x00010818e728(param_1 + 0xa0);
  FUN_10818e758(param_1 + 0x68);
  FUN_10818e758(param_1 + 8);
  return param_1;
}



/* Entry: 10818e94c; end: 10818e967;  */

void FUN_10818e94c(long param_1)

{
  FUN_10818e9cc();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 10818e968; end: 10818e9bb;  */

undefined8 * FUN_10818e968(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x00010818e990(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10818e9bc; end: 10818e9cb;  */

void FUN_10818e9bc(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  *param_1 = param_2;
  if (piVar4 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *piVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 != 0) {
    return;
  }
  if (piVar4 != (int *)0x0) {
    FUN_108153a60(piVar4 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(piVar4);
  return;
}



/* Entry: 10818e9cc; end: 10818ea27;  */

undefined4 * FUN_10818e9cc(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_1 + 4) = uVar1;
  FUN_10818ea28(param_1 + 6,param_2 + 6);
  return param_1;
}



/* Entry: 10818ea28; end: 10818ea9b;  */

void FUN_10818ea28(void)

{
  func_0x00010818ee78();
  FUN_1083a33c4();
  return;
}



/* Entry: 10818ea9c; end: 10818eab7;  */

void FUN_10818ea9c(long param_1)

{
  FUN_10818ecc8();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10818eab8; end: 10818eaeb;  */

undefined8 * FUN_10818eab8(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    FUN_10818eaec(param_1,*param_2,param_2[1]);
  }
  return param_1;
}



/* Entry: 10818eaec; end: 10818eaf7;  */

void FUN_10818eaec(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = param_3 - param_2 >> 3;
  lVar4 = *param_1;
  if ((ulong)(param_1[2] - lVar4 >> 3) < uVar3) {
    FUN_10818ebcc(param_1);
    plVar2 = param_1;
    FUN_10818ec34(param_1,uVar3);
    func_0x00010818ebfc(param_1,plVar2);
    lVar4 = param_1[1];
  }
  else {
    lVar5 = param_1[1];
    if ((ulong)(lVar5 - lVar4 >> 3) < uVar3) {
      lVar1 = param_2 + (lVar5 - lVar4);
      if (lVar5 != lVar4) {
        _memmove(lVar4,param_2);
        lVar5 = param_1[1];
      }
      param_3 = param_3 - lVar1;
      if (param_3 != 0) {
        _memmove(lVar5,lVar1,param_3);
      }
      lVar4 = lVar5 + param_3;
      goto LAB_10818ebb4;
    }
  }
  if (param_3 - param_2 != 0) {
    func_0x00010818ee88();
  }
  lVar4 = lVar4 + (param_3 - param_2);
LAB_10818ebb4:
  param_1[1] = lVar4;
  return;
}



/* Entry: 10818eaf8; end: 10818ebcb;  */

void FUN_10818eaf8(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  if ((ulong)(param_1[2] - lVar3 >> 3) < param_4) {
    FUN_10818ebcc(param_1);
    plVar2 = param_1;
    FUN_10818ec34(param_1,param_4);
    func_0x00010818ebfc(param_1,plVar2);
    lVar3 = param_1[1];
  }
  else {
    lVar4 = param_1[1];
    if ((ulong)(lVar4 - lVar3 >> 3) < param_4) {
      lVar1 = param_2 + (lVar4 - lVar3);
      if (lVar4 != lVar3) {
        _memmove(lVar3,param_2);
        lVar4 = param_1[1];
      }
      param_3 = param_3 - lVar1;
      if (param_3 != 0) {
        _memmove(lVar4,lVar1,param_3);
      }
      lVar3 = lVar4 + param_3;
      goto LAB_10818ebb4;
    }
  }
  if (param_3 - param_2 != 0) {
    func_0x00010818ee88();
  }
  lVar3 = lVar3 + (param_3 - param_2);
LAB_10818ebb4:
  param_1[1] = lVar3;
  return;
}



/* Entry: 10818ebcc; end: 10818ec33;  */

void FUN_10818ebcc(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10818ec34; end: 10818ec87;  */

/* WARNING: Possible PIC construction at 0x00010818ec70: Changing call to branch */

undefined1  [16] FUN_10818ec34(long *param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3d == 0) {
    uVar2 = param_1[2] - *param_1 >> 2;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      uVar2 = 0x1fffffffffffffff;
    }
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = uVar2;
    return auVar3;
  }
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8(&DAT_10f62a4d8);
  FUN_10818ecac();
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 10818ec88; end: 10818ecab;  */

void FUN_10818ec88(void)

{
  FUN_10818ecac();
  return;
}



/* Entry: 10818ecac; end: 10818ecc7;  */

void FUN_10818ecac(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010818ee78();
  func_0x00010818ece8();
  return;
}



/* Entry: 10818ecc8; end: 10818ed1f;  */

void FUN_10818ecc8(void)

{
  func_0x00010818ee78();
  func_0x00010818ece8();
  return;
}



/* Entry: 10818ed20; end: 10818eda3;  */

void FUN_10818ed20(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  lStack_40 = param_1;
  if (param_4 != 0) {
    func_0x00010818ebfc(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    if (param_3 - param_2 != 0) {
      func_0x00010818ee88();
    }
    *(long *)(param_1 + 8) = lVar1 + (param_3 - param_2);
  }
  uStack_38 = 1;
  FUN_10818eda4(&lStack_40);
  return;
}



/* Entry: 10818eda4; end: 10818ee6f;  */

long FUN_10818eda4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10818e850(param_1);
  }
  return param_1;
}



/* Entry: 10818ee70; end: 10818ef1b;  */

void FUN_10818ee70(void)

{
  return;
}



/* Entry: 10818ef1c; end: 10818ef6f;  */

bool FUN_10818ef1c(undefined8 *param_1)

{
  int iVar1;
  char *pcVar2;
  code *unaff_x19;
  long *unaff_x20;
  char *pcVar3;
  
  func_0x0001081914d0();
  pcVar3 = (char *)*param_1;
  pcVar2 = pcVar3;
  while (pcVar2 < (char *)unaff_x20[1]) {
    iVar1 = (int)*pcVar2;
    (*unaff_x19)();
    pcVar2 = (char *)*unaff_x20;
    if (iVar1 == 0) break;
    pcVar2 = pcVar2 + 1;
    *unaff_x20 = (long)pcVar2;
  }
  return pcVar2 != pcVar3;
}



/* Entry: 10818ef70; end: 10818efab;  */

bool FUN_10818ef70(int param_1)

{
  return (param_1 == 0x2c || param_1 == 0x3b) || param_1 - 1U < 0x20;
}



/* Entry: 10818efac; end: 10818f077;  */

undefined8 * FUN_10818efac(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  puVar1 = param_1;
  func_0x00010818ef90();
  if (((ulong)puVar1 & 1) != 0) {
    return (undefined8 *)0x1;
  }
  puVar1 = param_1;
  func_0x00010818eec8(param_1,&UNK_10f47dada,&uStack_28);
  if ((int)puVar1 != 0) {
    *param_1 = uStack_28;
  }
  return puVar1;
}



/* Entry: 10818f078; end: 10818f0bf;  */

bool FUN_10818f078(undefined8 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)*param_1;
  while ((*param_2 = pcVar1, pcVar1 < (char *)param_1[1] &&
         (((int)*pcVar1 & 0xffffffdfU) - 0x41 < 6 || (int)*pcVar1 - 0x30U < 10))) {
    pcVar1 = pcVar1 + 1;
  }
  return pcVar1 != (char *)*param_1;
}



/* Entry: 10818f0c0; end: 10818f1d3;  */

undefined8 FUN_10818f0c0(long *param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *unaff_x19;
  uint *unaff_x20;
  long lVar8;
  uint uStack_54;
  undefined1 auStack_4f [7];
  long lStack_48;
  
  func_0x000108191380();
  lVar8 = *param_1;
  func_0x00010818efe8();
  iVar3 = (int)param_1;
  if (iVar3 != 0) {
    func_0x0001081915b8();
    if (iVar3 != 0) {
      lVar6 = *unaff_x19;
      lVar7 = lStack_48 - lVar6;
      lVar8 = lVar7;
      if (5 < lVar7) {
        lVar8 = 6;
      }
      lVar1 = lVar6 + 6;
      if (lVar7 < 7) {
        lVar1 = lStack_48;
      }
      _memcpy(auStack_4f,lVar6,lVar8);
      auStack_4f[lVar8] = 0;
      puVar4 = auStack_4f;
      FUN_108406700(puVar4,&uStack_54);
      if (((puVar4 == (undefined1 *)0x0) || (uStack_54 == 0)) ||
         (0x10 < uStack_54 >> 0x10 || (uStack_54 & 0xfffff800) == 0xd800)) {
        uStack_54 = 0xfffd;
      }
      *unaff_x20 = uStack_54;
      *unaff_x19 = lVar1;
      func_0x000108191350();
      return 1;
    }
    if (((byte *)*unaff_x19 == (byte *)unaff_x19[1]) ||
       (bVar2 = *(byte *)*unaff_x19, bVar2 < 0xe && (1 << (ulong)(bVar2 & 0x1f) & 0x3400U) != 0)) {
      *unaff_x20 = 0xfffd;
    }
    else {
      plVar5 = unaff_x19;
      FUN_10841051c();
      *unaff_x20 = (uint)plVar5;
      if (-1 < (int)(uint)plVar5) {
        return 1;
      }
    }
  }
  *unaff_x19 = lVar8;
  return 0;
}



/* Entry: 10818f1d4; end: 10818f347;  */

void FUN_10818f1d4(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_CY;
  bool bVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_50;
  uint uStack_44;
  
  func_0x000108191314();
  func_0x00010818efe8();
  if ((int)param_1 == 0) {
    func_0x000108191358();
    if ((int)param_1 != 0) {
      FUN_10818f348();
      param_1 = unaff_x20;
    }
    unaff_x20 = param_1;
    func_0x000108191430();
    FUN_10818f0c0();
    if ((int)unaff_x20 == 0) {
      unaff_x20 = unaff_x19;
      FUN_10841051c();
      uStack_44 = (uint)unaff_x20;
      if (((int)uStack_44 < 0) ||
         ((in_CY = 0xffffffe4 < uStack_44 - 0x7b, uStack_44 - 0x7b < 0xffffffe6 &&
          (bVar2 = 0xffef007f < uStack_44 - 0x110000,
          in_CY = (uStack_44 == 0x5f || 0xffffffe5 < uStack_44 - 0x5b) || bVar2,
          (uStack_44 != 0x5f && uStack_44 - 0x5b < 0xffffffe6) && !bVar2)))) {
        func_0x000108191470();
        return;
      }
    }
    func_0x000108191600();
  }
  else {
    FUN_10818f348();
  }
  while( true ) {
    while( true ) {
      func_0x0001081913a4();
      if ((bool)in_CY) {
        return;
      }
      func_0x000108191430();
      FUN_10818f0c0();
      if ((int)unaff_x20 == 0) break;
      func_0x000108191600();
    }
    uStack_50 = *unaff_x19;
    unaff_x20 = &uStack_50;
    FUN_10841051c(&uStack_50,unaff_x19[1]);
    uStack_44 = (uint)unaff_x20;
    if ((int)uStack_44 < 0) break;
    uVar1 = (uStack_44 & 0x7fffffdf) - 0x5b;
    bVar2 = 0xfffffff5 < uStack_44 - 0x3a;
    in_CY = bVar2 || 0xffffffe4 < uVar1;
    if (((!bVar2 && uVar1 < 0xffffffe6) && (in_CY = 0x2c < uStack_44, uStack_44 != 0x2d)) &&
       (bVar2 = 0xffef007f < uStack_44 - 0x110000, in_CY = uStack_44 == 0x5f || bVar2,
       uStack_44 != 0x5f && !bVar2)) {
      return;
    }
    func_0x000108191600();
    *unaff_x19 = uStack_50;
  }
  return;
}



/* Entry: 10818f348; end: 10818f35f;  */

/* WARNING: Removing unreachable block (ram,0x0001083a3878) */

void FUN_10818f348(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined1 *puVar4;
  uint *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 auStack_58 [8];
  
  if (param_2 == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = param_1;
    FUN_1083a3d50();
  }
  if (plVar6 != (long *)0x0) {
    uVar7 = (ulong)*(uint *)*param_1;
    plVar2 = (long *)(uVar7 ^ 0xffffffff);
    if ((long)plVar6 + uVar7 >> 0x20 == 0) {
      plVar2 = plVar6;
    }
    if (plVar2 != (long *)0x0) {
      uVar1 = (long)plVar2 + uVar7;
      if (((uint *)*param_1)[1] == 1 && (uVar1 ^ uVar7) < 4) {
        plVar6 = param_1;
        func_0x0001083a3dbc(param_1,0xffffffffffffffff,param_2);
        func_0x0001083a3dd4((long)plVar6 + uVar7);
        *(undefined1 *)((long)plVar6 + uVar1) = 0;
        *(int *)*param_1 = (int)uVar1;
      }
      else {
        puVar4 = auStack_58;
        FUN_1083a3310(puVar4,(long)plVar2 + (ulong)*(uint *)*param_1);
        func_0x0001083a3de0();
        if (uVar7 != 0) {
          func_0x0001083a3d9c(puVar4,*param_1 + 8);
        }
        func_0x0001083a3dd4(puVar4 + uVar7);
        puVar5 = (uint *)*param_1;
        lVar3 = *puVar5 - uVar7;
        if (uVar7 <= *puVar5 && lVar3 != 0) {
          _memcpy(puVar4 + uVar7 + (long)plVar2,(long)puVar5 + uVar7 + 8,lVar3);
          puVar5 = (uint *)*param_1;
        }
        func_0x0001083a3cdc(puVar5);
      }
    }
  }
  return;
}



/* Entry: 10818f360; end: 10818f3b7;  */

bool FUN_10818f360(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *unaff_x19;
  int unaff_w20;
  long lVar4;
  
  func_0x0001081914d0();
  lVar4 = 10;
  ppuVar1 = &PTR_DAT_110a2c470;
  do {
    ppuVar3 = ppuVar1;
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) goto LAB_10818f3a8;
    iVar2 = unaff_w20;
    func_0x00010818efe8();
    ppuVar1 = ppuVar3 + 2;
  } while (iVar2 == 0);
  *unaff_x19 = *(undefined4 *)(ppuVar3 + 1);
LAB_10818f3a8:
  return lVar4 != 0;
}



/* Entry: 10818f3b8; end: 10818f447;  */

bool FUN_10818f3b8(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 *puStack_38;
  
  uVar5 = *param_1;
  puStack_38 = (undefined4 *)0x1138270b0;
  puVar3 = param_1;
  FUN_10818f1d4(param_1,&puStack_38);
  puVar1 = puStack_38;
  if (((ulong)puVar3 & 1) == 0) {
    bVar2 = false;
    puVar3 = param_1;
  }
  else {
    puVar4 = puStack_38 + 2;
    FUN_108406940(puVar4,*puStack_38,param_2);
    bVar2 = puVar4 != (undefined4 *)0x0;
    puVar3 = (undefined8 *)0x0;
    if (!bVar2) {
      puVar3 = param_1;
    }
  }
  FUN_1083a3ca0(puVar1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = uVar5;
  }
  return bVar2;
}



/* Entry: 10818f448; end: 10818f523;  */

undefined8 FUN_10818f448(long *param_1)

{
  int iVar1;
  long *unaff_x19;
  uint *unaff_x20;
  undefined8 uVar2;
  long lVar3;
  int *piStack_58;
  uint uStack_4c;
  long lStack_48;
  
  func_0x000108191380();
  lVar3 = *param_1;
  func_0x00010818efe8();
  iVar1 = (int)param_1;
  if ((iVar1 == 0) || (func_0x0001081915b8(), iVar1 == 0)) {
    uVar2 = 0;
    goto LAB_10818f4c4;
  }
  FUN_1083a3394(&piStack_58,*unaff_x19,lStack_48 - *unaff_x19);
  FUN_108406700(piStack_58 + 2,&uStack_4c);
  if (*piStack_58 == 3) {
    uStack_4c = (uStack_4c >> 4 & 0xff) << 0xc | (uStack_4c >> 8 & 0xf) << 0x14 |
                uStack_4c & 0xf | (uStack_4c & 0xff) << 4;
LAB_10818f4f0:
    *unaff_x20 = uStack_4c | 0xff000000;
    *unaff_x19 = lStack_48;
    uVar2 = 1;
    unaff_x19 = (long *)0x0;
  }
  else {
    if (*piStack_58 == 6) goto LAB_10818f4f0;
    uVar2 = 0;
  }
  FUN_1083a3ca0(piStack_58);
  if (unaff_x19 == (long *)0x0) {
    return uVar2;
  }
LAB_10818f4c4:
  *unaff_x19 = lVar3;
  return uVar2;
}



/* Entry: 10818f524; end: 10818f61b;  */

void FUN_10818f524(undefined8 *param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte *pbVar5;
  char *pcVar6;
  uint extraout_w8;
  long extraout_x8;
  uint extraout_w9;
  long *unaff_x19;
  uint *unaff_x20;
  float fVar7;
  float fStack_24;
  
  func_0x000108191380();
  pbVar5 = (byte *)*param_1;
  FUN_1084067d4();
  if (pbVar5 != (byte *)0x0) {
    bVar2 = *pbVar5;
    if (bVar2 != 0x2e) {
      cVar3 = SBORROW4((uint)bVar2,0x25);
      cVar4 = (int)(bVar2 - 0x25) < 0;
      if (bVar2 == 0x25) {
        func_0x000108191408(((float)(int)*unaff_x20 * 255.0) / 100.0);
        func_0x00010819147c();
        uVar1 = extraout_w8;
        if (cVar4 == cVar3) {
          uVar1 = extraout_w9;
        }
        *unaff_x20 = uVar1;
        pbVar5 = pbVar5 + 1;
      }
      *unaff_x19 = (long)pbVar5;
      return;
    }
  }
  pcVar6 = (char *)*unaff_x19;
  func_0x000108406870(pcVar6,&fStack_24);
  if ((pcVar6 != (char *)0x0) && (*pcVar6 == '%')) {
    fVar7 = (fStack_24 * 255.0) / 100.0;
    func_0x000108191408(pcVar6 + 1);
    fVar7 = (float)NEON_fminnm(fVar7,0x4effffff);
    if (fVar7 <= -2.1474835e+09) {
      fVar7 = -2.1474835e+09;
    }
    uVar1 = (int)fVar7 & ((int)fVar7 >> 0x1f ^ 0xffffffffU);
    if (0xfe < (int)uVar1) {
      uVar1 = 0xff;
    }
    *unaff_x20 = uVar1;
    *unaff_x19 = extraout_x8;
  }
  return;
}



/* Entry: 10818f61c; end: 10818f6cb;  */

void FUN_10818f61c(ulong param_1)

{
  uint *unaff_x20;
  byte bStack_3c;
  uint uStack_38;
  int iStack_34;
  
  func_0x000108191314();
  func_0x00010818ef90();
  func_0x000108191358();
  if ((param_1 & 1) != 0) {
    func_0x000108191350();
    func_0x0001081912d0();
    if ((int)param_1 != 0) {
      func_0x000108191350();
      func_0x000108191430();
      FUN_10818f524();
      if (((int)param_1 != 0) && (func_0x00010819139c(), (int)param_1 != 0)) {
        func_0x000108191464();
        FUN_10818f524();
        if (((int)param_1 != 0) &&
           ((func_0x00010819139c(), (int)param_1 != 0 && (func_0x0001081914c0(), (param_1 & 1) != 0)
            ))) {
          *unaff_x20 = iStack_34 << 0x10 | (uStack_38 & 0xff) << 8 | (uint)bStack_3c | 0xff000000;
          func_0x000108191350();
          func_0x0001081912c0();
          if ((param_1 & 1) != 0) {
            return;
          }
        }
      }
    }
  }
  func_0x000108191470();
  return;
}



/* Entry: 10818f6cc; end: 10818f7b3;  */

void FUN_10818f6cc(ulong param_1)

{
  char in_NG;
  char in_OV;
  int iVar1;
  ulong uVar2;
  int extraout_w8;
  int extraout_w9;
  ulong *unaff_x19;
  uint *unaff_x20;
  byte bStack_40;
  uint uStack_3c;
  uint uStack_38;
  float fStack_34;
  
  func_0x000108191314();
  func_0x00010818ef90();
  func_0x000108191358();
  iVar1 = (int)param_1;
  if ((param_1 & 1) != 0) {
    func_0x000108191350();
    func_0x0001081912d0();
    if (iVar1 != 0) {
      func_0x000108191350();
      func_0x000108191464();
      FUN_10818f524();
      if ((((iVar1 != 0) && (func_0x00010819139c(), iVar1 != 0)) &&
          (func_0x0001081914c0(), iVar1 != 0)) &&
         (((func_0x00010819139c(), iVar1 != 0 && (func_0x0001081914c0(), iVar1 != 0)) &&
          (func_0x00010819139c(), iVar1 != 0)))) {
        uVar2 = *unaff_x19;
        func_0x000108406870(uVar2,&fStack_34);
        if (uVar2 != 0) {
          func_0x000108191408(fStack_34 * 255.0);
          func_0x00010819147c();
          iVar1 = extraout_w8;
          if (in_NG == in_OV) {
            iVar1 = extraout_w9;
          }
          *unaff_x19 = uVar2;
          *unaff_x20 = (uStack_38 & 0xff) << 0x10 | iVar1 << 0x18 | (uStack_3c & 0xff) << 8 |
                       (uint)bStack_40;
          func_0x000108191350();
          func_0x0001081912c0();
          if ((uVar2 & 1) != 0) {
            return;
          }
        }
      }
    }
  }
  func_0x000108191470();
  return;
}



/* Entry: 10818f7b4; end: 10818f86b;  */

uint * FUN_10818f7b4(ulong param_1)

{
  uint *puVar1;
  uint *unaff_x20;
  byte bStack_3c;
  uint uStack_38;
  int iStack_34;
  
  func_0x0001081914d0();
  FUN_10818f448();
  if ((((param_1 & 1) == 0) && (puVar1 = unaff_x20, FUN_10818f3b8(), ((ulong)puVar1 & 1) == 0)) &&
     (puVar1 = unaff_x20, FUN_10818f6cc(), ((ulong)puVar1 & 1) == 0)) {
    puVar1 = unaff_x20;
    func_0x000108191314();
    func_0x00010818ef90();
    func_0x000108191358();
    if (((ulong)puVar1 & 1) != 0) {
      func_0x000108191350();
      func_0x0001081912d0();
      if ((int)puVar1 != 0) {
        func_0x000108191350();
        func_0x000108191430();
        FUN_10818f524();
        if (((int)puVar1 != 0) && (func_0x00010819139c(), (int)puVar1 != 0)) {
          func_0x000108191464();
          FUN_10818f524();
          if (((int)puVar1 != 0) &&
             ((func_0x00010819139c(), (int)puVar1 != 0 &&
              (func_0x0001081914c0(), ((ulong)puVar1 & 1) != 0)))) {
            *unaff_x20 = iStack_34 << 0x10 | (uStack_38 & 0xff) << 8 | (uint)bStack_3c | 0xff000000;
            func_0x000108191350();
            func_0x0001081912c0();
            if (((ulong)puVar1 & 1) != 0) {
              return (uint *)0x1;
            }
          }
        }
      }
    }
    func_0x000108191470();
    return puVar1;
  }
  return (uint *)0x1;
}



/* Entry: 10818f86c; end: 10818fb2b;  */

undefined8 FUN_10818f86c(ulong param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong *puVar6;
  undefined8 *unaff_x19;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint *puStack_80;
  ulong *puStack_78;
  long lStack_70;
  long lStack_68;
  ulong *puStack_60;
  ulong *puStack_58;
  
  func_0x000108191380();
  func_0x00010818f80c();
  if ((int)param_1 != 0) {
    FUN_108190f90(&puStack_78,(ulong)puStack_80 & 0xffffffff,param_3);
    func_0x0001081913b8();
LAB_10818f9a0:
    func_0x000108191568();
    return 1;
  }
  func_0x000108191358();
  if ((int)param_1 != 0) {
    puStack_78 = (ulong *)0xff00000000000000;
    if (*param_3 == param_3[1]) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0x20;
      __Znwm();
      FUN_108190fe0();
    }
    lStack_70 = lVar3;
    func_0x0001081913b8();
    goto LAB_10818f9a0;
  }
  uVar8 = *unaff_x19;
  func_0x000108191350();
  func_0x000108191358();
  iVar2 = (int)param_1;
  if ((param_1 & 1) == 0) goto LAB_10818fab8;
  func_0x000108191350();
  func_0x0001081912d0();
  if (iVar2 == 0) goto LAB_10818fab8;
  func_0x000108191350();
  puStack_80 = (uint *)0x1138270b0;
  puVar4 = unaff_x19;
  FUN_10818f1d4();
  if (((((int)puVar4 == 0) || (*puStack_80 < 2)) || ((char)puStack_80[2] != '-')) ||
     (*(char *)((long)puStack_80 + 9) != '-')) {
LAB_10818fab4:
    FUN_1083a3ca0(puStack_80);
    goto LAB_10818fab8;
  }
  FUN_1083a3b88(&puStack_80,0,2);
  puVar6 = (ulong *)(param_3 + 2);
  puVar4 = (undefined8 *)param_3[1];
  if (puVar4 < (undefined8 *)*puVar6) {
    FUN_1083a33c4(puVar4,&puStack_80);
    puVar7 = puVar4 + 1;
    param_3[1] = (long)puVar7;
  }
  else {
    plVar5 = param_3;
    FUN_108153b18(param_3,((long)puVar4 - *param_3 >> 3) + 1);
    lVar3 = *param_3;
    lVar1 = param_3[1];
    puStack_58 = puVar6;
    if (plVar5 == (long *)0x0) {
      puStack_78 = (ulong *)0x0;
    }
    else {
      FUN_108153be4();
      puStack_78 = puVar6;
    }
    lVar3 = (long)puStack_78 + (lVar1 - lVar3);
    puStack_60 = puStack_78 + (long)plVar5;
    lStack_70 = lVar3;
    FUN_1083a33c4(lVar3,&puStack_80);
    lStack_68 = lVar3 + 8;
    FUN_108153b58(param_3,&puStack_78);
    puVar7 = (undefined8 *)param_3[1];
    puVar4 = (undefined8 *)0x0;
    func_0x000108153d84();
  }
  param_3[1] = (long)puVar7;
  func_0x000108191350();
  func_0x000108191358();
  if (((ulong)puVar4 & 1) == 0) {
    func_0x000108191518();
    func_0x0001081913b8();
LAB_10818fa6c:
    func_0x000108191568();
    func_0x0001081915b0();
  }
  else {
    func_0x000108191350();
    puVar7 = unaff_x19;
    func_0x00010818eec8();
    if ((int)puVar7 != 0) {
      func_0x000108191518();
      func_0x0001081913b8();
      puVar4 = puVar7;
      goto LAB_10818fa6c;
    }
    if (0xff < (ulong)(param_3[1] - *param_3)) goto LAB_10818fab4;
    func_0x000108191644();
    FUN_10818f86c();
    puVar4 = puVar7;
    func_0x0001081915b0();
    if (((ulong)puVar7 & 1) == 0) goto LAB_10818fab8;
  }
  func_0x000108191350();
  func_0x0001081912c0();
  if (((ulong)puVar4 & 1) != 0) {
    return 1;
  }
LAB_10818fab8:
  *unaff_x19 = uVar8;
  return 0;
}



/* Entry: 10818fb2c; end: 10818fb8f;  */

void FUN_10818fb2c(ulong param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000108191360();
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000108191644();
  FUN_10818f86c();
  FUN_108153a60(&uStack_38);
  if ((param_1 & 1) != 0) {
    func_0x000108191350();
    func_0x000108191324();
  }
  return;
}



/* Entry: 10818fb90; end: 10818fc87;  */

bool FUN_10818fb90(long *param_1,undefined4 *param_2)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  long lStack_38;
  
  func_0x00010818ef90();
  plVar6 = param_1;
  func_0x00010818efe8(param_1,&UNK_10f47daf6);
  if (((ulong)plVar6 & 1) == 0) {
    plVar6 = param_1;
    func_0x00010818eec8(param_1,&UNK_10f47daf8,0);
    uVar8 = 1;
    if ((int)plVar6 != 0) {
      uVar8 = 2;
    }
  }
  else {
    uVar8 = 0;
  }
  lVar9 = 0;
  lVar7 = *param_1;
  while( true ) {
    pcVar2 = (char *)(lVar7 + lVar9);
    uVar5 = pcVar2 == (char *)param_1[1];
    if (((char *)param_1[1] <= pcVar2) || (uVar5 = true, *pcVar2 == ')')) break;
    *param_1 = lVar7 + lVar9 + 1;
    lVar9 = lVar9 + 1;
  }
  if (lVar9 != 0) {
    FUN_1083a3394(&lStack_38,lVar7,lVar9);
    lVar7 = lStack_38;
    if ((lStack_38 != 0) && (func_0x000108191570(), !(bool)uVar5)) {
      piVar1 = (int *)(lVar7 + 4);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *param_2 = uVar8;
    if (*(long *)(param_2 + 2) != lVar7) {
      *(long *)(param_2 + 2) = lVar7;
    }
    FUN_1083a3ca0();
    FUN_1083a3ca0(lStack_38);
  }
  return lVar9 != 0;
}



/* Entry: 10818fc88; end: 10818fd63;  */

void FUN_10818fc88(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  int unaff_w19;
  undefined4 *unaff_x20;
  undefined4 auStack_58 [2];
  undefined4 uStack_50;
  ulong uStack_48;
  undefined4 auStack_40 [2];
  undefined8 uStack_38;
  
  func_0x000108191314();
  func_0x00010818ef90();
  func_0x000108191358();
  iVar1 = (int)param_1;
  if ((param_1 & 1) != 0) {
    func_0x000108191350();
    func_0x0001081912d0();
    if (iVar1 != 0) {
      func_0x000108191350();
      auStack_40[0] = 0;
      uStack_38 = 0x1138270b0;
      FUN_10818fb90();
      if (unaff_w19 == 0) {
        func_0x0001081915c4();
      }
      else {
        FUN_108191054(auStack_58,auStack_40);
        *unaff_x20 = auStack_58[0];
        unaff_x20[2] = uStack_50;
        uVar2 = *(ulong *)(unaff_x20 + 4);
        if (uVar2 != uStack_48) {
          *(ulong *)(unaff_x20 + 4) = uStack_48;
          uStack_48 = uVar2;
        }
        uVar2 = uStack_48;
        FUN_1083a3ca0();
        func_0x0001081915c4();
        func_0x000108191350();
        func_0x0001081912c0();
        if ((uVar2 & 1) != 0) {
          return;
        }
      }
    }
  }
  func_0x000108191470();
  return;
}



/* Entry: 10818fd64; end: 10818fdd7;  */

bool FUN_10818fd64(long *param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long *unaff_x19;
  long lStack_28;
  
  if (*param_1 == param_1[1]) {
    bVar2 = false;
  }
  else {
    func_0x000108191664();
    FUN_1083a3348();
    lVar3 = *param_2;
    if (lVar3 != lStack_28) {
      *param_2 = lStack_28;
      lStack_28 = lVar3;
    }
    FUN_1083a3ca0(lStack_28);
    uVar1 = *(uint *)*param_2;
    lVar3 = *unaff_x19;
    *unaff_x19 = lVar3 + (ulong)uVar1;
    bVar2 = lVar3 + (ulong)uVar1 == unaff_x19[1];
  }
  return bVar2;
}


