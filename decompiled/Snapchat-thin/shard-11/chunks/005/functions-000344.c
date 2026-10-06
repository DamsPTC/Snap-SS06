/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10865b2ec; end: 10865b303;  */

void FUN_10865b2ec(long *param_1,long param_2)

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



/* Entry: 10865b304; end: 10865b343;  */

long * FUN_10865b304(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10865a934(lVar1 + 0x10);
    }
    func_0x00010865d540();
  }
  return param_1;
}



/* Entry: 10865b344; end: 10865b3c3;  */

undefined8 * FUN_10865b344(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 auStack_50 [2];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  func_0x00010865d1fc();
  func_0x00010865d3fc();
  uStack_38 = extraout_x8;
  FUN_10865b3c4(auStack_50,1);
  *puStack_40 = unaff_x21;
  puStack_40[1] = unaff_x20;
  func_0x000107c27994(puStack_40 + 2);
  puVar2 = puStack_40;
  puStack_40 = (undefined8 *)0x0;
  FUN_10865b418();
  func_0x00010865d15c(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010865d1f0();
  FUN_10865b418();
  func_0x00010865d020();
  puVar1[1] = unaff_x19;
  puVar2 = puVar1;
  FUN_10865b3ec();
  puVar1[2] = puVar2;
  return puVar1;
}



/* Entry: 10865b3c4; end: 10865b3eb;  */

long FUN_10865b3c4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10865b3ec();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10865b3ec; end: 10865b417;  */

void FUN_10865b3ec(long param_1,ulong param_2)

{
  if (param_2 < 0x666666666666667) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
    return;
  }
  func_0x000104bd35f4();
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10865b418; end: 10865b427;  */

void FUN_10865b418(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10865b428; end: 10865b463;  */

void FUN_10865b428(void)

{
  long lVar1;
  
  lVar1 = 0xc0;
  __Znwm(0xc0);
  func_0x000107c31dc0();
  FUN_10865b4d4();
  func_0x000107c31da0(lVar1 + 0xa0);
  func_0x000107c31d74();
  return;
}



/* Entry: 10865b464; end: 10865b4a3;  */

void FUN_10865b464(void)

{
  undefined8 *puVar1;
  int extraout_w8;
  undefined8 *extraout_x9;
  undefined8 *unaff_x19;
  long unaff_x22;
  
  func_0x000107c31da4();
  puVar1 = extraout_x9;
  if (extraout_w8 != 0) {
    puVar1 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar1 = 0x10;
  puVar1[1] = unaff_x22;
  if (unaff_x22 != 0) {
    func_0x000107c31dd4();
  }
  *unaff_x19 = puVar1 + 2;
  return;
}



/* Entry: 10865b4a4; end: 10865b4d3;  */

/* WARNING: Removing unreachable block (ram,0x000100579ccc) */
/* WARNING: Removing unreachable block (ram,0x000100579bec) */

void FUN_10865b4a4(void)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  long *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000107c31d84();
  lVar5 = *unaff_x19;
  plVar1 = (long *)(lVar5 + 0x10);
  do {
    lVar9 = *plVar1;
    if (lVar9 == 0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        pbVar10 = *(byte **)(lVar5 + 0x90);
        bVar2 = pbVar10[1];
        uVar8 = (ulong)bVar2;
        pbVar7 = pbVar10;
        if (bVar2 == *pbVar10) {
          uVar6 = (uint)bVar2 << 1;
          if (0x7f < uVar6) {
            uVar6 = 0x80;
          }
          pbVar7 = (byte *)(ulong)(uVar6 * 0x18 + 0x10);
          func_0x000107c610a0();
          uVar8 = 0;
          *pbVar7 = (byte)uVar6;
          pbVar7[1] = 0;
          pbVar7[8] = 0;
          pbVar7[9] = 0;
          pbVar7[10] = 0;
          pbVar7[0xb] = 0;
          pbVar7[0xc] = 0;
          pbVar7[0xd] = 0;
          pbVar7[0xe] = 0;
          pbVar7[0xf] = 0;
          *(byte **)(pbVar10 + 8) = pbVar7;
          *(byte **)(lVar5 + 0x90) = pbVar7;
        }
        *(code **)(pbVar7 + uVar8 * 0x18 + 0x10) = FUN_10865b608;
        *(undefined8 *)(pbVar7 + uVar8 * 0x18 + 0x18) = unaff_x20;
        pbVar7 = pbVar7 + uVar8 * 0x18 + 0x20;
        pbVar7[0] = 0;
        pbVar7[1] = 0;
        pbVar7[2] = 0;
        pbVar7[3] = 0;
        pbVar7[4] = 0;
        pbVar7[5] = 0;
        pbVar7[6] = 0;
        pbVar7[7] = 0;
        *(char *)(*(long *)(lVar5 + 0x90) + 1) = *(char *)(*(long *)(lVar5 + 0x90) + 1) + '\x01';
        *(undefined8 *)(lVar5 + 0x10) = 0;
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar9 >> 1 & 1) != 0) {
      FUN_10865b608();
      return;
    }
  } while( true );
}



/* Entry: 10865b4d4; end: 10865b4fb;  */

void FUN_10865b4d4(long param_1)

{
  func_0x000107c287cc();
  func_0x000107c31da8(&UNK_110a60ba8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}



/* Entry: 10865b4fc; end: 10865b4ff;  */

undefined8 * FUN_10865b4fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a60bb8;
  func_0x00010865b544(param_1 + 0x14);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10865b500; end: 10865b513;  */

void FUN_10865b500(void)

{
  FUN_10865b514();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10865b514; end: 10865b56b;  */

undefined8 * FUN_10865b514(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a60bb8;
  func_0x00010865b544(param_1 + 0x14);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10865b56c; end: 10865b583;  */

void FUN_10865b56c(long *param_1,long param_2)

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
      lVar3 = lVar2 * -0x10;
      lVar2 = lVar1 + lVar2 * 0x10;
      do {
        lVar2 = lVar2 + -0x10;
        func_0x000107c27f9c(lVar2);
        lVar3 = lVar3 + 0x10;
      } while (lVar3 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 10865b584; end: 10865b5f3;  */

void FUN_10865b584(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + -8);
    if (lVar1 != 0) {
      lVar2 = lVar1 * -0x10;
      lVar1 = param_2 + lVar1 * 0x10;
      do {
        lVar1 = lVar1 + -0x10;
        func_0x000107c27f9c(lVar1);
        lVar2 = lVar2 + 0x10;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(param_2 + -0x10);
    return;
  }
  return;
}



/* Entry: 10865b5f4; end: 10865b607;  */

void FUN_10865b5f4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + -8);
    if (lVar2 != 0) {
      lVar3 = lVar2 * -0x10;
      lVar2 = lVar1 + lVar2 * 0x10;
      do {
        lVar2 = lVar2 + -0x10;
        func_0x000107c27f9c(lVar2);
        lVar3 = lVar3 + 0x10;
      } while (lVar3 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 10865b608; end: 10865b627;  */

void FUN_10865b608(void)

{
  func_0x000107c31d94();
  func_0x00010bcd2db4();
  func_0x000107c31d74();
  return;
}



/* Entry: 10865b628; end: 10865b643;  */

void FUN_10865b628(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x000107c31d60();
  plVar5 = (long *)*unaff_x19;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



/* Entry: 10865b644; end: 10865b6c3;  */

undefined8 * FUN_10865b644(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 auStack_50 [2];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  func_0x00010865d1fc();
  func_0x00010865d3fc();
  uStack_38 = extraout_x8;
  FUN_10865b6c4(auStack_50,1);
  *puStack_40 = unaff_x21;
  puStack_40[1] = unaff_x20;
  FUN_10865a140(puStack_40 + 2);
  puVar2 = puStack_40;
  puStack_40 = (undefined8 *)0x0;
  FUN_10865b718();
  func_0x00010865d15c(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010865d1f0();
  FUN_10865b718();
  func_0x00010865d020();
  puVar1[1] = unaff_x19;
  puVar2 = puVar1;
  FUN_10865b6ec();
  puVar1[2] = puVar2;
  return puVar1;
}



/* Entry: 10865b6c4; end: 10865b6eb;  */

long FUN_10865b6c4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10865b6ec();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10865b6ec; end: 10865b717;  */

void FUN_10865b6ec(long param_1,ulong param_2)

{
  if (param_2 < 0x333333333333334) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x50);
    return;
  }
  func_0x000104bd35f4();
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10865b718; end: 10865b72b;  */

void FUN_10865b718(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10865b72c; end: 10865b73f;  */

void FUN_10865b72c(void)

{
  FUN_10865b740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10865b740; end: 10865b77b;  */

undefined8 * FUN_10865b740(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a60bf8;
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    func_0x00010864c7e8(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10865b77c; end: 10865b79f;  */

void FUN_10865b77c(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010864c7e8();
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



/* Entry: 10865b7a0; end: 10865b7a3;  */

void FUN_10865b7a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a60c38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10865b7a4; end: 10865b7b7;  */

void FUN_10865b7a4(void)

{
  FUN_10865ba0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10865b7b8; end: 10865b7c7;  */

void FUN_10865b7b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010865b7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10865b7c8; end: 10865b7ff;  */

void FUN_10865b7c8(void)

{
  func_0x00010865d588();
  return;
}



/* Entry: 10865b800; end: 10865b83f;  */

void FUN_10865b800(long param_1)

{
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  
  auStack_40[0] = 0;
  uStack_28 = 0;
  FUN_10865b944(param_1 + 0x10,auStack_40);
  FUN_10865a894(auStack_40);
  return;
}



/* Entry: 10865b840; end: 10865b887;  */

void FUN_10865b840(void)

{
  long unaff_x19;
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  
  func_0x00010865d1f0();
  FUN_10865a7e8();
  uStack_28 = 1;
  FUN_10865b944(unaff_x19 + 0x10,auStack_40);
  FUN_10865a894(auStack_40);
  return;
}



/* Entry: 10865b888; end: 10865b8d3;  */

void FUN_10865b888(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xc0;
  __Znwm();
  func_0x000107c31dc0();
  func_0x000107c31510();
  *puVar1 = &PTR_FUN_110a60d00;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x17) = 0;
  func_0x00010865d374();
  func_0x000107c31d74();
  return;
}



/* Entry: 10865b8d4; end: 10865b8d7;  */

undefined8 * FUN_10865b8d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a60d00;
  if (*(char *)(param_1 + 0x17) == '\x01') {
    FUN_10865a894(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10865b8d8; end: 10865b8eb;  */

void FUN_10865b8d8(void)

{
  FUN_10865b8ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10865b8ec; end: 10865b943;  */

undefined8 * FUN_10865b8ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a60d00;
  if (*(char *)(param_1 + 0x17) == '\x01') {
    FUN_10865a894(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10865b944; end: 10865b953;  */

/* WARNING: Removing unreachable block (ram,0x00010865b988) */

void FUN_10865b944(undefined8 *param_1,long param_2)

{
  int iVar1;
  long unaff_x19;
  
  func_0x000107c31d9c(*param_1,param_1);
  do {
    iVar1 = (int)unaff_x19 + 0x10;
    func_0x00010865cf30();
  } while (iVar1 == 0);
  FUN_10865b9e8(unaff_x19 + 0x98);
  *(undefined1 *)(unaff_x19 + 0x98) = 0;
  *(undefined1 *)(unaff_x19 + 0xb0) = 0;
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10865a3f4(unaff_x19 + 0x98,param_2);
  }
  *(undefined1 *)(unaff_x19 + 0xb8) = 1;
  *(undefined8 *)(unaff_x19 + 0x10) = 2;
  func_0x00010865d538();
  return;
}



/* Entry: 10865b954; end: 10865b9e7;  */

/* WARNING: Removing unreachable block (ram,0x00010865b988) */

void FUN_10865b954(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long unaff_x19;
  
  func_0x000107c31d9c();
  do {
    iVar1 = (int)unaff_x19 + 0x10;
    func_0x00010865cf30();
  } while (iVar1 == 0);
  FUN_10865b9e8(unaff_x19 + 0x98);
  *(undefined1 *)(unaff_x19 + 0x98) = 0;
  *(undefined1 *)(unaff_x19 + 0xb0) = 0;
  if (*(char *)(param_3 + 0x18) == '\x01') {
    FUN_10865a3f4(unaff_x19 + 0x98,param_3);
  }
  *(undefined1 *)(unaff_x19 + 0xb8) = 1;
  *(undefined8 *)(unaff_x19 + 0x10) = 2;
  func_0x00010865d538();
  return;
}



/* Entry: 10865b9e8; end: 10865ba0b;  */

void FUN_10865b9e8(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_10865a894();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10865ba0c; end: 10865ba1b;  */

void FUN_10865ba0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a60c38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10865ba1c; end: 10865ba6f;  */

void FUN_10865ba1c(long param_1)

{
  func_0x000107c31dc4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10865ba70; end: 10865ba73;  */

void FUN_10865ba70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10865ba74; end: 10865babb;  */

void FUN_10865ba74(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c28894();
  func_0x000100579ac8(param_1,param_2 + 1,param_4);
  func_0x000100579ac8(param_1,param_2 + 2,param_5);
  return;
}



/* Entry: 10865babc; end: 10865baef;  */

void FUN_10865babc(void)

{
  __ZNSt13runtime_errorC2EPKc();
  func_0x000107c31da8(&UNK_110a60d30);
  return;
}



/* Entry: 10865baf0; end: 10865bc97;  */

void FUN_10865baf0(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  undefined8 *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
LAB_10865bb9c:
    FUN_1086597b4(param_1 + 0x30);
    func_0x00010865d3b4();
    func_0x00010865d038();
    func_0x00010865d008();
    func_0x00010865cfe4();
    func_0x00010865d000();
    func_0x00010865d010();
    return;
  }
  plVar4 = (long *)(param_1 + 0x30);
  func_0x000107c28870();
  lVar6 = *plVar4;
  func_0x00010865d038();
  func_0x00010865d268();
  if (lVar6 == 2) {
    func_0x00010865d128();
    func_0x00010865cfec();
    func_0x00010865d5b4();
    func_0x00010865cfb0();
    func_0x00010865d554();
  }
  else {
    uVar3 = lVar6 == 1;
    if (!(bool)uVar3) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x20);
      do {
        func_0x000107c31d08();
      } while (extraout_w10 != 0);
      func_0x000107c31d54(*(undefined8 *)(param_1 + 0x30));
      if ((extraout_w8 >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x48) = 1;
        func_0x00010865cee8();
        if (*plVar4 == 0) {
          func_0x000107c3a5c0();
        }
        func_0x00010865d368();
        plVar4 = extraout_x8;
        do {
          if (*plVar4 == 0) {
            func_0x000107c31d1c();
            plVar4 = extraout_x8_01;
            uVar1 = extraout_w10_01;
            uVar5 = extraout_w11_00;
          }
          else {
            func_0x00010865d0b4();
            plVar4 = extraout_x8_00;
            uVar1 = extraout_w10_00;
            uVar5 = extraout_w11;
          }
          if ((uVar5 & 1) != 0) {
            func_0x00010865cf74();
            if ((bool)uVar3) {
              func_0x00010865cf40();
              func_0x00010865ced8();
              func_0x00010865ce84();
            }
            func_0x00010865ce5c();
            *extraout_x8_02 = 0;
            return;
          }
        } while ((uVar1 >> 1 & 1) == 0);
      }
      goto LAB_10865bb9c;
    }
    func_0x00010865d128();
    func_0x00010865d4a4();
    func_0x00010865d634();
    func_0x00010865d554();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10865bc24);
  (*pcVar2)();
}



/* Entry: 10865bc98; end: 10865bcdb;  */

void FUN_10865bc98(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    lVar1 = param_1 + 0x38;
    func_0x000107c27f9c(param_1 + 0x30);
  }
  func_0x000107c27f9c(lVar1);
  func_0x00010865d008();
  func_0x00010865cfe4();
  func_0x00010865d000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10865bcdc; end: 10865bdb7;  */

void FUN_10865bcdc(long param_1)

{
  FUN_1086597b4(param_1 + 0x28);
  func_0x00010865d3b4();
  func_0x00010865d008();
  func_0x00010865d038();
  func_0x00010865d268();
  func_0x00010865cfe4();
  func_0x00010865d000();
  func_0x00010865d010();
  return;
}



/* Entry: 10865bdb8; end: 10865bdeb;  */

void FUN_10865bdb8(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x28);
  func_0x00010865d038();
  func_0x00010865d268();
  func_0x00010865cfe4();
  func_0x00010865d000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10865bdec; end: 10865bf57;  */

void FUN_10865bdec(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  long *plVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  undefined8 *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    plVar3 = (long *)(param_1 + 0x28);
    func_0x000107c28870();
    lVar5 = *plVar3;
    func_0x00010865d008();
    func_0x00010865d038();
    if (lVar5 == 0) {
      func_0x00010865d128();
      func_0x00010865cfec();
      func_0x00010865d5b4();
      func_0x00010865cfb0();
      func_0x00010865d554();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10865bef4);
      (*pcVar2)();
    }
    func_0x000107c31de4(*(undefined8 *)(param_1 + 0x20));
    do {
      func_0x000107c31d08();
    } while (extraout_w10 != 0);
    func_0x000107c31d54(*(undefined8 *)(param_1 + 0x28));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x40) = 1;
      func_0x00010865cee8();
      if (*plVar3 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010865d368();
      plVar3 = extraout_x8;
      do {
        if (*plVar3 == 0) {
          func_0x000107c31d1c();
          plVar3 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x00010865d0b4();
          plVar3 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x00010865cf74();
          if ((bool)in_ZR) {
            func_0x00010865cf40();
            func_0x00010865ced8();
            func_0x00010865ce84();
          }
          func_0x00010865ce5c();
          *extraout_x8_02 = 0;
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0x28);
  func_0x00010865d008();
  func_0x000107c287c8(param_1 + 0x10);
  func_0x00010865cfe4();
  func_0x00010865d000();
  func_0x00010865d010();
  return;
}



/* Entry: 10865bf58; end: 10865bf97;  */

void FUN_10865bf58(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    lVar1 = param_1 + 0x30;
    func_0x000107c27f9c(param_1 + 0x28);
  }
  func_0x000107c27f9c(lVar1);
  func_0x00010865cfe4();
  func_0x00010865d000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10865bf98; end: 10865c5e3;  */

void FUN_10865bf98(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  undefined ***pppuVar10;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  ulong uVar11;
  long extraout_x8_05;
  long extraout_x8_06;
  long *extraout_x8_07;
  long *extraout_x8_08;
  long *extraout_x8_09;
  undefined8 *extraout_x8_10;
  long extraout_x8_11;
  code *extraout_x9;
  code *extraout_x9_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  int extraout_w10_06;
  uint extraout_w10_07;
  uint extraout_w10_08;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar12;
  uint extraout_w11_01;
  uint extraout_w11_02;
  uint extraout_w11_03;
  uint extraout_w11_04;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  plVar1 = param_1 + 0x31;
  if (*(char *)((long)param_1 + 0x204) == '\0') goto LAB_10865c21c;
  uVar6 = *(char *)((long)param_1 + 0x204) == '\x01';
  plVar9 = param_1;
  if (!(bool)uVar6) goto LAB_10865c05c;
  do {
    func_0x00010865d358();
    func_0x00010865d000();
    func_0x00010865d030();
    func_0x00010865d620();
    (*extraout_x9)(param_1 + 0x3c);
    func_0x00010865d2fc();
    func_0x00010865d140();
    do {
      func_0x000107c31d08();
    } while (extraout_w10 != 0);
    func_0x000107c31d54(param_1[4]);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)((long)param_1 + 0x204) = 2;
      lVar13 = param_1[4];
      func_0x000107c31d2c();
      if (*plVar9 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000107c31d98();
      plVar8 = extraout_x8;
      do {
        if (*plVar8 == 0) {
          func_0x000107c31d1c();
          plVar8 = extraout_x8_01;
          uVar5 = extraout_w10_01;
          uVar12 = extraout_w11_00;
        }
        else {
          func_0x00010865d0b4();
          plVar8 = extraout_x8_00;
          uVar5 = extraout_w10_00;
          uVar12 = extraout_w11;
        }
        if ((uVar12 & 1) != 0) goto LAB_10865c3d8;
      } while ((uVar5 >> 1 & 1) == 0);
    }
LAB_10865c05c:
    func_0x00010865d358();
    func_0x00010865d000();
    func_0x00010865d030();
    func_0x00010865d5c0();
    param_1[0x3f] = param_1[0x3f] + 1;
    func_0x00010865d460();
    plVar15 = plVar9 + 1;
    plVar9[2] = 0;
    *plVar15 = 0;
    *plVar9 = (long)&PTR_FUN_110a60c38;
    plVar14 = plVar9 + 3;
    *plVar14 = (long)&PTR_FUN_110a5fea0;
    plVar9[4] = 0;
    param_1[4] = 0;
    func_0x00010865d000();
    func_0x00010865d348();
    FUN_10865b888(param_1 + 0x18);
    func_0x00010865d0e8();
    func_0x00010865d120();
    func_0x000107c27fec(param_1 + 0x18);
    func_0x00010865d4bc();
    func_0x00010865d4b0();
    plVar8 = param_1 + 5;
    func_0x000107c27f98(plVar8);
    func_0x00010865d000();
    *plVar14 = (long)&PTR_FUN_110a60c88;
    param_1[0x38] = (long)plVar14;
    param_1[0x39] = (long)plVar9;
    param_1[0x1b] = 0;
    param_1[0x1a] = 0;
    func_0x00010865d188(&PTR_FUN_110a609a8);
    func_0x00010865d4dc();
    func_0x000107c2884c(param_1 + 0x27,plVar8);
    func_0x00010865d1b0(param_1[0x3d]);
    func_0x00010865d330();
    func_0x00010865d108();
    func_0x00010865d314();
    FUN_108647df0(param_1 + 0x35);
    lVar2 = ((long *)param_1[0x3e])[1];
    for (lVar13 = *(long *)param_1[0x3e]; uVar6 = lVar13 == lVar2, !(bool)uVar6;
        lVar13 = lVar13 + 0x18) {
      func_0x00010865d474();
      func_0x00010865d4d0();
      func_0x00010865d340();
    }
    plVar8 = *(long **)(param_1[0x3d] + 0x70);
    param_1[0x18] = (long)plVar14;
    param_1[0x19] = (long)plVar9;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = *plVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    (**(code **)(*plVar8 + 0x40))(plVar8,param_1 + 0x35,param_1 + 0x18);
    func_0x00010865d338();
    lVar13 = plVar9[4];
    param_1[0x3b] = lVar13;
    if (lVar13 != 0) {
      do {
        func_0x000107c31d08();
      } while (extraout_w10_02 != 0);
    }
    plVar9 = (long *)param_1[0x3d];
    func_0x00010865d468();
    param_1[0x18] = param_1[0x3a];
    do {
      func_0x000107c31d08();
    } while (extraout_w10_03 != 0);
    func_0x000107c31d54(param_1[0x18]);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)((long)param_1 + 0x204) = 0;
      lVar13 = param_1[0x18];
      func_0x000107c31d2c();
      if (*plVar9 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000107c31d98();
      plVar8 = extraout_x8_02;
      do {
        if (*plVar8 == 0) {
          func_0x000107c31d1c();
          plVar8 = extraout_x8_04;
          uVar5 = extraout_w10_05;
          uVar12 = extraout_w11_02;
        }
        else {
          func_0x00010865d0b4();
          plVar8 = extraout_x8_03;
          uVar5 = extraout_w10_04;
          uVar12 = extraout_w11_01;
        }
        if ((uVar12 & 1) != 0) goto LAB_10865c3d8;
      } while ((uVar5 >> 1 & 1) == 0);
    }
LAB_10865c21c:
    plVar9 = param_1 + 0x18;
    FUN_1086597b4();
    cVar3 = (char)param_1[0x34];
    uVar6 = cVar3 == (char)plVar9[3];
    if ((bool)uVar6) {
      uVar6 = plVar1 == plVar9;
      if ((!(bool)uVar6) && (cVar3 != '\0')) {
        uVar11 = plVar9[1] - *plVar9;
        lVar13 = param_1[0x31];
        uVar6 = uVar11 == param_1[0x33] - lVar13;
        if ((ulong)(param_1[0x33] - lVar13) < uVar11) {
          if (lVar13 != 0) {
            FUN_10864c7a8(plVar1);
            __ZdlPv(*plVar1);
            *plVar1 = 0;
            param_1[0x32] = 0;
            param_1[0x33] = 0;
          }
          plVar9 = plVar1;
          FUN_10864cbcc(plVar1,(long)uVar11 >> 6);
          FUN_10865a4ac(plVar1,plVar9);
        }
        else {
          uVar6 = uVar11 == param_1[0x32] - lVar13;
          if (uVar11 <= (ulong)(param_1[0x32] - lVar13)) {
            func_0x00010865d4fc();
            FUN_10864c7b0(plVar1,plVar9);
            goto LAB_10865c2f4;
          }
          func_0x00010865d4f0();
        }
        func_0x00010865d5c8(plVar1);
      }
    }
    else if (cVar3 == '\0') {
      FUN_10865a3f4(plVar1);
    }
    else {
      func_0x00010864c738(plVar1);
      *(undefined1 *)(param_1 + 0x34) = 0;
    }
LAB_10865c2f4:
    func_0x00010865d030();
    func_0x00010865d120();
    func_0x00010865d260();
    func_0x00010865d5f4();
    plVar14 = *(long **)(extraout_x8_05 + 200);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    func_0x00010865d188(&PTR_FUN_110a609a8);
    plVar8 = param_1 + 0x18;
    FUN_108659854(plVar8);
    func_0x00010865d130();
    FUN_108659af8();
    plVar9 = param_1 + 0x1d;
    func_0x000107c2884c(plVar9,plVar8);
    func_0x00010865d5d4(*(undefined8 *)(*plVar14 + 0x50));
    func_0x00010865d2d4();
    func_0x00010865d108();
    func_0x00010865d270();
    func_0x00010865d0c8();
    func_0x00010865d2ac();
    if ((*(byte *)(param_1 + 0x34) & 1) != 0) {
LAB_10865c41c:
      func_0x00010865d5f4();
      plVar9 = *(long **)(extraout_x8_11 + 200);
      uStack_78 = 0;
      uStack_70 = 0;
      ppuStack_88 = &PTR_FUN_110a609a8;
      uStack_80 = 0;
      uStack_68 = 0x235;
      pppuVar10 = &ppuStack_88;
      FUN_108659854(pppuVar10);
      func_0x00010865d130();
      FUN_108659af8();
      func_0x000107c2884c(param_1 + 0x22,pppuVar10);
      func_0x00010865d59c(*(undefined8 *)(*plVar9 + 0x50));
      func_0x00010865d3d4();
      func_0x00010865d3dc();
      func_0x00010865d690();
      break;
    }
    func_0x00010865d434();
    uVar11 = extraout_x8_06 + 1;
    (*extraout_x9_00)();
    if ((uVar11 & 1) == 0) goto LAB_10865c41c;
    func_0x00010865d69c();
    func_0x00010865d480();
    func_0x00010865d140();
    do {
      func_0x000107c31d08();
    } while (extraout_w10_06 != 0);
    func_0x000107c31d54(param_1[4]);
    if ((extraout_w8_01 >> 1 & 1) == 0) {
      *(undefined1 *)((long)param_1 + 0x204) = 1;
      lVar13 = param_1[4];
      func_0x000107c31d2c();
      if (*plVar9 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000107c31d98();
      plVar8 = extraout_x8_07;
      do {
        if (*plVar8 == 0) {
          func_0x000107c31d1c();
          plVar8 = extraout_x8_09;
          uVar5 = extraout_w10_08;
          uVar12 = extraout_w11_04;
        }
        else {
          func_0x00010865d0b4();
          plVar8 = extraout_x8_08;
          uVar5 = extraout_w10_07;
          uVar12 = extraout_w11_03;
        }
        if ((uVar12 & 1) != 0) {
LAB_10865c3d8:
          func_0x000107c31d14();
          if ((bool)uVar6) {
            func_0x00010865cf40();
            func_0x00010865cf20();
            func_0x00010865cea4();
            *(long **)(lVar13 + 0x90) = plVar9;
          }
          func_0x00010865cef8();
          *extraout_x8_10 = 0;
          return;
        }
      } while ((uVar5 >> 1 & 1) == 0);
    }
  } while( true );
  while (((uint)ppuStack_88 >> 1 & 1) == 0) {
    ppuStack_88 = (undefined **)0x0;
    iVar7 = (int)plVar14 + 0x10;
    func_0x00010865cf30();
    if (iVar7 != 0) {
      func_0x00010865d580();
      func_0x00010865d670();
      if ((bool)uVar6) {
        lVar13 = *plVar1;
        plVar14[0x14] = param_1[0x32];
        plVar14[0x13] = lVar13;
        plVar14[0x15] = param_1[0x33];
        *plVar1 = 0;
        param_1[0x32] = 0;
        param_1[0x33] = 0;
        *(undefined1 *)(plVar14 + 0x16) = 1;
      }
      *(undefined1 *)(plVar14 + 0x17) = 1;
      func_0x00010865cf50();
      break;
    }
  }
  func_0x00010865d094();
  FUN_10865a894(plVar1);
  func_0x00010865d278();
  func_0x00010865cfe4();
  func_0x00010865d010();
  return;
}



/* Entry: 10865c5e4; end: 10865c65b;  */

void FUN_10865c5e4(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x204) == '\x02') {
    func_0x00010865d000();
    func_0x00010865d030();
    lVar1 = param_1 + 0x1e0;
  }
  else {
    if (*(char *)(param_1 + 0x204) != '\x01') {
      func_0x00010865d030();
      func_0x00010865d120();
      func_0x00010865d260();
      func_0x00010865d270();
      func_0x00010865d0c8();
      func_0x00010865d2ac();
      goto LAB_10865c640;
    }
    func_0x00010865d000();
    lVar1 = param_1 + 0xc0;
  }
  func_0x000107c27f9c(lVar1);
LAB_10865c640:
  FUN_10865a894(param_1 + 0x188);
  func_0x00010865d278();
  func_0x00010865cfe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10865c65c; end: 10865c84b;  */

void FUN_10865c65c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 auStack_80 [8];
  
  puVar3 = auStack_80;
  plVar5 = (long *)(param_1 + 0xf0);
  FUN_1086597b4();
  func_0x00010865d360();
  if ((*(byte *)(plVar5 + 3) & 1) == 0) {
    FUN_108847238(param_1 + 0xd8,*(undefined8 *)(param_1 + 0x138));
    func_0x00010865d198();
    func_0x00010865d39c();
    func_0x00010865d070();
    func_0x00010865d110();
    FUN_108648f24(param_1 + 0x28);
    FUN_108648f24(param_1 + 0x98);
    param_1 = param_1 + 0xd8;
  }
  else {
    FUN_108847238(param_1 + 0xf0,*(undefined8 *)(param_1 + 0x138));
    lVar2 = plVar5[1];
    for (lVar6 = *plVar5; lVar4 = lVar2, lVar6 != lVar2; lVar6 = lVar6 + 0x40) {
      uVar1 = 0;
      FUN_10865a140(auStack_80,lVar6);
      func_0x00010865d524();
      func_0x00010865d110();
      lVar4 = lVar6;
      if ((uVar1 & 1) != 0) break;
    }
    if (lVar4 == plVar5[1]) {
      plVar5 = *(long **)(param_1 + 0x120);
      if (plVar5 != (long *)0x0) {
        func_0x00010865d20c();
        FUN_108659854(auStack_80);
        func_0x000107c2884c(param_1 + 0x48,puVar3);
        func_0x00010865d498(*(undefined8 *)(*plVar5 + 0x50));
        func_0x00010865d30c();
        func_0x00010865d384();
      }
      func_0x00010865d48c();
      func_0x00010865d170();
      func_0x00010865d38c();
      func_0x00010865d070();
      func_0x00010865d110();
      FUN_108648f24(param_1 + 0x78);
      FUN_108648f24(param_1 + 0xb8);
      func_0x000107c27914(param_1 + 0x108);
    }
    else {
      func_0x00010865d690();
      do {
        auStack_80[0] = 0;
        lVar2 = lVar6 + 0x10;
        func_0x00010865cf68(lVar2,auStack_80);
        if ((int)lVar2 != 0) {
          FUN_10865b77c(lVar6 + 0x98);
          FUN_10865a140(lVar6 + 0x98,lVar4);
          *(undefined1 *)(lVar6 + 0xd8) = 1;
          func_0x00010865cf50();
          break;
        }
      } while (((uint)auStack_80[0] >> 1 & 1) == 0);
      func_0x00010865d094();
    }
    param_1 = param_1 + 0xf0;
  }
  func_0x000107c27914(param_1);
  func_0x00010865cfe4();
  func_0x00010865d2f4();
  func_0x00010865d2ec();
  func_0x00010865d010();
  return;
}



/* Entry: 10865c84c; end: 10865c87b;  */

void FUN_10865c84c(long param_1)

{
  func_0x000107c27f9c(param_1 + 0xf0);
  func_0x00010865cfe4();
  func_0x00010865d2f4();
  func_0x00010865d2ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10865c87c; end: 10865cba3;  */

void FUN_10865c87c(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  code *pcVar5;
  undefined1 uVar6;
  long *plVar7;
  uint extraout_w8;
  ulong extraout_x8;
  ulong uVar8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  uint extraout_w9;
  ulong extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  long lVar9;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x12;
  long lVar10;
  long extraout_x14;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  
  plVar1 = (long *)(param_1 + 0x20);
  plVar2 = (long *)(param_1 + 0x68);
  if ((*(byte *)(param_1 + 200) & 1) != 0) goto LAB_10865caa4;
  func_0x000107c28834(plVar1);
  func_0x00010865d3cc();
  func_0x00010865d118();
  plVar14 = (long *)(param_1 + 0x70);
  do {
    plVar14 = (long *)*plVar14;
    uVar6 = plVar14 == plVar2;
    if ((bool)uVar6) {
      plVar7 = plVar2;
      FUN_10865a014();
      func_0x00010865d0c0();
      plVar14 = (long *)(param_1 + 0x58);
      *(long *)(param_1 + 0x20) = param_1 + 0x20;
      *(long **)(param_1 + 0x28) = plVar1;
      *(undefined8 *)(param_1 + 0x30) = 0;
      do {
        lVar9 = *plVar14;
        *(long *)(param_1 + 0xb0) = lVar9;
        if (lVar9 == param_1 + 0x50) {
          FUN_108659714(param_1 + 0x10,plVar1);
          FUN_10865a078(plVar1);
          FUN_10865a0dc(param_1 + 0x50);
          func_0x00010865d4c8();
          func_0x00010865cfe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(param_1);
          return;
        }
        *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(lVar9 + 0x10);
        do {
          func_0x000107c31d08();
        } while (extraout_w10 != 0);
        func_0x000107c31d54(*(undefined8 *)(param_1 + 0x90));
        if ((extraout_w8 >> 1 & 1) == 0) {
          *(undefined1 *)(param_1 + 200) = 1;
          lVar9 = *(long *)(param_1 + 0x90);
          func_0x00010865cee8();
          lVar10 = *plVar7;
          if (lVar10 == 0) {
            func_0x000107c3a5c0();
            lVar10 = *plVar7;
          }
          plVar14 = (long *)(lVar9 + 0x10);
          do {
            if (*plVar14 == 0) {
              func_0x000107c31d1c();
              plVar14 = extraout_x8_01;
              uVar3 = extraout_w10_01;
              uVar8 = extraout_x11_00;
            }
            else {
              func_0x00010865d0b4();
              plVar14 = extraout_x8_00;
              uVar3 = extraout_w10_00;
              uVar8 = extraout_x11;
            }
            if ((uVar8 & 1) != 0) {
              if ((*(char **)(lVar9 + 0x90))[1] == **(char **)(lVar9 + 0x90)) {
                func_0x00010865cf40();
                func_0x00010865cf20();
                func_0x00010865cea4();
                *(long **)(lVar9 + 0x90) = plVar7;
              }
              func_0x00010865cf88();
              *(long *)(extraout_x8_03 + 0x20) = lVar10;
              *(char *)(*(long *)(lVar9 + 0x90) + 1) =
                   *(char *)(*(long *)(lVar9 + 0x90) + 1) + '\x01';
              *(undefined8 *)(lVar9 + 0x10) = 0;
              return;
            }
          } while ((uVar3 >> 1 & 1) == 0);
        }
LAB_10865caa4:
        func_0x00010865d648();
        if ((extraout_w9 >> 5 & 1) != 0) {
          __ZNSt13exception_ptrC1ERKS_(plVar2,extraout_x8_02 + 0x18);
          __ZSt17rethrow_exceptionSt13exception_ptr();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10865cb5c);
          (*pcVar5)();
        }
        plVar7 = plVar1;
        func_0x0001086596f4(plVar1,extraout_x8_02 + 0x98);
        lVar9 = *(long *)(param_1 + 0xb0);
        func_0x00010865d0c0();
        plVar14 = (long *)(lVar9 + 8);
      } while( true );
    }
    plVar7 = (long *)(*(long *)(param_1 + 0xa8) + 0xa0);
    FUN_10865b210(plVar7,plVar14 + 2);
    if (plVar7 != (long *)0x0) {
      func_0x00010865d41c();
      if ((bool)uVar6) {
        uVar8 = extraout_x12 & extraout_x8;
      }
      else {
        uVar8 = extraout_x8;
        if (extraout_x9 <= extraout_x8) {
          uVar8 = 0;
          if (extraout_x9 != 0) {
            uVar8 = extraout_x8 / extraout_x9;
          }
          uVar8 = extraout_x8 - uVar8 * extraout_x9;
        }
      }
      lVar9 = *plVar7;
      lVar10 = *(long *)(extraout_x14 + 0xa0);
      plVar4 = *(long **)(lVar10 + uVar8 * 8);
      do {
        plVar12 = plVar4;
        plVar4 = (long *)*plVar12;
      } while ((long *)*plVar12 != plVar7);
      if (plVar12 == (long *)(extraout_x14 + 0xb0)) {
LAB_10865c954:
        if (lVar9 == 0) {
LAB_10865c988:
          *(undefined8 *)(lVar10 + uVar8 * 8) = 0;
          lVar9 = *plVar7;
          goto LAB_10865c990;
        }
        uVar11 = *(ulong *)(lVar9 + 8);
        if ((extraout_x9 & extraout_x12) == 0) {
          uVar13 = uVar11 & extraout_x12;
        }
        else {
          uVar13 = uVar11;
          if (extraout_x9 <= uVar11) {
            uVar13 = 0;
            if (extraout_x9 != 0) {
              uVar13 = uVar11 / extraout_x9;
            }
            uVar13 = uVar11 - uVar13 * extraout_x9;
          }
        }
        if (uVar13 != uVar8) goto LAB_10865c988;
LAB_10865c998:
        if ((extraout_x9 & extraout_x12) == 0) {
          uVar11 = uVar11 & extraout_x12;
        }
        else if (extraout_x9 <= uVar11) {
          uVar13 = 0;
          if (extraout_x9 != 0) {
            uVar13 = uVar11 / extraout_x9;
          }
          uVar11 = uVar11 - uVar13 * extraout_x9;
        }
        if (uVar11 != uVar8) {
          *(long **)(lVar10 + uVar11 * 8) = plVar12;
        }
      }
      else {
        uVar11 = plVar12[1];
        if ((extraout_x9 & extraout_x12) == 0) {
          uVar11 = uVar11 & extraout_x12;
        }
        else if (extraout_x9 <= uVar11) {
          uVar13 = 0;
          if (extraout_x9 != 0) {
            uVar13 = uVar11 / extraout_x9;
          }
          uVar11 = uVar11 - uVar13 * extraout_x9;
        }
        if (uVar11 != uVar8) goto LAB_10865c954;
LAB_10865c990:
        if (lVar9 != 0) {
          uVar11 = *(ulong *)(lVar9 + 8);
          goto LAB_10865c998;
        }
      }
      func_0x00010865d230();
      *(undefined1 *)(param_1 + 0x30) = 1;
      *(undefined4 *)(param_1 + 0x31) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      FUN_10865b304(plVar1);
    }
    plVar14 = plVar14 + 1;
  } while( true );
}



/* Entry: 10865cba4; end: 10865cbfb;  */

void FUN_10865cba4(long param_1)

{
  if ((*(byte *)(param_1 + 200) & 1) == 0) {
    func_0x00010865d000();
    func_0x00010865d118();
    FUN_10865a014(param_1 + 0x68);
    func_0x00010865d0c0();
  }
  else {
    func_0x00010865d0c0();
    FUN_10865a078(param_1 + 0x20);
  }
  FUN_10865a0dc(param_1 + 0x50);
  func_0x00010865d4c8();
  func_0x00010865cfe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10865cbfc; end: 10865cc5b;  */

void FUN_10865cbfc(long param_1)

{
  FUN_10865ae40(param_1 + 0x98);
  func_0x00010865d3ac();
  func_0x00010865d118();
  func_0x00010865d280();
  func_0x00010865d0c8();
  func_0x00010865cfe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10865cc5c; end: 10865cc8b;  */

void FUN_10865cc5c(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x98);
  func_0x00010865d280();
  func_0x00010865d0c8();
  func_0x00010865cfe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10865cc8c; end: 10865cce3;  */

void FUN_10865cc8c(long param_1)

{
  FUN_10865ae40(param_1 + 0x20);
  func_0x00010865d3ac();
  func_0x00010865d000();
  func_0x00010865d008();
  func_0x00010865cfe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10865cce4; end: 10865cd0f;  */

void FUN_10865cce4(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x20);
  func_0x00010865d008();
  func_0x00010865cfe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10865cd10; end: 10865ce23;  */

void FUN_10865cd10(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long lVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  undefined8 *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_10865ad08(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x58);
    do {
      func_0x000107c31d08();
    } while (extraout_w10 != 0);
    func_0x000107c31d54(*(undefined8 *)(param_1 + 0x50));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x60) = 1;
      func_0x00010865cee8();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010865d368();
      plVar2 = extraout_x8;
      do {
        if (*plVar2 == 0) {
          func_0x000107c31d1c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x00010865d0b4();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x00010865cf74();
          if ((bool)in_ZR) {
            func_0x00010865cf40();
            func_0x00010865ced8();
            func_0x00010865ce84();
          }
          func_0x00010865ce5c();
          *extraout_x8_02 = 0;
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  lVar3 = param_1 + 0x50;
  FUN_10865ae40(lVar3);
  FUN_108659714(param_1 + 0x10,lVar3);
  func_0x00010865d578();
  func_0x00010865d55c();
  func_0x00010865cfe4();
  func_0x00010865d508();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10865ce24; end: 10865ce5b;  */

void FUN_10865ce24(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x00010865d578();
    func_0x00010865d55c();
  }
  func_0x00010865cfe4();
  func_0x00010865d508();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10865ce5c; end: 10865d6cb;  */

void FUN_10865ce5c(ulong param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  
  lVar1 = unaff_x22 + (param_1 & 0xffffffff) * 0x18;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = unaff_x19;
  *(undefined8 *)(lVar1 + 0x20) = unaff_x21;
  *(char *)(*(long *)(unaff_x20 + 0x90) + 1) = *(char *)(*(long *)(unaff_x20 + 0x90) + 1) + '\x01';
  return;
}



/* Entry: 10865d6cc; end: 10865d723;  */

void FUN_10865d6cc(undefined8 *param_1)

{
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_31 = 0;
  FUN_108653fdc(&uStack_30);
  FUN_108654058(uStack_28,&uStack_28,&uStack_31);
  *param_1 = uStack_30;
  uStack_30 = 0;
  func_0x000107c27fec(&uStack_30);
  return;
}



/* Entry: 10865d724; end: 10865d72f;  */

void FUN_10865d724(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 10865d730; end: 10865d9a7;  */

undefined8 FUN_10865d730(long param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined1 auStack_d8 [40];
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  long lStack_88;
  long lStack_80;
  char cStack_70;
  undefined *puStack_60;
  long lStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  puStack_60 = (undefined *)0x0;
  lVar12 = param_1;
  func_0x000107c28258();
  uStack_50 = 1;
  ppuVar4 = &PTR_PTR_113280c30;
  if (*(undefined ***)(param_2 + 0x28) != (undefined **)0x0) {
    ppuVar4 = *(undefined ***)(param_2 + 0x28);
  }
  ppuVar8 = &PTR_PTR_113280bc8;
  if ((undefined **)ppuVar4[0xd] != (undefined **)0x0) {
    ppuVar8 = (undefined **)ppuVar4[0xd];
  }
  if (*(int *)((long)ppuVar8 + 0x1c) == 6) {
    ppuVar8 = (undefined **)ppuVar8[2];
  }
  else {
    ppuVar8 = &PTR_PTR_113280918;
  }
  puVar6 = (undefined8 *)((ulong)ppuVar8[3] & 0xfffffffffffffffc);
  cVar2 = *(char *)((long)puVar6 + 0x17);
  lVar7 = (long)cVar2;
  lVar10 = lVar7;
  if (lVar7 < 0) {
    lVar10 = puVar6[1];
  }
  lStack_58 = lVar12;
  if (lVar10 == 0x10) {
    puVar9 = (undefined8 *)((ulong)ppuVar8[2] & 0xfffffffffffffffc);
    lVar10 = (long)*(char *)((long)puVar9 + 0x17);
    lVar12 = lVar10;
    if (lVar10 < 0) {
      lVar12 = puVar9[1];
    }
    if (lVar12 == 0xc) {
      lVar12 = puVar6[1];
      if (-1 < cVar2) {
        lVar12 = lVar7;
      }
      puVar1 = (undefined8 *)*puVar6;
      if (-1 < cVar2) {
        puVar1 = puVar6;
      }
      puVar6 = (undefined8 *)*puVar9;
      lVar7 = puVar9[1];
      if (-1 < *(char *)((long)puVar9 + 0x17)) {
        puVar6 = puVar9;
        lVar7 = lVar10;
      }
      FUN_1086692c8(&lStack_88,puVar1,lVar12,puVar6,lVar7,(ulong)ppuVar4[0xc] & 0xfffffffffffffffc);
      if (cStack_70 == '\x01') {
        FUN_108653db8();
        uVar5 = *(ulong *)(param_2 + 8);
        if ((uVar5 & 1) != 0) {
          uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
        }
        func_0x00010539283c(param_2 + 0x60,lStack_88,lStack_80 - lStack_88,uVar5);
        uVar11 = 2;
        lVar12 = 0xd4;
      }
      else {
        uVar11 = 4;
        lVar12 = 0xd5;
      }
      func_0x000107c279c4(&lStack_88);
      goto LAB_10865d878;
    }
  }
  uVar11 = 4;
  lVar12 = 0xd5;
LAB_10865d878:
  uStack_a0 = 0;
  uStack_98 = 0;
  ppuStack_b0 = &PTR_FUN_110a609a8;
  uStack_a8 = 0;
  uStack_90 = 0x20d;
  func_0x000107c278b8(auStack_48,PTR_DAT_113268c98);
  pppuVar3 = &ppuStack_b0;
  func_0x000107c28824(pppuVar3,auStack_48,(&PTR_s_success_113269028)[lVar12]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x000107c2884c(&lStack_88,pppuVar3);
  func_0x000107c2882c(&ppuStack_b0);
  plVar13 = *(long **)(param_1 + 8);
  func_0x000107c2884c(auStack_d8,&lStack_88);
  (**(code **)(*plVar13 + 0x50))(plVar13,auStack_d8);
  func_0x000107c2882c(auStack_d8);
  plVar13 = *(long **)(param_1 + 8);
  ppuVar4 = &puStack_60;
  func_0x000107c2825c();
  ppuStack_b0 = ppuVar4;
  (**(code **)(*plVar13 + 0x18))(plVar13,&lStack_88,&ppuStack_b0);
  func_0x000107c2882c(&lStack_88);
  return uVar11;
}



/* Entry: 10865d9a8; end: 10865d9ab;  */

undefined8 * FUN_10865d9a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a60d68;
  func_0x000107c288a4(param_1 + 1);
  return param_1;
}



/* Entry: 10865d9ac; end: 10865d9bf;  */

void FUN_10865d9ac(void)

{
  func_0x00010865da0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10865d9c0; end: 10865da3b;  */

void FUN_10865d9c0(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c27f94(auStack_38);
  func_0x000107c287c4(param_1,auStack_38);
  func_0x000107c287c8(auStack_38);
  func_0x000107c27fb8(auStack_38);
  return;
}



/* Entry: 10865da3c; end: 10865ebd7;  */

void FUN_10865da3c(long param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  ulong uVar1;
  bool bVar2;
  undefined *****pppppuVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  ulong uVar8;
  undefined ****ppppuVar9;
  code *pcVar10;
  undefined1 uVar11;
  int iVar12;
  undefined *****pppppuVar13;
  undefined *****pppppuVar14;
  undefined8 **ppuVar15;
  undefined *****pppppuVar16;
  undefined ****ppppuVar17;
  undefined *****pppppuVar18;
  undefined *****pppppuVar19;
  undefined ***pppuVar20;
  undefined ***pppuVar21;
  undefined ***pppuVar22;
  undefined ***pppuVar23;
  undefined8 *puVar24;
  long lVar25;
  long lVar26;
  undefined ****extraout_x8;
  undefined ****extraout_x8_00;
  undefined **ppuVar27;
  undefined *****extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined *****pppppuVar28;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  ulong uVar29;
  undefined8 *puVar30;
  undefined *****pppppuVar31;
  long *plVar32;
  undefined **ppuVar33;
  undefined **ppuVar34;
  undefined **unaff_x26;
  undefined1 auStack_1670 [40];
  undefined8 **ppuStack_1648;
  undefined ****ppppuStack_1640;
  undefined ****ppppuStack_1638;
  undefined ****ppppuStack_1630;
  undefined8 uStack_1628;
  undefined4 uStack_1620;
  undefined4 uStack_161c;
  undefined8 uStack_1618;
  ulong uStack_1610;
  undefined8 uStack_1608;
  undefined8 uStack_1600;
  byte bStack_1268;
  undefined8 uStack_1258;
  undefined4 uStack_1250;
  undefined ****ppppuStack_1248;
  undefined ****ppppuStack_1240;
  undefined ****ppppuStack_1238;
  undefined ****ppppuStack_1230;
  undefined ****ppppuStack_1228;
  undefined ****ppppuStack_1220;
  undefined ****ppppuStack_1218;
  char cStack_1210;
  char cStack_11f0;
  long lStack_e40;
  long lStack_e38;
  undefined8 uStack_e30;
  undefined **ppuStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined1 uStack_e00;
  undefined4 uStack_df0;
  undefined4 uStack_de8;
  undefined1 uStack_de4;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined4 uStack_d70;
  undefined1 auStack_d68 [40];
  undefined1 auStack_d40 [24];
  byte bStack_d28;
  undefined1 auStack_d20 [40];
  undefined **ppuStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined4 uStack_cd8;
  undefined1 auStack_cd0 [80];
  undefined1 auStack_c80 [24];
  undefined **ppuStack_c68;
  undefined1 auStack_c60 [32];
  undefined4 uStack_c40;
  undefined **ppuStack_c38;
  undefined1 auStack_c30 [24];
  char cStack_c18;
  undefined ****ppppuStack_c10;
  undefined ****ppppuStack_c08;
  undefined8 *puStack_c00;
  byte bStack_a58;
  undefined ****ppppuStack_a50;
  undefined4 uStack_a48;
  long lStack_a40;
  byte bStack_8a0;
  undefined **ppuStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined4 uStack_878;
  undefined1 auStack_870 [80];
  undefined ****ppppuStack_820;
  undefined ****ppppuStack_818;
  undefined ****ppppuStack_810;
  byte bStack_808;
  undefined ****ppppuStack_800;
  undefined ****ppppuStack_7f8;
  undefined ****ppppuStack_7f0;
  undefined8 *puStack_7e8;
  undefined8 *apuStack_7d8 [40];
  undefined8 *puStack_698;
  byte bStack_620;
  undefined ****ppppuStack_618;
  undefined ****ppppuStack_610;
  undefined ****ppppuStack_608;
  undefined ****ppppuStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined ****ppppuStack_5e0;
  long lStack_5d8;
  byte bStack_240;
  undefined ****ppppuStack_238;
  undefined4 uStack_230;
  undefined8 *puStack_228;
  long lStack_78;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_ce0 = 0;
  uStack_ce8 = 0;
  uStack_cf0 = 0;
  ppuStack_cf8 = &PTR_FUN_110a609a8;
  uStack_cd8 = 0x249;
  func_0x0001006a64d4(auStack_cd0,param_1 + 0x40,&ppuStack_cf8,0,1);
  func_0x000107c2882c(&ppuStack_cf8);
  if ((bRam000000011372c4f8 & 1) == 0) {
    iVar12 = 0x1372c4f8;
    ___cxa_guard_acquire();
    if (iVar12 != 0) {
      puVar30 = (undefined8 *)0x20;
      __Znwm();
      puVar30[1] = 0;
      puVar30[2] = 0;
      *puVar30 = &PTR_FUN_110a60e18;
      puRam000000011372c500 = puVar30 + 3;
      *puRam000000011372c500 = &PTR_DAT_110a60e68;
      puRam000000011372c508 = puVar30;
      ___cxa_guard_release(0x11372c4f8);
    }
  }
  plVar32 = *(long **)(param_1 + 0x30);
  FUN_108847238(&ppppuStack_618,param_1 + 8);
  ppppuStack_1640 = (undefined ****)0x0;
  ppppuStack_1638 = (undefined ****)0x0;
  ppppuStack_1630 = (undefined ****)0x0;
  ppppuStack_7f0 = (undefined ****)&ppppuStack_1640;
  ppuVar34 = (undefined **)&ppppuStack_1630;
  puStack_7e8 = (undefined8 *)((ulong)puStack_7e8 & 0xffffffffffffff00);
  lVar25 = 1;
  pppppuVar13 = (undefined *****)ppuVar34;
  func_0x000108647f54();
  ppppuStack_1630 = (undefined ****)(pppppuVar13 + lVar25 * 3);
  ppppuStack_1220 = (undefined ****)&ppppuStack_a50;
  ppppuStack_1218 = (undefined ****)&ppppuStack_238;
  cStack_1210 = 0;
  ppppuStack_1640 = (undefined ****)pppppuVar13;
  ppppuStack_1638 = (undefined ****)pppppuVar13;
  ppppuStack_1228 = (undefined ****)ppuVar34;
  ppppuStack_a50 = (undefined ****)pppppuVar13;
  ppppuStack_238 = (undefined ****)pppppuVar13;
  func_0x000107c27994();
  pppppuVar13 = (undefined *****)(ppppuStack_238 + 3);
  pppppuVar31 = (undefined *****)0x1;
  cStack_1210 = '\x01';
  ppppuStack_238 = (undefined ****)pppppuVar13;
  FUN_108648068(&ppppuStack_1228);
  puStack_7e8 = (undefined8 *)CONCAT71(puStack_7e8._1_7_,1);
  ppppuStack_1638 = (undefined ****)pppppuVar13;
  FUN_10865ed48(&ppppuStack_7f0);
  (**(code **)(*plVar32 + 0x40))(plVar32,&ppppuStack_1640,0x11372c500);
  func_0x000108647874(&ppppuStack_1640);
  func_0x000108660268();
  func_0x000107c27914();
  lVar25 = *(long *)(param_1 + 0x88);
  lVar26 = *(long *)(param_1 + 0x90);
  if (lVar25 == lVar26) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x30))(&ppppuStack_1228);
    if (cStack_11f0 == '\x01') {
      func_0x00010865eca4((long *)(param_1 + 0x88),&ppppuStack_1228);
      FUN_1086566c8(&ppppuStack_1228);
      lVar25 = *(long *)(param_1 + 0x88);
      lVar26 = *(long *)(param_1 + 0x90);
      goto LAB_10865dc00;
    }
    FUN_1086566c8(&ppppuStack_1228);
LAB_10865e750:
    func_0x00010866013c();
    pppppuVar13 = &ppppuStack_1228;
    func_0x000108660114(pppppuVar13);
    FUN_10865ebd8();
    func_0x000107c2884c(auStack_d20,pppppuVar13);
    func_0x0001086602e8();
    func_0x000108660214();
    func_0x000107c2882c(auStack_d20);
    func_0x0001086601e4();
    func_0x000108660248();
    (**(code **)(extraout_x8_03 + 0x18))();
  }
  else {
LAB_10865dc00:
    ppuVar33 = (undefined **)(param_1 + 0x70);
    if ((undefined ****)*ppuVar33 == *(undefined *****)(param_1 + 0x78)) {
      FUN_108657b48(&ppppuStack_1228,lVar25,lVar26 - lVar25);
      if (cStack_1210 != '\x01') {
        func_0x000107c279c4(&ppppuStack_1228);
        goto LAB_10865e750;
      }
      func_0x000107c3194c(ppuVar33,&ppppuStack_1228);
      func_0x000107c279c4(&ppppuStack_1228);
      lVar25 = *(long *)(param_1 + 0x88);
      lVar26 = *(long *)(param_1 + 0x90);
    }
    FUN_108657e30(lVar25,lVar26 - lVar25);
    ppppuStack_1640._0_5_ = (undefined5)lVar25;
    ppppuStack_1228 = (undefined ****)&ppppuStack_1640;
    ppppuStack_1220 = (undefined ****)0x5;
    pppppuVar13 = &ppppuStack_1228;
    FUN_108668260();
    *(undefined ******)(param_1 + 0xc0) = pppppuVar13;
    FUN_108657bec(auStack_d40,*param_2,(long)param_2[1] - (long)*param_2,*(long *)(param_1 + 0xa0),
                  *(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0));
    if ((bStack_d28 & 1) == 0) {
      func_0x00010866013c();
      pppppuVar13 = &ppppuStack_1228;
      func_0x000108660114(pppppuVar13);
      FUN_10865ebd8();
      func_0x000107c2884c(auStack_d68,pppppuVar13);
      func_0x0001086602e8();
      func_0x000108660214();
      func_0x000107c2882c(auStack_d68);
      func_0x0001086601e4();
      func_0x000108660248();
      (**(code **)(extraout_x8_02 + 0x18))();
    }
    else {
      func_0x000107c27994(&uStack_dc0,param_2);
      func_0x000107c27994(&uStack_de0,auStack_d40);
      uStack_d90 = uStack_db0;
      uStack_d98 = uStack_db8;
      uStack_da0 = uStack_dc0;
      uStack_db0 = 0;
      uStack_db8 = 0;
      uStack_dc0 = 0;
      uStack_d80 = uStack_dd8;
      uStack_d88 = uStack_de0;
      uStack_d78 = uStack_dd0;
      uStack_de0 = 0;
      uStack_dd8 = 0;
      uStack_dd0 = 0;
      uStack_d70 = SUB84(param_3,0);
      func_0x000107c27914(&uStack_de0);
      func_0x000107c27914(&uStack_dc0);
      ppppuVar17 = (undefined ****)*param_2;
      FUN_108657e30(ppppuVar17,(long)param_2[1] - (long)ppppuVar17);
      uStack_de8 = SUB84(ppppuVar17,0);
      uStack_de4 = (undefined1)((ulong)ppppuVar17 >> 0x20);
      uStack_e20 = 0;
      ppuStack_e28 = &PTR_FUN_110a8c518;
      uStack_df0 = 0;
      uStack_e08 = 0;
      uStack_e18 = 0;
      uStack_e10 = 0;
      uStack_e00 = 0;
      lStack_e38 = 0;
      lStack_e40 = 0;
      uStack_e30 = 0;
      func_0x000107c29ff8(&ppppuStack_1228,*(undefined8 *)(param_1 + 0x20),0x7fffffffffffffff,
                          *(undefined4 *)(param_1 + 200),0);
      ppppuStack_1238 = (undefined ****)0x0;
      ppppuStack_1240 = (undefined ****)0x0;
      ppppuStack_1230 = (undefined ****)0x0;
      ppppuVar17 = (undefined ****)*param_2;
      FUN_108657e30(ppppuVar17,(long)param_2[1] - (long)ppppuVar17);
      ppppuStack_618._0_5_ = SUB85(ppppuVar17,0);
      ppppuStack_1640 = (undefined ****)&ppppuStack_618;
      ppppuStack_1638 = (undefined ****)0x5;
      pppppuVar13 = &ppppuStack_1640;
      FUN_108668260();
      uStack_1258 = *(undefined8 *)(param_1 + 0x40);
      uStack_1250 = 0x24a;
      ppppuStack_1248 = (undefined ****)0x0;
      func_0x000107c288b4(&ppppuStack_1640,&ppppuStack_1228);
      func_0x000108660268();
      _bzero();
      pppppuVar31 = (undefined *****)0x0;
      func_0x0001086600c4();
      while ((((bStack_1268 & 1) != 0 || ((bStack_240 & 1) != 0)) &&
             (ppppuStack_1640 != ppppuStack_618))) {
        pppppuVar14 = &ppppuStack_1640;
        func_0x000107c288b8();
        func_0x00010065ef7c(&ppppuStack_7f0,*(undefined8 *)(param_1 + 0x20),pppppuVar14,2);
        if ((bStack_620 & 1) == 0) {
LAB_10865e36c:
          pppppuVar31 = (undefined *****)((long)pppppuVar31 + 1);
        }
        else {
          ppuVar15 = apuStack_7d8;
          FUN_1086a6a98(ppuVar15,param_1 + 8);
          if (((ulong)ppuVar15 & 1) == 0) goto LAB_10865e36c;
          func_0x00010866021c();
          func_0x0001086602c8(&PTR_FUN_110a8c3d8);
          uStack_890 = 0;
          uStack_888 = 0;
          uStack_880 = 0;
          ppuStack_898 = &PTR_FUN_110a609a8;
          uStack_878 = 0x248;
          ppuStack_1648 = ppuVar15;
          func_0x0001006a64d4(auStack_870,param_1 + 0x40,&ppuStack_898,1,1);
          func_0x000107c2882c(&ppuStack_898);
          FUN_108868228(&ppppuStack_238,*(undefined8 *)(param_1 + 0x20),pppppuVar14,
                        *(undefined4 *)(param_1 + 0xcc));
          func_0x000108660168(&ppppuStack_a50);
          func_0x00010068e2b8();
          _bzero(&ppppuStack_c08,0x1b8);
          while ((((bStack_8a0 & 1) != 0 || ((bStack_a58 & 1) != 0)) &&
                 (uVar11 = ppppuStack_a50 == ppppuStack_c08, !(bool)uVar11))) {
            pppppuVar16 = &ppppuStack_a50;
            func_0x00010068e438();
            func_0x00010866031c(pppppuVar16[0xf]);
            ppppuVar17 = (undefined ****)param_3;
            if (!(bool)uVar11) {
              ppppuVar17 = extraout_x8;
            }
            if (*(int *)((long)ppppuVar17 + 0x1c) == 5) {
              pppppuVar18 = (undefined *****)ppuVar33;
              if ((undefined *****)pppppuVar16[0xe] != (undefined *****)0x0) {
                pppppuVar18 = (undefined *****)pppppuVar16[0xe];
              }
              pppppuVar28 = (undefined *****)ppuVar34;
              if ((undefined *****)pppppuVar18[3] != (undefined *****)0x0) {
                pppppuVar28 = (undefined *****)pppppuVar18[3];
              }
              uVar11 = *(int *)((long)pppppuVar28 + 0x1c) == 5;
              ppppuVar17 = (undefined ****)unaff_x26;
              if ((bool)uVar11) {
                ppppuVar17 = pppppuVar28[2];
              }
              FUN_108667fd0(ppppuVar17,&uStack_de8,5);
              if (((ulong)ppppuVar17 & 1) == 0) {
                FUN_10865ece4(&ppppuStack_7f8);
                ppppuStack_7f8[7] = (undefined ***)pppppuVar16[4];
                pppppuVar18 = (undefined *****)ppppuStack_7f8;
                func_0x00010866031c(pppppuVar16[0xf]);
                ppppuVar17 = (undefined ****)param_3;
                if (!(bool)uVar11) {
                  ppppuVar17 = extraout_x8_00;
                }
                ppuVar27 = &PTR_PTR_113280818;
                if (*(int *)((long)ppppuVar17 + 0x1c) == 5) {
                  ppuVar27 = (undefined **)ppppuVar17[2];
                }
                puVar30 = (undefined8 *)((ulong)ppuVar27[5] & 0xfffffffffffffffc);
                if (*(char *)((long)puVar30 + 0x17) < '\0') {
                  if (puVar30[1] != 0) goto LAB_10865dfc0;
LAB_10865e11c:
                  ppppuStack_c10 = (undefined ****)0x0;
                  pppppuVar18 = (undefined *****)ppuVar34;
                }
                else {
                  if (*(char *)((long)puVar30 + 0x17) == '\0') goto LAB_10865e11c;
LAB_10865dfc0:
                  pppppuVar28 = (undefined *****)((ulong)ppuVar27[3] & 0xfffffffffffffffc);
                  if (*(char *)((long)pppppuVar28 + 0x17) < '\0') {
                    if (pppppuVar28[1] == (undefined ****)0x0) goto LAB_10865e11c;
                  }
                  else if (*(char *)((long)pppppuVar28 + 0x17) == '\0') goto LAB_10865e11c;
                  uVar4 = *(undefined4 *)(param_1 + 0xb8);
                  FUN_10865ed14();
                  pppppuVar19 = pppppuVar16;
                  FUN_1086680b4(pppppuVar16,pppppuVar18,param_1 + 8,uVar4,*(long *)(param_1 + 0x70),
                                *(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70));
                  func_0x000107c29ee4(auStack_c80,param_1 + 8);
                  bVar6 = *(byte *)((long)puVar30 + 0x17);
                  puVar24 = (undefined8 *)*puVar30;
                  unaff_x26 = (undefined **)puVar30[1];
                  bVar7 = *(byte *)((long)pppppuVar28 + 0x17);
                  param_3 = (undefined **)(ulong)bVar7;
                  pppppuVar3 = (undefined *****)*pppppuVar28;
                  ppppuVar17 = pppppuVar28[1];
                  lVar25 = *(long *)(param_1 + 8);
                  lVar26 = *(long *)(param_1 + 0x10);
                  pppppuVar18 = *(undefined ******)(param_1 + 0x88);
                  ppuVar33 = *(undefined ***)(param_1 + 0x90);
                  func_0x00010865ed24(auStack_c30,auStack_c80);
                  ppppuVar9 = (undefined ****)unaff_x26;
                  if (-1 < (char)bVar6) {
                    puVar24 = puVar30;
                    ppppuVar9 = (undefined ****)(ulong)bVar6;
                  }
                  if (-1 < (char)bVar7) {
                    pppppuVar3 = pppppuVar28;
                    ppppuVar17 = (undefined ****)param_3;
                  }
                  FUN_108667d54(&ppppuStack_820,puVar24,ppppuVar9,pppppuVar3,ppppuVar17,lVar25,
                                lVar26 - lVar25,pppppuVar18,(long)ppuVar33 - (long)pppppuVar18,uVar4
                               );
                  if ((bStack_808 & 1) == 0) {
                    func_0x0001086600c4(0);
                    ppppuStack_c10 = (undefined ****)extraout_x8_01;
                  }
                  else {
                    FUN_10865f14c(pppppuVar19);
                    func_0x0001086600c4();
                    func_0x000108667e14();
                    ppppuStack_c10 = ppppuStack_7f8;
                    ppppuStack_7f8 = (undefined ****)0x0;
                  }
                  func_0x000107c279c4(&ppppuStack_820);
                  func_0x000107c2a2e0(auStack_c80);
                  param_2 = (undefined **)pppppuVar28;
                }
                FUN_10865ff28(&ppppuStack_7f8);
                ppuVar34 = (undefined **)pppppuVar18;
                if ((undefined *****)ppppuStack_c10 != (undefined *****)0x0) {
                  ppppuStack_c10 = (undefined ****)0x0;
                  FUN_10865ff80(ppuVar15 + 3);
                  func_0x000100695348(auStack_c30,pppppuVar16 + 10);
                  if (cStack_c18 == '\x01') {
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                              (auStack_c80,auStack_c30);
                    ppppuVar17 = (undefined ****)&PTR_PTR_113286e08;
                    if (pppppuVar16[0x10] != (undefined ****)0x0) {
                      ppppuVar17 = pppppuVar16[0x10];
                    }
                    ppuStack_c68 = (undefined **)ppppuVar17[0x26];
                    ppuVar34 = &PTR_PTR_11326cb58;
                    if ((undefined *****)pppppuVar16[0xd] != (undefined *****)0x0) {
                      ppuVar34 = (undefined **)pppppuVar16[0xd];
                    }
                    FUN_10865ecd8(auStack_c60);
                    pppppuVar28 = (undefined *****)param_2;
                    if ((undefined *****)pppppuVar16[0xf] != (undefined *****)0x0) {
                      pppppuVar28 = (undefined *****)pppppuVar16[0xf];
                    }
                    uStack_c40 = *(undefined4 *)(pppppuVar28 + 0x15);
                    ppppuVar17 = (undefined ****)&PTR_PTR_113286e08;
                    if (pppppuVar16[0x10] != (undefined ****)0x0) {
                      ppppuVar17 = pppppuVar16[0x10];
                    }
                    ppuStack_c38 = (undefined **)ppppuVar17[0x24];
                    if (ppppuStack_1238 < ppppuStack_1230) {
                      FUN_10865eed8(ppppuStack_1238,auStack_c80);
                      pppppuVar16 = (undefined *****)(ppppuStack_1238 + 10);
                      ppuVar34 = (undefined **)pppppuVar18;
                    }
                    else {
                      lVar25 = (long)ppppuStack_1238 - (long)ppppuStack_1240;
                      param_3 = (undefined **)0x50;
                      uVar1 = lVar25 / 0x50 + 1;
                      if (0x333333333333333 < uVar1) goto LAB_10865e8e4;
                      uVar8 = ((long)ppppuStack_1230 - (long)ppppuStack_1240) / 0x50;
                      uVar29 = uVar8 * 2;
                      if (uVar29 < uVar1 || uVar29 - uVar1 == 0) {
                        uVar29 = uVar1;
                      }
                      if (0x199999999999998 < uVar8) {
                        uVar29 = 0x333333333333333;
                      }
                      if (uVar29 == 0) {
                        uVar29 = 0;
                        ppuVar34 = (undefined **)0x0;
                      }
                      else {
                        func_0x00010865ef88();
                      }
                      unaff_x26 = (undefined **)(uVar29 + lVar25);
                      FUN_10865eed8(unaff_x26,auStack_c80);
                      ppuVar33 = (undefined **)ppppuStack_1238;
                      pppppuVar18 = (undefined *****)ppppuStack_1240;
                      pppppuVar28 = (undefined *****)
                                    (unaff_x26 +
                                    (((long)ppppuStack_1238 - (long)ppppuStack_1240) / -0x50) * 10);
                      ppppuStack_818 = (undefined ****)&ppppuStack_800;
                      ppppuStack_810 = (undefined ****)&ppppuStack_7f8;
                      ppppuStack_7f8 = (undefined ****)pppppuVar28;
                      ppppuStack_820 = (undefined ****)&ppppuStack_1230;
                      ppppuStack_800 = (undefined ****)pppppuVar28;
                      for (pppppuVar16 = (undefined *****)ppppuStack_1240;
                          pppppuVar16 != (undefined *****)ppuVar33; pppppuVar16 = pppppuVar16 + 10)
                      {
                        FUN_10865eed8(ppppuStack_7f8,pppppuVar16);
                        ppppuStack_7f8 = ppppuStack_7f8 + 10;
                      }
                      bStack_808 = 1;
                      for (; pppppuVar18 != (undefined *****)ppuVar33;
                          pppppuVar18 = pppppuVar18 + 10) {
                        func_0x00010865f004(pppppuVar18);
                      }
                      pppppuVar16 = (undefined *****)(unaff_x26 + 10);
                      param_2 = (undefined **)(uVar29 + (long)ppuVar34 * 0x50);
                      func_0x00010865efc0(&ppppuStack_820);
                      bVar2 = (undefined *****)ppppuStack_1240 != (undefined *****)0x0;
                      ppppuStack_1240 = (undefined ****)pppppuVar28;
                      ppppuStack_1238 = (undefined ****)pppppuVar16;
                      ppppuStack_1230 = (undefined ****)param_2;
                      if (bVar2) {
                        __ZdlPv();
                      }
                      func_0x0001086600c4();
                    }
                    ppppuStack_1238 = (undefined ****)pppppuVar16;
                    func_0x00010865f004(auStack_c80);
                  }
                  func_0x000107c279a4(auStack_c30);
                }
                FUN_10865ff28(&ppppuStack_c10);
              }
            }
            func_0x000100678cb8(&ppppuStack_a50);
          }
          func_0x00010866020c(&ppppuStack_c08);
          func_0x00010866020c(&ppppuStack_a50);
          func_0x000108660168();
          func_0x0001006928f0();
          func_0x0001006ab5c4(auStack_870);
          ppuVar15 = ppuStack_1648;
          iVar12 = *(int *)(ppuStack_1648 + 4);
          if (iVar12 == 0) {
            pppppuVar31 = (undefined *****)((long)pppppuVar31 + 1);
          }
          else {
            func_0x000107c28840(&lStack_e40,pppppuVar14);
            ppuVar15[7] = puStack_698;
            func_0x000107c29ee4(&ppppuStack_238,pppppuVar14);
            func_0x00010865ec64(ppuVar15);
            func_0x000107c287d0();
            func_0x000108660168();
            func_0x000107c2a2e0();
            pppuVar20 = &ppuStack_e28;
            func_0x00010865edac();
            ppuStack_1648 = (undefined8 **)0x0;
            ppuVar34 = (undefined **)ppuVar15[1];
            if (((ulong)ppuVar34 & 1) != 0) {
              ppuVar34 = *(undefined ***)((ulong)ppuVar34 & 0xfffffffffffffffe);
            }
            pppuVar23 = pppuVar20 + 2;
            ppuVar33 = pppuVar20[4];
            if ((ppuVar33 == ppuVar34) &&
               (pppuVar21 = pppuVar23, func_0x0001053a91c8(), (int)pppuVar21 == 0)) {
              pppuVar21 = pppuVar23;
              if (((ulong)pppuVar20[2] & 1) != 0) {
                pppuVar21 = (undefined ***)((long)pppuVar20[2] + 7);
              }
              iVar5 = *(int *)(pppuVar20 + 3);
              pppuVar22 = pppuVar23;
              func_0x000107c28174();
              if (iVar5 < (int)pppuVar22) {
                ppuVar34 = pppuVar21[*(int *)(pppuVar20 + 3)];
                func_0x000107c28174();
                pppuVar21[(int)pppuVar23] = ppuVar34;
              }
              iVar5 = *(int *)(pppuVar20 + 3);
              *(int *)(pppuVar20 + 3) = iVar5 + 1;
              pppuVar21[iVar5] = (undefined **)ppuVar15;
              ppuVar34 = pppuVar20[2];
              if (((ulong)ppuVar34 & 1) != 0) {
                *(int *)((long)ppuVar34 + -1) = *(int *)((long)ppuVar34 + -1) + 1;
              }
            }
            else {
              FUN_10865f2bc(pppuVar23,ppuVar15,ppuVar34,ppuVar33);
            }
            ppppuStack_238 = *(undefined *****)(param_1 + 0x40);
            uStack_230 = 0x247;
            puStack_228 = (undefined8 *)(long)iVar12;
            func_0x000108660168();
            FUN_108681d64();
          }
          ppuVar33 = &PTR_PTR_11327fd48;
          ppuVar34 = &PTR_PTR_113280278;
          unaff_x26 = &PTR_PTR_113280230;
          FUN_10865f290(&ppuStack_1648);
          param_2 = &PTR_PTR_113280c30;
          param_3 = &PTR_PTR_113280bc8;
        }
        func_0x00010066b97c(&ppppuStack_7f0);
        func_0x000107c28920(&ppppuStack_1640);
      }
      ppppuStack_1248 = (undefined ****)pppppuVar31;
      func_0x0001086601fc();
      func_0x0001086602a4();
      ppppuVar17 = ppppuStack_1240;
      if (lStack_e40 == lStack_e38) {
        (**(code **)(**(long **)(param_1 + 0x40) + 0x48))(*(long **)(param_1 + 0x40),0x24b,1);
        pppppuVar31 = *(undefined ******)(param_1 + 0x40);
        ppppuStack_1630 = (undefined ****)0x0;
        uStack_1628 = 0;
        ppppuStack_1640 = (undefined ****)&PTR_FUN_110a609a8;
        ppppuStack_1638 = (undefined ****)0x0;
        uStack_1620 = 0x246;
        pppppuVar13 = &ppppuStack_1640;
        func_0x000108660134(pppppuVar13,0x11);
        func_0x000107c2884c(auStack_1670,pppppuVar13);
        func_0x0001086602e8();
        func_0x000108660214();
        func_0x000107c2882c(auStack_1670);
        func_0x000107c2882c(&ppppuStack_1640);
        func_0x000108660248();
        (**(code **)(extraout_x8_04 + 0x10))();
      }
      else {
        uStack_a48 = 0x24c;
        ppppuStack_608 = ppppuStack_1230;
        ppppuStack_610 = ppppuStack_1238;
        lStack_a40 = ((long)ppppuStack_1238 - (long)ppppuStack_1240) / 0x50;
        ppppuStack_5e0 = *(undefined *****)(param_1 + 0x40);
        ppppuStack_1240 = (undefined ****)0x0;
        ppppuStack_1238 = (undefined ****)0x0;
        ppppuStack_1230 = (undefined ****)0x0;
        ppppuStack_618 = ppppuVar17;
        uStack_5f8 = *(undefined8 *)(param_1 + 0xc0);
        uStack_5e8 = *(undefined8 *)(param_1 + 0x68);
        uStack_5f0 = *(undefined8 *)(param_1 + 0x60);
        ppppuStack_a50 = ppppuStack_5e0;
        ppppuStack_600 = (undefined ****)pppppuVar13;
        if (*(long *)(param_1 + 0x68) != 0) {
          do {
            func_0x000107c31de8();
          } while (extraout_w10 != 0);
          ppppuStack_5e0 = *(undefined *****)(param_1 + 0x40);
        }
        lStack_5d8 = *(long *)(param_1 + 0x48);
        if (lStack_5d8 != 0) {
          do {
            func_0x000107c31de8();
          } while (extraout_w10_00 != 0);
        }
        func_0x000108660168();
        func_0x00010865f344();
        puVar30 = puStack_228;
        puStack_228[2] = 0;
        *puStack_228 = &PTR_FUN_110a60eb0;
        puStack_228[1] = 0;
        FUN_10865f3b8(&ppppuStack_1640,&ppppuStack_618);
        apuStack_7d8[0] = (undefined8 *)0x0;
        puVar24 = (undefined8 *)0x50;
        __Znwm();
        *puVar24 = &PTR_SUB_110a60f00;
        puVar24[2] = ppppuStack_1638;
        puVar24[1] = ppppuStack_1640;
        puVar24[3] = ppppuStack_1630;
        ppppuStack_1640 = (undefined ****)0x0;
        ppppuStack_1638 = (undefined ****)0x0;
        puVar24[5] = CONCAT44(uStack_161c,uStack_1620);
        puVar24[4] = uStack_1628;
        puVar24[7] = uStack_1610;
        puVar24[6] = uStack_1618;
        ppppuStack_1630 = (undefined ****)0x0;
        uStack_1618 = 0;
        uStack_1610 = 0;
        puVar24[9] = uStack_1600;
        puVar24[8] = uStack_1608;
        uStack_1608 = 0;
        uStack_1600 = 0;
        apuStack_7d8[0] = puVar24;
        FUN_10867a1d8(puVar30 + 3,param_4,&ppppuStack_7f0);
        func_0x00010865f8f8(&ppppuStack_7f0);
        func_0x00010865ec74(&ppppuStack_1640);
        puVar30 = puStack_228;
        puStack_228 = (undefined8 *)0x0;
        pppppuVar31 = (undefined *****)(puVar30 + 3);
        puStack_c00 = puVar30;
        ppppuStack_c08 = (undefined ****)pppppuVar31;
        func_0x000108660168();
        func_0x00010865f950();
        plVar32 = *(long **)(param_1 + 0x50);
        puStack_7e8 = puVar30;
        ppppuStack_7f0 = (undefined ****)pppppuVar31;
        if (puVar30 != (undefined8 *)0x0) {
          do {
            func_0x000107c31de8();
          } while (extraout_w10_01 != 0);
        }
        ppppuStack_1640 = (undefined ****)((ulong)ppppuStack_1640 & 0xffffffffffffff00);
        uStack_1610 = uStack_1610 & 0xffffffffffffff00;
        (**(code **)(*plVar32 + 0x88))();
        func_0x00010086ab34(&ppppuStack_1640);
        func_0x000104be3970(&ppppuStack_7f0);
        FUN_10865f960(&ppppuStack_c08);
        func_0x000108660268();
        func_0x00010865ec74();
        FUN_108681d64(&ppppuStack_a50);
      }
      FUN_108681d64(&uStack_1258);
      func_0x00010865ee48(&ppppuStack_1240);
      func_0x000107c288ec(&ppppuStack_1228);
      func_0x000107c27a04(&lStack_e40);
      FUN_1088f050c(&ppuStack_e28);
      func_0x000108648ff4(&uStack_da0);
    }
    func_0x000107c279c4(auStack_d40);
  }
  func_0x0001006ab5c4(auStack_cd0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_10865e8e4:
  ppppuStack_1248 = (undefined ****)pppppuVar31;
  FUN_10865ef74();
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10865e8f0);
  (*pcVar10)();
}



/* Entry: 10865ebd8; end: 10865ec3f;  */

undefined8 FUN_10865ebd8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c278b8(auStack_38,PTR_DAT_113268cd0);
  func_0x000107c28824(param_1,auStack_38,(&PTR_s_success_113269028)[(uint)param_2 & 0x103]);
  func_0x000108660128();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  return param_2;
}



/* Entry: 10865ec40; end: 10865ec73;  */

void FUN_10865ec40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a8c518;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



/* Entry: 10865ec74; end: 10865ecd7;  */

long FUN_10865ec74(long param_1)

{
  long lStack_28;
  
  func_0x000107c288a4(param_1 + 0x38);
  func_0x000107c288e4(param_1 + 0x28);
  lStack_28 = param_1;
  FUN_10865ee7c(&lStack_28);
  return param_1;
}



/* Entry: 10865ecd8; end: 10865ece3;  */

undefined8 * FUN_10865ecd8(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = &PTR_SUB_110a81f68;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x000107c30374(param_1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_2 = param_2 + 0x10;
  func_0x0001002a0e60(param_2,0);
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 10865ece4; end: 10865ed13;  */

void FUN_10865ece4(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010866021c();
  func_0x0001086602c8(&PTR_FUN_110a8c388);
  *param_1 = param_2;
  return;
}



/* Entry: 10865ed14; end: 10865ed33;  */

void FUN_10865ed14(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x00010865f064();
    *(ulong *)(param_1 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 10865ed34; end: 10865ed47;  */

void FUN_10865ed34(void)

{
  FUN_10865f0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10865ed48; end: 10865ee7b;  */

long FUN_10865ed48(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001086478a0(param_1);
  }
  return param_1;
}



/* Entry: 10865ee7c; end: 10865eed7;  */

void FUN_10865ee7c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar1 = plVar2[1];
    while (lVar1 != lVar3) {
      lVar1 = lVar1 + -0x50;
      func_0x00010865f004();
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10865eed8; end: 10865ef27;  */

void FUN_10865eed8(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c31e1c();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = param_2[3];
  FUN_10865ef28(param_1 + 4,param_2 + 4);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x48) = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  return;
}



/* Entry: 10865ef28; end: 10865ef33;  */

long FUN_10865ef28(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c31e5c(&UNK_110a81f58,param_1,0,param_2);
  *(undefined **)(lVar1 + 0x10) = &DAT_11383d918;
  *(undefined4 *)(lVar1 + 0x18) = 0;
  func_0x000107c287d0();
  return param_1;
}



/* Entry: 10865ef34; end: 10865ef73;  */

long FUN_10865ef34(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c31e5c(&UNK_110a81f58);
  *(undefined **)(lVar1 + 0x10) = &DAT_11383d918;
  *(undefined4 *)(lVar1 + 0x18) = 0;
  func_0x000107c287d0();
  return param_1;
}



/* Entry: 10865ef74; end: 10865ef87;  */

undefined1  [16] FUN_10865ef74(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_CY;
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x000108660344();
  if (!(bool)in_CY) {
    lVar2 = (long)puVar1 * 0x50;
    __Znwm(lVar2);
    auVar5._8_8_ = puVar1;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000104bd35f4();
  if ((puVar1[0x18] & 1) == 0) {
    lVar3 = **(long **)(puVar1 + 8);
    lVar2 = **(long **)(puVar1 + 0x10);
    while (lVar2 != lVar3) {
      lVar2 = lVar2 + -0x50;
      func_0x00010865f004();
    }
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 10865ef88; end: 10865f0af;  */

undefined1  [16] FUN_10865ef88(long param_1,undefined8 param_2)

{
  undefined1 in_CY;
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  func_0x000108660344();
  if (!(bool)in_CY) {
    lVar1 = param_1 * 0x50;
    __Znwm(lVar1);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x50;
      func_0x00010865f004();
    }
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10865f0b0; end: 10865f0df;  */

void FUN_10865f0b0(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  *param_1 = (long)plVar1;
  uVar2 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  param_1[1] = uVar2;
  return;
}



/* Entry: 10865f0e0; end: 10865f14b;  */

undefined8 * FUN_10865f0e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a60dc8;
  func_0x000108649af0(param_1 + 0x11);
  func_0x000107c27914(param_1 + 0xe);
  func_0x000107c288e4(param_1 + 0xc);
  func_0x000107c288e8(param_1 + 10);
  func_0x000107c288a4(param_1 + 8);
  func_0x000107c286cc(param_1 + 6);
  func_0x000107c28808(param_1 + 4);
  func_0x000107c27914(param_1 + 1);
  return param_1;
}



/* Entry: 10865f14c; end: 10865f157;  */

void FUN_10865f14c(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,FUN_10865f158);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,FUN_10865f158);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 10865f158; end: 10865f1ab;  */

void FUN_10865f158(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110a90f60;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 10865f1ac; end: 10865f1bb;  */

void FUN_10865f1ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a60e18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10865f1bc; end: 10865f1cf;  */

void FUN_10865f1bc(void)

{
  FUN_10865f1ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10865f1d0; end: 10865f1e7;  */

void FUN_10865f1d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086602c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10865f1e8; end: 10865f20b;  */

void FUN_10865f1e8(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c2a348();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10865f20c; end: 10865f25b;  */

void FUN_10865f20c(void)

{
  undefined1 auStack_400 [976];
  
  func_0x000107c31e1c();
  func_0x000107c28918(auStack_400);
  func_0x000107c31e34();
  func_0x000107c288f4();
  func_0x000107c288f4();
  func_0x000107c31e58();
  return;
}



/* Entry: 10865f25c; end: 10865f28f;  */

void FUN_10865f25c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107c28938(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x18;
  return;
}



/* Entry: 10865f290; end: 10865f2bb;  */

void FUN_10865f290(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107c31e60();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    FUN_1088f18a0();
    __ZdlPv();
  }
  return;
}



/* Entry: 10865f2bc; end: 10865f307;  */

void FUN_10865f2bc(ulong *param_1,ulong param_2,ulong *param_3,ulong *param_4)

{
  undefined1 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong *extraout_x9_01;
  long unaff_x20;
  
  func_0x000107c31e24();
  if ((param_3 == (ulong *)0x0) && (param_4 != (ulong *)0x0)) {
    if (unaff_x20 != 0) {
      func_0x00010866018c();
    }
  }
  else if (param_4 != param_3) {
    FUN_10865f308();
    func_0x0001086601c8();
    param_1 = param_4;
  }
  func_0x000107c31e48();
  uVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
  if (*(int *)((long)param_1 + 0xc) < (int)param_1[1]) {
    func_0x000100064580();
code_r0x0001053a9270:
    uVar3 = *param_1;
  }
  else {
    puVar2 = param_1;
    func_0x0001053a91c8();
    uVar3 = param_1[1];
    if ((int)puVar2 != 0) {
      func_0x0001053a95e4(*param_1);
      puVar2 = param_1;
      if (!(bool)uVar1) {
        puVar2 = extraout_x9_00;
      }
      if (((long *)*puVar2 != (long *)0x0) && (param_1[2] == 0)) {
        (**(code **)(*(long *)*puVar2 + 8))();
      }
      goto code_r0x0001053a9278;
    }
    puVar2 = param_1;
    func_0x00010006818c();
    uVar1 = (int)uVar3 == (int)puVar2;
    if ((int)uVar3 < (int)puVar2) {
      uVar1 = (*param_1 & 1) == 0;
      puVar2 = param_1;
      if (!(bool)uVar1) {
        puVar2 = (ulong *)(*param_1 + (long)(int)param_1[1] * 8 + 7);
      }
      uVar3 = *puVar2;
      func_0x00010006818c(param_1);
      func_0x0001053a95e4(*param_1);
      puVar2 = param_1;
      if (!(bool)uVar1) {
        puVar2 = extraout_x9_01;
      }
      *puVar2 = uVar3;
      goto code_r0x0001053a9270;
    }
    uVar3 = *param_1;
    if ((uVar3 & 1) == 0) goto code_r0x0001053a9278;
  }
  func_0x0001053a9620(uVar3);
code_r0x0001053a9278:
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  func_0x0001053a95e4();
  if (!(bool)uVar1) {
    param_1 = extraout_x9;
  }
  *param_1 = param_2;
  return;
}



/* Entry: 10865f308; end: 10865f36b;  */

void FUN_10865f308(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  if (param_1 == 0) {
    func_0x00010866021c();
  }
  else {
    func_0x0001086602dc();
  }
  func_0x000108660174(&UNK_110a8c3c8);
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(long *)(lVar1 + 0x28) = param_1;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  return;
}



/* Entry: 10865f36c; end: 10865f397;  */

void FUN_10865f36c(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x333333333333334) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x50);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110a60eb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10865f398; end: 10865f39b;  */

void FUN_10865f398(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a60eb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10865f39c; end: 10865f3af;  */

void FUN_10865f39c(void)

{
  FUN_10865f93c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10865f3b0; end: 10865f3b7;  */

void FUN_10865f3b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086602c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


