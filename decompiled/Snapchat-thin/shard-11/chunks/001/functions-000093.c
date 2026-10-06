/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1081752dc; end: 1081752ef;  */

void FUN_1081752dc(void)

{
  FUN_1081752a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081752f0; end: 1081753eb;  */

undefined8 FUN_1081752f0(float param_1,long param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [40];
  long lStack_70;
  undefined1 auStack_68 [72];
  
  if (((*(byte *)(param_2 + 0x38) & 1) == 0) && (*(long *)(*(long *)(param_2 + 0x18) + 0x48) != 0))
  {
    return 0;
  }
  (**(code **)(**(long **)(param_2 + 0x10) + 0x28))
            (&lStack_70,(param_1 + *(float *)(param_2 + 0x30)) * *(float *)(param_2 + 0x34));
  FUN_108174aa0(auStack_98,&lStack_70,param_2 + 0x28);
  if (lStack_70 == *(long *)(*(long *)(param_2 + 0x18) + 0x48)) {
    puVar1 = auStack_68;
    FUN_1081753ec(puVar1,*(long *)(param_2 + 0x18) + 0x2c);
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = auStack_98;
      func_0x0001081421c8(puVar1,*(long *)(param_2 + 0x20) + 0x2c);
      if ((int)puVar1 == 0) {
        uVar2 = 0;
        goto LAB_1081753b8;
      }
    }
  }
  FUN_108174b6c(*(undefined8 *)(param_2 + 0x18),&lStack_70);
  func_0x000108174bb8(*(undefined8 *)(param_2 + 0x18),auStack_68);
  func_0x000108167658(*(undefined8 *)(param_2 + 0x20),auStack_98);
  uVar2 = 1;
LAB_1081753b8:
  func_0x000106f47184(&lStack_70);
  return uVar2;
}



/* Entry: 1081753ec; end: 108175403;  */

uint FUN_1081753ec(uint param_1)

{
  func_0x00010817505c();
  return param_1 ^ 1;
}



/* Entry: 108175404; end: 10817546b;  */

void FUN_108175404(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010817540c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 10817546c; end: 1081754af;  */

void FUN_10817546c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *extraout_x8;
  
  func_0x000108175e6c();
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 8);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000108175e84();
      (*extraout_x8)();
    }
  }
  return;
}



/* Entry: 1081754b0; end: 1081754f3;  */

void FUN_1081754b0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *extraout_x8;
  
  func_0x000108175e6c();
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 8);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000108175e84();
      (*extraout_x8)();
    }
  }
  return;
}



/* Entry: 1081754f4; end: 108175a87;  */

void FUN_1081754f4(long *param_1,float param_2,long param_3,ulong *param_4,float *param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *apuStack_d8 [3];
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  byte bStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  
  puStack_90 = (undefined8 *)0x0;
  lVar7 = param_3;
  func_0x000108175e64(param_3,&DAT_10f47d0f9);
  FUN_108154e4c();
  if (lVar7 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar8 = (undefined8 *)0x38;
    __Znwm();
    *(undefined4 *)(puVar8 + 1) = 1;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[2] = 0;
    *(undefined2 *)(puVar8 + 5) = 0;
    *puVar8 = &PTR_FUN_110a2a518;
    param_2 = *(float *)(param_3 + 100);
    *(ulong *)((long)puVar8 + 0x2c) = (ulong)(uint)param_2;
    FUN_108154e4c(lVar7);
    FUN_108161330(puVar8,param_3,lVar7,puVar8 + 6);
    puStack_110 = (undefined8 *)0x0;
    puStack_90 = puVar8;
    FUN_108175a88(&puStack_110);
  }
  func_0x000108175e64();
  puStack_110 = (undefined8 *)((ulong)puStack_110 & 0xffffffff00000000);
  FUN_1081572c0();
  fVar19 = param_2;
  func_0x000108175e64();
  puStack_110 = (undefined8 *)CONCAT44(puStack_110._4_4_,0x3f800000);
  FUN_1081572c0();
  fVar17 = ABS(param_2);
  fVar15 = 0.00024414062;
  if ((0.00024414062 < fVar17) || (fVar17 = ABS(fVar19 + -1.0), 0.00024414062 < fVar17)) {
    bVar6 = true;
  }
  else {
    bVar6 = puVar8 != (undefined8 *)0x0;
  }
  puVar9 = param_4;
  FUN_108175aac();
  *param_5 = fVar17;
  param_5[1] = fVar15;
  uStack_c0 = 0;
  bStack_98 = 0;
  if (bVar6) {
    puVar9 = (ulong *)&uStack_c0;
    FUN_10815a2f0(puVar9,param_3);
  }
  bStack_98 = bVar6;
  if (*(long *)(param_3 + 0x28) == 0) {
LAB_1081756a8:
    *param_1 = 0;
  }
  else {
    func_0x000108175e64();
    FUN_108158a5c();
    puVar10 = puVar9;
    func_0x000108175e64();
    FUN_108158a5c();
    if ((puVar9 == (ulong *)0x0) || (puVar10 == (ulong *)0x0)) goto LAB_1081756a8;
    if ((*puVar9 & 7) == 0) {
      pbVar13 = (byte *)((long)puVar9 + 1);
    }
    else {
      pbVar13 = (byte *)((*puVar9 & 0xfffffffffffffff8) + 8);
    }
    if ((*puVar10 & 7) == 0) {
      pbVar14 = (byte *)((long)puVar10 + 1);
    }
    else {
      pbVar14 = (byte *)((*puVar10 & 0xfffffffffffffff8) + 8);
    }
    (**(code **)(**(long **)(param_3 + 0x28) + 0x18))
              (apuStack_d8,*(long **)(param_3 + 0x28),pbVar13,pbVar14,param_5);
    puVar12 = apuStack_d8[0];
    if (apuStack_d8[0] == (undefined8 *)0x0) {
      *param_1 = 0;
    }
    else {
      puVar11 = (undefined8 *)0x48;
      __Znwm();
      apuStack_d8[0] = (undefined8 *)0x0;
      puStack_110 = puVar12;
      FUN_10818c894();
      *puVar11 = &PTR_FUN_110a2a478;
      puStack_110 = (undefined8 *)0x0;
      uVar16 = *(undefined8 *)param_5;
      puVar11[6] = puVar12;
      puVar11[7] = uVar16;
      *(undefined4 *)(puVar11 + 8) = 0;
      puStack_78 = puVar11;
      FUN_108175bb8(&puStack_110);
      uVar16 = *(undefined8 *)(param_3 + 0x70);
      puVar12 = (undefined8 *)0x20;
      __Znwm();
      piVar1 = (int *)(puVar11 + 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar18 = *(undefined4 *)(param_3 + 100);
      *(undefined4 *)(puVar12 + 1) = 1;
      *puVar12 = &PTR_FUN_110a2a4d0;
      puStack_110 = (undefined8 *)0x0;
      puVar12[2] = puVar11;
      *(undefined4 *)(puVar12 + 3) = uVar18;
      FUN_1081754b0(&puStack_110);
      uStack_88 = 0;
      puStack_80 = puVar12;
      FUN_108155570(uVar16,&puStack_80);
      FUN_108155920(&puStack_80);
      FUN_10817546c(&uStack_88);
      puStack_78 = (undefined8 *)0x0;
      *param_1 = (long)puVar11;
      FUN_1081754b0(&puStack_78);
    }
    FUN_108175bb8(apuStack_d8);
    if (*param_1 != 0) goto LAB_10817586c;
  }
  FUN_1081559bc(&puStack_78,param_3,param_4);
  puVar12 = puStack_78;
  if (puStack_78 != (undefined8 *)0x0) {
    fVar17 = *param_5;
    if ((fVar17 <= 0.0) || (fVar17 = param_5[1], fVar17 <= 0.0)) {
      FUN_108175aac(*puStack_78);
      *param_5 = fVar17;
      param_5[1] = fVar15;
    }
    FUN_1081589bc(apuStack_d8,param_3,*puVar12,0);
    FUN_108155b2c(&puStack_110,param_3,param_5,*puVar12);
    FUN_10815605c(&puStack_80,&puStack_110,param_3);
    puVar11 = puStack_80;
    puStack_80 = (undefined8 *)0x0;
    FUN_108154d4c(param_1,puVar11);
    FUN_108154cb4(&puStack_80);
    func_0x000108155f60(&puStack_110);
    FUN_108158a14(apuStack_d8);
    *(undefined1 *)(puVar12 + 1) = 0;
  }
LAB_10817586c:
  uVar4 = uStack_a8;
  uVar16 = uStack_b0;
  puVar12 = puStack_b8;
  if (bVar6) {
    if ((bStack_98 & 1) == 0) {
      func_0x000104bdc2c8();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x108175968);
      (*pcVar5)();
    }
    *(undefined8 *)(CONCAT71(uStack_bf,uStack_c0) + 0x70) = uStack_a0;
    puStack_110 = puStack_b8;
    uStack_108 = uStack_b0;
    uStack_100 = uStack_a8;
    uStack_b0 = 0;
    uStack_a8 = 0;
    puStack_b8 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)0x38;
    __Znwm();
    puStack_90 = (undefined8 *)0x0;
    fVar19 = 1.0 / fVar19;
    *(undefined4 *)(puVar11 + 1) = 1;
    *puVar11 = &PTR_FUN_110a2a568;
    puVar11[2] = puVar12;
    puVar11[3] = uVar16;
    uStack_108 = 0;
    uStack_100 = 0;
    puStack_110 = (undefined8 *)0x0;
    apuStack_d8[0] = (undefined8 *)0x0;
    puVar11[4] = uVar4;
    puVar11[5] = puVar8;
    if (0x7f7fffff < (uint)ABS(fVar19)) {
      fVar19 = 0.0;
    }
    *(float *)(puVar11 + 6) = -param_2;
    *(float *)((long)puVar11 + 0x34) = fVar19;
    FUN_108175a88(apuStack_d8);
    FUN_1081596e8(&puStack_110);
    puStack_78 = (undefined8 *)0x0;
    puStack_110 = puVar11;
    FUN_108155570(*(undefined8 *)(param_3 + 0x70),&puStack_110);
    FUN_108155920(&puStack_110);
    FUN_108175b18(&puStack_78);
  }
  FUN_108175b5c(&uStack_c0);
  FUN_108175a88(&puStack_90);
  return;
}



/* Entry: 108175a88; end: 108175aab;  */

void FUN_108175a88(void)

{
  func_0x000108175e6c();
  FUN_108175b8c();
  return;
}



/* Entry: 108175aac; end: 108175b17;  */

undefined1  [16] FUN_108175aac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  FUN_108154b58(param_2,&DAT_10f30a8bb);
  FUN_1081572c0();
  uVar1 = param_1;
  FUN_108154b58(param_2,&DAT_10f30a8b9);
  FUN_1081572c0();
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 108175b18; end: 108175b5b;  */

void FUN_108175b18(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *extraout_x8;
  
  func_0x000108175e6c();
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 8);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000108175e84();
      (*extraout_x8)();
    }
  }
  return;
}



/* Entry: 108175b5c; end: 108175b8b;  */

long FUN_108175b5c(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_1081596e8(param_1 + 8);
  }
  return param_1;
}



/* Entry: 108175b8c; end: 108175bb7;  */

void FUN_108175b8c(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000108175bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108175bb8; end: 108175bfb;  */

void FUN_108175bb8(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *extraout_x8;
  
  func_0x000108175e6c();
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 8);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000108175e84();
      (*extraout_x8)();
    }
  }
  return;
}



/* Entry: 108175bfc; end: 108175c23;  */

undefined8 * FUN_108175bfc(undefined8 *param_1)

{
  FUN_108175bb8(param_1 + 6);
  *param_1 = &PTR_DAT_110a2bbb8;
  if ((*(ushort *)(param_1 + 5) >> 4 & 1) != 0) {
    if (param_1[2] != 0) {
      FUN_10818aa28();
    }
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108175c24; end: 108175c37;  */

void FUN_108175c24(void)

{
  FUN_108175bfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108175c38; end: 108175c47;  */

undefined8 FUN_108175c38(void)

{
  return 0;
}



/* Entry: 108175c48; end: 108175cf7;  */

void FUN_108175c48(long param_1,undefined8 param_2)

{
  undefined1 auStack_178 [40];
  undefined1 auStack_150 [144];
  undefined1 auStack_c0 [144];
  
  FUN_10818ccbc(auStack_150);
  func_0x00010833b800(auStack_178,param_2);
  FUN_10818d01c(auStack_150,param_1 + 0x18,auStack_178,1);
  FUN_1081660c4(auStack_c0,auStack_150);
  FUN_10818cd40(auStack_150);
  (**(code **)(**(long **)(param_1 + 0x30) + 0x18))
            ((double)*(float *)(param_1 + 0x40),*(long **)(param_1 + 0x30),param_2);
  FUN_10818cd40(auStack_c0);
  return;
}



/* Entry: 108175cf8; end: 108175cfb;  */

void FUN_108175cf8(void)

{
  return;
}



/* Entry: 108175cfc; end: 108175d37;  */

void FUN_108175cfc(void)

{
  func_0x000108175e78();
  return;
}



/* Entry: 108175d38; end: 108175d73;  */

undefined8 FUN_108175d38(float param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x10);
  param_1 = param_1 / *(float *)(param_2 + 0x18);
  if (*(float *)(lVar1 + 0x40) != param_1) {
    *(float *)(lVar1 + 0x40) = param_1;
    FUN_10818a7f4(lVar1,1);
  }
  return 1;
}



/* Entry: 108175d74; end: 108175d77;  */

undefined8 * FUN_108175d74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 108175d78; end: 108175d8b;  */

void FUN_108175d78(void)

{
  FUN_108158e2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108175d8c; end: 108175d8f;  */

void FUN_108175d8c(void)

{
  return;
}



/* Entry: 108175d90; end: 108175dbb;  */

long FUN_108175d90(long param_1)

{
  FUN_108175a88(param_1 + 0x28);
  FUN_1081596e8(param_1 + 0x10);
  return param_1;
}



/* Entry: 108175dbc; end: 108175dcf;  */

void FUN_108175dbc(void)

{
  FUN_108175d90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108175dd0; end: 108175e5b;  */

uint FUN_108175dd0(float param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  float fVar5;
  
  if (*(long **)(param_2 + 0x28) == (long *)0x0) {
    fVar5 = (param_1 + *(float *)(param_2 + 0x30)) * *(float *)(param_2 + 0x34);
  }
  else {
    (**(code **)(**(long **)(param_2 + 0x28) + 0x18))();
    fVar5 = *(float *)(*(long *)(param_2 + 0x28) + 0x30) *
            *(float *)(*(long *)(param_2 + 0x28) + 0x2c);
  }
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_2 + 0x18);
  for (puVar4 = *(undefined8 **)(param_2 + 0x10); puVar4 != puVar1; puVar4 = puVar4 + 1) {
    plVar2 = (long *)*puVar4;
    (**(code **)(*plVar2 + 0x18))(fVar5);
    uVar3 = uVar3 | (uint)plVar2;
  }
  return uVar3 & 1;
}



/* Entry: 108175e5c; end: 108175e8f;  */

void FUN_108175e5c(void)

{
  return;
}



/* Entry: 108175e90; end: 108176067;  */

void FUN_108175e90(undefined8 *param_1,float param_2,ulong *param_3,undefined8 param_4,
                  float *param_5)

{
  byte bVar1;
  undefined8 uVar2;
  ulong *puVar3;
  byte *pbVar4;
  float fVar5;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  uint uStack_44;
  
  puVar3 = param_3;
  FUN_108176068(param_3,&DAT_10f39d8fd);
  uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
  FUN_1081572c0();
  fVar5 = param_2;
  FUN_108176068();
  uStack_50 = (ulong)uStack_50._4_4_ << 0x20;
  FUN_1081572c0();
  *param_5 = param_2;
  param_5[1] = fVar5;
  FUN_108176068();
  FUN_108158a5c();
  if ((0.0 < *param_5) && (0.0 < param_5[1] && puVar3 != (ulong *)0x0)) {
    if ((*puVar3 & 7) == 0) {
      pbVar4 = (byte *)((long)puVar3 + 1);
      bVar1 = *pbVar4;
    }
    else {
      pbVar4 = (byte *)((*puVar3 & 0xfffffffffffffff8) + 8);
      bVar1 = *pbVar4;
    }
    if (bVar1 == 0x23) {
      pbVar4 = pbVar4 + 1;
      FUN_108406700(pbVar4,&uStack_44);
      if (pbVar4 != (byte *)0x0) {
        FUN_10818b15c(&uStack_50,uStack_44 | 0xff000000);
        uStack_78 = CONCAT71(uStack_78._1_7_,1);
        FUN_108158df4(uStack_50,&uStack_78);
        FUN_10815a330(param_3,&uStack_50);
        uStack_78 = 0;
        uStack_70 = *(undefined8 *)param_5;
        FUN_108158554(&uStack_68,&uStack_78);
        lStack_80 = uStack_50;
        uStack_60 = uStack_68;
        uStack_68 = 0;
        uStack_50 = 0;
        FUN_108159540(&uStack_58,&uStack_60,&lStack_80);
        uVar2 = uStack_58;
        uStack_58 = 0;
        *param_1 = uVar2;
        FUN_1081595c0(&uStack_58);
        FUN_108158f90(&lStack_80);
        FUN_108159714(&uStack_60);
        FUN_1081597b8(&uStack_68);
        FUN_108158f04(&uStack_50);
        return;
      }
    }
  }
  FUN_108159fb8(param_3,1,param_4,&UNK_10f47d7ca);
  *param_1 = 0;
  return;
}



/* Entry: 108176068; end: 10817606f;  */

long FUN_108176068(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long unaff_x22;
  
  if ((bRam0000000113254308 & 1) == 0) {
    iVar2 = 0x13254308;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uRam0000000113254300 = 1;
      ___cxa_guard_release(0x113254308,param_2);
    }
  }
  func_0x00010818584c();
  lVar1 = 0x113254300;
  if (unaff_x22 != 0) {
    lVar1 = unaff_x22 + 8;
  }
  return lVar1;
}



/* Entry: 108176070; end: 1081760bf;  */

bool FUN_108176070(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = (int)*param_1 + 8;
  _strcmp();
  if (iVar2 == 0) {
    lVar3 = param_1[1] + 8;
    _strcmp(lVar3,param_3);
    bVar1 = (int)lVar3 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1081760c0; end: 10817672f;  */

void FUN_1081760c0(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined4 uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  ulong *puVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [8];
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong *puStack_120;
  undefined4 auStack_118 [2];
  undefined1 auStack_110 [156];
  undefined4 uStack_74;
  ulong auStack_70 [2];
  
  if (param_2 != (ulong *)0x0) {
    FUN_108154b58(param_2,"list");
    FUN_108155f00();
    if (param_2 != (ulong *)0x0) {
      puVar18 = (ulong *)((long *)(*param_2 & 0xfffffffffffffff8) + 1);
      puVar1 = puVar18 + *(long *)(*param_2 & 0xfffffffffffffff8);
      for (; puVar18 != puVar1; puVar18 = puVar18 + 1) {
        puVar8 = puVar18;
        FUN_108154e4c();
        param_2 = (ulong *)0x0;
        if (puVar8 != (ulong *)0x0) {
          puVar9 = puVar8;
          FUN_108154b58();
          FUN_108158a5c();
          puVar10 = puVar8;
          FUN_108154b58(puVar8,&UNK_10f47d7ed);
          FUN_108158a5c();
          puVar11 = puVar8;
          FUN_108154b58(puVar8,&UNK_10f47d7f5);
          FUN_108158a5c();
          puVar12 = puVar8;
          FUN_108154b58(puVar8,&UNK_10f47d7fc);
          FUN_108158a5c();
          if ((((puVar9 == (ulong *)0x0) ||
               (puVar13 = puVar9, FUN_108158a80(), puVar13 == (ulong *)0x0)) ||
              (puVar10 == (ulong *)0x0)) ||
             ((puVar13 = puVar10, FUN_108158a80(), puVar13 == (ulong *)0x0 ||
              (puVar11 == (ulong *)0x0)))) {
            param_2 = param_1;
            FUN_108159fb8(param_1,1,puVar8,&UNK_10f47d802);
          }
          else {
            if ((*puVar9 & 7) == 0) {
              pbVar17 = (byte *)((long)puVar9 + 1);
            }
            else {
              pbVar17 = (byte *)((*puVar9 & 0xfffffffffffffff8) + 8);
            }
            FUN_108158a80(puVar9);
            FUN_1083a3394(&puStack_120,pbVar17,puVar9);
            if ((*puVar10 & 7) == 0) {
              pbVar17 = (byte *)((long)puVar10 + 1);
            }
            else {
              pbVar17 = (byte *)((*puVar10 & 0xfffffffffffffff8) + 8);
            }
            FUN_108158a80(puVar10);
            FUN_1083a3394(auStack_1b8,pbVar17,puVar10);
            if ((*puVar11 & 7) == 0) {
              pbVar17 = (byte *)((long)puVar11 + 1);
            }
            else {
              pbVar17 = (byte *)((*puVar11 & 0xfffffffffffffff8) + 8);
            }
            FUN_108158a80(puVar11);
            FUN_1083a3394(auStack_1b0,pbVar17,puVar11);
            if (puVar12 == (ulong *)0x0) {
              uStack_1a8 = 0x1138270b0;
            }
            else {
              if ((*puVar12 & 7) == 0) {
                pbVar17 = (byte *)((long)puVar12 + 1);
              }
              else {
                pbVar17 = (byte *)((*puVar12 & 0xfffffffffffffff8) + 8);
              }
              FUN_108158a80(puVar12);
              FUN_1083a3394(&uStack_1a8,pbVar17,puVar12);
            }
            FUN_108154b58(puVar8,&UNK_10f47d810);
            uStack_74 = 0;
            FUN_1081572c0();
            uStack_1a0 = CONCAT13(in_register_00005003,
                                  CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)
                                          ));
            in_b0 = 0;
            in_register_00005001 = 0;
            in_register_00005002 = 0;
            in_register_00005003 = 0;
            uStack_190 = 0;
            uStack_198 = 0;
            uStack_180 = 0;
            uStack_188 = 0;
            uStack_170 = 0;
            uStack_178 = 0;
            uStack_160 = 0;
            uStack_168 = 0;
            uStack_128 = 0x50190;
            uStack_150 = 0;
            uStack_158 = 0;
            uStack_140 = 0;
            uStack_148 = 0;
            uStack_130 = 0;
            uStack_138 = 0;
            FUN_1083a33c4(auStack_118,&puStack_120);
            FUN_108176f24(auStack_110,auStack_1b8);
            uVar2 = *(uint *)((long)param_1 + 0x9c);
            if ((int)(uVar2 * 3) <= (int)param_1[0x13] * 4) {
              uVar3 = uVar2 << 1;
              if ((int)uVar2 < 1) {
                uVar3 = 4;
              }
              *(undefined4 *)(param_1 + 0x13) = 0;
              *(uint *)((long)param_1 + 0x9c) = uVar3;
              auStack_70[0] = param_1[0x14];
              param_1[0x14] = 0;
              puVar14 = (undefined8 *)((ulong)uVar3 * 0xa8 + 0x10);
              __Znam();
              *puVar14 = 0xa8;
              puVar14[1] = (ulong)uVar3;
              if (uVar3 != 0) {
                lVar15 = (ulong)uVar3 * 0xa8;
                puVar16 = puVar14 + 2;
                do {
                  *(undefined4 *)puVar16 = 0;
                  lVar15 = lVar15 + -0xa8;
                  puVar16 = puVar16 + 0x15;
                } while (lVar15 != 0);
              }
              param_1[0x14] = (ulong)(puVar14 + 2);
              for (lVar15 = 0;
                  (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) * 0xa8 - lVar15 != 0;
                  lVar15 = lVar15 + 0xa8) {
                if (*(int *)(auStack_70[0] + lVar15) != 0) {
                  FUN_108176dc4(param_1 + 0x13,auStack_70[0] + lVar15 + 8);
                }
              }
              FUN_10815b33c(auStack_70);
            }
            FUN_108176dc4(param_1 + 0x13,auStack_118);
            func_0x00010815b3f8(auStack_118);
            func_0x00010815b418(auStack_1b8);
            param_2 = puStack_120;
            FUN_1083a3ca0();
          }
        }
      }
      if (((byte)param_1[0xd] >> 1 & 1) == 0) {
        if (param_3 != (ulong *)0x0) {
          puVar18 = (ulong *)(*param_3 & 0xfffffffffffffff8);
          for (lVar15 = *puVar18 << 3; lVar15 != 0; lVar15 = lVar15 + -8) {
            puVar18 = puVar18 + 1;
            param_2 = puVar18;
            FUN_108154e4c();
            if (param_2 != (ulong *)0x0) {
              FUN_108154b58();
              auStack_118[0] = 0;
              func_0x000108155f24();
              if ((int)param_2 == 1) goto LAB_108176484;
            }
          }
        }
        bVar6 = 1;
      }
      else {
LAB_108176484:
        if ((param_3 != (ulong *)0x0) && (func_0x0001081774a0(), ((ulong)param_2 & 1) != 0)) {
          return;
        }
        bVar6 = 0;
      }
      lVar24 = 0;
      bVar4 = 0;
      for (lVar15 = 0; lVar15 < *(int *)((long)param_1 + 0x9c); lVar15 = lVar15 + 1) {
        if (*(int *)(param_1[0x14] + lVar24) != 0) {
          lVar23 = param_1[0x14] + lVar24;
          plVar22 = (long *)(lVar23 + 0x30);
          if (*plVar22 == 0) {
            func_0x0001081774c4();
            func_0x000108177488(auStack_118);
            func_0x0001081774b8();
            func_0x000108177418();
            func_0x000108177410();
            if (*plVar22 == 0) {
              uVar19 = param_1[1];
              if (uVar19 == 0) {
LAB_108176614:
                func_0x000108177448();
                FUN_108159fb8();
              }
              else {
                func_0x0001081774c4();
                func_0x000108177488(auStack_70);
                FUN_108350d94(auStack_118,uVar19,auStack_70,0);
                func_0x0001081774b8();
                func_0x000108177418();
                func_0x000108177410();
                uVar7 = SUB84(auStack_70,0);
                func_0x0001078bddf8();
                if (*plVar22 == 0) {
                  plVar20 = (long *)param_1[1];
                  if (plVar20 == (long *)0x0) goto LAB_108176614;
                  lVar23 = *(long *)(lVar23 + 0x10);
                  func_0x000108177438();
                  uStack_74 = uVar7;
                  (**(code **)(*plVar20 + 0x38))(auStack_118,plVar20,lVar23 + 8,&uStack_74);
                  func_0x0001081774b8();
                  func_0x000108177418();
                  func_0x000108177410();
                  if (*plVar22 == 0) {
                    func_0x000108177448();
                    FUN_108159fb8();
                    plVar21 = (long *)param_1[1];
                    func_0x000108177438();
                    (**(code **)(*plVar21 + 0x68))
                              (auStack_118,plVar21,0,(ulong)plVar20 & 0xffffffff);
                    func_0x0001081774b8();
                    func_0x000108177418();
                    func_0x000108177410();
                    if (*plVar22 == 0) {
                      bVar4 = 1;
                      if (param_1[1] == 0) goto LAB_108176614;
                    }
                    else {
                      bVar4 = bVar4 | *plVar22 == 0;
                    }
                  }
                }
              }
            }
          }
        }
        lVar24 = lVar24 + 0xa8;
      }
      bVar5 = 0;
      if (param_3 != (ulong *)0x0) {
        bVar5 = bVar6;
      }
      if ((bool)(bVar5 & bVar4)) {
        func_0x0001081774a0();
      }
    }
  }
  return;
}



/* Entry: 108176730; end: 108176b63;  */

byte FUN_108176730(int *param_1,int *param_2)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *puVar10;
  char *pcVar11;
  long lVar12;
  int *piVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  byte *pbVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  byte bVar21;
  long lVar22;
  ulong uVar23;
  int *piStack_b0;
  int *piStack_a8;
  int *apiStack_a0 [2];
  int *piStack_90;
  int *piStack_88;
  int *piStack_80;
  int *piStack_78;
  int *piStack_70;
  int **ppiStack_68;
  
  uVar23 = 0;
  pbVar17 = (byte *)((long *)((ulong)param_2 & 0xfffffffffffffff8) + 1);
  pbVar1 = pbVar17 + *(long *)((ulong)param_2 & 0xfffffffffffffff8) * 8;
  do {
    pcVar11 = "style";
    if (pbVar17 == pbVar1) {
      lVar22 = 0;
      bVar21 = 0;
      lVar19 = 0;
      piStack_b0 = (int *)0x0;
      piStack_a8 = (int *)0x0;
      apiStack_a0[0] = (int *)0x0;
      do {
        if (param_1[0x27] <= lVar19) {
          if (piStack_b0 != piStack_a8) {
            uVar23 = (long)piStack_a8 - (long)piStack_b0;
            if (uVar23 < (ulong)((long)apiStack_a0[0] - (long)piStack_b0)) {
              piVar9 = (int *)((long)uVar23 >> 3);
              ppiStack_68 = apiStack_a0;
              FUN_108177288();
              piVar2 = (int *)((long)piVar9 + uVar23);
              piVar13 = piVar9 + (long)param_2 * 2;
              piStack_88 = piVar9;
              piStack_78 = piVar2;
              piStack_70 = piVar13;
              if (param_2 < (int *)((long)apiStack_a0[0] - (long)piStack_b0 >> 3)) {
                piVar9 = (int *)((long)piVar2 - ((long)piStack_a8 - (long)piStack_b0));
                piStack_80 = piVar2;
                _memcpy(piVar9);
                piStack_78 = piStack_b0;
                piStack_70 = apiStack_a0[0];
                piStack_88 = piStack_b0;
                piStack_b0 = piVar9;
                piStack_a8 = piVar2;
                apiStack_a0[0] = piVar13;
              }
              piStack_80 = piStack_78;
              func_0x0001081772bc(&piStack_88);
            }
            puVar10 = (undefined8 *)0x28;
            __Znwm();
            *(undefined4 *)(puVar10 + 1) = 1;
            *puVar10 = &PTR_DAT_110a2a768;
            puVar10[3] = piStack_a8;
            puVar10[2] = piStack_b0;
            puVar10[4] = apiStack_a0[0];
            piStack_b0 = (int *)0x0;
            piStack_a8 = (int *)0x0;
            apiStack_a0[0] = (int *)0x0;
            piStack_88 = (int *)0x0;
            uVar14 = *(undefined8 *)(param_1 + 0x2a);
            *(undefined8 **)(param_1 + 0x2a) = puVar10;
            FUN_108177340(uVar14);
            FUN_10815b900(&piStack_88);
          }
          func_0x000108176d4c(&piStack_b0);
          return (bVar21 ^ 0xff) & 1;
        }
        if (*(int *)(*(long *)(param_1 + 0x28) + lVar22) != 0) {
          lVar15 = *(long *)(param_1 + 0x28) + lVar22;
          plVar18 = (long *)(lVar15 + 0x30);
          if (*plVar18 == 0) {
            FUN_10817dd84(&piStack_90,lVar15 + 0x38);
            piVar2 = piStack_90;
            param_2 = piStack_90 + 4;
            func_0x000108162618(plVar18);
            if (0 < *piVar2) {
              if (piStack_a8 < apiStack_a0[0]) {
                piStack_90 = (int *)0x0;
                *(int **)piStack_a8 = piVar2;
                piStack_a8 = piStack_a8 + 2;
              }
              else {
                lVar20 = (long)piStack_a8 - (long)piStack_b0;
                lVar15 = lVar20 >> 3;
                uVar23 = lVar15 + 1;
                if (uVar23 >> 0x3d != 0) {
                  FUN_108177274();
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x108176b1c);
                  (*pcVar4)();
                }
                uVar16 = (long)apiStack_a0[0] - (long)piStack_b0 >> 2;
                if (uVar16 <= uVar23) {
                  uVar16 = uVar23;
                }
                if (0x7ffffffffffffff7 < (ulong)((long)apiStack_a0[0] - (long)piStack_b0)) {
                  uVar16 = 0x1fffffffffffffff;
                }
                if (uVar16 == 0) {
                  piVar13 = (int *)0x0;
                  lVar12 = lVar20;
                  ppiStack_68 = apiStack_a0;
                }
                else {
                  piVar13 = piStack_b0;
                  ppiStack_68 = apiStack_a0;
                  FUN_108177288();
                  lVar15 = (long)piStack_a8 - (long)piStack_b0 >> 3;
                  lVar12 = (long)piStack_a8 - (long)piStack_b0;
                }
                puVar10 = (undefined8 *)(uVar16 + lVar20);
                piStack_90 = (int *)0x0;
                *puVar10 = piVar2;
                param_2 = piStack_b0;
                _memcpy(puVar10 + -lVar15,piStack_b0,lVar12);
                piStack_78 = piStack_b0;
                piStack_70 = apiStack_a0[0];
                piStack_88 = piStack_b0;
                piStack_80 = piStack_b0;
                piStack_b0 = (int *)(puVar10 + -lVar15);
                piStack_a8 = (int *)(puVar10 + 1);
                apiStack_a0[0] = (int *)(uVar16 + (long)piVar13 * 8);
                func_0x0001081772bc(&piStack_88);
                piStack_a8 = (int *)(puVar10 + 1);
              }
            }
            bVar21 = bVar21 | *plVar18 == 0;
            func_0x000108176d94(&piStack_90);
          }
        }
        lVar19 = lVar19 + 1;
        lVar22 = lVar22 + 0xa8;
      } while( true );
    }
    pbVar5 = pbVar17;
    FUN_108154e4c();
    if (pbVar5 != (byte *)0x0) {
      pbVar6 = pbVar5;
      FUN_108154b58();
      FUN_108158a5c();
      pbVar7 = pbVar5;
      FUN_108154b58();
      FUN_108158a5c();
      if ((pbVar6 == (byte *)0x0) || (pbVar7 == (byte *)0x0)) {
LAB_108176894:
        pcVar11 = (char *)0x1;
      }
      else {
        if ((*pbVar7 & 7) != 0) {
          if (uVar23 == 0) goto LAB_108176814;
LAB_108176808:
          uVar16 = uVar23;
          func_0x0001081774ac();
          if ((uVar16 & 1) == 0) goto LAB_108176814;
LAB_108176880:
          uVar16 = uVar23 + 0x28;
          param_2 = param_1;
          FUN_10817d7c0(uVar16,param_1,pbVar5);
          if ((uVar16 & 1) != 0) goto LAB_1081768a8;
          goto LAB_108176894;
        }
        if (uVar23 != 0) goto LAB_108176808;
LAB_108176814:
        uVar3 = param_1[0x27];
        uVar23 = 0;
        for (lVar19 = 0; (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) * 0xa8 - lVar19 != 0;
            lVar19 = lVar19 + 0xa8) {
          uVar16 = uVar23;
          if (*(int *)(*(long *)(param_1 + 0x28) + lVar19) != 0) {
            uVar16 = *(long *)(param_1 + 0x28) + lVar19 + 0x10;
            uVar8 = uVar16;
            func_0x0001081774ac();
            if ((int)uVar8 == 0) {
              uVar16 = uVar23;
            }
          }
          uVar23 = uVar16;
        }
        if (uVar23 != 0) goto LAB_108176880;
        func_0x000108177448();
      }
      FUN_108159fb8();
      param_2 = (int *)pcVar11;
    }
LAB_1081768a8:
    pbVar17 = pbVar17 + 8;
  } while( true );
}



/* Entry: 108176b64; end: 108176d2b;  */

void FUN_108176b64(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  long lStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined1 auStack_28 [8];
  
  lStack_60 = 0;
  uStack_38 = 0;
  if (*(long *)(param_2 + 8) != 0) {
    do {
      FUN_1081773f8();
      uStack_38 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_40 = 0;
  if (*(long *)(param_2 + 0xa8) != 0) {
    do {
      FUN_1081773f8();
      uStack_40 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  uStack_48 = 0;
  if (*(long *)(param_2 + 0x18) != 0) {
    do {
      FUN_1081773f8();
      uStack_48 = extraout_x8_01;
    } while (extraout_w11_01 != 0);
  }
  uStack_50 = 0;
  if (*(long *)(param_2 + 0x38) != 0) {
    do {
      FUN_1081773f8();
      uStack_50 = extraout_x8_02;
    } while (extraout_w11_02 != 0);
  }
  FUN_10817e828(&plStack_30,param_3,param_2,&uStack_38,&uStack_40,&uStack_48,&uStack_50);
  func_0x000108143710(&uStack_50);
  FUN_10815bd74(&uStack_48);
  FUN_10815b900(&uStack_40);
  FUN_10812cc0c(&uStack_38);
  if (plStack_30 != (long *)0x0) {
    plVar2 = plStack_30;
    lVar1 = lStack_60;
    if ((&lStack_60 != plStack_30 + 6) && (lVar1 = 0, plStack_30[6] != 0)) {
      do {
        FUN_1081773f8();
        lVar1 = extraout_x8_03;
      } while (extraout_w11_03 != 0);
    }
    lStack_60 = lVar1;
    plStack_30 = (long *)0x0;
    if ((plVar2[2] == plVar2[3]) && ((*(byte *)((long)plVar2 + 0x29) & 1) == 0)) {
      plStack_58 = plVar2;
      (**(code **)(*plVar2 + 0x18))(0);
    }
    else {
      plStack_58 = (long *)0x0;
      FUN_108155570(*(undefined8 *)(param_2 + 0x70),auStack_28);
      FUN_108155920(auStack_28);
    }
    FUN_10815c1b8(&plStack_58);
  }
  FUN_10815c1b8(&plStack_30);
  lVar1 = lStack_60;
  lStack_60 = 0;
  *param_1 = lVar1;
  FUN_1081564a4(&lStack_60);
  return;
}



/* Entry: 108176d2c; end: 108176d4b;  */

long FUN_108176d2c(long param_1)

{
  long lVar1;
  
  FUN_10817736c();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}



/* Entry: 108176d4c; end: 108176dc3;  */

long * FUN_108176d4c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -8;
      func_0x000108176d94();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 108176dc4; end: 108176e87;  */

int * FUN_108176dc4(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int unaff_w24;
  int unaff_w25;
  int unaff_w26;
  
  piVar1 = param_2;
  FUN_108176e88();
  piVar2 = piVar1;
  func_0x0001081774d8();
  while( true ) {
    if (unaff_w25 == 0) {
      return piVar2;
    }
    piVar3 = (int *)(*(long *)(param_1 + 2) + (long)unaff_w24 * (long)unaff_w26);
    if (*piVar3 == 0) break;
    if (((int)piVar1 == *piVar3) &&
       (piVar2 = param_2, FUN_1083a3440(param_2,piVar3 + 2), (int)piVar2 != 0)) {
      FUN_10815b3cc();
      FUN_1083a33c4(piVar3 + 2,param_2);
      FUN_108176f24(piVar3 + 4,param_2 + 2);
      *piVar3 = (int)piVar1;
      return piVar3;
    }
    func_0x000108177458();
  }
  FUN_108176ea4(piVar3,param_2,piVar1);
  *param_1 = *param_1 + 1;
  return piVar3;
}



/* Entry: 108176e88; end: 108176ea3;  */

uint FUN_108176e88(uint param_1)

{
  FUN_108176f00();
  if (param_1 < 2) {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 108176ea4; end: 108176eff;  */

undefined4 * FUN_108176ea4(undefined4 *param_1,long param_2,undefined4 param_3)

{
  FUN_10815b3cc();
  FUN_1083a33c4(param_1 + 2,param_2);
  FUN_108176f24(param_1 + 4,param_2 + 8);
  *param_1 = param_3;
  return param_1;
}



/* Entry: 108176f00; end: 108176f23;  */

void FUN_108176f00(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x0001081565d4(&uStack_11,param_1);
  return;
}



/* Entry: 108176f24; end: 108176fe3;  */

long FUN_108176f24(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  lVar1 = param_1;
  FUN_1083a33c4();
  FUN_1083a33c4(lVar1 + 8,param_2 + 8);
  FUN_1083a33c4(param_1 + 0x10,param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  FUN_108176fe4(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  _memcpy(param_1 + 0x50,param_2 + 0x50,0x44);
  return param_1;
}



/* Entry: 108176fe4; end: 10817706f;  */

undefined8 * FUN_108176fe4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  func_0x000108177008();
  return param_1;
}



/* Entry: 108177070; end: 108177087;  */

void FUN_108177070(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + -8);
    if (lVar2 != 0) {
      lVar3 = lVar2 * -0x18;
      lVar2 = lVar1 + lVar2 * 0x18;
      do {
        lVar2 = lVar2 + -0x18;
        FUN_10815b628(lVar2);
        lVar3 = lVar3 + 0x18;
      } while (lVar3 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 108177088; end: 108177273;  */

undefined1  [16] FUN_108177088(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  byte *pbVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long alStack_b0 [11];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = alStack_b0;
  FUN_10840f5f8(plVar1,param_2,0xffffffffffffffff);
  plVar3 = (long *)(alStack_b0[0] + -1);
  plVar4 = plVar3;
  do {
    plVar3 = (long *)((long)plVar3 + 1);
    plVar4 = (long *)((long)plVar4 + 1);
  } while (*(char *)plVar3 == ' ');
  func_0x00010817747c();
  if (plVar1 == (long *)0x0) {
    plVar4 = plVar3;
    _strlen();
    plVar1 = plVar4;
  }
  else {
    plVar4 = (long *)((long)plVar1 - (long)plVar4);
  }
  if (plVar4 != (long *)0x0) {
    puVar8 = (uint *)&UNK_110a2a5c0;
    lVar2 = 0x180;
    do {
      lVar6 = *(long *)(puVar8 + -2);
      func_0x000108177420();
      if (((int)plVar1 == 0) && (*(char *)((long)plVar4 + lVar6) == '\0')) {
        uVar7 = *puVar8;
        plVar3 = (long *)((long)plVar3 + (long)plVar4);
        goto LAB_108177138;
      }
      lVar2 = lVar2 + -0x10;
      puVar8 = puVar8 + 4;
    } while (lVar2 != 0);
  }
  uVar7 = 400;
LAB_108177138:
  plVar3 = (long *)((long)plVar3 + -1);
  plVar4 = plVar3;
  do {
    plVar3 = (long *)((long)plVar3 + 1);
    plVar4 = (long *)((long)plVar4 + 1);
  } while (*(char *)plVar3 == ' ');
  func_0x00010817747c();
  if (plVar1 == (long *)0x0) {
    plVar4 = plVar3;
    _strlen();
    plVar1 = plVar4;
  }
  else {
    plVar4 = (long *)((long)plVar1 - (long)plVar4);
  }
  if (plVar4 != (long *)0x0) {
    pbVar9 = &UNK_110a2a740;
    lVar2 = 0x20;
    do {
      lVar6 = *(long *)(pbVar9 + -8);
      func_0x000108177420();
      if (((int)plVar1 == 0) && (*(char *)((long)plVar4 + lVar6) == '\0')) {
        bVar5 = *pbVar9;
        plVar3 = (long *)((long)plVar3 + (long)plVar4);
        goto LAB_1081771c8;
      }
      lVar2 = lVar2 + -0x10;
      pbVar9 = pbVar9 + 0x10;
    } while (lVar2 != 0);
  }
  bVar5 = 0;
LAB_1081771c8:
  for (; (char)*plVar3 == ' '; plVar3 = (long *)((long)plVar3 + 1)) {
  }
  if ((char)*plVar3 != '\0') {
    param_2 = 0;
    FUN_108159fb8(param_1,0,0,&UNK_10f47d8ff);
  }
  uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
  if (999 < (int)uVar7) {
    uVar7 = 1000;
  }
  if (1 < bVar5) {
    bVar5 = 2;
  }
  FUN_10840f690();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_10840f690(alStack_b0);
    func_0x000108177430();
    plVar1 = (long *)&DAT_10f62a4d8;
    func_0x000104bd47e8();
    if ((ulong)plVar1 >> 0x3d != 0) {
      func_0x000104bd35f4();
      lVar2 = plVar1[1];
      while (lVar2 != plVar1[2]) {
        plVar1[2] = plVar1[2] + -8;
        func_0x000108176d94();
      }
      if (*plVar1 != 0) {
        __ZdlPv();
      }
      auVar12._8_8_ = param_2;
      auVar12._0_8_ = plVar1;
      return auVar12;
    }
    lVar2 = (long)plVar1 << 3;
    __Znwm(lVar2);
    auVar11._8_8_ = plVar1;
    auVar11._0_8_ = lVar2;
    return auVar11;
  }
  auVar10._4_4_ = 0;
  auVar10._0_4_ = uVar7 | (uint)bVar5 << 0x18 | 0x50000;
  auVar10._8_8_ = param_2;
  return auVar10;
}



/* Entry: 108177274; end: 108177287;  */

undefined1  [16] FUN_108177274(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if ((ulong)plVar1 >> 0x3d == 0) {
    lVar2 = (long)plVar1 << 3;
    __Znwm(lVar2);
    auVar3._8_8_ = plVar1;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000104bd35f4();
  lVar2 = plVar1[1];
  while (lVar2 != plVar1[2]) {
    plVar1[2] = plVar1[2] + -8;
    func_0x000108176d94();
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 108177288; end: 10817733f;  */

undefined1  [16] FUN_108177288(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    func_0x000108176d94();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 108177340; end: 10817736b;  */

void FUN_108177340(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000108177364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10817736c; end: 1081773f7;  */

int * FUN_10817736c(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int *piVar4;
  int unaff_w24;
  int unaff_w25;
  int unaff_w26;
  
  uVar2 = param_2;
  FUN_108176e88();
  func_0x0001081774d8();
  while( true ) {
    if (unaff_w25 == 0) {
      return (int *)0x0;
    }
    piVar4 = (int *)(*(long *)(param_1 + 8) + (long)unaff_w24 * (long)unaff_w26);
    iVar1 = *piVar4;
    if (iVar1 == 0) break;
    if ((int)uVar2 == iVar1) {
      piVar4 = piVar4 + 2;
      uVar3 = param_2;
      FUN_1083a3440(param_2,piVar4);
      if ((uVar3 & 1) != 0) {
        return piVar4;
      }
    }
    func_0x000108177458();
  }
  return (int *)0x0;
}



/* Entry: 1081773f8; end: 1081774eb;  */

void FUN_1081773f8(void)

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



/* Entry: 1081774ec; end: 10817771b;  */

void FUN_1081774ec(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  uStack_70 = 0;
  plVar3 = (long *)0x48;
  __Znwm();
  *(undefined4 *)(plVar3 + 1) = 1;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  *(undefined2 *)(plVar3 + 5) = 0;
  *plVar3 = (long)&PTR_DAT_110a2a810;
  plVar4 = plVar3;
  FUN_1081778ec(plVar3 + 6);
  iVar2 = (int)plVar4;
  *plVar3 = (long)&PTR_FUN_110a2a7a8;
  plVar3[7] = 0;
  plVar3[8] = 0;
  lVar5 = plVar3[6];
  func_0x000108177a3c();
  plStack_68 = (long *)CONCAT44(plStack_68._4_4_,0xffffffff);
  func_0x000108155f24();
  plStack_58 = (long *)CONCAT44(plStack_58._4_4_,(uint)(iVar2 == 3));
  FUN_108177804(lVar5,&plStack_58);
  lVar5 = plVar3[6];
  plStack_58 = (long *)CONCAT71(plStack_58._1_7_,1);
  func_0x000108177824(lVar5,&plStack_58);
  func_0x000108177a3c();
  FUN_108154e4c();
  plVar4 = plVar3;
  FUN_108162b98(plVar3,param_3,lVar5,plVar3 + 7);
  func_0x000108177a3c();
  FUN_108154e4c();
  FUN_108162b98(plVar3,param_3,plVar4,plVar3 + 8);
  plStack_60 = plVar3;
  FUN_10816040c(plVar3 + 2);
  FUN_108177770(&uStack_70,plVar3 + 6);
  plStack_60 = (long *)0x0;
  if ((plVar3[2] == plVar3[3]) && ((*(byte *)((long)plVar3 + 0x29) & 1) == 0)) {
    plStack_68 = plVar3;
    (**(code **)(*plVar3 + 0x18))(0,plVar3);
  }
  else {
    plStack_68 = (long *)0x0;
    plStack_58 = plVar3;
    FUN_108155570(*(undefined8 *)(param_3 + 0x70),&plStack_58);
    FUN_108155920(&plStack_58);
  }
  FUN_1081777b8(&plStack_68);
  FUN_1081777b8(&plStack_60);
  uVar1 = uStack_70;
  uStack_70 = 0;
  *param_1 = uVar1;
  FUN_10817771c(&uStack_70);
  return;
}



/* Entry: 10817771c; end: 108177743;  */

undefined8 * FUN_10817771c(undefined8 *param_1)

{
  FUN_108177744(*param_1);
  return param_1;
}



/* Entry: 108177744; end: 10817776f;  */

void FUN_108177744(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000108177768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108177770; end: 1081777b7;  */

long * FUN_108177770(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 != param_2) {
    if (*param_2 != 0) {
      piVar1 = (int *)(*param_2 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_108177a20(param_1);
  }
  return param_1;
}



/* Entry: 1081777b8; end: 108177803;  */

long * FUN_1081777b8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 108177804; end: 10817784b;  */

void FUN_108177804(long param_1,uint *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  if (*param_2 != (*(byte *)(param_1 + 0x60) & 1)) {
    *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xfe | (byte)*param_2 & 1;
    uStack_21 = 1;
    func_0x00010818add8(auStack_38);
    if ((bStack_2c & 1) == 0) {
      uVar2 = *(ushort *)(param_1 + 0x28);
      uVar4 = (uint)uVar2;
      if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 3 & 1) == 0)) {
        if ((uVar2 & 1) == 0) {
          uVar4 = uVar2 | 8;
          *(short *)(param_1 + 0x28) = (short)uVar4;
          uStack_21 = 0;
        }
        *(ushort *)(param_1 + 0x28) = (ushort)uVar4 | 4;
        puStack_40 = &uStack_21;
        puVar3 = *(undefined8 **)(param_1 + 0x10);
        if ((uVar4 >> 4 & 1) == 0) {
          if (puVar3 != (undefined8 *)0x0) {
            func_0x00010818ad34(&puStack_40);
          }
        }
        else {
          puVar1 = (undefined8 *)puVar3[1];
          for (puVar3 = (undefined8 *)*puVar3; puVar3 != puVar1; puVar3 = puVar3 + 1) {
            func_0x00010818ad34(&puStack_40,*puVar3);
          }
        }
      }
    }
    func_0x00010818a9f8(auStack_38);
    return;
  }
  return;
}



/* Entry: 10817784c; end: 10817787b;  */

undefined8 * FUN_10817784c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2a810;
  FUN_10817771c(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10817787c; end: 10817787f;  */

undefined8 * FUN_10817787c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2a810;
  FUN_10817771c(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 108177880; end: 108177893;  */

void FUN_108177880(void)

{
  FUN_10817784c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108177894; end: 1081778eb;  */

void FUN_108177894(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_64 [52];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  fVar4 = (float)*(undefined8 *)(param_1 + 0x38);
  fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
  fVar2 = (float)*(undefined8 *)(param_1 + 0x40) + fVar4 * -0.5;
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) + fVar5 * -0.5;
  uStack_30 = CONCAT44(fVar3,fVar2);
  uStack_28 = CONCAT44(fVar5 + fVar3,fVar4 + fVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_1081779a8(auStack_64,&uStack_30);
  FUN_10817794c(uVar1,auStack_64);
  return;
}



/* Entry: 1081778ec; end: 10817794b;  */

void FUN_1081778ec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x68;
  __Znwm();
  FUN_10818b598();
  *param_1 = uVar1;
  return;
}



/* Entry: 10817794c; end: 1081779a7;  */

void FUN_10817794c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  uVar3 = param_1 + 0x2c;
  FUN_1081779c4();
  if ((uVar3 & 1) == 0) {
    uVar7 = param_2[1];
    uVar6 = *param_2;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    uVar11 = param_2[5];
    uVar10 = param_2[4];
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 0x54) = uVar11;
    *(undefined8 *)(param_1 + 0x4c) = uVar10;
    *(undefined8 *)(param_1 + 0x44) = uVar9;
    *(undefined8 *)(param_1 + 0x3c) = uVar8;
    *(undefined8 *)(param_1 + 0x34) = uVar7;
    *(undefined8 *)(param_1 + 0x2c) = uVar6;
    uStack_21 = 1;
    func_0x00010818add8(auStack_38);
    if ((bStack_2c & 1) == 0) {
      uVar2 = *(ushort *)(param_1 + 0x28);
      uVar5 = (uint)uVar2;
      if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 3 & 1) == 0)) {
        if ((uVar2 & 1) == 0) {
          uVar5 = uVar2 | 8;
          *(short *)(param_1 + 0x28) = (short)uVar5;
          uStack_21 = 0;
        }
        *(ushort *)(param_1 + 0x28) = (ushort)uVar5 | 4;
        puStack_40 = &uStack_21;
        puVar4 = *(undefined8 **)(param_1 + 0x10);
        if ((uVar5 >> 4 & 1) == 0) {
          if (puVar4 != (undefined8 *)0x0) {
            func_0x00010818ad34(&puStack_40);
          }
        }
        else {
          puVar1 = (undefined8 *)puVar4[1];
          for (puVar4 = (undefined8 *)*puVar4; puVar4 != puVar1; puVar4 = puVar4 + 1) {
            func_0x00010818ad34(&puStack_40,*puVar4);
          }
        }
      }
    }
    func_0x00010818a9f8(auStack_38);
    return;
  }
  return;
}



/* Entry: 1081779a8; end: 1081779c3;  */

void FUN_1081779a8(undefined8 *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  
  *(undefined4 *)(param_1 + 6) = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  puVar2 = param_1;
  FUN_108384d0c(param_1,param_2);
  if ((int)puVar2 != 0) {
    FUN_108384d74(param_1);
    fVar1 = (float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6)));
    func_0x000108384d80(param_1);
    if ((fVar1 == 0.0) ||
       (!NAN((float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6)))) &&
        (float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6))) == 0.0)) {
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined4 *)((long)param_1 + 0x14);
      lVar5 = 4;
      do {
        puVar4[-1] = fVar1;
        *puVar4 = CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6)));
        puVar4 = puVar4 + 2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      uVar3 = 2;
    }
    *(undefined4 *)(param_1 + 6) = uVar3;
  }
  return;
}



/* Entry: 1081779c4; end: 108177a1f;  */

void FUN_1081779c4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1;
  FUN_10815cc68();
  if ((int)lVar3 != 0) {
    lVar3 = 0;
    do {
      if (lVar3 == 8) {
        return;
      }
      lVar1 = lVar3 * 4;
      lVar2 = lVar3 * 4;
      lVar3 = lVar3 + 1;
    } while (*(float *)(param_1 + 0x10 + lVar1) == *(float *)(param_2 + 0x10 + lVar2));
  }
  return;
}



/* Entry: 108177a20; end: 108177a4b;  */

void FUN_108177a20(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x000108177768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108177a4c; end: 108177a6f;  */

void FUN_108177a4c(void)

{
  func_0x0001081787cc();
  func_0x0001081787b4();
  return;
}



/* Entry: 108177a70; end: 108177e2f;  */

void FUN_108177a70(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5,
                  long *param_6,int *param_7)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  int extraout_w11;
  long lVar6;
  long *plVar7;
  float fVar8;
  long *plStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  
  *param_1 = 0;
  plVar2 = (long *)0x60;
  __Znwm();
  lVar4 = *param_5;
  *param_5 = 0;
  lVar6 = *param_6;
  *param_6 = 0;
  iVar1 = *param_7;
  uStack_80 = 0;
  *(undefined4 *)(plVar2 + 1) = 1;
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  *(undefined2 *)(plVar2 + 5) = 0;
  plVar7 = plVar2 + 6;
  *plVar7 = lVar4;
  plStack_68 = (long *)0x0;
  FUN_108158f90(&plStack_68);
  *plVar2 = (long)&PTR_SUB_110a2a848;
  *(uint *)(plVar2 + 7) = (uint)(lVar6 != 0);
  plVar2[8] = 0;
  plVar2[9] = 0;
  plVar2[10] = 0;
  fVar8 = 100.0;
  plVar2[0xb] = 0x3f80000042c80000;
  uStack_88 = 0;
  lStack_70 = lVar6;
  FUN_108160388(plVar2,&lStack_70);
  plVar3 = &lStack_70;
  FUN_10815db6c(plVar3);
  func_0x000108178728();
  FUN_108154e4c();
  FUN_108161330(plVar2,param_4,plVar3,plVar2 + 0xb);
  lVar4 = *plVar7;
  uStack_78._0_1_ = 1;
  FUN_108158df4(lVar4,&uStack_78);
  if (iVar1 == 1) {
    func_0x000108178728();
    FUN_108154e4c();
    FUN_108161330(plVar2,param_4,lVar4,(long)plVar2 + 0x5c);
    lVar6 = *plVar7;
    uStack_78 = CONCAT71(uStack_78._1_7_,1);
    FUN_108178390(lVar6,&uStack_78);
    lVar4 = *plVar7;
    func_0x000108178728();
    uStack_78 = CONCAT44(uStack_78._4_4_,0x40800000);
    FUN_1081572c0();
    if (*(float *)(lVar4 + 0x34) != fVar8) {
      *(float *)(lVar4 + 0x34) = fVar8;
      func_0x000108178750();
      lVar6 = lVar4;
    }
    lVar4 = *plVar7;
    func_0x000108178728();
    uStack_78 = 1;
    FUN_108154b1c();
    uVar5 = lVar6 - 1;
    if (1 < uVar5) {
      uVar5 = 2;
    }
    func_0x0001081783b0(lVar4,&UNK_10df06450 + uVar5);
    lVar6 = *plVar7;
    func_0x000108178728();
    uStack_78._0_1_ = 1;
    uStack_78._1_7_ = 0;
    FUN_108154b1c();
    uVar5 = lVar4 - 1;
    if (1 < uVar5) {
      uVar5 = 2;
    }
    if (*(int *)(lVar6 + 0x44) != *(int *)(&UNK_10df06454 + uVar5 * 4)) {
      *(int *)(lVar6 + 0x44) = *(int *)(&UNK_10df06454 + uVar5 * 4);
      func_0x000108178750(lVar6);
      lVar4 = lVar6;
    }
  }
  if ((int)plVar2[7] == 0) {
    func_0x000108178728();
    FUN_108154e4c();
    FUN_108163f1c(plVar2,param_4,lVar4,plVar2 + 8);
  }
  plStack_90 = plVar2;
  FUN_10815db6c(&uStack_88);
  FUN_108158f90(&uStack_80);
  FUN_10816040c(plVar2 + 2);
  if (param_1 != plVar7) {
    lVar4 = 0;
    if (*plVar7 != 0) {
      do {
        func_0x000108178770();
        lVar4 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = lVar4;
    func_0x000108178320(0);
  }
  plStack_90 = (long *)0x0;
  if ((plVar2[2] == plVar2[3]) && ((*(byte *)((long)plVar2 + 0x29) & 1) == 0)) {
    plStack_98 = plVar2;
    (**(code **)(*plVar2 + 0x18))(0,plVar2);
  }
  else {
    plStack_98 = (long *)0x0;
    plStack_68 = plVar2;
    FUN_108155570(*(undefined8 *)(param_2 + 0x70),&plStack_68);
    FUN_108155920(&plStack_68);
  }
  FUN_108178344(&plStack_98);
  FUN_108178344(&plStack_90);
  return;
}



/* Entry: 108177e30; end: 108177e57;  */

void FUN_108177e30(void)

{
  func_0x0001081787cc();
  func_0x0001081787b4();
  return;
}



/* Entry: 108177e58; end: 108177ecf;  */

void FUN_108177e58(void)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000108178730();
  uStack_40 = 0;
  if (lStack_38 != 0) {
    do {
      func_0x000108178770();
      uStack_40 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x000108178780();
  FUN_108177a4c();
  func_0x000108178758();
  FUN_108158f90(&uStack_40);
  func_0x0001081787c0();
  func_0x000108178748();
  return;
}



/* Entry: 108177ed0; end: 108177f47;  */

void FUN_108177ed0(void)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000108178730();
  uStack_40 = 0;
  if (lStack_38 != 0) {
    do {
      func_0x000108178770();
      uStack_40 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x000108178780();
  FUN_108177e30();
  func_0x000108178758();
  FUN_108158f90(&uStack_40);
  func_0x0001081787c0();
  func_0x000108178748();
  return;
}



/* Entry: 108177f48; end: 1081782d3;  */

void FUN_108177f48(long *param_1,ulong *param_2,long param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  FUN_108154b58(param_2,"d");
  FUN_108155f00();
  if ((param_2 != (ulong *)0x0) && (1 < *(ulong *)(*param_2 & 0xfffffffffffffff8))) {
    uVar9 = 0;
    while( true ) {
      lVar8 = *param_4;
      if ((ulong)(param_4[1] - lVar8 >> 3) <= uVar9) break;
      lStack_90 = 0;
      plVar4 = (long *)0x58;
      __Znwm();
      plVar7 = *(long **)(lVar8 + uVar9 * 8);
      *(undefined8 *)(lVar8 + uVar9 * 8) = 0;
      uStack_80 = 0;
      if (plVar7 == (long *)0x0) {
        puVar5 = (undefined8 *)0x0;
        plStack_78 = (long *)0x0;
      }
      else {
        puVar5 = (undefined8 *)0x68;
        plStack_78 = plVar7;
        __Znwm();
        plStack_78 = (long *)0x0;
        plStack_70 = (long *)0x0;
        plStack_68 = plVar7;
        FUN_10818860c();
        FUN_108159714(&plStack_68);
        *puVar5 = &PTR_FUN_110a2b788;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        puVar5[9] = 0;
        *(undefined4 *)(puVar5 + 0xc) = 0;
        FUN_108159714(&plStack_70);
      }
      *(undefined4 *)(plVar4 + 1) = 1;
      plVar4[2] = 0;
      plVar4[3] = 0;
      plVar4[4] = 0;
      *(undefined2 *)(plVar4 + 5) = 0;
      *plVar4 = (long)&PTR_DAT_110a2a950;
      plStack_68 = (long *)0x0;
      plVar4[6] = (long)puVar5;
      FUN_1081782d4(&plStack_68);
      FUN_108159714(&plStack_78);
      *plVar4 = (long)&PTR_SUB_110a2a8e8;
      plVar7 = plVar4 + 7;
      *plVar7 = 0;
      *(undefined4 *)(plVar4 + 10) = 0;
      plVar4[8] = 0;
      plVar4[9] = 0;
      uVar12 = *(long *)(*param_2 & 0xfffffffffffffff8) - 1;
      plStack_70 = (long *)((ulong)plStack_70 & 0xffffffff00000000);
      FUN_10817850c(plVar7,uVar12,&plStack_70);
      lVar8 = 0;
      lVar10 = 8;
      for (uVar11 = 0; uVar11 < *(ulong *)(*param_2 & 0xfffffffffffffff8); uVar11 = uVar11 + 1) {
        lVar6 = (long)(*param_2 & 0xfffffffffffffff8) + lVar10;
        FUN_108154e4c();
        if (lVar6 != 0) {
          plVar13 = plVar4 + 10;
          if (uVar11 < uVar12) {
            plVar13 = (long *)(*plVar7 + lVar8);
          }
          FUN_108154b58();
          FUN_108154e4c();
          FUN_108161330(plVar4,param_3,lVar6,plVar13);
        }
        lVar8 = lVar8 + 4;
        lVar10 = lVar10 + 8;
      }
      plStack_88 = plVar4;
      FUN_108159714(&uStack_80);
      FUN_10816040c(plVar4 + 2);
      lVar8 = plVar4[6];
      if (lVar8 != 0) {
        piVar1 = (int *)(lVar8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_90 = lVar8;
      FUN_1081782fc(0);
      plStack_88 = (long *)0x0;
      if ((plVar4[2] == plVar4[3]) && ((*(byte *)((long)plVar4 + 0x29) & 1) == 0)) {
        plStack_70 = plVar4;
        (**(code **)(*plVar4 + 0x18))(0,plVar4);
      }
      else {
        plStack_70 = (long *)0x0;
        plStack_68 = plVar4;
        FUN_108155570(*(undefined8 *)(param_3 + 0x70),&plStack_68);
        FUN_108155920(&plStack_68);
      }
      FUN_1081784c0(&plStack_70);
      FUN_1081784c0(&plStack_88);
      lStack_90 = 0;
      FUN_108159050(*param_4 + uVar9 * 8,lVar8);
      FUN_1081782d4(&lStack_90);
      uVar9 = uVar9 + 1;
    }
  }
  lVar8 = *param_4;
  param_1[1] = param_4[1];
  *param_1 = lVar8;
  param_1[2] = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  return;
}



/* Entry: 1081782d4; end: 1081782fb;  */

undefined8 * FUN_1081782d4(undefined8 *param_1)

{
  FUN_1081782fc(*param_1);
  return param_1;
}



/* Entry: 1081782fc; end: 108178343;  */

void FUN_1081782fc(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001081787a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108178344; end: 10817838f;  */

long * FUN_108178344(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 108178390; end: 1081783cf;  */

void FUN_108178390(long param_1,char *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  if (*(char *)(param_1 + 0x40) != *param_2) {
    *(char *)(param_1 + 0x40) = *param_2;
    uStack_21 = 1;
    func_0x00010818add8(auStack_38);
    if ((bStack_2c & 1) == 0) {
      uVar2 = *(ushort *)(param_1 + 0x28);
      uVar4 = (uint)uVar2;
      if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 3 & 1) == 0)) {
        if ((uVar2 & 1) == 0) {
          uVar4 = uVar2 | 8;
          *(short *)(param_1 + 0x28) = (short)uVar4;
          uStack_21 = 0;
        }
        *(ushort *)(param_1 + 0x28) = (ushort)uVar4 | 4;
        puStack_40 = &uStack_21;
        puVar3 = *(undefined8 **)(param_1 + 0x10);
        if ((uVar4 >> 4 & 1) == 0) {
          if (puVar3 != (undefined8 *)0x0) {
            func_0x00010818ad34(&puStack_40);
          }
        }
        else {
          puVar1 = (undefined8 *)puVar3[1];
          for (puVar3 = (undefined8 *)*puVar3; puVar3 != puVar1; puVar3 = puVar3 + 1) {
            func_0x00010818ad34(&puStack_40,*puVar3);
          }
        }
      }
    }
    func_0x00010818a9f8(auStack_38);
    return;
  }
  return;
}



/* Entry: 1081783d0; end: 108178427;  */

undefined8 * FUN_1081783d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2a8b0;
  FUN_108158f90(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 108178428; end: 10817843b;  */

void FUN_108178428(void)

{
  func_0x000108178400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10817843c; end: 1081784bf;  */

void FUN_10817843c(long param_1)

{
  undefined8 uVar1;
  int iStack_28;
  float fStack_24;
  
  fStack_24 = *(float *)(param_1 + 0x58) * 0.01;
  FUN_108158fd0(*(undefined8 *)(param_1 + 0x30),&fStack_24);
  if (*(float *)(*(long *)(param_1 + 0x30) + 0x30) != *(float *)(param_1 + 0x5c)) {
    *(float *)(*(long *)(param_1 + 0x30) + 0x30) = *(float *)(param_1 + 0x5c);
    func_0x000108178750();
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    iStack_28 = (int)param_1 + 0x40;
    FUN_108163830();
    FUN_10816704c(uVar1,&iStack_28);
  }
  return;
}



/* Entry: 1081784c0; end: 10817850b;  */

long * FUN_1081784c0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10817850c; end: 10817853b;  */

void FUN_10817850c(long *param_1,ulong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_58 [16];
  undefined4 *puStack_48;
  
  uVar4 = param_1[1] - *param_1 >> 2;
  if (param_2 <= uVar4) {
    if (param_2 < uVar4) {
      param_1[1] = *param_1 + param_2 * 4;
    }
    return;
  }
  param_2 = param_2 - uVar4;
  if (param_2 <= (ulong)(param_1[2] - param_1[1] >> 2)) {
    puVar3 = (undefined4 *)param_1[1];
    puVar1 = puVar3;
    for (lVar5 = param_2 * 4; lVar5 != 0; lVar5 = lVar5 + -4) {
      *puVar1 = *param_3;
      puVar1 = puVar1 + 1;
    }
    param_1[1] = (long)(puVar3 + param_2);
    return;
  }
  plVar2 = param_1;
  func_0x0001073b5434(param_1,param_2 + (param_1[1] - *param_1 >> 2));
  func_0x0001073b531c(auStack_58,plVar2,param_1[1] - *param_1 >> 2,param_1 + 2);
  puVar1 = puStack_48 + param_2;
  for (lVar5 = param_2 * 4; lVar5 != 0; lVar5 = lVar5 + -4) {
    *puStack_48 = *param_3;
    puStack_48 = puStack_48 + 1;
  }
  puStack_48 = puVar1;
  func_0x0001073b52fc(param_1,auStack_58);
  func_0x0001073b5364(auStack_58);
  return;
}



/* Entry: 10817853c; end: 108178593;  */

undefined8 * FUN_10817853c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2a950;
  FUN_1081782d4(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 108178594; end: 1081785a7;  */

void FUN_108178594(void)

{
  func_0x00010817856c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081785a8; end: 108178617;  */

void FUN_1081785a8(long param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  lVar6 = *(long *)(param_1 + 0x30);
  if (*(float *)(lVar6 + 0x60) != *(float *)(param_1 + 0x50)) {
    *(float *)(lVar6 + 0x60) = *(float *)(param_1 + 0x50);
    func_0x000108178750(lVar6);
    lVar6 = *(long *)(param_1 + 0x30);
  }
  uVar3 = lVar6 + 0x48;
  func_0x0001073c73e4(uVar3,param_1 + 0x38);
  if ((uVar3 & 1) == 0) {
    func_0x00010815da54(lVar6 + 0x48,param_1 + 0x38);
    uStack_21 = 1;
    func_0x00010818add8(auStack_38);
    if ((bStack_2c & 1) == 0) {
      uVar2 = *(ushort *)(lVar6 + 0x28);
      uVar5 = (uint)uVar2;
      if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 3 & 1) == 0)) {
        if ((uVar2 & 1) == 0) {
          uVar5 = uVar2 | 8;
          *(short *)(lVar6 + 0x28) = (short)uVar5;
          uStack_21 = 0;
        }
        *(ushort *)(lVar6 + 0x28) = (ushort)uVar5 | 4;
        puStack_40 = &uStack_21;
        puVar4 = *(undefined8 **)(lVar6 + 0x10);
        if ((uVar5 >> 4 & 1) == 0) {
          if (puVar4 != (undefined8 *)0x0) {
            func_0x00010818ad34(&puStack_40);
          }
        }
        else {
          puVar1 = (undefined8 *)puVar4[1];
          for (puVar4 = (undefined8 *)*puVar4; puVar4 != puVar1; puVar4 = puVar4 + 1) {
            func_0x00010818ad34(&puStack_40,*puVar4);
          }
        }
      }
    }
    func_0x00010818a9f8(auStack_38);
    return;
  }
  return;
}



/* Entry: 108178618; end: 1081786ff;  */

void FUN_108178618(long *param_1,ulong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined1 auStack_58 [16];
  undefined4 *puStack_48;
  
  if (param_2 <= (ulong)(param_1[2] - param_1[1] >> 2)) {
    puVar3 = (undefined4 *)param_1[1];
    puVar1 = puVar3;
    for (lVar4 = param_2 << 2; lVar4 != 0; lVar4 = lVar4 + -4) {
      *puVar1 = *param_3;
      puVar1 = puVar1 + 1;
    }
    param_1[1] = (long)(puVar3 + param_2);
    return;
  }
  plVar2 = param_1;
  func_0x0001073b5434(param_1,param_2 + (param_1[1] - *param_1 >> 2));
  func_0x0001073b531c(auStack_58,plVar2,param_1[1] - *param_1 >> 2,param_1 + 2);
  puVar1 = puStack_48 + param_2;
  for (lVar4 = param_2 << 2; lVar4 != 0; lVar4 = lVar4 + -4) {
    *puStack_48 = *param_3;
    puStack_48 = puStack_48 + 1;
  }
  puStack_48 = puVar1;
  func_0x0001073b52fc(param_1,auStack_58);
  func_0x0001073b5364(auStack_58);
  return;
}



/* Entry: 108178700; end: 1081787df;  */

void FUN_108178700(long param_1,long param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  puVar1 = puVar2;
  for (lVar3 = param_2 << 2; lVar3 != 0; lVar3 = lVar3 + -4) {
    *puVar1 = *param_3;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 **)(param_1 + 8) = puVar2 + param_2;
  return;
}



/* Entry: 1081787e0; end: 108178893;  */

void FUN_1081787e0(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *unaff_x20;
  undefined8 uStack_38;
  
  FUN_1081791b8();
  if (uStack_38 == 0) {
    *unaff_x20 = 0;
  }
  else {
    if (*(long *)(uStack_38 + 0x30) != 0) {
      piVar1 = (int *)(*(long *)(uStack_38 + 0x30) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000108179268();
    piVar1 = (int *)(uStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    func_0x000108179250();
    FUN_108177a4c();
    func_0x00010817922c();
    func_0x00010817921c();
    func_0x000108179214();
    func_0x0001081791f4();
  }
  func_0x000108179224();
  return;
}



/* Entry: 108178894; end: 108178abb;  */

void FUN_108178894(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar2 = param_1;
  func_0x0001081791d4(param_1,"g");
  FUN_108154e4c();
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
    FUN_108154b58();
    func_0x000108179274(0xffffffff);
    iVar1 = (int)puVar3;
    if (-1 < iVar1) {
      func_0x0001081791d4();
      func_0x000108179274(1);
      if (iVar1 == 1) {
        FUN_10816bff0(&uStack_60);
        uVar5 = uStack_60;
        uStack_60 = 0;
        uStack_58 = uVar5;
        FUN_10816c17c(&uStack_60);
      }
      else {
        FUN_10816c02c();
        uVar5 = uStack_60;
        uStack_60 = 0;
        uStack_58 = uVar5;
        FUN_10816c13c(&uStack_60);
      }
      puVar4 = (undefined8 *)0x78;
      __Znwm();
      uStack_58 = 0;
      *(undefined4 *)(puVar4 + 1) = 1;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[2] = 0;
      *(undefined2 *)(puVar4 + 5) = 0;
      puVar4[6] = uVar5;
      *puVar4 = &PTR_FUN_110a2a988;
      uStack_68 = 0;
      *(uint *)(puVar4 + 7) = (uint)(iVar1 != 1);
      puVar4[8] = (ulong)puVar3 & 0xffffffff;
      puVar4[10] = 0;
      puVar4[9] = 0;
      puVar4[0xe] = 0;
      puVar4[0xd] = 0;
      puVar4[0xc] = 0;
      puVar4[0xb] = 0;
      func_0x0001081791d4();
      FUN_108154e4c();
      func_0x000108179244();
      FUN_108162b98();
      func_0x0001081791d4();
      FUN_108154e4c();
      func_0x000108179244();
      FUN_108162b98();
      func_0x0001081791d4();
      FUN_108154e4c();
      func_0x000108179244();
      FUN_108161330();
      func_0x0001081791d4();
      FUN_108154e4c();
      func_0x000108179244();
      FUN_108161330();
      FUN_108154b58(puVar2,&DAT_10f3dc18b);
      FUN_108154e4c();
      func_0x000108179244();
      FUN_108163d6c();
      *param_1 = puVar4;
      FUN_10816be9c(&uStack_68);
      FUN_10816be9c(&uStack_58);
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 108178abc; end: 108178b07;  */

long * FUN_108178abc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 108178b08; end: 108178bbb;  */

void FUN_108178b08(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *unaff_x20;
  undefined8 uStack_38;
  
  FUN_1081791b8();
  if (uStack_38 == 0) {
    *unaff_x20 = 0;
  }
  else {
    if (*(long *)(uStack_38 + 0x30) != 0) {
      piVar1 = (int *)(*(long *)(uStack_38 + 0x30) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000108179268();
    piVar1 = (int *)(uStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    func_0x000108179250();
    FUN_108177e30();
    func_0x00010817922c();
    func_0x00010817921c();
    func_0x000108179214();
    func_0x0001081791f4();
  }
  func_0x000108179224();
  return;
}



/* Entry: 108178bbc; end: 108178beb;  */

undefined8 * FUN_108178bbc(undefined8 *param_1)

{
  func_0x0001056d1ce4(param_1 + 9);
  FUN_10816be9c(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 108178bec; end: 108178bff;  */

void FUN_108178bec(void)

{
  FUN_108178bbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108178c00; end: 1081790bb;  */

void FUN_108178c00(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  ulong uVar3;
  float *pfVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  code *pcVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x10;
  long extraout_x10_00;
  undefined8 uVar10;
  long lVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack_100;
  float *pfStack_f8;
  float *pfStack_f0;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float *pfStack_d0;
  float *pfStack_c8;
  float *pfStack_c0;
  float *pfStack_b8;
  
  fStack_d8 = *(float *)(param_1 + 0x60);
  fStack_d4 = *(float *)(param_1 + 100);
  fVar22 = *(float *)(param_1 + 0x68);
  fVar24 = *(float *)(param_1 + 0x6c);
  fStack_e0 = fVar22;
  fStack_dc = fVar24;
  if (*(int *)(param_1 + 0x38) == 1) {
    FUN_10836412c(*(undefined4 *)(param_1 + 0x74),&pfStack_d0);
    FUN_1081790bc(&pfStack_d0);
    uStack_100 = (float *)CONCAT44(fVar24,fVar22);
    fVar16 = *(float *)(param_1 + 0x70) * 0.01;
    fVar20 = 0.9995117;
    if (fVar16 <= 0.9995117) {
      fVar20 = fVar16;
    }
    if (fVar20 <= -0.9995117) {
      fVar20 = -0.9995117;
    }
    pfStack_d0 = (float *)CONCAT44(fStack_d4 + (fVar24 - fStack_d4) * fVar20,
                                   fStack_d8 + (fVar22 - fStack_d8) * fVar20);
    lVar11 = *(long *)(param_1 + 0x30);
    func_0x00010816bf78(lVar11,&pfStack_d0);
    func_0x00010816bf9c(lVar11,&fStack_d8);
    fVar22 = *(float *)(lVar11 + 100);
    if (fVar22 != 0.0) {
      *(undefined4 *)(lVar11 + 100) = 0;
      FUN_10818a7f4(lVar11,1);
    }
    func_0x00010816bfdc(&fStack_d8,&uStack_100);
    fStack_e4 = fVar22;
    func_0x00010816bfc0(lVar11,&fStack_e4);
  }
  else if (*(int *)(param_1 + 0x38) == 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    FUN_10816bf30(uVar10,&fStack_d8);
    func_0x00010816bf54(uVar10,&fStack_e0);
  }
  uVar3 = *(ulong *)(param_1 + 0x40);
  pfVar4 = *(float **)(param_1 + 0x48);
  uVar9 = (long)*(float **)(param_1 + 0x50) - (long)pfVar4 >> 2;
  uVar5 = uVar9 + uVar3 * -4;
  if (uVar9 < uVar3 * 4 || uVar9 != (uVar5 & 0xfffffffffffffffe) + uVar3 * 4) {
    if (pfVar4 != *(float **)(param_1 + 0x50)) {
      FUN_10841076c(&UNK_10f47d91a);
      return;
    }
    return;
  }
  pfVar13 = (float *)0x0;
  if (uVar3 != 0) {
    pfVar13 = pfVar4;
  }
  pfVar1 = (float *)0x0;
  if (1 < uVar5) {
    pfVar1 = pfVar4 + uVar3 * 4;
  }
  if (pfVar13 == (float *)0x0) {
    uVar10 = 0;
    fVar22 = 0.0;
  }
  else {
    uVar10 = *(undefined8 *)(pfVar4 + 1);
    fVar22 = pfVar4[3];
  }
  if (pfVar1 == (float *)0x0) {
    fVar24 = 1.0;
  }
  else {
    fVar24 = (pfVar4 + uVar3 * 4)[1];
  }
  uStack_100 = (float *)0x0;
  pfStack_f8 = (float *)0x0;
  pfStack_f0 = (float *)0x0;
  if (uVar3 != 0) {
    if (0xccccccccccccccc < uVar3) {
      FUN_10816c31c();
LAB_108179090:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x108179094);
      (*pcVar8)();
    }
    func_0x000108179234();
    FUN_1081790e0();
    func_0x000108179280(pfStack_c8);
    pfVar14 = (float *)(extraout_x8 + extraout_x9 * extraout_x10);
    _memcpy(pfVar14);
    pfVar4 = uStack_100;
    pfStack_f0 = pfStack_b8;
    pfStack_f8 = pfStack_c0;
    uStack_100 = pfVar14;
    func_0x0001081791e4(pfVar4);
  }
  pfVar4 = pfVar13 + uVar3 * 4;
  fVar20 = 0.0;
  pfVar14 = pfVar1;
  do {
    if (pfVar13 == (float *)0x0 && pfVar14 == (float *)0x0) {
      if ((ulong)((long)pfStack_f8 - (long)uStack_100) <
          (ulong)((long)pfStack_f0 - (long)uStack_100)) {
        func_0x000108179234();
        FUN_1081790e0();
        if ((ulong)((long)pfStack_b8 - (long)pfStack_d0) <
            (ulong)((long)pfStack_f0 - (long)uStack_100)) {
          func_0x000108179280(pfStack_c8);
          pfVar13 = (float *)(extraout_x8_00 + extraout_x9_00 * extraout_x10_00);
          _memcpy(pfVar13);
          pfVar4 = pfStack_f0;
          pfStack_f8 = pfStack_c0;
          pfStack_f0 = pfStack_b8;
          pfStack_c0 = uStack_100;
          pfStack_b8 = pfVar4;
          pfStack_d0 = uStack_100;
          pfStack_c8 = uStack_100;
          uStack_100 = pfVar13;
        }
        func_0x00010817912c(&pfStack_d0);
      }
      FUN_10816c068(*(undefined8 *)(param_1 + 0x30),&uStack_100);
      FUN_10816c3c0(&uStack_100);
      return;
    }
    if (pfVar13 == (float *)0x0) {
      fVar18 = *pfVar14;
      uVar17 = uVar10;
      fVar16 = fVar22;
      fVar19 = fVar18;
LAB_108178e5c:
      fVar7 = pfVar14[1];
    }
    else {
      fVar18 = *pfVar13;
      uVar17 = *(undefined8 *)(pfVar13 + 1);
      fVar16 = pfVar13[3];
      fVar19 = fVar18;
      fVar7 = fVar24;
      if (pfVar14 != (float *)0x0) {
        fVar18 = *pfVar14;
        goto LAB_108178e5c;
      }
    }
    fVar6 = fVar20;
    if (fVar20 <= fVar19) {
      fVar6 = fVar19;
    }
    fVar19 = fVar20;
    if (fVar20 <= fVar18) {
      fVar19 = fVar18;
    }
    fVar21 = (fVar19 - fVar20) / (fVar6 - fVar20);
    fVar18 = 1.0;
    if (fVar21 <= 1.0) {
      fVar18 = fVar21;
    }
    if (fVar18 <= 0.0) {
      fVar18 = 0.0;
    }
    fVar20 = (fVar6 - fVar20) / (fVar19 - fVar20);
    fVar21 = 1.0;
    if (fVar20 <= 1.0) {
      fVar21 = fVar20;
    }
    if (fVar21 <= 0.0) {
      fVar21 = 0.0;
    }
    fVar20 = fVar19;
    if (fVar6 <= fVar19) {
      fVar20 = fVar6;
    }
    fVar23 = (float)((ulong)uVar10 >> 0x20);
    uVar10 = CONCAT44(fVar23 + ((float)((ulong)uVar17 >> 0x20) - fVar23) * fVar18,
                      (float)uVar10 + ((float)uVar17 - (float)uVar10) * fVar18);
    fVar22 = fVar22 + (fVar16 - fVar22) * fVar18;
    fVar24 = fVar24 + (fVar7 - fVar24) * fVar21;
    if (pfStack_f8 < pfStack_f0) {
      *pfStack_f8 = fVar20;
      *(undefined8 *)(pfStack_f8 + 1) = uVar10;
      pfVar15 = pfStack_f8 + 5;
      pfStack_f8[3] = fVar22;
      pfStack_f8[4] = fVar24;
    }
    else {
      if (0xccccccccccccccc < ((long)pfStack_f8 - (long)uStack_100) / 0x14 + 1U) {
        FUN_10816c31c();
        goto LAB_108179090;
      }
      func_0x000108179234();
      FUN_1081790e0();
      *pfStack_c0 = fVar20;
      *(undefined8 *)(pfStack_c0 + 1) = uVar10;
      pfStack_c0[3] = fVar22;
      pfStack_c0[4] = fVar24;
      pfVar15 = pfStack_c0 + 5;
      pfVar12 = pfStack_c8 + (((long)pfStack_f8 - (long)uStack_100) / -0x14) * 5;
      _memcpy(pfVar12);
      pfVar2 = uStack_100;
      pfStack_f0 = pfStack_b8;
      uStack_100 = pfVar12;
      pfStack_f8 = pfVar15;
      func_0x0001081791e4(pfVar2);
    }
    pfVar2 = pfVar13 + 4;
    if (pfVar4 <= pfVar2) {
      pfVar2 = (float *)0x0;
    }
    pfVar12 = (float *)0x0;
    if (pfVar13 != (float *)0x0) {
      pfVar12 = pfVar2;
    }
    if (fVar6 <= fVar19) {
      pfVar13 = pfVar12;
    }
    pfVar2 = pfVar14 + 2;
    if (pfVar1 + (uVar5 & 0xfffffffffffffffe) <= pfVar2) {
      pfVar2 = (float *)0x0;
    }
    pfVar12 = (float *)0x0;
    if (pfVar14 != (float *)0x0) {
      pfVar12 = pfVar2;
    }
    pfStack_f8 = pfVar15;
    if (fVar19 <= fVar6) {
      pfVar14 = pfVar12;
    }
  } while( true );
}



/* Entry: 1081790bc; end: 1081790df;  */

undefined4 FUN_1081790bc(undefined8 param_1)

{
  undefined4 auStack_18 [2];
  
  FUN_10836464c(param_1,auStack_18);
  return auStack_18[0];
}



/* Entry: 1081790e0; end: 10817916b;  */

long * FUN_1081790e0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_10816c330();
  }
  lVar1 = param_4 + param_3 * 0x14;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x14;
  return param_1;
}



/* Entry: 10817916c; end: 1081791b7;  */

long * FUN_10817916c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 1081791b8; end: 108179293;  */

void FUN_1081791b8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *in_stack_00000028;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar2 = &stack0x00000028;
  func_0x0001081791d4(puVar2,"g",param_2);
  FUN_108154e4c();
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
    FUN_108154b58();
    func_0x000108179274(0xffffffff);
    iVar1 = (int)puVar3;
    if (-1 < iVar1) {
      func_0x0001081791d4();
      func_0x000108179274(1);
      if (iVar1 == 1) {
        FUN_10816bff0(&uStack_60);
        uVar5 = uStack_60;
        uStack_60 = 0;
        uStack_58 = uVar5;
        FUN_10816c17c(&uStack_60);
      }
      else {
        FUN_10816c02c();
        uVar5 = uStack_60;
        uStack_60 = 0;
        uStack_58 = uVar5;
        FUN_10816c13c(&uStack_60);
      }
      puVar4 = (undefined8 *)0x78;
      __Znwm();
      uStack_58 = 0;
      *(undefined4 *)(puVar4 + 1) = 1;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[2] = 0;
      *(undefined2 *)(puVar4 + 5) = 0;
      puVar4[6] = uVar5;
      *puVar4 = &PTR_FUN_110a2a988;
      uStack_68 = 0;
      *(uint *)(puVar4 + 7) = (uint)(iVar1 != 1);
      puVar4[8] = (ulong)puVar3 & 0xffffffff;
      puVar4[10] = 0;
      puVar4[9] = 0;
      puVar4[0xe] = 0;
      puVar4[0xd] = 0;
      puVar4[0xc] = 0;
      puVar4[0xb] = 0;
      func_0x0001081791d4();
      FUN_108154e4c();
      func_0x000108179244();
      FUN_108162b98();
      func_0x0001081791d4();
      FUN_108154e4c();
      func_0x000108179244();
      FUN_108162b98();
      func_0x0001081791d4();
      FUN_108154e4c();
      func_0x000108179244();
      FUN_108161330();
      func_0x0001081791d4();
      FUN_108154e4c();
      func_0x000108179244();
      FUN_108161330();
      FUN_108154b58(puVar2,&DAT_10f3dc18b);
      FUN_108154e4c();
      func_0x000108179244();
      FUN_108163d6c();
      in_stack_00000028 = puVar4;
      FUN_10816be9c(&uStack_68);
      FUN_10816be9c(&uStack_58);
    }
  }
  return;
}



/* Entry: 108179294; end: 10817934f;  */

void FUN_108179294(undefined8 param_1,long *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_58;
  undefined4 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  FUN_108158b58(&lStack_48,param_2[1] - *param_2 >> 3);
  puVar1 = (undefined8 *)param_2[1];
  puVar2 = (undefined8 *)*param_2;
  while (puVar2 != puVar1) {
    uStack_58 = *puVar2;
    *puVar2 = 0;
    uStack_50 = 0;
    if (lStack_48 != lStack_40) {
      uStack_50 = param_3;
    }
    func_0x00010815933c(&lStack_48,&uStack_58);
    func_0x000108179880();
    puVar2 = puVar2 + 1;
  }
  FUN_108158bc0(param_1,&lStack_48);
  FUN_1081594a0(&lStack_48);
  return;
}



/* Entry: 108179350; end: 10817940b;  */

void FUN_108179350(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_108154b58(param_2,&DAT_10f47d944);
  uStack_28 = 1;
  FUN_108154b1c();
  uVar2 = param_2 - 1;
  if (3 < uVar2) {
    uVar2 = 4;
  }
  uVar1 = *(undefined4 *)(&UNK_10df065c8 + uVar2 * 4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_108179294(&uStack_30,param_4,uVar1);
  uStack_28 = uStack_30;
  uStack_30 = 0;
  func_0x0001081794bc(param_1,&uStack_28);
  func_0x000108179880();
  FUN_108159460(&uStack_30);
  return;
}



/* Entry: 10817940c; end: 10817947b;  */

undefined8 FUN_10817940c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000108179440(&uStack_28);
  return param_1;
}



/* Entry: 10817947c; end: 108179483;  */

void FUN_10817947c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    FUN_108159714();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 108179484; end: 108179503;  */

void FUN_108179484(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    FUN_108159714();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 108179504; end: 1081795b3;  */

long FUN_108179504(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  FUN_1081795b4(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar4 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar2 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_108179688();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar4));
  plStack_40 = plStack_58 + (long)plVar2;
  uVar3 = *param_2;
  *param_2 = 0;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = uVar3;
  FUN_1081795f4(param_1,&plStack_58);
  lVar4 = param_1[1];
  func_0x00010817980c(&plStack_58);
  return lVar4;
}


