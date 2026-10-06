/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10787262c; end: 10787271b;  */

void FUN_10787262c(float param_1,float param_2,float param_3,long param_4,uint param_5,long param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  
  iVar6 = (int)(param_2 * 270.0);
  uVar1 = (int)(iVar6 - param_5) >> 0x1f;
  uVar3 = iVar6 - param_5 & (uVar1 ^ 0xffffffff);
  iVar7 = (int)(param_1 * param_3);
  uVar2 = (int)(iVar7 - param_5) >> 0x1f;
  uVar4 = iVar7 - param_5 & (uVar2 ^ 0xffffffff);
  uVar8 = (ulong)uVar4;
  dVar10 = (double)NEON_fminnm((double)(int)(param_5 + iVar6),0x4070e00000000000);
  dVar9 = (double)NEON_fminnm((double)param_1,(double)(int)(param_5 + iVar7));
  iVar5 = (int)dVar10 - uVar3;
  if (0 < iVar5 && (int)uVar4 < (int)dVar9) {
    uVar2 = (param_5 - iVar7 & uVar2) * param_5 * 2;
    param_6 = param_6 + (ulong)uVar3 * 4 + uVar8 * 0x438;
    param_4 = param_4 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2) +
                        (long)(int)(param_5 - iVar6 & uVar1) * 4;
    for (; uVar8 < (uint)(int)dVar9; uVar8 = uVar8 + 1) {
      func_0x0001078729ec(param_6,param_4,param_6,iVar5);
      param_6 = param_6 + 0x438;
      param_4 = param_4 + (-(ulong)((param_5 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                          (ulong)(param_5 * 2) << 2);
    }
  }
  return;
}



/* Entry: 107872bf0; end: 107872cb3;  */

void FUN_107872bf0(long *param_1,long *param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  float fVar3;
  undefined1 auStack_90 [8];
  float fStack_88;
  undefined4 uStack_84;
  double dStack_80;
  double dStack_78;
  double dStack_68;
  
  func_0x000107873384(*(long *)(*param_1 + 0x20) - *(long *)(*param_1 + 0x18));
  func_0x000107872cb4();
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0xc) {
    func_0x0001078731f4();
    fVar3 = (float)((dStack_78 / dStack_68 + 1.0) * 0.5);
    func_0x0001078733ac(*param_1,fVar3,(float)((dStack_80 / dStack_68 + 1.0) * 0.5),1.0 - fVar3);
    fStack_88 = fVar3;
    uStack_84 = NEON_ucvtf((uint)*(ushort *)(lVar2 + 6));
    func_0x000107872cfc(extraout_x8 + 0x18,auStack_90);
  }
  return;
}



/* Entry: 107872e28; end: 107872e43;  */

long * FUN_107872e28(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  func_0x000107872e70();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107872fa8; end: 107872fd3;  */

long * FUN_107872fa8(long *param_1)

{
  func_0x000107872fd4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107873100; end: 107873153;  */

long FUN_107873100(long param_1)

{
  long lStack_28;
  
  func_0x000107873128(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000107873198(&lStack_28);
  return param_1;
}



/* Entry: 107873960; end: 1078739e3;  */

undefined8 * FUN_107873960(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000107873998(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 107873c9c; end: 107873d5f;  */

bool FUN_107873c9c(uint param_1)

{
  if (((0x2f < param_1) || ((1L << ((ulong)param_1 & 0x3f) & 0xab4100000400U) == 0)) &&
     ((8 < param_1 - 0x200b || ((1 << (ulong)(param_1 - 0x200b & 0x1f) & 0x121U) == 0)))) {
    return param_1 == 0xad || param_1 == 0xb7;
  }
  return true;
}



/* Entry: 1078745fc; end: 107874627;  */

bool FUN_1078745fc(uint param_1)

{
  return (param_1 - 0xe00 < 0xfffffb00 && param_1 - 0x10a0 < 0xfffffe60) &&
         (param_1 & 0xff80) != 0x1780;
}



/* Entry: 1078748a8; end: 107874b1f;  */

undefined * FUN_1078748a8(long param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 auStack_b8 [88];
  
  do {
    uVar3 = uRam0000000113823da8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113823da8,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      uRam0000000113823da8 = uRam0000000113823da8 + 1;
    }
  } while (cVar1 != '\0');
  if (uVar3 < 4) {
    FUN_1077f3c4c();
    func_0x0001077f3790();
    func_0x0001078bc200(auStack_b8,param_1 + 0x1c0);
    puVar4 = (undefined *)(uVar3 * 0x400 + 0x113822da8);
    _snprintf(puVar4,0x400,&UNK_10f430713);
    func_0x000107874b20(auStack_b8);
  }
  else {
    puVar4 = &UNK_10f4306e7;
  }
  return puVar4;
}



/* Entry: 107874cac; end: 107874cf3;  */

void FUN_107874cac(long param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = param_1;
  func_0x000107874cf4();
  if ((lVar1 == 1) && (func_0x000107874d7c(), extraout_x8 != 0)) {
    func_0x000107874d6c();
    func_0x000107874d94();
    func_0x000107874d8c();
  }
  func_0x000107874d30(param_1);
  return;
}



/* Entry: 107874ea8; end: 107874f23;  */

float FUN_107874ea8(float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  float fVar2;
  double dVar3;
  
  param_3 = param_3 - param_2;
  fVar2 = 0.0;
  if (param_3 != 0.0) {
    if (param_1 == 1.0) {
      fVar2 = (param_4 - param_2) / param_3;
    }
    else {
      dVar3 = (double)param_1;
      dVar1 = dVar3;
      _pow(dVar3,(double)(param_4 - param_2));
      _pow(dVar3,(double)param_3);
      fVar2 = (float)((dVar1 + -1.0) / (dVar3 + -1.0));
    }
  }
  return fVar2;
}



/* Entry: 1078755cc; end: 10787568f;  */

undefined8 FUN_1078755cc(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *param_1;
  lVar2 = param_1[1];
  if (lVar8 != lVar2) {
    lVar1 = *param_2;
    lVar3 = param_2[1];
    if (lVar1 != lVar3) {
      for (; lVar9 = lVar1, lVar4 = lVar1, lVar8 != lVar2 + -4; lVar8 = lVar8 + 4) {
        for (; lVar9 != lVar3 + -4; lVar9 = lVar9 + 4) {
          lVar6 = lVar8;
          func_0x000107875ba8();
          iVar5 = (int)lVar8 + 4;
          func_0x000107875ba8();
          if ((int)lVar6 != iVar5) {
            lVar6 = lVar8;
            func_0x000107875af0(lVar8,lVar8 + 4,lVar9);
            lVar7 = lVar8;
            func_0x000107875af0(lVar8,lVar8 + 4,lVar4 + 4);
            if ((int)lVar6 != (int)lVar7) {
              return 1;
            }
          }
          lVar4 = lVar4 + 4;
        }
      }
    }
  }
  return 0;
}



/* Entry: 107875cd4; end: 107875d2b;  */

undefined1  [16] FUN_107875cd4(long *param_1)

{
  bool bVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_b0 [96];
  undefined8 uStack_50;
  
  _bzero(auStack_b0,0x90);
  plVar2 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar2 = param_1;
  }
  _stat(plVar2,auStack_b0);
  bVar1 = (int)plVar2 == 0;
  if (!bVar1) {
    uStack_50 = 0;
  }
  auVar3[8] = bVar1;
  auVar3._0_8_ = uStack_50;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 107876150; end: 1078761d7;  */

void FUN_107876150(ulong param_1)

{
  ulong uStack_50;
  undefined8 uStack_48;
  
  func_0x0001078765b0();
  if ((param_1 & 1) != 0) {
    func_0x0001078765fc();
    func_0x00010787666c(uStack_50,uStack_48);
    if ((uStack_50 & 1) != 0) {
      func_0x000107876648();
      func_0x0001078765e8();
      func_0x00010787665c();
      func_0x00010787660c();
      func_0x00010787663c();
      func_0x000107876664();
      return;
    }
  }
  func_0x000107876630();
  return;
}



/* Entry: 10787675c; end: 1078769cb;  */

void FUN_10787675c(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  dVar4 = param_2[3];
  dVar5 = param_2[4];
  dVar6 = param_2[5];
  dVar7 = param_2[6];
  dVar8 = param_2[7];
  dVar9 = param_2[8];
  dVar10 = *param_3;
  dVar11 = param_3[1];
  dVar12 = param_3[2];
  *param_1 = dVar4 * dVar11 + dVar1 * dVar10 + dVar7 * dVar12;
  param_1[1] = dVar5 * dVar11 + dVar2 * dVar10 + dVar8 * dVar12;
  param_1[2] = dVar6 * dVar11 + dVar3 * dVar10 + dVar9 * dVar12;
  dVar10 = param_3[3];
  dVar11 = param_3[4];
  dVar12 = param_3[5];
  param_1[3] = dVar4 * dVar11 + dVar1 * dVar10 + dVar7 * dVar12;
  param_1[4] = dVar5 * dVar11 + dVar2 * dVar10 + dVar8 * dVar12;
  param_1[5] = dVar6 * dVar11 + dVar3 * dVar10 + dVar9 * dVar12;
  dVar10 = param_3[6];
  dVar11 = param_3[7];
  dVar12 = param_3[8];
  param_1[6] = dVar4 * dVar11 + dVar1 * dVar10 + dVar7 * dVar12;
  param_1[7] = dVar5 * dVar11 + dVar2 * dVar10 + dVar8 * dVar12;
  param_1[8] = dVar6 * dVar11 + dVar3 * dVar10 + dVar9 * dVar12;
  return;
}



/* Entry: 1078771b0; end: 1078772cb;  */

void FUN_1078771b0(double *param_1,double param_2,double param_3,double param_4,double *param_5,
                  double *param_6,undefined8 param_7)

{
  double dVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  
  func_0x00010785d070(param_7);
  dStack_50 = param_2;
  dStack_48 = param_3;
  dStack_40 = param_4;
  func_0x00010785d2f8(&dStack_50);
  param_2 = ABS(param_2);
  dVar1 = 1e-06;
  if (param_2 < 1e-06) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0x3ff0000000000000;
    param_4 = -1.0;
    param_2 = ABS(dStack_50 + -1.0);
    if (((param_2 < 1e-06) && (param_2 = ABS(dStack_48), param_2 < 1e-06)) &&
       (param_2 = ABS(dStack_40), param_2 < 1e-06)) {
      dVar1 = 0.0;
      uStack_68 = 0x3ff0000000000000;
      uStack_70 = 0;
    }
    func_0x00010785d070(param_6,&uStack_70);
    dStack_50 = dVar1;
    dStack_48 = param_2;
    dStack_40 = param_4;
  }
  func_0x00010785d070(param_6,&dStack_50);
  param_1[1] = dStack_48;
  *param_1 = dStack_50;
  param_1[2] = dStack_40;
  param_1[3] = 0.0;
  param_1[4] = dVar1;
  param_1[5] = param_2;
  param_1[6] = param_4;
  param_1[7] = 0.0;
  dVar1 = *param_6;
  param_1[9] = param_6[1];
  param_1[8] = dVar1;
  param_1[10] = param_6[2];
  param_1[0xb] = 0.0;
  dVar1 = *param_5;
  param_1[0xd] = param_5[1];
  param_1[0xc] = dVar1;
  param_1[0xe] = param_5[2];
  param_1[0xf] = 1.0;
  return;
}



/* Entry: 1078777b8; end: 1078778fb;  */

bool FUN_1078777b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined **ppuStack_260;
  undefined1 uStack_258;
  undefined1 uStack_240;
  undefined1 auStack_238 [8];
  ulong uStack_230;
  uint uStack_228;
  undefined1 auStack_188 [48];
  undefined8 uStack_158;
  undefined1 *puStack_150;
  undefined7 uStack_140;
  undefined4 uStack_139;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [176];
  
  func_0x00010bd3d538(auStack_e0,param_3,0);
  uStack_158 = 0;
  puStack_150 = (undefined1 *)0x0;
  uStack_140 = 0;
  uStack_139 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x0001000634f0(auStack_238);
  ppuStack_260 = &PTR_SUB_1109e3cb0;
  uStack_258 = 0;
  uStack_240 = 0;
  puVar2 = &uStack_158;
  puStack_150 = (undefined1 *)&ppuStack_260;
  func_0x00010bcd6bbc(puVar2,auStack_e0,auStack_238);
  if (((ulong)puVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    uStack_228 = uStack_228 | 1;
    if ((uStack_230 & 1) != 0) {
      uStack_230 = *(ulong *)(uStack_230 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(auStack_188,param_2,uStack_230);
    func_0x00010bcf1b0c(param_1,auStack_238);
    bVar1 = param_1 != 0;
  }
  func_0x0001078778fc(&ppuStack_260);
  func_0x000100067d9c(auStack_238);
  func_0x00010bcd5d98(&uStack_158);
  func_0x00010bd3d698(auStack_e0);
  return bVar1;
}



/* Entry: 10787827c; end: 1078782c3;  */

undefined1 FUN_10787827c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    puStack_28 = &UNK_10bcfd240;
    lStack_30 = param_1;
    func_0x0001078782c4(*(long *)(param_1 + 0x18),&puStack_28,&lStack_30);
  }
  return *(undefined1 *)(param_1 + 2);
}



/* Entry: 1078788fc; end: 107878937;  */

double FUN_1078788fc(double param_1,double *param_2)

{
  func_0x000107878938();
  return *param_2 / param_1;
}



/* Entry: 107878dcc; end: 107878dfb;  */

undefined8 FUN_107878dcc(void)

{
  undefined8 uStack_28;
  
  func_0x000107878e68();
  func_0x000107878e78();
  return uStack_28;
}



/* Entry: 107879140; end: 10787918f;  */

void FUN_107879140(void)

{
  func_0x000107879160();
  func_0x000107879284();
  return;
}



/* Entry: 1078793bc; end: 107879463;  */

/* WARNING: Possible PIC construction at 0x000107879418: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010787941c) */
/* WARNING: Removing unreachable block (ram,0x00010787945c) */
/* WARNING: Removing unreachable block (ram,0x000107879488) */
/* WARNING: Removing unreachable block (ram,0x0001078794a8) */
/* WARNING: Removing unreachable block (ram,0x0001078794c4) */
/* WARNING: Removing unreachable block (ram,0x0001078794b8) */
/* WARNING: Removing unreachable block (ram,0x000107879448) */

undefined1  [16] FUN_1078793bc(long *param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  char cVar5;
  long *plVar6;
  char *pcVar7;
  long *extraout_x8;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 auVar11 [16];
  
  func_0x000107879a18(param_2);
  cVar5 = *(char *)((long)param_1 + 0x17);
  plVar6 = (long *)*param_1;
  if (-1 < (long)cVar5) {
    plVar6 = param_1;
  }
  lVar2 = param_1[1];
  if (-1 < cVar5) {
    lVar2 = (long)cVar5;
  }
  pcVar1 = (char *)((long)plVar6 + lVar2);
  for (; pcVar7 = pcVar1, pcVar9 = pcVar1, plVar6 != (long *)pcVar1;
      plVar6 = (long *)((long)plVar6 + 1)) {
    pcVar3 = (char *)extraout_x8[1];
    pcVar8 = (char *)plVar6;
    pcVar10 = (char *)*extraout_x8;
    if ((char *)*extraout_x8 == pcVar3) break;
    do {
      if (pcVar8 == pcVar1 || pcVar10 == pcVar3) {
        pcVar7 = (char *)plVar6;
        pcVar9 = pcVar8;
        if (pcVar10 == pcVar3) goto code_r0x000107879514;
        break;
      }
      cVar5 = *pcVar8;
      cVar4 = *pcVar10;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    } while (cVar5 == cVar4);
  }
code_r0x000107879514:
  auVar11._8_8_ = pcVar9;
  auVar11._0_8_ = pcVar7;
  return auVar11;
}



/* Entry: 107879b7c; end: 107879beb;  */

void FUN_107879b7c(void)

{
  long unaff_x19;
  undefined1 auStack_48 [24];
  
  func_0x000107879c38();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) == 0) {
    func_0x00010786b288(auStack_48);
  }
  __ZNSt3__15mutex6unlockEv(unaff_x19 + 0x18);
  return;
}



/* Entry: 107879ea0; end: 107879eb7;  */

void FUN_107879ea0(void)

{
  func_0x00010787b454();
  return;
}



/* Entry: 10787a8cc; end: 10787a8cf;  */

void FUN_10787a8cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e3cf8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10787a988; end: 10787ab8b;  */

void FUN_10787a988(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 auStack_140 [2];
  undefined4 uStack_138;
  undefined4 uStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_58 [24];
  
  plVar6 = *(long **)(param_1 + 8);
  lStack_d0 = *plVar6;
  uStack_c8 = CONCAT71(uStack_c8._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *plVar6 + 0x40;
  func_0x00010787a7b8();
  if ((uVar1 & 1) == 0) {
    func_0x00010054bf64(&lStack_d0);
    func_0x00010787be58();
  }
  else {
    func_0x00010787be58();
    *(int *)(*(long *)(param_1 + 0x10) + 0x30) = *(int *)(*(long *)(param_1 + 0x10) + 0x30) + 1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    lVar7 = *(long *)(param_1 + 0x10);
    lVar5 = *(long *)(lVar7 + 0x28);
    lVar8 = *(long *)(lVar7 + 8);
    lVar2 = lVar7 + 0x10;
    func_0x0001005d466c();
    uStack_a0 = (ulong)*(uint *)(lVar7 + 0x30);
    uStack_c8 = 0;
    uStack_a8 = 0;
    uStack_98 = 0;
    lStack_d0 = lVar8;
    lStack_c0 = lVar2;
    uStack_b8 = uVar4;
    lStack_b0 = (long)(uVar1 - lVar5) / 1000000;
    func_0x0001003a91d4(&UNK_10f43097f);
    func_0x0001003a9204(auStack_58);
    lVar2 = 7;
    func_0x00010786df04(7,auStack_58,0,0);
    if ((*(int *)(*(long *)(param_1 + 0x10) + 0x30) == 1) && (lRam0000000113822d00 != 0)) {
      FUN_1077f3c4c();
      func_0x0001077f3790();
      auStack_140[0] = 0x11f;
      uStack_128 = 0;
      uStack_110 = 0;
      uStack_108 = 0;
      ppuStack_120 = &PTR_DAT_110996720;
      uStack_118 = 0;
      uStack_100 = 0x11f;
      uStack_f8 = 0;
      uStack_f4 = 1;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_f0 = 0;
      puVar3 = auStack_140;
      func_0x00010729d56c(puVar3,&UNK_10f4309c5,*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
      func_0x00010726e6c0(&lStack_d0,puVar3);
      func_0x000107262330(auStack_140);
      auStack_140[0] = 1;
      uStack_138 = 0;
      uStack_150 = *(undefined8 *)(lVar2 + 8);
      uStack_148 = 3;
      func_0x00010743fa9c((undefined8 *)(lVar2 + 8),&lStack_d0,auStack_140,&uStack_150,7);
      func_0x000107262330(&lStack_d0);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  }
  return;
}



/* Entry: 10787ad18; end: 10787ad33;  */

void FUN_10787ad18(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x39 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 7);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_DAT_1109e3dc8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10787aeec; end: 10787aef3;  */

void FUN_10787aeec(void)

{
  return;
}



/* Entry: 10787b30c; end: 10787b383;  */

long * FUN_10787b30c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  func_0x0001073ada2c(*(undefined8 *)*param_1);
  lVar2 = *param_1;
  plVar1 = (long *)*(long *)(lVar2 + 0x30);
  while (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    func_0x00010732e4c0(plVar1 + 3);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
  lVar3 = *(long *)(lVar2 + 0x20);
  *(undefined8 *)(lVar2 + 0x20) = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  func_0x00010787ac34(lVar2 + 0x10);
  return param_1;
}



/* Entry: 10787b878; end: 10787b893;  */

long FUN_10787b878(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  func_0x00010787b8b8();
  return param_1;
}



/* Entry: 10787ba34; end: 10787ba47;  */

void FUN_10787ba34(void)

{
  func_0x00010787babc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10787bd78; end: 10787becb;  */

void FUN_10787bd78(void)

{
  return;
}



/* Entry: 10787c1c8; end: 10787c257;  */

undefined1 * FUN_10787c1c8(long *param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_228 [208];
  undefined8 uStack_158;
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [208];
  undefined8 uStack_28;
  
  func_0x00010787c668();
  uStack_28 = extraout_x8;
  func_0x000105302f48(auStack_118);
  func_0x000107313224(auStack_f8,auStack_118,*(undefined4 *)((long)param_1 + 0x7c));
  puVar3 = auStack_f8;
  (**(code **)(*param_1 + 0x18))(param_1,puVar3);
  func_0x000107273efc(auStack_f8);
  puVar1 = auStack_118;
  func_0x0001006393ec();
  func_0x00010787c64c(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000107273efc(auStack_f8);
  puVar1 = auStack_118;
  func_0x0001006393ec();
  func_0x00010787c688();
  puVar2 = puVar1;
  func_0x00010787c668();
  uStack_158 = extraout_x8_00;
  func_0x0001072ab574(puVar2 + 8);
  func_0x0001077b3538(auStack_228,puVar3);
  func_0x0001077b192c(puVar1 + 0x80,auStack_228);
  func_0x000107273efc(auStack_228);
  puVar3 = puVar1 + 0x48;
  __ZNSt3__118condition_variable10notify_oneEv();
  func_0x00010787c644();
  func_0x00010787c64c(uStack_158);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107273efc(auStack_228);
  func_0x00010787c644();
  func_0x00010787c660();
  func_0x00010787c638();
  puVar1 = puVar1 + 0x80;
  func_0x0001077b2e0c(puVar1);
  func_0x00010787c644();
  return puVar1;
}



/* Entry: 10787c618; end: 10787c637;  */

void FUN_10787c618(long param_1)

{
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    func_0x000107273efc();
  }
  return;
}



/* Entry: 10787ce40; end: 10787d76b;  */

void FUN_10787ce40(long ***param_1,double param_2,long ****param_3,long ****param_4,
                  undefined8 param_5,uint param_6)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  long lVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long ***ppplVar13;
  ulong uVar14;
  long ***extraout_x8;
  long **extraout_x8_00;
  long ****pppplVar15;
  undefined8 extraout_x8_01;
  long ***ppplVar16;
  long ***extraout_x9;
  long ***ppplVar17;
  ulong uVar18;
  ulong extraout_x9_00;
  long *plVar19;
  undefined8 extraout_x9_01;
  long ****extraout_x10;
  long ****pppplVar20;
  long ***ppplVar21;
  long ***ppplVar22;
  long ***extraout_x11;
  long ***unaff_x20;
  long ****pppplVar23;
  long **pplVar24;
  long ****pppplVar25;
  long ****pppplVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  long ***ppplVar31;
  uint uVar32;
  double dVar33;
  long ***ppplVar34;
  double dVar35;
  long *aplStack_130 [2];
  long **pplStack_120;
  long **pplStack_118;
  long ***ppplStack_110;
  long ***ppplStack_108;
  long ***ppplStack_100;
  long **pplStack_f8;
  float fStack_f0;
  long ***ppplStack_e8;
  long **pplStack_e0;
  undefined8 uStack_d8;
  long **pplStack_d0;
  long **pplStack_c8;
  long ***ppplStack_c0;
  ulong uStack_b8;
  float fStack_b0;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  undefined8 uStack_90;
  
  ppplVar34 = *param_4;
  ppplVar13 = param_4[1];
  if (ppplVar34 == ppplVar13) {
    *param_1 = (long **)0x0;
    param_1[1] = (long **)0x0;
    param_1[2] = (long **)0x0;
    pplStack_c8 = (long **)CONCAT71(pplStack_c8._1_7_,1);
    pplStack_d0 = (long **)param_1;
    func_0x000107880cf0(&pplStack_d0);
  }
  else {
    pplStack_c8 = (long **)0x0;
    pplStack_d0 = (long **)0x0;
    uStack_b8 = 0;
    ppplStack_c0 = (long ***)0x0;
    fStack_b0 = 1.0;
    pppplVar23 = param_4;
    for (; ppplVar17 = (long ***)pplStack_c8, ppplVar34 != ppplVar13; ppplVar34 = ppplVar34 + 2) {
      bVar4 = *(byte *)((long)ppplVar34 + 4);
      ppplVar31 = (long ***)(ulong)bVar4;
      uVar30 = (uint)bVar4;
      if ((long ***)pplStack_c8 != (long ***)0x0) {
        uVar14 = (long)pplStack_c8 - 1;
        uVar32 = (uint)pplStack_c8;
        if (((ulong)pplStack_c8 & uVar14) == 0) {
          unaff_x20 = (long ***)((ulong)(uVar32 - 1) & (ulong)ppplVar31);
        }
        else {
          unaff_x20 = ppplVar31;
          if (pplStack_c8 <= ppplVar31) {
            uVar6 = 0;
            if (uVar32 != 0) {
              uVar6 = uVar30 / uVar32;
            }
            unaff_x20 = (long ***)(ulong)(uVar30 - uVar6 * uVar32);
          }
        }
        pppplVar25 = (long ****)pplStack_d0[(long)unaff_x20];
        if (pppplVar25 != (long ****)0x0) {
          do {
            while( true ) {
              pppplVar25 = (long ****)*pppplVar25;
              if (pppplVar25 == (long ****)0x0) goto LAB_10787cf3c;
              ppplVar16 = pppplVar25[1];
              if (ppplVar16 != ppplVar31) break;
              if (*(byte *)(pppplVar25 + 2) == uVar30) goto LAB_10787d1bc;
            }
            if (((ulong)pplStack_c8 & uVar14) == 0) {
              ppplVar16 = (long ***)((ulong)ppplVar16 & uVar14);
            }
            else if (pplStack_c8 <= ppplVar16) {
              uVar18 = 0;
              if ((long ***)pplStack_c8 != (long ***)0x0) {
                uVar18 = (ulong)ppplVar16 / (ulong)pplStack_c8;
              }
              ppplVar16 = (long ***)((long)ppplVar16 - uVar18 * (long)pplStack_c8);
            }
          } while (ppplVar16 == unaff_x20);
        }
      }
LAB_10787cf3c:
      func_0x0001078817b0();
      ppplStack_100 = (long ***)0x1;
      *pppplVar23 = (long ***)0x0;
      pppplVar23[1] = ppplVar31;
      *(byte *)(pppplVar23 + 2) = bVar4;
      pppplVar23[4] = (long ***)0x0;
      pppplVar23[5] = (long ***)0x0;
      pppplVar23[3] = (long ***)0x0;
      param_3 = (long ****)(ulong)(uint)fStack_b0;
      ppplStack_108 = (long ***)&ppplStack_c0;
      if ((ppplVar17 == (long ***)0x0) ||
         (ppplVar16 = unaff_x20, fStack_b0 * (float)ppplVar17 < (float)(uStack_b8 + 1))) {
        bVar8 = (long ***)0x2 < ppplVar17;
        bVar9 = ppplVar17 == (long ***)0x3;
        ppplStack_110 = (long ***)pppplVar23;
        func_0x000107881374((long)ppplVar17 << 1);
        ppplVar16 = extraout_x8;
        if (!bVar8 || bVar9) {
          ppplVar16 = extraout_x9;
        }
        ppplVar21 = ppplVar17;
        if ((long)ppplVar16 - 1U == 0) {
          ppplVar16 = (long ***)0x2;
        }
        else if (((ulong)ppplVar16 & (long)ppplVar16 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          ppplVar21 = (long ***)pplStack_c8;
        }
        if (ppplVar21 < ppplVar16) {
LAB_10787cfd8:
          if ((ulong)ppplVar16 >> 0x3d != 0) {
            func_0x000104bd35f4();
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10787d6fc);
            (*pcVar7)();
          }
          lVar10 = (long)ppplVar16 << 3;
          __Znwm(lVar10);
          func_0x000107880d6c(&pplStack_d0,lVar10);
          for (ppplVar17 = (long ***)0x0; ppplVar16 != ppplVar17;
              ppplVar17 = (long ***)((long)ppplVar17 + 1)) {
            pplStack_d0[(long)ppplVar17] = (long *)0x0;
          }
          ppplVar17 = ppplVar16;
          pplStack_c8 = (long **)ppplVar16;
          if ((long ****)ppplStack_c0 != (long ****)0x0) {
            ppplVar21 = (long ***)ppplStack_c0[1];
            uVar18 = (long)ppplVar16 - 1;
            uVar14 = 0;
            if (ppplVar16 != (long ***)0x0) {
              uVar14 = (ulong)ppplVar21 / (ulong)ppplVar16;
            }
            ppplVar22 = ppplVar21;
            if (ppplVar16 <= ppplVar21) {
              ppplVar22 = (long ***)((long)ppplVar21 - uVar14 * (long)ppplVar16);
            }
            if (((ulong)ppplVar16 & uVar18) == 0) {
              ppplVar22 = (long ***)((ulong)ppplVar21 & uVar18);
            }
            pplStack_d0[(long)ppplVar22] = (long *)&ppplStack_c0;
            pplVar24 = pplStack_d0;
            pppplVar25 = (long ****)ppplStack_c0;
            while (pppplVar26 = pppplVar25, pppplVar25 = (long ****)*pppplVar26,
                  pppplVar25 != (long ****)0x0) {
              ppplVar21 = pppplVar25[1];
              if (((ulong)ppplVar16 & uVar18) == 0) {
                ppplVar21 = (long ***)((ulong)ppplVar21 & uVar18);
              }
              else if (ppplVar16 <= ppplVar21) {
                uVar14 = 0;
                if (ppplVar16 != (long ***)0x0) {
                  uVar14 = (ulong)ppplVar21 / (ulong)ppplVar16;
                }
                ppplVar21 = (long ***)((long)ppplVar21 - uVar14 * (long)ppplVar16);
              }
              if (ppplVar21 != ppplVar22) {
                if (pplVar24[(long)ppplVar21] == (long *)0x0) {
                  pplVar24[(long)ppplVar21] = (long *)pppplVar26;
                  ppplVar22 = ppplVar21;
                }
                else {
                  func_0x0001078814b8();
                  pplVar24 = extraout_x8_00;
                  uVar18 = extraout_x9_00;
                  pppplVar25 = extraout_x10;
                  ppplVar22 = extraout_x11;
                }
              }
            }
          }
        }
        else {
          ppplVar17 = ppplVar21;
          if (ppplVar16 < ppplVar21) {
            param_3 = (long ****)(ulong)(uint)fStack_b0;
            ppplVar17 = (long ***)(long)((float)uStack_b8 / fStack_b0);
            if ((ppplVar21 < (long ***)0x3) || (((ulong)ppplVar21 & (long)ppplVar21 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((long ***)0x1 < ppplVar17) {
              ppplVar17 = (long ***)(1L << (-LZCOUNT((long)ppplVar17 + -1) & 0x3fU));
            }
            if (ppplVar16 <= ppplVar17) {
              ppplVar16 = ppplVar17;
            }
            ppplVar17 = (long ***)pplStack_c8;
            if (ppplVar16 < ppplVar21) {
              if (ppplVar16 != (long ***)0x0) goto LAB_10787cfd8;
              func_0x000107880d6c(&pplStack_d0,0);
              pplStack_c8 = (long **)0x0;
              ppplVar17 = (long ***)0x0;
            }
          }
        }
        if (((ulong)ppplVar17 & (long)ppplVar17 - 1U) == 0) {
          ppplVar16 = (long ***)((ulong)((int)ppplVar17 - 1) & (ulong)ppplVar31);
        }
        else {
          ppplVar16 = ppplVar31;
          if (ppplVar17 <= ppplVar31) {
            uVar14 = 0;
            if (ppplVar17 != (long ***)0x0) {
              uVar14 = (ulong)ppplVar31 / (ulong)ppplVar17;
            }
            ppplVar16 = (long ***)((long)ppplVar31 - uVar14 * (long)ppplVar17);
          }
        }
      }
      plVar19 = pplStack_d0[(long)ppplVar16];
      if (plVar19 == (long *)0x0) {
        *pppplVar23 = ppplStack_c0;
        pplStack_d0[(long)ppplVar16] = (long *)&ppplStack_c0;
        ppplStack_c0 = (long ***)pppplVar23;
        if (*pppplVar23 != (long ***)0x0) {
          ppplVar31 = (long ***)(*pppplVar23)[1];
          if (((ulong)ppplVar17 & (long)ppplVar17 - 1U) == 0) {
            ppplVar31 = (long ***)((ulong)ppplVar31 & (long)ppplVar17 - 1U);
          }
          else if (ppplVar17 <= ppplVar31) {
            uVar14 = 0;
            if (ppplVar17 != (long ***)0x0) {
              uVar14 = (ulong)ppplVar31 / (ulong)ppplVar17;
            }
            ppplVar31 = (long ***)((long)ppplVar31 - uVar14 * (long)ppplVar17);
          }
          pplStack_d0[(long)ppplVar31] = (long *)pppplVar23;
        }
      }
      else {
        *pppplVar23 = (long ***)*plVar19;
        *plVar19 = (long)pppplVar23;
      }
      ppplStack_110 = (long ***)0x0;
      uStack_b8 = uStack_b8 + 1;
      FUN_107880d84(&ppplStack_110);
      pppplVar25 = pppplVar23;
LAB_10787d1bc:
      pppplVar23 = pppplVar25 + 3;
      func_0x00010781dc2c(pppplVar23,ppplVar34);
    }
    ppplVar34 = *param_4;
    ppplVar13 = param_4[1];
    pplStack_e0 = (long **)0x0;
    uStack_d8 = 0;
    ppplStack_e8 = &pplStack_e0;
    for (; ppplVar34 != ppplVar13; ppplVar34 = ppplVar34 + 2) {
      pppplVar25 = (long ****)&pplStack_e0;
      if (&pplStack_e0 == ppplStack_e8) {
LAB_10787d234:
        pppplVar26 = (long ****)&pplStack_e0;
        ppplStack_a0 = &pplStack_e0;
        if ((long ***)pplStack_e0 != (long ***)0x0) {
          ppplStack_a0 = (long ***)pppplVar25;
          pppplVar26 = pppplVar25 + 1;
          goto LAB_10787d244;
        }
LAB_10787d260:
        ppplVar17 = ppplStack_a0;
        func_0x0001078817b0();
        ppplStack_100 = (long ***)0x1;
        pplVar24 = *ppplVar34;
        *(long ***)((long)pppplVar23 + 0x24) = ppplVar34[1];
        *(long ***)((long)pppplVar23 + 0x1c) = pplVar24;
        ppplStack_108 = &pplStack_e0;
        func_0x000107516444(&ppplStack_e8,ppplVar17,pppplVar26,pppplVar23);
        ppplStack_110 = (long ***)0x0;
        pppplVar23 = &ppplStack_110;
        func_0x00010751646c();
      }
      else {
        func_0x00010002c810();
        pppplVar23 = (long ****)((long)pppplVar25 + 0x1c);
        func_0x0001075153a0(pppplVar23,ppplVar34);
        if (((uint)pppplVar23 >> 7 & 1) != 0) goto LAB_10787d234;
        pppplVar23 = &ppplStack_e8;
        func_0x0001075163d0(pppplVar23,&ppplStack_a0,ppplVar34);
        pppplVar26 = pppplVar23;
LAB_10787d244:
        if (*pppplVar26 == (long ***)0x0) goto LAB_10787d260;
      }
    }
    param_2 = param_2 + 1.0;
    pppplVar23 = (long ****)ppplStack_e8;
    for (pppplVar25 = (long ****)ppplStack_c0; ppplStack_e8 = (long ***)pppplVar23,
        pppplVar25 != (long ****)0x0; pppplVar25 = (long ****)*pppplVar25) {
      uVar5 = *(undefined1 *)(pppplVar25 + 2);
      ppplVar17 = pppplVar25[4];
      pppplVar23 = (long ****)0x80000000;
      iVar27 = -0x80000000;
      ppplVar13 = pppplVar25[3];
      iVar28 = 0x7fffffff;
      uVar30 = 0x7fffffff;
      for (ppplVar34 = ppplVar13; uVar32 = (uint)pppplVar23, ppplVar34 != ppplVar17;
          ppplVar34 = ppplVar34 + 2) {
        iVar3 = *(int *)(ppplVar34 + 1);
        uVar6 = *(uint *)((long)ppplVar34 + 0xc);
        iVar29 = iVar3;
        if (iVar28 <= iVar3) {
          iVar29 = iVar28;
        }
        uVar1 = uVar6;
        if ((int)uVar30 <= (int)uVar6) {
          uVar1 = uVar30;
        }
        if (iVar27 <= iVar3) {
          iVar27 = iVar3;
        }
        if ((int)uVar32 <= (int)uVar6) {
          uVar32 = uVar6;
        }
        pppplVar23 = (long ****)(ulong)uVar32;
        iVar28 = iVar29;
        uVar30 = uVar1;
      }
      pppplVar26 = (long ****)0x0;
      ppplStack_108 = (long ***)0x0;
      ppplStack_110 = (long ***)0x0;
      pplStack_f8 = (long **)0x0;
      ppplStack_100 = (long ***)0x0;
      fStack_f0 = 1.0;
      for (; ppplVar13 != ppplVar17; ppplVar13 = ppplVar13 + 2) {
        func_0x0001075177dc(&ppplStack_110,ppplVar13);
      }
      for (iVar28 = iVar28 + -1; iVar29 = uVar30 - 1, iVar28 <= iVar27 + 1; iVar28 = iVar28 + 1) {
        for (; iVar29 <= (int)(uVar32 + 1); iVar29 = iVar29 + 1) {
          func_0x000107359e6c(aplStack_130,uVar5,iVar28,iVar29);
          ppplVar34 = (long ***)aplStack_130;
          ppplVar13 = (long ***)(ulong)param_6;
          func_0x0001073b9b38();
          pppplVar20 = (long ****)&pplStack_f8;
          pplStack_120 = (long **)ppplVar34;
          pplStack_118 = (long **)ppplVar13;
          func_0x00010784b2bc(pppplVar20,&pplStack_120);
          pppplVar12 = (long ****)ppplStack_108;
          pppplVar11 = pppplVar20;
          if ((long ****)ppplStack_108 != (long ****)0x0) {
            uVar14 = (long)ppplStack_108 - 1;
            if (((ulong)ppplStack_108 & uVar14) == 0) {
              pppplVar23 = (long ****)(uVar14 & (ulong)pppplVar20);
            }
            else {
              pppplVar23 = pppplVar20;
              if (ppplStack_108 <= pppplVar20) {
                uVar18 = 0;
                if ((long ****)ppplStack_108 != (long ****)0x0) {
                  uVar18 = (ulong)pppplVar20 / (ulong)ppplStack_108;
                }
                pppplVar23 = (long ****)((long)pppplVar20 - uVar18 * (long)ppplStack_108);
              }
            }
            pplVar24 = ppplStack_110[(long)pppplVar23];
            if (pplVar24 != (long **)0x0) {
              do {
                while( true ) {
                  pplVar24 = (long **)*pplVar24;
                  if (pplVar24 == (long **)0x0) goto LAB_10787d430;
                  pppplVar15 = (long ****)pplVar24[1];
                  if (pppplVar15 != pppplVar20) break;
                  pppplVar11 = (long ****)(pplVar24 + 2);
                  func_0x0001073bc1c0(pppplVar11,&pplStack_120);
                  if (((ulong)pppplVar11 & 1) != 0) goto LAB_10787d548;
                }
                if (((ulong)pppplVar12 & uVar14) == 0) {
                  pppplVar15 = (long ****)((ulong)pppplVar15 & uVar14);
                }
                else if (pppplVar12 <= pppplVar15) {
                  uVar18 = 0;
                  if (pppplVar12 != (long ****)0x0) {
                    uVar18 = (ulong)pppplVar15 / (ulong)pppplVar12;
                  }
                  pppplVar15 = (long ****)((long)pppplVar15 - uVar18 * (long)pppplVar12);
                }
              } while (pppplVar15 == pppplVar23);
            }
          }
LAB_10787d430:
          func_0x0001078817b8();
          uStack_90 = 1;
          ppplStack_a0 = (long ***)pppplVar11;
          ppplStack_98 = (long ***)&ppplStack_100;
          *pppplVar11 = (long ***)0x0;
          pppplVar11[1] = (long ***)pppplVar20;
          pppplVar11[3] = (long ***)pplStack_118;
          pppplVar11[2] = (long ***)pplStack_120;
          pppplVar26 = (long ****)(ulong)(uint)(float)((long)pplStack_f8 + 1);
          param_3 = (long ****)(ulong)(uint)fStack_f0;
          if ((pppplVar12 == (long ****)0x0) ||
             (fStack_f0 * (float)pppplVar12 < (float)((long)pplStack_f8 + 1))) {
            bVar8 = (long ****)0x2 < pppplVar12;
            bVar9 = pppplVar12 == (long ****)0x3;
            func_0x000107881374((long)pppplVar12 << 1);
            uVar2 = extraout_x8_01;
            if (!bVar8 || bVar9) {
              uVar2 = extraout_x9_01;
            }
            func_0x000107517a3c(&ppplStack_110,uVar2);
            pppplVar12 = (long ****)ppplStack_108;
            if (((ulong)ppplStack_108 & (long)ppplStack_108 - 1U) == 0) {
              pppplVar23 = (long ****)((long)ppplStack_108 - 1U & (ulong)pppplVar20);
            }
            else {
              pppplVar23 = pppplVar20;
              if (ppplStack_108 <= pppplVar20) {
                uVar14 = 0;
                if ((long ****)ppplStack_108 != (long ****)0x0) {
                  uVar14 = (ulong)pppplVar20 / (ulong)ppplStack_108;
                }
                pppplVar23 = (long ****)((long)pppplVar20 - uVar14 * (long)ppplStack_108);
              }
            }
          }
          pplVar24 = ppplStack_110[(long)pppplVar23];
          if (pplVar24 == (long **)0x0) {
            *ppplStack_a0 = (long **)ppplStack_100;
            ppplStack_100 = ppplStack_a0;
            ppplStack_110[(long)pppplVar23] = (long **)&ppplStack_100;
            if ((long ***)*ppplStack_a0 != (long ***)0x0) {
              pppplVar20 = (long ****)(*ppplStack_a0)[1];
              if (((ulong)pppplVar12 & (long)pppplVar12 - 1U) == 0) {
                pppplVar20 = (long ****)((ulong)pppplVar20 & (long)pppplVar12 - 1U);
              }
              else if (pppplVar12 <= pppplVar20) {
                uVar14 = 0;
                if (pppplVar12 != (long ****)0x0) {
                  uVar14 = (ulong)pppplVar20 / (ulong)pppplVar12;
                }
                pppplVar20 = (long ****)((long)pppplVar20 - uVar14 * (long)pppplVar12);
              }
              ppplStack_110[(long)pppplVar20] = (long **)ppplStack_a0;
            }
          }
          else {
            *ppplStack_a0 = (long **)*pplVar24;
            *pplVar24 = (long *)ppplStack_a0;
          }
          ppplStack_a0 = (long ***)0x0;
          pplStack_f8 = (long **)((long)pplStack_f8 + 1);
          func_0x000107517c34(&ppplStack_a0);
LAB_10787d548:
        }
      }
      func_0x00010741657c(param_5,0);
      ppplStack_a0 = (long ***)pppplVar26;
      ppplStack_98 = (long ***)param_3;
      func_0x00010726b794(&ppplStack_a0,uVar5);
      pppplVar23 = param_3;
      for (pppplVar20 = (long ****)ppplStack_100; pppplVar20 != (long ****)0x0;
          pppplVar20 = (long ****)*pppplVar20) {
        dVar33 = (double)NEON_ucvtf((ulong)*(uint *)(pppplVar20 + 3));
        dVar35 = (double)NEON_ucvtf((ulong)*(uint *)((long)pppplVar20 + 0x1c));
        pppplVar23 = (long ****)ABS((dVar35 + 0.5) - (double)param_3);
        bVar9 = false;
        bVar8 = true;
        if (ABS((dVar33 + 0.5) - (double)pppplVar26) <= param_2) {
          bVar9 = false;
          bVar8 = true;
          if (!NAN((double)pppplVar23) && !NAN(param_2)) {
            bVar9 = (double)pppplVar23 == param_2;
            bVar8 = param_2 <= (double)pppplVar23;
          }
        }
        if (!bVar8 || bVar9) {
          pppplVar11 = &ppplStack_e8;
          func_0x0001075163d0(pppplVar11,&pplStack_120,pppplVar20 + 2);
          if (*pppplVar11 == (long ***)0x0) {
            pppplVar12 = pppplVar11;
            func_0x0001078817b0();
            uStack_90 = 1;
            ppplVar34 = pppplVar20[2];
            ppplStack_98 = &pplStack_e0;
            *(long ****)((long)pppplVar12 + 0x24) = pppplVar20[3];
            *(long ****)((long)pppplVar12 + 0x1c) = ppplVar34;
            func_0x000107516444(&ppplStack_e8,pplStack_120,pppplVar11,pppplVar12);
            ppplStack_a0 = (long ***)0x0;
            func_0x00010751646c(&ppplStack_a0);
          }
        }
      }
      func_0x000107517c6c(&ppplStack_110);
      param_3 = pppplVar23;
      pppplVar23 = (long ****)ppplStack_e8;
    }
    lVar10 = 0;
    func_0x000107881970();
    pppplVar25 = pppplVar23;
    while (pppplVar25 != (long ****)&pplStack_e0) {
      lVar10 = lVar10 + 1;
      func_0x00010002c7d4();
    }
    ppplStack_108 = (long ***)((ulong)ppplStack_108 & 0xffffffffffffff00);
    ppplStack_110 = param_1;
    if (lVar10 != 0) {
      func_0x000107516278(param_1,lVar10);
      pplVar24 = param_1[1];
      while (pppplVar23 != (long ****)&pplStack_e0) {
        plVar19 = *(long **)((long)pppplVar23 + 0x1c);
        pplVar24[1] = *(long **)((long)pppplVar23 + 0x24);
        *pplVar24 = plVar19;
        func_0x00010002c7d4();
        pplVar24 = pplVar24 + 2;
      }
      param_1[1] = pplVar24;
    }
    ppplStack_108 = (long ***)CONCAT71(ppplStack_108._1_7_,1);
    func_0x000107880cf0(&ppplStack_110);
    func_0x0001075171d8(&ppplStack_e8);
    func_0x000107880d1c(&pplStack_d0);
  }
  return;
}



/* Entry: 10787e968; end: 10787e9c7;  */

void FUN_10787e968(double param_1,long param_2,int param_3)

{
  double dStack_50;
  double dStack_48;
  undefined8 uStack_40;
  double adStack_38 [3];
  
  adStack_38[0] = param_1 * (double)param_3;
  adStack_38[1] = 0.0;
  adStack_38[2] = 0.0;
  dStack_50 = param_1 * (double)(param_3 + 1);
  uStack_40 = 0;
  dStack_48 = param_1;
  func_0x000107429dc8(param_2,adStack_38,&dStack_50);
  *(undefined1 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_2 + 100) = 0;
  *(undefined4 *)(param_2 + 0x68) = 0;
  *(short *)(param_2 + 0x6c) = (short)param_3;
  *(undefined1 *)(param_2 + 0x6e) = 0;
  return;
}



/* Entry: 10787ecec; end: 10787ecf7;  */

void FUN_10787ecec(long param_1)

{
  undefined1 in_CY;
  
  func_0x0001078811a0();
  func_0x00010788195c();
  if (!(bool)in_CY) {
    __Znwm(param_1 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107881704();
  if (param_1 != 0) {
    func_0x0001078817c0();
  }
  return;
}



/* Entry: 10787eea8; end: 10787eebf;  */

void FUN_10787eea8(undefined8 *param_1)

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



/* Entry: 10787f63c; end: 10787faeb;  */

void FUN_10787f63c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  ulong param_6)

{
  long lVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  char cVar7;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar8;
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
  long lVar9;
  ulong extraout_x8_15;
  ulong extraout_x8_16;
  ulong extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long lVar10;
  ulong extraout_x9_08;
  ulong extraout_x9_09;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong uVar11;
  long extraout_x10_01;
  ulong extraout_x10_02;
  double *extraout_x10_03;
  double *extraout_x10_04;
  double *extraout_x10_05;
  double *pdVar12;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x11_01;
  long extraout_x11_02;
  long extraout_x11_03;
  long lVar13;
  long extraout_x11_04;
  long extraout_x13;
  long extraout_x13_00;
  double *extraout_x14;
  double *extraout_x14_00;
  double *extraout_x14_01;
  long extraout_x15;
  long extraout_x16;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong uVar14;
  ulong unaff_x27;
  double dVar15;
  double dVar16;
  double dVar17;
  
  func_0x000107881230();
  do {
    func_0x000107881710();
LAB_10787f670:
    func_0x000107881948();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010787f88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10deb026c)[extraout_x8] * 4 + 0x10787f890))();
      return;
    }
    if ((long)extraout_x9 < 0x240) {
      if ((param_6 & 1) == 0) {
        uVar14 = unaff_x20;
        if (unaff_x20 != unaff_x19) {
          while( true ) {
            uVar5 = (long)((unaff_x20 + 0x18) - unaff_x19) < 0;
            if (unaff_x20 + 0x18 == unaff_x19) break;
            func_0x000107881490(uVar14 + 0x18,*(undefined8 *)(unaff_x20 + 0x28));
            unaff_x20 = extraout_x9_08;
            uVar14 = extraout_x8_15;
            if ((bool)uVar5) {
              func_0x000107881414();
              do {
                uVar3 = uVar5;
                func_0x0001078814e4();
                uVar5 = 1;
              } while ((bool)uVar3);
              func_0x000107881364();
              unaff_x20 = extraout_x9_09;
              uVar14 = extraout_x8_16;
            }
          }
          return;
        }
        return;
      }
      if (unaff_x20 == unaff_x19) {
        return;
      }
      lVar9 = 0;
      break;
    }
    if (param_5 == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      func_0x0001078819e0();
      lVar9 = extraout_x8_05;
      lVar10 = extraout_x9_04;
      lVar13 = extraout_x11_00;
      lVar1 = extraout_x9_04;
      goto joined_r0x00010787f978;
    }
    uVar14 = unaff_x20 + (extraout_x8 >> 1) * 0x18;
    uVar5 = (long)(extraout_x9 - 0xc01) < 0;
    if (extraout_x9 < 0xc01) {
      func_0x00010787faec(uVar14);
    }
    else {
      func_0x00010787faec();
      func_0x000107881920();
      func_0x00010787faec();
      func_0x00010787faec(unaff_x20 + 0x30,uVar14 + 0x18);
      func_0x00010787faec(unaff_x27,uVar14,uVar14 + 0x18);
      func_0x000107881174();
      func_0x000107881424();
    }
    param_5 = param_5 + -1;
    if ((param_6 & 1) == 0) {
      param_2 = *(double *)(unaff_x20 - 8);
      param_1 = *(double *)(unaff_x20 + 0x10);
      uVar5 = 1;
      if (param_1 <= param_2) {
        func_0x000107881914();
        param_2 = *(double *)(unaff_x19 - 8);
        uVar5 = param_1 < param_2;
        uVar8 = unaff_x20;
        if ((bool)uVar5) {
          do {
            func_0x000107881868();
          } while (!(bool)uVar5);
        }
        else {
          do {
            uVar14 = uVar8 + 0x18;
            if (unaff_x19 <= uVar14) break;
            param_2 = *(double *)(uVar8 + 0x28);
            uVar8 = uVar14;
          } while (param_2 <= param_1);
        }
        bVar6 = (long)(uVar14 - unaff_x19) < 0;
        uVar8 = unaff_x19;
        if (uVar14 < unaff_x19) {
          do {
            bVar2 = bVar6;
            func_0x000107881854();
            bVar6 = true;
            uVar8 = extraout_x8_02;
          } while (bVar2);
        }
        while (uVar14 < uVar8) {
          func_0x0001078811fc();
          do {
            func_0x0001078818e0();
            uVar8 = extraout_x8_03;
          } while (param_2 <= param_1);
          do {
            param_2 = *(double *)(uVar8 - 8);
            uVar8 = uVar8 - 0x18;
          } while (param_1 < param_2);
        }
        in_CY = uVar14 - 0x18 <= unaff_x20;
        in_ZR = unaff_x20 == uVar14 - 0x18;
        if (!(bool)in_ZR) {
          func_0x000107881818();
        }
        func_0x00010788187c();
        goto LAB_10787f670;
      }
    }
    else {
      param_1 = *(double *)(unaff_x20 + 0x10);
    }
    func_0x000107881914();
    do {
      uVar3 = uVar5;
      func_0x000107881900();
      uVar5 = 1;
    } while ((bool)uVar3);
    uVar14 = unaff_x20 + extraout_x9_00;
    uVar5 = extraout_x9_00 + -0x18 < 0;
    uVar8 = unaff_x19;
    if (extraout_x9_00 == 0x18) {
      do {
        uVar11 = uVar8;
        bVar6 = (long)(uVar14 - uVar11) < 0;
        if (uVar11 <= uVar14) break;
        func_0x000107881160();
        uVar14 = extraout_x8_01;
        uVar11 = extraout_x9_02;
        uVar8 = extraout_x10;
      } while (!bVar6);
    }
    else {
      do {
        func_0x000107881160();
        uVar11 = extraout_x9_01;
        uVar14 = extraout_x8_00;
      } while (!(bool)uVar5);
    }
    while (uVar14 < uVar11) {
      func_0x0001078811c8();
      do {
        func_0x0001078818e0();
        uVar11 = extraout_x10_00;
      } while (param_2 < param_1);
      do {
        param_2 = *(double *)(uVar11 - 8);
        uVar11 = uVar11 - 0x18;
      } while (param_1 <= param_2);
    }
    unaff_x27 = uVar14 - 0x18;
    in_CY = unaff_x27 <= unaff_x20;
    in_ZR = unaff_x20 == unaff_x27;
    if (!(bool)in_ZR) {
      func_0x0001078818b8();
    }
    func_0x0001078818a4();
    if (!(bool)in_CY) goto LAB_10787f7c0;
    uVar8 = unaff_x20;
    func_0x00010787fc34();
    func_0x00010787fc34(uVar14,unaff_x19);
    if ((int)uVar14 == 0) goto code_r0x00010787f7bc;
    unaff_x19 = unaff_x27;
    if ((uVar8 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10787f914:
  uVar14 = unaff_x20 + 0x18;
  if (uVar14 == unaff_x19) {
    return;
  }
  dVar15 = *(double *)(unaff_x20 + 0x28);
  if (dVar15 < *(double *)(unaff_x20 + 0x10)) {
    func_0x000107881414(lVar9);
    do {
      func_0x000107881758();
      if (extraout_x10_01 == 0) break;
    } while (dVar15 < *(double *)(extraout_x11 + -8));
    func_0x000107881364();
    lVar9 = extraout_x8_04;
    uVar14 = extraout_x9_03;
  }
  lVar9 = lVar9 + 0x18;
  unaff_x20 = uVar14;
  goto LAB_10787f914;
joined_r0x00010787f978:
  if (lVar1 < 0) {
    do {
      if (lVar9 < 2) {
        return;
      }
      func_0x000107881504();
      do {
        func_0x0001078819b8();
        lVar9 = extraout_x16 + 2;
        cVar4 = SBORROW8(lVar9,extraout_x8_09);
        cVar7 = lVar9 - extraout_x8_09 < 0;
        bVar6 = lVar9 == extraout_x8_09;
        if (lVar9 < extraout_x8_09) {
          dVar15 = *(double *)(extraout_x15 + 0x28);
          param_2 = *(double *)(extraout_x15 + 0x40);
          cVar4 = NAN(dVar15) || NAN(param_2);
          bVar6 = dVar15 == param_2;
          cVar7 = dVar15 < param_2;
        }
        func_0x0001078815e8();
      } while (bVar6 || cVar7 != cVar4);
      unaff_x19 = unaff_x19 - 0x18;
      cVar7 = SBORROW8(extraout_x10_02,unaff_x19);
      cVar4 = (long)(extraout_x10_02 - unaff_x19) < 0;
      if (extraout_x10_02 == unaff_x19) {
        func_0x0001078818ec();
        lVar9 = extraout_x8_14;
      }
      else {
        func_0x00010788128c();
        lVar9 = extraout_x8_10;
        if (cVar4 == cVar7) {
          func_0x00010788139c();
          dVar15 = extraout_x10_03[2];
          lVar9 = extraout_x8_11;
          if (param_2 < dVar15) {
            dVar17 = extraout_x10_03[1];
            param_2 = *extraout_x10_03;
            dVar16 = param_2;
            do {
              func_0x0001078815cc();
              lVar9 = extraout_x8_12;
              pdVar12 = extraout_x10_04;
              if (extraout_x11_04 == 0) break;
              func_0x00010788139c();
              lVar9 = extraout_x8_13;
              pdVar12 = extraout_x10_05;
            } while (dVar16 < dVar15);
            pdVar12[1] = dVar17;
            *pdVar12 = param_2;
            pdVar12[2] = dVar15;
          }
        }
      }
      lVar9 = lVar9 + -1;
    } while( true );
  }
  cVar4 = SBORROW8(lVar10,lVar13);
  cVar7 = lVar10 - lVar13 < 0;
  if (lVar13 <= lVar10) {
    func_0x000107881660();
    if (cVar7 != cVar4) {
      param_1 = *(double *)(extraout_x13 + 0x10);
      param_2 = *(double *)(extraout_x13 + 0x28);
      cVar4 = NAN(param_1) || NAN(param_2);
      cVar7 = param_1 < param_2;
    }
    func_0x0001078819cc();
    lVar9 = extraout_x8_06;
    lVar10 = extraout_x9_05;
    lVar13 = extraout_x11_01;
    if (!(bool)cVar7) {
      dVar15 = extraout_x14[1];
      param_2 = *extraout_x14;
      do {
        func_0x000107881544();
        lVar9 = extraout_x8_07;
        lVar10 = extraout_x9_06;
        lVar13 = extraout_x11_02;
        pdVar12 = extraout_x14_00;
        if (cVar7 != cVar4) break;
        func_0x000107881524();
        lVar9 = extraout_x13_00;
        if ((cVar7 != cVar4) &&
           (*(double *)(extraout_x13_00 + 0x10) < *(double *)(extraout_x13_00 + 0x28))) {
          lVar9 = extraout_x13_00 + 0x18;
        }
        cVar4 = NAN(*(double *)(lVar9 + 0x10)) || NAN(param_1);
        cVar7 = *(double *)(lVar9 + 0x10) < param_1;
        lVar9 = extraout_x8_08;
        lVar10 = extraout_x9_07;
        lVar13 = extraout_x11_03;
        pdVar12 = extraout_x14_01;
      } while (!(bool)cVar7);
      pdVar12[1] = dVar15;
      *pdVar12 = param_2;
      pdVar12[2] = param_1;
    }
  }
  lVar13 = lVar13 + -1;
  lVar1 = lVar13;
  goto joined_r0x00010787f978;
code_r0x00010787f7bc:
  if ((uVar8 & 1) == 0) {
LAB_10787f7c0:
    func_0x000107881890();
    FUN_10787f63c();
    param_6 = 0;
  }
  goto LAB_10787f670;
}



/* Entry: 10788016c; end: 107880173;  */

void FUN_10788016c(void)

{
  return;
}



/* Entry: 1078803ac; end: 1078809d7;  */

/* WARNING: Possible PIC construction at 0x000107880428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010788044c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107880488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107880b10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107880ac4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107880b14) */
/* WARNING: Removing unreachable block (ram,0x000107880b24) */
/* WARNING: Removing unreachable block (ram,0x000107880b40) */
/* WARNING: Removing unreachable block (ram,0x000107880b48) */
/* WARNING: Removing unreachable block (ram,0x000107880b50) */
/* WARNING: Removing unreachable block (ram,0x000107880b54) */
/* WARNING: Removing unreachable block (ram,0x000107880450) */
/* WARNING: Removing unreachable block (ram,0x00010788048c) */
/* WARNING: Removing unreachable block (ram,0x000107880494) */
/* WARNING: Removing unreachable block (ram,0x0001078805a8) */
/* WARNING: Removing unreachable block (ram,0x0001078805d0) */
/* WARNING: Removing unreachable block (ram,0x0001078805d4) */
/* WARNING: Removing unreachable block (ram,0x0001078805e0) */
/* WARNING: Removing unreachable block (ram,0x0001078805bc) */
/* WARNING: Removing unreachable block (ram,0x0001078805c0) */
/* WARNING: Removing unreachable block (ram,0x0001078805cc) */
/* WARNING: Removing unreachable block (ram,0x0001078805ec) */
/* WARNING: Removing unreachable block (ram,0x0001078805f8) */
/* WARNING: Removing unreachable block (ram,0x0001078805fc) */
/* WARNING: Removing unreachable block (ram,0x000107880604) */
/* WARNING: Removing unreachable block (ram,0x000107880634) */
/* WARNING: Removing unreachable block (ram,0x000107880608) */
/* WARNING: Removing unreachable block (ram,0x000107880620) */
/* WARNING: Removing unreachable block (ram,0x00010788062c) */
/* WARNING: Removing unreachable block (ram,0x00010788063c) */
/* WARNING: Removing unreachable block (ram,0x000107880648) */
/* WARNING: Removing unreachable block (ram,0x000107880650) */
/* WARNING: Removing unreachable block (ram,0x0001078804a0) */
/* WARNING: Removing unreachable block (ram,0x0001078804ac) */
/* WARNING: Removing unreachable block (ram,0x0001078804c0) */
/* WARNING: Removing unreachable block (ram,0x0001078804dc) */
/* WARNING: Removing unreachable block (ram,0x0001078804e0) */
/* WARNING: Removing unreachable block (ram,0x0001078804e8) */
/* WARNING: Removing unreachable block (ram,0x0001078804d0) */
/* WARNING: Removing unreachable block (ram,0x0001078804d8) */
/* WARNING: Removing unreachable block (ram,0x0001078804f0) */
/* WARNING: Removing unreachable block (ram,0x0001078804f8) */
/* WARNING: Removing unreachable block (ram,0x000107880544) */
/* WARNING: Removing unreachable block (ram,0x000107880550) */
/* WARNING: Removing unreachable block (ram,0x000107880558) */
/* WARNING: Removing unreachable block (ram,0x000107880568) */
/* WARNING: Removing unreachable block (ram,0x000107880660) */
/* WARNING: Removing unreachable block (ram,0x000107880668) */
/* WARNING: Removing unreachable block (ram,0x000107880588) */
/* WARNING: Removing unreachable block (ram,0x00010788058c) */
/* WARNING: Removing unreachable block (ram,0x000107880500) */
/* WARNING: Removing unreachable block (ram,0x000107880518) */
/* WARNING: Removing unreachable block (ram,0x00010788052c) */
/* WARNING: Removing unreachable block (ram,0x000107880540) */
/* WARNING: Removing unreachable block (ram,0x00010788042c) */
/* WARNING: Removing unreachable block (ram,0x000107880ac8) */
/* WARNING: Removing unreachable block (ram,0x000107880ad4) */
/* WARNING: Removing unreachable block (ram,0x000107880adc) */
/* WARNING: Removing unreachable block (ram,0x000107880ae4) */
/* WARNING: Removing unreachable block (ram,0x000107880ae8) */
/* WARNING: Removing unreachable block (ram,0x000107881148) */

void FUN_1078803ac(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar18;
  undefined8 in_register_00005008;
  undefined1 auStack_110 [64];
  undefined8 *puStack_d0;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [8];
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puVar5;
  
  puVar5 = auStack_90;
  puVar4 = auStack_90;
  func_0x000107881230();
  puVar10 = unaff_x19 + -2;
  puStack_88 = unaff_x19 + -4;
  uVar17 = (long)unaff_x19 - (long)unaff_x20 >> 4;
  puVar9 = unaff_x20;
  puVar8 = puVar10;
  switch(uVar17) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x0001078813d0();
    if ((int)puVar8 != 0) {
      uStack_68 = unaff_x20[1];
      uStack_70 = *unaff_x20;
      uVar18 = *puVar10;
      unaff_x20[1] = unaff_x19[-1];
      *unaff_x20 = uVar18;
      unaff_x19[-1] = uStack_68;
      *puVar10 = uStack_70;
    }
    break;
  case 3:
    puVar11 = unaff_x20 + 2;
    func_0x00010788169c();
    goto code_r0x000107880a1c;
  case 4:
    puVar11 = unaff_x20 + 2;
    puVar8 = unaff_x20 + 4;
    func_0x00010788169c();
    goto code_r0x000107880aac;
  case 5:
    puVar11 = unaff_x20 + 2;
    puVar8 = unaff_x20 + 4;
    func_0x00010788169c();
    puVar5 = auStack_110;
    unaff_x29 = auStack_a0;
    puStack_d0 = unaff_x19 + -6;
    func_0x000107881134();
    unaff_x30 = &UNK_107880b14;
code_r0x000107880aac:
    puVar4 = puVar5 + -0x60;
    *(long *)(puVar5 + -0x30) = param_4;
    *(undefined8 **)(puVar5 + -0x28) = puVar10;
    *(undefined8 **)(puVar5 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
    *(undefined **)(puVar5 + -8) = unaff_x30;
    unaff_x29 = puVar5 + -0x10;
    func_0x000107881134();
    unaff_x30 = &UNK_107880ac8;
code_r0x000107880a1c:
    iVar6 = (int)puVar11;
    *(long *)(puVar4 + -0x30) = param_4;
    *(undefined8 **)(puVar4 + -0x28) = puVar10;
    *(undefined8 **)(puVar4 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
    *(undefined **)(puVar4 + -8) = unaff_x30;
    func_0x00010788135c();
    iVar7 = (int)puVar11;
    func_0x0001078813bc();
    if (((ulong)puVar11 & 1) == 0) {
      if (iVar7 != 0) {
        func_0x00010788168c();
        puVar8[1] = in_register_00005008;
        *puVar8 = param_1;
        func_0x00010788135c();
        if (iVar6 != 0) {
          func_0x000107881934();
        }
      }
    }
    else {
      if (iVar7 == 0) {
        func_0x000107881934();
        func_0x0001078813bc();
        if (iVar7 == 0) {
          return;
        }
        func_0x00010788168c();
      }
      else {
        in_register_00005008 = puVar9[1];
        param_1 = *puVar9;
        uVar18 = *puVar8;
        puVar9[1] = puVar8[1];
        *puVar9 = uVar18;
      }
      puVar8[1] = in_register_00005008;
      *puVar8 = param_1;
    }
    return;
  default:
    if ((long)uVar17 < 0x18) {
      if ((param_5 & 1) == 0) {
        if (unaff_x20 != unaff_x19) {
          puVar8 = unaff_x20 + -2;
          while (puVar9 = unaff_x20 + 2, puVar9 != unaff_x19) {
            puVar10 = puVar9;
            func_0x0001078813d0();
            if ((int)puVar10 != 0) {
              uStack_68 = unaff_x20[3];
              uStack_70 = *puVar9;
              puVar10 = puVar8;
              do {
                puVar11 = puVar10;
                puVar11[5] = puVar11[3];
                puVar11[4] = puVar11[2];
                uVar17 = 0;
                func_0x0001078813d0();
                puVar10 = puVar11 + -2;
              } while ((uVar17 & 1) != 0);
              puVar11[3] = uStack_68;
              puVar11[2] = uStack_70;
            }
            puVar8 = puVar8 + 2;
            unaff_x20 = puVar9;
          }
        }
      }
      else if (unaff_x20 != unaff_x19) {
        lVar12 = 0;
        puVar8 = unaff_x20;
        while (puVar9 = puVar8 + 2, puVar9 != unaff_x19) {
          puVar10 = puVar9;
          func_0x0001078809d8();
          if ((int)puVar10 != 0) {
            uStack_68 = puVar8[3];
            uStack_70 = *puVar9;
            lVar3 = lVar12;
            do {
              lVar13 = lVar3;
              puVar8 = (undefined8 *)((long)unaff_x20 + lVar13);
              puVar8[3] = puVar8[1];
              puVar8[2] = *puVar8;
              puVar8 = unaff_x20;
              if (lVar13 == 0) goto LAB_107880784;
              puVar8 = &uStack_70;
              func_0x0001078809d8(puVar8,lVar13 + -0x10 + (long)unaff_x20);
              lVar3 = lVar13 + -0x10;
            } while (((ulong)puVar8 & 1) != 0);
            puVar8 = (undefined8 *)((long)unaff_x20 + lVar13);
LAB_107880784:
            puVar8[1] = uStack_68;
            *puVar8 = uStack_70;
          }
          lVar12 = lVar12 + 0x10;
          puVar8 = puVar9;
        }
      }
    }
    else {
      if (param_4 != 0) {
        unaff_x29 = &stack0xfffffffffffffff0;
        if (uVar17 < 0x81) {
          unaff_x30 = (undefined *)0x10788048c;
          puVar4 = auStack_90;
          puVar9 = unaff_x20 + (uVar17 & 0xfffffffffffffffe);
          puVar11 = unaff_x20;
        }
        else {
          unaff_x30 = (undefined *)0x10788042c;
          puVar4 = auStack_90;
          puVar11 = unaff_x20 + (uVar17 & 0xfffffffffffffffe);
        }
        goto code_r0x000107880a1c;
      }
      if (unaff_x20 != unaff_x19) {
        uVar14 = uVar17 - 2 >> 1;
        uVar15 = uVar14;
        do {
          if ((long)uVar15 <= (long)uVar14) {
            uVar2 = (uVar15 & 0x3fffffffffffffff) << 1 | 1;
            puVar8 = unaff_x20 + uVar2 * 2;
            uVar1 = uVar15 * 2 + 2;
            puVar9 = puVar8;
            uVar16 = uVar2;
            if ((long)uVar1 < (long)uVar17) {
              func_0x000107881194();
              puVar9 = puVar8 + 2;
              uVar16 = uVar1;
              if ((int)param_2 == 0) {
                puVar9 = puVar8;
                uVar16 = uVar2;
              }
            }
            puVar8 = unaff_x20 + uVar15 * 2;
            func_0x000107881194();
            if (((ulong)param_2 & 1) == 0) {
              uStack_68 = puVar8[1];
              uStack_70 = *puVar8;
              do {
                puVar10 = puVar9;
                iVar6 = (int)param_2;
                uVar18 = *puVar10;
                puVar8[1] = puVar10[1];
                *puVar8 = uVar18;
                if ((long)uVar14 < (long)uVar16) break;
                uVar2 = uVar16 << 1 | 1;
                puVar8 = unaff_x20 + uVar2 * 2;
                uVar1 = uVar16 * 2 + 2;
                puVar9 = puVar8;
                uVar16 = uVar2;
                if ((long)uVar1 < (long)uVar17) {
                  func_0x000107881194();
                  puVar9 = puVar8 + 2;
                  uVar16 = uVar1;
                  if (iVar6 == 0) {
                    puVar9 = puVar8;
                    uVar16 = uVar2;
                  }
                }
                param_2 = puVar9;
                func_0x0001078809d8(puVar9,&uStack_70);
                puVar8 = puVar10;
              } while ((int)param_2 == 0);
              puVar10[1] = uStack_68;
              *puVar10 = uStack_70;
            }
          }
          uVar15 = uVar15 - 1;
        } while (-1 < (long)uVar15);
        for (; 1 < (long)uVar17; uVar17 = uVar17 - 1) {
          uVar15 = 0;
          uStack_78 = unaff_x20[1];
          uStack_80 = *unaff_x20;
          puVar8 = unaff_x20;
          do {
            uVar1 = uVar15 << 1 | 1;
            uVar14 = uVar15 * 2 + 2;
            puVar9 = puVar8 + uVar15 * 2 + 2;
            uVar2 = uVar1;
            if ((long)uVar14 < (long)uVar17) {
              func_0x000107881194();
              puVar9 = puVar8 + uVar15 * 2 + 4;
              uVar2 = uVar14;
              if ((int)param_2 == 0) {
                puVar9 = puVar8 + uVar15 * 2 + 2;
                uVar2 = uVar1;
              }
            }
            uVar15 = uVar2;
            uVar18 = *puVar9;
            puVar8[1] = puVar9[1];
            *puVar8 = uVar18;
            puVar8 = puVar9;
          } while ((long)uVar15 <= (long)(uVar17 - 2 >> 1));
          puVar8 = unaff_x19 + -2;
          if (puVar9 == puVar8) {
            puVar9[1] = uStack_78;
            *puVar9 = uStack_80;
          }
          else {
            uVar18 = *puVar8;
            puVar9[1] = unaff_x19[-1];
            *puVar9 = uVar18;
            unaff_x19[-1] = uStack_78;
            *puVar8 = uStack_80;
            lVar12 = (long)puVar9 + (0x10 - (long)unaff_x20) >> 4;
            if (1 < lVar12) {
              uVar15 = lVar12 - 2U >> 1;
              param_2 = unaff_x20 + uVar15 * 2;
              func_0x00010788135c();
              if ((int)param_2 != 0) {
                uStack_68 = puVar9[1];
                uStack_70 = *puVar9;
                puVar10 = unaff_x20 + uVar15 * 2;
                do {
                  puVar11 = puVar10;
                  uVar18 = *puVar11;
                  puVar9[1] = puVar11[1];
                  *puVar9 = uVar18;
                  if (uVar15 == 0) break;
                  uVar15 = uVar15 - 1 >> 1;
                  puVar10 = unaff_x20 + uVar15 * 2;
                  param_2 = puVar10;
                  func_0x0001078809d8(puVar10,&uStack_70);
                  puVar9 = puVar11;
                } while (((ulong)param_2 & 1) != 0);
                puVar11[1] = uStack_68;
                *puVar11 = uStack_70;
              }
            }
          }
          unaff_x19 = puVar8;
        }
      }
    }
  }
  func_0x00010788169c(unaff_x30);
  return;
}



/* Entry: 107880d84; end: 107880de7;  */

long * FUN_107880d84(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001072ba1a8(lVar1 + 0x18);
    }
    func_0x000107881614();
  }
  return param_1;
}



/* Entry: 107880f84; end: 107880fa7;  */

void FUN_107880f84(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107881e44; end: 107882367;  */

void FUN_107881e44(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  ulong uVar6;
  code *pcVar7;
  ulong *puVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  uint uVar14;
  long *plVar15;
  int *piVar16;
  uint uVar17;
  ulong uVar18;
  long *plVar19;
  double *pdVar20;
  long *plVar21;
  ulong *puVar22;
  long lVar23;
  int iVar24;
  ulong uVar25;
  int *piVar26;
  long *plVar27;
  double dVar28;
  int *piStack_b0;
  int *piStack_a8;
  int *piStack_a0;
  int *piStack_98;
  int *piStack_90;
  int *piStack_88;
  int *piStack_80;
  
  lVar11 = *(long *)(param_1 + 0x20);
  if (lVar11 == param_1 + 0x10) goto LAB_107881f64;
  puVar22 = (ulong *)(param_1 + 0x28);
  uVar25 = *(ulong *)(param_1 + 0x30);
  if (*puVar22 == uVar25) {
    uVar14 = *(uint *)(lVar11 + 0x20);
    uVar17 = *(uint *)(param_1 + 0x70);
    if (uVar14 <= uVar17) goto LAB_107881eb0;
    *(uint *)(param_1 + 0x70) = uVar14;
  }
  else {
    uVar17 = *(uint *)(param_1 + 0x70);
    uVar14 = *(uint *)(lVar11 + 0x20);
LAB_107881eb0:
    if (uVar17 != uVar14) goto LAB_107881f64;
  }
  lVar23 = *(long *)(lVar11 + 0x30);
  for (lVar11 = *(long *)(lVar11 + 0x28); lVar11 != lVar23; lVar11 = lVar11 + 0x28) {
    if (uVar25 < *(ulong *)(param_1 + 0x38)) {
      func_0x000107882528(uVar25,lVar11);
      uVar25 = uVar25 + 0x28;
      *(ulong *)(param_1 + 0x30) = uVar25;
    }
    else {
      puVar8 = puVar22;
      func_0x000107882608(puVar22,(long)(uVar25 - *(long *)(param_1 + 0x28)) / 0x28 + 1);
      func_0x000107882768(&piStack_98,puVar8,
                          (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28)) / 0x28,
                          param_1 + 0x38);
      func_0x000107882528(piStack_88,lVar11);
      piStack_88 = piStack_88 + 10;
      func_0x000107882658(puVar22,&piStack_98);
      uVar25 = *(ulong *)(param_1 + 0x30);
      func_0x000107882808(&piStack_98);
    }
    *(ulong *)(param_1 + 0x30) = uVar25;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010002c7d4();
  *(undefined8 *)(param_1 + 0x20) = uVar9;
LAB_107881f64:
  plVar19 = (long *)(param_1 + 0x28);
  plVar27 = (long *)*plVar19;
  iVar4 = *(int *)(param_1 + 0x70);
  piStack_a8 = (int *)0x0;
  piStack_a0 = (int *)0x0;
  piStack_b0 = (int *)0x0;
  plVar15 = *(long **)(param_1 + 0x30);
  if ((long)plVar15 - (long)plVar27 != 0) {
    uVar25 = ((long)plVar15 - (long)plVar27) / 0x28;
    if (0x1555555555555555 < uVar25) {
      func_0x000107882850();
LAB_107882328:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10788232c);
      (*pcVar7)();
    }
    func_0x00010788285c(&piStack_98,uVar25,0,&piStack_a0);
    piVar16 = piStack_90 + (((long)piStack_a8 - (long)piStack_b0) / -0xc) * 3;
    _memcpy(piVar16);
    piVar13 = piStack_a0;
    piStack_a0 = piStack_80;
    piStack_a8 = piStack_88;
    piStack_88 = piStack_b0;
    piStack_80 = piVar13;
    piStack_98 = piStack_b0;
    piStack_90 = piStack_b0;
    piStack_b0 = piVar16;
    func_0x0001078828b8(&piStack_98);
    plVar27 = *(long **)(param_1 + 0x28);
    plVar15 = *(long **)(param_1 + 0x30);
  }
  uVar17 = iVar4 + 1;
  dVar28 = (double)uVar17;
  do {
    if (plVar27 == plVar15) {
      plVar27 = (long *)*plVar19;
      plVar15 = plVar27;
      while (plVar21 = *(long **)(param_1 + 0x30), plVar27 != plVar21) {
        if ((plVar27[3] != (plVar27[1] - *plVar27 >> 4) + -1) ||
           (dVar28 < *(double *)(*plVar27 + plVar27[3] * 0x10 + 8))) {
          plVar27 = plVar27 + 5;
          plVar15 = plVar15 + 5;
        }
        else {
          lVar23 = *plVar19;
          lVar11 = lVar23 + (long)plVar15;
          while( true ) {
            puVar1 = (undefined8 *)(lVar11 - lVar23);
            if (puVar1 + 5 == plVar21) break;
            func_0x0001078825d4(puVar1);
            puVar1[1] = puVar1[6];
            *puVar1 = puVar1[5];
            uVar9 = puVar1[7];
            puVar1[6] = 0;
            puVar1[7] = 0;
            puVar1[5] = 0;
            puVar1[2] = uVar9;
            puVar1[3] = puVar1[8];
            lVar11 = lVar11 + 0x28;
            *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(puVar1 + 9);
          }
          func_0x000107881014(plVar19,lVar11 - lVar23);
        }
      }
      if (piStack_b0 != piStack_a8) {
        uVar25 = 1;
        func_0x0001078828f8(piStack_b0,piStack_a8,
                            LZCOUNT(((long)piStack_a8 - (long)piStack_b0) / 0xc) << 1 ^ 0x7e,1);
        if (piStack_b0 != piStack_a8) {
          lVar11 = 0;
          iVar10 = *piStack_b0;
          iVar4 = piStack_b0[1];
          piVar13 = piStack_a8;
          piVar16 = piStack_b0;
          iVar24 = -1;
          if ((char)piStack_b0[2] != '\0') {
            iVar24 = 1;
          }
          for (; uVar25 < (ulong)(((long)piVar13 - (long)piVar16) / 0xc); uVar25 = uVar25 + 1) {
            iVar2 = *(int *)((long)piVar16 + lVar11 + 0xc);
            iVar3 = *(int *)((long)piVar16 + lVar11 + 0x10);
            bVar5 = *(byte *)((long)piVar16 + lVar11 + 0x14);
            if (((*(char *)(param_1 + 4) != '\x01') || (iVar24 == 0)) &&
               (iVar4 < iVar2 && iVar4 <= iVar3)) {
              func_0x0001078835f4(param_1 + 0x40);
              piVar13 = piStack_a8;
              piVar16 = piStack_b0;
              iVar10 = iVar2;
            }
            iVar2 = iVar24 + -1;
            if ((bVar5 & 1) != 0) {
              iVar2 = iVar24 + 1;
            }
            iVar4 = iVar10;
            if (iVar10 <= iVar3) {
              iVar4 = iVar3;
            }
            lVar11 = lVar11 + 0xc;
            iVar24 = iVar2;
          }
          func_0x0001078835f4(param_1 + 0x40);
        }
      }
      func_0x0001078835c8(&piStack_b0);
      return;
    }
    lVar23 = plVar27[4];
    lVar11 = *plVar27;
    lVar12 = plVar27[1] - lVar11 >> 4;
    uVar25 = plVar27[3];
    pdVar20 = (double *)(lVar11 + uVar25 * 0x10 + 0x18);
    for (; uVar25 < lVar12 - 1U; uVar25 = uVar25 + 1) {
      func_0x000107881ac8(lVar11,uVar25,iVar4);
      func_0x000107884310();
      if (dVar28 < *pdVar20) {
        func_0x000107881ac8(lVar11,uVar25,uVar17);
        func_0x000107884310();
        break;
      }
      if (lVar12 - 2U == uVar25) {
        func_0x000107884310(pdVar20[-1]);
      }
      plVar27[3] = uVar25 + 1;
      pdVar20 = pdVar20 + 2;
    }
    if (piStack_a8 < piStack_a0) {
      *piStack_a8 = 0x7fffffff;
      piStack_a8[1] = 0;
      piVar13 = piStack_a8 + 3;
      *(char *)(piStack_a8 + 2) = (char)lVar23;
    }
    else {
      lVar11 = ((long)piStack_a8 - (long)piStack_b0) / 0xc;
      uVar25 = lVar11 + 1;
      if (0x1555555555555555 < uVar25) {
        func_0x000107882850();
        goto LAB_107882328;
      }
      uVar6 = ((long)piStack_a0 - (long)piStack_b0) / 0xc;
      uVar18 = uVar6 * 2;
      if (uVar18 < uVar25 || uVar18 - uVar25 == 0) {
        uVar18 = uVar25;
      }
      if (0xaaaaaaaaaaaaaa9 < uVar6) {
        uVar18 = 0x1555555555555555;
      }
      func_0x00010788285c(&piStack_98,uVar18,lVar11,&piStack_a0);
      *piStack_88 = 0x7fffffff;
      piStack_88[1] = 0;
      *(char *)(piStack_88 + 2) = (char)lVar23;
      piVar13 = piStack_88 + 3;
      piVar26 = piStack_90 + (((long)piStack_a8 - (long)piStack_b0) / -0xc) * 3;
      _memcpy(piVar26);
      piVar16 = piStack_a0;
      piStack_a0 = piStack_80;
      piStack_98 = piStack_b0;
      piStack_88 = piStack_b0;
      piStack_80 = piVar16;
      piStack_90 = piStack_b0;
      piStack_b0 = piVar26;
      piStack_a8 = piVar13;
      func_0x0001078828b8(&piStack_98);
    }
    plVar27 = plVar27 + 5;
    piStack_a8 = piVar13;
  } while( true );
}



/* Entry: 10788275c; end: 107882767;  */

long FUN_10788275c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong unaff_x20;
  long lVar2;
  
  func_0x0001078844f4();
  func_0x00010788440c();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x666666666666666 < unaff_x20) {
      func_0x000104bd35f4();
      if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
        lVar2 = **(long **)(param_1 + 8);
        lVar1 = **(long **)(param_1 + 0x10);
        while (lVar1 != lVar2) {
          lVar1 = lVar1 + -0x28;
          func_0x000104c31c5c();
        }
      }
      return param_1;
    }
    lVar1 = unaff_x20 * 0x28;
    __Znwm(lVar1);
  }
  func_0x000107884474(0x28);
  return lVar1;
}



/* Entry: 1078832bc; end: 10788332f;  */

void FUN_1078832bc(void)

{
  int extraout_w8;
  uint uVar1;
  int extraout_w8_00;
  int extraout_w8_01;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  
  func_0x000107884430();
  func_0x0001078831b0();
  func_0x000107884518();
  uVar1 = extraout_w9;
  if (extraout_w8 != extraout_w10) {
    uVar1 = (uint)(extraout_w8 < extraout_w10);
  }
  if (uVar1 == 1) {
    func_0x00010788433c();
    uVar1 = extraout_w9_00;
    if (extraout_w8_00 != extraout_w10_00) {
      uVar1 = (uint)(extraout_w8_00 < extraout_w10_00);
    }
    if (uVar1 == 1) {
      func_0x000107884370();
      uVar1 = extraout_w9_01;
      if (extraout_w8_01 != extraout_w10_01) {
        uVar1 = (uint)(extraout_w8_01 < extraout_w10_01);
      }
      if (uVar1 == 1) {
        func_0x0001078843c4();
      }
    }
  }
  return;
}



/* Entry: 107883af8; end: 107883c3b;  */

void FUN_107883af8(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  puVar2 = (undefined8 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar2) < 0x11) {
    plVar1 = param_1;
    func_0x000104c31a9c(param_1,((long)puVar2 - *param_1 >> 4) + 2);
    func_0x000104c31af0(auStack_58,plVar1,(long)param_2 - *param_1 >> 4,param_1 + 2);
    for (lVar3 = 0; lVar3 != 0x20; lVar3 = lVar3 + 0x10) {
      uVar5 = *param_3;
      ((undefined8 *)(lStack_48 + lVar3))[1] = param_3[1];
      *(undefined8 *)(lStack_48 + lVar3) = uVar5;
    }
    lStack_48 = lStack_48 + 0x20;
    func_0x000107883c7c(param_1,auStack_58,param_2);
    func_0x000104c31b5c(auStack_58);
  }
  else {
    uVar4 = (long)puVar2 - (long)param_2 >> 4;
    if (uVar4 < 2) {
      for (lVar3 = 0; uVar4 * -0x10 + 0x20 != lVar3; lVar3 = lVar3 + 0x10) {
        uVar5 = *param_3;
        ((undefined8 *)((long)puVar2 + lVar3))[1] = param_3[1];
        *(undefined8 *)((long)puVar2 + lVar3) = uVar5;
      }
      param_1[1] = (long)(puVar2 + (2 - uVar4) * 2);
      if (puVar2 == param_2) {
        return;
      }
    }
    else {
      uVar4 = 2;
    }
    func_0x000107883c3c(param_1,param_2,puVar2,param_2 + 4);
    lVar3 = 0x20;
    if ((undefined8 *)param_1[1] <= param_3 || param_3 < param_2) {
      lVar3 = 0;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      uVar5 = *(undefined8 *)((long)param_3 + lVar3);
      param_2[1] = ((undefined8 *)((long)param_3 + lVar3))[1];
      *param_2 = uVar5;
      param_2 = param_2 + 2;
    }
  }
  return;
}



/* Entry: 10788469c; end: 1078847eb;  */

void FUN_10788469c(long *param_1,uint param_2,uint param_3,long *param_4,long *param_5)

{
  double *pdVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  
  for (uVar9 = 0; uVar9 != param_2; uVar9 = uVar9 + 1) {
    lVar5 = *param_1;
    lVar6 = *param_4;
    uVar7 = uVar9;
    for (uVar3 = 0; param_3 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined8 *)(lVar6 + uVar3 * 8) = *(undefined8 *)(lVar5 + (ulong)uVar7 * 8);
      uVar7 = uVar7 + param_2;
    }
    func_0x000107884be8();
    func_0x000107884594();
    lVar5 = *param_1;
    puVar2 = (undefined8 *)*param_5;
    uVar7 = uVar9;
    for (uVar3 = (ulong)param_3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined8 *)(lVar5 + (ulong)uVar7 * 8) = *puVar2;
      uVar7 = uVar7 + param_2;
      puVar2 = puVar2 + 1;
    }
  }
  uVar3 = 0;
  for (uVar9 = 0; uVar9 != param_3; uVar9 = uVar9 + 1) {
    lVar5 = *param_1;
    lVar6 = *param_4;
    uVar8 = uVar3;
    for (uVar4 = 0; param_2 != uVar4; uVar4 = uVar4 + 1) {
      *(undefined8 *)(lVar6 + uVar4 * 8) = *(undefined8 *)(lVar5 + uVar8 * 8);
      uVar8 = (ulong)((int)uVar8 + 1);
    }
    func_0x000107884be8();
    func_0x000107884594();
    lVar5 = *param_1;
    pdVar1 = (double *)*param_5;
    uVar8 = uVar3;
    for (uVar4 = (ulong)param_2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(double *)(lVar5 + uVar8 * 8) = SQRT(*pdVar1);
      uVar8 = (ulong)((int)uVar8 + 1);
      pdVar1 = pdVar1 + 1;
    }
    uVar3 = (ulong)((int)uVar3 + param_2);
  }
  return;
}



/* Entry: 107884bfc; end: 107884ccf;  */

void FUN_107884bfc(undefined8 *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    bVar1 = *param_2;
    if ((((0x19 < (byte)((bVar1 & 0xdf) + 0xbf) && 9 < (byte)(bVar1 - 0x30)) &&
         (uVar2 = (uint)bVar1, 1 < uVar2 - 0x2d)) && (uVar2 != 0x5f)) && (uVar2 != 0x7e)) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_1,0x25);
      func_0x000107885478();
    }
    func_0x000107885478();
    param_2 = param_2 + 1;
  }
  return;
}



/* Entry: 107886214; end: 10788627f;  */

long FUN_107886214(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000104c318bc();
  func_0x000107268400(&uStack_30,param_3);
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined8 *)(param_1 + 0x48) = uStack_28;
  *(undefined8 *)(param_1 + 0x40) = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000104c335c0(&uStack_30);
  return param_1;
}



/* Entry: 1078867c4; end: 1078868a7;  */

void FUN_1078867c4(long param_1,undefined8 *param_2,int param_3,ulong param_4,long param_5,
                  ulong param_6,int param_7)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uStack_58;
  
  puVar1 = &uStack_58;
  uStack_58 = param_4;
  func_0x0001078868a8(puVar1);
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 8);
  *(ulong *)(lVar3 + 0x6c) =
       CONCAT44((int)((ulong)*(undefined8 *)(lVar3 + 0x6c) >> 0x20) + param_7,
                (int)*(undefined8 *)(lVar3 + 0x6c) + 1);
  if ((param_4 & 0xff) == 4) {
    *(int *)(lVar3 + 0x68) = *(int *)(lVar3 + 0x68) + (int)(param_6 / 3);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *param_2;
  lVar3 = 1;
  if (param_3 != 0) {
    lVar3 = 2;
  }
  puVar2 = puVar1;
  func_0x00010788885c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)
            (uVar5,puVar2,puVar1,param_6,param_3 != 0,uVar4,param_5 << lVar3,param_7);
  return;
}



/* Entry: 107886f50; end: 10788701b;  */

void FUN_107886f50(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  plVar4 = (long *)*param_2;
  plVar3 = plVar4;
  (**(code **)(*plVar4 + 0x10))();
  *(int *)(*(long *)(param_1 + 0x30) + 0x6e8) = (int)plVar3;
  plVar3 = plVar4;
  (**(code **)(*plVar4 + 0x18))();
  if ((int)plVar3 == 2) {
    if (*(long **)(*(long *)(param_1 + 0x30) + 0x6f0) != plVar4) {
      plVar3 = plVar4;
      func_0x00010789487c(plVar4);
      func_0x0001078868d4(param_1,plVar3);
      lVar1 = plVar4[0x41];
      uVar5 = *(undefined4 *)((long)plVar4 + 0x20c);
      lVar2 = plVar4[0x42];
      uVar6 = *(undefined4 *)((long)plVar4 + 0x214);
      func_0x000107889410();
      func_0x000107887ec8();
      _objc_msgSend((int)lVar1,uVar5,(int)lVar2,uVar6);
      *(long **)(*(long *)(param_1 + 0x30) + 0x6f0) = plVar4;
    }
  }
  else {
    *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x6f0) = 0;
  }
  return;
}



/* Entry: 107887388; end: 1078873b7;  */

void FUN_107887388(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  
  func_0x000107886a38();
  dVar3 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 0x10));
  dVar4 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 0x14));
  dVar5 = (double)*(float *)(param_2 + 4);
  dVar6 = (double)*(float *)(param_2 + 8);
  lVar1 = *(long *)(param_1 + 0x30);
  if ((((*(char *)(lVar1 + 0xc0) != '\x01') || (*(double *)(lVar1 + 0x90) != 0.0)) ||
      (*(double *)(lVar1 + 0x98) != 0.0)) ||
     (((*(double *)(lVar1 + 0xa0) != dVar3 || (*(double *)(lVar1 + 0xa8) != dVar4)) ||
      ((*(double *)(lVar1 + 0xb0) != dVar5 || (*(double *)(lVar1 + 0xb8) != dVar6)))))) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    lVar1 = param_1;
    func_0x00010788ad3c();
    uStack_70 = 0;
    uStack_68 = 0;
    dStack_60 = dVar3;
    dStack_58 = dVar4;
    dStack_50 = dVar5;
    dStack_48 = dVar6;
    _objc_msgSend(uVar2,lVar1,&uStack_70);
    lVar1 = *(long *)(param_1 + 0x30);
    *(undefined8 *)(lVar1 + 0x90) = 0;
    *(undefined8 *)(lVar1 + 0x98) = 0;
    *(double *)(lVar1 + 0xa0) = dVar3;
    *(double *)(lVar1 + 0xa8) = dVar4;
    *(double *)(lVar1 + 0xb0) = dVar5;
    *(double *)(lVar1 + 0xb8) = dVar6;
    if ((*(byte *)(lVar1 + 0xc0) & 1) == 0) {
      *(undefined1 *)(lVar1 + 0xc0) = 1;
    }
  }
  return;
}



/* Entry: 107887678; end: 1078876ef;  */

void FUN_107887678(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 0x30) + 0x6f0) != 0) {
    func_0x000107887d9c();
    func_0x0001078874dc();
  }
  return;
}



/* Entry: 107887a80; end: 107887aab;  */

void FUN_107887a80(long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  uint uVar2;
  
  if (*(long *)(*(long *)(param_1 + 0x30) + 0x6f0) != 0) {
    func_0x000107887d9c();
    uVar2 = (uint)param_2;
    if ((((uint)param_4 == uVar2 >> 0x18) && ((param_2 >> 0x20 & 1) != 0)) &&
       (((uint)(param_2 >> 0x10) & 0xff) == 7)) {
      if ((~uVar2 & 0xff) != 0) {
        func_0x000107886950(param_1,param_3,(param_4 & 0xffffffff) << 6,uVar2 & 0xff);
      }
      if ((~uVar2 & 0xff00) != 0) {
        func_0x000107889c50();
        func_0x000107887ed4();
        _objc_msgSend();
        lVar1 = *(long *)(param_1 + 0x30) + (param_2 >> 8 & 0xff) * 0x10;
        *(undefined8 *)(lVar1 + 1000) = 0;
        *(undefined4 *)(lVar1 + 0x3f0) = 0;
      }
    }
    return;
  }
  return;
}



/* Entry: 107887d08; end: 107887d2b;  */

undefined8 FUN_107887d08(undefined8 param_1)

{
  func_0x000107887d2c(param_1,0);
  return param_1;
}



/* Entry: 107887f90; end: 107887fa3;  */

void FUN_107887f90(void)

{
  func_0x000107887f2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10788823c; end: 1078882ab;  */

undefined * FUN_10788823c(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113823eb0 & 1) == 0) {
    iVar1 = 0x13823eb0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430ac3;
      _objc_lookUpClass();
      puRam0000000113823ea8 = puVar2;
      ___cxa_guard_release(0x113823eb0);
    }
  }
  return puRam0000000113823ea8;
}



/* Entry: 1078885bc; end: 10788862b;  */

undefined * FUN_1078885bc(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113823f30 & 1) == 0) {
    iVar1 = 0x13823f30;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430b64;
      _sel_registerName();
      puRam0000000113823f28 = puVar2;
      ___cxa_guard_release(0x113823f30);
    }
  }
  return puRam0000000113823f28;
}



/* Entry: 10788893c; end: 1078889ab;  */

undefined * FUN_10788893c(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113823fb0 & 1) == 0) {
    iVar1 = 0x13823fb0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430ca8;
      _sel_registerName();
      puRam0000000113823fa8 = puVar2;
      ___cxa_guard_release(0x113823fb0);
    }
  }
  return puRam0000000113823fa8;
}



/* Entry: 107888cb8; end: 107888d27;  */

undefined * FUN_107888cb8(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824020 & 1) == 0) {
    iVar1 = 0x13824020;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430d3a;
      _sel_registerName();
      puRam0000000113824018 = puVar2;
      ___cxa_guard_release(0x113824020);
    }
  }
  return puRam0000000113824018;
}



/* Entry: 107889024; end: 107889093;  */

undefined * FUN_107889024(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824050 & 1) == 0) {
    iVar1 = 0x13824050;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430e53;
      _sel_registerName();
      puRam0000000113824048 = puVar2;
      ___cxa_guard_release(0x113824050);
    }
  }
  return puRam0000000113824048;
}



/* Entry: 1078893a4; end: 10788940f;  */

undefined8 FUN_1078893a4(void)

{
  int iVar1;
  
  if ((bRam0000000113726478 & 1) == 0) {
    iVar1 = 0x13726478;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _sel_registerName(&UNK_10f430f56);
      func_0x0001078902dc(0x113726470);
    }
  }
  return uRam0000000113726470;
}



/* Entry: 107889720; end: 10788978f;  */

undefined * FUN_107889720(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824140 & 1) == 0) {
    iVar1 = 0x13824140;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f431014;
      _sel_registerName();
      puRam0000000113824138 = puVar2;
      ___cxa_guard_release(0x113824140);
    }
  }
  return puRam0000000113824138;
}



/* Entry: 107889a90; end: 107889aff;  */

undefined * FUN_107889a90(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824180 & 1) == 0) {
    iVar1 = 0x13824180;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f4310dd;
      _sel_registerName();
      puRam0000000113824178 = puVar2;
      ___cxa_guard_release(0x113824180);
    }
  }
  return puRam0000000113824178;
}



/* Entry: 107889e10; end: 107889e7b;  */

undefined8 FUN_107889e10(void)

{
  int iVar1;
  
  if ((bRam00000001137264d8 & 1) == 0) {
    iVar1 = 0x137264d8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _sel_registerName(&UNK_10f4311bc);
      func_0x0001078902dc(0x1137264d0);
    }
  }
  return uRam00000001137264d0;
}



/* Entry: 10788a180; end: 10788a1ef;  */

undefined * FUN_10788a180(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824240 & 1) == 0) {
    iVar1 = 0x13824240;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f431236;
      _sel_registerName();
      puRam0000000113824238 = puVar2;
      ___cxa_guard_release(0x113824240);
    }
  }
  return puRam0000000113824238;
}



/* Entry: 10788a4f8; end: 10788a567;  */

undefined * FUN_10788a4f8(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138242a0 & 1) == 0) {
    iVar1 = 0x138242a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f4312cd;
      _sel_registerName();
      puRam0000000113824298 = puVar2;
      ___cxa_guard_release(0x1138242a0);
    }
  }
  return puRam0000000113824298;
}



/* Entry: 10788a870; end: 10788a8df;  */

undefined * FUN_10788a870(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824300 & 1) == 0) {
    iVar1 = 0x13824300;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f431386;
      _sel_registerName();
      puRam00000001138242f8 = puVar2;
      ___cxa_guard_release(0x113824300);
    }
  }
  return puRam00000001138242f8;
}



/* Entry: 10788abec; end: 10788ac5b;  */

undefined * FUN_10788abec(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824370 & 1) == 0) {
    iVar1 = 0x13824370;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f431417;
      _sel_registerName();
      puRam0000000113824368 = puVar2;
      ___cxa_guard_release(0x113824370);
    }
  }
  return puRam0000000113824368;
}



/* Entry: 10788af6c; end: 10788afdb;  */

undefined * FUN_10788af6c(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138243f0 & 1) == 0) {
    iVar1 = 0x138243f0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f43149c;
      _sel_registerName();
      puRam00000001138243e8 = puVar2;
      ___cxa_guard_release(0x1138243f0);
    }
  }
  return puRam00000001138243e8;
}



/* Entry: 10788b2e8; end: 10788b353;  */

undefined8 FUN_10788b2e8(void)

{
  int iVar1;
  
  if ((bRam0000000113726598 & 1) == 0) {
    iVar1 = 0x13726598;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _sel_registerName(&UNK_10f4314ea);
      func_0x0001078902dc(0x113726590);
    }
  }
  return uRam0000000113726590;
}



/* Entry: 10788bec8; end: 10788c38b;  */

long FUN_10788bec8(ulong param_1,undefined8 *param_2,ulong *param_3)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  ulong uVar7;
  code *pcVar8;
  ulong ***pppuVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long *plVar19;
  long unaff_x19;
  byte *unaff_x20;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  ulong **ppuStack_98;
  undefined4 uStack_90;
  ulong uStack_8c;
  undefined7 uStack_84;
  undefined4 uStack_7d;
  long lStack_78;
  ulong *puStack_70;
  ulong uStack_68;
  
  puVar11 = param_3;
  func_0x0001078907c8();
  plVar20 = (long *)(param_1 + 0x90);
  for (plVar19 = (long *)(*(long *)(param_1 + 0x88) + 0x20);
      (uint *)(plVar19 + -4) != (uint *)*plVar20; plVar19 = plVar19 + 5) {
    uVar4 = *(uint *)(plVar19 + -4);
    uVar3 = uVar4 ^ (uint)*param_2;
    param_1 = (ulong)uVar3 & 0x100;
    if ((((uint)*param_2 & 0xff) == (uVar4 & 0xff) && (uVar3 & 0x100) == 0) &&
       (param_1 = (ulong)*(uint *)(plVar19 + -1),
       ((((*(ulong *)((long)plVar19 + -0x14) ^ *puVar11) >> 0x20 == 0 &&
         *(uint *)(plVar19 + -1) == *(uint *)((long)puVar11 + 0xc)) &&
        *(char *)((long)plVar19 + -4) == (char)puVar11[2]) &&
       *(char *)((long)plVar19 + -3) == *(char *)((long)puVar11 + 0x11)) &&
       *(char *)((long)plVar19 + -2) == *(char *)((long)puVar11 + 0x12))) {
      return *plVar19;
    }
  }
  func_0x0001078881d0();
  func_0x00010788b198();
  func_0x000107890428();
  func_0x00010788b208();
  func_0x000107890428();
  uStack_68 = param_1;
  func_0x00010788a644();
  func_0x000107890590();
  func_0x000107890440();
  func_0x00010788986c();
  func_0x000107890590();
  func_0x000107890440();
  func_0x0001078898d8();
  func_0x000107890590();
  func_0x000107890440();
  ppuStack_98 = (ulong **)*param_3;
  func_0x000107893d78(&ppuStack_98);
  func_0x00010788a5d8();
  func_0x00010789040c();
  _objc_msgSend();
  puStack_70 = &uStack_68;
  func_0x00010788f324(param_3);
  ppuStack_98 = &puStack_70;
  uVar12 = (ulong)*(uint *)((long)param_3 + 4);
  if (*(uint *)((long)param_3 + 4) == 0xffffffff) {
    uVar12 = 0xffffffffffffffff;
  }
  pppuVar9 = &ppuStack_98;
  (*(code *)(&PTR_DAT_1109e4358)[uVar12])(pppuVar9,param_3);
  uVar12 = uStack_68;
  uVar5 = *(undefined4 *)((long)param_3 + 0xc);
  func_0x00010788ae1c();
  _objc_msgSend(uVar12,pppuVar9,uVar5);
  func_0x000107887fa8();
  func_0x00010788b198();
  func_0x000107890428();
  func_0x00010788b208();
  func_0x000107890428();
  bVar6 = unaff_x20[1];
  uVar22 = uVar12;
  func_0x0001078899b4();
  _objc_msgSend(uVar12,uVar22,bVar6);
  uVar22 = (ulong)*unaff_x20;
  func_0x000107889800();
  func_0x000107893d40(uVar22);
  func_0x000107890440();
  FUN_1078893a4();
  func_0x00010789040c();
  _objc_msgSend();
  FUN_107889e10();
  func_0x00010789040c();
  _objc_msgSend();
  lVar21 = *(long *)(unaff_x19 + 8);
  func_0x000107888d28();
  func_0x00010789082c(lVar21,uVar22);
  if (lVar21 == 0) {
    lVar21 = *(long *)(unaff_x19 + 0xa0);
  }
  else {
    ppuStack_98 = *(ulong ***)unaff_x20;
    uStack_90 = *(undefined4 *)(unaff_x20 + 8);
    uVar22 = *param_3;
    uStack_84 = (undefined7)param_3[1];
    uStack_7d = *(undefined4 *)((long)param_3 + 0xf);
    plVar19 = *(long **)(unaff_x19 + 0x90);
    uStack_8c = uVar22;
    if (plVar19 < *(long **)(unaff_x19 + 0x98)) {
      lVar14 = *(long *)unaff_x20;
      *(undefined4 *)(plVar19 + 1) = *(undefined4 *)(unaff_x20 + 8);
      *plVar19 = lVar14;
      *(ulong *)((long)plVar19 + 0xc) = uVar22;
      *(undefined4 *)((long)plVar19 + 0x1b) = uStack_7d;
      *(ulong *)((long)plVar19 + 0x14) = CONCAT17((undefined1)uStack_7d,uStack_84);
      plVar19[4] = lVar21;
      lStack_78 = 0;
      plVar19 = plVar19 + 5;
    }
    else {
      plVar20 = *(long **)(unaff_x19 + 0x88);
      lVar14 = (long)plVar19 - (long)plVar20;
      uVar1 = lVar14 / 0x28 + 1;
      lStack_78 = lVar21;
      if (0x666666666666666 < uVar1) {
        func_0x00010788f428();
LAB_10788c324:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10788c328);
        (*pcVar8)();
      }
      uVar7 = ((long)*(long **)(unaff_x19 + 0x98) - (long)plVar20) / 0x28;
      uVar18 = uVar7 * 2;
      if (uVar18 < uVar1 || uVar18 - uVar1 == 0) {
        uVar18 = uVar1;
      }
      if (0x333333333333332 < uVar7) {
        uVar18 = 0x666666666666666;
      }
      if (0x666666666666666 < uVar18) {
        func_0x000104bd35f4();
        goto LAB_10788c324;
      }
      lVar10 = uVar18 * 0x28;
      __Znwm();
      plVar2 = (long *)(lVar10 + lVar14);
      *plVar2 = *(long *)unaff_x20;
      *(undefined4 *)(plVar2 + 1) = *(undefined4 *)(unaff_x20 + 8);
      *(ulong *)((long)plVar2 + 0xc) = uVar22;
      *(ulong *)((long)plVar2 + 0x14) = param_3[1];
      *(undefined4 *)((long)plVar2 + 0x1b) = *(undefined4 *)((long)param_3 + 0xf);
      plVar2[4] = lVar21;
      lStack_78 = 0;
      plVar13 = plVar2 + (lVar14 / -0x28) * 5;
      for (plVar15 = plVar20; plVar15 != plVar19; plVar15 = plVar15 + 5) {
        lVar16 = *plVar15;
        *(int *)(plVar13 + 1) = (int)plVar15[1];
        *plVar13 = lVar16;
        *(undefined8 *)((long)plVar13 + 0xc) = *(undefined8 *)((long)plVar15 + 0xc);
        uVar17 = *(undefined8 *)((long)plVar15 + 0x14);
        *(undefined4 *)((long)plVar13 + 0x1b) = *(undefined4 *)((long)plVar15 + 0x1b);
        *(undefined8 *)((long)plVar13 + 0x14) = uVar17;
        plVar13[4] = plVar15[4];
        plVar15[4] = 0;
        plVar13 = plVar13 + 5;
      }
      for (; plVar20 != plVar19; plVar20 = plVar20 + 5) {
        func_0x00010788f434(plVar20);
      }
      lVar16 = *(long *)(unaff_x19 + 0x88);
      plVar19 = plVar2 + 5;
      *(long **)(unaff_x19 + 0x88) = plVar2 + (lVar14 / -0x28) * 5;
      *(long **)(unaff_x19 + 0x90) = plVar19;
      *(ulong *)(unaff_x19 + 0x98) = lVar10 + uVar18 * 0x28;
      if (lVar16 != 0) {
        __ZdlPv();
      }
    }
    *(long **)(unaff_x19 + 0x90) = plVar19;
    func_0x00010788f434(&ppuStack_98);
  }
  if (uVar12 != 0) {
    func_0x00010788b354();
    func_0x000107890420();
  }
  if (uStack_68 != 0) {
    func_0x00010788b354();
    func_0x0001078904e8();
  }
  return lVar21;
}



/* Entry: 10788cbc8; end: 10788cd4b;  */

void FUN_10788cbc8(long param_1,long param_2,long param_3)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  long unaff_x20;
  
  lVar1 = param_2;
  func_0x000107890558();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      FUN_107888cb8();
      func_0x0001078908e0();
      func_0x0001078905dc();
      param_2 = param_1;
    }
    else {
      func_0x000107888c48();
      func_0x0001078908e0();
      func_0x000107890578();
      param_2 = param_1;
    }
    do {
      func_0x0001078903c8();
    } while (extraout_w10 != 0);
    func_0x00010788838c();
    func_0x0001078903e8();
    do {
      func_0x000107890768();
    } while (extraout_w10_00 != 0);
  }
  *unaff_x19 = param_2;
  unaff_x19[1] = unaff_x20;
  func_0x0001078906d0();
  return;
}



/* Entry: 10788d3e0; end: 10788d567;  */

void FUN_10788d3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *puVar2;
  undefined8 *puStack_80;
  undefined8 *puStack_68;
  
  func_0x000107890558();
  FUN_10788823c();
  func_0x00010788b198();
  func_0x0001078903e8();
  func_0x00010788b208();
  func_0x0001078903e8();
  func_0x00010788aa2c();
  func_0x0001078904f8();
  func_0x000107890834();
  func_0x00010788adac();
  func_0x0001078904f8();
  func_0x0001078906b8();
  func_0x000107889eec();
  func_0x0001078904f8();
  func_0x000107890648();
  func_0x000107893d1c(param_3);
  func_0x00010788a260(0x104);
  func_0x0001078904f8();
  func_0x00010789051c();
  func_0x00010788aa9c();
  func_0x0001078904f8();
  func_0x00010789051c();
  if ((param_4 & 0x101) == 0) {
    func_0x00010788a800();
    func_0x0001078904f8();
  }
  else {
    func_0x00010788a800();
    func_0x0001078904f8();
  }
  _objc_msgSend();
  puVar2 = *(undefined8 **)(unaff_x20 + 8);
  FUN_107889024();
  _objc_msgSend(puVar2,param_3,param_1);
  puVar1 = puVar2;
  func_0x00010788b354();
  func_0x0001078904f8();
  _objc_msgSend();
  do {
    func_0x0001078903c8();
  } while (extraout_w10 != 0);
  puStack_80 = puVar2;
  func_0x0001078906c8();
  *puVar1 = &PTR_DAT_1109e43d8;
  puVar1[1] = puVar2;
  puVar1[2] = unaff_x20;
  *(undefined1 *)(puVar1 + 3) = 1;
  puStack_68 = puVar2;
  func_0x00010788f6b8(&puStack_68);
  *unaff_x19 = puVar1;
  func_0x00010788f6b8(&puStack_80);
  return;
}



/* Entry: 10788db88; end: 10788dbaf;  */

undefined8 FUN_10788db88(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010724b8b8(param_1 + 0x18);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10788f01c; end: 10788f073;  */

void FUN_10788f01c(void)

{
  func_0x0001078906c8();
  func_0x0001078905f4(&UNK_1109e4c78);
  return;
}



/* Entry: 10788f25c; end: 10788f263;  */

void FUN_10788f25c(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001078907a8(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -2;
    func_0x00010788f474();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10788f468; end: 10788f473;  */

long FUN_10788f468(long param_1)

{
  func_0x00010789056c();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010788b354();
    func_0x000107890438();
  }
  return param_1;
}



/* Entry: 10788f648; end: 10788f68b;  */

long * FUN_10788f648(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 10788f78c; end: 10788f7a3;  */

void FUN_10788f78c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010788f7c0(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10788f8d0; end: 10788f8e3;  */

void FUN_10788f8d0(void)

{
  func_0x00010788fa08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10788fb14; end: 10788fc8f;  */

void FUN_10788fb14(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 auStack_b0 [2];
  undefined4 uStack_a8;
  undefined4 auStack_a0 [6];
  undefined4 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x0001078907c8();
  func_0x000107890820();
  lVar1 = unaff_x19 + 8;
  func_0x00010788fdb8();
  if (((int)lVar1 != 0) && (*unaff_x20 != 0)) {
    func_0x00010788ae8c();
    func_0x0001078903f4();
    if (lVar1 == 5) {
      func_0x0001078889ac();
      func_0x0001078903f4();
      if ((lVar1 != 0) && ((**(byte **)(unaff_x19 + 0x20) & 1) == 0)) {
        FUN_1077f3c4c();
        func_0x0001077f3790();
        lVar2 = lVar1;
        func_0x0001078889ac();
        func_0x0001078903f4();
        func_0x00010788b278();
        func_0x0001078903f4();
        func_0x000107890708();
        func_0x0001078903f4();
        func_0x00010002b838(auStack_a0,lVar2);
        func_0x00010786df04(0xb,auStack_a0,0,0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
        auStack_a0[0] = 0xf9;
        uStack_88 = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        ppuStack_80 = &PTR_DAT_110996720;
        uStack_78 = 0;
        uStack_60 = 0xf9;
        uStack_58 = 0;
        uStack_54 = 1;
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_50 = 0;
        auStack_b0[0] = 1;
        uStack_a8 = 0;
        uStack_c0 = *(undefined8 *)(lVar1 + 8);
        uStack_b8 = 3;
        func_0x00010743fa9c((undefined8 *)(lVar1 + 8),auStack_a0,auStack_b0,&uStack_c0,7);
        func_0x000107262330(auStack_a0);
        **(undefined1 **)(unaff_x19 + 0x20) = 1;
      }
    }
  }
  func_0x0001078906f4();
  return;
}



/* Entry: 10788fe70; end: 10788fe93;  */

void FUN_10788fe70(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x0001078907c8(param_2,param_1 + 8);
  *param_2 = &PTR_DAT_1109e4508;
  func_0x00010788fd00(param_2 + 1);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107890504();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x28);
  return;
}



/* Entry: 10789016c; end: 10789021f;  */

void FUN_10789016c(long param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 auStack_90 [6];
  undefined4 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  auStack_90[0] = 0x68;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  ppuStack_70 = &PTR_DAT_110996720;
  uStack_68 = 0;
  uStack_50 = 0x68;
  uStack_48 = 0;
  uStack_44 = 1;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x0001078905c8();
  puVar1 = auStack_90;
  func_0x00010729d56c(puVar1);
  uStack_a0 = **(undefined8 **)(param_1 + 0x10);
  uStack_98 = 3;
  func_0x00010743f9dc(uVar2,puVar1,param_1 + 8,&uStack_a0,7);
  func_0x000107262330(auStack_90);
  return;
}



/* Entry: 107890980; end: 107890993;  */

void FUN_107890980(void)

{
  func_0x000107890948();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107890c80; end: 107890cc3;  */

undefined8 FUN_107890c80(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x28;
  __Znwm(0x28);
  func_0x000107890d3c();
  return uVar1;
}



/* Entry: 107890ee8; end: 107890fd7;  */

void FUN_107890ee8(ulong param_1,long param_2)

{
  int extraout_w10;
  int extraout_w10_00;
  
  if (param_2 == 0) {
    return;
  }
  func_0x0001078910e4();
  func_0x0001078910cc();
  do {
    func_0x000107891110();
  } while (extraout_w10 != 0);
  do {
    func_0x0001078910f4();
  } while (extraout_w10_00 != 0);
  func_0x00010788b4a0();
  func_0x0001078910cc();
  if (1 < param_1) {
    func_0x000107891120();
    func_0x000107890e0c();
  }
  func_0x00010788b354();
  func_0x000107891104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 107891744; end: 107891773;  */

void FUN_107891744(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010788b430();
  FUN_10789197c();
  *param_1 = param_2;
  return;
}



/* Entry: 10789197c; end: 1078919e7;  */

void FUN_10789197c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 107891b98; end: 107891bef;  */

void FUN_107891b98(long param_1)

{
  func_0x00010789221c();
  func_0x00010789225c();
  func_0x0001078922a0();
  FUN_10788af6c();
  func_0x000107892274();
  if (param_1 == 1) {
    func_0x000107888bd8();
    func_0x000107892268();
    func_0x0001078887ec();
    func_0x0001078922e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d290)();
    return;
  }
  return;
}



/* Entry: 107892074; end: 107892153;  */

void FUN_107892074(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined4 uStack_68;
  undefined1 uStack_64;
  long lStack_50;
  undefined1 uStack_41;
  
  uStack_41 = (undefined1)param_6;
  func_0x00010788c9d4(&uStack_68,*(undefined8 *)(*(long *)(param_2 + 0x20) + 8),param_3,param_4,
                      param_6,(int)param_7);
  func_0x00010788d224(&lStack_50,param_3,&uStack_41,&uStack_68);
  func_0x000107887f60(&uStack_68);
  func_0x000107892280(param_5,param_7,uStack_41);
  uStack_64 = (undefined1)((ulong)param_5 >> 0x20);
  uStack_68 = (undefined4)param_5;
  *(undefined4 *)(lStack_50 + 0x19) = uStack_68;
  *(undefined1 *)(lStack_50 + 0x1d) = uStack_64;
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
  func_0x00010788cd4c(uVar1,&uStack_68);
  *(undefined8 *)(lStack_50 + 0x20) = uVar1;
  *param_1 = lStack_50;
  return;
}



/* Entry: 107892b34; end: 107892b73;  */

long * FUN_107892b34(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1 + 1;
  func_0x0001078930d4(plVar1);
  lVar2 = *param_1;
  if (lVar2 != 0) {
    func_0x00010788b354();
    _objc_msgSend(lVar2,plVar1);
  }
  return param_1;
}



/* Entry: 107892e04; end: 107892e17;  */

long * FUN_107892e04(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar1[3] = 0;
  plVar1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107892e64();
  }
  lVar2 = param_4 + param_3 * 0x28;
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1[2] = lVar2;
  plVar1[3] = param_4 + param_2 * 0x28;
  return plVar1;
}



/* Entry: 10789303c; end: 107893043;  */

void FUN_10789303c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107893644(param_1,*(undefined8 *)(param_1 + 8));
  while (lVar1 = *(long *)(unaff_x20 + 0x10), unaff_x19 != lVar1) {
    *(long *)(unaff_x20 + 0x10) = lVar1 + -0x28;
    func_0x00010725b6a4(lVar1 + -0x20);
  }
  return;
}



/* Entry: 107893178; end: 1078931a3;  */

void FUN_107893178(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107893650();
  *param_2 = &PTR_DAT_1109e4a48;
  func_0x00010788b430();
  func_0x0001078935e8();
  *(undefined8 **)(unaff_x19 + 8) = param_2;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar5;
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
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined1 *)(unaff_x19 + 0x28) = *(undefined1 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar5;
  return;
}



/* Entry: 1078935ac; end: 10789365b;  */

undefined8 *
FUN_1078935ac(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3,undefined1 *param_4,
             long param_5)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar2 = *param_3;
  uVar3 = *param_4;
  lVar1 = *(long *)(param_5 + 8);
  *param_1 = uVar4;
  *(undefined1 *)(param_1 + 1) = uVar2;
  param_1[2] = lVar1;
  *(undefined1 *)(param_1 + 3) = uVar3;
  func_0x00010724e2fc(param_1 + 4,lVar1);
  func_0x0001073c9620(param_1 + 5,uVar4);
  if (lVar1 != 0) {
    func_0x0001073c95f4();
  }
  return param_1;
}



/* Entry: 1078938cc; end: 107893a7b;  */

void FUN_1078938cc(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  double dStack_198;
  undefined1 auStack_190 [128];
  long lStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  
  puVar4 = (undefined8 *)(param_2 + 0x60);
  iVar1 = (int)*puVar4;
  func_0x000107893b20();
  if (iVar1 == 1) {
    lVar3 = *(long *)(param_2 + 0x18);
    plVar2 = *(long **)(param_2 + 0x60);
    if (plVar2 != *(long **)(lVar3 + 0x168)) {
      if (((plVar2 != (long *)0x0) && ((*(byte *)(param_2 + 0x5a) & 1) == 0)) &&
         (*(char *)(param_2 + 0x59) == '\x01')) {
        (**(code **)(*plVar2 + 0x28))();
        lVar3 = *(long *)(param_2 + 0x18);
      }
      *(undefined1 *)(param_2 + 0x59) = 0;
      func_0x000107893a7c(puVar4,lVar3 + 0x168);
    }
    if ((*(byte *)(param_2 + 0x59) & 1) == 0) {
      (**(code **)(**(long **)(param_2 + 0x60) + 0x10))();
      *(undefined1 *)(param_2 + 0x59) = 1;
    }
    lVar3 = *(long *)(param_3 + 0x28);
    func_0x00010741607c(lVar3,auStack_100,1,0);
    lVar5 = *(long *)(param_3 + 0x18);
    uVar6 = (ulong)*(uint *)(lVar3 + 0x4c);
    uVar10 = (ulong)*(uint *)(lVar3 + 0x50);
    uVar11 = NEON_ucvtf(uVar6);
    uVar12 = NEON_ucvtf(uVar10);
    func_0x000107893b2c();
    func_0x000107893b2c();
    uVar7 = *(undefined8 *)(lVar3 + 0x78);
    _log2();
    dVar8 = *(double *)(lVar3 + 0x70);
    dVar13 = dVar8 * -57.29577951308232;
    func_0x0001074163dc(lVar3);
    dVar9 = dVar8;
    func_0x00010741653c(lVar3);
    _memcpy(auStack_190,auStack_100,0x80);
    uStack_108 = *(undefined8 *)(lVar5 + 0x38);
    uStack_1d0 = uVar11;
    uStack_1c8 = uVar12;
    uStack_1c0 = uVar6;
    uStack_1b8 = uVar10;
    uStack_1b0 = uVar7;
    dStack_1a8 = dVar13;
    dStack_1a0 = dVar8;
    dStack_198 = (double)SUB84(dVar9,0);
    lStack_110 = param_3;
    (**(code **)(*(long *)*puVar4 + 0x18))((long *)*puVar4,&uStack_1d0);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  else {
    if ((*(byte *)(param_2 + 0x5b) & 1) == 0) {
      func_0x0001078937e8();
      *(undefined1 *)(param_2 + 0x5b) = 1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 107893e30; end: 107893edb;  */

ulong FUN_107893e30(undefined4 param_1,ulong param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = (int)param_2;
  switch(param_1) {
  case 1:
  case 2:
  case 3:
  case 8:
  case 10:
  case 0xd:
  case 0xe:
    param_2 = (ulong)(uint)(iVar1 << 2);
    break;
  case 4:
    param_2 = (ulong)(uint)(iVar1 << 3);
    break;
  case 5:
    param_2 = (ulong)(uint)(iVar1 << 4);
    break;
  case 6:
  case 0xb:
    break;
  case 7:
  case 9:
  case 0xc:
    param_2 = (ulong)(uint)(iVar1 << 1);
    break;
  case 0xf:
    param_2 = (ulong)(uint)(iVar1 * 5);
    break;
  case 0x10:
  case 0x11:
    fVar2 = (float)(param_2 & 0xffffffff) / 4.0;
    goto code_r0x000107893e94;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    fVar2 = (float)(param_2 & 0xffffffff);
    fVar3 = 5.0;
    goto code_r0x000107893e90;
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
    fVar2 = (float)(param_2 & 0xffffffff);
    fVar3 = 6.0;
    goto code_r0x000107893e90;
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x22:
  case 0x23:
    fVar2 = (float)(param_2 & 0xffffffff) / 8.0;
    goto code_r0x000107893e94;
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
    fVar2 = (float)(param_2 & 0xffffffff);
    fVar3 = 10.0;
    goto code_r0x000107893e90;
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
    fVar2 = (float)(param_2 & 0xffffffff);
    fVar3 = 12.0;
code_r0x000107893e90:
    fVar2 = fVar2 / fVar3;
code_r0x000107893e94:
    param_2 = (ulong)(uint)((int)fVar2 << 4);
    break;
  default:
    param_2 = 0;
  }
  return param_2;
}



/* Entry: 10789482c; end: 10789483f;  */

void FUN_10789482c(void)

{
  func_0x0001078947a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


