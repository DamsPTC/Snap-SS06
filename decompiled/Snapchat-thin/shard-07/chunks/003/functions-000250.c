/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105491818; end: 105491827;  */

long FUN_105491818(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  lVar2 = lVar1;
  FUN_1054917d8(lVar1,&PTR_PTR_11088d718);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(lVar2 + 0x70);
  return lVar1;
}



/* Entry: 105491828; end: 10549183b;  */

void FUN_105491828(void)

{
  FUN_105490284();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10549183c; end: 10549184f;  */

void FUN_10549183c(long *param_1)

{
  FUN_105490284((long)param_1 + *(long *)(*param_1 + -0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105491850; end: 105491863;  */

void FUN_105491850(void)

{
  func_0x00010055305c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105491864; end: 1054918e7;  */

void FUN_105491864(long *param_1,long param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000105491878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,*(undefined8 *)(param_2 + 0x80),0,param_3);
  return;
}



/* Entry: 1054918e8; end: 10549192b;  */

undefined8 * FUN_1054918e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001000ff1ac(&uStack_30);
  return param_1;
}



/* Entry: 10549192c; end: 1054919f7;  */

long FUN_10549192c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  plVar1 = param_1;
  func_0x0001005ac980(param_1,(param_1[1] - *param_1) / 0x30 + 1);
  func_0x0001005aca14(auStack_58,plVar1,(param_1[1] - *param_1) / 0x30,param_1 + 2);
  uVar4 = param_2[1];
  uVar3 = *param_2;
  puStack_48[2] = param_2[2];
  puStack_48[1] = uVar4;
  *puStack_48 = uVar3;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar4 = param_2[4];
  uVar3 = param_2[3];
  puStack_48[5] = param_2[5];
  puStack_48[4] = uVar4;
  puStack_48[3] = uVar3;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  puStack_48 = puStack_48 + 6;
  func_0x0001005acb9c(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x0001005acc98(auStack_58);
  return lVar2;
}



/* Entry: 1054919f8; end: 105491a47;  */

undefined8 * FUN_1054919f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11088d658;
  __ZNSt3__15mutexD1Ev(param_1 + 0xc);
  FUN_105491a48(param_1 + 7);
  func_0x0001009d8b30(param_1 + 5);
  func_0x000105491ab4(param_1 + 3);
  func_0x000105493c28();
  return param_1;
}



/* Entry: 105491a48; end: 105491a93;  */

long FUN_105491a48(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  lVar1 = param_1;
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    FUN_105491a94();
    func_0x000105493a88();
  }
  func_0x000105493c90();
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 105491a94; end: 105491afb;  */

void FUN_105491a94(void)

{
  func_0x000105493b58();
  func_0x0001054934dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 105491afc; end: 105491b63;  */

undefined8 * FUN_105491afc(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEEC2Ev();
  *puVar1 = &PTR_DAT_11088d7b0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xc) = param_2;
  func_0x000100552df0();
  return param_1;
}



/* Entry: 105491b64; end: 105491b7f;  */

void FUN_105491b64(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_105491b80(param_1,&uStack_11);
  return;
}



/* Entry: 105491b80; end: 105491bb3;  */

void FUN_105491b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_105491bb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm_110346280)
            (param_1,param_2,param_3);
  return;
}



/* Entry: 105491bb4; end: 105491bff;  */

undefined1  [16] FUN_105491bb4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  if ((*(uint *)(param_1 + 0x60) >> 4 & 1) == 0) {
    if ((*(uint *)(param_1 + 0x60) >> 3 & 1) == 0) {
      lVar2 = 0;
      lVar1 = 0;
      goto LAB_105491bf8;
    }
    lVar2 = *(long *)(param_1 + 0x10);
    uVar4 = *(ulong *)(param_1 + 0x20);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x30);
    uVar4 = *(ulong *)(param_1 + 0x58);
    if (*(ulong *)(param_1 + 0x58) < uVar3) {
      *(ulong *)(param_1 + 0x58) = uVar3;
      uVar4 = uVar3;
    }
    lVar2 = *(long *)(param_1 + 0x28);
  }
  lVar1 = uVar4 - lVar2;
LAB_105491bf8:
  auVar5._8_8_ = lVar1;
  auVar5._0_8_ = lVar2;
  return auVar5;
}



/* Entry: 105491c00; end: 105491c8b;  */

void FUN_105491c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar5 = auStack_40;
  func_0x000105493a38();
  uStack_28 = extraout_x8;
  FUN_105491ca8(auStack_40,1);
  FUN_105491d00(lStack_30,param_3);
  lVar6 = lStack_30;
  lStack_30 = 0;
  FUN_105491c8c(param_1,lVar6 + 0x18);
  FUN_105491f54(auStack_40);
  func_0x000105493988(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_105491f54();
  func_0x0001054939ec();
  *extraout_x8_00 = puVar5;
  extraout_x8_00[1] = lVar6;
  puVar2 = (undefined8 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = (undefined8 *)(puVar5 + 8);
  }
  if ((puVar2 != (undefined8 *)0x0) && ((puVar2[1] == 0 || (*(long *)(puVar2[1] + 8) == -1)))) {
    pcStack_48 = FUN_105491c8c;
    lStack_68 = extraout_x8_00[1];
    if (lStack_68 != 0) {
      plVar1 = (long *)(lStack_68 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = (long *)(lStack_68 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_58 = puVar2[1];
    uStack_60 = *puVar2;
    *puVar2 = puVar5;
    puVar2[1] = lStack_68;
    puStack_70 = puVar5;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x000105491ad8(&uStack_60);
    FUN_105491f64(&puStack_70);
    return;
  }
  return;
}



/* Entry: 105491c8c; end: 105491ca7;  */

void FUN_105491c8c(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  plVar2 = (long *)0x0;
  if (param_2 != 0) {
    plVar2 = (long *)(param_2 + 8);
  }
  if ((plVar2 != (long *)0x0) && ((plVar2[1] == 0 || (*(long *)(plVar2[1] + 8) == -1)))) {
    lStack_28 = param_1[1];
    if (lStack_28 != 0) {
      plVar1 = (long *)(lStack_28 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = (long *)(lStack_28 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_18 = plVar2[1];
    lStack_20 = *plVar2;
    *plVar2 = param_2;
    plVar2[1] = lStack_28;
    lStack_30 = param_2;
    func_0x000105491ad8(&lStack_20);
    FUN_105491f64(&lStack_30);
    return;
  }
  return;
}



/* Entry: 105491ca8; end: 105491ccf;  */

long FUN_105491ca8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_105491cd0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 105491cd0; end: 105491cff;  */

undefined8 * FUN_105491cd0(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x1642c8590b21643) {
    puVar1 = (undefined8 *)(param_2 * 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11088d848;
  FUN_105491d60(param_1 + 3);
  return param_1;
}



/* Entry: 105491d00; end: 105491d3f;  */

undefined8 * FUN_105491d00(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11088d848;
  FUN_105491d60(param_1 + 3);
  return param_1;
}



/* Entry: 105491d40; end: 105491d43;  */

void FUN_105491d40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11088d848;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105491d44; end: 105491d57;  */

void FUN_105491d44(void)

{
  func_0x000105491ec4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105491d58; end: 105491d5f;  */

void FUN_105491d58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105493a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105491d60; end: 105491e73;  */

undefined8 * FUN_105491d60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11088d658;
  param_1[3] = 0;
  param_1[4] = 0;
  lVar2 = param_2[1];
  uVar3 = *param_2;
  param_1[6] = param_2[1];
  param_1[5] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001054939b4();
    } while (extraout_w10 != 0);
  }
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  param_1[0xc] = 0x32aaaba7;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_11088d898;
  puVar1[3] = &PTR_DAT_11088d8e8;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_48 = param_1[4];
  uStack_50 = param_1[3];
  param_1[3] = puVar1 + 3;
  param_1[4] = puVar1;
  func_0x000105491ab4(&uStack_50);
  func_0x000105491ab4(&uStack_60);
  return param_1;
}



/* Entry: 105491e74; end: 105491e77;  */

void FUN_105491e74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11088d898;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105491e78; end: 105491e8b;  */

void FUN_105491e78(void)

{
  func_0x000105491eb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105491e8c; end: 105491ecf;  */

void FUN_105491e8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105493a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105491ed0; end: 105491f53;  */

void FUN_105491ed0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((param_2 != (undefined8 *)0x0) && ((param_2[1] == 0 || (*(long *)(param_2[1] + 8) == -1)))) {
    lStack_28 = *(long *)(param_1 + 8);
    if (lStack_28 != 0) {
      plVar1 = (long *)(lStack_28 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = (long *)(lStack_28 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = param_3;
    param_2[1] = lStack_28;
    uStack_30 = param_3;
    func_0x000105491ad8(&uStack_20);
    FUN_105491f64(&uStack_30);
    return;
  }
  return;
}



/* Entry: 105491f54; end: 105491f63;  */

void FUN_105491f54(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105491f64; end: 105491fb3;  */

void FUN_105491f64(long param_1)

{
  func_0x000105493cd4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105491fb4; end: 105491fc7;  */

void FUN_105491fb4(void)

{
  func_0x000105491f88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105491fc8; end: 105491fff;  */

undefined8 FUN_105491fc8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x58;
  __Znwm(0x58);
  FUN_105492d0c();
  return uVar1;
}



/* Entry: 105492000; end: 105492023;  */

undefined8 * FUN_105492000(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  *param_2 = &PTR_SUB_11088d938;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001054939b4();
    } while (extraout_w10 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_2 + 3,param_1 + 0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_2 + 6,param_1 + 0x30);
  lVar1 = *(long *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  param_2[10] = *(undefined8 *)(param_1 + 0x50);
  param_2[9] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001054939b4();
    } while (extraout_w10_00 != 0);
  }
  return param_2;
}



/* Entry: 105492024; end: 105492cd7;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000105492490 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_105492024(undefined8 param_1,long param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  long ****pppplVar3;
  code *pcVar4;
  undefined1 in_ZR;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  long lVar8;
  int *piVar9;
  long *****ppppplVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long *****ppppplVar13;
  undefined8 extraout_x8_02;
  long ****extraout_x8_03;
  undefined8 extraout_x8_04;
  code *extraout_x8_05;
  long *****extraout_x8_06;
  long *****extraout_x8_07;
  long *****extraout_x8_08;
  long ****extraout_x8_09;
  undefined8 extraout_x9;
  long ****pppplVar14;
  long *****ppppplVar15;
  undefined8 extraout_x9_00;
  long *****extraout_x9_01;
  long *****extraout_x9_02;
  ulong uVar16;
  ulong extraout_x9_03;
  long *****ppppplVar17;
  long *plVar18;
  long *****extraout_x10;
  long *****extraout_x11;
  undefined4 uVar19;
  ulong uVar20;
  long *****ppppplVar21;
  long *****ppppplVar22;
  long *****ppppplVar23;
  long *****unaff_x24;
  long *****ppppplVar24;
  long *****ppppplVar25;
  long *****ppppplVar26;
  long ***ppplVar27;
  long ****pppplVar28;
  long ****pppplStack_120;
  long lStack_118;
  long ****pppplStack_110;
  long ****pppplStack_108;
  long ***ppplStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  long ****pppplStack_e0;
  long ****pppplStack_d8;
  long ****pppplStack_d0;
  long ***ppplStack_c8;
  float fStack_c0;
  long ****pppplStack_b8;
  long ****pppplStack_b0;
  undefined8 uStack_a8;
  long ****pppplStack_a0;
  long ****pppplStack_98;
  long ****pppplStack_90;
  long ***ppplStack_88;
  undefined8 uStack_80;
  uint uStack_78;
  undefined8 uStack_70;
  
  lVar8 = param_2;
  func_0x000105493a38();
  pppplStack_120 = (long ****)0x0;
  lStack_118 = 0;
  lVar8 = *(long *)(lVar8 + 0x10);
  uStack_70 = extraout_x8;
  if (((lVar8 == 0) || (__ZNSt3__119__shared_weak_count4lockEv(), lStack_118 = lVar8, lVar8 == 0))
     || (pppplStack_120 = *(long *****)(param_2 + 8), (long *****)pppplStack_120 == (long *****)0x0)
     ) {
    pppplStack_a0 = (long ****)CONCAT44(pppplStack_a0._4_4_,1);
    uStack_78 = uStack_78 & 0xffffff00;
    func_0x000105493a2c(*(undefined8 *)(param_2 + 0x48));
    func_0x000105493ae4();
  }
  else {
    piVar9 = (int *)*param_3;
    func_0x000105493a2c();
    (*extraout_x8_00)();
    pppplVar3 = pppplStack_120;
    iVar2 = *piVar9;
    lVar8 = *param_3;
    func_0x000105493a2c(lVar8);
    (*extraout_x8_01)();
    pppplStack_a0 = (long ****)&PTR_DAT_110b182b0;
    pppplStack_98 = (long ****)0x0;
    ppplStack_88 = (long ***)0x0;
    uStack_80 = 0;
    pppplStack_90 = (long ****)0x0;
    uStack_78 = 0;
    ppppplVar22 = &pppplStack_a0;
    func_0x00010006369c(ppppplVar22,lVar8 + 4,iVar2);
    if (((ulong)ppppplVar22 & 1) == 0) {
      uVar19 = 2;
    }
    else {
      uVar1 = iVar2 + 4;
      ppppplVar26 = (long *****)(ulong)uVar1;
      pppplStack_d8 = (long ****)0x0;
      pppplStack_e0 = (long ****)0x0;
      ppplStack_c8 = (long ***)0x0;
      pppplStack_d0 = (long ****)0x0;
      unaff_x24 = &pppplStack_d0;
      fStack_c0 = 1.0;
      ppppplVar17 = &pppplStack_90;
      if (((ulong)pppplStack_90 & 1) != 0) {
        ppppplVar17 = (long *****)((long)pppplStack_90 + 7);
      }
      ppppplVar24 = ppppplVar17 + (int)ppplStack_88;
      ppppplVar21 = (long *****)pppplVar3;
      while( true ) {
        uVar6 = (long)ppppplVar17 - (long)ppppplVar24 < 0;
        in_ZR = ppppplVar17 == ppppplVar24;
        if ((bool)in_ZR) break;
        ppppplVar15 = &pppplStack_110;
        FUN_105491078(ppppplVar15,*ppppplVar17);
        ppplVar27 = ppplStack_100;
        uStack_f8 = (long ****)CONCAT44(uVar1 + uStack_f8._4_4_,(undefined4)uStack_f8);
        func_0x000105493b48();
        ppppplVar10 = (long *****)pppplStack_d8;
        ppppplVar25 = ppppplVar15;
        if ((long *****)pppplStack_d8 != (long *****)0x0) {
          uVar20 = (long)pppplStack_d8 - 1;
          if (((ulong)pppplStack_d8 & uVar20) == 0) {
            ppppplVar21 = (long *****)(uVar20 & (ulong)ppppplVar15);
            uVar6 = false;
          }
          else {
            uVar6 = (long)ppppplVar15 - (long)pppplStack_d8 < 0;
            ppppplVar21 = ppppplVar15;
            if (pppplStack_d8 <= ppppplVar15) {
              uVar16 = 0;
              if ((long *****)pppplStack_d8 != (long *****)0x0) {
                uVar16 = (ulong)ppppplVar15 / (ulong)pppplStack_d8;
              }
              ppppplVar21 = (long *****)((long)ppppplVar15 - uVar16 * (long)pppplStack_d8);
            }
          }
          ppppplVar23 = (long *****)pppplStack_e0[(long)ppppplVar21];
          if (ppppplVar23 != (long *****)0x0) {
            do {
              while( true ) {
                ppppplVar23 = (long *****)*ppppplVar23;
                if (ppppplVar23 == (long *****)0x0) goto LAB_1054921c4;
                ppppplVar13 = (long *****)ppppplVar23[1];
                uVar6 = (long)ppppplVar13 - (long)ppppplVar15 < 0;
                if (ppppplVar13 != ppppplVar15) break;
                func_0x000105493c1c();
                if (((ulong)ppppplVar25 & 1) != 0) goto LAB_1054922e4;
              }
              if (((ulong)ppppplVar10 & uVar20) == 0) {
                ppppplVar13 = (long *****)((ulong)ppppplVar13 & uVar20);
              }
              else if (ppppplVar10 <= ppppplVar13) {
                uVar16 = 0;
                if (ppppplVar10 != (long *****)0x0) {
                  uVar16 = (ulong)ppppplVar13 / (ulong)ppppplVar10;
                }
                ppppplVar13 = (long *****)((long)ppppplVar13 - uVar16 * (long)ppppplVar10);
              }
              uVar6 = (long)ppppplVar13 - (long)ppppplVar21 < 0;
            } while (ppppplVar13 == ppppplVar21);
          }
        }
LAB_1054921c4:
        func_0x000105493b20();
        uStack_a8 = 0;
        pppplStack_b8 = (long ****)ppppplVar25;
        pppplStack_b0 = (long ****)unaff_x24;
        *ppppplVar25 = (long ****)0x0;
        ppppplVar25[1] = (long ****)ppppplVar15;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (ppppplVar25 + 2,(ulong)ppplVar27 & 0xfffffffffffffffc);
        ppppplVar25[5] = (long ****)&PTR_DAT_110b18260;
        ppppplVar25[6] = (long ****)0x0;
        ppppplVar25[9] = (long ****)0x0;
        ppppplVar25[7] = (long ****)&DAT_11383d918;
        ppppplVar25[8] = (long ****)0x0;
        uStack_a8 = CONCAT71(uStack_a8._1_7_,1);
        func_0x000105493c9c();
        if ((ppppplVar10 == (long *****)0x0) ||
           (func_0x000105493ba4(param_1,fStack_c0,(float)ppppplVar10), (bool)uVar6)) {
          func_0x000105493c7c();
          bVar5 = (long *****)0x2 < ppppplVar10;
          bVar7 = ppppplVar10 == (long *****)0x3;
          func_0x00010549395c();
          uVar12 = extraout_x8_02;
          if (!bVar5 || bVar7) {
            uVar12 = extraout_x9;
          }
          FUN_10549331c(&pppplStack_e0,uVar12);
          ppppplVar10 = (long *****)pppplStack_d8;
          if (((ulong)pppplStack_d8 & (long)pppplStack_d8 - 1U) == 0) {
            ppppplVar21 = (long *****)((long)pppplStack_d8 - 1U & (ulong)ppppplVar15);
          }
          else {
            ppppplVar21 = ppppplVar15;
            if (pppplStack_d8 <= ppppplVar15) {
              uVar20 = 0;
              if ((long *****)pppplStack_d8 != (long *****)0x0) {
                uVar20 = (ulong)ppppplVar15 / (ulong)pppplStack_d8;
              }
              ppppplVar21 = (long *****)((long)ppppplVar15 - uVar20 * (long)pppplStack_d8);
            }
          }
        }
        pppplVar28 = pppplStack_e0;
        pppplVar14 = (long ****)pppplStack_e0[(long)ppppplVar21];
        if (pppplVar14 == (long ****)0x0) {
          *ppppplVar25 = pppplStack_d0;
          pppplStack_d0 = (long ****)ppppplVar25;
          pppplVar28[(long)ppppplVar21] = (long ***)unaff_x24;
          if (*ppppplVar25 != (long ****)0x0) {
            ppppplVar15 = (long *****)(*ppppplVar25)[1];
            if (((ulong)ppppplVar10 & (long)ppppplVar10 - 1U) == 0) {
              ppppplVar15 = (long *****)((ulong)ppppplVar15 & (long)ppppplVar10 - 1U);
            }
            else if (ppppplVar10 <= ppppplVar15) {
              uVar20 = 0;
              if (ppppplVar10 != (long *****)0x0) {
                uVar20 = (ulong)ppppplVar15 / (ulong)ppppplVar10;
              }
              ppppplVar15 = (long *****)((long)ppppplVar15 - uVar20 * (long)ppppplVar10);
            }
            pppplVar28[(long)ppppplVar15] = (long ***)ppppplVar25;
          }
        }
        else {
          *ppppplVar25 = (long ****)*pppplVar14;
          *pppplVar14 = (long ***)ppppplVar25;
        }
        pppplStack_b8 = (long ****)0x0;
        func_0x000105493c9c();
        ppplStack_c8 = (long ***)extraout_x8_03;
        FUN_1054934a8(&pppplStack_b8);
        ppppplVar23 = ppppplVar25;
LAB_1054922e4:
        func_0x0001098c89e4(ppppplVar23 + 5,&pppplStack_110);
        func_0x0001098c86f4(&pppplStack_110);
        ppppplVar17 = ppppplVar17 + 1;
      }
      __ZNSt3__15mutex4lockEv(pppplVar3 + 0xc);
      ppppplVar17 = (long *****)(pppplVar3 + 7);
      FUN_10549300c(ppppplVar17,param_2 + 0x18);
      if (ppppplVar17 == (long *****)0x0) {
LAB_105492568:
        pppplStack_108 = (long ****)0x0;
        pppplStack_110 = (long ****)0x0;
        uStack_f8 = (long ****)0x0;
        ppplStack_100 = (long ***)0x0;
        uStack_f0 = 0x3f800000;
        ppppplVar17 = &pppplStack_110;
        FUN_105490dbc(ppppplVar17,param_2 + 0x30);
        if (ppppplVar17[3] != (long ****)0x0) {
          func_0x0001054932c0(ppppplVar17[2]);
          ppppplVar17[2] = (long ****)0x0;
          pppplVar14 = *ppppplVar17;
          for (pppplVar28 = ppppplVar17[1]; pppplVar28 != (long ****)0x0;
              pppplVar28 = (long ****)((long)pppplVar28 + -1)) {
            *pppplVar14 = (long ***)0x0;
            pppplVar14 = pppplVar14 + 1;
          }
          ppppplVar17[3] = (long ****)0x0;
        }
        pppplVar28 = pppplStack_e0;
        pppplStack_e0 = (long ****)0x0;
        ppppplVar26 = ppppplVar17;
        FUN_105493490(ppppplVar17,pppplVar28);
        pppplVar28 = pppplStack_d0;
        ppppplVar17[2] = pppplStack_d0;
        ppppplVar17[1] = pppplStack_d8;
        ppplVar27 = ppplStack_c8;
        pppplStack_d8 = (long ****)0x0;
        ppppplVar17[3] = (long ****)ppplStack_c8;
        *(float *)(ppppplVar17 + 4) = fStack_c0;
        if ((long ****)ppplVar27 != (long ****)0x0) {
          pppplVar28 = (long ****)pppplVar28[1];
          pppplVar14 = ppppplVar17[1];
          if (((ulong)pppplVar14 & (long)pppplVar14 - 1U) == 0) {
            pppplVar28 = (long ****)((long)pppplVar14 - 1U & (ulong)pppplVar28);
            in_ZR = true;
          }
          else {
            in_ZR = pppplVar28 == pppplVar14;
            if (pppplVar14 <= pppplVar28) {
              uVar20 = 0;
              if (pppplVar14 != (long ****)0x0) {
                uVar20 = (ulong)pppplVar28 / (ulong)pppplVar14;
              }
              pppplVar28 = (long ****)((long)pppplVar28 - uVar20 * (long)pppplVar14);
            }
          }
          (*ppppplVar17)[(long)pppplVar28] = (long ***)(ppppplVar17 + 2);
          pppplStack_d0 = (long ****)0x0;
          ppplStack_c8 = (long ***)0x0;
        }
        func_0x0001054939d0();
        if (ppppplVar26[3] != (long ****)0x0) {
          func_0x00010549350c(ppppplVar26[2]);
          ppppplVar26[2] = (long ****)0x0;
          pppplVar14 = *ppppplVar26;
          for (pppplVar28 = ppppplVar26[1]; pppplVar28 != (long ****)0x0;
              pppplVar28 = (long ****)((long)pppplVar28 + -1)) {
            *pppplVar14 = (long ***)0x0;
            pppplVar14 = pppplVar14 + 1;
          }
          ppppplVar26[3] = (long ****)0x0;
        }
        pppplVar28 = pppplStack_110;
        pppplStack_110 = (long ****)0x0;
        FUN_1054931d8(ppppplVar26,pppplVar28);
        ppplVar27 = ppplStack_100;
        ppppplVar26[2] = (long ****)ppplStack_100;
        ppppplVar26[1] = pppplStack_108;
        pppplVar28 = uStack_f8;
        pppplStack_108 = (long ****)0x0;
        ppppplVar26[3] = uStack_f8;
        *(undefined4 *)(ppppplVar26 + 4) = uStack_f0;
        if (pppplVar28 != (long ****)0x0) {
          pppplVar28 = (long ****)ppplVar27[1];
          pppplVar14 = ppppplVar26[1];
          if (((ulong)pppplVar14 & (long)pppplVar14 - 1U) == 0) {
            pppplVar28 = (long ****)((long)pppplVar14 - 1U & (ulong)pppplVar28);
            in_ZR = true;
          }
          else {
            in_ZR = pppplVar28 == pppplVar14;
            if (pppplVar14 <= pppplVar28) {
              uVar20 = 0;
              if (pppplVar14 != (long ****)0x0) {
                uVar20 = (ulong)pppplVar28 / (ulong)pppplVar14;
              }
              pppplVar28 = (long ****)((long)pppplVar28 - uVar20 * (long)pppplVar14);
            }
          }
          (*ppppplVar26)[(long)pppplVar28] = (long ***)(ppppplVar26 + 2);
          ppplStack_100 = (long ***)0x0;
          uStack_f8 = (long ****)0x0;
        }
        func_0x0001054934dc(&pppplStack_110);
      }
      else {
        func_0x0001054939d0();
        FUN_105493118();
        ppppplVar24 = ppppplVar17;
        func_0x0001054939d0();
        if (ppppplVar17 == (long *****)0x0) goto LAB_105492568;
        func_0x0001054939d0();
        FUN_105490dbc();
        ppppplVar17 = ppppplVar24 + 2;
        for (ppppplVar21 = (long *****)pppplStack_d0; ppppplVar21 != (long *****)0x0;
            ppppplVar21 = (long *****)*ppppplVar21) {
          ppppplVar15 = ppppplVar24 + 3;
          func_0x000100102e7c(ppppplVar15,ppppplVar21 + 2);
          ppppplVar25 = (long *****)ppppplVar24[1];
          ppppplVar10 = ppppplVar15;
          if (ppppplVar25 != (long *****)0x0) {
            unaff_x24 = (long *****)((long)ppppplVar25 + -1);
            if (((ulong)ppppplVar25 & (ulong)unaff_x24) == 0) {
              ppppplVar26 = (long *****)((ulong)unaff_x24 & (ulong)ppppplVar15);
              in_ZR = true;
              uVar6 = false;
            }
            else {
              uVar6 = (long)ppppplVar15 - (long)ppppplVar25 < 0;
              in_ZR = ppppplVar15 == ppppplVar25;
              ppppplVar26 = ppppplVar15;
              if (ppppplVar25 <= ppppplVar15) {
                uVar20 = 0;
                if (ppppplVar25 != (long *****)0x0) {
                  uVar20 = (ulong)ppppplVar15 / (ulong)ppppplVar25;
                }
                ppppplVar26 = (long *****)((long)ppppplVar15 - uVar20 * (long)ppppplVar25);
              }
            }
            ppplVar27 = (*ppppplVar24)[(long)ppppplVar26];
            if (ppplVar27 != (long ***)0x0) {
              do {
                while( true ) {
                  ppplVar27 = (long ***)*ppplVar27;
                  if (ppplVar27 == (long ***)0x0) goto LAB_10549244c;
                  ppppplVar23 = (long *****)ppplVar27[1];
                  uVar6 = (long)ppppplVar23 - (long)ppppplVar15 < 0;
                  in_ZR = ppppplVar23 == ppppplVar15;
                  if (!(bool)in_ZR) break;
                  ppppplVar10 = (long *****)(ppplVar27 + 2);
                  func_0x0001000e107c(ppppplVar10,ppppplVar21 + 2);
                  if (((ulong)ppppplVar10 & 1) != 0) goto LAB_10549255c;
                }
                if (((ulong)ppppplVar25 & (ulong)unaff_x24) == 0) {
                  ppppplVar23 = (long *****)((ulong)ppppplVar23 & (ulong)unaff_x24);
                }
                else if (ppppplVar25 <= ppppplVar23) {
                  uVar20 = 0;
                  if (ppppplVar25 != (long *****)0x0) {
                    uVar20 = (ulong)ppppplVar23 / (ulong)ppppplVar25;
                  }
                  ppppplVar23 = (long *****)((long)ppppplVar23 - uVar20 * (long)ppppplVar25);
                }
                uVar6 = (long)ppppplVar23 - (long)ppppplVar26 < 0;
                in_ZR = ppppplVar23 == ppppplVar26;
              } while ((bool)in_ZR);
            }
          }
LAB_10549244c:
          func_0x000105493b20();
          ppplStack_100 = (long ***)0x0;
          *ppppplVar10 = (long ****)0x0;
          ppppplVar10[1] = (long ****)ppppplVar15;
          pppplStack_110 = (long ****)ppppplVar10;
          pppplStack_108 = (long ****)ppppplVar17;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (ppppplVar10 + 2,ppppplVar21 + 2);
          FUN_105491078(ppppplVar10 + 5,ppppplVar21 + 5);
          ppplStack_100 = (long ***)CONCAT71(ppplStack_100._1_7_,1);
          if (ppppplVar25 == (long *****)0x0) {
LAB_105492498:
            func_0x000105493c7c();
            bVar5 = (long *****)0x2 < ppppplVar25;
            bVar7 = ppppplVar25 == (long *****)0x3;
            func_0x00010549395c();
            uVar12 = extraout_x8_04;
            if (!bVar5 || bVar7) {
              uVar12 = extraout_x9_00;
            }
            FUN_10549331c(ppppplVar24,uVar12);
            ppppplVar25 = (long *****)ppppplVar24[1];
            if (((ulong)ppppplVar25 & (long)ppppplVar25 - 1U) == 0) {
              in_ZR = 1;
              bVar7 = false;
              ppppplVar26 = (long *****)((long)ppppplVar25 - 1U & (ulong)ppppplVar15);
            }
            else {
              bVar7 = (long)ppppplVar15 - (long)ppppplVar25 < 0;
              in_ZR = ppppplVar15 == ppppplVar25;
              ppppplVar26 = ppppplVar15;
              if (ppppplVar25 <= ppppplVar15) {
                uVar20 = 0;
                if (ppppplVar25 != (long *****)0x0) {
                  uVar20 = (ulong)ppppplVar15 / (ulong)ppppplVar25;
                }
                ppppplVar26 = (long *****)((long)ppppplVar15 - uVar20 * (long)ppppplVar25);
              }
            }
          }
          else {
            func_0x000105493ba4(param_1,*(undefined4 *)(ppppplVar24 + 4),(float)ppppplVar25);
            bVar7 = false;
            if ((bool)uVar6) goto LAB_105492498;
          }
          uVar6 = bVar7;
          pppplVar28 = *ppppplVar24;
          ppplVar27 = pppplVar28[(long)ppppplVar26];
          if (ppplVar27 == (long ***)0x0) {
            *ppppplVar10 = *ppppplVar17;
            *ppppplVar17 = (long ****)ppppplVar10;
            pppplVar28[(long)ppppplVar26] = (long ***)ppppplVar17;
            if (*ppppplVar10 != (long ****)0x0) {
              ppppplVar15 = (long *****)(*ppppplVar10)[1];
              if (((ulong)ppppplVar25 & (long)ppppplVar25 - 1U) == 0) {
                ppppplVar15 = (long *****)((ulong)ppppplVar15 & (long)ppppplVar25 - 1U);
                in_ZR = true;
                uVar6 = false;
              }
              else {
                uVar6 = (long)ppppplVar15 - (long)ppppplVar25 < 0;
                in_ZR = ppppplVar15 == ppppplVar25;
                if (ppppplVar25 <= ppppplVar15) {
                  uVar20 = 0;
                  if (ppppplVar25 != (long *****)0x0) {
                    uVar20 = (ulong)ppppplVar15 / (ulong)ppppplVar25;
                  }
                  ppppplVar15 = (long *****)((long)ppppplVar15 - uVar20 * (long)ppppplVar25);
                }
              }
              pppplVar28[(long)ppppplVar15] = (long ***)ppppplVar10;
            }
          }
          else {
            *ppppplVar10 = (long ****)*ppplVar27;
            *ppplVar27 = (long **)ppppplVar10;
          }
          pppplStack_110 = (long ****)0x0;
          ppppplVar24[3] = (long ****)((long)ppppplVar24[3] + 1);
          FUN_1054934a8(&pppplStack_110);
          unaff_x24 = ppppplVar10;
LAB_10549255c:
        }
      }
      func_0x000105493bec(pppplVar3);
      func_0x000105493290(&pppplStack_e0);
      uVar19 = 0;
      ppppplVar22 = (long *****)((ulong)ppppplVar22 & 0xffffffff);
    }
    func_0x0001098c8a1c(&pppplStack_a0);
    pppplVar3 = pppplStack_120;
    if (((ulong)ppppplVar22 & 1) != 0) {
      pppplStack_d8 = (long ****)0x0;
      pppplStack_e0 = (long ****)0x0;
      ppplStack_c8 = (long ***)0x0;
      pppplStack_d0 = (long ****)0x0;
      fStack_c0 = 1.0;
      lVar8 = *param_3;
      if (lVar8 == 0) {
        lVar8 = 0;
LAB_105492758:
        param_3 = (long *)0x0;
      }
      else {
        func_0x000105493a2c();
        (*extraout_x8_05)();
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) goto LAB_105492758;
        (**(code **)(*param_3 + 0x18))();
      }
      __ZNSt3__15mutex4lockEv(pppplVar3 + 0xc);
      ppppplVar22 = (long *****)(pppplVar3 + 7);
      FUN_10549300c(ppppplVar22,param_2 + 0x18);
      if (ppppplVar22 == (long *****)0x0) {
LAB_105492af8:
        bVar7 = false;
        uVar19 = 3;
      }
      else {
        ppppplVar22 = (long *****)(pppplVar3 + 7);
        FUN_105490b00(ppppplVar22,param_2 + 0x18);
        ppppplVar17 = ppppplVar22;
        FUN_105493118();
        if (ppppplVar17 == (long *****)0x0) goto LAB_105492af8;
        FUN_105490dbc(ppppplVar22,param_2 + 0x30);
        ppppplVar22 = ppppplVar22 + 2;
        while (ppppplVar22 = (long *****)*ppppplVar22, ppppplVar22 != (long *****)0x0) {
          plVar18 = (long *)(ulong)(*(uint *)((long)ppppplVar22 + 0x44) + *(int *)(ppppplVar22 + 9))
          ;
          bVar7 = *(int *)(ppppplVar22 + 8) == 1;
          bVar5 = *(int *)(ppppplVar22 + 9) != 0;
          in_ZR = (bVar7 && bVar5) && param_3 == plVar18;
          uVar6 = (bVar7 && bVar5) && (long)param_3 - (long)plVar18 < 0;
          if ((bVar7 && bVar5) && plVar18 <= param_3) {
            ppppplVar17 = &pppplStack_110;
            func_0x00010bd48000(ppppplVar17,lVar8 + (ulong)*(uint *)((long)ppppplVar22 + 0x44));
            pppplVar28 = ppppplVar22[7];
            func_0x000105493b48();
            ppppplVar26 = (long *****)pppplStack_d8;
            if ((long *****)pppplStack_d8 != (long *****)0x0) {
              uVar20 = (long)pppplStack_d8 - 1;
              if (((ulong)pppplStack_d8 & uVar20) == 0) {
                unaff_x24 = (long *****)(uVar20 & (ulong)ppppplVar17);
                in_ZR = true;
                uVar6 = false;
              }
              else {
                uVar6 = (long)ppppplVar17 - (long)pppplStack_d8 < 0;
                in_ZR = ppppplVar17 == (long *****)pppplStack_d8;
                unaff_x24 = ppppplVar17;
                if (pppplStack_d8 <= ppppplVar17) {
                  uVar16 = 0;
                  if ((long *****)pppplStack_d8 != (long *****)0x0) {
                    uVar16 = (ulong)ppppplVar17 / (ulong)pppplStack_d8;
                  }
                  unaff_x24 = (long *****)((long)ppppplVar17 - uVar16 * (long)pppplStack_d8);
                }
              }
              ppppplVar21 = (long *****)pppplStack_e0[(long)unaff_x24];
              ppppplVar24 = ppppplVar17;
              if (ppppplVar21 != (long *****)0x0) {
                do {
                  while( true ) {
                    ppppplVar21 = (long *****)*ppppplVar21;
                    if (ppppplVar21 == (long *****)0x0) goto LAB_105492870;
                    ppppplVar15 = (long *****)ppppplVar21[1];
                    uVar6 = (long)ppppplVar15 - (long)ppppplVar17 < 0;
                    in_ZR = ppppplVar15 == ppppplVar17;
                    if (!(bool)in_ZR) break;
                    func_0x000105493c1c();
                    if (((ulong)ppppplVar24 & 1) != 0) goto LAB_105492ae0;
                  }
                  if (((ulong)ppppplVar26 & uVar20) == 0) {
                    ppppplVar15 = (long *****)((ulong)ppppplVar15 & uVar20);
                  }
                  else if (ppppplVar26 <= ppppplVar15) {
                    uVar16 = 0;
                    if (ppppplVar26 != (long *****)0x0) {
                      uVar16 = (ulong)ppppplVar15 / (ulong)ppppplVar26;
                    }
                    ppppplVar15 = (long *****)((long)ppppplVar15 - uVar16 * (long)ppppplVar26);
                  }
                  uVar6 = (long)ppppplVar15 - (long)unaff_x24 < 0;
                  in_ZR = ppppplVar15 == unaff_x24;
                } while ((bool)in_ZR);
              }
            }
LAB_105492870:
            ppppplVar21 = (long *****)0x38;
            __Znwm();
            pppplStack_90 = (long ****)0x0;
            *ppppplVar21 = (long ****)0x0;
            ppppplVar21[1] = (long ****)ppppplVar17;
            pppplStack_a0 = (long ****)ppppplVar21;
            pppplStack_98 = (long ****)&pppplStack_d0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (ppppplVar21 + 2,(ulong)pppplVar28 & 0xfffffffffffffffc);
            ppppplVar21[5] = (long ****)0x0;
            ppppplVar21[6] = (long ****)0x0;
            pppplStack_90 = (long ****)CONCAT71(pppplStack_90._1_7_,1);
            func_0x000105493c9c();
            if ((ppppplVar26 == (long *****)0x0) ||
               (func_0x000105493ba4(param_1,fStack_c0,(float)ppppplVar26), (bool)uVar6)) {
              bVar5 = (long *****)0x2 < ppppplVar26;
              bVar7 = ppppplVar26 == (long *****)0x3;
              func_0x00010549395c((long)ppppplVar26 << 1);
              ppppplVar24 = extraout_x8_06;
              if (!bVar5 || bVar7) {
                ppppplVar24 = extraout_x9_01;
              }
              if ((long)ppppplVar24 - 1U == 0) {
                ppppplVar24 = (long *****)0x2;
              }
              else if (((ulong)ppppplVar24 & (long)ppppplVar24 - 1U) != 0) {
                __ZNSt3__112__next_primeEm();
              }
              pppplVar28 = pppplStack_d8;
              ppppplVar26 = ppppplVar24;
              if (pppplStack_d8 < ppppplVar24) {
LAB_10549290c:
                if ((ulong)ppppplVar26 >> 0x3d != 0) goto LAB_105492bb8;
                lVar11 = (long)ppppplVar26 << 3;
                __Znwm(lVar11);
                FUN_105493244(&pppplStack_e0,lVar11);
                ppppplVar15 = (long *****)0x0;
                ppppplVar24 = (long *****)pppplStack_e0;
                pppplStack_d8 = (long ****)ppppplVar26;
                while (ppppplVar26 != ppppplVar15) {
                  func_0x000105493c64();
                  ppppplVar24 = extraout_x8_07;
                  ppppplVar15 = extraout_x9_02;
                }
                if ((long *****)pppplStack_d0 != (long *****)0x0) {
                  ppppplVar15 = (long *****)pppplStack_d0[1];
                  uVar16 = (long)ppppplVar26 - 1;
                  uVar20 = 0;
                  if (ppppplVar26 != (long *****)0x0) {
                    uVar20 = (ulong)ppppplVar15 / (ulong)ppppplVar26;
                  }
                  ppppplVar10 = ppppplVar15;
                  if (ppppplVar26 <= ppppplVar15) {
                    ppppplVar10 = (long *****)((long)ppppplVar15 - uVar20 * (long)ppppplVar26);
                  }
                  if (((ulong)ppppplVar26 & uVar16) == 0) {
                    ppppplVar10 = (long *****)((ulong)ppppplVar15 & uVar16);
                  }
                  ppppplVar24[(long)ppppplVar10] = (long ****)&pppplStack_d0;
                  ppppplVar15 = (long *****)pppplStack_d0;
                  while (ppppplVar25 = ppppplVar15, ppppplVar15 = (long *****)*ppppplVar25,
                        ppppplVar15 != (long *****)0x0) {
                    ppppplVar23 = (long *****)ppppplVar15[1];
                    if (((ulong)ppppplVar26 & uVar16) == 0) {
                      ppppplVar23 = (long *****)((ulong)ppppplVar23 & uVar16);
                    }
                    else if (ppppplVar26 <= ppppplVar23) {
                      uVar20 = 0;
                      if (ppppplVar26 != (long *****)0x0) {
                        uVar20 = (ulong)ppppplVar23 / (ulong)ppppplVar26;
                      }
                      ppppplVar23 = (long *****)((long)ppppplVar23 - uVar20 * (long)ppppplVar26);
                    }
                    if (ppppplVar23 != ppppplVar10) {
                      if (ppppplVar24[(long)ppppplVar23] == (long ****)0x0) {
                        ppppplVar24[(long)ppppplVar23] = (long ****)ppppplVar25;
                        ppppplVar10 = ppppplVar23;
                      }
                      else {
                        *ppppplVar25 = *ppppplVar15;
                        func_0x000105493970();
                        ppppplVar24 = extraout_x8_08;
                        uVar16 = extraout_x9_03;
                        ppppplVar15 = extraout_x10;
                        ppppplVar10 = extraout_x11;
                      }
                    }
                  }
                }
              }
              else {
                ppppplVar26 = (long *****)pppplStack_d8;
                if (ppppplVar24 < pppplStack_d8) {
                  ppppplVar26 = (long *****)(long)((float)ppplStack_c8 / fStack_c0);
                  if ((pppplStack_d8 < (long *****)0x3) ||
                     (((ulong)pppplStack_d8 & (long)pppplStack_d8 - 1U) != 0)) {
                    __ZNSt3__112__next_primeEm();
                  }
                  else {
                    func_0x00010549393c();
                  }
                  if (ppppplVar24 <= ppppplVar26) {
                    ppppplVar24 = ppppplVar26;
                  }
                  ppppplVar26 = (long *****)pppplStack_d8;
                  if (ppppplVar24 < pppplVar28) {
                    ppppplVar26 = ppppplVar24;
                    if (ppppplVar24 != (long *****)0x0) goto LAB_10549290c;
                    FUN_105493244(&pppplStack_e0,0);
                    pppplStack_d8 = (long ****)0x0;
                    ppppplVar26 = (long *****)0x0;
                  }
                }
              }
              if (((ulong)ppppplVar26 & (long)ppppplVar26 - 1U) == 0) {
                in_ZR = 1;
                unaff_x24 = (long *****)((long)ppppplVar26 - 1U & (ulong)ppppplVar17);
              }
              else {
                in_ZR = ppppplVar17 == ppppplVar26;
                unaff_x24 = ppppplVar17;
                if (ppppplVar26 <= ppppplVar17) {
                  uVar20 = 0;
                  if (ppppplVar26 != (long *****)0x0) {
                    uVar20 = (ulong)ppppplVar17 / (ulong)ppppplVar26;
                  }
                  unaff_x24 = (long *****)((long)ppppplVar17 - uVar20 * (long)ppppplVar26);
                }
              }
            }
            pppplVar28 = (long ****)pppplStack_e0[(long)unaff_x24];
            if (pppplVar28 == (long ****)0x0) {
              *ppppplVar21 = pppplStack_d0;
              pppplStack_e0[(long)unaff_x24] = (long ***)&pppplStack_d0;
              pppplStack_d0 = (long ****)ppppplVar21;
              if (*ppppplVar21 != (long ****)0x0) {
                ppppplVar17 = (long *****)(*ppppplVar21)[1];
                if (((ulong)ppppplVar26 & (long)ppppplVar26 - 1U) == 0) {
                  ppppplVar17 = (long *****)((ulong)ppppplVar17 & (long)ppppplVar26 - 1U);
                  in_ZR = true;
                }
                else {
                  in_ZR = ppppplVar17 == ppppplVar26;
                  if (ppppplVar26 <= ppppplVar17) {
                    uVar20 = 0;
                    if (ppppplVar26 != (long *****)0x0) {
                      uVar20 = (ulong)ppppplVar17 / (ulong)ppppplVar26;
                    }
                    ppppplVar17 = (long *****)((long)ppppplVar17 - uVar20 * (long)ppppplVar26);
                  }
                }
                pppplStack_e0[(long)ppppplVar17] = (long ***)ppppplVar21;
              }
            }
            else {
              *ppppplVar21 = (long ****)*pppplVar28;
              *pppplVar28 = (long ***)ppppplVar21;
            }
            pppplStack_a0 = (long ****)0x0;
            func_0x000105493c9c();
            ppplStack_c8 = (long ***)extraout_x8_09;
            func_0x00010549325c(&pppplStack_a0);
LAB_105492ae0:
            FUN_1054918e8(ppppplVar21 + 5,&pppplStack_110);
            func_0x0001000ff1ac(&pppplStack_110);
          }
        }
        uVar19 = 0;
        bVar7 = true;
      }
      __ZNSt3__15mutex6unlockEv(pppplVar3 + 0xc);
      pppplVar28 = pppplStack_d8;
      pppplVar3 = pppplStack_e0;
      uVar12 = *(undefined8 *)(param_2 + 0x48);
      if (bVar7) {
        pppplStack_e0 = (long ****)0x0;
        pppplStack_d8 = (long ****)0x0;
        pppplStack_a0 = pppplVar3;
        pppplStack_98 = pppplVar28;
        pppplStack_90 = pppplStack_d0;
        ppplStack_88 = ppplStack_c8;
        uStack_80 = CONCAT44(uStack_80._4_4_,fStack_c0);
        if ((long ****)ppplStack_c8 != (long ****)0x0) {
          ppppplVar22 = (long *****)pppplStack_d0[1];
          if (((ulong)pppplVar28 & (long)pppplVar28 - 1U) == 0) {
            in_ZR = true;
            ppppplVar22 = (long *****)((ulong)ppppplVar22 & (long)pppplVar28 - 1U);
          }
          else {
            in_ZR = ppppplVar22 == (long *****)pppplVar28;
            uVar20 = 0;
            if ((long *****)pppplVar28 != (long *****)0x0) {
              uVar20 = (ulong)ppppplVar22 / (ulong)pppplVar28;
            }
            if (pppplVar28 <= ppppplVar22) {
              ppppplVar22 = (long *****)((long)ppppplVar22 - uVar20 * (long)pppplVar28);
            }
          }
          pppplVar3[(long)ppppplVar22] = (long ***)&pppplStack_90;
          pppplStack_d0 = (long ****)0x0;
          ppplStack_c8 = (long ***)0x0;
        }
        uStack_78 = CONCAT31(uStack_78._1_3_,1);
        func_0x000105493a2c(uVar12);
        func_0x000105493ae4();
      }
      else {
        pppplStack_a0 = (long ****)CONCAT44(pppplStack_a0._4_4_,uVar19);
        uStack_78 = (uint)uStack_78._1_3_ << 8;
        func_0x000105493a2c(uVar12);
        func_0x000105493ae4();
      }
      func_0x000105493adc();
      FUN_105492dcc(&pppplStack_e0);
      goto LAB_10549231c;
    }
    pppplStack_a0 = (long ****)CONCAT44(pppplStack_a0._4_4_,uVar19);
    uStack_78 = uStack_78 & 0xffffff00;
    func_0x000105493a2c(*(undefined8 *)(param_2 + 0x48));
    func_0x000105493ae4();
  }
  func_0x000105493adc();
LAB_10549231c:
  FUN_105491f64(&pppplStack_120);
  func_0x000105493988(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_105492bb8:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x105492bc0);
  (*pcVar4)();
}



/* Entry: 105492cd8; end: 105492cff;  */

void FUN_105492cd8(undefined8 param_1)

{
  func_0x000105493c70();
  func_0x000105493b64(param_1,&PTR_DAT_11088d9a8);
  func_0x000105493a48();
  return;
}



/* Entry: 105492d00; end: 105492d0b;  */

undefined ** FUN_105492d00(void)

{
  return &PTR_DAT_11088d9a8;
}



/* Entry: 105492d0c; end: 105492dab;  */

undefined8 * FUN_105492d0c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  *param_1 = &PTR_SUB_11088d938;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001054939b4();
    } while (extraout_w10 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 3,param_2 + 2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 6,param_2 + 5);
  lVar1 = param_2[9];
  uVar2 = param_2[8];
  param_1[10] = param_2[9];
  param_1[9] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001054939b4();
    } while (extraout_w10_00 != 0);
  }
  return param_1;
}



/* Entry: 105492dac; end: 105492dcb;  */

void FUN_105492dac(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_105492dcc();
  }
  return;
}



/* Entry: 105492dcc; end: 105492e17;  */

long FUN_105492dcc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  lVar1 = param_1;
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    FUN_105492e18();
    func_0x000105493a88();
  }
  func_0x000105493c90();
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 105492e18; end: 105492e97;  */

void FUN_105492e18(void)

{
  func_0x000105493b58();
  func_0x0001000ff1ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 105492e98; end: 105492eab;  */

void FUN_105492e98(void)

{
  func_0x000105492e6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105492eac; end: 105492ef3;  */

void FUN_105492eac(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_SUB_11088d9c8;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001054939b4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 105492ef4; end: 105492f3b;  */

void FUN_105492ef4(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_SUB_11088d9c8;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001054939b4(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 105492f3c; end: 105492fa3;  */

void FUN_105492f3c(long param_1,undefined4 *param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined4 auStack_58 [10];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  func_0x000105493a38();
  auStack_58[0] = *param_2;
  uStack_30 = 0;
  uStack_28 = extraout_x8;
  func_0x000105493a2c(*(undefined8 *)(param_1 + 8));
  (*extraout_x8_00)();
  FUN_105492dac(auStack_58);
  func_0x000105493988(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000105493ce0();
  FUN_105492dac();
  func_0x0001054939ec();
  func_0x000105493c70();
  func_0x000105493b64();
  func_0x000105493a48();
  return;
}



/* Entry: 105492fa4; end: 105492fcb;  */

void FUN_105492fa4(undefined8 param_1)

{
  func_0x000105493c70();
  func_0x000105493b64(param_1,&PTR_DAT_11088da38);
  func_0x000105493a48();
  return;
}



/* Entry: 105492fcc; end: 105492fd7;  */

undefined ** FUN_105492fcc(void)

{
  return &PTR_DAT_11088da38;
}



/* Entry: 105492fd8; end: 10549300b;  */

void FUN_105492fd8(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000105493aac();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x0001054939c4(uVar1);
  return;
}



/* Entry: 10549300c; end: 1054930cb;  */

long FUN_10549300c(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000100102e7c();
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
    plVar3 = plVar2;
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
        if (plVar4 != plVar2) break;
        func_0x000105493c30();
        if ((int)plVar3 != 0) {
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



/* Entry: 1054930cc; end: 1054930e3;  */

void FUN_1054930cc(long *param_1,long param_2)

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



/* Entry: 1054930e4; end: 105493117;  */

void FUN_1054930e4(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x000105493a9c();
  if (unaff_x20 != 0) {
    func_0x000105493cc8();
    if ((bool)in_ZR) {
      FUN_105491a94(unaff_x20 + 0x10);
    }
    func_0x000105493a88();
  }
  return;
}



/* Entry: 105493118; end: 1054931d7;  */

long FUN_105493118(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000100102e7c();
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
    plVar3 = plVar2;
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
        if (plVar4 != plVar2) break;
        func_0x000105493c30();
        if ((int)plVar3 != 0) {
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



/* Entry: 1054931d8; end: 1054931ef;  */

void FUN_1054931d8(long *param_1,long param_2)

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



/* Entry: 1054931f0; end: 105493243;  */

void FUN_1054931f0(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x000105493a9c();
  if (unaff_x20 != 0) {
    func_0x000105493cc8();
    if ((bool)in_ZR) {
      func_0x000105493224(unaff_x20 + 0x10);
    }
    func_0x000105493a88();
  }
  return;
}



/* Entry: 105493244; end: 10549325b;  */

void FUN_105493244(long *param_1,long param_2)

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



/* Entry: 10549325c; end: 10549331b;  */

void FUN_10549325c(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x000105493a9c();
  if (unaff_x20 != 0) {
    func_0x000105493cc8();
    if ((bool)in_ZR) {
      FUN_105492e18(unaff_x20 + 0x10);
    }
    func_0x000105493a88();
  }
  return;
}



/* Entry: 10549331c; end: 10549348f;  */

void FUN_10549331c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar3;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong uVar4;
  ulong extraout_x10;
  long *plVar5;
  long *extraout_x11;
  long *plVar6;
  long *plVar7;
  
  plVar3 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010549393c();
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_105493490(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_105493490(param_1,lVar2);
    plVar3 = (long *)0x0;
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    while (param_2 != plVar3) {
      func_0x000105493c64();
      lVar2 = extraout_x8;
      plVar3 = extraout_x9;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar5 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar5 / (ulong)param_2;
      }
      plVar7 = plVar5;
      if (param_2 <= plVar5) {
        plVar7 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      if (((ulong)param_2 & uVar4) == 0) {
        plVar7 = (long *)((ulong)plVar5 & uVar4);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = param_1 + 2;
      while (plVar5 = plVar3, plVar3 = (long *)*plVar5, plVar3 != (long *)0x0) {
        plVar6 = (long *)plVar3[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar5;
            plVar7 = plVar6;
          }
          else {
            *plVar5 = *plVar3;
            func_0x000105493970();
            lVar2 = extraout_x8_00;
            plVar3 = extraout_x9_00;
            uVar4 = extraout_x10;
            plVar7 = extraout_x11;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar3;
  *plVar3 = (long)plVar5;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105493490; end: 1054934a7;  */

void FUN_105493490(long *param_1,long param_2)

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



/* Entry: 1054934a8; end: 1054935d7;  */

void FUN_1054934a8(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x000105493a9c();
  if (unaff_x20 != 0) {
    func_0x000105493cc8();
    if ((bool)in_ZR) {
      func_0x0001054932fc(unaff_x20 + 0x10);
    }
    func_0x000105493a88();
  }
  return;
}



/* Entry: 1054935d8; end: 1054935db;  */

void FUN_1054935d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11088da58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1054935dc; end: 1054935ef;  */

void FUN_1054935dc(void)

{
  FUN_10549390c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1054935f0; end: 1054935f7;  */

void FUN_1054935f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105493a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1054935f8; end: 10549361b;  */

undefined8 FUN_1054935f8(undefined8 param_1)

{
  func_0x000105493b7c();
  func_0x000105492e38();
  return param_1;
}



/* Entry: 10549361c; end: 10549362f;  */

void FUN_10549361c(void)

{
  FUN_1054935f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105493630; end: 105493663;  */

undefined8 FUN_105493630(undefined8 param_1)

{
  func_0x000105493b18();
  FUN_1054936d4();
  return param_1;
}



/* Entry: 105493664; end: 105493687;  */

undefined8 FUN_105493664(long param_1,undefined8 param_2)

{
  func_0x000105493b7c(param_2,param_1 + 8);
  func_0x000105493548();
  return param_2;
}



/* Entry: 105493688; end: 10549369f;  */

void FUN_105493688(long param_1)

{
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000105493be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x000105493c70();
  func_0x000105493b64();
  func_0x000105493a48();
  return;
}



/* Entry: 1054936a0; end: 1054936c7;  */

void FUN_1054936a0(undefined8 param_1)

{
  func_0x000105493c70();
  func_0x000105493b64(param_1,&PTR_DAT_11088db18);
  func_0x000105493a48();
  return;
}



/* Entry: 1054936c8; end: 1054936d3;  */

undefined ** FUN_1054936c8(void)

{
  return &PTR_DAT_11088db18;
}



/* Entry: 1054936d4; end: 10549371b;  */

undefined8 FUN_1054936d4(undefined8 param_1)

{
  func_0x000105493b7c();
  func_0x000105493548();
  return param_1;
}



/* Entry: 10549371c; end: 10549372f;  */

void FUN_10549371c(void)

{
  func_0x0001054936f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105493730; end: 105493763;  */

undefined8 FUN_105493730(undefined8 param_1)

{
  func_0x000105493b18();
  FUN_1054937f4();
  return param_1;
}



/* Entry: 105493764; end: 105493787;  */

undefined8 FUN_105493764(long param_1,undefined8 param_2)

{
  func_0x000105493b6c(param_2,param_1 + 8);
  func_0x000105493590();
  return param_2;
}



/* Entry: 105493788; end: 1054937bf;  */

void FUN_105493788(long param_1)

{
  long *plVar1;
  undefined4 uStack_14;
  
  uStack_14 = 1;
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_14);
    return;
  }
  func_0x000104bfeb48();
  func_0x000105493c70();
  func_0x000105493b64();
  func_0x000105493a48();
  return;
}



/* Entry: 1054937c0; end: 1054937e7;  */

void FUN_1054937c0(undefined8 param_1)

{
  func_0x000105493c70();
  func_0x000105493b64(param_1,&PTR_DAT_11088dba8);
  func_0x000105493a48();
  return;
}



/* Entry: 1054937e8; end: 1054937f3;  */

undefined ** FUN_1054937e8(void)

{
  return &PTR_DAT_11088dba8;
}



/* Entry: 1054937f4; end: 105493817;  */

undefined8 FUN_1054937f4(undefined8 param_1)

{
  func_0x000105493b6c();
  func_0x000105493590();
  return param_1;
}



/* Entry: 105493818; end: 10549381b;  */

undefined8 * FUN_105493818(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11088dbc8;
  func_0x0001054938a4(param_1 + 5);
  func_0x0001054938d8(param_1 + 1);
  return param_1;
}



/* Entry: 10549381c; end: 105493867;  */

void FUN_10549381c(void)

{
  FUN_105493868();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105493868; end: 10549390b;  */

undefined8 * FUN_105493868(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11088dbc8;
  func_0x0001054938a4(param_1 + 5);
  func_0x0001054938d8(param_1 + 1);
  return param_1;
}



/* Entry: 10549390c; end: 105493917;  */

void FUN_10549390c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11088da58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105493918; end: 10549393b;  */

void FUN_105493918(long param_1)

{
  func_0x000105493cd4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10549393c; end: 105493d13;  */

ulong FUN_10549393c(ulong param_1)

{
  if (1 < param_1) {
    param_1 = 1L << (-LZCOUNT(param_1 - 1) & 0x3fU);
  }
  return param_1;
}



/* Entry: 105493d14; end: 105493d7b; +[SCBitmojiFlatlandSceneDefaults descriptor] */

void FUN_105493d14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbfc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3a880,
                        &PTR____CFConstantStringClassReference_110de1238,
                        &PTR_s_snapchat_bitmoji_api_1130dac60,&PTR_s_version_1130dac78,2,0x10,0x1c);
    puRam00000001136bbfc0 = puVar1;
  }
  return;
}



/* Entry: 105493d7c; end: 105493de3; +[SCBitmojiFlatlandBackgroundDefaults descriptor] */

void FUN_105493d7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbfc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3a8d0,
                        &PTR____CFConstantStringClassReference_110de1258,
                        &PTR_s_snapchat_bitmoji_api_1130dac60,&PTR_s_version_1130dacb8,2,0x10,0x1c);
    puRam00000001136bbfc8 = puVar1;
  }
  return;
}



/* Entry: 105493de4; end: 105493e4b; +[SCBitmojiFlatlandSceneList descriptor] */

void FUN_105493de4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbfd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3a970,
                        &PTR____CFConstantStringClassReference_110de1278,
                        &PTR_s_snapchat_bitmoji_api_1130dacf8,&PTR_s_version_1130dad50,4,0x20,0x1c);
    puRam00000001136bbfd0 = puVar1;
  }
  return;
}



/* Entry: 105493e4c; end: 105493eb3; +[SCBitmojiFlatlandBackgroundList descriptor] */

void FUN_105493e4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbfd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3a9c0,
                        &PTR____CFConstantStringClassReference_110de1298,
                        &PTR_s_snapchat_bitmoji_api_1130dacf8,&PTR_s_version_1130dadd0,4,0x20,0x1c);
    puRam00000001136bbfd8 = puVar1;
  }
  return;
}



/* Entry: 105493eb4; end: 105493f1b; +[SCBitmojiBackgroundDetail descriptor] */

void FUN_105493eb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbfe0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3aa10,
                        &PTR____CFConstantStringClassReference_110de12b8,
                        &PTR_s_snapchat_bitmoji_api_1130dacf8,&PTR_DAT_1130dad10,2,4,0x1c);
    puRam00000001136bbfe0 = puVar1;
  }
  return;
}



/* Entry: 105493f1c; end: 105493f83; +[BitmojiFlatlandNewContentAlertsConfig descriptor] */

void FUN_105493f1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbfe8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3aab0,
                        &PTR____CFConstantStringClassReference_110de12d8,&PTR_DAT_1130dae50,
                        &PTR_DAT_1130dae68,3,4,0x1c);
    puRam00000001136bbfe8 = puVar1;
  }
  return;
}



/* Entry: 105493f84; end: 105494137; -[SCBitmoji3DBatchedSceneClientRenderer initWithLensProcessor:lensWarmer:bitmojiSceneDataFetcher:bitmojiGLBFetcher:bitmojiAvatarProvider:configProvider:performerProvider:lifecycleManager:] */

undefined1 *
FUN_105493f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  puStack_58 = PTR_PTR_1126e86f0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b9640;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105494138; end: 105494187; -[SCBitmoji3DBatchedSceneClientRenderer dealloc] */

void FUN_105494138(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    _CVPixelBufferRelease();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  puStack_28 = PTR_PTR_1126e86f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105494188; end: 10549489f; -[SCBitmoji3DBatchedSceneClientRenderer renderImageDataForCurrentAvatarWithCallback:sceneIds:friendAvatarId:renderSurface:trimImage:lensId:clientRenderGating:attribution:text:imageType:isStaging:engineType:scale:] */

void FUN_105494188(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined1 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined4 param_13,
                  undefined4 param_14,undefined8 param_15)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  undefined1 auStack_2b0 [8];
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  long lStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [8];
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  func_0x00010c24d9a0(*(undefined8 *)(param_1 + 0x60));
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_4);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_4);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_4);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  dVar14 = 6.81691147847594e-313;
  uStack_110 = 0x2020000000;
  _CACurrentMediaTime();
  lStack_108 = (long)(dVar14 * 1000.0);
  puStack_148 = &uStack_150;
  uStack_150 = 0;
  uStack_140 = 0x3032000000;
  pcStack_138 = FUN_1054948a0;
  uStack_130 = 0x1054948b0;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uStack_128 = uVar4;
  func_0x00010c2a2140();
  _objc_retainAutoreleasedReturnValue();
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  lStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  _objc_retain(param_4);
  lVar11 = param_4;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    lVar12 = *plStack_180;
    do {
      lVar13 = 0;
      do {
        if (*plStack_180 != lVar12) {
          _objc_enumerationMutation(param_4);
        }
        uVar4 = *(undefined8 *)(lStack_188 + lVar13 * 8);
        lVar6 = param_1;
        func_0x00010be1dd00(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        puVar7 = PTR_PTR_1126ae560;
        _objc_opt_new();
        puVar8 = puVar7;
        func_0x00010bfbc3e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(puVar8);
        puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1c8 = 0xc2000000;
        pcStack_1c0 = FUN_1054948b8;
        puStack_1b8 = &UNK_11088dc68;
        puStack_198 = &uStack_150;
        uStack_1b0 = uVar4;
        _objc_retain(puVar7);
        puStack_1a8 = puVar7;
        _objc_retain(param_8);
        lVar9 = lVar6;
        uStack_1a0 = param_8;
        func_0x00010bf43280(lVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(lVar9);
        _objc_release(uStack_1a0);
        _objc_release(puStack_1a8);
        _objc_release(puVar7);
        _objc_release(lVar6);
        lVar13 = lVar13 + 1;
      } while (lVar11 != lVar13);
      lVar11 = param_4;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
  }
  _objc_release(param_4);
  _objc_initWeak(auStack_1d8,*(undefined8 *)(param_1 + 0x10));
  _objc_initWeak(auStack_1e0,param_1);
  puStack_208 = &uStack_210;
  uStack_210 = 0;
  uStack_200 = 0x3032000000;
  pcStack_1f8 = FUN_1054948a0;
  uStack_1f0 = 0x1054948b0;
  puVar7 = PTR_PTR_1126ae6b8;
  func_0x00010c0cab40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2a0 = 0xc2000000;
  pcStack_298 = FUN_105495650;
  puStack_290 = &UNK_11088dd28;
  _objc_copyWeak(auStack_240,auStack_1e0);
  _objc_retain(param_3);
  lStack_288 = param_3;
  uStack_230 = param_6;
  _objc_retain(param_9);
  uStack_280 = param_9;
  _objc_retain(param_4);
  lStack_278 = param_4;
  _objc_retain(uVar5);
  uStack_270 = uVar5;
  _objc_retain(param_8);
  uStack_268 = param_8;
  lStack_260 = param_1;
  _objc_copyWeak(auStack_238,auStack_1d8);
  _objc_retain(puVar3);
  puStack_250 = &uStack_120;
  puStack_248 = &uStack_150;
  uStack_228 = param_12;
  uStack_220 = param_15;
  puVar10 = puVar8;
  puStack_258 = puVar3;
  uStack_218 = param_7;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  puStack_1e8 = puVar10;
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126b0418;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_2b0,auStack_1e0);
  func_0x00010bf54280(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_2b0);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_210,8);
  _objc_release(puStack_1e8);
  _objc_release(puStack_258);
  _objc_destroyWeak(auStack_238);
  _objc_release(uStack_268);
  _objc_release(uStack_270);
  _objc_release(lStack_278);
  _objc_release(uStack_280);
  _objc_release(lStack_288);
  _objc_destroyWeak(auStack_240);
  _objc_destroyWeak(auStack_1e0);
  _objc_destroyWeak(auStack_1d8);
  _objc_release(uVar5);
  __Block_object_dispose(&uStack_150,8);
  _objc_release(uStack_128);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_2b0);
  __Block_object_dispose(&uStack_210,8);
  _objc_destroyWeak(auStack_238);
  _objc_destroyWeak(auStack_240);
  _objc_destroyWeak(auStack_1e0);
  _objc_destroyWeak(auStack_1d8);
  __Block_object_dispose(&uStack_150,8);
  lVar11 = 8;
  __Block_object_dispose(&uStack_120);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar11 + 0x28);
  *(undefined8 *)(lVar11 + 0x28) = 0;
  return;
}



/* Entry: 1054948a0; end: 1054948b7;  */

void FUN_1054948a0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1054948b8; end: 105494a3b;  */

void FUN_1054948b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1054948a0;
  uStack_60 = 0x1054948b0;
  uStack_58 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c0c0800(param_2);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105494a3c; end: 1054955db;  */

void FUN_105494a3c(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = param_2;
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c130260();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined *)0x5;
  func_0x00010900661c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (puVar1 == puVar2) {
    _objc_retain(param_2);
    _objc_opt_new();
    puVar1 = param_2;
    func_0x00010c0f6420(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    puVar2 = puVar1;
    func_0x00010c0e00e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b9660;
    _objc_alloc();
    func_0x00010bff43e0();
    func_0x00010befa120(puVar14);
    puVar19 = puVar14;
    func_0x00010bf51e00();
    _objc_release(puVar1);
  }
  else {
    _objc_opt_new();
    puVar2 = param_2;
    func_0x00010bf133c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bf52a60();
    lVar18 = lRam0000000000000000;
    while (puVar1 != (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar18) {
          _objc_enumerationMutation(puVar2);
        }
        lVar20 = *(long *)((long)puVar19 * 8);
        lVar3 = lVar20;
        func_0x00010bf13240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 != 0) {
          lVar3 = lVar20;
          func_0x00010bf13240(lVar20);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_PTR_1126b9660;
          _objc_retain(puVar14);
          _objc_alloc(puVar4);
          func_0x00010bff43e0();
          func_0x00010befa120(puVar14);
          _objc_release(puVar14);
          _objc_release(puVar4);
          _objc_release(lVar3);
        }
        _objc_retain(puVar14);
        _objc_retain(lVar20);
        lVar3 = lVar20;
        func_0x00010bf039c0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010bfdea00();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c08fa60();
        _objc_release(lVar5);
        _objc_release(lVar3);
        if (lVar6 != 0) {
          puVar4 = PTR_PTR_1126b9660;
          _objc_alloc(PTR_PTR_1126b9660);
          lVar3 = lVar20;
          func_0x00010bf039c0(lVar20);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar3;
          func_0x00010bfdea00();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar20;
          func_0x00010bf039c0(lVar20);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010bf93420();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bff43e0(puVar4);
          _objc_release(lVar7);
          _objc_release(lVar6);
          _objc_release(lVar5);
          _objc_release(lVar3);
          func_0x00010befa120(puVar14);
          _objc_release(puVar4);
        }
        _objc_release(lVar20);
        _objc_release(puVar14);
        puVar19 = puVar19 + 1;
      } while (puVar1 != puVar19);
      puVar1 = puVar2;
      func_0x00010bf52a60();
    }
    _objc_release(puVar2);
    puVar2 = param_2;
    func_0x00010c118e40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bf52a60();
    lVar18 = lRam0000000000000000;
    while (puVar1 != (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar18) {
          _objc_enumerationMutation(puVar2);
        }
        puVar21 = *(undefined **)((long)puVar19 * 8);
        puVar4 = puVar21;
        func_0x00010c118b20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar4 == (undefined *)0x0) {
          _objc_retain(puVar14);
          _objc_retain(puVar21);
          puVar4 = puVar21;
          func_0x00010bf15e20();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar4;
          func_0x00010bfdea00();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010c08fa60();
          _objc_release(puVar8);
          _objc_release(puVar4);
          puVar8 = puVar14;
          puVar4 = puVar21;
          if (puVar9 != (undefined *)0x0) {
            puVar9 = PTR_PTR_1126b9660;
            _objc_alloc(PTR_PTR_1126b9660);
            puVar10 = puVar21;
            func_0x00010bf15e20(puVar21);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar10;
            func_0x00010bfdea00();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar21;
            func_0x00010bf15e20(puVar21);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar12;
            func_0x00010bf93420();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bff43e0(puVar9);
            _objc_release(puVar13);
            _objc_release(puVar12);
            _objc_release(puVar11);
            _objc_release(puVar10);
            goto LAB_105494ee4;
          }
        }
        else {
          puVar8 = puVar21;
          func_0x00010c118b20(puVar21);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_PTR_1126b9660;
          _objc_retain(puVar14);
          _objc_alloc(puVar4);
          func_0x00010bff43e0();
          puVar9 = puVar14;
LAB_105494ee4:
          func_0x00010befa120(puVar14);
          _objc_release(puVar9);
        }
        _objc_release(puVar4);
        _objc_release(puVar8);
        _objc_retain(puVar14);
        _objc_retain(puVar21);
        puVar4 = puVar21;
        func_0x00010bf039c0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar4;
        func_0x00010bfdea00();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c08fa60();
        _objc_release(puVar8);
        _objc_release(puVar4);
        if (puVar9 != (undefined *)0x0) {
          puVar4 = PTR_PTR_1126b9660;
          _objc_alloc(PTR_PTR_1126b9660);
          puVar8 = puVar21;
          func_0x00010bf039c0(puVar21);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010bfdea00();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar21;
          func_0x00010bf039c0(puVar21);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010bf93420();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bff43e0(puVar4);
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar8);
          func_0x00010befa120(puVar14);
          _objc_release(puVar4);
        }
        _objc_release(puVar21);
        _objc_release(puVar14);
        puVar19 = puVar19 + 1;
      } while (puVar1 != puVar19);
      puVar1 = puVar2;
      func_0x00010bf52a60();
    }
    _objc_release(puVar2);
    _objc_retain(param_2);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar2 = param_2;
    func_0x00010c0f6420();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar19;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar4);
    _objc_release(puVar19);
    _objc_release(puVar2);
    if (puVar21 != (undefined *)0x0) {
      puVar2 = param_2;
      func_0x00010c0f6420(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar19;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar19);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126b9660;
      _objc_alloc(PTR_PTR_1126b9660);
      func_0x00010bff43e0();
      func_0x00010befa120(puVar1);
      _objc_release(puVar2);
      _objc_release(puVar21);
    }
    puVar19 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    puVar2 = param_2;
    func_0x00010c0f6420();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar4;
    func_0x00010bf52a60();
    lVar18 = lRam0000000000000000;
    while (puVar2 != (undefined *)0x0) {
      puVar21 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar18) {
          _objc_enumerationMutation(puVar4);
        }
        lVar20 = *(long *)((long)puVar21 * 8);
        lVar3 = lVar20;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        if ((lVar3 != 0) && (puVar8 = puVar19, func_0x00010bf4b900(), ((ulong)puVar8 & 1) == 0)) {
          puVar8 = PTR_PTR_1126b9660;
          _objc_alloc(PTR_PTR_1126b9660);
          func_0x00010bff43e0();
          func_0x00010befa120(puVar1);
          func_0x00010befa120(puVar19);
          _objc_release(puVar8);
        }
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        if ((lVar20 != 0) && (puVar8 = puVar19, func_0x00010bf4b900(), ((ulong)puVar8 & 1) == 0)) {
          puVar8 = PTR_PTR_1126b9660;
          _objc_alloc(PTR_PTR_1126b9660);
          func_0x00010bff43e0();
          func_0x00010befa120(puVar1);
          func_0x00010befa120(puVar19);
          _objc_release(puVar8);
        }
        _objc_release(lVar20);
        _objc_release(lVar3);
        puVar21 = puVar21 + 1;
      } while (puVar2 != puVar21);
      puVar2 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
    puVar2 = puVar1;
    func_0x00010bf51e00(puVar1);
    _objc_release(puVar19);
    _objc_release(puVar1);
    _objc_release(param_2);
    puVar19 = puVar14;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(puVar14);
  puVar14 = puVar19;
  func_0x00010bf529e0();
  if (puVar14 == (undefined *)0x0) {
    puVar14 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar14 = PTR_PTR_1126b9648;
    _objc_alloc();
    puVar1 = param_2;
    func_0x00010c14fa80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    func_0x00010c0f6420(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0027c0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar18 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar17 = *(undefined8 *)(lVar18 + 0x28);
  *(undefined **)(lVar18 + 0x28) = puVar1;
  _objc_release(uVar17);
  _objc_release(puVar14);
  _objc_release(puVar19);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  uVar17 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(puVar15);
  func_0x00010bf43ca0(uVar17);
  puVar14 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  uVar17 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x28);
  *(undefined **)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x28) = puVar14;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar17);
  return;
}



/* Entry: 1054955dc; end: 10549564f;  */

void FUN_1054955dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bf43ca0(uVar3);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined **)(lVar2 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105495650; end: 105495843;  */

void FUN_105495650(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_105495844;
  puStack_c8 = &UNK_11088dcc8;
  _objc_copyWeak(auStack_80,param_1 + 0x68);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_70 = *(undefined8 *)(param_1 + 0x78);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_c0 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_b8 = uVar2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_b0 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_a8 = uVar2;
  _objc_retain(uVar1);
  uStack_98 = *(undefined8 *)(param_1 + 0x48);
  uStack_a0 = uVar1;
  _objc_copyWeak(auStack_78,param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
  uStack_58 = *(undefined1 *)(param_1 + 0x90);
  uStack_88 = *(undefined8 *)(param_1 + 0x58);
  uStack_60 = *(undefined8 *)(param_1 + 0x88);
  uStack_68 = *(undefined8 *)(param_1 + 0x80);
  uStack_90 = uVar1;
  _objc_copyWeak(auStack_e8,param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_e8);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_2);
  return;
}



/* Entry: 105495844; end: 105495a4f;  */

void FUN_105495844(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bf2f680();
    if (iVar1 == 0) {
      lVar3 = lVar2;
      func_0x00010beb2ba0();
      if ((int)lVar3 == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x38);
        _objc_copyWeak(auStack_70,param_1 + 0x60);
        uStack_60 = *(undefined8 *)(param_1 + 0x70);
        uVar5 = *(undefined8 *)(param_1 + 0x40);
        _objc_retain(uVar5);
        uVar6 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar6);
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar7);
        uVar8 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar8);
        _objc_copyWeak(auStack_68,param_1 + 0x68);
        uVar9 = *(undefined8 *)(param_1 + 0x50);
        _objc_retain(uVar9);
        uStack_48 = *(undefined1 *)(param_1 + 0x88);
        uStack_50 = *(undefined8 *)(param_1 + 0x80);
        uStack_58 = *(undefined8 *)(param_1 + 0x78);
        func_0x00010c297260(uVar4);
        _objc_release(uVar9);
        _objc_destroyWeak(auStack_68);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_destroyWeak(auStack_70);
      }
      else {
        func_0x00010be51560(lVar2);
        lVar3 = lVar2;
        func_0x00010bddb0c0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be8e780(lVar2);
        _objc_release(lVar3);
      }
    }
    else {
      func_0x00010be51560(lVar2);
      func_0x00010be096a0(lVar2);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 105495a50; end: 105495c47;  */

void FUN_105495a50(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
    func_0x00010bf2f680();
    lVar2 = param_1 + 0x58;
    _objc_loadWeakRetained();
    if (iVar1 == 0) {
      lVar3 = lVar2;
      func_0x00010beb2ba0();
      _objc_release(lVar2);
      if ((int)lVar3 == 0) {
        lVar3 = param_1 + 0x60;
        _objc_loadWeakRetained(lVar3);
        lVar2 = lVar3;
        func_0x00010c2a1d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        param_1 = param_1 + 0x58;
        _objc_loadWeakRetained(param_1);
        func_0x00010be0a1e0();
        _objc_release(param_1);
      }
      else {
        lVar2 = param_1 + 0x58;
        _objc_loadWeakRetained(lVar2);
        func_0x00010be51560();
        _objc_release(lVar2);
        lVar2 = param_1 + 0x58;
        _objc_loadWeakRetained(lVar2);
        _objc_retain();
        lVar3 = lVar2;
        func_0x00010bddb0c0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be8e780(lVar2);
        _objc_release(lVar2);
        _objc_release(lVar3);
      }
    }
    else {
      func_0x00010be51560(lVar2);
      _objc_release(lVar2);
      lVar2 = param_1 + 0x58;
      _objc_loadWeakRetained(lVar2);
      func_0x00010be096a0();
    }
    _objc_release(lVar2);
  }
  else {
    lVar2 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar2);
    func_0x00010be53f80();
    _objc_release(lVar2);
    func_0x00010be8e780(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105495c48; end: 105495e07;  */

void FUN_105495c48(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  _objc_copyWeak(param_1 + 0x58,param_2 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x60,param_2 + 0x60);
  return;
}



/* Entry: 105495e08; end: 105495e97;  */

void FUN_105495e08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c292820(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c296f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8e780();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105495e98; end: 105495fff;  */

void FUN_105495e98(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  _objc_copyWeak(param_1 + 0x68,param_2 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x70,param_2 + 0x70);
  return;
}


