/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b9a6fe4; end: 10b9a7007;  */

void FUN_10b9a6fe4(undefined8 param_1)

{
  undefined1 auStack_18 [8];
  
  FUN_10b9a7008(param_1,auStack_18);
  func_0x00010b9a74c4();
  return;
}



/* Entry: 10b9a7008; end: 10b9a706f;  */

bool FUN_10b9a7008(undefined8 param_1)

{
  ulong unaff_x20;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  ulong uStack_38;
  
  func_0x00010b9a7444();
  _strtod();
  *unaff_x21 = param_1;
  if ((uStack_38 != 0 && uStack_38 != unaff_x20) && uStack_38 <= unaff_x22) {
    func_0x000107c3a32c(uStack_38 - unaff_x20);
  }
  else {
    FUN_10b9a6f3c();
  }
  return (uStack_38 != 0 && uStack_38 != unaff_x20) && uStack_38 <= unaff_x22;
}



/* Entry: 10b9a7070; end: 10b9a7093;  */

void FUN_10b9a7070(undefined8 param_1)

{
  undefined1 auStack_14 [4];
  
  FUN_10b9a7094(param_1,auStack_14);
  func_0x000107c3a334();
  return;
}



/* Entry: 10b9a7094; end: 10b9a7123;  */

bool FUN_10b9a7094(long *param_1,int *param_2)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  lVar2 = param_1[2];
  pbVar1 = (byte *)(*param_1 + lVar2);
  lVar5 = param_1[1] - lVar2;
  pbVar6 = pbVar1 + -1;
  iVar3 = 0;
  do {
    iVar4 = iVar3;
    pbVar7 = (byte *)(*param_1 + param_1[1]);
    if (lVar5 == 0) break;
    pbVar7 = pbVar6 + 1;
    lVar5 = lVar5 + -1;
    pbVar6 = pbVar7;
    iVar3 = (*pbVar7 - 0x30) + iVar4 * 10;
  } while (*pbVar7 - 0x30 < 10);
  if (pbVar7 == pbVar1) {
    FUN_10b9a6f3c(param_1,&UNK_10f7d0f6c,0xd);
  }
  else {
    param_1[2] = (long)(pbVar7 + (lVar2 - (long)pbVar1));
    *param_2 = iVar4;
  }
  return pbVar7 != pbVar1;
}



/* Entry: 10b9a7124; end: 10b9a7147;  */

void FUN_10b9a7124(undefined8 param_1)

{
  undefined1 auStack_18 [8];
  
  FUN_10b9a7148(param_1,auStack_18);
  func_0x00010b9a74c4();
  return;
}



/* Entry: 10b9a7148; end: 10b9a7273;  */

bool FUN_10b9a7148(undefined8 param_1)

{
  ulong unaff_x20;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  ulong uStack_38;
  
  func_0x00010b9a7444();
  _strtoll();
  *unaff_x21 = param_1;
  if ((uStack_38 != 0 && uStack_38 != unaff_x20) && uStack_38 <= unaff_x22) {
    func_0x000107c3a32c(uStack_38 - unaff_x20);
  }
  else {
    FUN_10b9a6f3c();
  }
  return (uStack_38 != 0 && uStack_38 != unaff_x20) && uStack_38 <= unaff_x22;
}



/* Entry: 10b9a7274; end: 10b9a72b7;  */

uint FUN_10b9a7274(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1;
  func_0x000107c284a4();
  uVar3 = 0;
  if (param_1 - 0x21U < 0x3f) {
    uVar3 = (uint)(0x4000000000001001 >> ((ulong)(param_1 - 0x21U) & 0x3f));
  }
  uVar1 = 1;
  if (iVar2 == 0) {
    uVar1 = uVar3;
  }
  return uVar1 & 1;
}



/* Entry: 10b9a72b8; end: 10b9a731f;  */

void FUN_10b9a72b8(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  lStack_30 = *param_2;
  if (lStack_30 != 0) {
    plVar1 = (long *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10b9a7320(param_1 + 0x18,&lStack_30);
  func_0x000104bda93c(&lStack_30);
  return;
}



/* Entry: 10b9a7320; end: 10b9a736b;  */

undefined8 * FUN_10b9a7320(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    FUN_10b9a73c0(param_1);
  }
  else {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    *param_2 = 0;
    param_1[1] = uVar1;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return param_1;
}



/* Entry: 10b9a736c; end: 10b9a73bf;  */

void FUN_10b9a736c(void)

{
  long unaff_x19;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010b9a7484();
  func_0x00010b9a749c();
  FUN_10b99fa14(auStack_38,unaff_x19 + 0x18,auStack_40);
  func_0x0001090e1ddc(unaff_x19 + 0x18,auStack_38);
  func_0x00010b9a74dc();
  func_0x00010b9a747c();
  return;
}



/* Entry: 10b9a73c0; end: 10b9a73eb;  */

long FUN_10b9a73c0(long param_1,long param_2)

{
  func_0x0001090e1ddc();
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  return param_1;
}



/* Entry: 10b9a73ec; end: 10b9a7433;  */

undefined8 *
FUN_10b9a73ec(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  func_0x000107c27e5c();
  uVar1 = *param_4;
  uVar2 = param_4[1];
  *param_1 = uVar3;
  param_1[1] = 0;
  param_1[2] = param_3;
  param_1[3] = param_2;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 10b9a7434; end: 10b9a74e3;  */

void FUN_10b9a7434(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b9a74e4; end: 10b9a7507;  */

double FUN_10b9a74e4(long param_1)

{
  __ZNSt3__16chrono12steady_clock3nowEv();
  return (double)param_1 / 1000000000.0;
}



/* Entry: 10b9a7508; end: 10b9a7543;  */

double FUN_10b9a7508(double *param_1,double *param_2)

{
  return *param_1 - *param_2;
}



/* Entry: 10b9a7544; end: 10b9a75b3;  */

void FUN_10b9a7544(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uStack_40 = param_4;
  lStack_38 = param_5;
  uStack_30 = param_2;
  lStack_28 = param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
            (param_1,param_3 + param_5 + 1);
  func_0x0001073727b8(param_1,&uStack_30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc(param_1,1,0x2e);
  func_0x0001073727b8(param_1,&uStack_40);
  return;
}



/* Entry: 10b9a75b4; end: 10b9a762f;  */

undefined8 FUN_10b9a75b4(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined *puStack_30;
  ulong uStack_28;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    puStack_30 = &UNK_10f7d0ef0;
    uStack_28 = 0;
  }
  else {
    puStack_30 = (undefined *)(lVar1 + 0x18);
    uStack_28 = (ulong)*(uint *)(lVar1 + 0xc);
  }
  func_0x000107c27958(param_1,&puStack_30);
  func_0x00010b9a88d0();
  FUN_10b9a7630(param_1);
  return param_1;
}



/* Entry: 10b9a7630; end: 10b9a7673;  */

void FUN_10b9a7630(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10b9a77a8();
  if (*(char *)(lVar1 + 0x40) == '\x01') {
    __ZNSt3__16chrono12steady_clock3nowEv();
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
    *(long *)(param_1 + 0x28) = lVar1;
  }
  return;
}



/* Entry: 10b9a7674; end: 10b9a76d7;  */

undefined8 * FUN_10b9a7674(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  lVar2 = (long)*(char *)((long)param_1 + 0x17);
  puVar1 = param_1;
  if (lVar2 < 0) {
    lVar2 = param_1[1];
    puVar1 = (undefined8 *)*param_1;
  }
  func_0x00010b9a88d0(param_1,puVar1,lVar2);
  FUN_10b9a7630(param_1);
  return param_1;
}



/* Entry: 10b9a76d8; end: 10b9a77a7;  */

void FUN_10b9a76d8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 auStack_60 [3];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  puVar2 = auStack_60;
  if (*(char *)(param_1 + 0x30) != '\x01') goto LAB_10b9a778c;
  lVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_28 = 1;
  lStack_30 = lVar1;
  if (*(char *)(param_1 + 0x30) != '\x01') goto LAB_10b9a778c;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (*(char *)(param_1 + 0x17) < '\0') {
    if (*(long *)(param_1 + 8) == 0) goto LAB_10b9a7740;
LAB_10b9a7728:
    puVar2 = &uStack_48;
    func_0x000107c27b9c(puVar2,param_1);
  }
  else {
    if (*(char *)(param_1 + 0x17) != '\0') goto LAB_10b9a7728;
LAB_10b9a7740:
    func_0x000107c27958(auStack_60,param_1 + 0x18);
    func_0x000107c27b9c(&uStack_48,auStack_60);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  }
  FUN_10b9a77a8();
  param_1 = param_1 + 0x28;
  func_0x00010725d8e8(param_1);
  FUN_10b9a782c(puVar2,&uStack_48,param_1,&lStack_30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
LAB_10b9a778c:
  func_0x00010b9a890c();
  func_0x00010b9a8904();
  return;
}



/* Entry: 10b9a77a8; end: 10b9a782b;  */

undefined8 FUN_10b9a77a8(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((bRam0000000113846a08 & 1) == 0) {
    iVar1 = 0x13846a08;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uVar2 = 0x80;
      __Znwm();
      FUN_10b9a7a7c();
      uRam0000000113846a00 = uVar2;
      ___cxa_guard_release(0x113846a08);
    }
  }
  return uRam0000000113846a00;
}



/* Entry: 10b9a782c; end: 10b9a7a7b;  */

void FUN_10b9a782c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x19;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 auStack_88 [16];
  undefined8 *puStack_78;
  
  func_0x00010b9a891c();
  if (*(long *)(unaff_x19 + 0x68) != *(long *)(unaff_x19 + 0x70)) {
    func_0x00010b9a8938();
    uVar12 = (ulong)*(char *)((long)param_2 + 0x17);
    if (((((long)uVar12 < 0) && (uVar12 = param_2[1], 0x800 < uVar12)) ||
        (plVar11 = (long *)(unaff_x19 + 0x50),
        0x270 < (ulong)((*(long *)(unaff_x19 + 0x58) - *plVar11) / 0x38) >> 4)) ||
       (0x100000U - *param_1 < uVar12)) {
      plVar4 = (long *)param_1[1];
      plVar11 = (long *)param_1[2];
      if (plVar4 == plVar11) {
        lVar10 = *(long *)(unaff_x19 + 0x48);
      }
      else {
        lVar10 = *(long *)(unaff_x19 + 0x48);
        if (plVar11[-2] == lVar10) {
          plVar11[-1] = plVar11[-1] + 1;
          goto LAB_10b9a7a4c;
        }
      }
      if (plVar11 < (long *)param_1[3]) {
        *plVar11 = lVar10;
        plVar11[1] = 1;
        plVar11 = plVar11 + 2;
      }
      else {
        lVar9 = (long)plVar11 - (long)plVar4;
        uVar12 = (lVar9 >> 4) + 1;
        if (uVar12 >> 0x3c != 0) {
          FUN_10b9a85fc();
LAB_10b9a7a64:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b9a7a68);
          (*pcVar2)();
        }
        uVar6 = param_1[3] - (long)plVar4;
        uVar7 = (long)uVar6 >> 3;
        if (uVar7 <= uVar12) {
          uVar7 = uVar12;
        }
        if (0x7fffffffffffffef < uVar6) {
          uVar7 = 0xfffffffffffffff;
        }
        if (uVar7 >> 0x3c != 0) {
          func_0x000104bd35f4();
          goto LAB_10b9a7a64;
        }
        lVar3 = uVar7 << 4;
        __Znwm();
        plVar1 = (long *)(lVar3 + lVar9);
        *plVar1 = lVar10;
        plVar1[1] = 1;
        plVar11 = plVar1 + 2;
        _memcpy(plVar1 + (lVar9 >> 4) * -2,plVar4,lVar9);
        param_1[1] = (long)(plVar1 + (lVar9 >> 4) * -2);
        param_1[2] = (long)plVar11;
        param_1[3] = lVar3 + uVar7 * 0x10;
        if (plVar4 != (long *)0x0) {
          __ZdlPv(plVar4);
        }
      }
      param_1[2] = (long)plVar11;
    }
    else {
      FUN_10b99cacc();
      puVar5 = *(undefined8 **)(unaff_x19 + 0x58);
      if (puVar5 < *(undefined8 **)(unaff_x19 + 0x60)) {
        uVar13 = param_2[1];
        uVar8 = *param_2;
        puVar5[2] = param_2[2];
        puVar5[1] = uVar13;
        *puVar5 = uVar8;
        func_0x00010b9a88ac();
        lVar10 = extraout_x8 + 0x38;
      }
      else {
        plVar4 = plVar11;
        func_0x00010b9a8608(plVar11,((long)puVar5 - *plVar11) / 0x38 + 1);
        FUN_10b9a8744(auStack_88,plVar4,
                      (*(long *)(unaff_x19 + 0x58) - *(long *)(unaff_x19 + 0x50)) / 0x38,
                      (ulong *)(unaff_x19 + 0x60));
        uVar8 = param_2[2];
        uVar13 = *param_2;
        puStack_78[1] = param_2[1];
        *puStack_78 = uVar13;
        puStack_78[2] = uVar8;
        func_0x00010b9a88ac();
        puStack_78 = (undefined8 *)(extraout_x8_00 + 0x38);
        FUN_10b9a8668(plVar11,auStack_88);
        lVar10 = *(long *)(unaff_x19 + 0x58);
        func_0x00010b9a8914();
      }
      *(long *)(unaff_x19 + 0x58) = lVar10;
      *param_1 = *param_1 + uVar12;
    }
  }
LAB_10b9a7a4c:
  func_0x00010b9a886c();
  return;
}



/* Entry: 10b9a7a7c; end: 10b9a7b53;  */

undefined8 * FUN_10b9a7a7c(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 in_register_00005008;
  undefined8 uStack_40;
  
  *param_2 = 0x32aaaba7;
  puVar1 = param_2;
  func_0x00010b9a8960();
  *(undefined8 *)((long)puVar1 + 0x39) = in_register_00005008;
  *(undefined8 *)((long)puVar1 + 0x31) = param_1;
  puVar1[10] = in_register_00005008;
  puVar1[9] = param_1;
  puVar1[0xc] = in_register_00005008;
  puVar1[0xb] = param_1;
  puVar1[0xe] = in_register_00005008;
  puVar1[0xd] = param_1;
  puVar1[0xf] = 0;
  FUN_10b9a8030();
  __ZNSt3__15mutex4lockEv();
  func_0x00010b9a8924();
  puVar2 = puVar1 + 8;
  func_0x00010b9a8954(puVar2);
  func_0x00010b9a88e4();
  if ((param_3 & 1) == 0) {
    func_0x00010b9a8924();
    FUN_10b9a8554(puVar2 + 3,uStack_40);
    func_0x00010b9a88e4();
  }
  __ZNSt3__15mutex6unlockEv(puVar1);
  return param_2;
}



/* Entry: 10b9a7b54; end: 10b9a7c4f;  */

undefined8 FUN_10b9a7b54(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x19;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  
  FUN_10b9a8030();
  func_0x00010b9a891c();
  uVar8 = *(ulong *)(unaff_x19 + 0x48);
  if ((uVar8 != 0) && (*(long *)(unaff_x19 + 0x58) != 0)) {
    uVar2 = param_1;
    FUN_10b9a84d0();
    uVar3 = uVar8 - 1;
    if ((uVar8 & uVar3) == 0) {
      uVar4 = uVar2 & uVar3;
    }
    else {
      uVar4 = uVar2;
      if (uVar8 <= uVar2) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar2 / uVar8;
        }
        uVar4 = uVar2 - uVar4 * uVar8;
      }
    }
    plVar7 = *(long **)(*(long *)(unaff_x19 + 0x40) + uVar4 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_10b9a7c10;
          uVar5 = plVar7[1];
          if (uVar5 != uVar2) break;
          if (plVar7[2] == param_1) goto LAB_10b9a7c24;
        }
        if ((uVar8 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar8 <= uVar5) {
          uVar1 = 0;
          if (uVar8 != 0) {
            uVar1 = uVar5 / uVar8;
          }
          uVar5 = uVar5 - uVar1 * uVar8;
        }
      } while (uVar5 == uVar4);
    }
  }
LAB_10b9a7c10:
  func_0x00010b9a8924();
  plVar7 = (long *)(unaff_x19 + 0x40);
  func_0x00010b9a8954();
  func_0x00010b9a88e4();
LAB_10b9a7c24:
  uVar6 = *(undefined8 *)((long)plVar7 + 0x18);
  func_0x00010b9a886c();
  return uVar6;
}



/* Entry: 10b9a7c50; end: 10b9a7cab;  */

long FUN_10b9a7c50(void)

{
  long lVar1;
  long unaff_x19;
  long lStack_28;
  
  func_0x00010b9a891c();
  lStack_28 = *(long *)(unaff_x19 + 0x48) + 1;
  *(long *)(unaff_x19 + 0x48) = lStack_28;
  *(undefined1 *)(unaff_x19 + 0x40) = 1;
  func_0x000108ad54ec(unaff_x19 + 0x68,&lStack_28);
  lVar1 = lStack_28;
  func_0x00010b9a886c();
  return lVar1;
}



/* Entry: 10b9a7cac; end: 10b9a7cef;  */

void FUN_10b9a7cac(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  FUN_10b9a7cf0(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x00010b9a8594(&uStack_40);
  return;
}



/* Entry: 10b9a7cf0; end: 10b9a8027;  */

void FUN_10b9a7cf0(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  undefined1 auStack_88 [16];
  long lStack_78;
  
  puVar2 = param_2;
  __ZNSt3__15mutex4lockEv();
  puVar4 = (ulong *)param_2[0xd];
  puVar3 = (ulong *)param_2[0xe];
  lVar7 = (long)puVar3 - (long)puVar4;
  puVar12 = puVar4;
  while( true ) {
    lVar7 = lVar7 + -8;
    if (puVar12 == puVar3) goto LAB_10b9a7d50;
    if (*puVar12 == param_3) break;
    puVar12 = puVar12 + 1;
  }
  if (puVar12 + 1 != puVar3) {
    puVar2 = puVar12;
    _memmove(puVar12,puVar12 + 1,lVar7);
    puVar4 = (ulong *)param_2[0xd];
  }
  param_2[0xe] = (ulong)((long)puVar12 + lVar7);
  if (puVar4 == (ulong *)((long)puVar12 + lVar7)) {
    *(undefined1 *)(param_2 + 8) = 0;
    func_0x00010b9a8938();
    *puVar2 = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    FUN_10b8f696c(param_1,param_2 + 10);
    puVar4 = (ulong *)puVar2[2];
    uVar5 = param_1[3];
    for (puVar12 = (ulong *)puVar2[1]; puVar12 != puVar4; puVar12 = puVar12 + 2) {
      if (param_3 <= *puVar12) {
        uVar5 = puVar12[1] + uVar5;
        param_1[3] = uVar5;
      }
    }
    FUN_10b9a8028(param_2 + 10);
    puVar2[2] = puVar2[1];
  }
  else {
    puVar12 = (ulong *)0x0;
    puVar4 = param_1 + 2;
    param_1[3] = 0;
    *puVar4 = 0;
    param_1[1] = 0;
    *param_1 = 0;
    uVar10 = param_2[0xb];
    for (uVar5 = param_2[10]; uVar5 != uVar10; uVar5 = uVar5 + 0x38) {
      if (param_3 <= *(ulong *)(uVar5 + 0x30)) {
        if (puVar12 < (ulong *)*puVar4) {
          puVar2 = puVar12;
          func_0x00010b9a8840(puVar12,uVar5);
          puVar12 = puVar12 + 7;
        }
        else {
          puVar3 = param_1;
          func_0x00010b9a8608(param_1,(long)((long)puVar12 - *param_1) / 0x38 + 1);
          FUN_10b9a8744(auStack_88,puVar3,(long)(param_1[1] - *param_1) / 0x38,puVar4);
          func_0x00010b9a8840(lStack_78,uVar5);
          lStack_78 = lStack_78 + 0x38;
          puVar2 = param_1;
          FUN_10b9a8668(param_1,auStack_88);
          puVar12 = (ulong *)param_1[1];
          func_0x00010b9a8914();
        }
        param_1[1] = (ulong)puVar12;
      }
    }
    func_0x00010b9a8938();
    puVar3 = (ulong *)puVar2[2];
    uVar5 = param_1[3];
    puVar4 = (ulong *)puVar2[1];
    for (puVar12 = puVar4; puVar12 != puVar3; puVar12 = puVar12 + 2) {
      if (param_3 <= *puVar12) {
        uVar5 = puVar12[1] + uVar5;
        param_1[3] = uVar5;
      }
    }
    uVar5 = *(ulong *)param_2[0xd];
    if (uVar5 <= param_3) goto LAB_10b9a7fe0;
    uVar1 = param_2[0xb];
    uVar8 = param_2[10];
    for (uVar10 = uVar8;
        (uVar6 = uVar8, uVar11 = uVar1, uVar10 != uVar1 &&
        (uVar11 = uVar10, *(ulong *)(uVar10 + 0x30) < uVar5)); uVar10 = uVar10 + 0x38) {
    }
    for (; uVar6 != uVar11; uVar6 = uVar6 + 0x38) {
      lVar7 = (long)*(char *)(uVar6 + 0x17);
      if (lVar7 < 0) {
        lVar7 = *(long *)(uVar6 + 8);
      }
      *puVar2 = *puVar2 - lVar7;
    }
    if (uVar8 != uVar11) {
      for (; uVar11 != uVar1; uVar11 = uVar11 + 0x38) {
        func_0x00010b8f74a8(uVar8,uVar11);
        uVar8 = uVar8 + 0x38;
      }
      func_0x00010b9a8808(param_2 + 10,uVar8);
      puVar4 = (ulong *)puVar2[1];
      puVar3 = (ulong *)puVar2[2];
    }
    for (lVar7 = 0; (ulong *)((long)puVar4 + lVar7) != puVar3; lVar7 = lVar7 + 0x10) {
      if (uVar5 <= *(ulong *)((long)puVar4 + lVar7)) {
        if (lVar7 == 0) goto LAB_10b9a7fe0;
        lVar9 = (long)puVar3 + (-lVar7 - (long)puVar4);
        _memmove(puVar4,(long)puVar4 + lVar7,lVar9);
        goto LAB_10b9a7fd8;
      }
    }
    if (lVar7 == 0) goto LAB_10b9a7fe0;
    lVar9 = (long)puVar3 + (-lVar7 - (long)puVar4);
LAB_10b9a7fd8:
    puVar2[2] = (long)puVar4 + lVar9;
  }
LAB_10b9a7fe0:
  func_0x00010b9a886c();
  return;
LAB_10b9a7d50:
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  goto LAB_10b9a7fe0;
}



/* Entry: 10b9a8028; end: 10b9a802f;  */

void FUN_10b9a8028(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x38;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10b9a8030; end: 10b9a80bf;  */

undefined8 * FUN_10b9a8030(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 in_register_00005008;
  
  if ((bRam0000000113846a18 & 1) == 0) {
    iVar1 = 0x13846a18;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x68;
      __Znwm();
      *puVar2 = 0x32aaaba7;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      func_0x00010b9a8960();
      puVar2[8] = in_register_00005008;
      puVar2[7] = param_1;
      puVar2[10] = in_register_00005008;
      puVar2[9] = param_1;
      *(undefined4 *)(puVar2 + 0xc) = 0x3f800000;
      puRam0000000113846a10 = puVar2;
      ___cxa_guard_release(0x113846a18);
    }
  }
  return puRam0000000113846a10;
}



/* Entry: 10b9a80c0; end: 10b9a847f;  */

undefined1  [16] FUN_10b9a80c0(long *param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x25;
  ulong uVar14;
  undefined1 auVar15 [16];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  uVar3 = *param_2;
  FUN_10b9a84d0();
  uVar13 = param_1[1];
  if (uVar13 == 0) {
    uVar14 = *param_2;
  }
  else {
    uVar5 = uVar13 - 1;
    if ((uVar13 & uVar5) == 0) {
      unaff_x25 = uVar5 & uVar3;
    }
    else {
      unaff_x25 = uVar3;
      if (uVar13 <= uVar3) {
        uVar14 = 0;
        if (uVar13 != 0) {
          uVar14 = uVar3 / uVar13;
        }
        unaff_x25 = uVar3 - uVar14 * uVar13;
      }
    }
    plVar12 = *(long **)(*param_1 + unaff_x25 * 8);
    uVar14 = *param_2;
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_10b9a8188;
          uVar7 = plVar12[1];
          if (uVar7 != uVar3) break;
          if (plVar12[2] == uVar14) {
            uVar4 = 0;
            goto LAB_10b9a8448;
          }
        }
        if ((uVar13 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar13 <= uVar7) {
          uVar10 = 0;
          if (uVar13 != 0) {
            uVar10 = uVar7 / uVar13;
          }
          uVar7 = uVar7 - uVar10 * uVar13;
        }
      } while (uVar7 == unaff_x25);
    }
  }
LAB_10b9a8188:
  plVar1 = param_1 + 2;
  plVar12 = (long *)0x20;
  __Znwm();
  uStack_58 = 1;
  *plVar12 = 0;
  plVar12[1] = uVar3;
  lVar6 = *param_3;
  *param_3 = 0;
  plVar12[2] = uVar14;
  plVar12[3] = lVar6;
  plStack_60 = plVar1;
  if ((uVar13 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar13))
  goto LAB_10b9a83cc;
  uVar14 = 1;
  if (2 < uVar13) {
    uVar14 = (ulong)((uVar13 & uVar13 - 1) != 0);
  }
  uVar14 = uVar14 | uVar13 << 1;
  uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar14 <= uVar5) {
    uVar14 = uVar5;
  }
  plStack_68 = plVar12;
  if (uVar14 - 1 == 0) {
    uVar14 = 2;
  }
  else if ((uVar14 & uVar14 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar13 = param_1[1];
  }
  if (uVar13 < uVar14) {
LAB_10b9a8238:
    if (uVar14 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b9a8470);
      (*pcVar2)();
    }
    lVar6 = uVar14 << 3;
    __Znwm(lVar6);
    FUN_10b9a853c(param_1,lVar6);
    param_1[1] = uVar14;
    lVar6 = *param_1;
    for (uVar13 = 0; uVar14 != uVar13; uVar13 = uVar13 + 1) {
      *(undefined8 *)(lVar6 + uVar13 * 8) = 0;
    }
    plVar8 = (long *)*plVar1;
    uVar13 = uVar14;
    if (plVar8 != (long *)0x0) {
      uVar10 = plVar8[1];
      uVar7 = uVar14 - 1;
      uVar5 = 0;
      if (uVar14 != 0) {
        uVar5 = uVar10 / uVar14;
      }
      uVar11 = uVar10;
      if (uVar14 <= uVar10) {
        uVar11 = uVar10 - uVar5 * uVar14;
      }
      if ((uVar14 & uVar7) == 0) {
        uVar11 = uVar10 & uVar7;
      }
      *(long **)(lVar6 + uVar11 * 8) = plVar1;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar5 = plVar8[1];
        if ((uVar14 & uVar7) == 0) {
          uVar5 = uVar5 & uVar7;
        }
        else if (uVar14 <= uVar5) {
          uVar10 = 0;
          if (uVar14 != 0) {
            uVar10 = uVar5 / uVar14;
          }
          uVar5 = uVar5 - uVar10 * uVar14;
        }
        if (uVar5 != uVar11) {
          if (*(long *)(lVar6 + uVar5 * 8) == 0) {
            *(long **)(lVar6 + uVar5 * 8) = plVar9;
            uVar11 = uVar5;
          }
          else {
            *plVar9 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar6 + uVar5 * 8);
            **(long **)(lVar6 + uVar5 * 8) = (long)plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  else if (uVar14 < uVar13) {
    uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar13 < 3) || ((uVar13 & uVar13 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar5) {
      uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
    }
    if (uVar14 <= uVar5) {
      uVar14 = uVar5;
    }
    if (uVar14 < uVar13) {
      if (uVar14 != 0) goto LAB_10b9a8238;
      FUN_10b9a853c(param_1,0);
      param_1[1] = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = param_1[1];
    }
  }
  if ((uVar13 & uVar13 - 1) == 0) {
    unaff_x25 = uVar13 - 1 & uVar3;
  }
  else {
    unaff_x25 = uVar3;
    if (uVar13 <= uVar3) {
      uVar14 = 0;
      if (uVar13 != 0) {
        uVar14 = uVar3 / uVar13;
      }
      unaff_x25 = uVar3 - uVar14 * uVar13;
    }
  }
LAB_10b9a83cc:
  lVar6 = *param_1;
  plVar8 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar12 = *plVar1;
    *plVar1 = (long)plVar12;
    *(long **)(lVar6 + unaff_x25 * 8) = plVar1;
    if (*plVar12 != 0) {
      uVar3 = *(ulong *)(*plVar12 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar3 = uVar3 & uVar13 - 1;
      }
      else if (uVar13 <= uVar3) {
        uVar14 = 0;
        if (uVar13 != 0) {
          uVar14 = uVar3 / uVar13;
        }
        uVar3 = uVar3 - uVar14 * uVar13;
      }
      *(long **)(lVar6 + uVar3 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar8;
    *plVar8 = (long)plVar12;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10b9a84f8(&plStack_68);
  uVar4 = 1;
LAB_10b9a8448:
  auVar15._8_8_ = uVar4;
  auVar15._0_8_ = plVar12;
  return auVar15;
}



/* Entry: 10b9a8480; end: 10b9a84cf;  */

void FUN_10b9a8480(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 10b9a84d0; end: 10b9a84f7;  */

void FUN_10b9a84d0(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000107c278cc(&uStack_18,8);
  return;
}



/* Entry: 10b9a84f8; end: 10b9a853b;  */

long * FUN_10b9a84f8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010b9a84ac(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b9a853c; end: 10b9a8553;  */

void FUN_10b9a853c(long *param_1,long param_2)

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



/* Entry: 10b9a8554; end: 10b9a85fb;  */

void FUN_10b9a8554(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 8) != 0) {
      *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 8);
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b9a85fc; end: 10b9a8667;  */

undefined8 * FUN_10b9a85fc(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  func_0x00010b9a8948();
  if (param_2 < (undefined8 *)0x492492492492493) {
    uVar2 = (param_1[2] - *param_1) / 0x38;
    puVar6 = (undefined8 *)(uVar2 * 2);
    if (puVar6 < param_2 || (long)puVar6 - (long)param_2 == 0) {
      puVar6 = param_2;
    }
    if (0x249249249249248 < uVar2) {
      puVar6 = (undefined8 *)0x492492492492492;
    }
    return puVar6;
  }
  FUN_10b9a8738();
  puVar3 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar7 = (undefined8 *)(param_2[1] + (((long)puVar1 - (long)puVar3) / -0x38) * 0x38);
  puVar4 = puVar7;
  for (puVar6 = puVar3; puVar6 != puVar1; puVar6 = puVar6 + 7) {
    uVar9 = puVar6[1];
    uVar8 = *puVar6;
    puVar4[2] = puVar6[2];
    puVar4[1] = uVar9;
    *puVar4 = uVar8;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    uVar9 = puVar6[4];
    uVar8 = puVar6[3];
    uVar10 = puVar6[5];
    puVar4[6] = puVar6[6];
    puVar4[5] = uVar10;
    puVar4[4] = uVar9;
    puVar4[3] = uVar8;
    puVar4 = puVar4 + 7;
  }
  for (; puVar3 != puVar1; puVar3 = puVar3 + 7) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  param_2[1] = puVar7;
  lVar5 = *param_1;
  *param_1 = (long)puVar7;
  param_1[1] = lVar5;
  param_2[1] = lVar5;
  lVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return puVar3;
}



/* Entry: 10b9a8668; end: 10b9a8737;  */

void FUN_10b9a8668(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)(param_2[1] + (((long)puVar1 - (long)puVar2) / -0x38) * 0x38);
  puVar3 = puVar6;
  for (puVar5 = puVar2; puVar5 != puVar1; puVar5 = puVar5 + 7) {
    uVar8 = puVar5[1];
    uVar7 = *puVar5;
    puVar3[2] = puVar5[2];
    puVar3[1] = uVar8;
    *puVar3 = uVar7;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    uVar8 = puVar5[4];
    uVar7 = puVar5[3];
    uVar9 = puVar5[5];
    puVar3[6] = puVar5[6];
    puVar3[5] = uVar9;
    puVar3[4] = uVar8;
    puVar3[3] = uVar7;
    puVar3 = puVar3 + 7;
  }
  for (; puVar2 != puVar1; puVar2 = puVar2 + 7) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  param_2[1] = puVar6;
  lVar4 = *param_1;
  *param_1 = (long)puVar6;
  param_1[1] = lVar4;
  param_2[1] = lVar4;
  lVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10b9a8738; end: 10b9a8743;  */

long * FUN_10b9a8738(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x00010b9a8948();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (0x492492492492492 < param_2) {
      func_0x000104bd35f4();
      lVar2 = param_1[1];
      while (lVar2 != param_1[2]) {
        param_1[2] = param_1[2] + -0x38;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar2 = param_2 * 0x38;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 0x38;
  *param_1 = lVar2;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = lVar2 + param_2 * 0x38;
  return param_1;
}



/* Entry: 10b9a8744; end: 10b9a87bf;  */

long * FUN_10b9a8744(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (0x492492492492492 < param_2) {
      func_0x000104bd35f4();
      lVar2 = param_1[1];
      while (lVar2 != param_1[2]) {
        param_1[2] = param_1[2] + -0x38;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar2 = param_2 * 0x38;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 0x38;
  *param_1 = lVar2;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = lVar2 + param_2 * 0x38;
  return param_1;
}



/* Entry: 10b9a87c0; end: 10b9a886b;  */

long * FUN_10b9a87c0(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x38;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b9a886c; end: 10b9a8973;  */

void FUN_10b9a886c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 10b9a8974; end: 10b9a8a6f;  */

long FUN_10b9a8974(long *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = param_1;
  func_0x00010b9a8b9c();
  *param_1 = *plVar1;
  param_1[1] = param_2;
  *(undefined2 *)(param_1 + 2) = 1;
  *plVar1 = (long)param_1;
  __ZNSt3__115recursive_mutex4lockEv(param_2);
  return (long)param_1;
}



/* Entry: 10b9a8a70; end: 10b9a8ad7;  */

void FUN_10b9a8a70(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex4lockEv_110346578)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10b9a8ad8; end: 10b9a8b3f;  */

long * FUN_10b9a8ad8(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  func_0x00010b9a8b9c();
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    func_0x00010b9a8aa8(plVar1);
  }
  return param_1;
}



/* Entry: 10b9a8b40; end: 10b9a8b6b;  */

undefined8 * FUN_10b9a8b40(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010b9a8b9c();
  func_0x00010b9a8b10(*puVar1);
  return param_1;
}



/* Entry: 10b9a8b6c; end: 10b9a8bb3;  */

undefined4 FUN_10b9a8b6c(long *param_1,double *param_2)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)*param_1;
  dVar3 = *param_2 * 1000.0;
  uVar1 = 0;
  if (dVar3 != dVar2) {
    uVar1 = 0xffffff81;
  }
  if (dVar3 < dVar2) {
    uVar1 = 1;
  }
  if (dVar2 < dVar3) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 10b9a8bb4; end: 10b9a8cb3;  */

undefined8 * FUN_10b9a8bb4(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar5 = 0;
  *param_1 = 0;
  lVar6 = *param_2;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar7 = param_1 + 2;
  *puVar7 = 0;
  param_1[1] = lVar6;
  puStack_40 = &UNK_10f7d0fc4;
  uStack_38 = 3;
  plVar4 = param_2;
  func_0x00010b9a5f80(param_2);
  if ((uVar5 & 1) == 0) {
    plVar4 = param_2;
    FUN_10b9a60f4(param_2,&UNK_10f7d0fc8);
    if ((int)plVar4 != 0) {
      FUN_10b9a6488(&puStack_40,param_2,0,4);
      FUN_10b9a8ce4();
      func_0x00010b9a8cf0();
    }
    func_0x000107c31068(puVar7,param_2);
  }
  else {
    FUN_10b9a6488(&puStack_40,param_2,0,plVar4);
    FUN_10b9a8ce4();
    func_0x00010b9a8cf0();
    FUN_10b9a6470(&puStack_40,param_2,(long)plVar4 + 3);
    func_0x000107c31060(puVar7,&puStack_40);
    func_0x00010b9a8cf0();
  }
  return param_1;
}



/* Entry: 10b9a8cb4; end: 10b9a8ce3;  */

/* WARNING: Possible PIC construction at 0x00010b9a8cc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b9a8ccc) */

long FUN_10b9a8cb4(long param_1)

{
  func_0x00010007e5d0(param_1 + 0x10);
  func_0x0001003a8cb8();
  return param_1;
}



/* Entry: 10b9a8ce4; end: 10b9a8cf7;  */

void FUN_10b9a8ce4(void)

{
  undefined1 *unaff_x19;
  
  if (unaff_x19 != &stack0x00000000) {
    func_0x00010090c190();
  }
  return;
}



/* Entry: 10b9a8cf8; end: 10b9a8d83;  */

void FUN_10b9a8cf8(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 auStack_68 [24];
  long *plStack_50;
  undefined *puStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  plVar1 = param_2;
  func_0x000107c31084();
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x20))();
  puStack_48 = &UNK_1003ab990;
  uStack_38 = 0;
  plStack_50 = plVar2;
  plStack_40 = param_2;
  func_0x000107c2793c(&UNK_10f42b3a9);
  func_0x000107c3173c(auStack_68);
  func_0x000107c31080(param_1,plVar1,auStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  return;
}



/* Entry: 10b9a8d84; end: 10b9a8d97;  */

void FUN_10b9a8d84(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  
  puVar1 = (&PTR_DAT_110d7ec40)[param_2 & 0xffffffff];
  func_0x00010002b82c(param_1,puVar1);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 10b9a8d98; end: 10b9a8dd3;  */

long * FUN_10b9a8d98(long *param_1)

{
  undefined1 in_ZR;
  
  func_0x00010b9abca8();
  if (((bool)in_ZR) && ((long *)*param_1 != (long *)0x0)) {
    (**(code **)(*(long *)*param_1 + 0x18))();
  }
  return param_1;
}



/* Entry: 10b9a8dd4; end: 10b9a8e17;  */

undefined8 FUN_10b9a8dd4(undefined8 param_1)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c31084();
  func_0x00010b9abb54();
  FUN_10b9a8e18(param_1,auStack_38);
  func_0x00010b9aba84();
  return param_1;
}



/* Entry: 10b9a8e18; end: 10b9a8e3f;  */

void FUN_10b9a8e18(long param_1,undefined8 *param_2)

{
  FUN_10b9a8e40(param_1,*param_2,2);
  *(undefined1 *)(param_1 + 8) = 2;
  return;
}



/* Entry: 10b9a8e40; end: 10b9a8e8f;  */

long * FUN_10b9a8e40(long *param_1,long *param_2,undefined1 param_3)

{
  *(undefined2 *)(param_1 + 1) = 0;
  if (param_2 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    *param_1 = (long)param_2;
    *(undefined1 *)(param_1 + 1) = param_3;
    *(undefined1 *)((long)param_1 + 9) = 1;
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  return param_1;
}



/* Entry: 10b9a8e90; end: 10b9a8e9b;  */

long * FUN_10b9a8e90(long *param_1,long *param_2)

{
  param_2 = (long *)*param_2;
  *(undefined2 *)(param_1 + 1) = 0;
  if (param_2 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    *param_1 = (long)param_2;
    *(undefined1 *)(param_1 + 1) = 0xc;
    *(undefined1 *)((long)param_1 + 9) = 1;
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  return param_1;
}



/* Entry: 10b9a8e9c; end: 10b9a8ef7;  */

void FUN_10b9a8e9c(undefined8 param_1)

{
  undefined1 auStack_38 [8];
  
  func_0x00010b9abb94();
  func_0x000107c31084();
  _strlen();
  func_0x000107c31078(auStack_38,param_1,&stack0xffffffffffffffb8);
  FUN_10b9a8e18();
  func_0x00010b9abab0();
  return;
}



/* Entry: 10b9a8ef8; end: 10b9a8f03;  */

long * FUN_10b9a8ef8(long *param_1,long *param_2)

{
  param_2 = (long *)*param_2;
  *(undefined2 *)(param_1 + 1) = 0;
  if (param_2 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    *param_1 = (long)param_2;
    *(undefined1 *)(param_1 + 1) = 0xb;
    *(undefined1 *)((long)param_1 + 9) = 1;
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  return param_1;
}



/* Entry: 10b9a8f04; end: 10b9a8f53;  */

long * FUN_10b9a8f04(long *param_1,long *param_2)

{
  char cVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_2;
  *param_1 = (long)plVar2;
  *(char *)(param_1 + 1) = (char)param_2[1];
  cVar1 = *(char *)((long)param_2 + 9);
  *(char *)((long)param_1 + 9) = cVar1;
  if (cVar1 == '\x01' && plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  return param_1;
}



/* Entry: 10b9a8f54; end: 10b9a8fc3;  */

long * FUN_10b9a8f54(long *param_1,long *param_2)

{
  param_2 = (long *)*param_2;
  *(undefined2 *)(param_1 + 1) = 0;
  if (param_2 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    *param_1 = (long)param_2;
    *(undefined1 *)(param_1 + 1) = 8;
    *(undefined1 *)((long)param_1 + 9) = 1;
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  return param_1;
}



/* Entry: 10b9a8fc4; end: 10b9a901f;  */

undefined8 FUN_10b9a8fc4(void)

{
  int iVar1;
  
  if ((bRam0000000113846a30 & 1) == 0) {
    iVar1 = 0x13846a30;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113846a28 = 1;
      uRam0000000113846a20 = 0;
      ___cxa_guard_release(0x113846a30);
    }
  }
  return 0x113846a20;
}



/* Entry: 10b9a9020; end: 10b9a9083;  */

long * FUN_10b9a9020(long *param_1,long *param_2)

{
  if (param_1 != param_2) {
    if ((*(char *)((long)param_1 + 9) == '\x01') && ((long *)*param_1 != (long *)0x0)) {
      (**(code **)(*(long *)*param_1 + 0x18))();
    }
    *param_1 = *param_2;
    *(short *)(param_1 + 1) = (short)param_2[1];
    *param_2 = 0;
    *(undefined2 *)(param_2 + 1) = 0;
  }
  return param_1;
}



/* Entry: 10b9a9084; end: 10b9a90ff;  */

long * FUN_10b9a9084(long *param_1,long *param_2)

{
  char cVar1;
  long *plVar2;
  
  if (param_1 != param_2) {
    if ((*(char *)((long)param_1 + 9) == '\x01') && ((long *)*param_1 != (long *)0x0)) {
      (**(code **)(*(long *)*param_1 + 0x18))();
    }
    plVar2 = (long *)*param_2;
    *param_1 = (long)plVar2;
    *(char *)(param_1 + 1) = (char)param_2[1];
    cVar1 = *(char *)((long)param_2 + 9);
    *(char *)((long)param_1 + 9) = cVar1;
    if (cVar1 == '\x01' && plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10b9a9100; end: 10b9a92ef;  */

double * FUN_10b9a9100(double param_1,double *param_2,double *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  double *pdVar5;
  uint uVar6;
  uint extraout_w8;
  double dVar7;
  uint uVar8;
  double *pdVar9;
  double *pdVar10;
  double unaff_d8;
  double in_stack_ffffffffffffffc0;
  double in_stack_ffffffffffffffc8;
  
  if (param_2 == param_3) {
LAB_10b9a92ac:
    return (double *)0x1;
  }
  bVar1 = *(byte *)(param_2 + 1);
  bVar2 = *(byte *)(param_3 + 1);
  if (bVar1 != bVar2) {
    if ((bVar1 & 0xfc) != 4 || (bVar2 & 0xfc) != 4) {
      if ((bVar1 & 0xfe) != 2 || (bVar2 & 0xfe) != 2) {
        return (double *)0x0;
      }
      func_0x00010b9abb10();
      func_0x00010b9abba0();
      FUN_10b9a9358();
      goto LAB_10b9a9234;
    }
    FUN_10b9a92f0();
    func_0x00010b9abc34();
    bVar4 = unaff_d8 == param_1;
    goto LAB_10b9a92a8;
  }
  switch(bVar1) {
  case 2:
    func_0x00010b9abb10();
    func_0x00010b9abba0();
    FUN_10b9a9358();
LAB_10b9a9234:
    func_0x000107c278f4(&stack0xffffffffffffffc0);
    func_0x00010b9aba84();
    return (double *)(ulong)(in_stack_ffffffffffffffc8 == in_stack_ffffffffffffffc0);
  case 3:
    func_0x00010b9abc9c();
    if (param_2 == param_3) {
      uVar6 = 1;
    }
    else {
      uVar8 = *(uint *)(param_2 + 3);
      if (uVar8 == 2) {
        if (*(uint *)(param_3 + 3) == 2) {
          iVar3 = (int)&stack0xffffffffffffffe0;
          if (param_2[2] == param_3[2]) {
            FUN_10b9a5d34(&stack0xffffffffffffffe0,param_3 + 4,param_3[2]);
            pdVar10 = (double *)(ulong)(iVar3 == 0);
          }
          else {
            pdVar10 = (double *)0x0;
          }
          return pdVar10;
        }
      }
      else if (uVar8 == 1) {
        if (*(uint *)(param_3 + 3) == 1) {
          iVar3 = (int)&stack0xffffffffffffffe0;
          if (param_2[2] == param_3[2]) {
            func_0x000107409a14(&stack0xffffffffffffffe0,param_3 + 4,param_3[2]);
            pdVar10 = (double *)(ulong)(iVar3 == 0);
          }
          else {
            pdVar10 = (double *)0x0;
          }
          return pdVar10;
        }
      }
      else {
        uVar6 = extraout_w8;
        if (uVar8 != 0) goto code_r0x00010b9a5ac4;
        if (*(uint *)(param_3 + 3) == 0) {
          iVar3 = (int)&stack0xffffffffffffffe0;
          if (param_2[2] == param_3[2]) {
            func_0x000100067218(&stack0xffffffffffffffe0,param_3 + 4,param_3[2]);
            pdVar10 = (double *)(ulong)(iVar3 == 0);
          }
          else {
            pdVar10 = (double *)0x0;
          }
          return pdVar10;
        }
      }
      uVar6 = 0;
    }
code_r0x00010b9a5ac4:
    return (double *)(ulong)(uVar6 & 1);
  case 4:
    uVar6 = *(uint *)param_2;
    uVar8 = *(uint *)param_3;
    goto code_r0x00010b9a9220;
  case 5:
  case 0xb:
  case 0xe:
    bVar4 = *param_2 == *param_3;
    goto LAB_10b9a92a8;
  case 6:
    bVar4 = false;
    if (!NAN(*param_2) && !NAN(*param_3)) {
      bVar4 = *param_2 == *param_3;
    }
    goto LAB_10b9a92a8;
  case 7:
    uVar6 = (uint)*(byte *)param_2;
    uVar8 = (uint)*(byte *)param_3;
code_r0x00010b9a9220:
    bVar4 = uVar6 == uVar8;
LAB_10b9a92a8:
    param_2 = (double *)(ulong)bVar4;
    break;
  case 8:
    param_2 = (double *)((long)*param_2 + 0x10);
    FUN_10b8bf9cc(param_2,(long)*param_3 + 0x10);
    break;
  case 9:
    func_0x00010b9abc9c();
    if (param_3 == param_2) {
      pdVar10 = (double *)0x1;
    }
    else {
      dVar7 = param_2[2];
      if (dVar7 == param_3[2]) {
        param_3 = param_3 + 3;
        pdVar9 = param_2 + 3;
        while ((bVar4 = pdVar9 == param_2 + 3 + (long)dVar7 * 2, pdVar10 = (double *)(ulong)bVar4,
               !bVar4 && (pdVar5 = pdVar9, FUN_10b9a9500(pdVar9,param_3), ((ulong)pdVar5 & 1) == 0))
              ) {
          pdVar9 = pdVar9 + 2;
          param_3 = param_3 + 2;
          dVar7 = param_2[2];
        }
      }
      else {
        pdVar10 = (double *)0x0;
      }
    }
    return pdVar10;
  case 10:
    func_0x00010b9abc9c();
    FUN_10b9ac6d4();
    break;
  case 0xc:
    FUN_10b9a9488(&stack0xffffffffffffffc8);
    func_0x00010b9abba0();
    FUN_10b9a9488();
    param_2 = (double *)&stack0xffffffffffffffc8;
    FUN_10b99fd60(param_2,&stack0xffffffffffffffc0);
    func_0x00010b9abc24();
    func_0x00010b9aba44();
    break;
  case 0xd:
    func_0x00010b9abc9c();
    FUN_10b9acc2c();
    break;
  case 0xf:
    FUN_10b9a94ec(&stack0xffffffffffffffc8);
    func_0x00010b9abba0();
    FUN_10b9a94ec();
    param_2 = (double *)(ulong)(in_stack_ffffffffffffffc8 == in_stack_ffffffffffffffc0);
    func_0x000104bddedc(&stack0xffffffffffffffc0);
    func_0x000104bddedc(&stack0xffffffffffffffc8);
    break;
  default:
    goto LAB_10b9a92ac;
  }
  return param_2;
}



/* Entry: 10b9a92f0; end: 10b9a9357;  */

double FUN_10b9a92f0(double param_1,double *param_2)

{
  if (*(byte *)(param_2 + 1) - 2 < 2) {
    func_0x00010b9abb10();
    func_0x00010b9aba4c();
    _atof();
    func_0x00010b9aba84();
  }
  else if (*(byte *)(param_2 + 1) == 6) {
    param_1 = *param_2;
  }
  else {
    FUN_10b9a9588();
    param_1 = (double)(long)param_2;
  }
  return param_1;
}



/* Entry: 10b9a9358; end: 10b9a9487;  */

void FUN_10b9a9358(long *param_1,long *param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  long **pplVar6;
  long **pplVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uStack_50;
  long *plStack_48;
  long *plStack_40;
  long lStack_38;
  
  if ((char)param_2[1] != '\x03') {
    if ((char)param_2[1] == '\x02') {
      lVar8 = *param_2;
      if (lVar8 != 0) {
        piVar1 = (int *)(lVar8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *param_1 = lVar8;
      lStack_38 = 0;
      func_0x00010b9abab0();
      return;
    }
LAB_10b9a93f4:
    plVar10 = param_2;
    func_0x000107c31084();
    FUN_10b9a9894(&uStack_50,param_2);
    func_0x000107c31080(param_1,plVar10,&uStack_50);
    func_0x00010b9abc2c();
    return;
  }
  plVar10 = (long *)*param_2;
  iVar2 = (int)plVar10[3];
  uVar5 = iVar2 == 2;
  if ((bool)uVar5) {
    FUN_10b9a5b88();
    param_2 = plVar10;
    func_0x000107c31084();
  }
  else {
    uVar5 = iVar2 == 1;
    if ((bool)uVar5) {
      func_0x000107c31084();
      param_3 = plVar10[2];
      plVar10 = plVar10 + 4;
      FUN_10b9972a0();
    }
    else {
      if (iVar2 != 0) goto LAB_10b9a93f4;
      func_0x000107c31084();
      param_3 = plVar10[2];
      plVar10 = plVar10 + 4;
    }
  }
  if (param_3 == 0) {
    *param_1 = 0;
    return;
  }
  pplVar6 = &plStack_40;
  plStack_40 = plVar10;
  lStack_38 = param_3;
  func_0x0001003a8464(pplVar6);
  func_0x000107c60d88(param_2 + 6);
  pplVar7 = &plStack_40;
  func_0x0001003a857c(param_2,pplVar7,pplVar6);
  func_0x0001003a8718();
  if (!(bool)uVar5) {
    plVar9 = *pplVar7;
    plVar10 = plVar9 + 1;
    do {
      lVar8 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)lVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar8 == 0) {
      *(int *)plVar10 = 0;
      plStack_48 = (long *)0x0;
    }
    else {
      plStack_48 = plVar9;
      if (plVar9 != (long *)0x0) {
        uStack_50 = 0;
        plStack_48 = (long *)0x0;
        *param_1 = (long)plVar9;
        func_0x0001003a8c94(&uStack_50);
        func_0x0001003a8c94(&plStack_48);
        goto code_r0x0001003a8544;
      }
    }
    func_0x0001003aca48();
    func_0x0001003a8c94(&plStack_48);
  }
  func_0x0001003a87ec(param_1,param_2,plStack_40,lStack_38,pplVar6);
code_r0x0001003a8544:
  func_0x0001003a8cc4();
  return;
}



/* Entry: 10b9a9488; end: 10b9a94eb;  */

void FUN_10b9a9488(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if ((char)param_2[1] != '\f') {
    *param_1 = 0;
    return;
  }
  if (*(char *)((long)param_2 + 9) == '\x01') {
    lVar4 = *param_2;
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
  }
  else {
    lVar4 = 0;
  }
  *param_1 = lVar4;
  func_0x00010b9aba44();
  return;
}



/* Entry: 10b9a94ec; end: 10b9a94ff;  */

void FUN_10b9a94ec(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = *(char *)(param_2 + 1) == '\x0f';
  if (bVar1) {
    func_0x00010b9abca8();
    if (bVar1) {
      uVar2 = *param_2;
      func_0x00010b8c3bfc();
    }
    else {
      uVar2 = 0;
    }
    *param_1 = uVar2;
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10b9a9500; end: 10b9a9517;  */

uint FUN_10b9a9500(uint param_1)

{
  FUN_10b9a9100();
  return param_1 ^ 1;
}



/* Entry: 10b9a9518; end: 10b9a9587;  */

undefined8 FUN_10b9a9518(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  
  func_0x00010b9abb74();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b9a9544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5fd6b2)[extraout_x8] * 4 + 0x10b9a9548))();
    return param_1;
  }
  return 0;
}



/* Entry: 10b9a9588; end: 10b9a9607;  */

undefined8 FUN_10b9a9588(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  
  func_0x00010b9abb74();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b9a95b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5fd6b8)[extraout_x8] * 4 + 0x10b9a95b8))();
    return param_1;
  }
  return 0;
}



/* Entry: 10b9a9608; end: 10b9a96cf;  */

undefined8 FUN_10b9a9608(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  
  func_0x00010b9abb74();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b9a9638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5fd6be)[extraout_x8] * 4 + 0x10b9a963c))();
    return param_1;
  }
  return 0;
}



/* Entry: 10b9a96d0; end: 10b9a9823;  */

void FUN_10b9a96d0(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (((char)param_2[1] == '\n') && (*(char *)((long)param_2 + 9) == '\x01')) {
    lVar4 = *param_2;
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
  }
  else {
    lVar4 = 0;
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 10b9a9824; end: 10b9a985b;  */

void FUN_10b9a9824(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010b9abca8();
  if ((bool)in_ZR) {
    uVar1 = *param_2;
    func_0x00010b9a2f44();
  }
  else {
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10b9a985c; end: 10b9a9893;  */

void FUN_10b9a985c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010b9abca8();
  if ((bool)in_ZR) {
    uVar1 = *param_2;
    func_0x00010b8c3bfc();
  }
  else {
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10b9a9894; end: 10b9a989b;  */

/* WARNING: Removing unreachable block (ram,0x00010b9aa180) */

long ***** FUN_10b9a9894(long *****param_1,long *****param_2)

{
  ulong uVar1;
  long *****ppppplVar2;
  long *****ppppplVar3;
  long *****ppppplVar4;
  long ****pppplVar5;
  code *pcVar6;
  undefined4 uVar7;
  long *****ppppplVar8;
  long ***ppplVar9;
  undefined4 uVar10;
  bool bVar11;
  long *****ppppplVar12;
  long *****extraout_x8;
  long ****pppplVar13;
  long ****pppplVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long ****pppplVar18;
  long ***ppplVar19;
  long unaff_x19;
  ulong uVar20;
  long *****ppppplVar21;
  long *****unaff_x22;
  long *****ppppplVar22;
  long *****unaff_x30;
  long ****pppplStack_1c0;
  long ****pppplStack_1b8;
  long ****pppplStack_1b0;
  long ****pppplStack_1a8;
  long ***ppplStack_b8;
  long ****pppplStack_b0;
  long ****pppplStack_a8;
  long ****pppplStack_a0;
  long ****pppplStack_98;
  long ****pppplStack_90;
  long ****pppplStack_88;
  long ****pppplStack_80;
  long ****pppplStack_78;
  undefined8 uStack_70;
  
  ppppplVar8 = (long *****)0x0;
  ppppplVar12 = (long *****)(ulong)*(byte *)(param_2 + 1);
  pppplVar18 = (long ****)&UNK_10e5fd6c4;
  ppppplVar21 = param_2;
  switch(*(byte *)(param_2 + 1)) {
  case 0:
  case 0x19:
  case 0x1c:
  case 0x20:
  case 0x26:
  case 0x3e:
  case 0x56:
  case 0x7a:
  case 0x8c:
    ppppplVar8 = (long *****)&DAT_10f432d4e;
  case 0x1a:
code_r0x00010002b838:
    func_0x00010b9abae4(param_1,ppppplVar8);
    func_0x00010002b82c();
    func_0x000107c613d0(ppppplVar8);
    func_0x000107c60c50(0);
    return (long *****)0x0;
  case 1:
    ppppplVar8 = (long *****)&UNK_10f7d105c;
    goto code_r0x00010002b838;
  case 2:
    FUN_10b9a9358(&pppplStack_1c0,param_2);
    FUN_10b9a5e5c(param_1,&pppplStack_1c0);
    ppppplVar8 = &pppplStack_1c0;
    goto code_r0x00010b9a9d24;
  case 3:
    pppplVar18 = *param_2;
    func_0x00010b9abae4(param_1,pppplVar18);
    FUN_10b9a5b88();
    ppppplVar8 = extraout_x8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm_110346280)
              (extraout_x8,pppplVar18,unaff_x30);
    return ppppplVar8;
  case 4:
  case 0x2b:
  case 0x40:
  case 0x58:
  case 0x5f:
  case 0x7c:
  case 0x8e:
  case 0xa5:
  case 0xba:
    FUN_10b9a9518(param_2);
  case 0xd2:
    ppppplVar12 = param_1;
  case 0x82:
  case 0xf4:
  case 0x11:
  case 0xab:
  case 0xe7:
    func_0x00010b9abae4(ppppplVar12);
  case 0x28:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__19to_stringEi_110346938)();
    return param_2;
  case 5:
    FUN_10b9a9588(param_2);
    func_0x00010b9abae4(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__19to_stringEx_110346958)();
    return param_2;
  case 6:
    FUN_10b9a92f0(param_2);
    func_0x00010b9abae4(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd6a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__19to_stringEd_110346928)();
    return param_2;
  case 7:
    FUN_10b9a9608();
    ppppplVar8 = (long *****)&UNK_10f7d1055;
    if ((int)param_2 == 0) {
      ppppplVar8 = (long *****)&DAT_10f6842c6;
    }
    goto code_r0x00010002b838;
  case 8:
    *param_1 = (long ****)0x0;
    param_1[1] = (long ****)0x0;
    param_1[2] = (long ****)0x0;
    func_0x00010b9abc90(&UNK_10f5af6d6);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_1);
    if (*(char *)(param_2 + 1) == '\b') {
      pppplVar18 = *param_2;
    }
    else {
      pppplVar18 = (long ****)0x0;
    }
    pppplStack_a8 = (long ****)0x0;
    pppplStack_a0 = (long ****)0x0;
    pppplStack_98 = (long ****)0x0;
    ppplVar9 = pppplVar18[4];
    ppppplVar8 = (long *****)0x0;
    if (ppplVar9 != (long ***)0x0) {
      if ((long ***)0xaaaaaaaaaaaaaaa < ppplVar9) {
        FUN_10b9ab784();
code_r0x00010b9aa298:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10b9aa29c);
        (*pcVar6)();
      }
      FUN_10b9ab798(&pppplStack_1c0,ppplVar9,0,&pppplStack_98);
      ppppplVar12 = (long *****)
                    (pppplStack_1b8 + (((long)pppplStack_a0 - (long)pppplStack_a8) / -0x18) * 3);
      ppppplVar8 = (long *****)pppplStack_a8;
      func_0x00010b9ab810(&pppplStack_98,pppplStack_a8,pppplStack_a0,ppppplVar12);
      pppplVar13 = pppplStack_98;
      pppplStack_98 = pppplStack_1a8;
      pppplStack_a0 = pppplStack_1b0;
      pppplStack_1b0 = pppplStack_a8;
      pppplStack_1a8 = pppplVar13;
      pppplStack_1c0 = pppplStack_a8;
      pppplStack_1b8 = pppplStack_a8;
      pppplStack_a8 = (long ****)ppppplVar12;
      func_0x00010b9ab8ec(&pppplStack_1c0);
    }
    pppplVar13 = pppplVar18 + 2;
    func_0x00010527d444();
    ppplVar9 = pppplVar18[2];
    ppplVar19 = pppplVar18[5];
    ppplStack_b8 = (long ***)pppplVar13;
    pppplStack_b0 = (long ****)ppppplVar8;
    while (pppplVar13 = pppplStack_a0, pppplVar18 = pppplStack_b0,
          (long ****)ppplStack_b8 != (long ****)((long)ppplVar9 + (long)ppplVar19)) {
      uVar15 = ((long)pppplStack_a0 - (long)pppplStack_a8) / 0x18;
      ppppplVar8 = (long *****)pppplStack_a8;
      ppppplVar12 = (long *****)pppplStack_a0;
      while (pppplStack_a0 = (long ****)ppppplVar12, uVar15 != 0) {
        pppplVar13 = (long ****)*pppplVar18;
        if (pppplVar13 == (long ****)0x0) {
          uVar7 = 0;
          pppplVar13 = (long ****)&UNK_10f7d0ef0;
        }
        else {
          uVar7 = *(undefined4 *)((long)pppplVar13 + 0xc);
          pppplVar13 = pppplVar13 + 3;
        }
        uVar20 = uVar15 >> 1;
        pppplVar14 = ppppplVar8[uVar20 * 3];
        if (pppplVar14 == (long ****)0x0) {
          uVar10 = 0;
          pppplVar14 = (long ****)&UNK_10f7d0ef0;
        }
        else {
          uVar10 = *(undefined4 *)((long)pppplVar14 + 0xc);
          pppplVar14 = pppplVar14 + 3;
        }
        func_0x000107c27bd8(pppplVar13,uVar7,pppplVar14,uVar10);
        uVar1 = uVar15 + ~uVar20;
        uVar15 = uVar20;
        ppppplVar12 = (long *****)pppplStack_a0;
        if (-1 < (char)pppplVar13) {
          uVar15 = uVar1;
          ppppplVar8 = ppppplVar8 + uVar20 * 3 + 3;
        }
      }
      if (ppppplVar12 < pppplStack_98) {
        if (ppppplVar8 == ppppplVar12) {
          func_0x00010b9abc74();
          pppplStack_a0 = (long ****)(ppppplVar12 + 3);
        }
        else {
          pppplStack_1a8 = (long ****)&pppplStack_98;
          func_0x00010b9abc74(&pppplStack_1c0);
          pppplVar18 = pppplStack_a0;
          ppppplVar22 = (long *****)(pppplStack_a0 + -3);
          ppppplVar21 = (long *****)pppplStack_a0;
          for (ppppplVar12 = ppppplVar22; ppppplVar12 < pppplVar18; ppppplVar12 = ppppplVar12 + 3) {
            func_0x000104bda2ec(ppppplVar21,ppppplVar12);
            ppppplVar21 = ppppplVar21 + 3;
          }
          pppplStack_a0 = (long ****)ppppplVar21;
          for (ppppplVar12 = (long *****)(pppplVar18 + -6); ppppplVar12 + 3 != ppppplVar8;
              ppppplVar12 = ppppplVar12 + -3) {
            func_0x00010b9ab934(ppppplVar22,ppppplVar12);
            ppppplVar22 = ppppplVar22 + -3;
          }
          func_0x00010b9ab934(ppppplVar8,&pppplStack_1c0);
          func_0x000104bda318(&pppplStack_1c0);
        }
      }
      else {
        uVar15 = ((long)ppppplVar12 - (long)pppplStack_a8) / 0x18 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar15) {
          FUN_10b9ab784();
          goto code_r0x00010b9aa298;
        }
        uVar1 = ((long)pppplStack_98 - (long)pppplStack_a8) / 0x18;
        uVar20 = uVar1 * 2;
        if (uVar20 < uVar15 || uVar20 - uVar15 == 0) {
          uVar20 = uVar15;
        }
        if (0x555555555555554 < uVar1) {
          uVar20 = 0xaaaaaaaaaaaaaaa;
        }
        FUN_10b9ab798(&pppplStack_90,uVar20,((long)ppppplVar8 - (long)pppplStack_a8) / 0x18,
                      &pppplStack_98);
        pppplVar5 = pppplStack_78;
        pppplVar14 = pppplStack_80;
        pppplVar13 = pppplStack_88;
        pppplVar18 = pppplStack_90;
        ppppplVar12 = (long *****)pppplStack_80;
        if (pppplStack_80 == pppplStack_78) {
          if (pppplStack_88 < pppplStack_90 || (long)pppplStack_88 - (long)pppplStack_90 == 0) {
            uVar15 = ((long)pppplStack_80 - (long)pppplStack_90) / 0x18 << 1;
            if ((long)pppplStack_80 - (long)pppplStack_90 == 0) {
              uVar15 = 1;
            }
            FUN_10b9ab798(&pppplStack_1c0,uVar15,uVar15 >> 2,uStack_70);
            lVar16 = (long)pppplVar14 - (long)pppplVar13;
            ppppplVar12 = (long *****)((long)pppplStack_1b0 + lVar16);
            ppppplVar2 = (long *****)pppplStack_1c0;
            ppppplVar3 = (long *****)pppplStack_1b8;
            ppppplVar21 = (long *****)pppplStack_1b0;
            ppppplVar4 = (long *****)pppplStack_1a8;
            ppppplVar22 = (long *****)pppplVar13;
            for (; lVar16 != 0; lVar16 = lVar16 + -0x18) {
              pppplStack_1c0 = (long ****)ppppplVar2;
              pppplStack_1b8 = (long ****)ppppplVar3;
              pppplStack_1a8 = (long ****)ppppplVar4;
              func_0x000104bda2ec(ppppplVar21,ppppplVar22);
              ppppplVar21 = ppppplVar21 + 3;
              ppppplVar22 = ppppplVar22 + 3;
              ppppplVar2 = (long *****)pppplStack_1c0;
              ppppplVar3 = (long *****)pppplStack_1b8;
              ppppplVar4 = (long *****)pppplStack_1a8;
            }
            pppplStack_1c0 = pppplVar18;
            pppplStack_1b8 = pppplVar13;
            pppplStack_1b0 = pppplVar14;
            pppplStack_1a8 = pppplVar5;
            pppplStack_90 = (long ****)ppppplVar2;
            pppplStack_88 = (long ****)ppppplVar3;
            pppplStack_80 = (long ****)ppppplVar12;
            pppplStack_78 = (long ****)ppppplVar4;
            func_0x00010b9ab8ec(&pppplStack_1c0);
          }
          else {
            lVar16 = (((long)pppplStack_88 - (long)pppplStack_90) / 0x18 + 1) / -2;
            ppppplVar21 = (long *****)(pppplStack_88 + lVar16 * 3);
            for (ppppplVar12 = (long *****)pppplStack_88; ppppplVar12 != (long *****)pppplVar14;
                ppppplVar12 = ppppplVar12 + 3) {
              func_0x00010b9ab934(ppppplVar12 + lVar16 * 3,ppppplVar12);
            }
            pppplStack_80 = (long ****)(ppppplVar12 + lVar16 * 3);
            ppppplVar12 = (long *****)pppplStack_80;
            pppplStack_88 = (long ****)ppppplVar21;
          }
        }
        func_0x00010b9abc74(ppppplVar12);
        pppplVar13 = pppplStack_88;
        ppppplVar12 = (long *****)(pppplStack_80 + 3);
        func_0x00010b9ab810(&pppplStack_98,ppppplVar8,pppplStack_a0,ppppplVar12);
        lVar16 = (long)pppplStack_a0 - (long)ppppplVar8;
        lVar17 = (long)ppppplVar8 - (long)pppplStack_a8;
        pppplStack_a0 = (long ****)ppppplVar8;
        func_0x00010b9ab810(&pppplStack_98,pppplStack_a8,ppppplVar8,
                            pppplVar13 + (lVar17 / -0x18) * 3);
        pppplVar18 = pppplStack_98;
        pppplStack_98 = pppplStack_78;
        pppplStack_90 = pppplStack_a8;
        pppplStack_80 = pppplStack_a8;
        pppplStack_78 = pppplVar18;
        pppplStack_88 = pppplStack_a8;
        pppplStack_a8 = pppplVar13 + (lVar17 / -0x18) * 3;
        pppplStack_a0 = (long ****)((long)ppppplVar12 + lVar16);
        func_0x00010b9ab8ec(&pppplStack_90);
      }
      func_0x00010527d4cc(&ppplStack_b8);
    }
    bVar11 = false;
    for (ppppplVar8 = (long *****)pppplStack_a8; ppppplVar8 != (long *****)pppplVar13;
        ppppplVar8 = ppppplVar8 + 3) {
      if (bVar11) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (param_1,&DAT_10f68f19e);
      }
      FUN_10b9a5e5c(&pppplStack_1c0,ppppplVar8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (&pppplStack_1c0,": ");
      func_0x00010b9abb64(&pppplStack_90,ppppplVar8 + 1);
      func_0x00010b9abb20();
      func_0x000107c27fc4();
      func_0x00010b9abab8();
      func_0x000107c27fc4(param_1,&pppplStack_1c0);
      func_0x00010b9abadc();
      bVar11 = true;
    }
    func_0x00010b9abc90(&UNK_10f613308);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_1);
    func_0x00010b9ab9a8(&pppplStack_a8);
    goto code_r0x00010b9aa278;
  case 9:
  case 0xfc:
    *param_1 = (long ****)0x0;
    param_1[1] = (long ****)0x0;
    param_1[2] = (long ****)0x0;
  case 0x88:
    ppppplVar12 = (long *****)&UNK_10f588000;
  case 0x2a:
  case 0x3f:
  case 0x57:
  case 0x7b:
  case 0x8d:
  case 0xa4:
  case 0xb6:
  case 0xc1:
  case 0xcf:
  case 0xe0:
  case 0xf2:
    func_0x00010b9abc90((long)ppppplVar12 + 0x1f5);
    ppppplVar21 = param_1;
  case 0xac:
  case 0xb7:
  case 0xc2:
  case 0xca:
  case 0xd0:
  case 0xdb:
  case 0xe1:
  case 0xf3:
  case 0xfd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(ppppplVar21);
  case 0xd8:
    ppppplVar12 = (long *****)0x0;
    pppplVar18 = *param_2;
  case 0x2c:
  case 0x33:
  case 0x41:
  case 0x48:
  case 0x59:
  case 0x60:
  case 0x7d:
  case 0x83:
  case 0xa6:
  case 0xbb:
    param_2 = (long *****)(pppplVar18 + 3);
  case 0x6d:
    unaff_x22 = (long *****)&DAT_10f68f19e;
    unaff_x19 = (long)pppplVar18[2] << 4;
  case 0x9a:
  case 0x9f:
  case 0xb9:
  case 0xc3:
  case 0xcc:
  case 0xd1:
  case 0xdd:
  case 0xe4:
  case 0xe5:
  case 0xf5:
  case 0xff:
    ppppplVar21 = param_2;
    while (unaff_x19 != 0) {
      if (((ulong)ppppplVar12 & 1) != 0) {
code_r0x00010b9a9b30:
        param_2 = param_1;
code_r0x00010b9a9b34:
        ppppplVar8 = unaff_x22;
        unaff_x22 = ppppplVar8;
code_r0x00010b9a9b38:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (param_2,ppppplVar8);
      }
code_r0x00010b9a9b3c:
      ppppplVar12 = &pppplStack_1c0;
code_r0x00010b9a9b40:
code_r0x00010b9a9b44:
      func_0x00010b9abb64(ppppplVar12,ppppplVar21);
code_r0x00010b9a9b48:
      param_2 = ppppplVar21;
code_r0x00010b9a9b5c:
      ppppplVar8 = &pppplStack_1c0;
code_r0x00010b9a9b60:
      ppppplVar21 = param_1;
code_r0x00010b9a9b64:
      func_0x000107c27fc4(ppppplVar21,ppppplVar8);
code_r0x00010b9a9b68:
      func_0x00010b9abadc();
code_r0x00010b9a9b6c:
      param_2 = param_2 + 2;
code_r0x00010b9a9b70:
      unaff_x19 = unaff_x19 + -0x10;
code_r0x00010b9a9b74:
      ppppplVar12 = (long *****)0x1;
code_r0x00010b9a9b78:
      ppppplVar21 = param_2;
    }
  case 0x51:
  case 0x69:
  case 0x6f:
  case 0x99:
  case 0xad:
  case 0xe2:
  case 0xee:
    ppppplVar12 = (long *****)&UNK_10f588000;
  case 0x36:
  case 0x4b:
  case 0x4e:
  case 99:
  case 0x66:
  case 0x86:
  case 0xbe:
  case 0xd5:
    ppppplVar12 = ppppplVar12 + 0x3f;
  case 0xb4:
    func_0x00010b9abc90(ppppplVar12);
  case 0x3c:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_1);
    goto code_r0x00010b9aa278;
  case 10:
    pppplVar18 = *param_2;
    pppplStack_a8 = (long ****)CONCAT44(pppplStack_a8._4_4_,*(undefined4 *)(pppplVar18 + 2));
    FUN_10b9ac6f8(&pppplStack_90,&pppplStack_a8);
    pppplStack_1b0 = (long ****)pppplVar18[5];
    pppplStack_1b8 = (long ****)&UNK_1003ab990;
    pppplStack_1a8 = (long ****)0x0;
    pppplStack_1c0 = (long ****)&pppplStack_90;
    func_0x000107c2793c(&UNK_10f7d106b);
  case 0x1e:
  case 0x1f:
    func_0x000107c3173c(param_1);
    ppppplVar8 = &pppplStack_90;
code_r0x00010b9a9d24:
    func_0x000107c278f4(ppppplVar8);
    goto code_r0x00010b9aa278;
  case 0xb:
    func_0x00010b9a9710(&pppplStack_90,param_2);
    func_0x00010b9abb08();
    func_0x00010b9abaa8();
    FUN_10b9ac170(&pppplStack_a8,pppplStack_90);
    func_0x000107c31070(&pppplStack_1c0,&pppplStack_a8);
    func_0x000107c278f4(&pppplStack_a8);
    func_0x00010b9abaa8();
  case 0x32:
    func_0x00010b9aba24();
  case 0x31:
  case 0x46:
  case 0x94:
  case 0xb8:
  case 0xe6:
    func_0x00010b9abb4c();
  case 0x5e:
  case 0xcb:
  case 0xdc:
  case 0xfe:
    param_2 = &pppplStack_90;
  case 0x10:
  case 0x47:
  case 0x95:
  case 0xe3:
    func_0x000104bda388(param_2);
  case 0xc4:
  case 0xf6:
    goto code_r0x00010b9aa278;
  case 0xc:
    func_0x00010b9abb08();
  case 0x15:
    func_0x00010b9abaa8();
  case 0x24:
  case 0x25:
  case 0x38:
    ppppplVar12 = &pppplStack_90;
  case 0xb2:
  case 0x16:
  case 0x71:
    FUN_10b9a9488(ppppplVar12,param_2);
    func_0x00010b9abb20();
  case 0x3d:
  case 0x55:
  case 0x79:
  case 0x8b:
  case 0xb5:
  case 0xc0:
  case 0xcd:
  case 0xce:
  case 0xd3:
  case 0xde:
  case 0xdf:
    FUN_10b99fdb4();
  case 0x4d:
  case 0x65:
    func_0x000104bda93c(&pppplStack_90);
  case 0xc5:
    func_0x00010b9aba30();
  case 0xa3:
  case 0xc9:
  case 0xda:
  case 0xf1:
  case 0xfb:
    func_0x00010b9aba24();
    break;
  case 0xd:
    func_0x00010b9abb08();
    func_0x00010b9abaa8();
    func_0x000107c283a8();
    func_0x00010b9abc7c();
    if (*(char *)(param_2 + 1) == '\r') {
      pppplVar18 = *param_2;
    }
    else {
      pppplVar18 = (long ****)0x0;
    }
    func_0x00010b9abc68(pppplVar18);
    func_0x00010b9abbe4();
    func_0x00010b9abb64(&pppplStack_90);
    func_0x00010b9abb20();
    func_0x000107c28084();
    func_0x00010b9abab8();
    func_0x00010b9abbf0();
    func_0x00010b9abbac();
    func_0x00010b9aba30();
    func_0x00010b9aba24();
    break;
  case 0xe:
    ppppplVar21 = (long *****)*param_2;
    func_0x00010b9abb08();
  case 0x27:
    ppppplVar8 = (long *****)&UNK_10f7d10ae;
    func_0x00010b9abaa8();
    unaff_x22 = param_2;
  case 0x14:
  case 0x21:
    ppppplVar12 = (long *****)*ppppplVar21;
  case 0x29:
    ppppplVar12 = (long *****)ppppplVar12[4];
  case 0x1b:
    param_2 = ppppplVar21;
    (*(code *)ppppplVar12)(ppppplVar21);
  case 0x23:
    func_0x000107c283a8(unaff_x22,param_2,ppppplVar8);
  case 0x12:
  case 0x22:
    func_0x00010549023c();
    goto code_r0x00010b9a9a04;
  case 0xf:
    func_0x00010b9abb08();
    func_0x00010b9abaa8();
    (*(code *)(**param_2)[5])(&pppplStack_90);
    func_0x00010b9abb20();
    func_0x000107c31070();
    func_0x000107c278f4(&pppplStack_90);
    func_0x00010b9abaa8();
    func_0x00010b9aba24();
    break;
  case 0x13:
    goto code_r0x00010b9a9a04;
  case 0x17:
    goto code_r0x00010b9a9a1c;
  case 0x18:
  case 0x2f:
  case 0x44:
  case 0x5c:
  case 0x80:
  case 0xa9:
    goto code_r0x00010b9a9b3c;
  case 0x1d:
  case 0x2e:
  case 0x35:
  case 0x43:
  case 0x4a:
  case 0x5b:
  case 0x62:
  case 0x73:
  case 0x74:
  case 0x77:
  case 0x7f:
  case 0x85:
  case 0x97:
  case 0xa8:
  case 0xbd:
  case 0xd7:
  case 0xe9:
  case 0xea:
    goto code_r0x00010b9a9b5c;
  default:
    goto code_r0x00010b9a9b30;
  case 0x37:
  case 0x4c:
  case 100:
  case 0x78:
  case 0x87:
  case 0xbf:
    goto code_r0x00010b9a9b40;
  case 0x39:
  case 0x3a:
  case 0xae:
  case 0xf0:
  case 0xfa:
    goto code_r0x00010b9a9b74;
  case 0x4f:
  case 0x54:
  case 0x67:
  case 0x6c:
  case 0xb0:
    goto code_r0x00010b9a9b64;
  case 0x50:
  case 0x68:
  case 0xec:
    goto code_r0x00010b9a9b38;
  case 0x53:
  case 0x6b:
  case 0xb3:
  case 0xd9:
  case 0xeb:
  case 0xef:
    goto code_r0x00010b9a9b68;
  case 0x70:
  case 0x90:
  case 0x9b:
  case 0x9e:
  case 200:
    func_0x00010b9abbf8();
  case 0x30:
  case 0x45:
  case 0x52:
  case 0x5d:
  case 0x6a:
  case 0x6e:
  case 0x81:
  case 0xaa:
  case 0xaf:
  case 0xf9:
    func_0x00010b9abb20();
    func_0x000107c27b9c();
    func_0x00010b9abab8();
    goto code_r0x00010b9a9b5c;
  case 0x76:
    goto code_r0x00010b9a9b34;
  case 0x8a:
  case 0x8f:
  case 0x93:
  case 0xa2:
  case 0xf7:
    goto code_r0x00010b9a9b6c;
  case 0x91:
  case 0xa0:
    goto code_r0x00010b9a9b60;
  case 0x96:
    goto code_r0x00010b9a9b44;
  case 0x9d:
  case 199:
    goto code_r0x00010b9a9b78;
  case 0xb1:
    goto code_r0x00010b9a9b48;
  case 0xd4:
    goto code_r0x00010b9a9b70;
  }
code_r0x00010b9aa274:
  func_0x00010b9abb4c();
code_r0x00010b9aa278:
  func_0x00010b9abae4(unaff_x30);
  return unaff_x30;
code_r0x00010b9a9a04:
  if (ppppplVar21[4][2][2] != (long **)0x0) {
code_r0x00010b9a9a1c:
  }
  func_0x000107c283a8();
  func_0x00010b9abc7c();
  func_0x00010b9abc68(ppppplVar21[4]);
  func_0x00010b9abbe4();
  func_0x00010b9abb64(&pppplStack_90);
  func_0x00010b9abb20();
  func_0x000107c28084();
  func_0x00010b9abab8();
  func_0x00010b9abbf0();
  func_0x00010b9abbac();
  func_0x00010b9aba30();
  func_0x00010b9aba24();
  goto code_r0x00010b9aa274;
}



/* Entry: 10b9a989c; end: 10b9a9963;  */

void FUN_10b9a989c(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (((char)param_2[1] == '\b') && (lVar4 = *param_2, lVar4 != 0)) {
    uVar2 = *(undefined8 *)(lVar4 + 0x20);
    func_0x0001080d10c8(param_1);
    lVar1 = lVar4 + 0x10;
    func_0x00010527d444();
    lVar3 = *(long *)(lVar4 + 0x10);
    lVar4 = *(long *)(lVar4 + 0x28);
    lStack_30 = lVar1;
    uStack_28 = uVar2;
    while (lStack_30 != lVar3 + lVar4) {
      func_0x00010811ffc4(param_1,uStack_28);
      func_0x00010527d4cc(&lStack_30);
    }
    lVar4 = *param_1;
    lVar1 = param_1[1];
    if (lVar4 != lVar1) {
      FUN_10b9aad88(lVar4,lVar1,LZCOUNT(lVar1 - lVar4 >> 3) << 1 ^ 0x7e,1);
    }
  }
  return;
}



/* Entry: 10b9a9964; end: 10b9aa3af;  */

long ***** FUN_10b9a9964(long *****param_1,long *****param_2,long *****param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long *****ppppplVar3;
  long *****ppppplVar4;
  long *****ppppplVar5;
  long ****pppplVar6;
  code *pcVar7;
  long *****ppppplVar8;
  undefined4 uVar9;
  long ***ppplVar10;
  undefined4 uVar11;
  bool bVar12;
  long *****ppppplVar13;
  long *****extraout_x8;
  long ****pppplVar14;
  long ****pppplVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long ****pppplVar19;
  long ***ppplVar20;
  long unaff_x19;
  int iVar21;
  ulong uVar22;
  long *****ppppplVar23;
  long *****unaff_x22;
  long *****ppppplVar24;
  long *****unaff_x30;
  long ****pppplStack_1c0;
  long ****pppplStack_1b8;
  long ****pppplStack_1b0;
  long ****pppplStack_1a8;
  long ***ppplStack_b8;
  long ****pppplStack_b0;
  long ****pppplStack_a8;
  long ****pppplStack_a0;
  long ****pppplStack_98;
  long ****pppplStack_90;
  long ****pppplStack_88;
  long ****pppplStack_80;
  long ****pppplStack_78;
  undefined8 uStack_70;
  
  ppppplVar13 = (long *****)(ulong)*(byte *)(param_2 + 1);
  pppplVar19 = (long ****)&UNK_10e5fd6c4;
  iVar21 = (int)param_3;
  ppppplVar23 = param_2;
  ppppplVar8 = param_3;
  switch(*(byte *)(param_2 + 1)) {
  case 0:
  case 0x19:
  case 0x1c:
  case 0x20:
  case 0x26:
  case 0x3e:
  case 0x56:
  case 0x7a:
  case 0x8c:
    ppppplVar8 = (long *****)&DAT_10f432d4e;
  case 0x1a:
code_r0x00010002b838:
    func_0x00010b9abae4(param_1,ppppplVar8);
    func_0x00010002b82c();
    func_0x000107c613d0(ppppplVar8);
    func_0x000107c60c50(param_3);
    return param_3;
  case 1:
    ppppplVar8 = (long *****)&UNK_10f7d105c;
    goto code_r0x00010002b838;
  case 2:
    FUN_10b9a9358(&pppplStack_1c0,param_2);
    FUN_10b9a5e5c(param_1,&pppplStack_1c0);
    ppppplVar8 = &pppplStack_1c0;
    goto code_r0x00010b9a9d24;
  case 3:
    pppplVar19 = *param_2;
    func_0x00010b9abae4(param_1,pppplVar19);
    FUN_10b9a5b88();
    ppppplVar8 = extraout_x8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm_110346280)
              (extraout_x8,pppplVar19,unaff_x30);
    return ppppplVar8;
  case 4:
  case 0x2b:
  case 0x40:
  case 0x58:
  case 0x5f:
  case 0x7c:
  case 0x8e:
  case 0xa5:
  case 0xba:
    FUN_10b9a9518(param_2);
  case 0xd2:
    ppppplVar13 = param_1;
  case 0x82:
  case 0xf4:
  case 0x11:
  case 0xab:
  case 0xe7:
    func_0x00010b9abae4(ppppplVar13);
  case 0x28:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__19to_stringEi_110346938)();
    return param_2;
  case 5:
    FUN_10b9a9588(param_2);
    func_0x00010b9abae4(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__19to_stringEx_110346958)();
    return param_2;
  case 6:
    FUN_10b9a92f0(param_2);
    func_0x00010b9abae4(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd6a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__19to_stringEd_110346928)();
    return param_2;
  case 7:
    FUN_10b9a9608();
    ppppplVar8 = (long *****)&UNK_10f7d1055;
    if ((int)param_2 == 0) {
      ppppplVar8 = (long *****)&DAT_10f6842c6;
    }
    goto code_r0x00010002b838;
  case 8:
    *param_1 = (long ****)0x0;
    param_1[1] = (long ****)0x0;
    param_1[2] = (long ****)0x0;
    func_0x00010b9abc90(&UNK_10f5af6d6);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_1);
    if (*(char *)(param_2 + 1) == '\b') {
      pppplVar19 = *param_2;
    }
    else {
      pppplVar19 = (long ****)0x0;
    }
    pppplStack_a8 = (long ****)0x0;
    pppplStack_a0 = (long ****)0x0;
    pppplStack_98 = (long ****)0x0;
    ppplVar10 = pppplVar19[4];
    ppppplVar8 = (long *****)0x0;
    if (ppplVar10 != (long ***)0x0) {
      if ((long ***)0xaaaaaaaaaaaaaaa < ppplVar10) {
        FUN_10b9ab784();
code_r0x00010b9aa298:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10b9aa29c);
        (*pcVar7)();
      }
      FUN_10b9ab798(&pppplStack_1c0,ppplVar10,0,&pppplStack_98);
      ppppplVar13 = (long *****)
                    (pppplStack_1b8 + (((long)pppplStack_a0 - (long)pppplStack_a8) / -0x18) * 3);
      ppppplVar8 = (long *****)pppplStack_a8;
      func_0x00010b9ab810(&pppplStack_98,pppplStack_a8,pppplStack_a0,ppppplVar13);
      pppplVar14 = pppplStack_98;
      pppplStack_98 = pppplStack_1a8;
      pppplStack_a0 = pppplStack_1b0;
      pppplStack_1b0 = pppplStack_a8;
      pppplStack_1a8 = pppplVar14;
      pppplStack_1c0 = pppplStack_a8;
      pppplStack_1b8 = pppplStack_a8;
      pppplStack_a8 = (long ****)ppppplVar13;
      func_0x00010b9ab8ec(&pppplStack_1c0);
    }
    pppplVar14 = pppplVar19 + 2;
    func_0x00010527d444();
    ppplVar10 = pppplVar19[2];
    ppplVar20 = pppplVar19[5];
    ppplStack_b8 = (long ***)pppplVar14;
    pppplStack_b0 = (long ****)ppppplVar8;
    while (pppplVar14 = pppplStack_a0, pppplVar19 = pppplStack_b0,
          (long ****)ppplStack_b8 != (long ****)((long)ppplVar10 + (long)ppplVar20)) {
      uVar16 = ((long)pppplStack_a0 - (long)pppplStack_a8) / 0x18;
      ppppplVar8 = (long *****)pppplStack_a8;
      ppppplVar13 = (long *****)pppplStack_a0;
      while (pppplStack_a0 = (long ****)ppppplVar13, uVar16 != 0) {
        pppplVar14 = (long ****)*pppplVar19;
        if (pppplVar14 == (long ****)0x0) {
          uVar9 = 0;
          pppplVar14 = (long ****)&UNK_10f7d0ef0;
        }
        else {
          uVar9 = *(undefined4 *)((long)pppplVar14 + 0xc);
          pppplVar14 = pppplVar14 + 3;
        }
        uVar22 = uVar16 >> 1;
        pppplVar15 = ppppplVar8[uVar22 * 3];
        if (pppplVar15 == (long ****)0x0) {
          uVar11 = 0;
          pppplVar15 = (long ****)&UNK_10f7d0ef0;
        }
        else {
          uVar11 = *(undefined4 *)((long)pppplVar15 + 0xc);
          pppplVar15 = pppplVar15 + 3;
        }
        func_0x000107c27bd8(pppplVar14,uVar9,pppplVar15,uVar11);
        uVar1 = uVar16 + ~uVar22;
        uVar16 = uVar22;
        ppppplVar13 = (long *****)pppplStack_a0;
        if (-1 < (char)pppplVar14) {
          uVar16 = uVar1;
          ppppplVar8 = ppppplVar8 + uVar22 * 3 + 3;
        }
      }
      if (ppppplVar13 < pppplStack_98) {
        if (ppppplVar8 == ppppplVar13) {
          func_0x00010b9abc74();
          pppplStack_a0 = (long ****)(ppppplVar13 + 3);
        }
        else {
          pppplStack_1a8 = (long ****)&pppplStack_98;
          func_0x00010b9abc74(&pppplStack_1c0);
          pppplVar19 = pppplStack_a0;
          ppppplVar24 = (long *****)(pppplStack_a0 + -3);
          ppppplVar23 = (long *****)pppplStack_a0;
          for (ppppplVar13 = ppppplVar24; ppppplVar13 < pppplVar19; ppppplVar13 = ppppplVar13 + 3) {
            func_0x000104bda2ec(ppppplVar23,ppppplVar13);
            ppppplVar23 = ppppplVar23 + 3;
          }
          pppplStack_a0 = (long ****)ppppplVar23;
          for (ppppplVar13 = (long *****)(pppplVar19 + -6); ppppplVar13 + 3 != ppppplVar8;
              ppppplVar13 = ppppplVar13 + -3) {
            func_0x00010b9ab934(ppppplVar24,ppppplVar13);
            ppppplVar24 = ppppplVar24 + -3;
          }
          func_0x00010b9ab934(ppppplVar8,&pppplStack_1c0);
          func_0x000104bda318(&pppplStack_1c0);
        }
      }
      else {
        uVar16 = ((long)ppppplVar13 - (long)pppplStack_a8) / 0x18 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar16) {
          FUN_10b9ab784();
          goto code_r0x00010b9aa298;
        }
        uVar1 = ((long)pppplStack_98 - (long)pppplStack_a8) / 0x18;
        uVar22 = uVar1 * 2;
        if (uVar22 < uVar16 || uVar22 - uVar16 == 0) {
          uVar22 = uVar16;
        }
        if (0x555555555555554 < uVar1) {
          uVar22 = 0xaaaaaaaaaaaaaaa;
        }
        FUN_10b9ab798(&pppplStack_90,uVar22,((long)ppppplVar8 - (long)pppplStack_a8) / 0x18,
                      &pppplStack_98);
        pppplVar6 = pppplStack_78;
        pppplVar15 = pppplStack_80;
        pppplVar14 = pppplStack_88;
        pppplVar19 = pppplStack_90;
        ppppplVar13 = (long *****)pppplStack_80;
        if (pppplStack_80 == pppplStack_78) {
          if (pppplStack_88 < pppplStack_90 || (long)pppplStack_88 - (long)pppplStack_90 == 0) {
            uVar16 = ((long)pppplStack_80 - (long)pppplStack_90) / 0x18 << 1;
            if ((long)pppplStack_80 - (long)pppplStack_90 == 0) {
              uVar16 = 1;
            }
            FUN_10b9ab798(&pppplStack_1c0,uVar16,uVar16 >> 2,uStack_70);
            lVar17 = (long)pppplVar15 - (long)pppplVar14;
            ppppplVar13 = (long *****)((long)pppplStack_1b0 + lVar17);
            ppppplVar3 = (long *****)pppplStack_1c0;
            ppppplVar4 = (long *****)pppplStack_1b8;
            ppppplVar23 = (long *****)pppplStack_1b0;
            ppppplVar5 = (long *****)pppplStack_1a8;
            ppppplVar24 = (long *****)pppplVar14;
            for (; lVar17 != 0; lVar17 = lVar17 + -0x18) {
              pppplStack_1c0 = (long ****)ppppplVar3;
              pppplStack_1b8 = (long ****)ppppplVar4;
              pppplStack_1a8 = (long ****)ppppplVar5;
              func_0x000104bda2ec(ppppplVar23,ppppplVar24);
              ppppplVar23 = ppppplVar23 + 3;
              ppppplVar24 = ppppplVar24 + 3;
              ppppplVar3 = (long *****)pppplStack_1c0;
              ppppplVar4 = (long *****)pppplStack_1b8;
              ppppplVar5 = (long *****)pppplStack_1a8;
            }
            pppplStack_1c0 = pppplVar19;
            pppplStack_1b8 = pppplVar14;
            pppplStack_1b0 = pppplVar15;
            pppplStack_1a8 = pppplVar6;
            pppplStack_90 = (long ****)ppppplVar3;
            pppplStack_88 = (long ****)ppppplVar4;
            pppplStack_80 = (long ****)ppppplVar13;
            pppplStack_78 = (long ****)ppppplVar5;
            func_0x00010b9ab8ec(&pppplStack_1c0);
          }
          else {
            lVar17 = (((long)pppplStack_88 - (long)pppplStack_90) / 0x18 + 1) / -2;
            ppppplVar23 = (long *****)(pppplStack_88 + lVar17 * 3);
            for (ppppplVar13 = (long *****)pppplStack_88; ppppplVar13 != (long *****)pppplVar15;
                ppppplVar13 = ppppplVar13 + 3) {
              func_0x00010b9ab934(ppppplVar13 + lVar17 * 3,ppppplVar13);
            }
            pppplStack_80 = (long ****)(ppppplVar13 + lVar17 * 3);
            ppppplVar13 = (long *****)pppplStack_80;
            pppplStack_88 = (long ****)ppppplVar23;
          }
        }
        func_0x00010b9abc74(ppppplVar13);
        pppplVar14 = pppplStack_88;
        ppppplVar13 = (long *****)(pppplStack_80 + 3);
        func_0x00010b9ab810(&pppplStack_98,ppppplVar8,pppplStack_a0,ppppplVar13);
        lVar17 = (long)pppplStack_a0 - (long)ppppplVar8;
        lVar18 = (long)ppppplVar8 - (long)pppplStack_a8;
        pppplStack_a0 = (long ****)ppppplVar8;
        func_0x00010b9ab810(&pppplStack_98,pppplStack_a8,ppppplVar8,
                            pppplVar14 + (lVar18 / -0x18) * 3);
        pppplVar19 = pppplStack_98;
        pppplStack_98 = pppplStack_78;
        pppplStack_90 = pppplStack_a8;
        pppplStack_80 = pppplStack_a8;
        pppplStack_78 = pppplVar19;
        pppplStack_88 = pppplStack_a8;
        pppplStack_a8 = pppplVar14 + (lVar18 / -0x18) * 3;
        pppplStack_a0 = (long ****)((long)ppppplVar13 + lVar17);
        func_0x00010b9ab8ec(&pppplStack_90);
      }
      func_0x00010527d4cc(&ppplStack_b8);
    }
    bVar12 = false;
    ppppplVar8 = (long *****)pppplStack_a8;
    puVar2 = &DAT_10f56e05b;
    if (iVar21 == 0) {
      puVar2 = &DAT_10f68f19e;
    }
    for (; ppppplVar8 != (long *****)pppplVar14; ppppplVar8 = ppppplVar8 + 3) {
      if (bVar12) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_1,puVar2);
      }
      FUN_10b9a5e5c(&pppplStack_1c0,ppppplVar8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (&pppplStack_1c0,": ");
      func_0x00010b9abb64(&pppplStack_90,ppppplVar8 + 1);
      func_0x00010b9abb20();
      func_0x000107c27fc4();
      func_0x00010b9abab8();
      if (iVar21 != 0) {
        func_0x00010b9abbf8();
        func_0x00010b9abb20();
        func_0x000107c27b9c();
        func_0x00010b9abab8();
      }
      func_0x000107c27fc4(param_1,&pppplStack_1c0);
      func_0x00010b9abadc();
      bVar12 = true;
    }
    func_0x00010b9abc90(&UNK_10f613308);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_1);
    func_0x00010b9ab9a8(&pppplStack_a8);
    goto code_r0x00010b9aa278;
  case 9:
  case 0xfc:
    *param_1 = (long ****)0x0;
    param_1[1] = (long ****)0x0;
    param_1[2] = (long ****)0x0;
  case 0x88:
    ppppplVar13 = (long *****)&UNK_10f588000;
  case 0x2a:
  case 0x3f:
  case 0x57:
  case 0x7b:
  case 0x8d:
  case 0xa4:
  case 0xb6:
  case 0xc1:
  case 0xcf:
  case 0xe0:
  case 0xf2:
    func_0x00010b9abc90((long)ppppplVar13 + 0x1f5);
    ppppplVar23 = param_1;
  case 0xac:
  case 0xb7:
  case 0xc2:
  case 0xca:
  case 0xd0:
  case 0xdb:
  case 0xe1:
  case 0xf3:
  case 0xfd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(ppppplVar23);
  case 0xd8:
    ppppplVar13 = (long *****)0x0;
    pppplVar19 = *param_2;
  case 0x2c:
  case 0x33:
  case 0x41:
  case 0x48:
  case 0x59:
  case 0x60:
  case 0x7d:
  case 0x83:
  case 0xa6:
  case 0xbb:
    param_2 = (long *****)(pppplVar19 + 3);
  case 0x6d:
    unaff_x22 = (long *****)&DAT_10f56e05b;
    if (iVar21 == 0) {
      unaff_x22 = (long *****)&DAT_10f68f19e;
    }
    unaff_x19 = (long)pppplVar19[2] << 4;
  case 0x9a:
  case 0x9f:
  case 0xb9:
  case 0xc3:
  case 0xcc:
  case 0xd1:
  case 0xdd:
  case 0xe4:
  case 0xe5:
  case 0xf5:
  case 0xff:
    ppppplVar23 = param_2;
    while (unaff_x19 != 0) {
      if (((ulong)ppppplVar13 & 1) != 0) {
code_r0x00010b9a9b30:
        param_2 = param_1;
code_r0x00010b9a9b34:
        param_3 = unaff_x22;
        unaff_x22 = param_3;
code_r0x00010b9a9b38:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_2,param_3)
        ;
      }
code_r0x00010b9a9b3c:
      ppppplVar13 = &pppplStack_1c0;
code_r0x00010b9a9b40:
code_r0x00010b9a9b44:
      func_0x00010b9abb64(ppppplVar13,ppppplVar23);
code_r0x00010b9a9b48:
      if (iVar21 != 0) {
code_r0x00010b9a9b4c:
        func_0x00010b9abbf8();
code_r0x00010b9a9b50:
        func_0x00010b9abb20();
        func_0x000107c27b9c();
        func_0x00010b9abab8();
      }
code_r0x00010b9a9b5c:
      param_3 = &pppplStack_1c0;
code_r0x00010b9a9b60:
      param_2 = param_1;
code_r0x00010b9a9b64:
      func_0x000107c27fc4(param_2,param_3);
code_r0x00010b9a9b68:
      func_0x00010b9abadc();
code_r0x00010b9a9b6c:
      param_2 = ppppplVar23 + 2;
code_r0x00010b9a9b70:
      unaff_x19 = unaff_x19 + -0x10;
code_r0x00010b9a9b74:
      ppppplVar13 = (long *****)0x1;
code_r0x00010b9a9b78:
      ppppplVar23 = param_2;
    }
  case 0x51:
  case 0x69:
  case 0x6f:
  case 0x99:
  case 0xad:
  case 0xe2:
  case 0xee:
    ppppplVar13 = (long *****)&UNK_10f588000;
  case 0x36:
  case 0x4b:
  case 0x4e:
  case 99:
  case 0x66:
  case 0x86:
  case 0xbe:
  case 0xd5:
    ppppplVar13 = ppppplVar13 + 0x3f;
  case 0xb4:
    func_0x00010b9abc90(ppppplVar13);
  case 0x3c:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_1);
    goto code_r0x00010b9aa278;
  case 10:
    pppplVar19 = *param_2;
    pppplStack_a8 = (long ****)CONCAT44(pppplStack_a8._4_4_,*(undefined4 *)(pppplVar19 + 2));
    FUN_10b9ac6f8(&pppplStack_90,&pppplStack_a8);
    pppplStack_1b0 = (long ****)pppplVar19[5];
    pppplStack_1b8 = (long ****)&UNK_1003ab990;
    pppplStack_1a8 = (long ****)0x0;
    pppplStack_1c0 = (long ****)&pppplStack_90;
    func_0x000107c2793c(&UNK_10f7d106b);
  case 0x1e:
  case 0x1f:
    func_0x000107c3173c(param_1);
    ppppplVar8 = &pppplStack_90;
code_r0x00010b9a9d24:
    func_0x000107c278f4(ppppplVar8);
    goto code_r0x00010b9aa278;
  case 0xb:
    func_0x00010b9a9710(&pppplStack_90,param_2);
    func_0x00010b9abb08();
    func_0x00010b9abaa8();
    FUN_10b9ac170(&pppplStack_a8,pppplStack_90);
    func_0x000107c31070(&pppplStack_1c0,&pppplStack_a8);
    func_0x000107c278f4(&pppplStack_a8);
    func_0x00010b9abaa8();
  case 0x32:
    func_0x00010b9aba24();
  case 0x31:
  case 0x46:
  case 0x94:
  case 0xb8:
  case 0xe6:
    func_0x00010b9abb4c();
  case 0x5e:
  case 0xcb:
  case 0xdc:
  case 0xfe:
    param_2 = &pppplStack_90;
  case 0x10:
  case 0x47:
  case 0x95:
  case 0xe3:
    func_0x000104bda388(param_2);
  case 0xc4:
  case 0xf6:
    goto code_r0x00010b9aa278;
  case 0xc:
    func_0x00010b9abb08();
  case 0x15:
    func_0x00010b9abaa8();
  case 0x24:
  case 0x25:
  case 0x38:
    ppppplVar13 = &pppplStack_90;
  case 0xb2:
  case 0x16:
  case 0x71:
    FUN_10b9a9488(ppppplVar13,param_2);
    func_0x00010b9abb20();
  case 0x3d:
  case 0x55:
  case 0x79:
  case 0x8b:
  case 0xb5:
  case 0xc0:
  case 0xcd:
  case 0xce:
  case 0xd3:
  case 0xde:
  case 0xdf:
    FUN_10b99fdb4();
  case 0x4d:
  case 0x65:
    func_0x000104bda93c(&pppplStack_90);
  case 0xc5:
    func_0x00010b9aba30();
  case 0xa3:
  case 0xc9:
  case 0xda:
  case 0xf1:
  case 0xfb:
    func_0x00010b9aba24();
    break;
  case 0xd:
    func_0x00010b9abb08();
    func_0x00010b9abaa8();
    func_0x000107c283a8();
    func_0x00010b9abc7c();
    if (*(char *)(param_2 + 1) == '\r') {
      pppplVar19 = *param_2;
    }
    else {
      pppplVar19 = (long ****)0x0;
    }
    func_0x00010b9abc68(pppplVar19);
    func_0x00010b9abbe4();
    func_0x00010b9abb64(&pppplStack_90);
    func_0x00010b9abb20();
    func_0x000107c28084();
    func_0x00010b9abab8();
    func_0x00010b9abbf0();
    func_0x00010b9abbac();
    func_0x00010b9aba30();
    func_0x00010b9aba24();
    break;
  case 0xe:
    ppppplVar23 = (long *****)*param_2;
    func_0x00010b9abb08();
  case 0x27:
    param_3 = (long *****)&UNK_10f7d10ae;
    func_0x00010b9abaa8();
    unaff_x22 = param_2;
  case 0x14:
  case 0x21:
    ppppplVar13 = (long *****)*ppppplVar23;
  case 0x29:
    ppppplVar13 = (long *****)ppppplVar13[4];
  case 0x1b:
    param_2 = ppppplVar23;
    (*(code *)ppppplVar13)(ppppplVar23);
  case 0x23:
    func_0x000107c283a8(unaff_x22,param_2,param_3);
  case 0x12:
  case 0x22:
    func_0x00010549023c();
    goto code_r0x00010b9a9a04;
  case 0xf:
    func_0x00010b9abb08();
    func_0x00010b9abaa8();
    (*(code *)(**param_2)[5])(&pppplStack_90);
    func_0x00010b9abb20();
    func_0x000107c31070();
    func_0x000107c278f4(&pppplStack_90);
    func_0x00010b9abaa8();
    func_0x00010b9aba24();
    break;
  case 0x13:
    goto code_r0x00010b9a9a04;
  case 0x17:
    goto code_r0x00010b9a9a1c;
  case 0x18:
  case 0x2f:
  case 0x44:
  case 0x5c:
  case 0x80:
  case 0xa9:
    goto code_r0x00010b9a9b3c;
  case 0x1d:
  case 0x2e:
  case 0x35:
  case 0x43:
  case 0x4a:
  case 0x5b:
  case 0x62:
  case 0x73:
  case 0x74:
  case 0x77:
  case 0x7f:
  case 0x85:
  case 0x97:
  case 0xa8:
  case 0xbd:
  case 0xd7:
  case 0xe9:
  case 0xea:
    goto code_r0x00010b9a9b5c;
  default:
    goto code_r0x00010b9a9b30;
  case 0x30:
  case 0x45:
  case 0x52:
  case 0x5d:
  case 0x6a:
  case 0x6e:
  case 0x81:
  case 0xaa:
  case 0xaf:
  case 0xf9:
    goto code_r0x00010b9a9b50;
  case 0x37:
  case 0x4c:
  case 100:
  case 0x78:
  case 0x87:
  case 0xbf:
    goto code_r0x00010b9a9b40;
  case 0x39:
  case 0x3a:
  case 0xae:
  case 0xf0:
  case 0xfa:
    goto code_r0x00010b9a9b74;
  case 0x4f:
  case 0x54:
  case 0x67:
  case 0x6c:
  case 0xb0:
    goto code_r0x00010b9a9b64;
  case 0x50:
  case 0x68:
  case 0xec:
    goto code_r0x00010b9a9b38;
  case 0x53:
  case 0x6b:
  case 0xb3:
  case 0xd9:
  case 0xeb:
  case 0xef:
    goto code_r0x00010b9a9b68;
  case 0x70:
  case 0x90:
  case 0x9b:
  case 0x9e:
  case 200:
    goto code_r0x00010b9a9b4c;
  case 0x76:
    goto code_r0x00010b9a9b34;
  case 0x8a:
  case 0x8f:
  case 0x93:
  case 0xa2:
  case 0xf7:
    goto code_r0x00010b9a9b6c;
  case 0x91:
  case 0xa0:
    goto code_r0x00010b9a9b60;
  case 0x96:
    goto code_r0x00010b9a9b44;
  case 0x9d:
  case 199:
    goto code_r0x00010b9a9b78;
  case 0xb1:
    goto code_r0x00010b9a9b48;
  case 0xd4:
    goto code_r0x00010b9a9b70;
  }
code_r0x00010b9aa274:
  func_0x00010b9abb4c();
code_r0x00010b9aa278:
  func_0x00010b9abae4(unaff_x30);
  return unaff_x30;
code_r0x00010b9a9a04:
  if (ppppplVar23[4][2][2] != (long **)0x0) {
code_r0x00010b9a9a1c:
  }
  func_0x000107c283a8();
  func_0x00010b9abc7c();
  func_0x00010b9abc68(ppppplVar23[4]);
  func_0x00010b9abbe4();
  func_0x00010b9abb64(&pppplStack_90);
  func_0x00010b9abb20();
  func_0x000107c28084();
  func_0x00010b9abab8();
  func_0x00010b9abbf0();
  func_0x00010b9abbac();
  func_0x00010b9aba30();
  func_0x00010b9aba24();
  goto code_r0x00010b9aa274;
}



/* Entry: 10b9aa3b0; end: 10b9aa3c7;  */

float FUN_10b9aa3b0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  FUN_10b9a92f0();
  return (float)(double)CONCAT44(uVar2,uVar1);
}



/* Entry: 10b9aa3c8; end: 10b9aa5ef;  */

ulong * FUN_10b9aa3c8(double param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  long *plVar7;
  ulong *puVar8;
  long lVar9;
  long extraout_x8;
  long lVar10;
  ulong **ppuVar11;
  ulong uVar12;
  long lVar13;
  ulong *puStack_50;
  long *plStack_48;
  
  ppuVar11 = &puStack_50;
  uVar2 = (byte)param_2[1] - 2;
  bVar3 = 0xc < uVar2;
  bVar4 = uVar2 == 0xd;
  switch(uVar2) {
  case 0:
    FUN_10b9a9358(&puStack_50);
    func_0x000107c278f4(&puStack_50);
    ppuVar11 = (ulong **)puStack_50;
    break;
  case 1:
    param_2 = (ulong *)*param_2;
    iVar1 = (int)param_2[3];
    if (iVar1 == 2) {
      puVar8 = param_2 + 4;
      lVar9 = param_2[2] * 4;
      goto code_r0x0001000df370;
    }
    if (iVar1 == 1) {
      puVar8 = param_2 + 4;
      lVar9 = param_2[2] * 2;
      goto code_r0x0001000df370;
    }
    if (iVar1 != 0) {
      return param_2;
    }
    puVar8 = param_2 + 4;
    lVar9 = (long)puVar8 + param_2[2];
    goto LAB_107c278c8;
  case 2:
    FUN_10b9a9518();
    ppuVar11 = (ulong **)(long)(int)param_2;
    break;
  case 3:
    func_0x00010b9abb74();
    if (bVar3 && !bVar4) {
      return (ulong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010b9a95b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5fd6b8)[extraout_x8] * 4 + 0x10b9a95b8))();
    return param_2;
  case 4:
    FUN_10b9a92f0();
    ppuVar11 = (ulong **)(long)param_1;
    break;
  case 5:
    FUN_10b9a9608();
    ppuVar11 = (ulong **)((ulong)param_2 & 0xffffffff);
    break;
  case 6:
    uVar12 = *param_2;
    puVar8 = (ulong *)(uVar12 + 0x10);
    func_0x00010527d444();
    ppuVar11 = (ulong **)0x0;
    lVar9 = *(long *)(uVar12 + 0x10);
    lVar13 = *(long *)(uVar12 + 0x28);
    puStack_50 = puVar8;
    plStack_48 = param_3;
    while (puStack_50 != (ulong *)(lVar9 + lVar13)) {
      plVar7 = plStack_48 + 1;
      lVar10 = *plStack_48;
      FUN_10b9aa3c8(plVar7);
      ppuVar11 = (ulong **)
                 ((((lVar10 * -0x395b586ca42e166b ^ (ulong)(lVar10 * -0x395b586ca42e166b) >> 0x2f) *
                    -0x395b586ca42e166b ^ (ulong)ppuVar11) * -0x395b586ca42e166b + 0xe6546b64 ^
                  ((long)plVar7 * -0x395b586ca42e166b ^
                  (ulong)((long)plVar7 * -0x395b586ca42e166b) >> 0x2f) * -0x395b586ca42e166b) *
                  -0x395b586ca42e166b + 0xe6546b64);
      func_0x00010527d4cc(&puStack_50);
    }
    break;
  case 7:
    ppuVar11 = (ulong **)0x0;
    lVar9 = *param_2 + 0x18;
    for (lVar13 = *(long *)(*param_2 + 0x10) << 4; lVar13 != 0; lVar13 = lVar13 + -0x10) {
      lVar10 = lVar9;
      FUN_10b9aa3c8(lVar9);
      ppuVar11 = (ulong **)
                 (((lVar10 * -0x395b586ca42e166b ^ (ulong)(lVar10 * -0x395b586ca42e166b) >> 0x2f) *
                   -0x395b586ca42e166b ^ (ulong)ppuVar11) * -0x395b586ca42e166b + 0xe6546b64);
      lVar9 = lVar9 + 0x10;
    }
    break;
  case 8:
    puVar8 = *(ulong **)(*param_2 + 0x20);
    lVar9 = (long)puVar8 + *(long *)(*param_2 + 0x28);
LAB_107c278c8:
    lVar9 = lVar9 - (long)puVar8;
code_r0x0001000df370:
    puVar5 = (ulong *)&stack0xffffffffffffffef;
    func_0x0001000df1ac(puVar5,puVar8,lVar9);
    return puVar5;
  case 9:
  case 0xc:
    ppuVar11 = (ulong **)*param_2;
    break;
  case 10:
    FUN_10b9a9488(&puStack_50);
    func_0x00010b99fda4(&puStack_50);
    func_0x00010b9abc24();
    break;
  case 0xb:
    uVar6 = *param_2;
    puVar8 = *(ulong **)(uVar6 + 0x10);
    uVar12 = puVar8[4];
    FUN_10b9917e4();
    lVar9 = uVar6 + 0x18;
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      lVar13 = lVar9;
      FUN_10b9aa3c8(lVar9);
      puVar8 = (ulong *)(((lVar13 * -0x395b586ca42e166b ^
                          (ulong)(lVar13 * -0x395b586ca42e166b) >> 0x2f) * -0x395b586ca42e166b ^
                         (ulong)puVar8) * -0x395b586ca42e166b + 0xe6546b64);
      lVar9 = lVar9 + 0x10;
    }
    return puVar8;
  case 0xd:
    FUN_10b9a94ec(&puStack_50);
    func_0x000104bddedc(&puStack_50);
    ppuVar11 = (ulong **)puStack_50;
    break;
  default:
    ppuVar11 = (ulong **)(ulong *)0x0;
  }
  return (ulong *)ppuVar11;
}



/* Entry: 10b9aa5f0; end: 10b9aa6d3;  */

void FUN_10b9aa5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  uVar1 = param_2;
  func_0x000107c31084();
  FUN_10b9a8d84(auStack_88,param_3);
  FUN_10b9a8d84(auStack_a0,param_2);
  func_0x00010598789c(auStack_50,auStack_88,auStack_a0);
  func_0x000107c2793c(&UNK_10f7d10bc);
  func_0x000107c3173c(auStack_70);
  func_0x000107c31080(auStack_58,uVar1,auStack_70);
  FUN_10b99f560(param_1,auStack_58);
  func_0x000107c278f4(auStack_58);
  func_0x00010b9abadc();
  func_0x00010b9abc2c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  return;
}



/* Entry: 10b9aa6d4; end: 10b9aa763;  */

void FUN_10b9aa6d4(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  long *plStack_30;
  undefined *puStack_28;
  
  plVar1 = (long *)*param_1;
  (**(code **)(*plVar1 + 0x20))();
  puStack_28 = &UNK_1003ab990;
  plStack_30 = plVar1;
  func_0x000107c2793c(&UNK_10f7d10e2);
  func_0x000107c3173c(&ppuStack_48);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    ppuStack_48 = &ppuStack_48;
  }
  FUN_10b99ffd4(param_2,ppuStack_48,uStack_40);
  func_0x00010b9abc04();
  return;
}



/* Entry: 10b9aa764; end: 10b9aa7c3;  */

void FUN_10b9aa764(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c31084();
  func_0x00010b9abb54();
  FUN_10b9aa7c4(param_1,param_2,auStack_38);
  func_0x00010b9aba84();
  return;
}



/* Entry: 10b9aa7c4; end: 10b9aa82b;  */

long * FUN_10b9aa7c4(long *param_1,long *param_2,long param_3)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  if (((char)param_2[1] == '\b') && (lVar3 = *param_2, lVar3 != 0)) {
    param_2 = (long *)(lVar3 + 0x10);
    FUN_10b8ec1a0();
    if ((long *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 0x28)) != param_2) {
      plVar2 = *(long **)(param_3 + 8);
      *param_1 = (long)plVar2;
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_3 + 0x10);
      cVar1 = *(char *)(param_3 + 0x11);
      *(char *)((long)param_1 + 9) = cVar1;
      if (cVar1 == '\x01' && plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      return param_1;
    }
  }
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return param_2;
}



/* Entry: 10b9aa82c; end: 10b9aa86b;  */

void FUN_10b9aa82c(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  
  func_0x00010b9abb94();
  _strlen(param_2);
  func_0x000107c31084();
  func_0x00010b9abb54();
  FUN_10b9aa7c4(extraout_x8);
  func_0x00010b9aba84();
  return;
}



/* Entry: 10b9aa86c; end: 10b9aa8cf;  */

undefined8
FUN_10b9aa86c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c31084();
  func_0x000107c3107c(auStack_38);
  FUN_10b9aa8d0(param_1,auStack_38,param_4);
  func_0x00010b9aba84();
  return param_1;
}



/* Entry: 10b9aa8d0; end: 10b9aa97b;  */

undefined8 FUN_10b9aa8d0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x00010b9a9790(&lStack_38);
  if (lStack_38 == 0) {
    func_0x000104bd4df4(auStack_48);
    func_0x0001080ce688(&lStack_38,auStack_48);
    func_0x000104bd4e40(auStack_48);
    FUN_10b9a8f54(auStack_48,&lStack_38);
    FUN_10b9a9020(param_1,auStack_48);
    FUN_10b9a8d98(auStack_48);
  }
  func_0x0001052739d0(lStack_38 + 0x10,param_2);
  FUN_10b9a9084();
  func_0x000104bd4e40(&lStack_38);
  return param_1;
}



/* Entry: 10b9aa97c; end: 10b9aa9cb;  */

undefined8 FUN_10b9aa97c(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  undefined1 auStack_28 [8];
  
  func_0x00010b9aba70();
  if ((bool)in_ZR) {
    func_0x00010b9abb74();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b9a9544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e5fd6b2)[extraout_x8] * 4 + 0x10b9a9548))();
      return param_1;
    }
  }
  else {
    FUN_10b9aa5f0(auStack_28,4);
    func_0x00010b9aba8c();
    func_0x00010b9aba44();
  }
  return 0;
}



/* Entry: 10b9aa9cc; end: 10b9aaa1b;  */

undefined8 FUN_10b9aa9cc(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  undefined1 auStack_28 [8];
  
  func_0x00010b9aba70();
  if ((bool)in_ZR) {
    func_0x00010b9abb74();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b9a95b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e5fd6b8)[extraout_x8] * 4 + 0x10b9a95b8))();
      return param_1;
    }
  }
  else {
    FUN_10b9aa5f0(auStack_28,5);
    func_0x00010b9aba8c();
    func_0x00010b9aba44();
  }
  return 0;
}



/* Entry: 10b9aaa1c; end: 10b9aaa6b;  */

undefined8 FUN_10b9aaa1c(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  undefined1 auStack_28 [8];
  
  func_0x00010b9aba70();
  if (!(bool)in_ZR) {
    FUN_10b9aa5f0(auStack_28,7);
    func_0x00010b9aba8c();
    func_0x00010b9aba44();
    return 0;
  }
  func_0x00010b9abb74();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b9a9638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5fd6be)[extraout_x8] * 4 + 0x10b9a963c))();
    return param_1;
  }
  return 0;
}



/* Entry: 10b9aaa6c; end: 10b9aaac3;  */

double FUN_10b9aaa6c(double param_1,double *param_2)

{
  undefined1 in_ZR;
  undefined1 auStack_28 [8];
  
  func_0x00010b9aba70();
  if ((bool)in_ZR) {
    if (*(byte *)(param_2 + 1) - 2 < 2) {
      func_0x00010b9abb10();
      func_0x00010b9aba4c();
      _atof();
      func_0x00010b9aba84();
    }
    else if (*(byte *)(param_2 + 1) == 6) {
      param_1 = *param_2;
    }
    else {
      FUN_10b9a9588();
      param_1 = (double)(long)param_2;
    }
    return param_1;
  }
  FUN_10b9aa5f0(auStack_28,6);
  func_0x00010b9aba8c();
  func_0x00010b9aba44();
  return 0.0;
}



/* Entry: 10b9aaac4; end: 10b9aab1f;  */

void FUN_10b9aaac4(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  long **pplVar6;
  long **pplVar7;
  long lVar8;
  long *plVar9;
  long *unaff_x19;
  long *plVar10;
  undefined8 uStack_50;
  long *plStack_48;
  long *plStack_40;
  long lStack_38;
  
  func_0x00010b9aba14();
  if (((uint)param_2 & 0xfe) != 2) {
    FUN_10b9aa5f0(&stack0xffffffffffffffd8,2);
    func_0x00010b9aba08();
    func_0x00010b9aba44();
    *unaff_x19 = 0;
    return;
  }
  if ((char)param_1[1] != '\x03') {
    if ((char)param_1[1] == '\x02') {
      lVar8 = *param_1;
      if (lVar8 != 0) {
        piVar1 = (int *)(lVar8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *unaff_x19 = lVar8;
      lStack_38 = 0;
      func_0x00010b9abab0();
      return;
    }
LAB_10b9a93f4:
    plVar10 = param_1;
    func_0x000107c31084();
    FUN_10b9a9894(&uStack_50,param_1);
    func_0x000107c31080(plVar10,&uStack_50);
    func_0x00010b9abc2c();
    return;
  }
  plVar10 = (long *)*param_1;
  iVar2 = (int)plVar10[3];
  uVar5 = iVar2 == 2;
  if ((bool)uVar5) {
    FUN_10b9a5b88();
    param_1 = plVar10;
    func_0x000107c31084();
  }
  else {
    uVar5 = iVar2 == 1;
    if ((bool)uVar5) {
      func_0x000107c31084();
      param_2 = plVar10[2];
      plVar10 = plVar10 + 4;
      FUN_10b9972a0();
    }
    else {
      if (iVar2 != 0) goto LAB_10b9a93f4;
      func_0x000107c31084();
      param_2 = plVar10[2];
      plVar10 = plVar10 + 4;
    }
  }
  if (param_2 == 0) {
    *unaff_x19 = 0;
    return;
  }
  pplVar6 = &plStack_40;
  plStack_40 = plVar10;
  lStack_38 = param_2;
  func_0x0001003a8464(pplVar6);
  func_0x000107c60d88(param_1 + 6);
  pplVar7 = &plStack_40;
  func_0x0001003a857c(param_1,pplVar7,pplVar6);
  func_0x0001003a8718();
  if (!(bool)uVar5) {
    plVar9 = *pplVar7;
    plVar10 = plVar9 + 1;
    do {
      lVar8 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)lVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar8 == 0) {
      *(int *)plVar10 = 0;
      plStack_48 = (long *)0x0;
    }
    else {
      plStack_48 = plVar9;
      if (plVar9 != (long *)0x0) {
        uStack_50 = 0;
        plStack_48 = (long *)0x0;
        *unaff_x19 = (long)plVar9;
        func_0x0001003a8c94(&uStack_50);
        func_0x0001003a8c94(&plStack_48);
        goto code_r0x0001003a8544;
      }
    }
    func_0x0001003aca48();
    func_0x0001003a8c94(&plStack_48);
  }
  func_0x0001003a87ec(unaff_x19,param_1,plStack_40,lStack_38,pplVar6);
code_r0x0001003a8544:
  func_0x0001003a8cc4();
  return;
}



/* Entry: 10b9aab20; end: 10b9aab77;  */

void FUN_10b9aab20(long *param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *unaff_x19;
  undefined1 auStack_28 [8];
  
  func_0x00010b9aba14();
  if (param_2 != 9) {
    FUN_10b9aa5f0(auStack_28,9);
    func_0x00010b9aba08();
    func_0x00010b9aba44();
    *unaff_x19 = 0;
    return;
  }
  if (((char)param_1[1] == '\t') && (*(char *)((long)param_1 + 9) == '\x01')) {
    lVar4 = *param_1;
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
  }
  else {
    lVar4 = 0;
  }
  *unaff_x19 = lVar4;
  return;
}



/* Entry: 10b9aab78; end: 10b9aabcf;  */

void FUN_10b9aab78(long *param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *unaff_x19;
  undefined1 auStack_28 [8];
  
  func_0x00010b9aba14();
  if (param_2 != 0xb) {
    FUN_10b9aa5f0(auStack_28,0xb);
    func_0x00010b9aba08();
    func_0x00010b9aba44();
    *unaff_x19 = 0;
    return;
  }
  if (((char)param_1[1] == '\v') && (*(char *)((long)param_1 + 9) == '\x01')) {
    lVar4 = *param_1;
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
  }
  else {
    lVar4 = 0;
  }
  *unaff_x19 = lVar4;
  return;
}



/* Entry: 10b9aabd0; end: 10b9aac27;  */

void FUN_10b9aabd0(long *param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *unaff_x19;
  undefined1 auStack_28 [8];
  
  func_0x00010b9aba14();
  if (param_2 != 8) {
    FUN_10b9aa5f0(auStack_28,8);
    func_0x00010b9aba08();
    func_0x00010b9aba44();
    *unaff_x19 = 0;
    return;
  }
  if (((char)param_1[1] == '\b') && (*(char *)((long)param_1 + 9) == '\x01')) {
    lVar4 = *param_1;
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
  }
  else {
    lVar4 = 0;
  }
  *unaff_x19 = lVar4;
  return;
}



/* Entry: 10b9aac28; end: 10b9aac7f;  */

void FUN_10b9aac28(long *param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *unaff_x19;
  undefined1 auStack_28 [8];
  
  func_0x00010b9aba14();
  if (param_2 != 10) {
    FUN_10b9aa5f0(auStack_28,10);
    func_0x00010b9aba08();
    func_0x00010b9aba44();
    *unaff_x19 = 0;
    return;
  }
  if (((char)param_1[1] == '\n') && (*(char *)((long)param_1 + 9) == '\x01')) {
    lVar4 = *param_1;
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
  }
  else {
    lVar4 = 0;
  }
  *unaff_x19 = lVar4;
  return;
}



/* Entry: 10b9aac80; end: 10b9aacd7;  */

void FUN_10b9aac80(undefined8 *param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined1 auStack_28 [8];
  
  func_0x00010b9aba14();
  if (param_2 != 0xf) {
    FUN_10b9aa5f0(auStack_28,0xf);
    func_0x00010b9aba08();
    func_0x00010b9aba44();
    *unaff_x19 = 0;
    return;
  }
  bVar1 = *(char *)(param_1 + 1) == '\x0f';
  if (bVar1) {
    func_0x00010b9abca8();
    if (bVar1) {
      uVar2 = *param_1;
      func_0x00010b8c3bfc();
    }
    else {
      uVar2 = 0;
    }
    *unaff_x19 = uVar2;
    return;
  }
  *unaff_x19 = 0;
  return;
}



/* Entry: 10b9aacd8; end: 10b9aad2f;  */

void FUN_10b9aacd8(long *param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *unaff_x19;
  undefined1 auStack_28 [8];
  
  func_0x00010b9aba14();
  if (param_2 != 0xd) {
    FUN_10b9aa5f0(auStack_28,0xd);
    func_0x00010b9aba08();
    func_0x00010b9aba44();
    *unaff_x19 = 0;
    return;
  }
  if (((char)param_1[1] == '\r') && (*(char *)((long)param_1 + 9) == '\x01')) {
    lVar4 = *param_1;
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
  }
  else {
    lVar4 = 0;
  }
  *unaff_x19 = lVar4;
  return;
}



/* Entry: 10b9aad30; end: 10b9aad87;  */

void FUN_10b9aad30(undefined8 *param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined1 auStack_28 [8];
  
  func_0x00010b9aba14();
  if (param_2 != 0xe) {
    FUN_10b9aa5f0(auStack_28,0xe);
    func_0x00010b9aba08();
    func_0x00010b9aba44();
    *unaff_x19 = 0;
    return;
  }
  bVar1 = *(char *)(param_1 + 1) == '\x0e';
  if (bVar1) {
    func_0x00010b9abca8();
    if (bVar1) {
      uVar2 = *param_1;
      func_0x00010b9a2f44();
    }
    else {
      uVar2 = 0;
    }
    *unaff_x19 = uVar2;
    return;
  }
  *unaff_x19 = 0;
  return;
}



/* Entry: 10b9aad88; end: 10b9ab3db;  */

void FUN_10b9aad88(ulong *param_1,ulong *param_2,long param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  puStack_78 = param_2;
  do {
    puVar6 = param_1;
LAB_10b9aadcc:
    param_1 = puVar6;
    uVar16 = (long)puStack_78 - (long)param_1 >> 3;
    switch(uVar16) {
    case 0:
    case 1:
      goto LAB_10b9ab3bc;
    case 2:
      iVar2 = (int)puStack_78[-1];
      func_0x00010b9abc40();
      if (iVar2 == 0) {
        return;
      }
      FUN_10b9ab748(param_1,puStack_78 + -1);
      return;
    case 3:
      func_0x00010b9abb6c(param_1,param_1 + 1);
      return;
    case 4:
      func_0x00010b9ab4c4(param_1,param_1 + 1,param_1 + 2,puStack_78 + -1);
      return;
    case 5:
      FUN_10b9ab528(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puStack_78 + -1);
      goto LAB_10b9ab3bc;
    }
    if ((long)uVar16 < 0x18) {
      if ((param_4 & 1) == 0) {
        if (param_1 == puStack_78) {
          return;
        }
        while (puVar6 = param_1, param_1 = puVar6 + 1, param_1 != puStack_78) {
          uVar16 = puVar6[1];
          FUN_10b9ab3dc(uVar16,*puVar6);
          if ((int)uVar16 != 0) {
            func_0x00010b9abb84();
            do {
              puVar3 = puVar6;
              func_0x00010b9abc0c();
              func_0x00010b9abb18();
              puVar6 = puVar3 + -1;
            } while ((uVar16 & 1) != 0);
            func_0x000107c31060(puVar3,&uStack_68);
            func_0x00010b9abab0();
          }
        }
        return;
      }
      if (param_1 == puStack_78) {
        return;
      }
      lVar15 = 0;
      puVar6 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == puStack_78) {
        return;
      }
      uVar13 = uVar16 - 2 >> 1;
      uVar14 = uVar13;
      goto LAB_10b9ab160;
    }
    puVar6 = param_1 + (uVar16 >> 1);
    if (uVar16 < 0x81) {
      func_0x00010b9abb6c(puVar6,param_1);
    }
    else {
      func_0x00010b9abb6c(param_1,puVar6);
      FUN_10b9ab434(param_1 + 1,puVar6 + -1,puStack_78 + -2);
      FUN_10b9ab434(param_1 + 2,puVar6 + 1,puStack_78 + -3);
      FUN_10b9ab434(puVar6 + -1,puVar6,puVar6 + 1);
      FUN_10b9ab748(param_1,puVar6);
    }
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      uVar16 = param_1[-1];
      FUN_10b9ab3dc(uVar16,*param_1);
      if ((uVar16 & 1) == 0) {
        func_0x00010b9abb84();
        uVar16 = uStack_68;
        func_0x00010b9abac0();
        puVar6 = param_1;
        if ((uVar16 & 1) == 0) {
          do {
            puVar6 = puVar6 + 1;
            if (puStack_78 <= puVar6) break;
            uVar16 = uStack_68;
            FUN_10b9ab3dc(uStack_68,*puVar6);
          } while ((int)uVar16 == 0);
        }
        else {
          do {
            puVar6 = puVar6 + 1;
            func_0x00010b9abb18();
          } while ((uVar16 & 1) == 0);
        }
        puVar3 = puStack_78;
        if (puVar6 < puStack_78) {
          do {
            puVar3 = puVar3 + -1;
            func_0x00010b9abb18();
          } while ((uVar16 & 1) != 0);
        }
        while (puVar6 < puVar3) {
          puVar5 = puVar6;
          FUN_10b9ab748(puVar6,puVar3);
          do {
            puVar6 = puVar6 + 1;
            func_0x00010b9abb18();
          } while ((int)puVar5 == 0);
          do {
            puVar3 = puVar3 + -1;
            func_0x00010b9abb18();
          } while (((ulong)puVar5 & 1) != 0);
        }
        puVar3 = puVar6 + -1;
        if (param_1 != puVar3) {
          func_0x000107c31060(param_1,puVar3);
        }
        func_0x000107c31060(puVar3,&uStack_68);
        func_0x00010b9abab0();
        param_4 = 0;
        goto LAB_10b9aadcc;
      }
    }
    lVar15 = 0;
    func_0x00010b9abb84();
    do {
      uVar16 = *(ulong *)((long)param_1 + lVar15 + 8);
      func_0x00010b9abac8();
      lVar15 = lVar15 + 8;
    } while ((uVar16 & 1) != 0);
    puVar3 = (ulong *)((long)param_1 + lVar15);
    puVar5 = puStack_78;
    puVar6 = puVar3;
    if (lVar15 == 8) {
      do {
        puVar4 = puVar5;
        if (puVar5 <= puVar3) break;
        puVar5 = puVar5 + -1;
        uVar16 = *puVar5;
        func_0x00010b9abac8();
        puVar4 = puVar5;
      } while ((uVar16 & 1) == 0);
    }
    else {
      do {
        puVar5 = puVar5 + -1;
        iVar2 = (int)*puVar5;
        func_0x00010b9abac8();
        puVar4 = puVar5;
      } while (iVar2 == 0);
    }
    while (puVar6 < puVar5) {
      FUN_10b9ab748(puVar6,puVar5);
      do {
        puVar6 = puVar6 + 1;
        uVar16 = *puVar6;
        func_0x00010b9abac8();
      } while ((uVar16 & 1) != 0);
      do {
        puVar5 = puVar5 + -1;
        uVar16 = *puVar5;
        func_0x00010b9abac8();
      } while ((uVar16 & 1) == 0);
    }
    puVar5 = puVar6 + -1;
    if (param_1 != puVar5) {
      func_0x000107c31060(param_1,puVar5);
    }
    func_0x000107c31060(puVar5,&uStack_68);
    func_0x00010b9abab0();
    if (puVar3 < puVar4) goto LAB_10b9aaf4c;
    puVar3 = param_1;
    FUN_10b9ab5c8(param_1,puVar5);
    puVar4 = puVar6;
    FUN_10b9ab5c8(puVar6,puStack_78);
    if ((int)puVar4 == 0) goto code_r0x00010b9aaf48;
    puStack_78 = puVar5;
    if (((ulong)puVar3 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10b9ab0d4:
  puVar3 = puVar6 + 1;
  if (puVar3 == puStack_78) {
    return;
  }
  uVar16 = puVar6[1];
  FUN_10b9ab3dc(uVar16,*puVar6);
  if ((int)uVar16 != 0) {
    uStack_68 = *puVar3;
    *puVar3 = 0;
    lVar1 = lVar15;
    do {
      lVar12 = lVar1;
      func_0x00010b9abc0c();
      puVar6 = param_1;
      if (lVar12 == 0) goto LAB_10b9ab130;
      uVar16 = uStack_68;
      FUN_10b9ab3dc(uStack_68,*(undefined8 *)((long)param_1 + lVar12 + -8));
      lVar1 = lVar12 + -8;
    } while ((uVar16 & 1) != 0);
    puVar6 = (ulong *)((long)param_1 + lVar12);
LAB_10b9ab130:
    func_0x000107c31060(puVar6,&uStack_68);
    func_0x00010b9abab0();
  }
  lVar15 = lVar15 + 8;
  puVar6 = puVar3;
  goto LAB_10b9ab0d4;
LAB_10b9ab160:
  do {
    if ((long)uVar14 <= (long)uVar13) {
      uVar10 = (uVar14 & 0x3fffffffffffffff) << 1 | 1;
      puVar6 = param_1 + uVar10;
      uVar8 = uVar14 * 2 + 2;
      puVar3 = puVar6;
      uVar11 = uVar10;
      if ((long)uVar8 < (long)uVar16) {
        uVar7 = *puVar6;
        FUN_10b9ab3dc(uVar7,puVar6[1]);
        puVar3 = puVar6 + 1;
        uVar11 = uVar8;
        if ((int)uVar7 == 0) {
          puVar3 = puVar6;
          uVar11 = uVar10;
        }
      }
      puVar6 = param_1 + uVar14;
      uVar8 = *puVar3;
      FUN_10b9ab3dc(uVar8,*puVar6);
      if ((uVar8 & 1) == 0) {
        uVar8 = *puVar6;
        *puVar6 = 0;
        uStack_68 = uVar8;
        do {
          puVar5 = puVar3;
          func_0x000107c31060(puVar6,puVar5);
          if ((long)uVar13 < (long)uVar11) break;
          uVar7 = uVar11 << 1 | 1;
          puVar6 = param_1 + uVar7;
          uVar10 = uVar11 * 2 + 2;
          puVar3 = puVar6;
          uVar11 = uVar7;
          if ((long)uVar10 < (long)uVar16) {
            uVar9 = *puVar6;
            FUN_10b9ab3dc(uVar9,puVar6[1]);
            puVar3 = puVar6 + 1;
            uVar11 = uVar10;
            if ((int)uVar9 == 0) {
              puVar3 = puVar6;
              uVar11 = uVar7;
            }
          }
          uVar10 = *puVar3;
          FUN_10b9ab3dc(uVar10,uVar8);
          puVar6 = puVar5;
        } while ((int)uVar10 == 0);
        func_0x00010b9abbd8();
        func_0x00010b9abab0();
      }
    }
    uVar14 = uVar14 - 1;
  } while (-1 < (long)uVar14);
  do {
    if ((long)uVar16 < 2) {
LAB_10b9ab3bc:
      return;
    }
    uStack_70 = *param_1;
    *param_1 = 0;
    puVar6 = param_1;
    uVar14 = 0;
    do {
      uVar8 = uVar14 << 1 | 1;
      uVar13 = uVar14 * 2 + 2;
      puVar3 = puVar6 + uVar14 + 1;
      uVar10 = uVar8;
      if ((long)uVar13 < (long)uVar16) {
        uVar11 = puVar6[uVar14 + 1];
        FUN_10b9ab3dc(uVar11,puVar6[uVar14 + 2]);
        puVar3 = puVar6 + uVar14 + 2;
        uVar10 = uVar13;
        if ((int)uVar11 == 0) {
          puVar3 = puVar6 + uVar14 + 1;
          uVar10 = uVar8;
        }
      }
      func_0x000107c31060(puVar6,puVar3);
      puVar6 = puVar3;
      uVar14 = uVar10;
    } while ((long)uVar10 <= (long)(uVar16 - 2 >> 1));
    puStack_78 = puStack_78 + -1;
    if (puVar3 == puStack_78) {
      func_0x000107c31060(puVar3,&uStack_70);
    }
    else {
      func_0x000107c31060(puVar3,puStack_78);
      func_0x000107c31060(puStack_78,&uStack_70);
      lVar15 = (long)puVar3 + (8 - (long)param_1) >> 3;
      if (1 < lVar15) {
        uVar14 = lVar15 - 2U >> 1;
        iVar2 = (int)param_1[uVar14];
        func_0x00010b9abac0();
        if (iVar2 != 0) {
          uStack_68 = *puVar3;
          *puVar3 = 0;
          puVar6 = param_1 + uVar14;
          do {
            func_0x000107c31060(puVar3,puVar6);
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1 >> 1;
            uVar13 = param_1[uVar14];
            func_0x00010b9abac8();
            puVar3 = puVar6;
            puVar6 = param_1 + uVar14;
          } while ((uVar13 & 1) != 0);
          func_0x00010b9abbd8();
          func_0x00010b9abab0();
        }
      }
    }
    func_0x000107c278f4(&uStack_70);
    uVar16 = uVar16 - 1;
  } while( true );
code_r0x00010b9aaf48:
  if (((ulong)puVar3 & 1) == 0) {
LAB_10b9aaf4c:
    FUN_10b9aad88(param_1,puVar5,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_10b9aadcc;
}


