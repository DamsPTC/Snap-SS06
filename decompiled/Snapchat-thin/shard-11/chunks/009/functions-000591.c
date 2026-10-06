/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108b80734; end: 108b807ef;  */

void FUN_108b80734(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    return;
  }
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x000107c278b8(auStack_60,&UNK_10f50250d);
  func_0x000107c27fac(auStack_48,auStack_60,param_2);
  func_0x0001052768d8(uVar2,auStack_48);
  ___cxa_throw(uVar2,PTR___ZTISt16invalid_argument_110352248,
               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108b807b4);
  (*pcVar1)();
}



/* Entry: 108b807f0; end: 108b80887;  */

void FUN_108b807f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  long *plStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_e8;
  undefined2 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000104c003e8(param_3);
  func_0x00010b9941f8(&uStack_50);
  uStack_58 = uStack_50;
  func_0x000104bdc2fc(&uStack_50);
  func_0x000108b80b74(&uStack_50,&uStack_58,param_2);
  puVar6 = auStack_48;
  func_0x000107c30f40(param_1);
  puVar4 = &uStack_50;
  func_0x000107c2a668();
  func_0x000108b80b80(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  pcStack_68 = FUN_108b80888;
  uStack_88 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_80 = param_2;
  uStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010b9941f8(&uStack_a8);
  if (((ulong)puVar6 & 1) == 0) {
    func_0x000107c31000(uStack_a8);
    iVar5 = (int)puVar4;
  }
  else {
    uStack_b0 = uStack_a8;
    func_0x000108b80b74(auStack_a0,&uStack_b0,puVar4);
    func_0x000107c30f50();
    lStack_e8 = puVar4[2];
    if (lStack_e8 != 0) {
      piVar1 = (int *)(lStack_e8 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_e0 = 0xff00;
    func_0x000107c30fa8(auStack_d8,&lStack_e8);
    func_0x000107c31030(auStack_c8,auStack_d8);
    func_0x000107c27900(auStack_d0);
    func_0x000107c278f4(&lStack_e8);
    puVar6 = auStack_c8;
    func_0x00010b994158(uStack_a8,puVar6,auStack_98);
    iVar5 = (int)puVar6;
    func_0x000107c27900(auStack_c0);
    func_0x000107c2a668(auStack_a0);
  }
  func_0x000104bdc2fc(&uStack_a8);
  func_0x000108b80b80(uStack_88);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010b9a96d0(&lStack_128);
  plStack_140 = *(long **)(lStack_128 + 0x18);
  if (plStack_140 != (long *)0x0) {
    (**(code **)(*plStack_140 + 0x10))(plStack_140);
  }
  lStack_130 = *(long *)(lStack_128 + 0x28);
  lStack_138 = *(long *)(lStack_128 + 0x20);
  func_0x000107c27d7c(extraout_x8,lStack_138,lStack_138 + lStack_130);
  func_0x000107c27900(&plStack_140);
  func_0x000104bdb38c(&lStack_128);
  return;
}



/* Entry: 108b80888; end: 108b8099b;  */

void FUN_108b80888(long param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_88;
  undefined2 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010b9941f8(&uStack_48);
  if ((param_2 & 1) == 0) {
    func_0x000107c31000(uStack_48);
    iVar4 = (int)param_1;
  }
  else {
    uStack_50 = uStack_48;
    func_0x000108b80b74(auStack_40,&uStack_50,param_1);
    func_0x000107c30f50();
    lStack_88 = *(long *)(param_1 + 0x10);
    if (lStack_88 != 0) {
      piVar1 = (int *)(lStack_88 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_80 = 0xff00;
    func_0x000107c30fa8(auStack_78,&lStack_88);
    func_0x000107c31030(auStack_68,auStack_78);
    func_0x000107c27900(auStack_70);
    func_0x000107c278f4(&lStack_88);
    puVar5 = auStack_68;
    func_0x00010b994158(uStack_48,puVar5,auStack_38);
    iVar4 = (int)puVar5;
    func_0x000107c27900(auStack_60);
    func_0x000107c2a668(auStack_40);
  }
  func_0x000104bdc2fc(&uStack_48);
  func_0x000108b80b80(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010b9a96d0(&lStack_c8);
  plStack_e0 = *(long **)(lStack_c8 + 0x18);
  if (plStack_e0 != (long *)0x0) {
    (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
  }
  lStack_d0 = *(long *)(lStack_c8 + 0x28);
  lStack_d8 = *(long *)(lStack_c8 + 0x20);
  func_0x000107c27d7c(extraout_x8,lStack_d8,lStack_d8 + lStack_d0);
  func_0x000107c27900(&plStack_e0);
  func_0x000104bdb38c(&lStack_c8);
  return;
}



/* Entry: 108b8099c; end: 108b80a1b;  */

void FUN_108b8099c(undefined8 param_1)

{
  long *plStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x00010b9a96d0(&lStack_38);
  plStack_50 = *(long **)(lStack_38 + 0x18);
  if (plStack_50 != (long *)0x0) {
    (**(code **)(*plStack_50 + 0x10))(plStack_50);
  }
  lStack_40 = *(long *)(lStack_38 + 0x28);
  lStack_48 = *(long *)(lStack_38 + 0x20);
  func_0x000107c27d7c(param_1,lStack_48,lStack_48 + lStack_40);
  func_0x000107c27900(&plStack_50);
  func_0x000104bdb38c(&lStack_38);
  return;
}



/* Entry: 108b80a1c; end: 108b80a93;  */

void FUN_108b80a1c(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uStack_34;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  func_0x00010527d8c0(&lStack_28);
  func_0x000106e55508(lStack_28 + 0x10,*param_2,param_2[1]);
  uStack_34 = 3;
  func_0x00010527d8ec(auStack_30,&uStack_34,&lStack_28);
  func_0x00010b9a8f90(param_1,auStack_30);
  func_0x000104bdb38c(auStack_30);
  func_0x00010527d94c(&lStack_28);
  return;
}



/* Entry: 108b80a94; end: 108b80aeb;  */

undefined8 FUN_108b80a94(void)

{
  int iVar1;
  
  if ((bRam00000001138286b0 & 1) == 0) {
    iVar1 = 0x138286b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c30fa4(0x1138286a0);
      ___cxa_guard_release(0x1138286b0);
    }
  }
  return 0x1138286a0;
}



/* Entry: 108b80aec; end: 108b80b0b;  */

long FUN_108b80aec(double param_1)

{
  func_0x00010b9a92f0();
  return (long)param_1 * 1000;
}



/* Entry: 108b80b0c; end: 108b80b63;  */

undefined8 FUN_108b80b0c(void)

{
  int iVar1;
  
  if ((bRam00000001138286c8 & 1) == 0) {
    iVar1 = 0x138286c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e88(0x1138286b8);
      ___cxa_guard_release(0x1138286c8);
    }
  }
  return 0x1138286b8;
}



/* Entry: 108b80b64; end: 108b80b93;  */

void FUN_108b80b64(void)

{
  return;
}



/* Entry: 108b80b94; end: 108b80bcf;  */

void FUN_108b80b94(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  
  func_0x000108b80de0();
  *param_1 = extraout_x8;
  *(undefined4 *)(param_1 + 1) = param_2;
  func_0x000107c278b8(param_1 + 2,param_3);
  return;
}



/* Entry: 108b80bd0; end: 108b80be7;  */

void FUN_108b80bd0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 extraout_x8;
  
  puVar1 = &UNK_10f502528;
  func_0x000108b80de0(param_1,param_2,&UNK_10f502528);
  *param_1 = extraout_x8;
  *(int *)(param_1 + 1) = (int)param_2;
  func_0x000107c278b8(param_1 + 2,puVar1);
  return;
}



/* Entry: 108b80be8; end: 108b80c4b;  */

undefined8 * FUN_108b80be8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar1 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *param_1 = &PTR_FUN_110ab4390;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  param_1[4] = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  func_0x000108b80df0();
  return param_1;
}



/* Entry: 108b80c4c; end: 108b80d0b;  */

undefined8 *
FUN_108b80c4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  uVar1 = param_2;
  uStack_60 = param_3;
  uStack_58 = param_4;
  FUN_10894f438();
  FUN_108969520(auStack_90,param_2);
  func_0x000107c2a67c(auStack_50,&uStack_60,auStack_90);
  func_0x000107c2793c(&UNK_10f502529);
  func_0x000107c3173c(&uStack_78);
  *param_1 = &PTR_FUN_110ab4390;
  *(int *)(param_1 + 1) = (int)uVar1;
  param_1[3] = uStack_70;
  param_1[2] = uStack_78;
  param_1[4] = uStack_68;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
  func_0x000108b80df0();
  return param_1;
}



/* Entry: 108b80d0c; end: 108b80d13;  */

void FUN_108b80d0c(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 extraout_x8;
  
  uVar1 = 0xffffffff;
  puVar2 = &UNK_10f502528;
  func_0x000108b80de0(param_1,0xffffffff,&UNK_10f502528);
  *param_1 = extraout_x8;
  *(undefined4 *)(param_1 + 1) = uVar1;
  func_0x000107c278b8(param_1 + 2,puVar2);
  return;
}



/* Entry: 108b80d14; end: 108b80d53;  */

void FUN_108b80d14(undefined8 *param_1,long param_2)

{
  undefined8 extraout_x8;
  
  func_0x000108b80de0();
  *param_1 = extraout_x8;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 2,param_2 + 0x10);
  return;
}



/* Entry: 108b80d54; end: 108b80dab;  */

long FUN_108b80d54(long param_1,long param_2)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  func_0x000107c27b9c(param_1 + 0x10,param_2 + 0x10);
  return param_1;
}



/* Entry: 108b80dac; end: 108b80daf;  */

void FUN_108b80dac(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x000108b80de0();
  *param_1 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 108b80db0; end: 108b80dc3;  */

void FUN_108b80db0(void)

{
  func_0x000108b80d84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b80dc4; end: 108b80e0b;  */

undefined8 * FUN_108b80dc4(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x27)) {
    return (undefined8 *)(param_1 + 0x10);
  }
  return *(undefined8 **)(param_1 + 0x10);
}



/* Entry: 108b80e0c; end: 108b80edf;  */

undefined1 * FUN_108b80e0c(long param_1,int *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  int *piStack_50;
  long lStack_48;
  undefined1 auStack_40 [32];
  
  lVar2 = param_1;
  FUN_10897677c(auStack_40);
  if (*param_2 == 0) {
    FUN_108b80ee0(param_1);
  }
  param_2 = param_2 + 2;
  FUN_108940f84();
  piStack_50 = param_2;
  lStack_48 = lVar2;
  while (piStack_50 != (int *)0x0) {
    if (*(char *)(lStack_48 + 0x20) == '\x01') {
      FUN_108b80f28(param_1,lStack_48);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    }
    else {
      FUN_108b80f50(param_1,lStack_48);
    }
    FUN_108941008(&piStack_50);
  }
  puVar1 = auStack_40;
  FUN_108b80f8c(puVar1,param_1);
  FUN_1089393cc(auStack_40);
  return puVar1;
}



/* Entry: 108b80ee0; end: 108b80f27;  */

void FUN_108b80ee0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = param_1[2];
  if (uVar1 != 0) {
    FUN_108939400();
    param_1[3] = 0;
    if (uVar1 < 0x80) {
      lVar3 = param_1[2];
      lVar2 = *param_1;
      _memset(lVar2,0x80,lVar3 + 8);
      *(undefined1 *)(lVar2 + lVar3) = 0xff;
      uVar1 = param_1[2];
      lVar2 = 6;
      if (uVar1 != 7) {
        lVar2 = uVar1 - (uVar1 >> 3);
      }
      *(long *)(*param_1 + -8) = lVar2 - param_1[3];
    }
    else {
      (*(code *)&DAT_104c32e5c)(param_1);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = (long)&UNK_10e52b660;
    }
    return;
  }
  return;
}



/* Entry: 108b80f28; end: 108b80f4f;  */

long FUN_108b80f28(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_108b80fa4(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 108b80f50; end: 108b80f8b;  */

void FUN_108b80f50(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_108b81004();
  if (lVar1 != 0) {
    FUN_108b81024(param_1,lVar1,param_2);
  }
  return;
}



/* Entry: 108b80f8c; end: 108b80fa3;  */

uint FUN_108b80f8c(uint param_1)

{
  FUN_108b81104();
  return param_1 ^ 1;
}



/* Entry: 108b80fa4; end: 108b81003;  */

void FUN_108b80fa4(long *param_1,long *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  
  uVar4 = (uint)param_3;
  plVar3 = param_2;
  FUN_108940a40();
  if ((uVar4 & 1) != 0) {
    puVar1 = (undefined4 *)(param_2[1] + (long)plVar3 * 0x20);
    *puVar1 = *param_3;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
  }
  lVar2 = param_2[1];
  *param_1 = *param_2 + (long)plVar3;
  param_1[1] = lVar2 + (long)plVar3 * 0x20;
  *(char *)(param_1 + 2) = (char)uVar4;
  return;
}



/* Entry: 108b81004; end: 108b81023;  */

undefined1  [16] FUN_108b81004(ulong *param_1,int *param_2)

{
  undefined1 auVar1 [16];
  ulong extraout_x8;
  long lVar2;
  ulong uVar3;
  ulong extraout_x10;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined8 uVar9;
  byte bVar15;
  undefined1 auVar16 [16];
  
  Hint_Prefetch(*param_1,0,2,0);
  FUN_108b8127c(*param_2);
  lVar2 = 0;
  uVar3 = *param_1;
  uVar5 = uVar3 >> 0xc ^ (extraout_x8 ^ extraout_x10) >> 7;
  bVar4 = (byte)(extraout_x8 ^ extraout_x10) & 0x7f;
  while( true ) {
    uVar5 = uVar5 & param_1[2];
    uVar9 = *(undefined8 *)(uVar3 + uVar5);
    bVar8 = (byte)((ulong)uVar9 >> 8);
    bVar10 = (byte)((ulong)uVar9 >> 0x10);
    bVar11 = (byte)((ulong)uVar9 >> 0x18);
    bVar12 = (byte)((ulong)uVar9 >> 0x20);
    bVar13 = (byte)((ulong)uVar9 >> 0x28);
    bVar14 = (byte)((ulong)uVar9 >> 0x30);
    bVar15 = (byte)((ulong)uVar9 >> 0x38);
    for (uVar6 = CONCAT17(-(bVar15 == bVar4),
                          CONCAT16(-(bVar14 == bVar4),
                                   CONCAT15(-(bVar13 == bVar4),
                                            CONCAT14(-(bVar12 == bVar4),
                                                     CONCAT13(-(bVar11 == bVar4),
                                                              CONCAT12(-(bVar10 == bVar4),
                                                                       CONCAT11(-(bVar8 == bVar4),
                                                                                -((byte)uVar9 ==
                                                                                 bVar4)))))))) &
                 0x8080808080808080; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar7 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar5 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & param_1[2];
      if (*(int *)(param_1[1] + uVar7 * 0x20) == *param_2) {
        auVar16._8_8_ = param_1[1] + uVar7 * 0x20;
        auVar16._0_8_ = uVar3 + uVar7;
        return auVar16;
      }
    }
    bVar8 = NEON_umaxv(CONCAT17(-(bVar15 == 0x80),
                                CONCAT16(-(bVar14 == 0x80),
                                         CONCAT15(-(bVar13 == 0x80),
                                                  CONCAT14(-(bVar12 == 0x80),
                                                           CONCAT13(-(bVar11 == 0x80),
                                                                    CONCAT12(-(bVar10 == 0x80),
                                                                             CONCAT11(-(bVar8 == 
                                                  0x80),-((byte)uVar9 == 0x80)))))))),1);
    if ((bVar8 & 1) != 0) break;
    lVar2 = lVar2 + 8;
    uVar5 = lVar2 + uVar5;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}



/* Entry: 108b81024; end: 108b81063;  */

void FUN_108b81024(long *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_3 + 8);
  uVar1 = param_1[2];
  param_1[3] = param_1[3] + -1;
  lVar3 = *param_1;
  uVar6 = *param_2;
  uVar4 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)((long)param_2 + (-8 - lVar3)) & uVar1));
  lVar7 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  if (lVar7 == 0 || uVar4 == 0) {
    uVar4 = 0;
    uVar5 = 0xfe;
  }
  else {
    uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    bVar2 = ((ulong)LZCOUNT(lVar7) >> 3) + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) < 8;
    uVar4 = (ulong)bVar2;
    uVar5 = 0x80;
    if (!bVar2) {
      uVar5 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar5;
  *(undefined1 *)(lVar3 + ((ulong)((long)param_2 + (-7 - lVar3)) & uVar1) + (uVar1 & 7)) = uVar5;
  *(ulong *)(lVar3 + -8) = *(long *)(lVar3 + -8) + uVar4;
  return;
}



/* Entry: 108b81064; end: 108b81103;  */

undefined1  [16] FUN_108b81064(ulong *param_1,int *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined8 uVar9;
  byte bVar15;
  undefined1 auVar16 [16];
  
  lVar2 = 0;
  uVar3 = *param_1;
  uVar5 = uVar3 >> 0xc ^ param_3 >> 7;
  bVar4 = (byte)param_3 & 0x7f;
  while( true ) {
    uVar5 = uVar5 & param_1[2];
    uVar9 = *(undefined8 *)(uVar3 + uVar5);
    bVar8 = (byte)((ulong)uVar9 >> 8);
    bVar10 = (byte)((ulong)uVar9 >> 0x10);
    bVar11 = (byte)((ulong)uVar9 >> 0x18);
    bVar12 = (byte)((ulong)uVar9 >> 0x20);
    bVar13 = (byte)((ulong)uVar9 >> 0x28);
    bVar14 = (byte)((ulong)uVar9 >> 0x30);
    bVar15 = (byte)((ulong)uVar9 >> 0x38);
    for (uVar6 = CONCAT17(-(bVar15 == bVar4),
                          CONCAT16(-(bVar14 == bVar4),
                                   CONCAT15(-(bVar13 == bVar4),
                                            CONCAT14(-(bVar12 == bVar4),
                                                     CONCAT13(-(bVar11 == bVar4),
                                                              CONCAT12(-(bVar10 == bVar4),
                                                                       CONCAT11(-(bVar8 == bVar4),
                                                                                -((byte)uVar9 ==
                                                                                 bVar4)))))))) &
                 0x8080808080808080; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar7 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar5 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & param_1[2];
      if (*(int *)(param_1[1] + uVar7 * 0x20) == *param_2) {
        auVar16._8_8_ = param_1[1] + uVar7 * 0x20;
        auVar16._0_8_ = uVar3 + uVar7;
        return auVar16;
      }
    }
    bVar8 = NEON_umaxv(CONCAT17(-(bVar15 == 0x80),
                                CONCAT16(-(bVar14 == 0x80),
                                         CONCAT15(-(bVar13 == 0x80),
                                                  CONCAT14(-(bVar12 == 0x80),
                                                           CONCAT13(-(bVar11 == 0x80),
                                                                    CONCAT12(-(bVar10 == 0x80),
                                                                             CONCAT11(-(bVar8 == 
                                                  0x80),-((byte)uVar9 == 0x80)))))))),1);
    if ((bVar8 & 1) != 0) break;
    lVar2 = lVar2 + 8;
    uVar5 = lVar2 + uVar5;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}



/* Entry: 108b81104; end: 108b81183;  */

bool FUN_108b81104(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18)) {
    lVar2 = param_2;
    if (*(ulong *)(param_1 + 0x10) <= *(ulong *)(param_2 + 0x10)) {
      lVar2 = param_1;
      param_1 = param_2;
    }
    FUN_1089768dc();
    lStack_30 = lVar2;
    lStack_28 = param_2;
    while ((bVar1 = lStack_30 == 0, lStack_30 != 0 &&
           (lVar2 = param_1, FUN_108b81184(param_1,lStack_28), (int)lVar2 != 0))) {
      func_0x000108976960(&lStack_30);
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 108b81184; end: 108b8127b;  */

bool FUN_108b81184(ulong *param_1,int *param_2)

{
  ulong uVar1;
  byte bVar2;
  ulong *puVar3;
  int *piVar4;
  ulong extraout_x8;
  ulong uVar5;
  ulong extraout_x10;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  
  lVar6 = 0;
  puVar3 = param_1;
  FUN_108b8127c(*param_2);
  uVar7 = *puVar3;
  bVar2 = (byte)(extraout_x8 ^ extraout_x10);
  uVar11 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))) &
           0x7f7f7f7f7f7f;
  uVar8 = puVar3[2];
  uVar5 = (extraout_x8 ^ extraout_x10) >> 7 ^ uVar7 >> 0xc;
  while( true ) {
    uVar5 = uVar5 & uVar8;
    uVar12 = *(undefined8 *)(uVar7 + uVar5);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar9 = CONCAT17(-(bVar18 == (bVar2 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar2 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar9 != 0;
        uVar9 = uVar9 - 1 & uVar9) {
      uVar1 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      piVar4 = (int *)(param_1[1] +
                      (uVar5 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar8) * 0x20)
      ;
      if (*piVar4 == *param_2) {
        piVar4 = piVar4 + 2;
        func_0x000107c278d0(piVar4,param_2 + 2);
        if (((ulong)piVar4 & 1) != 0) goto LAB_108b81254;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
LAB_108b81254:
  return uVar9 != 0;
}



/* Entry: 108b8127c; end: 108b812a3;  */

void FUN_108b8127c(void)

{
  return;
}



/* Entry: 108b812a4; end: 108b812d3;  */

void FUN_108b812a4(void)

{
  undefined8 uStack_18;
  
  uStack_18 = uRam00000001138286d8;
  FUN_108b812d4(&uStack_18);
  return;
}



/* Entry: 108b812d4; end: 108b81333;  */

void FUN_108b812d4(undefined8 param_1)

{
  func_0x000107c2793c(&UNK_10f502530);
  func_0x000107c3173c(param_1);
  return;
}



/* Entry: 108b81334; end: 108b81473;  */

undefined8 FUN_108b81334(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_78 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_60 = param_1;
  uStack_58 = param_2;
  func_0x000106886424(auStack_50,&DAT_10f62a9de);
  puVar3 = &uStack_60;
  func_0x000107859ca4(&lStack_78,puVar3,auStack_50,1);
  func_0x00010688c9f8(auStack_50);
  if (lStack_70 - lStack_78 == 0x60) {
    uVar4 = 0;
    while( true ) {
      uVar5 = uStack_80;
      if ((ulong)((lStack_70 - lStack_78) / 0x18) <= uVar4) goto LAB_108b81434;
      lVar1 = lStack_78 + uVar4 * 0x18;
      puVar3 = (undefined8 *)0x0;
      __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(lVar1,0,10);
      if (0xffff < (uint)lVar1) break;
      *(short *)((long)&uStack_80 + uVar4 * 2) = (short)lVar1;
      uVar4 = (ulong)((int)uVar4 + 1);
    }
  }
  while( true ) {
    uVar5 = 0;
LAB_108b81434:
    plVar2 = &lStack_78;
    func_0x000107c278a8(plVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) break;
    ___stack_chk_fail();
    do {
      func_0x000107c278a8(&lStack_78);
      __Unwind_Resume(plVar2);
    } while ((int)puVar3 != 1);
    ___cxa_begin_catch(plVar2);
    ___cxa_end_catch();
  }
  return uVar5;
}



/* Entry: 108b81474; end: 108b8149b;  */

void FUN_108b81474(long param_1)

{
  FUN_108b81334();
  uRam00000001138286d8 = param_1 << 0x10 | 3;
  return;
}



/* Entry: 108b8149c; end: 108b81557;  */

void FUN_108b8149c(undefined4 *param_1,int param_2)

{
  if (param_2 == 1) {
    func_0x000108b81580(0x70);
    *(undefined8 *)(param_1 + 10) = 0x1f4000007d00;
    *(undefined8 *)(param_1 + 8) = 0x280000bb80;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  else if (param_2 == 0) {
    func_0x000108b81580(0x6f);
    *(undefined8 *)(param_1 + 10) = 0x1f4000007d00;
    *(undefined8 *)(param_1 + 8) = 0x280000bb80;
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  else {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)((long)param_1 + 0x29) = 0;
    *(undefined8 *)((long)param_1 + 0x21) = 0;
  }
  return;
}



/* Entry: 108b81558; end: 108b81593;  */

undefined * FUN_108b81558(int param_1)

{
  if (param_1 + 1U < 6) {
    return (&PTR_DAT_110ab43c0)[param_1 + 1U];
  }
  return &UNK_10f50256a;
}



/* Entry: 108b81594; end: 108b81603;  */

void FUN_108b81594(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  
  FUN_108b8163c();
  puStack_28 = &uStack_29;
  uVar1 = (ulong)*(uint *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x20) == 0xffffffff) {
    uVar1 = 0xffffffffffffffff;
  }
  uVar2 = (ulong)*(uint *)(param_2 + 0x20);
  if (*(uint *)(param_2 + 0x20) == 0xffffffff) {
    uVar2 = 0xffffffffffffffff;
  }
  (*(code *)(&PTR_FUN_110ab4438)[uVar1 * 3 + uVar2])(&puStack_28,param_1,param_2);
  return;
}



/* Entry: 108b81604; end: 108b8163b;  */

undefined8 FUN_108b81604(void)

{
  return 1;
}



/* Entry: 108b8163c; end: 108b8165f;  */

long FUN_108b8163c(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x20) != -1 && *(int *)(param_2 + 0x20) != -1) {
    return param_1;
  }
  func_0x00010563ab98();
  return 1;
}



/* Entry: 108b81660; end: 108b8167f;  */

undefined8 FUN_108b81660(void)

{
  return 1;
}



/* Entry: 108b81680; end: 108b8182b;  */

bool FUN_108b81680(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  ulong *puVar5;
  bool bVar6;
  ulong *puVar7;
  undefined1 **ppuVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  byte bVar15;
  uint6 uVar16;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  undefined8 uVar17;
  byte bVar23;
  long lStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  undefined1 uStack_89;
  undefined1 *puStack_88;
  
  if (param_2[3] == param_3[3]) {
    puVar7 = param_3;
    puVar5 = param_2;
    if (param_2[2] <= param_3[2]) {
      puVar7 = param_2;
      puVar5 = param_3;
    }
    FUN_1089766b0();
    puStack_a0 = puVar7;
    puStack_98 = param_2;
LAB_108b816e8:
    puVar7 = puStack_98;
    bVar6 = puStack_a0 == (ulong *)0x0;
    if (puStack_a0 != (ulong *)0x0) {
      puVar13 = puStack_98 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (long)&PTR_LOOP_110c8acd8 + *puStack_98;
      uVar11 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
               ((long)&PTR_LOOP_110c8acd8 + *puStack_98) * -0x622015f714c7d297;
      uVar12 = *puVar5;
      uVar14 = puVar5[2];
      uVar9 = uVar11 >> 7 ^ uVar12 >> 0xc;
      bVar4 = (byte)uVar11;
      uVar16 = CONCAT15(bVar4,CONCAT14(bVar4,CONCAT13(bVar4,CONCAT12(bVar4,CONCAT11(bVar4,bVar4)))))
               & 0x7f7f7f7f7f7f;
      lStack_a8 = 0;
      while( true ) {
        uVar9 = uVar9 & uVar14;
        uVar17 = *(undefined8 *)(uVar12 + uVar9);
        cVar18 = (char)((ulong)uVar17 >> 8);
        cVar19 = (char)((ulong)uVar17 >> 0x10);
        cVar20 = (char)((ulong)uVar17 >> 0x18);
        cVar21 = (char)((ulong)uVar17 >> 0x20);
        cVar22 = (char)((ulong)uVar17 >> 0x28);
        bVar15 = (byte)((ulong)uVar17 >> 0x30);
        bVar23 = (byte)((ulong)uVar17 >> 0x38);
        for (uVar11 = CONCAT17(-(bVar23 == (bVar4 & 0x7f)),
                               CONCAT16(-(bVar15 == (bVar4 & 0x7f)),
                                        CONCAT15(-(cVar22 == (char)(uVar16 >> 0x28)),
                                                 CONCAT14(-(cVar21 == (char)(uVar16 >> 0x20)),
                                                          CONCAT13(-(cVar20 ==
                                                                    (char)(uVar16 >> 0x18)),
                                                                   CONCAT12(-(cVar19 ==
                                                                             (char)(uVar16 >> 0x10))
                                                                            ,CONCAT11(-(cVar18 ==
                                                                                       (char)(uVar16
                                                                                             >> 8)),
                                                                                      -((char)uVar17
                                                                                       == (char)
                                                  uVar16)))))))) & 0x8080808080808080; uVar11 != 0;
            uVar11 = uVar11 - 1 & uVar11) {
          uVar2 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          puVar10 = (ulong *)(puVar5[1] +
                             (uVar9 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar14)
                             * 0x18);
          if (*puVar10 == *puVar7) {
            uVar1 = (uint)puVar7[2];
            if ((uint)puVar10[2] == 0xffffffff || uVar1 == 0xffffffff) {
              func_0x00010563ab98();
              return false;
            }
            ppuVar8 = &puStack_88;
            puStack_88 = &uStack_89;
            (*(code *)(&PTR_FUN_110ab43f0)[(ulong)(uint)puVar10[2] * 3 + (ulong)uVar1])
                      (ppuVar8,puVar10 + 1,puVar13);
            if (((ulong)ppuVar8 & 1) != 0) {
              FUN_108976724(&puStack_a0);
              goto LAB_108b816e8;
            }
          }
        }
        bVar15 = NEON_umaxv(CONCAT17(-(bVar23 == 0x80),
                                     CONCAT16(-(bVar15 == 0x80),
                                              CONCAT15(-(cVar22 == -0x80),
                                                       CONCAT14(-(cVar21 == -0x80),
                                                                CONCAT13(-(cVar20 == -0x80),
                                                                         CONCAT12(-(cVar19 == -0x80)
                                                                                  ,CONCAT11(-(cVar18
                                                                                             == 
                                                  -0x80),-((char)uVar17 == -0x80)))))))),1);
        if ((bVar15 & 1) != 0) break;
        lStack_a8 = lStack_a8 + 8;
        uVar9 = lStack_a8 + uVar9;
      }
    }
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}



/* Entry: 108b8182c; end: 108b8183b;  */

undefined8 FUN_108b8182c(void)

{
  return 0;
}



/* Entry: 108b8183c; end: 108b819f3;  */

void FUN_108b8183c(long param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4)

{
  long unaff_x19;
  undefined1 auStack_a0 [55];
  undefined1 uStack_69;
  long lStack_68;
  long lStack_60;
  
  func_0x000108b81d0c();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x520) = 0;
  _bzero(param_1 + 0x10,0x50c);
  *(undefined1 *)(unaff_x19 + 0x528) = param_3;
  *(undefined8 *)(unaff_x19 + 0x538) = 0;
  *(undefined8 *)(unaff_x19 + 0x530) = 0;
  *(undefined8 *)(unaff_x19 + 0x548) = 0;
  *(undefined8 *)(unaff_x19 + 0x540) = 0;
  *(undefined8 *)(unaff_x19 + 0x558) = 0;
  *(undefined8 *)(unaff_x19 + 0x550) = 0;
  *(undefined8 *)(unaff_x19 + 0x568) = 0;
  *(undefined8 *)(unaff_x19 + 0x560) = 0;
  *(undefined8 *)(unaff_x19 + 0x578) = 0;
  *(undefined8 *)(unaff_x19 + 0x570) = 0;
  *(undefined8 *)(unaff_x19 + 0x588) = 0;
  *(undefined8 *)(unaff_x19 + 0x580) = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x5d0,param_4);
  func_0x000108b8cf64((undefined4 *)(param_1 + 8),&UNK_10df93682,1,5);
  FUN_108b819f4(auStack_a0,param_2);
  lStack_68 = unaff_x19 + 0x530;
  lStack_60 = unaff_x19 + 0x548;
  func_0x000108b81cf4();
  func_0x000108b81c74(auStack_a0);
  *(undefined8 *)(unaff_x19 + 0x5c8) = 0;
  *(undefined8 *)(unaff_x19 + 0x5c0) = 0;
  *(undefined8 *)(unaff_x19 + 0x5b8) = 0;
  *(undefined8 *)(unaff_x19 + 0x5b0) = 0;
  *(long *)(unaff_x19 + 0x590) = *(long *)(unaff_x19 + 0x530);
  *(long *)(unaff_x19 + 0x598) = *(long *)(unaff_x19 + 0x538) - *(long *)(unaff_x19 + 0x530);
  *(long *)(unaff_x19 + 0x5a0) = *(long *)(unaff_x19 + 0x548);
  *(long *)(unaff_x19 + 0x5a8) = *(long *)(unaff_x19 + 0x550) - *(long *)(unaff_x19 + 0x548);
  func_0x0001078dbb6c(&lStack_68,param_2[6],param_2[7]);
  uStack_69 = 0x3a;
  func_0x000107c28458(&lStack_68,&uStack_69);
  func_0x0001078a80e0(&lStack_68,lStack_60,*param_2,param_2[1]);
  FUN_108b81be4(auStack_a0,&lStack_68,param_2 + 9);
  func_0x000107c27914(&lStack_68);
  lStack_68 = unaff_x19 + 0x560;
  lStack_60 = unaff_x19 + 0x578;
  func_0x000108b81cf4();
  func_0x000108b81c74(auStack_a0);
  return;
}



/* Entry: 108b819f4; end: 108b81a7f;  */

void FUN_108b819f4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  
  func_0x0001078dbb6c(auStack_38,*param_2,param_2[1]);
  uStack_39 = 0x3a;
  func_0x000107c28458(auStack_38,&uStack_39);
  func_0x0001078a80e0(auStack_38,uStack_30,param_2[6],param_2[7]);
  FUN_108b81be4(param_1,auStack_38,param_2 + 3);
  func_0x000107c27914(auStack_38);
  return;
}



/* Entry: 108b81a80; end: 108b81b4b;  */

long * FUN_108b81a80(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  undefined1 auStack_f8 [64];
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_78 [64];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c27fdc(param_1,200);
  uStack_9f = *(undefined1 *)(param_2 + 0x528);
  uStack_88 = 0;
  uStack_98 = 0;
  puStack_90 = &UNK_10f502572;
  uStack_9c = 0x7effffff;
  uStack_a0 = (undefined1)param_3;
  lVar3 = param_2 + 8;
  FUN_108b8c7fc(lVar3,auStack_78,*param_1,param_1[1] - *param_1,*(long *)(param_2 + 0x560),
                *(long *)(param_2 + 0x568) - *(long *)(param_2 + 0x560),*(long *)(param_2 + 0x578),
                *(long *)(param_2 + 0x580) - *(long *)(param_2 + 0x578));
  plVar4 = param_1;
  func_0x000107c2823c(param_1,lVar3);
  FUN_108b81ce4(uStack_38);
  if (extraout_x9 == extraout_x8) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x000108b81d00();
  __Unwind_Resume();
  pcStack_a8 = FUN_108b81b4c;
  puStack_b0 = &stack0xfffffffffffffff0;
  FUN_108b81ce4(param_3);
  param_3 = param_3 + 8;
  uStack_b8 = extraout_x9_00;
  FUN_108b8d01c(param_3,auStack_f8);
  if ((int)param_3 == 0) {
    iVar2 = (int)auStack_f8;
    func_0x000108b8e840();
    uVar5 = 1;
    if (iVar2 != 3) {
      uVar5 = 2;
    }
    uVar1 = 0;
    if (iVar2 != 2) {
      uVar1 = uVar5;
    }
    plVar4 = (long *)(ulong)uVar1;
  }
  else {
    plVar4 = (long *)0x2;
  }
  FUN_108b81ce4(uStack_b8,plVar4);
  if (extraout_x9_01 == extraout_x8_00) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x000108b81d0c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar4 + 0xba);
  func_0x000107c27914(param_1 + 0xaf);
  func_0x000107c27914(param_1 + 0xac);
  func_0x000107c27914(param_1 + 0xa9);
  func_0x000107c27914(param_1 + 0xa6);
  return param_1;
}



/* Entry: 108b81b4c; end: 108b81bcb;  */

void FUN_108b81b4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long extraout_x8;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long unaff_x19;
  undefined1 auStack_58 [64];
  undefined8 uStack_18;
  
  FUN_108b81ce4(param_1,param_1,param_2,param_2,param_3);
  param_1 = param_1 + 8;
  uStack_18 = extraout_x9;
  FUN_108b8d01c(param_1,auStack_58);
  if ((int)param_1 == 0) {
    iVar2 = (int)auStack_58;
    func_0x000108b8e840();
    uVar4 = 1;
    if (iVar2 != 3) {
      uVar4 = 2;
    }
    uVar1 = 0;
    if (iVar2 != 2) {
      uVar1 = uVar4;
    }
    uVar3 = (ulong)uVar1;
  }
  else {
    uVar3 = 2;
  }
  FUN_108b81ce4(uStack_18,uVar3);
  if (extraout_x9_00 == extraout_x8) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108b81d0c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(uVar3 + 0x5d0);
  func_0x000107c27914(unaff_x19 + 0x578);
  func_0x000107c27914(unaff_x19 + 0x560);
  func_0x000107c27914(unaff_x19 + 0x548);
  func_0x000107c27914(unaff_x19 + 0x530);
  return;
}



/* Entry: 108b81bcc; end: 108b81bcf;  */

void FUN_108b81bcc(long param_1)

{
  long unaff_x19;
  
  func_0x000108b81d0c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x5d0);
  func_0x000107c27914(unaff_x19 + 0x578);
  func_0x000107c27914(unaff_x19 + 0x560);
  func_0x000107c27914(unaff_x19 + 0x548);
  func_0x000107c27914(unaff_x19 + 0x530);
  return;
}



/* Entry: 108b81bd0; end: 108b81be3;  */

void FUN_108b81bd0(void)

{
  func_0x000108b81c9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b81be4; end: 108b81c43;  */

undefined8 * FUN_108b81be4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  func_0x000107c27994(param_1 + 3,param_3);
  return param_1;
}



/* Entry: 108b81c44; end: 108b81ce3;  */

/* WARNING: Possible PIC construction at 0x000108b81c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b81c60) */

void FUN_108b81c44(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  func_0x0001006203d4();
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 108b81ce4; end: 108b81d1f;  */

void FUN_108b81ce4(void)

{
  return;
}



/* Entry: 108b81d20; end: 108b81da3;  */

undefined4 *
FUN_108b81d20(undefined4 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x146) = 0;
  _bzero(param_1 + 2,0x50c);
  *(undefined8 *)(param_1 + 0x148) = param_3;
  *(undefined8 *)(param_1 + 0x14a) = param_4;
  *(undefined1 *)(param_1 + 0x14c) = param_2;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x14e) = 0;
  *(undefined8 *)(param_1 + 0x154) = 0;
  *(undefined8 *)(param_1 + 0x152) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x156) = 0;
  *(undefined8 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 0x15a) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x15e) = 0;
  *(undefined8 *)(param_1 + 0x164) = 0;
  *(undefined8 *)(param_1 + 0x162) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x166) = 0;
  func_0x000108b8cf64(param_1,&UNK_10df93726,1,0x25);
  return param_1;
}



/* Entry: 108b81da4; end: 108b81dd3;  */

long FUN_108b81da4(long param_1)

{
  func_0x000107c27914(param_1 + 0x550);
  func_0x000107c27914(param_1 + 0x538);
  return param_1;
}



/* Entry: 108b81dd4; end: 108b81e83;  */

long FUN_108b81dd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_60;
  long lStack_58;
  undefined1 auStack_50 [48];
  
  FUN_108b81d20(param_1,param_2,FUN_108b8cf90,param_1 + 0x568);
  FUN_108b819f4(auStack_50,param_3);
  lStack_60 = param_1 + 0x538;
  lStack_58 = param_1 + 0x550;
  FUN_108b81c44(&lStack_60,auStack_50);
  func_0x000108b81c74(auStack_50);
  *(long *)(param_1 + 0x568) = *(long *)(param_1 + 0x538);
  *(long *)(param_1 + 0x570) = *(long *)(param_1 + 0x540) - *(long *)(param_1 + 0x538);
  *(long *)(param_1 + 0x578) = *(long *)(param_1 + 0x550);
  *(long *)(param_1 + 0x580) = *(long *)(param_1 + 0x558) - *(long *)(param_1 + 0x550);
  *(undefined8 *)(param_1 + 0x590) = 0;
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined8 *)(param_1 + 0x5a0) = 0;
  *(undefined8 *)(param_1 + 0x598) = 0;
  return param_1;
}



/* Entry: 108b81e84; end: 108b81fb3;  */

/* WARNING: Possible PIC construction at 0x000108b81fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b81ef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b81efc) */

undefined1 *
FUN_108b81e84(ulong param_1,undefined1 *param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar6;
  undefined8 uStack_310;
  undefined4 uStack_308;
  undefined1 uStack_2f9;
  undefined8 uStack_2f8;
  undefined1 auStack_2ac [500];
  undefined8 uStack_b8;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [64];
  undefined8 uStack_38;
  
  func_0x000108b82194(param_1,param_2,param_2);
  puVar5 = auStack_78;
  uStack_38 = extraout_x8;
  FUN_108b8d01c();
  puVar3 = (undefined1 *)0x3;
  uVar2 = (int)param_1 == 7;
  switch(param_1 & 0xffffffff) {
  case 0:
    func_0x000108b82184();
    uVar6 = 0x108b81efc;
    goto code_r0x000108b81f4c;
  case 4:
    func_0x000108b82184();
    param_3 = 400;
    goto code_r0x000108b81f14;
  case 5:
    func_0x000108b82184();
    param_3 = 0x191;
code_r0x000108b81f14:
    func_0x000108b81fb4();
    break;
  case 7:
    func_0x000108b82184();
    func_0x000108b82018();
  }
  param_5 = param_3;
  puVar3 = (undefined1 *)0x3;
  func_0x000108b82170(uStack_38);
  if ((bool)uVar2) {
    return puVar3;
  }
  uVar6 = 0x108b81f4c;
  ___stack_chk_fail();
code_r0x000108b81f4c:
  puVar1 = (undefined8 *)&stack0xffffffffffffff50;
  puVar4 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  uStack_88 = uVar6;
  func_0x000108b8e840();
  if ((int)puVar4 != 3) {
    if ((int)puVar4 == 0) {
      puVar1 = &uStack_310;
      func_0x000108b82194();
      uStack_2f8 = 500;
      uStack_2f9 = puVar3[0x530];
      uVar2 = *(char *)(param_5 + 1) == '\x02';
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_b8 = extraout_x8_00;
      func_0x000108b8c964();
      puVar4 = (undefined1 *)0x0;
      if ((int)puVar3 == 0) {
        FUN_108b8cb88(puVar5);
        func_0x000108b82128(param_2,auStack_2ac,uStack_2f8);
        puVar3 = param_2;
        puVar4 = puVar5;
      }
      puVar5 = puVar3;
      func_0x000108b82170(uStack_b8);
      if (!(bool)uVar2) {
        uVar6 = 0x108b82108;
        ___stack_chk_fail();
        goto FUN_108b82108;
      }
    }
    else {
      puVar4 = (undefined1 *)0x2;
    }
    return puVar4;
  }
  uVar6 = 0x108b81fa8;
FUN_108b82108:
  *(undefined1 ***)((long)puVar1 + -0x10) = &puStack_90;
  *(undefined8 *)((long)puVar1 + -8) = uVar6;
  FUN_108b8e2c8();
  return puVar5;
}



/* Entry: 108b81fb4; end: 108b8205b;  */

undefined1 * FUN_108b81fb4(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 *puVar3;
  undefined1 auStack_3cc [500];
  undefined8 uStack_1d8;
  undefined8 uStack_f8;
  undefined1 auStack_68 [64];
  undefined8 uStack_28;
  
  puVar2 = param_1;
  func_0x000108b82194();
  func_0x000108b821cc();
  func_0x000108b8d73c();
  if ((int)puVar2 != 0) {
    param_2 = auStack_68;
    param_3 = (undefined1 *)0x0;
    param_4 = 0;
    FUN_108b8d908(param_1,param_2);
    puVar2 = param_1;
    if (param_1 != (undefined1 *)0x0) {
      func_0x000108b821a4();
      puVar2 = param_1;
    }
  }
  func_0x000108b82170(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108b82194();
    func_0x000108b821cc();
    FUN_108b8d820();
    if (puVar2 != (undefined1 *)0x0) {
      func_0x000108b821a4();
    }
    func_0x000108b82170(uStack_f8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108b82194();
      uVar1 = *(char *)(param_4 + 1) == '\x02';
      uStack_1d8 = extraout_x8;
      func_0x000108b8c964();
      puVar3 = (undefined1 *)0x0;
      if ((int)puVar2 == 0) {
        FUN_108b8cb88(param_2);
        func_0x000108b82128(param_3,auStack_3cc,500);
        puVar2 = param_3;
        puVar3 = param_2;
      }
      func_0x000108b82170(uStack_1d8);
      if ((bool)uVar1) {
        return puVar3;
      }
      ___stack_chk_fail();
      FUN_108b8e2c8();
      return puVar2;
    }
  }
  return puVar2;
}



/* Entry: 108b8205c; end: 108b82107;  */

undefined8 FUN_108b8205c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  undefined1 auStack_22c [500];
  undefined8 uStack_38;
  
  func_0x000108b82194();
  uVar1 = *(char *)(param_4 + 1) == '\x02';
  uStack_38 = extraout_x8;
  func_0x000108b8c964();
  uVar2 = 0;
  if ((int)param_1 == 0) {
    FUN_108b8cb88(param_2);
    func_0x000108b82128(param_3,auStack_22c,500);
    param_1 = param_3;
    uVar2 = param_2;
  }
  func_0x000108b82170(uStack_38);
  if ((bool)uVar1) {
    return uVar2;
  }
  ___stack_chk_fail();
  FUN_108b8e2c8();
  return param_1;
}



/* Entry: 108b82108; end: 108b8216f;  */

void FUN_108b82108(undefined8 param_1)

{
  undefined1 auStack_14 [4];
  
  FUN_108b8e2c8(param_1,auStack_14);
  return;
}



/* Entry: 108b82170; end: 108b821eb;  */

void FUN_108b82170(void)

{
  return;
}



/* Entry: 108b821ec; end: 108b82273;  */

undefined4 FUN_108b821ec(byte *param_1,ulong param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 < 2) {
    return 4;
  }
  bVar1 = *param_1;
  if (-0x41 < (char)bVar1) {
    if ((bVar1 >> 6 & 1) == 0) {
      if (0x13 < param_2 && bVar1 < 4) {
        iVar2 = (int)param_1 + 4;
        func_0x000108b821e0();
        if (iVar2 == 0x2112a442) {
          return 0;
        }
      }
      uVar3 = 3;
      if (0x2b < bVar1 - 0x14) {
        uVar3 = 4;
      }
    }
    else {
      uVar3 = 2;
    }
    return uVar3;
  }
  return 1;
}



/* Entry: 108b82274; end: 108b823c7;  */

undefined8 * FUN_108b82274(uint *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined1 uStack_e4;
  char cStack_e3;
  uint uStack_e0;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  uint uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 auStack_b0 [2];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_80 [88];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bd3faf4(auStack_b0);
  FUN_108973490(auStack_80,auStack_b0,0);
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  func_0x00010bd43838(&uStack_e4,param_2,0xd96);
  puVar5 = &uStack_e4;
  puVar8 = &uStack_c8;
  FUN_108972734(&uStack_a0,auStack_80,puVar5);
  if (((uStack_b8 & 1) == 0) || ((uStack_b8 == 1 && ((int)uStack_c8 == 0)))) {
    FUN_1089733cc(&uStack_e4,auStack_80);
    if (cStack_e3 != '\x02') {
      uStack_e0 = 0;
      uStack_98 = uStack_d4;
      uStack_a0 = uStack_dc;
    }
    else {
      uStack_cc = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
    }
    *param_1 = (uint)(cStack_e3 != '\x02');
    param_1[1] = uStack_e0;
    *(undefined8 *)(param_1 + 4) = uStack_98;
    *(undefined8 *)(param_1 + 2) = uStack_a0;
    param_1[6] = uStack_cc;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  else {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  FUN_1089735ec(auStack_80);
  puVar7 = auStack_b0;
  func_0x00010bd3f9e8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    FUN_1089735ec(auStack_80);
    func_0x00010bd3f9e8(auStack_b0);
    __Unwind_Resume();
    do {
      do {
        bVar2 = puVar8 == (undefined8 *)0x0;
        if (puVar8 == (undefined8 *)0x0) {
          return (undefined8 *)0x1;
        }
        puVar4 = (undefined8 *)((puVar7[5] - puVar7[3]) + puVar7[2]);
        if (puVar8 <= puVar4) {
          puVar4 = puVar8;
        }
        puVar1 = puVar5 + (long)puVar4;
        func_0x000104bd9994(puVar7 + 2,puVar7[3],puVar5,puVar1);
        puVar8 = (undefined8 *)((long)puVar8 - (long)puVar4);
        lVar9 = puVar7[2];
        puVar5 = puVar1;
      } while (puVar7[3] - lVar9 != puVar7[5]);
      if (*(int *)(puVar7 + 6) == 0) {
        puVar4 = puVar7;
        FUN_108b8257c();
        puVar7[5] = puVar4;
        if ((ulong)puVar7[1] <= (long)puVar4 - 1U) {
          puVar7 = (undefined8 *)*puVar7;
          uStack_148 = 0;
          puStack_150 = puVar4;
          func_0x000107c2793c(&UNK_10f502583);
          func_0x000107c3173c(&uStack_190);
          uStack_170 = 0x7dc;
          uStack_160 = uStack_188;
          uStack_168 = uStack_190;
          uStack_158 = uStack_180;
          uStack_190 = 0;
          uStack_188 = 0;
          uStack_180 = 0;
          ppuStack_178 = &PTR_FUN_110ab4390;
          (**(code **)*puVar7)(puVar7,&ppuStack_178);
          func_0x000108b80d84(&ppuStack_178);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_190);
          return (undefined8 *)0x0;
        }
        uVar6 = 1;
      }
      else {
        plVar3 = (long *)*puVar7;
        (**(code **)(*plVar3 + 8))(plVar3,lVar9,puVar7[3] - lVar9);
        if ((int)plVar3 == 0) {
          return (undefined8 *)(ulong)bVar2;
        }
        uVar6 = 0;
        puVar7[5] = 4;
        lVar9 = puVar7[2];
      }
      *(undefined4 *)(puVar7 + 6) = uVar6;
      puVar7[3] = lVar9;
      if (0x1f7c < (ulong)(puVar7[4] - lVar9)) {
        FUN_108b82598(puVar7 + 2);
      }
    } while( true );
  }
  return puVar7;
}



/* Entry: 108b823c8; end: 108b8257b;  */

bool FUN_108b823c8(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  do {
    do {
      bVar3 = param_3 == 0;
      if (param_3 == 0) {
        return true;
      }
      uVar1 = (param_1[5] - param_1[3]) + param_1[2];
      if (param_3 <= uVar1) {
        uVar1 = param_3;
      }
      lVar2 = param_2 + uVar1;
      func_0x000104bd9994(param_1 + 2,param_1[3],param_2,lVar2);
      param_3 = param_3 - uVar1;
      lVar7 = param_1[2];
      param_2 = lVar2;
    } while (param_1[3] - lVar7 != param_1[5]);
    if (*(int *)(param_1 + 6) == 0) {
      puVar5 = param_1;
      FUN_108b8257c();
      param_1[5] = puVar5;
      if ((ulong)param_1[1] <= (long)puVar5 - 1U) {
        param_1 = (undefined8 *)*param_1;
        uStack_58 = 0;
        puStack_60 = puVar5;
        func_0x000107c2793c(&UNK_10f502583);
        func_0x000107c3173c(&uStack_a0);
        uStack_80 = 0x7dc;
        uStack_70 = uStack_98;
        uStack_78 = uStack_a0;
        uStack_68 = uStack_90;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        ppuStack_88 = &PTR_FUN_110ab4390;
        (**(code **)*param_1)(param_1,&ppuStack_88);
        func_0x000108b80d84(&ppuStack_88);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a0);
        return false;
      }
      uVar6 = 1;
    }
    else {
      plVar4 = (long *)*param_1;
      (**(code **)(*plVar4 + 8))(plVar4,lVar7,param_1[3] - lVar7);
      if ((int)plVar4 == 0) {
        return bVar3;
      }
      uVar6 = 0;
      param_1[5] = 4;
      lVar7 = param_1[2];
    }
    *(undefined4 *)(param_1 + 6) = uVar6;
    param_1[3] = lVar7;
    if (0x1f7c < (ulong)(param_1[4] - lVar7)) {
      FUN_108b82598(param_1 + 2);
    }
  } while( true );
}



/* Entry: 108b8257c; end: 108b82597;  */

ulong FUN_108b8257c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x000108b821e0(uVar1);
  return uVar1 & 0xffffffff;
}



/* Entry: 108b82598; end: 108b8263b;  */

void FUN_108b82598(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long *plStack_28;
  
  plVar2 = param_1 + 2;
  lVar1 = *param_1;
  uVar4 = *plVar2 - lVar1;
  uVar5 = param_1[1] - lVar1;
  if (uVar5 < uVar4) {
    plStack_28 = plVar2;
    if (param_1[1] == lVar1) {
      plStack_48 = (long *)0x0;
      uVar3 = 0;
    }
    else {
      uVar3 = uVar5;
      func_0x000107c2790c();
      uVar4 = param_1[2] - *param_1;
      plStack_48 = plVar2;
    }
    lStack_40 = (long)plStack_48 + uVar5;
    lStack_30 = (long)plStack_48 + uVar3;
    lStack_38 = lStack_40;
    if (uVar3 < uVar4) {
      func_0x000107c28000(param_1,&plStack_48);
    }
    func_0x000107c27910(&plStack_48);
  }
  return;
}



/* Entry: 108b8263c; end: 108b82843;  */

undefined4 * FUN_108b8263c(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  *param_1 = param_3;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  if ((bRam00000001138286e8 & 1) == 0) {
    iVar1 = 0x138286e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138286e0 = 0;
      FUN_108b8adb0();
      if (iVar1 == 0) {
        uRam00000001138286e0 = 1;
      }
      PTR_DAT_11328ae80 = FUN_108b82954;
      ___cxa_guard_release(0x1138286e8);
    }
  }
  func_0x000108b826e4(param_1,param_2);
  return param_1;
}



/* Entry: 108b82844; end: 108b82873;  */

long * FUN_108b82844(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  bool bVar8;
  
  plVar3 = *(long **)(param_1 + 8);
  if (plVar3 == (long *)0x0) {
    return (long *)0x2;
  }
  lVar4 = *plVar3;
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  lVar5 = lVar4;
  FUN_108b8add8(lVar4,uVar2 >> 0x10 | uVar2 << 0x10);
  if (lVar5 == 0) {
    return (long *)0xd;
  }
  FUN_108b8b758(lVar4,lVar5);
  func_0x000108b8c698(lVar5,plVar3[1]);
  lVar5 = *(long *)(lVar5 + 8);
  if (lVar5 != 0) {
    lVar4 = 0x48;
    for (uVar6 = 0; uVar6 < *(ulong *)(unaff_x19 + 0x10); uVar6 = uVar6 + 1) {
      if (((unaff_x20 == 0) || (*(ulong *)(unaff_x19 + 0x10) != *(ulong *)(unaff_x20 + 0x10))) ||
         (*(long *)(unaff_x20 + 8) == 0)) {
        puVar7 = (undefined8 *)0x0;
        plVar3 = *(long **)(lVar5 + lVar4 + -0x48);
        bVar8 = true;
joined_r0x000108b8af20:
        if (plVar3 != (long *)0x0) {
          if (*plVar3 == 0) {
            return (long *)0x2;
          }
          func_0x000108b8c5c0();
          if ((int)plVar3 != 0) {
            return plVar3;
          }
        }
        if (!bVar8) goto LAB_108b8af4c;
        plVar3 = *(long **)(lVar5 + lVar4 + -0x38);
        bVar8 = true;
joined_r0x000108b8af44:
        if ((plVar3 != (long *)0x0) && (func_0x000108b8c5c0(*plVar3), (int)plVar3 != 0)) {
          return plVar3;
        }
        if (!bVar8) goto LAB_108b8af8c;
        plVar3 = *(long **)(lVar5 + lVar4 + -0x40);
        bVar8 = true;
joined_r0x000108b8afa4:
        if (plVar3 != (long *)0x0) {
          if (*plVar3 == 0) {
            return (long *)0x2;
          }
          func_0x000108b8c5c0();
          if ((int)plVar3 != 0) {
            return plVar3;
          }
        }
        if (!bVar8) goto LAB_108b8afd0;
        plVar3 = *(long **)(lVar5 + lVar4 + -0x30);
        bVar8 = true;
joined_r0x000108b8afe8:
        if (plVar3 != (long *)0x0) {
          if (*plVar3 == 0) {
            return (long *)0x2;
          }
          func_0x000108b8c5c0();
          if ((int)plVar3 != 0) {
            return plVar3;
          }
        }
        if (!bVar8) goto LAB_108b8b010;
        plVar3 = *(long **)(lVar5 + lVar4 + -0x28);
        bVar8 = true;
LAB_108b8b028:
        if ((plVar3 != (long *)0x0) && (func_0x000108b8c5c0(*plVar3), (int)plVar3 != 0)) {
          return plVar3;
        }
      }
      else {
        puVar7 = (undefined8 *)(*(long *)(unaff_x20 + 8) + lVar4 + -0x48);
        plVar3 = *(long **)(lVar5 + lVar4 + -0x48);
        if (plVar3 != (long *)*puVar7) {
          bVar8 = false;
          goto joined_r0x000108b8af20;
        }
LAB_108b8af4c:
        plVar3 = *(long **)(lVar5 + lVar4 + -0x38);
        if (plVar3 != (long *)puVar7[2]) {
          bVar8 = false;
          goto joined_r0x000108b8af44;
        }
LAB_108b8af8c:
        plVar3 = *(long **)(lVar5 + lVar4 + -0x40);
        if (plVar3 != (long *)puVar7[1]) {
          bVar8 = false;
          goto joined_r0x000108b8afa4;
        }
LAB_108b8afd0:
        plVar3 = *(long **)(lVar5 + lVar4 + -0x30);
        if (plVar3 != (long *)puVar7[3]) {
          bVar8 = false;
          goto joined_r0x000108b8afe8;
        }
LAB_108b8b010:
        bVar8 = false;
        plVar3 = *(long **)(lVar5 + lVar4 + -0x28);
        if (plVar3 != (long *)puVar7[4]) goto LAB_108b8b028;
      }
      lVar1 = lVar5 + lVar4;
      *(undefined4 *)(lVar1 + -0x18) = 0;
      *(undefined8 *)(lVar1 + -0x20) = 0;
      *(undefined4 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -0x14) = 0;
      if (*(long *)(lVar1 + -8) != 0) {
        func_0x00010ae45444(*(long *)(lVar1 + -8),*(undefined8 *)(unaff_x19 + 0x20));
        func_0x000108b882f0(*(undefined8 *)(lVar1 + -8));
        *(undefined8 *)(lVar1 + -8) = 0;
      }
      lVar5 = *(long *)(lVar5 + lVar4);
      if (bVar8) {
        if (lVar5 != 0) {
LAB_108b8b090:
          func_0x000108b882f0();
        }
      }
      else if ((lVar5 != 0) && (lVar5 != puVar7[9])) goto LAB_108b8b090;
      lVar5 = *(long *)(unaff_x19 + 8);
      lVar4 = lVar4 + 0x50;
    }
    func_0x000108b882f0(lVar5);
  }
  FUN_108b88d2c(unaff_x19 + 0x30);
  lVar5 = *(long *)(unaff_x19 + 0x70);
  if (unaff_x20 == 0) {
    if (lVar5 == 0) goto LAB_108b8b0d8;
  }
  else if ((lVar5 == 0) || (lVar5 == *(long *)(unaff_x20 + 0x70))) goto LAB_108b8b0d8;
  func_0x000108b882f0();
LAB_108b8b0d8:
  func_0x000108b8c6e0();
  return (long *)0x0;
}



/* Entry: 108b82874; end: 108b82953;  */

void FUN_108b82874(int param_1,char *param_2)

{
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  
  func_0x000108b829c0();
  if ((((bool)in_CY) && (*param_2 < -0x40)) && ((param_2[1] & 0xf8U) == 200)) {
    func_0x000108b82a0c();
    func_0x000108b8286c();
  }
  else {
    func_0x000108b82a0c();
    func_0x000108b82864();
  }
  if (param_1 == 0) {
    func_0x000108b829d8();
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x10;
  }
  *(long *)(unaff_x19 + lVar1) = *(long *)(unaff_x19 + lVar1) + 1;
  return;
}



/* Entry: 108b82954; end: 108b82957;  */

void FUN_108b82954(void)

{
  return;
}



/* Entry: 108b82958; end: 108b82993;  */

long FUN_108b82958(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_108b8263c(param_1,param_2 + 0x20,0);
  FUN_108b8263c(lVar1 + 0x30,param_2,1);
  return param_1;
}



/* Entry: 108b82994; end: 108b82a17;  */

void FUN_108b82994(void)

{
  return;
}



/* Entry: 108b82a18; end: 108b82afb;  */

void FUN_108b82a18(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 *extraout_x8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_108b8d01c(param_2,&uStack_70,param_3,param_4,0,0);
  if ((int)param_2 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_94 = 0x1c;
    param_2 = &uStack_70;
    func_0x000108b8e280(param_2,0x20,&uStack_90,&uStack_94);
    bVar1 = (int)param_2 == 0;
    if (bVar1) {
      *param_1 = 0;
      param_2 = &uStack_90;
      FUN_108b82afc(param_1 + 1);
    }
    else {
      *param_1 = 1;
      *(undefined1 *)(param_1 + 1) = 0;
    }
    *(bool *)(param_1 + 8) = bVar1;
  }
  else {
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    pcStack_a8 = FUN_108b82afc;
    if (*(char *)((long)param_2 + 1) == '\x1e') {
      uStack_c0 = param_2[2];
      uStack_c8 = param_2[1];
      lStack_d0 = 1;
    }
    else {
      if (*(char *)((long)param_2 + 1) != '\x02') {
        *extraout_x8 = 0;
        extraout_x8[1] = 0;
        *(undefined4 *)(extraout_x8 + 3) = 0;
        extraout_x8[2] = 0;
        *(undefined1 *)((long)extraout_x8 + 1) = 2;
        return;
      }
      lStack_d0 = (ulong)*(uint *)((long)param_2 + 4) << 0x20;
      uStack_c8 = 0;
      uStack_c0 = 0;
    }
    uStack_b8 = 0;
    puStack_b0 = &stack0xfffffffffffffff0;
    func_0x00010bd43838(extraout_x8,&lStack_d0,
                        *(ushort *)((long)param_2 + 2) >> 8 | *(ushort *)((long)param_2 + 2) << 8);
    return;
  }
  return;
}



/* Entry: 108b82afc; end: 108b82b7f;  */

void FUN_108b82afc(undefined8 *param_1,long param_2)

{
  long lStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  if (*(char *)(param_2 + 1) == '\x1e') {
    uStack_20 = *(undefined8 *)(param_2 + 0x10);
    uStack_28 = *(undefined8 *)(param_2 + 8);
    lStack_30 = 1;
  }
  else {
    if (*(char *)(param_2 + 1) != '\x02') {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 3) = 0;
      param_1[2] = 0;
      *(undefined1 *)((long)param_1 + 1) = 2;
      return;
    }
    lStack_30 = (ulong)*(uint *)(param_2 + 4) << 0x20;
    uStack_28 = 0;
    uStack_20 = 0;
  }
  uStack_18 = 0;
  func_0x00010bd43838(param_1,&lStack_30,
                      *(ushort *)(param_2 + 2) >> 8 | *(ushort *)(param_2 + 2) << 8);
  return;
}



/* Entry: 108b82b80; end: 108b82c3f;  */

undefined8 * FUN_108b82b80(undefined8 *param_1)

{
  undefined1 uStack_31;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x32aaaba7;
  *param_1 = &PTR_FUN_110ab44e8;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  func_0x000108b83518(param_1 + 0xb,0x20,&uStack_31);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 0x15);
  return param_1;
}



/* Entry: 108b82c40; end: 108b82c8b;  */

undefined8 * FUN_108b82c40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab44e8;
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x15);
  FUN_108b835d0(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  func_0x000108b8366c(param_1 + 1);
  return param_1;
}



/* Entry: 108b82c8c; end: 108b82c8f;  */

undefined8 * FUN_108b82c8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab44e8;
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x15);
  FUN_108b835d0(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  func_0x000108b8366c(param_1 + 1);
  return param_1;
}



/* Entry: 108b82c90; end: 108b82ca3;  */

void FUN_108b82c90(void)

{
  FUN_108b82c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b82ca4; end: 108b82d7b;  */

undefined8 FUN_108b82ca4(long *param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  func_0x000108b83e60();
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x10))();
  if ((long *)param_1[0xf] < plVar1) {
    if ((long *)param_1[0xf] == (long *)(param_1[0xc] - param_1[0xb] >> 3)) {
      plVar2 = (long *)(param_1[0xc] - param_1[0xb] >> 2);
      if (plVar1 <= plVar2) {
        plVar2 = plVar1;
      }
      FUN_108b82e70(param_1 + 0xb,plVar2);
    }
  }
  else {
    FUN_108b82d7c(param_1);
    if (plVar1 <= (long *)param_1[0xf]) {
      uVar3 = 0;
      goto LAB_108b82d54;
    }
  }
  if (param_3 == 1) {
    func_0x000108b83828(param_1 + 0xb,param_2);
  }
  else {
    func_0x000108b83898(param_1 + 0xb,param_2);
  }
  func_0x000108b83d6c();
  uVar3 = 1;
LAB_108b82d54:
  func_0x000108b83da4();
  return uVar3;
}



/* Entry: 108b82d7c; end: 108b82e6f;  */

void FUN_108b82d7c(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  puVar1 = (undefined8 *)(param_1 + 0x58);
  if (*(long *)(param_1 + 0x78) != 0) {
    plVar5 = *(long **)(param_1 + 0x68);
    while (plVar5 != (long *)0x0) {
      plVar3 = plVar5;
      if (*plVar5 == 0) {
        plVar2 = *(long **)(param_1 + 0x60);
LAB_108b82e0c:
        do {
          do {
            plVar5 = plVar5 + 1;
            if (plVar5 == plVar2) {
              plVar5 = (long *)*puVar1;
            }
            if ((plVar5 == (long *)0x0) || (plVar5 == *(long **)(param_1 + 0x70)))
            goto LAB_108b82dec;
          } while ((*plVar5 == 0) || (*(int *)(*plVar5 + 8) == 2));
          FUN_108b834e4(plVar3,plVar5);
          plVar4 = plVar3 + 1;
          plVar2 = *(long **)(param_1 + 0x60);
          if (plVar4 == plVar2) {
            plVar4 = (long *)*puVar1;
          }
          plVar3 = (long *)0x0;
          if (plVar4 != *(long **)(param_1 + 0x70)) {
            plVar3 = plVar4;
          }
        } while( true );
      }
      plVar2 = *(long **)(param_1 + 0x60);
      if (*(int *)(*plVar5 + 8) == 2) goto LAB_108b82e0c;
      plVar3 = plVar5 + 1;
      if (plVar3 == plVar2) {
        plVar3 = (long *)*puVar1;
      }
      plVar5 = (long *)0x0;
      if (plVar3 != *(long **)(param_1 + 0x70)) {
        plVar5 = plVar3;
      }
    }
  }
LAB_108b82dec:
  func_0x000108b83d90();
  func_0x000108b83d6c();
  return;
}



/* Entry: 108b82e70; end: 108b82eef;  */

void FUN_108b82e70(long *param_1,long param_2)

{
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  if (param_2 != param_1[1] - *param_1 >> 3) {
    func_0x000108b83e54();
    func_0x000108b83dfc();
    FUN_108b836e4(auStack_50,auStack_40);
    func_0x000108b83e90();
    FUN_108b836c4();
    func_0x000108b83e7c();
    FUN_108b83694();
  }
  return;
}



/* Entry: 108b82ef0; end: 108b82f87;  */

void FUN_108b82ef0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000108b83e60();
  if (*(long *)(param_2 + 0x78) == 0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_110ab4530;
    *param_1 = puVar1;
  }
  else {
    uVar2 = **(undefined8 **)(param_2 + 0x68);
    **(undefined8 **)(param_2 + 0x68) = 0;
    *param_1 = uVar2;
    FUN_108b82f88(param_2 + 0x58);
    func_0x000108b83d6c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0x18);
  return;
}



/* Entry: 108b82f88; end: 108b82fc3;  */

void FUN_108b82f88(undefined8 *param_1)

{
  undefined1 in_ZR;
  
  FUN_10897dcb8(param_1[2]);
  func_0x000108b83ed8();
  if ((bool)in_ZR) {
    param_1[2] = *param_1;
  }
  param_1[4] = param_1[4] + -1;
  return;
}



/* Entry: 108b82fc4; end: 108b8309b;  */

void FUN_108b82fc4(long param_1)

{
  long *plVar1;
  int iVar2;
  long *plStack_28;
  
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0xa8);
  iVar2 = 0x10;
  do {
    if ((*(long *)(param_1 + 0x98) == 0) || (iVar2 == 0)) {
      func_0x000108b83e34();
      return;
    }
    FUN_108b82ef0(&plStack_28,param_1);
    if ((*(char *)(param_1 + 0xa0) == '\x01') &&
       ((*(byte *)(*(long *)(param_1 + 0x80) + 8) & 1) != 0)) {
      if (plStack_28 != (long *)0x0) {
LAB_108b83040:
        (**(code **)(*plStack_28 + 0x10))();
        plVar1 = plStack_28;
        plStack_28 = (long *)0x0;
        if (plVar1 != (long *)0x0) goto LAB_108b83060;
      }
    }
    else if (plStack_28 != (long *)0x0) {
      if ((int)plStack_28[1] == 1) goto LAB_108b83040;
LAB_108b83060:
      plStack_28 = (long *)0x0;
      func_0x000108b83d10();
    }
    iVar2 = iVar2 + -1;
  } while( true );
}



/* Entry: 108b8309c; end: 108b83173;  */

void FUN_108b8309c(long *param_1,long *param_2,long *param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_3[1];
  lVar1 = *(long *)(param_4 + 8);
  if (lVar3 == lVar1) {
    *param_1 = *param_3;
  }
  else {
    while (lVar1 != 0) {
      lVar1 = param_3[1];
      func_0x000108b834ac(param_3);
      uVar2 = *(undefined8 *)(param_4 + 8);
      func_0x000108b834ac(param_4);
      FUN_108b834e4(lVar1,uVar2);
      lVar1 = *(long *)(param_4 + 8);
    }
    lVar1 = param_2[3];
    do {
      if (lVar1 == *param_2) {
        lVar1 = param_2[1];
      }
      param_2[3] = lVar1 + -8;
      FUN_10897dcb8();
      lVar1 = param_2[3];
      param_2[4] = param_2[4] + -1;
    } while (lVar1 != param_3[1]);
    *param_1 = (long)param_2;
    if (lVar1 == lVar3) {
      param_1[1] = 0;
      return;
    }
  }
  param_1[1] = lVar3;
  return;
}



/* Entry: 108b83174; end: 108b8318f;  */

void FUN_108b83174(long param_1)

{
  long *plVar1;
  undefined1 auStack_30 [16];
  
  if (*(long *)(param_1 + 0x98) != 0) {
    *(undefined1 *)(param_1 + 0x90) = 0;
    plVar1 = *(long **)(param_1 + 0x88);
    if (plVar1[4] == plVar1[1] - *plVar1 >> 4) {
      FUN_108b83200(plVar1,plVar1[1] - *plVar1 >> 3);
      plVar1 = *(long **)(param_1 + 0x88);
    }
    func_0x000108b83c04(auStack_30,param_1 + 8);
    func_0x000108b83c44(plVar1,auStack_30);
    func_0x000108b83e74();
    return;
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



/* Entry: 108b83190; end: 108b831ff;  */

void FUN_108b83190(long param_1)

{
  long *plVar1;
  undefined1 auStack_30 [16];
  
  *(undefined1 *)(param_1 + 0x90) = 0;
  plVar1 = *(long **)(param_1 + 0x88);
  if (plVar1[4] == plVar1[1] - *plVar1 >> 4) {
    FUN_108b83200(plVar1,plVar1[1] - *plVar1 >> 3);
    plVar1 = *(long **)(param_1 + 0x88);
  }
  func_0x000108b83c04(auStack_30,param_1 + 8);
  func_0x000108b83c44(plVar1,auStack_30);
  func_0x000108b83e74();
  return;
}



/* Entry: 108b83200; end: 108b83287;  */

void FUN_108b83200(long *param_1,long param_2)

{
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  if (param_2 != param_1[1] - *param_1 >> 4) {
    FUN_108b83918();
    func_0x000108b83dfc();
    FUN_108b839b8(auStack_50,auStack_40);
    func_0x000108b83e90();
    FUN_108b83998();
    func_0x000108b83e7c();
    FUN_108b83968();
  }
  return;
}



/* Entry: 108b83288; end: 108b83367;  */

void FUN_108b83288(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auStack_38 [16];
  undefined8 *puStack_28;
  
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    *(char *)(param_1 + 0xa0) = '\0';
    func_0x000108b83c04(auStack_38,param_1 + 8);
    FUN_108b854cc(*(undefined8 *)(param_1 + 0x80),auStack_38);
    lVar2 = *(long *)(param_1 + 0x80);
    puVar1 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_110ab4570;
    puVar1[2] = 0;
    puVar1[3] = param_1;
    puStack_28 = puVar1;
    func_0x000104c04b3c(lVar2,auStack_38,&puStack_28,0,lVar2 + 0x10);
    puVar1 = puStack_28;
    puStack_28 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      func_0x000108b83d10();
    }
    __ZNSt3__115recursive_mutex4lockEv(param_1 + 0xa8);
    func_0x000108b83e34();
    func_0x00010897dd64(auStack_38);
  }
  return;
}



/* Entry: 108b83368; end: 108b8349f;  */

bool FUN_108b83368(long param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if (param_2 == 0) {
    bVar2 = false;
  }
  else {
    func_0x000108b83e60();
    puVar1 = (undefined8 *)(param_1 + 0x58);
    if (*(long *)(param_1 + 0x78) == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = *(long **)(param_1 + 0x68);
      while (plVar7 != (long *)0x0) {
        lVar3 = 0;
        if (*plVar7 != 0) {
          lVar3 = *(long *)(*plVar7 + 0x10);
        }
        if (lVar3 == param_2) {
          plVar5 = *(long **)(param_1 + 0x60);
          plVar4 = plVar7;
          do {
            do {
              plVar4 = plVar4 + 1;
              if (plVar4 == plVar5) {
                plVar4 = (long *)*puVar1;
              }
              if ((plVar4 == (long *)0x0) || (plVar4 == *(long **)(param_1 + 0x70)))
              goto LAB_108b833f0;
              lVar3 = 0;
              if (*plVar4 != 0) {
                lVar3 = *(long *)(*plVar4 + 0x10);
              }
            } while (lVar3 == param_2);
            FUN_108b834e4(plVar7,plVar4);
            plVar6 = plVar7 + 1;
            plVar5 = *(long **)(param_1 + 0x60);
            if (plVar6 == plVar5) {
              plVar6 = (long *)*puVar1;
            }
            plVar7 = (long *)0x0;
            if (plVar6 != *(long **)(param_1 + 0x70)) {
              plVar7 = plVar6;
            }
          } while( true );
        }
        plVar4 = plVar7 + 1;
        if (plVar4 == *(long **)(param_1 + 0x60)) {
          plVar4 = (long *)*puVar1;
        }
        plVar7 = (long *)0x0;
        if (plVar4 != *(long **)(param_1 + 0x70)) {
          plVar7 = plVar4;
        }
      }
    }
LAB_108b833f0:
    func_0x000108b83d90();
    bVar2 = plVar7 != (long *)0x0;
    func_0x000108b83d6c();
    func_0x000108b83da4();
  }
  return bVar2;
}



/* Entry: 108b834a0; end: 108b834e3;  */

undefined8 FUN_108b834a0(void)

{
  return 0x10000;
}



/* Entry: 108b834e4; end: 108b83563;  */

long * FUN_108b834e4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *param_2 = 0;
  lVar1 = *param_1;
  *param_1 = lVar2;
  if (lVar1 != 0) {
    func_0x000108b83d10();
  }
  return param_1;
}



/* Entry: 108b83564; end: 108b835b3;  */

long FUN_108b83564(long *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_30 [16];
  
  if (param_2 >> 0x3d != 0) {
    func_0x000108b83dac();
    FUN_108988920(auStack_30);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x108b835ac);
    (*pcVar1)();
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar2);
    return lVar2;
  }
  func_0x000104bd35f4();
  FUN_108b83604();
  lVar2 = *param_1;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return lVar2;
  }
  return 0;
}



/* Entry: 108b835b4; end: 108b835cf;  */

void FUN_108b835b4(long *param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  FUN_108b83604();
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108b835d0; end: 108b83603;  */

void FUN_108b835d0(long *param_1)

{
  FUN_108b83604();
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108b83604; end: 108b83623;  */

void FUN_108b83604(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_108b83624(param_1,&uStack_11);
  return;
}



/* Entry: 108b83624; end: 108b83693;  */

void FUN_108b83624(undefined8 *param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  while( true ) {
    uVar1 = uVar2 == param_1[4];
    if ((ulong)param_1[4] <= uVar2) break;
    FUN_10897dcb8(param_1[2]);
    func_0x000108b83ed8();
    if ((bool)uVar1) {
      param_1[2] = *param_1;
    }
    uVar2 = uVar2 + 1;
  }
  return;
}



/* Entry: 108b83694; end: 108b836c3;  */

void FUN_108b83694(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x000108b83eb8();
  FUN_108b835d0();
  func_0x000108b83de4(unaff_x21 + unaff_x19 * 8);
  return;
}



/* Entry: 108b836c4; end: 108b836e3;  */

void FUN_108b836c4(void)

{
  func_0x000108b83dcc();
  FUN_108b8370c();
  return;
}



/* Entry: 108b836e4; end: 108b8370b;  */

void FUN_108b836e4(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  
  func_0x000108b83ea4();
  FUN_108b8375c();
  uVar1 = *param_1;
  unaff_x19[1] = param_1[1];
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 108b8370c; end: 108b8375b;  */

undefined8 * FUN_108b8370c(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  while (puVar1 = *(undefined8 **)(param_1 + 8), puVar1 != *(undefined8 **)(param_2 + 8)) {
    uVar2 = *puVar1;
    *puVar1 = 0;
    *param_3 = uVar2;
    func_0x000108b834ac(param_1);
    param_3 = param_3 + 1;
  }
  return param_3;
}


