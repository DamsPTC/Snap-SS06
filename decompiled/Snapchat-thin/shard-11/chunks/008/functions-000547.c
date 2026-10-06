/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10893fc88; end: 10893fc9b;  */

void FUN_10893fc88(void)

{
  FUN_10893fcec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10893fc9c; end: 10893fceb;  */

undefined8 FUN_10893fc9c(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1089382f0(param_1 + 0x80);
  func_0x000108938244(param_1 + 0x70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x58);
  func_0x0001089383a4(param_1 + 0x48);
  func_0x000108938338(param_1 + 0x38);
  func_0x000108937570(param_1 + 0x28);
  param_1 = param_1 + 0x18;
  func_0x000108939b1c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10893fcec; end: 10893fcfb;  */

void FUN_10893fcec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10893fcfc; end: 10893fd47;  */

void FUN_10893fcfc(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10893fd48; end: 10893fd63;  */

void FUN_10893fd48(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a9b3f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10893fd64; end: 10893fd87;  */

void FUN_10893fd64(long param_1)

{
  func_0x0001089402a4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10893fd88; end: 10893fdfb;  */

void FUN_10893fd88(void)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined1 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  puVar5 = auStack_40;
  func_0x0001089402b0();
  FUN_10893fe18(auStack_40,1);
  FUN_10893fe70(lStack_30);
  lVar6 = lStack_30;
  lStack_30 = 0;
  FUN_10893fdfc(lVar6 + 0x18);
  FUN_1089401dc(auStack_40);
  func_0x0001089402dc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1089401dc();
  func_0x000108940280();
  *extraout_x8 = puVar5;
  extraout_x8[1] = lVar6;
  puVar2 = (undefined8 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = (undefined8 *)(puVar5 + 8);
  }
  if ((puVar2 != (undefined8 *)0x0) && ((puVar2[1] == 0 || (*(long *)(puVar2[1] + 8) == -1)))) {
    pcStack_48 = FUN_10893fdfc;
    lStack_68 = extraout_x8[1];
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
    FUN_108940104(&uStack_60);
    FUN_1089401ec(&puStack_70);
    return;
  }
  return;
}



/* Entry: 10893fdfc; end: 10893fe17;  */

void FUN_10893fdfc(long *param_1,long param_2,long param_3)

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
    FUN_108940104(&lStack_20);
    FUN_1089401ec(&lStack_30);
    return;
  }
  return;
}



/* Entry: 10893fe18; end: 10893fe3f;  */

long FUN_10893fe18(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10893fe40();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10893fe40; end: 10893fe6f;  */

undefined8 * FUN_10893fe40(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x492492492492493) {
    puVar1 = (undefined8 *)(param_2 * 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a9b5d8;
  FUN_10893fed4(param_1 + 3);
  return param_1;
}



/* Entry: 10893fe70; end: 10893feb3;  */

undefined8 * FUN_10893fe70(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a9b5d8;
  FUN_10893fed4(param_1 + 3);
  return param_1;
}



/* Entry: 10893feb4; end: 10893feb7;  */

void FUN_10893feb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9b5d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10893feb8; end: 10893fecb;  */

void FUN_10893feb8(void)

{
  FUN_10894014c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10893fecc; end: 10893fed3;  */

void FUN_10893fecc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108940268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10893fed4; end: 10893ff17;  */

undefined8 FUN_10893fed4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10893ff18(param_1,&uStack_30);
  func_0x0001089402f4();
  return param_1;
}



/* Entry: 10893ff18; end: 108940023;  */

undefined8 * FUN_10893ff18(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  func_0x000107c31088(&lStack_28,&UNK_10f4ed23a);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a9b6b8;
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
  param_1[3] = lStack_28;
  func_0x000107c278f4(&lStack_28);
  *param_1 = &PTR_FUN_110a9b628;
  func_0x00010893ffa0(0x113828058,param_2);
  return param_1;
}



/* Entry: 108940024; end: 108940027;  */

undefined8 * FUN_108940024(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9b6b8;
  func_0x000107c278f4(param_1 + 3);
  FUN_108940104(param_1 + 1);
  return param_1;
}



/* Entry: 108940028; end: 10894003b;  */

void FUN_108940028(void)

{
  func_0x00010893ffe8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10894003c; end: 10894005f;  */

void FUN_10894003c(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x18);
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



/* Entry: 108940060; end: 1089400eb;  */

void FUN_108940060(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  func_0x000104bd4df4(&lStack_30);
  if (lStack_30 == 0) {
    lStack_38 = 0;
  }
  else {
    plVar1 = (long *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lStack_38 = lStack_30;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_28 = lStack_30;
  FUN_108b72dd4(&lStack_28);
  func_0x000104bd4e40(&lStack_28);
  func_0x000104bd4e40(&lStack_38);
  func_0x00010b9a8f54(param_1,&lStack_30);
  func_0x000104bd4e40(&lStack_30);
  return;
}



/* Entry: 1089400ec; end: 1089400ef;  */

undefined8 * FUN_1089400ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9b6b8;
  func_0x000107c278f4(param_1 + 3);
  FUN_108940104(param_1 + 1);
  return param_1;
}



/* Entry: 1089400f0; end: 108940103;  */

void FUN_1089400f0(void)

{
  func_0x00010893ffe8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108940104; end: 10894014b;  */

void FUN_108940104(long param_1)

{
  func_0x0001089402a4();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10894014c; end: 108940157;  */

void FUN_10894014c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9b5d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108940158; end: 1089401db;  */

void FUN_108940158(long param_1,undefined8 *param_2,undefined8 param_3)

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
    FUN_108940104(&uStack_20);
    FUN_1089401ec(&uStack_30);
    return;
  }
  return;
}



/* Entry: 1089401dc; end: 1089401eb;  */

void FUN_1089401dc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1089401ec; end: 10894020f;  */

void FUN_1089401ec(long param_1)

{
  func_0x0001089402a4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108940210; end: 1089402fb;  */

void FUN_108940210(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00010894021c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1089402fc; end: 108940387;  */

void FUN_1089402fc(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    func_0x000107c28068(auStack_48,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
    FUN_108940388(auStack_60,param_1,lVar2,auStack_48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  }
  return;
}



/* Entry: 108940388; end: 1089403a7;  */

void FUN_108940388(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_1089409a0(&uStack_18);
  return;
}



/* Entry: 1089403a8; end: 1089404b3;  */

void FUN_1089403a8(uint *param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [24];
  undefined1 uStack_38;
  
  *param_1 = (uint)(*param_2 == 1);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined **)(param_1 + 2) = &UNK_10e52b660;
  lVar1 = *(long *)(param_2 + 4);
  for (lVar3 = *(long *)(param_2 + 2); lVar3 != lVar1; lVar3 = lVar3 + 0x28) {
    auStack_50[0] = 0;
    uStack_38 = 0;
    if (*(char *)(lVar3 + 0x20) == '\x01') {
      lVar2 = lVar3 + 8;
      func_0x000107316780(lVar2);
      func_0x000107c27994(&uStack_68,lVar2);
      func_0x000107c28494(auStack_80,uStack_68,uStack_60);
      func_0x000107c27b94(auStack_50,auStack_80);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
      func_0x000107c27914(&uStack_68);
    }
    FUN_1089404b4(&uStack_68,param_1 + 2,lVar3,auStack_50);
    func_0x000107c279a4(auStack_50);
  }
  return;
}



/* Entry: 1089404b4; end: 1089404d3;  */

void FUN_1089404b4(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000108940c64(&uStack_18);
  return;
}



/* Entry: 1089404d4; end: 10894070f;  */

void FUN_1089404d4(uint *param_1,int *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 ***pppuVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  undefined1 auStack_108 [32];
  undefined4 auStack_e8 [2];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [24];
  undefined1 uStack_a8;
  int *piStack_a0;
  undefined4 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  piVar5 = param_2 + 2;
  iVar3 = *param_2;
  puVar8 = param_1 + 2;
  puVar8[0] = 0;
  puVar8[1] = 0;
  *param_1 = (uint)(iVar3 == 1);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  FUN_10893e93c(&uStack_90);
  FUN_108940f84();
  piStack_a0 = piVar5;
  while (piStack_a0 != (int *)0x0) {
    auStack_c0[0] = 0;
    uStack_a8 = 0;
    puStack_98 = param_3;
    if (*(char *)(param_3 + 8) == '\x01') {
      puVar6 = param_3 + 2;
      func_0x00010549026c(puVar6);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&ppuStack_78,puVar6);
      uVar1 = uStack_70;
      pppuVar4 = (undefined8 ***)ppuStack_78;
      if (-1 < (long)uStack_68) {
        uVar1 = uStack_68 >> 0x38;
        pppuVar4 = &ppuStack_78;
      }
      func_0x00010866e7d8(auStack_e8,pppuVar4,(long)pppuVar4 + uVar1);
      FUN_1086554b0(auStack_c0,auStack_e8);
      func_0x000107c27914(auStack_e8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_78);
    }
    uVar2 = *param_3;
    func_0x000104be0ccc(auStack_108,auStack_c0);
    auStack_e8[0] = uVar2;
    func_0x000107c27b7c(auStack_e0,auStack_108);
    func_0x000107c279c4(auStack_108);
    uVar1 = *(ulong *)(param_1 + 4);
    if (uVar1 < *(ulong *)(param_1 + 6)) {
      FUN_10893ea00(uVar1,auStack_e8);
      lVar9 = uVar1 + 0x28;
    }
    else {
      puVar7 = puVar8;
      FUN_108940710(puVar8,(long)(uVar1 - *(long *)puVar8) / 0x28 + 1);
      FUN_1089407e4(&ppuStack_78,puVar7,(*(long *)(param_1 + 4) - *(long *)(param_1 + 2)) / 0x28,
                    param_1 + 6);
      FUN_10893ea00(uStack_68,auStack_e8);
      uStack_68 = uStack_68 + 0x28;
      FUN_108940760(puVar8,&ppuStack_78);
      lVar9 = *(long *)(param_1 + 4);
      func_0x00010894092c(&ppuStack_78);
    }
    *(long *)(param_1 + 4) = lVar9;
    func_0x000107c279c4(auStack_e0);
    func_0x000107c279c4(auStack_c0);
    FUN_108941008(&piStack_a0);
    param_3 = puStack_98;
  }
  return;
}



/* Entry: 108940710; end: 10894075f;  */

long * FUN_108940710(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
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
  FUN_10893e9a4();
  plVar2 = param_1 + 2;
  lVar3 = param_2[1] + ((param_1[1] - *param_1) / -0x28) * 0x28;
  FUN_108940830(plVar2,*param_1,param_1[1],lVar3);
  param_2[1] = lVar3;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return plVar2;
}



/* Entry: 108940760; end: 1089407e3;  */

void FUN_108940760(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x28) * 0x28;
  FUN_108940830(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1089407e4; end: 10894082f;  */

long * FUN_1089407e4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_10893e9b0();
  }
  lVar1 = param_4 + param_3 * 0x28;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x28;
  return param_1;
}



/* Entry: 108940830; end: 1089408cb;  */

void FUN_108940830(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x28) {
    func_0x000108940904(param_4,lVar1);
    param_4 = lStack_38 + 0x28;
  }
  uStack_48 = 1;
  func_0x0001089408cc(param_1,param_2,param_3);
  FUN_10893ea28(&uStack_60);
  return;
}



/* Entry: 1089408cc; end: 108940957;  */

void FUN_1089408cc(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    func_0x000107c279c4(param_2 + 8);
  }
  return;
}



/* Entry: 108940958; end: 10894095f;  */

void FUN_108940958(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar2 = *(long *)(param_1 + 0x10), lVar1 != lVar2) {
    *(long *)(param_1 + 0x10) = lVar2 + -0x28;
    func_0x000107c279c4(lVar2 + -0x20);
  }
  return;
}



/* Entry: 108940960; end: 10894099f;  */

void FUN_108940960(long param_1,long param_2)

{
  long lVar1;
  
  while (lVar1 = *(long *)(param_1 + 0x10), param_2 != lVar1) {
    *(long *)(param_1 + 0x10) = lVar1 + -0x28;
    func_0x000107c279c4(lVar1 + -0x20);
  }
  return;
}



/* Entry: 1089409a0; end: 1089409a3;  */

void FUN_1089409a0(void)

{
  func_0x00010894116c();
  FUN_1089409c0();
  return;
}



/* Entry: 1089409a4; end: 1089409bf;  */

void FUN_1089409a4(void)

{
  func_0x00010894116c();
  FUN_1089409c0();
  return;
}



/* Entry: 1089409c0; end: 108940a3f;  */

void FUN_1089409c0(long *param_1,long *param_2,uint param_3,undefined8 param_4,undefined8 *param_5,
                  undefined8 *param_6)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = *param_2;
  FUN_108940a40();
  if ((param_3 & 1) != 0) {
    puVar1 = (undefined4 *)(*(long *)(*param_2 + 8) + lVar3 * 0x20);
    param_6 = (undefined8 *)*param_6;
    *puVar1 = *(undefined4 *)*param_5;
    uVar5 = param_6[1];
    uVar4 = *param_6;
    *(undefined8 *)(puVar1 + 6) = param_6[2];
    *(undefined8 *)(puVar1 + 4) = uVar5;
    *(undefined8 *)(puVar1 + 2) = uVar4;
    param_6[1] = 0;
    param_6[2] = 0;
    *param_6 = 0;
  }
  lVar2 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar3;
  param_1[1] = lVar2 + lVar3 * 0x20;
  *(char *)(param_1 + 2) = (char)param_3;
  return;
}



/* Entry: 108940a40; end: 108940ae3;  */

undefined1  [16] FUN_108940a40(ulong param_1,ulong param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x9;
  long lVar4;
  ulong extraout_x10;
  int extraout_w11;
  ulong extraout_x12;
  ulong uVar5;
  byte bVar6;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  undefined8 uVar7;
  byte bVar13;
  undefined1 auVar14 [16];
  
  func_0x0001089410b4();
  bVar1 = (byte)param_2 & 0x7f;
  uVar2 = param_2 >> 7 ^ extraout_x10 >> 0xc;
  lVar4 = extraout_x9;
  while( true ) {
    uVar2 = uVar2 & extraout_x12;
    uVar7 = *(undefined8 *)(extraout_x10 + uVar2);
    bVar6 = (byte)((ulong)uVar7 >> 8);
    bVar8 = (byte)((ulong)uVar7 >> 0x10);
    bVar9 = (byte)((ulong)uVar7 >> 0x18);
    bVar10 = (byte)((ulong)uVar7 >> 0x20);
    bVar11 = (byte)((ulong)uVar7 >> 0x28);
    bVar12 = (byte)((ulong)uVar7 >> 0x30);
    bVar13 = (byte)((ulong)uVar7 >> 0x38);
    for (uVar5 = CONCAT17(-(bVar13 == bVar1),
                          CONCAT16(-(bVar12 == bVar1),
                                   CONCAT15(-(bVar11 == bVar1),
                                            CONCAT14(-(bVar10 == bVar1),
                                                     CONCAT13(-(bVar9 == bVar1),
                                                              CONCAT12(-(bVar8 == bVar1),
                                                                       CONCAT11(-(bVar6 == bVar1),
                                                                                -((byte)uVar7 ==
                                                                                 bVar1)))))))) &
                 0x8080808080808080; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar3 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar2 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & extraout_x12;
      if (*(int *)(*(long *)(param_1 + 8) + uVar3 * 0x20) == extraout_w11) {
        uVar7 = 0;
        goto LAB_108940ac8;
      }
    }
    bVar6 = NEON_umaxv(CONCAT17(-(bVar13 == 0x80),
                                CONCAT16(-(bVar12 == 0x80),
                                         CONCAT15(-(bVar11 == 0x80),
                                                  CONCAT14(-(bVar10 == 0x80),
                                                           CONCAT13(-(bVar9 == 0x80),
                                                                    CONCAT12(-(bVar8 == 0x80),
                                                                             CONCAT11(-(bVar6 == 
                                                  0x80),-((byte)uVar7 == 0x80)))))))),1);
    if ((bVar6 & 1) != 0) break;
    lVar4 = lVar4 + 8;
    uVar2 = lVar4 + uVar2;
  }
  FUN_108940ae4();
  uVar7 = 1;
  uVar3 = param_1;
LAB_108940ac8:
  auVar14._8_8_ = uVar7;
  auVar14._0_8_ = uVar3;
  return auVar14;
}



/* Entry: 108940ae4; end: 108940b2b;  */

void FUN_108940ae4(long param_1)

{
  long lVar1;
  long *unaff_x19;
  
  func_0x0001089411c8();
  lVar1 = *unaff_x19;
  if ((*(long *)(lVar1 + -8) == 0) && (*(char *)(lVar1 + param_1) != -2)) {
    FUN_108940bcc();
    func_0x0001089411b0();
    lVar1 = *unaff_x19;
  }
  func_0x00010894106c(lVar1);
  return;
}



/* Entry: 108940b2c; end: 108940bcb;  */

void FUN_108940b2c(void)

{
  undefined1 auVar1 [16];
  uint *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar2;
  
  func_0x0001089411f0();
  func_0x000107c284a8();
  for (lVar2 = 0; unaff_x23 != lVar2; lVar2 = lVar2 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar2)) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*unaff_x20;
      func_0x00010894115c(SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8));
      func_0x0001089410f4();
      func_0x000108940bfc();
    }
    unaff_x20 = unaff_x20 + 8;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 108940bcc; end: 108940c23;  */

ulong FUN_108940bcc(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 uVar3;
  uint *puVar4;
  ulong uVar5;
  ulong unaff_x19;
  uint *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  if ((8 < uVar5) &&
     (uVar3 = uVar5 * 0x19 + *(long *)(param_1 + 0x18) * -0x20 == 0,
     (ulong)(*(long *)(param_1 + 0x18) * 0x20) <= uVar5 * 0x19)) {
    func_0x0001089411dc();
    puVar4 = (uint *)&UNK_110a9b6d8;
    func_0x00010ae6c914();
    func_0x000108941198();
    if ((bool)uVar3) {
      return param_1;
    }
    ___stack_chk_fail();
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*puVar4;
    return SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
           ((long)&PTR_LOOP_110c8acd8 + (ulong)*puVar4) * -0x622015f714c7d297;
  }
  func_0x0001089411f0(param_1,uVar5 << 1 | 1);
  func_0x000107c284a8();
  for (lVar6 = 0; unaff_x23 != lVar6; lVar6 = lVar6 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar6)) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*unaff_x20;
      func_0x00010894115c(SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8));
      func_0x0001089410f4();
      param_1 = unaff_x19;
      func_0x000108940bfc();
    }
    unaff_x20 = unaff_x20 + 8;
  }
  if (unaff_x23 != 0) {
    uVar5 = unaff_x22 - 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(uVar5);
    return uVar5;
  }
  return param_1;
}



/* Entry: 108940c24; end: 108940c5b;  */

ulong FUN_108940c24(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined1 in_ZR;
  uint *puVar2;
  
  func_0x0001089411dc();
  puVar2 = (uint *)&UNK_110a9b6d8;
  func_0x00010ae6c914();
  func_0x000108941198();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*puVar2;
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         ((long)&PTR_LOOP_110c8acd8 + (ulong)*puVar2) * -0x622015f714c7d297;
}



/* Entry: 108940c5c; end: 108940c67;  */

ulong FUN_108940c5c(undefined8 param_1,uint *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*param_2;
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         ((long)&PTR_LOOP_110c8acd8 + (ulong)*param_2) * -0x622015f714c7d297;
}



/* Entry: 108940c68; end: 108940c83;  */

void FUN_108940c68(void)

{
  func_0x00010894116c();
  FUN_108940c84();
  return;
}



/* Entry: 108940c84; end: 108940d0f;  */

void FUN_108940c84(long *param_1,long *param_2,ulong param_3,undefined8 param_4,undefined8 *param_5,
                  undefined8 *param_6)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  lVar2 = *param_2;
  FUN_108940d10();
  if ((param_3 & 1) != 0) {
    uVar4 = *param_6;
    puVar3 = (undefined4 *)(*(long *)(*param_2 + 8) + lVar2 * 0x28);
    *puVar3 = *(undefined4 *)*param_5;
    func_0x000107c279a0(puVar3 + 2,uVar4);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0x28;
  *(char *)(param_1 + 2) = (char)param_3;
  return;
}



/* Entry: 108940d10; end: 108940db7;  */

undefined1  [16] FUN_108940d10(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long extraout_x9;
  long lVar3;
  ulong extraout_x10;
  int extraout_w11;
  ulong extraout_x12;
  byte bVar4;
  ulong uVar5;
  byte bVar6;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  undefined8 uVar7;
  byte bVar13;
  undefined1 auVar14 [16];
  
  func_0x0001089410b4();
  uVar1 = param_2 >> 7 ^ extraout_x10 >> 0xc;
  bVar4 = (byte)param_2 & 0x7f;
  lVar3 = extraout_x9;
  while( true ) {
    uVar1 = uVar1 & extraout_x12;
    uVar7 = *(undefined8 *)(extraout_x10 + uVar1);
    bVar6 = (byte)((ulong)uVar7 >> 8);
    bVar8 = (byte)((ulong)uVar7 >> 0x10);
    bVar9 = (byte)((ulong)uVar7 >> 0x18);
    bVar10 = (byte)((ulong)uVar7 >> 0x20);
    bVar11 = (byte)((ulong)uVar7 >> 0x28);
    bVar12 = (byte)((ulong)uVar7 >> 0x30);
    bVar13 = (byte)((ulong)uVar7 >> 0x38);
    for (uVar5 = CONCAT17(-(bVar13 == bVar4),
                          CONCAT16(-(bVar12 == bVar4),
                                   CONCAT15(-(bVar11 == bVar4),
                                            CONCAT14(-(bVar10 == bVar4),
                                                     CONCAT13(-(bVar9 == bVar4),
                                                              CONCAT12(-(bVar8 == bVar4),
                                                                       CONCAT11(-(bVar6 == bVar4),
                                                                                -((byte)uVar7 ==
                                                                                 bVar4)))))))) &
                 0x8080808080808080; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar2 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar2 = uVar1 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & extraout_x12;
      if (*(int *)(*(long *)(param_1 + 8) + uVar2 * 0x28) == extraout_w11) {
        uVar7 = 0;
        goto LAB_108940d9c;
      }
    }
    bVar6 = NEON_umaxv(CONCAT17(-(bVar13 == 0x80),
                                CONCAT16(-(bVar12 == 0x80),
                                         CONCAT15(-(bVar11 == 0x80),
                                                  CONCAT14(-(bVar10 == 0x80),
                                                           CONCAT13(-(bVar9 == 0x80),
                                                                    CONCAT12(-(bVar8 == 0x80),
                                                                             CONCAT11(-(bVar6 == 
                                                  0x80),-((byte)uVar7 == 0x80)))))))),1);
    if ((bVar6 & 1) != 0) break;
    lVar3 = lVar3 + 8;
    uVar1 = lVar3 + uVar1;
  }
  FUN_108940db8();
  uVar7 = 1;
  uVar2 = param_1;
LAB_108940d9c:
  auVar14._8_8_ = uVar7;
  auVar14._0_8_ = uVar2;
  return auVar14;
}



/* Entry: 108940db8; end: 108940dff;  */

void FUN_108940db8(long param_1)

{
  long lVar1;
  long *unaff_x19;
  
  func_0x0001089411c8();
  lVar1 = *unaff_x19;
  if ((*(long *)(lVar1 + -8) == 0) && (*(char *)(lVar1 + param_1) != -2)) {
    FUN_108940ea4();
    func_0x0001089411b0();
    lVar1 = *unaff_x19;
  }
  func_0x00010894106c(lVar1);
  return;
}



/* Entry: 108940e00; end: 108940ea3;  */

void FUN_108940e00(void)

{
  undefined1 auVar1 [16];
  uint *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar2;
  
  func_0x0001089411f0();
  func_0x00010780fbbc();
  for (lVar2 = 0; unaff_x23 != lVar2; lVar2 = lVar2 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar2)) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*unaff_x20;
      func_0x00010894115c(SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8));
      func_0x0001089410f4();
      FUN_108940ed4();
    }
    unaff_x20 = unaff_x20 + 10;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 108940ea4; end: 108940ed3;  */

ulong FUN_108940ea4(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 uVar3;
  uint *puVar4;
  ulong uVar5;
  ulong unaff_x19;
  uint *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  if ((8 < uVar5) &&
     (uVar3 = uVar5 * 0x19 + *(long *)(param_1 + 0x18) * -0x20 == 0,
     (ulong)(*(long *)(param_1 + 0x18) * 0x20) <= uVar5 * 0x19)) {
    func_0x0001089411dc();
    puVar4 = (uint *)&UNK_110a9b6f8;
    func_0x00010ae6c914();
    func_0x000108941198();
    if ((bool)uVar3) {
      return param_1;
    }
    ___stack_chk_fail();
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*puVar4;
    return SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
           ((long)&PTR_LOOP_110c8acd8 + (ulong)*puVar4) * -0x622015f714c7d297;
  }
  func_0x0001089411f0(param_1,uVar5 << 1 | 1);
  func_0x00010780fbbc();
  for (lVar6 = 0; unaff_x23 != lVar6; lVar6 = lVar6 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar6)) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*unaff_x20;
      func_0x00010894115c(SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8));
      func_0x0001089410f4();
      param_1 = unaff_x19;
      FUN_108940ed4();
    }
    unaff_x20 = unaff_x20 + 10;
  }
  if (unaff_x23 != 0) {
    uVar5 = unaff_x22 - 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(uVar5);
    return uVar5;
  }
  return param_1;
}



/* Entry: 108940ed4; end: 108940eff;  */

void FUN_108940ed4(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_108940f00(param_2,param_3);
  if (*(char *)(param_3 + 0x20) == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 108940f00; end: 108940f43;  */

void FUN_108940f00(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  if (*(char *)(param_2 + 8) == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 4);
    uVar1 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar2;
    *(undefined8 *)(param_1 + 2) = uVar1;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}



/* Entry: 108940f44; end: 108940f7b;  */

ulong FUN_108940f44(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined1 in_ZR;
  uint *puVar2;
  
  func_0x0001089411dc();
  puVar2 = (uint *)&UNK_110a9b6f8;
  func_0x00010ae6c914();
  func_0x000108941198();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*puVar2;
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         ((long)&PTR_LOOP_110c8acd8 + (ulong)*puVar2) * -0x622015f714c7d297;
}



/* Entry: 108940f7c; end: 108940f83;  */

ulong FUN_108940f7c(undefined8 param_1,uint *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*param_2;
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         ((long)&PTR_LOOP_110c8acd8 + (ulong)*param_2) * -0x622015f714c7d297;
}



/* Entry: 108940f84; end: 108940faf;  */

undefined1  [16] FUN_108940f84(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_108940fb0(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 108940fb0; end: 108941007;  */

void FUN_108940fb0(long *param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    uVar3 = *(undefined8 *)pcVar1;
    uVar2 = CONCAT17(-(-2 < (char)((ulong)uVar3 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar3 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar3 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar3 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar3 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar3 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar3 >> 8)),-(-2 < (char)uVar3))))))));
    uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
    pcVar1 = pcVar1 + (uVar2 >> 3);
    *param_1 = (long)pcVar1;
    param_1[1] = param_1[1] + (uVar2 >> 3) * 0x28;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 108941008; end: 10894103b;  */

long * FUN_108941008(long *param_1)

{
  param_1[1] = param_1[1] + 0x28;
  *param_1 = *param_1 + 1;
  FUN_108940fb0();
  return param_1;
}



/* Entry: 10894103c; end: 108941203;  */

ulong FUN_10894103c(undefined8 param_1,uint *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*param_2;
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         ((long)&PTR_LOOP_110c8acd8 + (ulong)*param_2) * -0x622015f714c7d297;
}



/* Entry: 108941204; end: 108941247;  */

undefined8 FUN_108941204(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uStack_18;
  
  uStack_18 = 0xffffffffffffffff;
  uVar1 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar2 = param_1;
  }
  FUN_108937f28(puVar2,uVar1,&uStack_18);
  return uStack_18;
}



/* Entry: 108941248; end: 1089412c7;  */

void FUN_108941248(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = &UNK_10df74d33;
  _dispatch_data_create(&UNK_10df74d33,0x1b44,0,&PTR___NSConcreteGlobalBlock_110a9b718);
  func_0x00010c0d8b80(param_1);
  FUN_1089412c8();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1089412c8; end: 1089412d7;  */

void FUN_1089412c8(void)

{
  return;
}



/* Entry: 1089412d8; end: 1089412e3; +[TCSampleBufferVideoView layerClass] */

void FUN_1089412d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___AVSampleBufferDisplayLayer_1126b6c98);
  return;
}



/* Entry: 1089412e4; end: 108941433; -[TCSampleBufferVideoView initWithFrame:rendererController:videoViewListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1089412e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x000108941f90();
  puVar2 = auStack_70;
  auStack_70[0] = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar2,
                      PTR_s_initWithFrame_typeName_videoView_11253c1c0,
                      &PTR____CFConstantStringClassReference_110ee7858,param_8);
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112777a28;
    func_0x000108942004();
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_7;
    _objc_release(uVar3);
    _objc_storeWeak((long)puVar2 + (long)_DAT_112777a2c,param_8);
    *(undefined4 *)((long)puVar2 + (long)_DAT_112777a30) = 0xffffffff;
    _CMTimeMakeWithSeconds(&uStack_88,0x3ff0000000000000,0x3c);
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_112777a34);
    puVar1[1] = uStack_80;
    *puVar1 = uStack_88;
    puVar1[2] = uStack_78;
    uVar5 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar3 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    puVar1[5] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar1[4] = uVar5;
    puVar1[3] = uVar3;
  }
  func_0x000108941fe0();
  func_0x000108941f88();
  return puVar2;
}



/* Entry: 108941434; end: 1089414af; -[TCSampleBufferVideoView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108941434(long param_1)

{
  long lVar1;
  long lVar2;
  long alStack_30 [2];
  
  lVar2 = (long)_DAT_112777a38;
  lVar1 = *(long *)(param_1 + lVar2);
  if (lVar1 != 0) {
    _CVPixelBufferPoolFlush(lVar1,1);
    _CVPixelBufferPoolRelease(*(undefined8 *)(param_1 + lVar2));
  }
  func_0x000108941f90();
  alStack_30[0] = param_1;
  _objc_msgSendSuper2(alStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1089414b0; end: 108941563; -[TCSampleBufferVideoView startWithSink:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1089414b0(void)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong unaff_x19;
  long unaff_x20;
  long lVar6;
  
  FUN_108941f78();
  lVar5 = (long)_DAT_112777a3c;
  uVar4 = *(undefined8 *)PTR__CGSizeZero_110347620;
  ((undefined8 *)(unaff_x20 + lVar5))[1] = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  *(undefined8 *)(unaff_x20 + lVar5) = uVar4;
  lVar5 = (long)_DAT_112777a30;
  lVar6 = (long)_DAT_112777a40;
  if ((*(int *)(unaff_x20 + lVar5) == -1) ||
     (uVar3 = unaff_x19, func_0x00010c0720c0(), (uVar3 & 1) == 0)) {
    func_0x000108942004();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar6);
    *(ulong *)(unaff_x20 + lVar6) = unaff_x19;
    _objc_release(uVar4);
    iVar2 = (int)*(undefined8 *)(unaff_x20 + _DAT_112777a28);
    func_0x00010c250360();
    *(int *)(unaff_x20 + lVar5) = iVar2;
    bVar1 = iVar2 != -1;
  }
  else {
    bVar1 = true;
  }
  func_0x000108941f88();
  return bVar1;
}



/* Entry: 108941564; end: 1089415d3; -[TCSampleBufferVideoView stop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108941564(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112777a3c;
  uVar1 = *(undefined8 *)PTR__CGSizeZero_110347620;
  ((undefined8 *)(param_1 + lVar2))[1] = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  *(undefined8 *)(param_1 + lVar2) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112777a40);
  *(undefined8 *)(param_1 + _DAT_112777a40) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112777a30;
  if (*(int *)(param_1 + lVar2) != -1) {
    func_0x00010c2567c0(*(undefined8 *)(param_1 + _DAT_112777a28));
    *(undefined4 *)(param_1 + lVar2) = 0xffffffff;
  }
  return;
}



/* Entry: 1089415d4; end: 1089416ef; -[TCSampleBufferVideoView onFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1089415d4(int param_1)

{
  double *pdVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long alStack_50 [2];
  long alStack_40 [2];
  
  plVar3 = alStack_50;
  FUN_108941f78();
  func_0x000108941fb0();
  if (param_1 == 0) {
    plVar3 = alStack_40;
  }
  else {
    func_0x000108941fb0();
    pdVar1 = (double *)(unaff_x20 + _DAT_112777a3c);
    if (*pdVar1 == (double)param_1) {
      lVar2 = unaff_x19;
      func_0x00010bfe0640();
      param_1 = (int)lVar2;
      if (pdVar1[1] != (double)param_1) goto LAB_10894162c;
    }
    else {
LAB_10894162c:
      func_0x000108941fb0();
      func_0x000108941fb8();
      func_0x000108941fcc((double)unaff_w21,(double)param_1);
      func_0x00010c29bc80(*pdVar1,pdVar1[1]);
      func_0x000108941f9c();
    }
    lVar2 = unaff_x19;
    func_0x00010bfb5800();
    if ((lVar2 == 9) && (lVar2 = unaff_x19, func_0x00010c0d5780(), lVar2 != 0)) {
      func_0x00010c0d5780();
      func_0x000108941ff8();
      goto LAB_1089416bc;
    }
    func_0x00010bfb5800();
    if (unaff_x19 == 5) {
      func_0x00010bee5fa0();
      goto LAB_1089416bc;
    }
  }
  func_0x000108941f90();
  *plVar3 = unaff_x20;
  plVar3[1] = extraout_x8;
  func_0x000108941fa4();
  _objc_msgSendSuper2();
LAB_1089416bc:
  func_0x000108941f88();
  return;
}



/* Entry: 1089416f0; end: 108941803; -[TCSampleBufferVideoView onNativeFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1089416f0(int param_1)

{
  double *pdVar1;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  
  FUN_108941f78();
  if (unaff_x19 == 0) {
    func_0x000108941f90();
    func_0x000108941fa4();
    _objc_msgSendSuper2(&stack0xffffffffffffffc0);
  }
  else {
    func_0x000108941fb0();
    func_0x000108941fb8();
    if (unaff_w21 == 0) {
      func_0x000108941f90();
      func_0x000108941fa4();
      _objc_msgSendSuper2(&stack0xffffffffffffffb0);
    }
    else {
      pdVar1 = (double *)(unaff_x20 + _DAT_112777a3c);
      if ((*pdVar1 != (double)unaff_w21) || (pdVar1[1] != (double)param_1)) {
        func_0x000108941fcc();
        func_0x00010c29bc80(*pdVar1,pdVar1[1]);
        func_0x000108941f9c();
      }
      func_0x00010c06aea0();
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x19 == 0) {
        func_0x000108941f90();
        func_0x000108941fa4();
        func_0x000108941ff0();
      }
      else {
        func_0x00010bf21c40(unaff_x19);
        func_0x000108941ff8();
      }
      func_0x000108941f9c();
    }
  }
  func_0x000108941f88();
  return;
}



/* Entry: 108941804; end: 108941807; -[TCSampleBufferVideoView _sampleBufferDisplayLayer] */

void FUN_108941804(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layer_112600a48);
  return;
}



/* Entry: 108941808; end: 10894183b; -[TCSampleBufferVideoView _uploadImageBuffer:] */

void FUN_108941808(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be0a170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__enqueueImageBuffer_completion__1125601f8,param_3,0);
    return;
  }
  func_0x000108941f90();
  func_0x000108941fa4();
  func_0x000108941ff0();
  return;
}



/* Entry: 10894183c; end: 108941a5f; -[TCSampleBufferVideoView _uploadYUVTexture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10894183c(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 unaff_x19;
  long unaff_x20;
  int unaff_w21;
  undefined8 uStack_68;
  
  FUN_108941f78();
  func_0x000108941fb0();
  func_0x000108941fb8();
  func_0x00010bdf1560((double)unaff_w21,(double)param_1);
  uStack_68 = 0;
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  _CVPixelBufferPoolCreatePixelBuffer(uVar1,*(undefined8 *)(unaff_x20 + _DAT_112777a38),&uStack_68);
  if ((int)uVar1 == 0) {
    _CVPixelBufferLockBaseAddress(uStack_68,0);
    uVar1 = uStack_68;
    _CVPixelBufferGetBaseAddressOfPlane(uStack_68,0);
    uVar2 = uStack_68;
    _CVPixelBufferGetBytesPerRowOfPlane(uStack_68,0);
    uVar3 = uStack_68;
    _CVPixelBufferGetBaseAddressOfPlane(uStack_68,1);
    uVar4 = uStack_68;
    _CVPixelBufferGetBytesPerRowOfPlane(uStack_68,1);
    uVar5 = unaff_x19;
    func_0x00010c0fdfc0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    uVar7 = unaff_x19;
    func_0x00010c25cc00();
    uVar8 = unaff_x19;
    func_0x00010c0fdfe0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    uVar10 = unaff_x19;
    func_0x00010c25cc20();
    uVar11 = uVar10;
    func_0x000108941fb0();
    func_0x00010bfe0640();
    func_0x000108b6a6d4(uVar6,uVar7,uVar9,uVar10,uVar1,uVar2,uVar3,uVar4,(int)uVar11,(int)unaff_x19)
    ;
    _objc_release(uVar8);
    _objc_release(uVar5);
    _CVPixelBufferUnlockBaseAddress(uStack_68,0);
    func_0x00010be0a160();
  }
  else {
    _CVPixelBufferRelease();
    func_0x000108941f90();
    func_0x000108941fa4();
    _objc_msgSendSuper2(&stack0xffffffffffffff88);
  }
  func_0x000108941f88();
  return;
}



/* Entry: 108941a60; end: 108941a67;  */

void FUN_108941a60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbbf9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CVPixelBufferRelease_11034a298)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108941a68; end: 108941cb3; -[TCSampleBufferVideoView _enqueueImageBuffer:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108941a68(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long alStack_90 [2];
  long alStack_80 [2];
  long alStack_70 [2];
  long alStack_60 [2];
  long lStack_50;
  long alStack_48 [2];
  long lStack_38;
  
  _objc_retain(param_4);
  lStack_38 = 0;
  uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  uVar1 = uVar5;
  _CMVideoFormatDescriptionCreateForImageBuffer(uVar5,param_3,&lStack_38);
  if (((int)uVar1 == 0) && (lStack_38 != 0)) {
    lStack_50 = 0;
    _CMSampleBufferCreateForImageBuffer
              (uVar5,param_3,1,0,0,lStack_38,param_1 + _DAT_112777a34,&lStack_50);
    if (((int)uVar5 == 0) && (lStack_50 != 0)) {
      lVar2 = lStack_50;
      _CMSampleBufferGetSampleAttachmentsArray(lStack_50,1);
      if (lVar2 == 0) {
        _CFRelease(lStack_50);
        func_0x000108941f90();
        alStack_70[0] = param_1;
        func_0x000108941fa4();
        _objc_msgSendSuper2(alStack_70);
        if (param_4 != 0) {
          func_0x000108941fe8(*(undefined8 *)(param_4 + 0x10));
        }
      }
      else {
        _CFArrayGetValueAtIndex();
        if (lVar2 == 0) {
          func_0x000108941f90();
          alStack_80[0] = param_1;
          func_0x000108941fa4();
          _objc_msgSendSuper2(alStack_80);
          if (param_4 != 0) {
            func_0x000108941fe8(*(undefined8 *)(param_4 + 0x10));
          }
        }
        else {
          _CFDictionarySetValue();
          func_0x000108941f90();
          alStack_90[0] = param_1;
          _objc_msgSendSuper2(alStack_90,PTR_s_onFrameRendered_11253c1d0);
          puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_c0 = 0xc2000000;
          pcStack_b8 = FUN_108941cb4;
          puStack_b0 = &UNK_110a9b738;
          lStack_98 = lStack_50;
          lStack_a8 = param_1;
          func_0x000108942004();
          ppuVar3 = &puStack_c8;
          lStack_a0 = param_4;
          _objc_retainBlock();
          puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
          func_0x00010c077480();
          if ((int)puVar4 == 0) {
            func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,ppuVar3);
          }
          else {
            (*(code *)ppuVar3[2])(ppuVar3);
          }
          func_0x000108941fe0();
          _objc_release(lStack_a0);
        }
      }
    }
    else {
      if (lStack_50 != 0) {
        _CFRelease();
      }
      func_0x000108941f90();
      alStack_60[0] = param_1;
      func_0x000108941fa4();
      _objc_msgSendSuper2(alStack_60);
      if (param_4 != 0) {
        func_0x000108941fe8(*(undefined8 *)(param_4 + 0x10));
      }
    }
  }
  else {
    func_0x000108941f90();
    alStack_48[0] = param_1;
    func_0x000108941fa4();
    _objc_msgSendSuper2(alStack_48);
    if (param_4 != 0) {
      func_0x000108941fe8(*(undefined8 *)(param_4 + 0x10));
    }
  }
  func_0x000108941f88();
  return;
}



/* Entry: 108941cb4; end: 108941d1b;  */

void FUN_108941cb4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be98760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf963c0();
  func_0x00010c1cbd40(uVar1);
  _CFRelease(*(undefined8 *)(param_1 + 0x30));
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108941d1c; end: 108941dab; -[TCSampleBufferVideoView _createPixelBufferPoolIfNeededWithPixelBufferSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108941d1c(double param_1,double param_2,long param_3)

{
  double *pdVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  lVar3 = (long)_DAT_112777a38;
  lVar4 = (long)_DAT_112777a44;
  if (*(long *)(param_3 + lVar3) != 0) {
    pdVar1 = (double *)(param_3 + lVar4);
    dVar5 = pdVar1[1];
    bVar2 = false;
    if ((param_1 == *pdVar1) && (bVar2 = false, !NAN(param_2) && !NAN(dVar5))) {
      bVar2 = param_2 == dVar5;
    }
    if (bVar2) {
      return;
    }
    _CVPixelBufferPoolFlush(*(long *)(param_3 + lVar3),1);
    _CVPixelBufferPoolRelease(*(undefined8 *)(param_3 + lVar3));
    *(undefined8 *)(param_3 + lVar3) = 0;
  }
  pdVar1 = (double *)(param_3 + lVar4);
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  lVar4 = param_3;
  func_0x00010bdf15a0(param_1,param_2);
  *(long *)(param_3 + lVar3) = lVar4;
  return;
}



/* Entry: 108941dac; end: 108941f2b; -[TCSampleBufferVideoView _createPixelBufferPoolWithPixelBufferSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108941dac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = 0;
  uStack_88 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
  uStack_80 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
  puStack_68 = PTR____NSDictionary0__struct_11034ab58;
  ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d00a8;
  uStack_78 = *(undefined8 *)PTR__kCVPixelBufferWidthKey_11034a3d0;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  uStack_70 = *(undefined8 *)PTR__kCVPixelBufferHeightKey_11034a388;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_58 = puVar2;
  func_0x00010c0df720(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108941f9c();
  func_0x000108941f88();
  lVar4 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
  _CVPixelBufferPoolCreate(lVar4,0,puVar2,&lStack_90);
  lVar1 = lStack_90;
  if ((int)lVar4 != 0) {
    lVar1 = 0;
  }
  func_0x000108941fe0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x000108941f88();
  __Unwind_Resume(lVar4);
  _objc_storeStrong(lVar4 + _DAT_112777a40,0);
  _objc_destroyWeak(lVar4 + _DAT_112777a2c);
  lVar4 = lVar4 + _DAT_112777a28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar4,0);
  return lVar4;
}



/* Entry: 108941f2c; end: 108941f77; -[TCSampleBufferVideoView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108941f2c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112777a40,0);
  _objc_destroyWeak(param_1 + _DAT_112777a2c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112777a28,0);
  return;
}



/* Entry: 108941f78; end: 10894200b;  */

void FUN_108941f78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10894200c; end: 108942087; -[TCVideoFrame initWithImageBuffer:timestampUs:] */

undefined1 *
FUN_10894200c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd3e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _CVBufferRetain(param_3);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108942088; end: 1089420e3; -[TCVideoFrame dealloc] */

void FUN_108942088(long param_1)

{
  _CVBufferRelease(*(undefined8 *)(param_1 + 8));
  func_0x000108942520(PTR_PTR_1126fd3e0);
  return;
}



/* Entry: 1089420e4; end: 10894210b; -[TCVideoFrame imageBuffer] */

undefined8 FUN_1089420e4(long param_1)

{
  _CFRetain(*(undefined8 *)(param_1 + 8));
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10894210c; end: 108942113; -[TCVideoFrame timestampUs] */

undefined8 FUN_10894210c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108942114; end: 1089421a7; -[TCVideoFrameProvider initWithRendererController:] */

undefined1 * FUN_108942114(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffd0;
  func_0x000108942508();
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    _objc_retain();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined8 *)(puVar1 + 0x10) = 0;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0x18) = 0xffffffff;
    uVar2 = *(undefined8 *)(puVar1 + 0x60);
    *(undefined8 *)(puVar1 + 0x60) = 0;
    _objc_release(uVar2);
  }
  func_0x000108942518();
  return puVar1;
}



/* Entry: 1089421a8; end: 1089421ff; -[TCVideoFrameProvider dealloc] */

void FUN_1089421a8(void)

{
  func_0x00010c255780();
  func_0x000108942520(PTR_PTR_1126fd3e8);
  return;
}



/* Entry: 108942200; end: 108942287; -[TCVideoFrameProvider startWithSink:] */

bool FUN_108942200(void)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong unaff_x19;
  long unaff_x20;
  
  func_0x000108942508();
  if ((*(int *)(unaff_x20 + 0x18) == -1) ||
     (uVar3 = unaff_x19, func_0x00010c0720c0(), (uVar3 & 1) == 0)) {
    _objc_retain();
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    *(ulong *)(unaff_x20 + 0x10) = unaff_x19;
    _objc_release(uVar4);
    iVar2 = (int)*(undefined8 *)(unaff_x20 + 8);
    func_0x00010c250360();
    *(int *)(unaff_x20 + 0x18) = iVar2;
    bVar1 = iVar2 != -1;
  }
  else {
    bVar1 = true;
  }
  func_0x000108942518();
  return bVar1;
}



/* Entry: 108942288; end: 1089422cb; -[TCVideoFrameProvider stop] */

void FUN_108942288(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  if (*(int *)(param_1 + 0x18) != -1) {
    func_0x00010c2567c0(*(undefined8 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  }
  return;
}



/* Entry: 1089422cc; end: 10894237f; -[TCVideoFrameProvider onFrame:] */

void FUN_1089422cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108942508();
  lVar1 = unaff_x19;
  func_0x00010c2a5040();
  if ((((int)lVar1 != 0) && (lVar1 = unaff_x19, func_0x00010bfb5800(), lVar1 == 9)) &&
     (lVar1 = unaff_x19, func_0x00010c0d5780(), lVar1 != 0)) {
    __ZNSt3__15mutex4lockEv(unaff_x20 + 0x20);
    puVar2 = PTR_PTR_1126dada8;
    _objc_alloc(PTR_PTR_1126dada8);
    lVar1 = unaff_x19;
    func_0x00010c0d5780();
    func_0x00010c11a240();
    func_0x00010c01c580(puVar2,param_2,lVar1,unaff_x19);
    func_0x00010894253c();
    func_0x000108942534();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108942380; end: 108942463; -[TCVideoFrameProvider onNativeFrame:] */

void FUN_108942380(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108942508();
  if ((unaff_x19 != 0) && (lVar1 = unaff_x19, func_0x00010c2a5040(), (int)lVar1 != 0)) {
    lVar1 = unaff_x19;
    func_0x00010c06aea0();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010bf21c40(), lVar2 != 0)) {
      __ZNSt3__15mutex4lockEv(unaff_x20 + 0x20);
      puVar3 = PTR_PTR_1126dada8;
      _objc_alloc(PTR_PTR_1126dada8);
      lVar2 = lVar1;
      func_0x00010bf21c40(lVar1);
      func_0x00010c270c60();
      func_0x00010c01c580(puVar3,param_2,lVar2,unaff_x19);
      func_0x00010894253c();
      func_0x000108942534();
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108942464; end: 10894249f; -[TCVideoFrameProvider currentFrame] */

void FUN_108942464(long param_1)

{
  undefined8 uVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1089424a0; end: 1089424e3; -[TCVideoFrameProvider .cxx_destruct] */

void FUN_1089424a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1089424e4; end: 10894255f; -[TCVideoFrameProvider .cxx_construct] */

void FUN_1089424e4(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



/* Entry: 108942560; end: 108942667; -[TCVideoView initWithFrame:typeName:videoViewListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108942560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126fd3f0;
  uStack_70 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112777a64;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112777a68),param_8);
    *(undefined4 *)((long)puVar1 + (long)_DAT_112777a6c) = 0;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 108942668; end: 10894266f; -[TCVideoView startWithSink:] */

undefined8 FUN_108942668(void)

{
  return 0;
}



/* Entry: 108942670; end: 108942673; -[TCVideoView stop] */

void FUN_108942670(void)

{
  return;
}



/* Entry: 108942674; end: 108942677; -[TCVideoView setSaturationBoost:] */

void FUN_108942674(void)

{
  return;
}


