/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1087cd248; end: 1087cd273;  */

void FUN_1087cd248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_1087cd274(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 1087cd274; end: 1087cd2cf;  */

undefined1  [16] FUN_1087cd274(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    FUN_1087a2964(lVar1,param_2);
    lVar1 = lVar1 + 0x58;
    param_4 = param_4 + 0x58;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 1087cd2d0; end: 1087cd30f;  */

long FUN_1087cd2d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  FUN_1086864ac(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 1087cd310; end: 1087cd4c7;  */

long * FUN_1087cd310(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x38;
    func_0x0001086a90b4();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1087cd4c8; end: 1087cd50f;  */

long * FUN_1087cd4c8(long *param_1)

{
  long lVar1;
  long unaff_x21;
  
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    func_0x0001087ce798();
    func_0x0001087ce57c();
    lVar1 = unaff_x21;
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1087cd510; end: 1087cd527;  */

void FUN_1087cd510(long *param_1,long param_2)

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



/* Entry: 1087cd528; end: 1087cd567;  */

long * FUN_1087cd528(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c27914(lVar1 + 0x10);
    }
    func_0x0001087ce57c();
  }
  return param_1;
}



/* Entry: 1087cd568; end: 1087cd56b;  */

void FUN_1087cd568(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71740;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087cd56c; end: 1087cd57f;  */

void FUN_1087cd56c(void)

{
  FUN_1087cd604();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087cd580; end: 1087cd5a7;  */

undefined8 * FUN_1087cd580(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  
  func_0x000107c27f98(param_1 + 0x20);
  puVar2 = (undefined8 *)(param_1 + 0x18);
  plVar6 = (long *)*puVar2;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar5 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar5 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0,puVar2);
      do {
        uVar5 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  return puVar2;
}



/* Entry: 1087cd5a8; end: 1087cd5af;  */

void FUN_1087cd5a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087cd5b0; end: 1087cd5c3;  */

void FUN_1087cd5b0(void)

{
  FUN_1087cd5c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087cd5c4; end: 1087cd603;  */

undefined8 * FUN_1087cd5c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a71790;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    func_0x00010086aa78(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087cd604; end: 1087cd613;  */

void FUN_1087cd604(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71740;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087cd614; end: 1087cd667;  */

long FUN_1087cd614(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1087cd668; end: 1087cd67b;  */

void FUN_1087cd668(void)

{
  func_0x0001087cd63c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087cd67c; end: 1087cd6cb;  */

void FUN_1087cd67c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)0x18;
  __Znwm();
  *puVar4 = &PTR_SUB_110a717d0;
  lVar5 = *(long *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar6;
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
  return;
}



/* Entry: 1087cd6cc; end: 1087cd713;  */

void FUN_1087cd6cc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_SUB_110a717d0;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
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
  return;
}



/* Entry: 1087cd714; end: 1087cd7e7;  */

void FUN_1087cd714(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2[2];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 8) + 8);
  lVar3 = *plVar2;
  do {
    uStack_28 = 0;
    lVar1 = lVar3 + 0x10;
    func_0x0001087ce458(lVar1,&uStack_28);
    if ((int)lVar1 != 0) {
      if (*(char *)(lVar3 + 0xb0) == '\x01') {
        func_0x00010086aa78(lVar3 + 0x98);
        *(undefined1 *)(lVar3 + 0xb0) = 0;
      }
      func_0x00010086a70c(lVar3 + 0x98,&uStack_40);
      *(undefined1 *)(lVar3 + 0xb0) = 1;
      *(undefined8 *)(lVar3 + 0x10) = 2;
      func_0x000107c31508(lVar3,plVar2);
      break;
    }
  } while (((uint)uStack_28 >> 1 & 1) == 0);
  func_0x00010086aa78(&uStack_40);
  func_0x00010086aa78(&uStack_58);
  return;
}



/* Entry: 1087cd7e8; end: 1087cd81f;  */

long FUN_1087cd7e8(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a71830);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1087cd820; end: 1087cd82b;  */

undefined ** FUN_1087cd820(void)

{
  return &PTR_DAT_110a71830;
}



/* Entry: 1087cd82c; end: 1087cd873;  */

long * FUN_1087cd82c(long *param_1)

{
  long lVar1;
  long unaff_x21;
  
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    func_0x0001087ce798();
    func_0x0001087ce57c();
    lVar1 = unaff_x21;
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1087cd874; end: 1087cd88b;  */

void FUN_1087cd874(long *param_1,long param_2)

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



/* Entry: 1087cd88c; end: 1087cd8cb;  */

long * FUN_1087cd88c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c27914(lVar1 + 0x10);
    }
    func_0x0001087ce57c();
  }
  return param_1;
}



/* Entry: 1087cd8cc; end: 1087cd8f3;  */

undefined4 FUN_1087cd8cc(int param_1)

{
  if (param_1 + 1U < 0x12) {
    return *(undefined4 *)(&UNK_10df58288 + (ulong)(param_1 + 1U) * 4);
  }
  return 0xb0051;
}



/* Entry: 1087cd8f4; end: 1087cd9fb;  */

void FUN_1087cd8f4(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_38;
  
  FUN_1087c7fc0(param_1 + 0xc0);
  func_0x0001087ce530();
  func_0x0001087ce630();
  func_0x0001087ce4bc();
  func_0x000107c2825c(param_1 + 0x98);
  func_0x0001087ce598(*(undefined8 *)(param_1 + 0xd8));
  func_0x0001087ce150();
  plVar2 = (long *)(param_1 + 0x18);
  lVar3 = *plVar2;
  do {
    uStack_38 = 0;
    lVar1 = lVar3 + 0x10;
    func_0x0001087ce458(lVar1,&uStack_38);
    if ((int)lVar1 != 0) {
      func_0x00010877c4dc(lVar3 + 0x98);
      FUN_10877c50c(lVar3 + 0x98,param_1 + 0x20);
      *(undefined1 *)(lVar3 + 0xd8) = 1;
      *(undefined8 *)(lVar3 + 0x10) = 2;
      func_0x000107c31508(lVar3,plVar2);
      break;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  func_0x000107c27fa0(plVar2,0);
  func_0x0001087ce330();
  func_0x0001087ce788();
  func_0x0001087ce2d8();
  func_0x0001087ce300();
  return;
}



/* Entry: 1087cd9fc; end: 1087cda2b;  */

void FUN_1087cd9fc(long param_1)

{
  func_0x000107c27f9c(param_1 + 0xc0);
  func_0x0001087ce4bc();
  func_0x0001087ce788();
  func_0x0001087ce2d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087cda2c; end: 1087cdb87;  */

void FUN_1087cda2c(long param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined1 auStack_68 [8];
  
  plVar2 = (long *)(param_1 + 0xd0);
  if (((uint)*(undefined8 *)(*plVar2 + 0x10) >> 5 & 1) == 0) {
    func_0x00010086a70c(param_1 + 0x58,*plVar2 + 0x98);
    func_0x000107c27f9c(plVar2);
    func_0x000107c27f9c(param_1 + 0xd8);
    func_0x00010086aa78(param_1 + 0x58);
    func_0x00010086ab34(param_1 + 0x20);
    FUN_1087cd614(param_1 + 0xb0);
    FUN_1087cd614(param_1 + 0xa0);
    func_0x000107c2825c(param_1 + 0x70);
    func_0x0001087ce5a4();
    func_0x0001087ce494();
    func_0x000107c287c8(param_1 + 0x10);
    func_0x00010086ad3c(param_1 + 0x88);
    func_0x0001087ce7ac();
    func_0x0001087ce300();
    return;
  }
  func_0x0001087ce824(auStack_68);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_68);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1087cdb1c);
  (*pcVar1)();
}



/* Entry: 1087cdb88; end: 1087cdbc7;  */

void FUN_1087cdb88(long param_1)

{
  func_0x000107c27f9c(param_1 + 0xd0);
  func_0x0001087ce860();
  func_0x0001087ce744();
  func_0x0001087ce858();
  func_0x0001087ce81c();
  func_0x00010086ad3c(param_1 + 0x88);
  func_0x0001087ce2d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087cdbc8; end: 1087ce057;  */

void FUN_1087cdbc8(long param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 in_ZR;
  bool bVar4;
  uint *puVar5;
  undefined1 *puVar6;
  uint extraout_w8;
  uint uVar7;
  undefined8 extraout_x8;
  long *plVar8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  code *extraout_x8_02;
  ulong uVar9;
  long extraout_x8_03;
  ulong uVar10;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  long unaff_x22;
  undefined1 *puVar16;
  bool bVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined1 auStack_278 [16];
  long alStack_268 [5];
  undefined1 auStack_240 [40];
  undefined8 uStack_218;
  undefined8 uStack_58;
  
  lVar12 = param_1;
  func_0x0001087ce308();
  uStack_58 = extraout_x8;
  if ((*(byte *)(lVar12 + 400) & 1) == 0) {
    FUN_1087c7fc0(param_1 + 0xe0);
    func_0x0001087ce530();
    func_0x0001087ce2f8();
    func_0x0001087ce420();
    if (*(int *)(param_1 + 0x58) == 0) {
      puVar5 = (uint *)(param_1 + 0x20);
      func_0x0001086ecdc0();
      lVar12 = *(long *)(param_1 + 0x178);
      uVar3 = *puVar5;
      uVar14 = (ulong)uVar3;
      *(undefined8 *)(param_1 + 0x130) = 0;
      func_0x000107c28258();
      *(uint **)(param_1 + 0x138) = puVar5;
      *(undefined1 *)(param_1 + 0x140) = 1;
      uVar9 = uVar14;
      FUN_108770a30(uVar14,lVar12 + 0x90);
      iVar11 = (int)uVar9;
      in_ZR = iVar11 - 1U == 2;
      if (iVar11 - 1U < 3) {
        lVar18 = *(long *)(param_1 + 0x180);
        lVar12 = *(long *)(lVar18 + 0xa0) - *(long *)(lVar18 + 0x98);
        in_ZR = 1;
        if (lVar12 == 0) goto LAB_1087cde74;
        puVar6 = *(undefined1 **)(lVar18 + 0x658);
        FUN_108862ee8(&uStack_218,*(undefined8 *)(*(long *)(param_1 + 0x178) + 0x28));
        FUN_10867b070(param_1 + 0x118,&uStack_218);
        uVar9 = lVar12 / 0x18;
        func_0x000107c28948(&uStack_218);
        puVar2 = *(undefined1 **)(param_1 + 0x120);
        for (puVar16 = *(undefined1 **)(param_1 + 0x118); puVar16 != puVar2;
            puVar16 = puVar16 + 0x1a8) {
          if (puVar16[0x28] == '\x01') {
            lVar12 = *(long *)(*(long *)(param_1 + 0x180) + 0x98);
            puVar6 = *(undefined1 **)(lVar18 + 0xa0);
            func_0x000107c28da4(lVar12,puVar6,puVar16);
            if (*(long *)(lVar18 + 0xa0) != lVar12) {
              puVar6 = puVar16;
              FUN_1087cc638(*(long *)(param_1 + 0x180) + 0x20,puVar16,puVar16);
            }
          }
        }
        uVar10 = *(ulong *)(*(long *)(param_1 + 0x180) + 0x6e0);
        bVar4 = uVar9 <= uVar10;
        in_ZR = uVar10 == uVar9;
        if ((bool)in_ZR) {
          bVar17 = false;
          func_0x0001087ce1e8();
          uVar7 = 1;
          if (bVar4 && !(bool)in_ZR) {
            uVar7 = 2;
          }
          puVar16 = (undefined1 *)(ulong)uVar7;
        }
        else if ((uVar10 == 0) || (func_0x0001087ce1e8(), !bVar4 || (bool)in_ZR)) {
          bVar17 = true;
        }
        else {
          bVar17 = false;
          puVar16 = (undefined1 *)0x3;
        }
        func_0x00010867b9fc(param_1 + 0x118);
        if (bVar17) goto LAB_1087cde74;
        uVar7 = (int)puVar16 - 1;
        in_ZR = uVar7 == 2;
        if (uVar7 < 2) {
          func_0x0001087ce8d8();
          puVar6 = (undefined1 *)(extraout_x8_03 + 0x20);
          func_0x0001087cc8bc();
          iVar11 = 0;
        }
        else {
          in_ZR = (int)puVar16 == 3;
          if ((bool)in_ZR) {
            func_0x0001087ce8d8();
            func_0x0001087ce7c0();
          }
        }
      }
      else {
LAB_1087cde74:
        lVar12 = *(long *)(param_1 + 0x180);
        puVar19 = *(undefined8 **)(*(long *)(param_1 + 0x178) + 0x58);
        FUN_1087cd8cc(uVar14);
        uStack_218._0_1_ = 0;
        uStack_218._4_1_ = 0;
        func_0x0001087ce390(*puVar19);
        puVar6 = (undefined1 *)(lVar12 + 0x20);
        (*extraout_x8_02)();
      }
      func_0x000107c2825c(param_1 + 0x130);
      func_0x0001087ce598(*(undefined8 *)(param_1 + 0x180));
      func_0x0001087ce150();
      *(int *)(param_1 + 0xe0) = iVar11;
      if (iVar11 == 0) {
        *(undefined1 *)(param_1 + 0xe4) = 0;
        *(undefined1 *)(param_1 + 0xe8) = 0;
      }
      else {
        in_ZR = uVar3 == 0x10;
        if (uVar3 < 0x11) {
          uVar9 = *(ulong *)(&UNK_10df58358 + uVar14 * 8) | *(ulong *)(&UNK_10df582d0 + uVar14 * 8);
        }
        else {
          uVar9 = 0x100000015;
        }
        *(int *)(param_1 + 0xe4) = (int)uVar9;
        *(char *)(param_1 + 0xe8) = (char)(uVar9 >> 0x20);
      }
      plVar15 = (long *)(param_1 + 0xf0);
      *(undefined1 *)plVar15 = 0;
      *(undefined1 *)(param_1 + 0x110) = 0;
      *(undefined1 *)(param_1 + 0x60) = 0;
      *(undefined1 *)(param_1 + 0x98) = 0;
      func_0x0001087ce43c(&uStack_218);
      func_0x0001087ce770();
      func_0x0001087a3420(&uStack_218);
      func_0x0001087a33a8(param_1 + 0x60);
      goto LAB_1087cdf4c;
    }
    lVar12 = param_1 + 0x20;
    FUN_1086ecda4();
    *(long *)(param_1 + 0x188) = lVar12;
    plVar15 = *(long **)(param_1 + 0x178);
    puVar6 = *(undefined1 **)(param_1 + 0x180);
    FUN_1087c801c(param_1 + 0x118,plVar15,puVar6,lVar12);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x118);
    do {
      func_0x0001087ce1c4();
    } while (extraout_w10 != 0);
    func_0x0001087ce564(*(undefined8 *)(param_1 + 0xe0));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 400) = 1;
      lVar12 = *(long *)(param_1 + 0xe0);
      func_0x0001087ce1b4();
      if (*plVar15 == 0) {
        func_0x000107c3a5c0();
      }
      plVar8 = (long *)(lVar12 + 0x10);
      do {
        if (*plVar8 == 0) {
          func_0x0001087ce258();
          plVar8 = extraout_x8_01;
          uVar3 = extraout_w10_01;
          uVar7 = extraout_w11_00;
        }
        else {
          func_0x0001087ce548();
          plVar8 = extraout_x8_00;
          uVar3 = extraout_w10_00;
          uVar7 = extraout_w11;
        }
        if ((uVar7 & 1) != 0) {
          func_0x0001087ce874();
          if ((bool)in_ZR) {
            func_0x0001087ce248();
            func_0x0001087ce1a4();
            func_0x0001087ce2a4();
            *(long **)(unaff_x22 + 8) = plVar15;
            *(long **)(lVar12 + 0x90) = plVar15;
          }
          func_0x0001087ce3a4();
          goto LAB_1087cdf5c;
        }
      } while ((uVar3 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0xe0);
  lVar12 = *(long *)(param_1 + 0x180);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  uVar13 = *(undefined8 *)(param_1 + 0x178);
  func_0x0001087ce2f8();
  func_0x0001087ce420();
  FUN_1087c87c8(auStack_278,uVar13,lVar12 + 0x20,uVar1);
  FUN_1087a9768(auStack_240,alStack_268);
  puVar6 = auStack_240;
  FUN_1087a9768(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xd0) = 1;
  *(undefined1 *)(param_1 + 0xd8) = 1;
  func_0x0001087ce43c(&uStack_218);
  func_0x0001087ce770();
  func_0x0001087a3420(&uStack_218);
  func_0x0001087a33a8(param_1 + 0xa0);
  func_0x0001087a3168(auStack_240);
  plVar15 = alStack_268;
LAB_1087cdf4c:
  func_0x0001087a3168(plVar15);
  func_0x0001087ce330();
  while( true ) {
    func_0x0001087ce2d8();
    func_0x0001087ce300();
LAB_1087cdf5c:
    func_0x0001087ce1d4(uStack_58);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if ((int)puVar6 == 0) {
      do {
        func_0x0001087ce48c();
        func_0x000104bd46a0(plVar15);
      } while ((int)puVar6 == 0);
    }
    else {
      plVar15 = &uStack_218;
      func_0x000107c28948();
    }
    func_0x0001087ce330();
    func_0x0001087ce418();
    func_0x0001087ce410();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1087ce058; end: 1087ce097;  */

void FUN_1087ce058(long param_1)

{
  if ((*(byte *)(param_1 + 400) & 1) == 0) {
    func_0x0001087ce2f8();
    func_0x0001087ce420();
  }
  else {
    func_0x0001087ce2f8();
    func_0x0001087ce420();
    func_0x0001087ce330();
  }
  func_0x0001087ce2d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087ce098; end: 1087ce0ff;  */

void FUN_1087ce098(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x90;
  FUN_1087afeec(lVar1);
  FUN_1087a3188(param_1 + 0x20,lVar1);
  func_0x0001087ce540();
  func_0x0001087ce47c();
  func_0x0001087ce764();
  func_0x0001087a3420(param_1 + 0x20);
  func_0x0001087ce2d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087ce100; end: 1087ce12b;  */

void FUN_1087ce100(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x90);
  func_0x0001087ce47c();
  func_0x0001087ce2d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087ce12c; end: 1087ce97b;  */

undefined1 * FUN_1087ce12c(void)

{
  return &stack0x00001700;
}



/* Entry: 1087ce97c; end: 1087cead7;  */

void FUN_1087ce97c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined ***pppuVar1;
  ulong uVar2;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  undefined8 uStack_48;
  
  uVar2 = (ulong)*(uint *)(param_2 + 0x138);
  uStack_88 = 0;
  uStack_80 = 0;
  ppuStack_98 = &PTR_FUN_110a6f328;
  uStack_90 = 0;
  uStack_78 = 6;
  pppuVar1 = &ppuStack_98;
  uStack_48 = param_4;
  FUN_1087cead8(pppuVar1,param_3);
  func_0x000107c278b8(auStack_b0,&UNK_10f4bb84a);
  FUN_10879cf94(uVar2);
  FUN_108791610(pppuVar1,auStack_b0,uVar2);
  FUN_1087b7e18();
  FUN_108791a34(auStack_70,pppuVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  FUN_108788618(&ppuStack_98);
  if (((int)param_3 == 0x40011) && ((param_5 >> 0x20 & 1) != 0)) {
    func_0x000107c278b8(auStack_c8,&UNK_10f4bb857);
    func_0x000107c28af4(param_5);
    FUN_108791610(auStack_70,auStack_c8,param_5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
  }
  (**(code **)(*(long *)*param_1 + 0x20))((long *)*param_1,auStack_70,&uStack_48);
  FUN_108788618(auStack_70);
  return;
}



/* Entry: 1087cead8; end: 1087ceb6f;  */

undefined8 FUN_1087cead8(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auStack_38 [24];
  
  uVar3 = param_2 >> 0x10 & 0xffff;
  if ((uint)uVar3 < 9) {
    puVar2 = (&PTR_s_success_113268a18)[uVar3];
  }
  else {
    puVar2 = &UNK_10f4bb863;
  }
  func_0x000107c278b8(auStack_38,puVar2);
  uVar1 = (uint)param_2 & 0xffff;
  if (uVar1 < 0x2b) {
    puVar2 = (&PTR_s_true_113268a60)[uVar1];
  }
  else {
    puVar2 = &UNK_10f4bb874;
  }
  FUN_108791610(param_1,auStack_38,puVar2);
  func_0x0001087ceb98();
  return param_1;
}



/* Entry: 1087ceb70; end: 1087cec8f;  */

undefined4 FUN_1087ceb70(int param_1)

{
  if (param_1 - 1U < 0xc) {
    return *(undefined4 *)(&UNK_10df583e0 + (ulong)(param_1 - 1U) * 4);
  }
  return 0xb0052;
}



/* Entry: 1087cec90; end: 1087cfa9b;  */

void FUN_1087cec90(undefined8 param_1,undefined ***param_2,undefined ***param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined ***pppuVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined ***pppuVar14;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  long lVar15;
  undefined ***pppuVar16;
  undefined *puVar17;
  undefined ***pppuVar18;
  long lVar19;
  undefined ***pppuVar20;
  undefined ***pppuVar21;
  uint uVar22;
  undefined **ppuVar23;
  undefined8 *puVar25;
  undefined1 auStack_da8 [24];
  undefined **ppuStack_d90;
  undefined1 uStack_d88;
  undefined1 uStack_d80;
  undefined **ppuStack_d78;
  undefined1 uStack_d70;
  undefined **ppuStack_d68;
  undefined1 uStack_d60;
  undefined1 auStack_d58 [120];
  undefined1 auStack_ce0 [24];
  undefined **ppuStack_cc8;
  undefined8 uStack_cc0;
  undefined1 auStack_cb8 [32];
  undefined1 uStack_c98;
  undefined1 uStack_c94;
  undefined **ppuStack_c90;
  byte bStack_c88;
  uint uStack_c80;
  byte bStack_c7c;
  undefined1 uStack_c78;
  undefined1 uStack_c70;
  undefined1 uStack_c68;
  undefined1 uStack_c64;
  undefined1 uStack_c60;
  undefined1 uStack_c58;
  undefined1 uStack_c40;
  undefined1 uStack_c38;
  undefined1 uStack_c34;
  undefined1 uStack_c30;
  undefined1 uStack_c2c;
  undefined1 uStack_c28;
  undefined1 uStack_c20;
  undefined1 uStack_c08;
  undefined1 auStack_c00 [32];
  undefined **ppuStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined **ppuStack_b70;
  undefined1 auStack_b68 [24];
  undefined ***pppuStack_b50;
  undefined ***pppuStack_b48;
  undefined ***pppuStack_b40;
  undefined ***pppuStack_b38;
  undefined ***pppuStack_b30;
  undefined1 *puStack_b28;
  undefined1 *puStack_b20;
  code *pcStack_b18;
  undefined8 *puStack_b10;
  undefined ***pppuStack_b08;
  undefined ***pppuStack_b00;
  undefined1 auStack_ae8 [24];
  undefined1 auStack_ad0 [432];
  undefined1 auStack_920 [24];
  undefined1 auStack_908 [24];
  undefined **appuStack_8f0 [5];
  undefined **appuStack_8c8 [3];
  undefined **ppuStack_8b0;
  undefined **ppuStack_8a8;
  undefined8 uStack_8a0;
  undefined4 uStack_898;
  undefined **ppuStack_890;
  undefined4 uStack_888;
  undefined8 uStack_884;
  byte bStack_628;
  undefined **ppuStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined4 uStack_600;
  byte bStack_478;
  undefined **ppuStack_470;
  undefined **ppuStack_468;
  long lStack_458;
  long lStack_450;
  undefined ***pppuStack_440;
  undefined ***pppuStack_438;
  long lStack_428;
  long lStack_420;
  undefined ***pppuStack_410;
  undefined ***pppuStack_408;
  undefined1 auStack_3f8 [24];
  undefined1 auStack_3e0 [64];
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 auStack_368 [24];
  undefined **ppuStack_350;
  ulong auStack_348 [2];
  undefined **ppuStack_338;
  uint auStack_330 [2];
  undefined4 uStack_328;
  undefined1 uStack_324;
  undefined4 uStack_318;
  uint auStack_310 [2];
  undefined1 auStack_308 [32];
  undefined4 uStack_2e8;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined1 auStack_298 [24];
  undefined1 uStack_280;
  undefined ***pppuStack_278;
  undefined1 uStack_270;
  undefined1 auStack_268 [32];
  undefined8 auStack_248 [2];
  undefined8 uStack_238;
  undefined1 uStack_230;
  undefined1 auStack_220 [8];
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [8];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined1 uStack_1d8;
  undefined1 uStack_1d0;
  undefined1 uStack_1c8;
  undefined4 uStack_1c4;
  undefined **ppuStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined8 uStack_19f;
  undefined1 uStack_190;
  undefined4 uStack_188;
  undefined1 uStack_184;
  undefined1 uStack_118;
  undefined1 auStack_110 [24];
  undefined1 uStack_f8;
  undefined1 auStack_f0 [32];
  undefined **ppuStack_d0;
  undefined1 uStack_c8;
  undefined **ppuStack_c0;
  undefined1 uStack_b8;
  undefined **ppuStack_98;
  undefined4 uStack_90;
  undefined1 auStack_8c [4];
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_78 [3];
  undefined ***pppuVar24;
  
  func_0x0001087d0410();
  auStack_78[0] = extraout_x8;
  func_0x0001087a93b4(auStack_ae8);
  FUN_1087a9334(param_1,auStack_ae8);
  FUN_10879c3ac(&ppuStack_350,param_3 + 0x23,param_3[0x1c] != param_3[0x1d]);
  func_0x0001087be850(param_3 + 0x94,&ppuStack_350);
  func_0x000107c2a500(&ppuStack_350);
  pppuStack_b00 = param_2 + 4;
  puVar17 = (*pppuStack_b00)[3];
  func_0x000107c278b8(auStack_3f8,&UNK_10f4bb6b3);
  func_0x000107c31420(auStack_3e0,puVar17,auStack_3f8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3f8);
  pppuVar14 = param_3 + 0x13;
  pppuVar5 = pppuStack_b00;
  FUN_1086a5460(&ppuStack_470,auStack_3e0);
  ppuVar4 = ppuStack_468;
  puStack_b10 = auStack_248;
  pppuVar18 = &ppuStack_1c0;
  pppuVar21 = (undefined ***)0x3;
  pppuStack_b08 = param_2;
  for (ppuVar12 = ppuStack_470; lVar15 = lStack_450, pppuVar24 = pppuStack_b08, lVar19 = lStack_458,
      ppuVar12 != ppuVar4; ppuVar12 = ppuVar12 + 3) {
    func_0x0001087d0454();
    ppuVar23 = *pppuStack_b00;
    func_0x0001087d043c();
    ppuStack_338 = (undefined **)((ulong)ppuStack_338 & 0xffffffffffffff00);
    auStack_330[0] = auStack_330[0] & 0xffffff00;
    uStack_328 = 3;
    uStack_324 = 1;
    FUN_10885fef4(ppuVar23,&ppuStack_350);
    func_0x0001087d03d0();
    func_0x0001087d043c();
    func_0x000107c28dcc(auStack_348 + 2);
    func_0x000107c278b8(auStack_220,&DAT_10f4bdfe8);
    pppuVar5 = pppuStack_b08;
    uStack_208 = 0;
    auStack_200[0] = 1;
    auStack_1e0[0] = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1c8 = 1;
    uStack_1c4 = 10;
    uStack_190 = 0;
    uStack_1b8 = 0;
    ppuStack_1c0 = (undefined **)0x0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_19f = 0;
    uStack_1a7 = 0;
    uStack_1a0 = 0;
    uStack_188 = 3;
    uStack_184 = 1;
    func_0x0001087d0460();
    FUN_10885ff98();
    ppuVar23 = pppuVar5[0x19];
    uStack_618 = 0;
    uStack_610 = 0;
    uStack_608 = 0;
    ppuStack_620 = &PTR_FUN_110a609a8;
    uStack_600 = 0x259;
    pppuVar5 = &ppuStack_620;
    FUN_1086b8004(pppuVar5,0x4901bd);
    func_0x000107c2884c(appuStack_8c8,pppuVar5);
    pppuVar5 = appuStack_8c8;
    (**(code **)(*ppuVar23 + 0x50))(ppuVar23);
    func_0x000107c2882c(appuStack_8c8);
    func_0x000107c2882c(&ppuStack_620);
    func_0x000107c287e4(&ppuStack_350);
  }
  for (; pppuVar16 = pppuStack_438, pppuVar20 = pppuStack_440, lVar19 != lVar15;
      lVar19 = lVar19 + 0x18) {
    func_0x0001087d0454();
  }
  for (; pppuVar20 != pppuVar16; pppuVar20 = pppuVar20 + 3) {
    pppuVar14 = (undefined ***)0x1;
    pppuVar5 = pppuVar20;
    FUN_10879cf30(param_3 + 4);
  }
  if ((*(char *)(param_3 + 0xca) != '\x01') ||
     (pppuVar9 = (undefined ***)&PTR_FUN_110a609a8, ((ulong)param_3[0xcc] & 1) == 0)) {
    pppuVar20 = (undefined ***)(ulong)*(uint *)(param_3 + 0x2b);
    for (ppuVar12 = ppuStack_470; lVar15 = lStack_458, ppuVar12 != ppuStack_468;
        ppuVar12 = ppuVar12 + 3) {
      func_0x0001087d0374();
      pppuVar14 = (undefined ***)0xa;
      pppuVar5 = pppuVar20;
      func_0x0001087d03b8();
    }
    for (; pppuVar16 = pppuStack_440, lVar15 != lStack_450; lVar15 = lVar15 + 0x18) {
      func_0x0001087d0374();
      pppuVar14 = (undefined ***)0xb;
      pppuVar5 = pppuVar20;
      func_0x0001087d03b8();
    }
    for (; lVar15 = lStack_428, pppuVar16 != pppuStack_438; pppuVar16 = pppuVar16 + 3) {
      func_0x0001087d0374();
      pppuVar14 = (undefined ***)0xd;
      pppuVar5 = pppuVar20;
      func_0x0001087d03b8();
    }
    for (; pppuVar16 = pppuStack_410, lVar15 != lStack_420; lVar15 = lVar15 + 0x18) {
      func_0x0001087d0374();
      pppuVar14 = (undefined ***)0xc;
      pppuVar5 = pppuVar20;
      func_0x0001087d03b8();
    }
    for (; pppuVar9 = pppuStack_408, pppuVar16 != pppuStack_408; pppuVar16 = pppuVar16 + 0x3a) {
      func_0x0001087d0374();
      pppuVar14 = (undefined ***)0xe;
      pppuVar5 = pppuVar20;
      func_0x0001087d03b8();
    }
  }
  if ((((param_3[0x16] == param_3[0x17]) && (param_3[0x13] == param_3[0x14])) &&
      (param_3[0x19] == param_3[0x1a])) && (uVar2 = param_3[0x1c] == param_3[0x1d], (bool)uVar2)) {
    ppuStack_350 = (undefined **)0x700000000;
    auStack_348[0] = auStack_348[0] & 0xffffffffffffff00;
    func_0x0001087d035c();
    func_0x0001087d03e0();
    func_0x0001087a3420(&ppuStack_350);
    goto LAB_1087cf69c;
  }
  ppuStack_620 = (undefined **)((ulong)ppuStack_620 & 0xffffffffffffff00);
  bStack_478 = 0;
  uVar2 = *(char *)(param_3 + 0xca) == '\x01';
  if (((bool)uVar2) && (((ulong)param_3[0xcc] & 1) != 0)) {
    pppuVar18 = (undefined ***)param_3[0xc9];
    func_0x0001087d0460();
    FUN_10886854c(&ppuStack_350);
    FUN_108787140(appuStack_8c8,&ppuStack_350);
    func_0x000107c29854(appuStack_8c8);
    func_0x000107c2985c(&ppuStack_350);
    pppuVar16 = pppuStack_b00;
    if ((bStack_628 & 1) != 0) {
      FUN_1088699e4(*pppuStack_b00,param_3 + 4,1);
      FUN_108869aa4(&ppuStack_350,*pppuVar16,pppuVar18);
      func_0x0001087d03a4();
      func_0x0001087d0434();
      if ((bStack_478 & 1) == 0) {
        iVar3 = (int)param_3 + 0x20;
        func_0x0001087bb064();
        if (iVar3 != 0) {
          FUN_1087cfa9c(&ppuStack_350,pppuVar24,param_3 + 4);
          func_0x0001087d03a4();
          func_0x0001087d0434();
          FUN_1087cfd28(pppuVar24,param_3 + 4,&ppuStack_620);
        }
      }
      goto LAB_1087cf630;
    }
    pppuVar16 = (undefined ***)pppuVar24[0x19];
    auStack_348[1] = 0;
    ppuStack_338 = (undefined **)0x0;
    auStack_348[0] = 0;
    ppuStack_350 = &PTR_FUN_110a609a8;
    auStack_330[0] = 0x1a8;
    func_0x000107c278b8(auStack_908,"message_type");
    uVar8 = (ulong)*(uint *)(param_3 + 0x2b);
    FUN_10879cf94(uVar8);
    pppuVar9 = &ppuStack_350;
    func_0x000107c28824(pppuVar9,auStack_908,uVar8);
    func_0x000107c278b8(auStack_920,"media_type");
    pppuVar14 = (undefined ***)(ulong)*(uint *)((long)param_3 + 0x15c);
    FUN_1087b14f8();
    pppuVar5 = pppuVar9;
    func_0x000107c28824(pppuVar9,auStack_920);
    func_0x000107c2884c(appuStack_8f0,pppuVar5);
    param_3 = appuStack_8f0;
    (*(code *)(*pppuVar16)[10])(pppuVar16);
    func_0x000107c2882c(appuStack_8f0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_920);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_908);
    func_0x000107c2882c(&ppuStack_350);
    ppuStack_350 = (undefined **)0x700000000;
LAB_1087cf668:
    auStack_348[0] = auStack_348[0] & 0xffffffffffffff00;
    func_0x0001087d035c();
    pppuVar5 = param_3;
  }
  else {
    func_0x000107c27994(appuStack_8c8,param_3);
    ppuStack_8b0 = param_3[3];
    ppuVar12 = pppuVar24[2];
    func_0x0001087d0384();
    (*extraout_x8_00)();
    uStack_8a0 = 0x100000000;
    uStack_898 = *(undefined4 *)(param_3 + 0x140);
    ppuStack_890 = param_3[0x13f];
    uStack_888 = *(undefined4 *)((long)param_3 + 0xa04);
    uStack_884 = 1;
    ppuStack_8a8 = ppuVar12;
    func_0x0001087d0460();
    FUN_10886024c();
    ppuVar4 = pppuStack_b08[6];
    func_0x0001087d0384();
    (*extraout_x8_01)();
    ppuVar23 = pppuStack_b08[0xe];
    func_0x0001087d0384();
    (*extraout_x8_02)();
    ppuVar13 = *pppuStack_b00;
    pppuVar5 = param_3 + 4;
    FUN_10869a500();
    ppuVar6 = pppuStack_b08[0x1f];
    ppuVar12 = ppuVar13;
    func_0x0001087d0384();
    (*extraout_x8_03)();
    ppuVar7 = pppuStack_b08[0x1f];
    ppuStack_88 = ppuVar6;
    ppuStack_80 = ppuVar12;
    (**(code **)(*ppuVar7 + 0x18))();
    uStack_90 = SUB84(ppuVar12,0);
    ppuStack_350 = ppuVar4;
    ppuStack_98 = ppuVar7;
    func_0x000107c27994(auStack_348,param_3 + 0x23);
    FUN_10879c838(auStack_330,param_3 + 0x23);
    auStack_310[0] = *(uint *)(param_3 + 0x2b);
    func_0x000104be0ccc(auStack_308,param_3 + 0x27);
    uStack_2e8 = *(undefined4 *)((long)param_3 + 0x15c);
    func_0x000107c27994(auStack_2e0,param_3 + 4);
    func_0x000107c278b8(auStack_2c8,&DAT_10f4bdfe8);
    ppuVar12 = pppuStack_b08[2];
    ppuStack_2b0 = ppuVar23;
    func_0x0001087d0384();
    (*extraout_x8_04)();
    uStack_2a0 = *(undefined4 *)(param_3 + 0x26);
    uStack_29c = *(undefined4 *)(param_3 + 100);
    ppuStack_2a8 = ppuVar12;
    FUN_10867be90(auStack_298,param_3 + 0x65);
    uStack_280 = 0;
    pppuStack_278 = pppuVar5;
    uStack_270 = (char)ppuVar13;
    func_0x000104be0ccc(auStack_268,param_3 + 0x6b);
    func_0x000107c27d7c(&uStack_380,&ppuStack_88,auStack_78);
    puVar1 = puStack_b10;
    puVar25 = puStack_b10 + 4;
    puStack_b10[1] = uStack_378;
    *puStack_b10 = uStack_380;
    uStack_238 = uStack_370;
    uStack_370 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_230 = 1;
    func_0x000107c27d7c(&uStack_3a0,&ppuStack_98,auStack_8c);
    puVar1[5] = uStack_398;
    *puVar25 = uStack_3a0;
    uStack_218 = uStack_390;
    uStack_390 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_210 = 1;
    uStack_208 = CONCAT71(uStack_208._1_7_,*(undefined1 *)(param_3 + 0x68));
    func_0x000107c279d4(auStack_200,param_3 + 0x2e);
    FUN_108656428(auStack_1e0,param_3 + 0x94);
    uStack_118 = *(undefined1 *)(param_3 + 0x6f);
    if (*(char *)(param_3 + 0x81) == '\x01') {
      FUN_108691254(auStack_110,param_3 + 0x7c);
    }
    else {
      auStack_110[0] = 0;
      uStack_f8 = 0;
    }
    func_0x000104be0ccc(auStack_f0,param_3 + 0x90);
    if (*(char *)(param_3 + 0x81) != '\x01') {
      ppuStack_d0 = (undefined **)((ulong)ppuStack_d0 & 0xffffffffffffff00);
      ppuStack_c0 = (undefined **)((ulong)ppuStack_c0 & 0xffffffffffffff00);
    }
    else {
      ppuStack_d0 = param_3[0x7f];
      ppuStack_c0 = param_3[0x80];
    }
    uStack_c8 = *(char *)(param_3 + 0x81) == '\x01';
    uStack_b8 = uStack_c8;
    func_0x000107c27914(&uStack_3a0);
    func_0x0001087d03d8();
    func_0x0001087d0460();
    FUN_10886830c();
    param_3[0xcb] = ppuVar23;
    *(undefined1 *)(param_3 + 0xcc) = 1;
    param_3[0xc9] = ppuVar4;
    *(undefined1 *)(param_3 + 0xca) = 1;
    param_3[0x113] = (undefined **)pppuVar5;
    *(char *)(param_3 + 0x114) = (char)ppuVar13;
    func_0x000107c27994(&uStack_380,puStack_b10);
    func_0x000107c27994(auStack_368,puVar25);
    pppuVar5 = pppuStack_b08;
    if (*(char *)(param_3 + 0x11b) == '\x01') {
      func_0x0001087be820(param_3 + 0x115,&uStack_380);
    }
    else {
      FUN_1086ac608(param_3 + 0x115,&uStack_380);
    }
    FUN_10866434c(&uStack_380);
    func_0x000108788648(&ppuStack_350);
    FUN_1087cfa9c(&ppuStack_350,pppuVar5,param_3 + 4);
    func_0x0001087d03a4();
    func_0x0001087d0434();
    FUN_1087cfd28(pppuVar5,param_3 + 4,&ppuStack_620);
    pppuVar21 = pppuStack_b00;
    pppuVar20 = pppuStack_b08;
    pppuVar9 = (undefined ***)param_3[0x17];
    for (pppuVar5 = (undefined ***)param_3[0x16]; pppuVar5 != pppuVar9; pppuVar5 = pppuVar5 + 0xb) {
      func_0x000107c27994(&ppuStack_350,pppuVar5);
      ppuStack_338 = param_3[0xc9];
      func_0x000107c27994(auStack_330,pppuVar5 + 3);
      uStack_318 = *(undefined4 *)(pppuVar5 + 6);
      func_0x000107c279a0(auStack_310,pppuVar5 + 7);
      FUN_1088687e0(*pppuVar21,&ppuStack_350);
      FUN_10879dd24(&ppuStack_350);
    }
    pppuVar16 = (undefined ***)param_3[0x1a];
    for (pppuVar18 = (undefined ***)param_3[0x19]; pppuVar18 != pppuVar16; pppuVar18 = pppuVar18 + 3
        ) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&ppuStack_350,pppuVar18);
      ppuStack_338 = param_3[0xc9];
      FUN_10886888c(*pppuVar21,&ppuStack_350);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_350);
    }
    uVar2 = param_3[0x1c] == param_3[0x1d];
    if (!(bool)uVar2) {
      ppuVar12 = &PTR_PTR_113280a08;
      if (param_3[0xa8] != (undefined **)0x0) {
        ppuVar12 = param_3[0xa8];
      }
      ppuVar4 = &PTR_PTR_11326cb58;
      if ((undefined **)ppuVar12[3] != (undefined **)0x0) {
        ppuVar4 = (undefined **)ppuVar12[3];
      }
      func_0x000107c29ee0(&uStack_380,ppuVar4);
      pppuVar18 = pppuStack_b00;
      pppuVar20 = pppuStack_b08;
      pppuVar9 = (undefined ***)param_3[0x1d];
      for (pppuVar16 = (undefined ***)param_3[0x1c]; uVar2 = pppuVar16 == pppuVar9, !(bool)uVar2;
          pppuVar16 = (undefined ***)((long)pppuVar16 + 4)) {
        func_0x000107c27994(&ppuStack_350,&uStack_380);
        ppuStack_338 = param_3[0xc9];
        auStack_330[0] = *(uint *)pppuVar16;
        FUN_108868930(*pppuVar18,&ppuStack_350);
        func_0x0001087d03d0();
      }
      func_0x0001087d03d8();
    }
    FUN_1087cfde4(pppuVar20,param_3 + 4);
    FUN_10879c8f4(&ppuStack_350,appuStack_8c8,pppuStack_b00);
    pppuVar24 = pppuStack_b08;
    (**(code **)(*pppuStack_b08[0x1b] + 0x68))(pppuStack_b08[0x1b],param_3 + 4,&ppuStack_350);
    FUN_10879df18(&ppuStack_350);
    func_0x000107c27914(appuStack_8c8);
LAB_1087cf630:
    uVar22 = (uint)pppuVar24;
    FUN_10867bc80(auStack_ad0,&ppuStack_620);
    pppuVar14 = &ppuStack_470;
    FUN_1087cff9c();
    func_0x000107c288dc(auStack_ad0);
    if (uVar22 != 0) {
      ppuStack_350 = (undefined **)((ulong)uVar22 << 0x20);
      goto LAB_1087cf668;
    }
    func_0x000107c31428(auStack_3e0);
    func_0x0001087d035c();
    ppuStack_350 = (undefined **)0x0;
    auStack_348[0] = auStack_348[0] & 0xffffffffffffff00;
    pppuVar5 = param_3;
  }
  func_0x0001087d03e0();
  func_0x0001087a3420(&ppuStack_350);
  func_0x000107c288dc(&ppuStack_620);
LAB_1087cf69c:
  func_0x0001086aaef4(&ppuStack_470);
  puVar10 = auStack_3e0;
  func_0x000107c31424();
  while( true ) {
    func_0x0001087d0448();
    func_0x0001087d0390(auStack_78[0]);
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    if ((int)pppuVar5 == 0) break;
    func_0x000107c288dc(&ppuStack_620);
    func_0x0001086aaef4(&ppuStack_470);
    func_0x000107c31424(auStack_3e0);
    ___cxa_begin_catch(puVar10);
    puVar10 = auStack_ae8;
    func_0x0001053360b0();
    ___cxa_end_catch();
  }
  puVar11 = puVar10;
  func_0x0001087d03b0();
  pcStack_b18 = FUN_1087cfa9c;
  if ((long)pppuVar14[4] - (long)pppuVar14[3] == 0x18) {
    pppuStack_b50 = pppuVar21;
    pppuStack_b48 = pppuVar20;
    pppuStack_b40 = pppuVar18;
    pppuStack_b38 = pppuVar9;
    pppuStack_b30 = pppuVar16;
    puStack_b28 = puVar10;
    puStack_b20 = &stack0xfffffffffffffff0;
    func_0x000107c27994(auStack_b68,pppuVar14[0xf]);
    ppuStack_be0 = &PTR_DAT_110a96180;
    uStack_bd8 = 0;
    uStack_bc8 = 0;
    uStack_bd0 = 0;
    uStack_bb8 = 0;
    uStack_bc0 = 0;
    uStack_ba8 = 0;
    uStack_bb0 = 0;
    uStack_b98 = 0;
    uStack_ba0 = 0;
    uStack_b88 = 0;
    uStack_b90 = 0;
    uStack_b78 = 0;
    uStack_b80 = 0;
    ppuStack_b70 = (undefined **)0x0;
    func_0x000107c29ee4(auStack_da8,pppuVar5 + 0x12);
    FUN_1086ec2b0(&ppuStack_be0);
    func_0x000107c287d0();
    func_0x0001087d042c();
    ppuStack_b70 = pppuVar14[199];
    FUN_108653db8(&ppuStack_be0);
    func_0x00010890d3ac();
    if ((long)pppuVar14[4] - (long)pppuVar14[3] == 0x18) {
      func_0x000107c29ee4(auStack_da8,pppuVar14[0xf]);
      FUN_108667a24(&ppuStack_be0);
      FUN_1086cf28c();
      FUN_1086c1dc8();
      func_0x000107c287d0();
      func_0x0001087d042c();
    }
    FUN_10879c838(auStack_c00,pppuVar14 + 0x1f);
    ppuVar12 = pppuVar5[0xc];
    func_0x0001087d0384();
    (*extraout_x8_05)();
    func_0x000107c27994(auStack_da8,auStack_b68);
    uStack_d88 = 0;
    uStack_d80 = 0;
    ppuStack_d78 = pppuVar14[199];
    uStack_d70 = 1;
    ppuStack_d68 = pppuVar14[0xc5];
    uStack_d60 = 1;
    ppuStack_d90 = ppuVar12;
    func_0x000107c28974(auStack_d58,&ppuStack_be0);
    func_0x000107c278b8(auStack_ce0,&DAT_10f4bdfe8);
    ppuStack_cc8 = pppuVar14[0xc4];
    uStack_cc0 = 0;
    func_0x000107c28aa0(auStack_cb8,auStack_c00);
    uStack_c98 = 0;
    uStack_c94 = 0;
    bStack_c88 = *(byte *)(pppuVar14 + 0x110);
    ppuStack_c90 = pppuVar14[0x10f];
    uStack_c80 = (uint)bStack_c88;
    uStack_c78 = 0;
    uStack_c70 = 0;
    uStack_c68 = 0;
    uStack_c64 = 0;
    uStack_c60 = 0;
    uStack_c58 = 0;
    uStack_c40 = 0;
    uStack_c38 = 0;
    uStack_c34 = 0;
    uStack_c30 = 0;
    uStack_c2c = 0;
    uStack_c28 = 0;
    uStack_c20 = 0;
    uStack_c08 = 0;
    bStack_c7c = bStack_c88;
    func_0x0001087d0384(pppuVar5[4]);
    (*extraout_x8_06)();
    func_0x000108664bf8(puVar11,auStack_da8);
    func_0x000107c288e0(auStack_da8);
    func_0x000107c28754(auStack_c00);
    func_0x000107c2a5a4(&ppuStack_be0);
    func_0x000107c27914(auStack_b68);
  }
  else {
    *puVar11 = 0;
    puVar11[0x1a8] = 0;
  }
  return;
}



/* Entry: 1087cfa9c; end: 1087cfd27;  */

void FUN_1087cfa9c(undefined1 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined1 auStack_298 [24];
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined1 uStack_270;
  undefined8 uStack_268;
  undefined1 uStack_260;
  undefined8 uStack_258;
  undefined1 uStack_250;
  undefined1 auStack_248 [120];
  undefined1 auStack_1d0 [24];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [32];
  undefined1 uStack_188;
  undefined1 uStack_184;
  undefined8 uStack_180;
  byte bStack_178;
  uint uStack_170;
  byte bStack_16c;
  undefined1 uStack_168;
  undefined1 uStack_160;
  undefined1 uStack_158;
  undefined1 uStack_154;
  undefined1 uStack_150;
  undefined1 uStack_148;
  undefined1 uStack_130;
  undefined1 uStack_128;
  undefined1 uStack_124;
  undefined1 uStack_120;
  undefined1 uStack_11c;
  undefined1 uStack_118;
  undefined1 uStack_110;
  undefined1 uStack_f8;
  undefined1 auStack_f0 [32];
  undefined **ppuStack_d0;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  if (*(long *)(param_3 + 0x20) - *(long *)(param_3 + 0x18) == 0x18) {
    func_0x000107c27994(auStack_58,*(undefined8 *)(param_3 + 0x78));
    ppuStack_d0 = &PTR_DAT_110a96180;
    uStack_c8 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = 0;
    func_0x000107c29ee4(auStack_298,param_2 + 0x90);
    FUN_1086ec2b0(&ppuStack_d0);
    func_0x000107c287d0();
    func_0x0001087d042c();
    uStack_60 = *(undefined8 *)(param_3 + 0x638);
    FUN_108653db8(&ppuStack_d0);
    func_0x00010890d3ac();
    if (*(long *)(param_3 + 0x20) - *(long *)(param_3 + 0x18) == 0x18) {
      func_0x000107c29ee4(auStack_298,*(undefined8 *)(param_3 + 0x78));
      FUN_108667a24(&ppuStack_d0);
      FUN_1086cf28c();
      FUN_1086c1dc8();
      func_0x000107c287d0();
      func_0x0001087d042c();
    }
    FUN_10879c838(auStack_f0,param_3 + 0xf8);
    uVar1 = *(undefined8 *)(param_2 + 0x60);
    func_0x0001087d0384();
    (*extraout_x8)();
    func_0x000107c27994(auStack_298,auStack_58);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = *(undefined8 *)(param_3 + 0x638);
    uStack_260 = 1;
    uStack_258 = *(undefined8 *)(param_3 + 0x628);
    uStack_250 = 1;
    uStack_280 = uVar1;
    func_0x000107c28974(auStack_248,&ppuStack_d0);
    func_0x000107c278b8(auStack_1d0,&DAT_10f4bdfe8);
    uStack_1b8 = *(undefined8 *)(param_3 + 0x620);
    uStack_1b0 = 0;
    func_0x000107c28aa0(auStack_1a8,auStack_f0);
    uStack_188 = 0;
    uStack_184 = 0;
    bStack_178 = *(byte *)(param_3 + 0x880);
    uStack_180 = *(undefined8 *)(param_3 + 0x878);
    uStack_170 = (uint)bStack_178;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    bStack_16c = bStack_178;
    func_0x0001087d0384(*(undefined8 *)(param_2 + 0x20));
    (*extraout_x8_00)();
    func_0x000108664bf8(param_1,auStack_298);
    func_0x000107c288e0(auStack_298);
    func_0x000107c28754(auStack_f0);
    func_0x000107c2a5a4(&ppuStack_d0);
    func_0x000107c27914(auStack_58);
  }
  else {
    *param_1 = 0;
    param_1[0x1a8] = 0;
  }
  return;
}



/* Entry: 1087cfd28; end: 1087cfde3;  */

void FUN_1087cfd28(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  ulong unaff_x24;
  ulong uVar5;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  ulong uStack_70;
  char cStack_68;
  
  lVar2 = *(long *)(param_2 + 0x80);
  for (lVar4 = *(long *)(param_2 + 0x78); lVar4 != lVar2; lVar4 = lVar4 + 0x18) {
    cVar3 = *(char *)(param_3 + 0x1a8);
    uVar5 = *(ulong *)(param_3 + 0x18);
    func_0x000107c27994(auStack_90,lVar4);
    uVar1 = uVar5 >> 8;
    if (cVar3 == '\0') {
      uVar1 = unaff_x24;
    }
    uStack_78 = *(undefined8 *)(param_2 + 0x628);
    uVar5 = uVar5 & 0xff;
    if (cVar3 == '\0') {
      uVar5 = 0;
    }
    uStack_70 = uVar5 | uVar1 << 8;
    cStack_68 = cVar3;
    FUN_108868740(*(undefined8 *)(param_1 + 0x20),auStack_90);
    func_0x000107c27914(auStack_90);
    unaff_x24 = uVar1;
  }
  return;
}



/* Entry: 1087cfde4; end: 1087cff9b;  */

undefined8 * FUN_1087cfde4(long param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  code *extraout_x8_03;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined1 auStack_fc0 [24];
  undefined1 uStack_fa8;
  undefined1 auStack_fa0 [912];
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 auStack_bf8 [118];
  undefined8 uStack_848;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined1 auStack_7d8 [912];
  undefined1 auStack_448 [24];
  undefined8 auStack_430 [118];
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001087d0410();
  uStack_48 = extraout_x8;
  func_0x000107c27994(auStack_448);
  func_0x0001087ad084(auStack_7d8,param_2 + 0xf8);
  puVar10 = auStack_7d8;
  lVar9 = 0;
  FUN_10864094c(auStack_430,auStack_448);
  func_0x00010863f788(auStack_7d8);
  func_0x000107c27914(auStack_448);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  func_0x0001087d0384();
  (*extraout_x8_00)();
  puVar11 = *(undefined8 **)(param_1 + 0x40);
  uStack_7e8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_7f0 = *(undefined8 *)(param_1 + 0xa8);
  if (*(long *)(param_1 + 0xb0) != 0) {
    plVar15 = (long *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = *plVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  func_0x000107c28150();
  lVar12 = puVar11[2];
  __ZNSt3__15mutex4lockEv(lVar12 + 8);
  lVar13 = *(long *)(lVar12 + 0x70);
  uStack_80 = 0x1087d0328;
  ppuStack_78 = &PTR_DAT_110a71880;
  uStack_68 = uStack_7e8;
  uStack_70 = uStack_7f0;
  uStack_7f0 = 0;
  uStack_7e8 = 0;
  puVar7 = &uStack_80;
  uStack_50 = uVar6;
  func_0x000107c28154(lVar12 + 0x48);
  func_0x0001087d03c0();
  __ZNSt3__15mutex6unlockEv(lVar12 + 8);
  if (lVar13 == 0) {
    uVar6 = *puVar11;
    ppuStack_78 = (undefined **)puVar11[3];
    uStack_80 = puVar11[2];
    if (puVar11[3] != 0) {
      plVar15 = (long *)(puVar11[3] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *plVar15 = *plVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x0001087d0384(uVar6);
    puVar7 = &uStack_80;
    (*extraout_x8_01)();
    func_0x000107c27e74(&uStack_80);
  }
  func_0x000104be36f0(&uStack_7f0);
  puVar11 = auStack_430;
  FUN_108798a4c();
  func_0x0001087d0390(uStack_48);
  if ((bool)in_ZR) {
    return puVar11;
  }
  ___stack_chk_fail();
  func_0x000107c27e74(&uStack_80);
  func_0x000104be36f0(&uStack_7f0);
  puVar11 = auStack_430;
  FUN_108798a4c();
  func_0x0001087d03b0();
  puVar16 = puVar11;
  puVar8 = puVar7;
  func_0x0001087d0410();
  uStack_848 = extraout_x8_02;
  bVar1 = *(byte *)(puVar8 + 0xf9);
  uVar6 = puVar16[2];
  func_0x0001087d0384();
  (*extraout_x8_03)();
  puVar7[0xf8] = uVar6;
  *(undefined1 *)(puVar7 + 0xf9) = 1;
  if ((bVar1 & 1) == 0) {
    iVar5 = (int)puVar7 + 0x20;
    func_0x0001087bb064();
    if (iVar5 == 0) {
      uVar2 = (long)(puVar7[8] - puVar7[7]) / 0x18;
      in_ZR = uVar2 == 2;
      if (uVar2 < 2) {
        in_ZR = 0;
        if (((puVar7[10] == puVar7[0xb]) && (in_ZR = 0, puVar7[0xd] == puVar7[0xe])) &&
           (in_ZR = puVar7[0x10] == puVar7[0x11], (bool)in_ZR)) goto LAB_1087d00dc;
      }
      else {
        auStack_fc0[0] = 0;
        uStack_fa8 = 0;
        FUN_1087a65e4(puVar11 + 4,puVar11 + 0x17,puVar7 + 7,auStack_fc0);
        func_0x000104bee748(auStack_fc0);
      }
    }
    else {
      in_ZR = puVar10[0x1a8] == '\x01';
      if (!(bool)in_ZR) {
LAB_1087d00dc:
        puVar11 = (undefined8 *)0x7;
        goto LAB_1087d01d4;
      }
      in_ZR = 0;
      if (puVar7[0xd6] == puVar7[0xd7]) {
        uVar6 = puVar7[0xc9];
        uVar14 = puVar7[0x13];
        lVar12 = *(long *)(lVar9 + 0x60);
        in_ZR = true;
        if ((lVar12 == *(long *)(lVar9 + 0x68)) ||
           (in_ZR = *(int *)(lVar12 + 0x11c) == 3, !(bool)in_ZR)) {
          plVar15 = (long *)puVar11[0x10];
          func_0x0001087d0420();
          func_0x0001087d0400();
          uStack_c08 = 0;
          uStack_c10 = 0;
          uStack_c00 = 0;
          (**(code **)(*plVar15 + 8))(plVar15,uVar14,auStack_fa0,&uStack_c10);
        }
        else {
          puVar16 = (undefined8 *)puVar11[0x10];
          func_0x0001087d0420();
          func_0x0001087d0400();
          uStack_c08 = 0;
          uStack_c10 = 0;
          uStack_c00 = 0;
          (**(code **)*puVar16)(puVar16,uVar14,lVar12,1,auStack_fa0,&uStack_c10);
        }
        func_0x000104be1274(&uStack_c10);
        func_0x00010867b9fc(auStack_fa0);
        func_0x000107c288e0(auStack_bf8);
        puVar16 = puVar7 + 0x23;
        FUN_1088464c0(puVar16);
        (**(code **)(*(long *)puVar11[0x17] + 0x48))
                  ((long *)puVar11[0x17],uVar14,uVar6,puVar16,2,puVar7[200] * 1000);
      }
    }
    func_0x000107c27994(&uStack_c10,puVar7 + 4);
    func_0x0001087ad084(auStack_fa0,puVar7 + 0x23);
    FUN_10864094c(auStack_bf8,&uStack_c10,0,auStack_fa0);
    func_0x00010863f788(auStack_fa0);
    func_0x000107c27914(&uStack_c10);
    (**(code **)(*(long *)puVar11[10] + 0x18))((long *)puVar11[10],auStack_bf8);
    (**(code **)(*(long *)puVar11[0x1d] + 0x18))((long *)puVar11[0x1d],puVar7 + 4);
    FUN_108798a4c(auStack_bf8);
  }
  puVar11 = (undefined8 *)0x0;
LAB_1087d01d4:
  func_0x0001087d0390(uStack_848);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000104be1274(&uStack_c10);
    func_0x00010867b9fc(auStack_fa0);
    puVar11 = auStack_bf8;
    func_0x000107c288e0();
    func_0x0001087d03b0();
    *puVar11 = &PTR_FUN_110a71850;
    func_0x000107c289ac(puVar11 + 0x1f);
    func_0x000107c29954(puVar11 + 0x1d);
    func_0x000107c29948(puVar11 + 0x1b);
    func_0x000107c288a4(puVar11 + 0x19);
    func_0x000107c28ab4(puVar11 + 0x17);
    func_0x000104be36f0(puVar11 + 0x15);
    func_0x000107c27914(puVar11 + 0x12);
    func_0x000107c28ab8(puVar11 + 0x10);
    func_0x000107c29194(puVar11 + 0xe);
    func_0x000107c29194(puVar11 + 0xc);
    func_0x000107c29958(puVar11 + 10);
    func_0x000107c2814c(puVar11 + 8);
    func_0x000107c29194(puVar11 + 6);
    func_0x000107c28808(puVar11 + 4);
    func_0x000107c28800(puVar11 + 2);
    return puVar11;
  }
  return puVar11;
}



/* Entry: 1087cff9c; end: 1087d0267;  */

undefined8 * FUN_1087cff9c(long param_1,long param_2,long param_3,long param_4)

{
  byte bVar1;
  ulong uVar2;
  undefined1 in_ZR;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined1 auStack_7d0 [24];
  undefined1 uStack_7b8;
  undefined1 auStack_7b0 [912];
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 auStack_408 [118];
  undefined8 uStack_58;
  
  lVar4 = param_1;
  lVar6 = param_2;
  func_0x0001087d0410();
  bVar1 = *(byte *)(lVar6 + 0x7c8);
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  uStack_58 = extraout_x8;
  func_0x0001087d0384();
  (*extraout_x8_00)();
  *(undefined8 *)(param_2 + 0x7c0) = uVar5;
  *(undefined1 *)(param_2 + 0x7c8) = 1;
  if ((bVar1 & 1) == 0) {
    iVar3 = (int)param_2 + 0x20;
    func_0x0001087bb064();
    if (iVar3 == 0) {
      uVar2 = (*(long *)(param_2 + 0x40) - *(long *)(param_2 + 0x38)) / 0x18;
      in_ZR = uVar2 == 2;
      if (uVar2 < 2) {
        in_ZR = 0;
        if (((*(long *)(param_2 + 0x50) == *(long *)(param_2 + 0x58)) &&
            (in_ZR = 0, *(long *)(param_2 + 0x68) == *(long *)(param_2 + 0x70))) &&
           (in_ZR = *(long *)(param_2 + 0x80) == *(long *)(param_2 + 0x88), (bool)in_ZR))
        goto LAB_1087d00dc;
      }
      else {
        auStack_7d0[0] = 0;
        uStack_7b8 = 0;
        FUN_1087a65e4(param_1 + 0x20,param_1 + 0xb8,(long *)(param_2 + 0x38),auStack_7d0);
        func_0x000104bee748(auStack_7d0);
      }
    }
    else {
      in_ZR = *(char *)(param_4 + 0x1a8) == '\x01';
      if (!(bool)in_ZR) {
LAB_1087d00dc:
        puVar9 = (undefined8 *)0x7;
        goto LAB_1087d01d4;
      }
      in_ZR = 0;
      if (*(long *)(param_2 + 0x6b0) == *(long *)(param_2 + 0x6b8)) {
        uVar5 = *(undefined8 *)(param_2 + 0x648);
        uVar7 = *(undefined8 *)(param_2 + 0x98);
        lVar4 = *(long *)(param_3 + 0x60);
        in_ZR = true;
        if ((lVar4 == *(long *)(param_3 + 0x68)) ||
           (in_ZR = *(int *)(lVar4 + 0x11c) == 3, !(bool)in_ZR)) {
          plVar8 = *(long **)(param_1 + 0x80);
          func_0x0001087d0420();
          func_0x0001087d0400();
          uStack_418 = 0;
          uStack_420 = 0;
          uStack_410 = 0;
          (**(code **)(*plVar8 + 8))(plVar8,uVar7,auStack_7b0,&uStack_420);
        }
        else {
          puVar9 = *(undefined8 **)(param_1 + 0x80);
          func_0x0001087d0420();
          func_0x0001087d0400();
          uStack_418 = 0;
          uStack_420 = 0;
          uStack_410 = 0;
          (**(code **)*puVar9)(puVar9,uVar7,lVar4,1,auStack_7b0,&uStack_420);
        }
        func_0x000104be1274(&uStack_420);
        func_0x00010867b9fc(auStack_7b0);
        func_0x000107c288e0(auStack_408);
        lVar4 = param_2 + 0x118;
        FUN_1088464c0(lVar4);
        (**(code **)(**(long **)(param_1 + 0xb8) + 0x48))
                  (*(long **)(param_1 + 0xb8),uVar7,uVar5,lVar4,2,*(long *)(param_2 + 0x640) * 1000)
        ;
      }
    }
    func_0x000107c27994(&uStack_420,param_2 + 0x20);
    func_0x0001087ad084(auStack_7b0,param_2 + 0x118);
    FUN_10864094c(auStack_408,&uStack_420,0,auStack_7b0);
    func_0x00010863f788(auStack_7b0);
    func_0x000107c27914(&uStack_420);
    (**(code **)(**(long **)(param_1 + 0x50) + 0x18))(*(long **)(param_1 + 0x50),auStack_408);
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x18))(*(long **)(param_1 + 0xe8),param_2 + 0x20);
    FUN_108798a4c(auStack_408);
  }
  puVar9 = (undefined8 *)0x0;
LAB_1087d01d4:
  func_0x0001087d0390(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000104be1274(&uStack_420);
    func_0x00010867b9fc(auStack_7b0);
    puVar9 = auStack_408;
    func_0x000107c288e0();
    func_0x0001087d03b0();
    *puVar9 = &PTR_FUN_110a71850;
    func_0x000107c289ac(puVar9 + 0x1f);
    func_0x000107c29954(puVar9 + 0x1d);
    func_0x000107c29948(puVar9 + 0x1b);
    func_0x000107c288a4(puVar9 + 0x19);
    func_0x000107c28ab4(puVar9 + 0x17);
    func_0x000104be36f0(puVar9 + 0x15);
    func_0x000107c27914(puVar9 + 0x12);
    func_0x000107c28ab8(puVar9 + 0x10);
    func_0x000107c29194(puVar9 + 0xe);
    func_0x000107c29194(puVar9 + 0xc);
    func_0x000107c29958(puVar9 + 10);
    func_0x000107c2814c(puVar9 + 8);
    func_0x000107c29194(puVar9 + 6);
    func_0x000107c28808(puVar9 + 4);
    func_0x000107c28800(puVar9 + 2);
    return puVar9;
  }
  return puVar9;
}



/* Entry: 1087d0268; end: 1087d026b;  */

undefined8 * FUN_1087d0268(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71850;
  func_0x000107c289ac(param_1 + 0x1f);
  func_0x000107c29954(param_1 + 0x1d);
  func_0x000107c29948(param_1 + 0x1b);
  func_0x000107c288a4(param_1 + 0x19);
  func_0x000107c28ab4(param_1 + 0x17);
  func_0x000104be36f0(param_1 + 0x15);
  func_0x000107c27914(param_1 + 0x12);
  func_0x000107c28ab8(param_1 + 0x10);
  func_0x000107c29194(param_1 + 0xe);
  func_0x000107c29194(param_1 + 0xc);
  func_0x000107c29958(param_1 + 10);
  func_0x000107c2814c(param_1 + 8);
  func_0x000107c29194(param_1 + 6);
  func_0x000107c28808(param_1 + 4);
  func_0x000107c28800(param_1 + 2);
  return param_1;
}



/* Entry: 1087d026c; end: 1087d027f;  */

void FUN_1087d026c(void)

{
  FUN_1087d0280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087d0280; end: 1087d0327;  */

undefined8 * FUN_1087d0280(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71850;
  func_0x000107c289ac(param_1 + 0x1f);
  func_0x000107c29954(param_1 + 0x1d);
  func_0x000107c29948(param_1 + 0x1b);
  func_0x000107c288a4(param_1 + 0x19);
  func_0x000107c28ab4(param_1 + 0x17);
  func_0x000104be36f0(param_1 + 0x15);
  func_0x000107c27914(param_1 + 0x12);
  func_0x000107c28ab8(param_1 + 0x10);
  func_0x000107c29194(param_1 + 0xe);
  func_0x000107c29194(param_1 + 0xc);
  func_0x000107c29958(param_1 + 10);
  func_0x000107c2814c(param_1 + 8);
  func_0x000107c29194(param_1 + 6);
  func_0x000107c28808(param_1 + 4);
  func_0x000107c28800(param_1 + 2);
  return param_1;
}



/* Entry: 1087d0328; end: 1087d046b;  */

void FUN_1087d0328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001087d0334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))();
  return;
}



/* Entry: 1087d046c; end: 1087d04cf;  */

void FUN_1087d046c(long param_1)

{
  undefined8 *puVar1;
  long lStack_48;
  undefined8 *puStack_40;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  uStack_28 = *puVar1;
  *puVar1 = 0;
  func_0x000107c289cc(auStack_38);
  lStack_48 = param_1;
  puStack_40 = puVar1;
  func_0x000107c289d8(&lStack_48,auStack_38);
  func_0x000107c289dc(auStack_38);
  func_0x000107c28850(&uStack_28);
  func_0x000107c27f98(&uStack_28);
  return;
}



/* Entry: 1087d04d0; end: 1087d1f93;  */

void FUN_1087d04d0(undefined8 param_1,long param_2,undefined **param_3,long *param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined1 uVar6;
  long lVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  long *plVar14;
  ulong uVar15;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  uint extraout_w8_04;
  uint extraout_w8_05;
  uint extraout_w8_06;
  uint extraout_w8_07;
  uint extraout_w8_08;
  uint extraout_w8_09;
  undefined8 extraout_x8;
  undefined *puVar16;
  long extraout_x8_00;
  long lVar17;
  long extraout_x8_01;
  undefined8 *puVar18;
  undefined **ppuVar19;
  undefined **extraout_x8_02;
  undefined **extraout_x8_03;
  code *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined **extraout_x8_06;
  undefined **extraout_x8_07;
  code *extraout_x8_08;
  undefined8 *extraout_x8_09;
  long *extraout_x8_10;
  long *extraout_x8_11;
  long *extraout_x8_12;
  code *extraout_x8_13;
  long *extraout_x8_14;
  long *extraout_x8_15;
  long *extraout_x8_16;
  ulong extraout_x8_17;
  long *extraout_x8_18;
  long *extraout_x8_19;
  long *extraout_x8_20;
  long extraout_x8_21;
  undefined8 *extraout_x8_22;
  long *extraout_x8_23;
  long *extraout_x8_24;
  long *extraout_x8_25;
  uint *extraout_x8_26;
  uint *extraout_x8_27;
  long lVar20;
  uint *puVar21;
  undefined8 extraout_x8_28;
  long *extraout_x8_29;
  long *extraout_x8_30;
  long extraout_x8_31;
  undefined8 *extraout_x8_32;
  long *extraout_x8_33;
  long *extraout_x8_34;
  long extraout_x8_35;
  undefined8 extraout_x8_36;
  undefined1 extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  uint extraout_w9_02;
  uint extraout_w9_03;
  uint extraout_w9_04;
  uint extraout_w9_05;
  uint extraout_w9_06;
  uint uVar22;
  uint extraout_w9_07;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  uint *extraout_x9_02;
  uint *extraout_x9_03;
  undefined8 extraout_x9_04;
  uint *puVar23;
  undefined8 extraout_x9_05;
  undefined *puVar24;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  byte bVar25;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  uint extraout_w10_14;
  int extraout_w10_15;
  uint extraout_w10_16;
  uint extraout_w10_17;
  int extraout_w10_18;
  uint extraout_w10_19;
  uint extraout_w10_20;
  int extraout_w10_21;
  uint extraout_w10_22;
  int extraout_w10_23;
  uint extraout_w10_24;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  ulong extraout_x10_03;
  ulong extraout_x10_04;
  ulong extraout_x10_05;
  ulong extraout_x10_06;
  uint *puVar26;
  uint *extraout_x10_07;
  undefined8 extraout_x10_08;
  long extraout_x10_09;
  char cVar27;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  ulong extraout_x11_03;
  undefined8 extraout_x11_04;
  undefined8 uVar28;
  undefined8 extraout_x11_05;
  ulong extraout_x11_06;
  ulong extraout_x11_07;
  char cVar29;
  undefined **ppuVar30;
  undefined **ppuVar31;
  uint *puVar32;
  long lVar33;
  undefined8 *puVar34;
  undefined **ppuVar35;
  undefined *puVar36;
  ulong uVar37;
  ulong uVar38;
  long lVar39;
  ulong uVar40;
  long lVar41;
  long *plVar42;
  long lVar43;
  undefined8 uVar44;
  long *plStack_160;
  undefined8 *puStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  long *plStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 uStack_c8;
  undefined1 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_94;
  undefined1 uStack_90;
  undefined1 uStack_78;
  undefined8 uStack_70;
  
  ppuVar31 = param_3;
  func_0x0001087d8450();
  puVar12 = (undefined8 *)0x1370;
  uStack_70 = extraout_x8;
  __Znwm();
  *puVar12 = FUN_1087d6c60;
  puVar12[1] = FUN_1087d8034;
  puVar12[0x267] = param_3;
  puVar12[0x266] = param_2;
  func_0x0001087a93b4(puVar12 + 2);
  ppuVar13 = (undefined **)(puVar12 + 2);
  FUN_1087a9334(param_1);
  uVar11 = param_3[0x61] == param_3[0x62];
  if ((bool)uVar11) {
    puStack_e0 = (undefined *)0x8;
    puStack_d8 = (undefined *)((ulong)puStack_d8 & 0xffffffffffffff00);
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    func_0x0001087d8408();
    func_0x0001087d8848();
    goto LAB_1087d1b8c;
  }
  func_0x0001087d898c();
  ppuStack_138 = (undefined **)(puVar12 + 4);
  ppuVar13[1] = (undefined *)0x0;
  ppuVar13[2] = (undefined *)0x0;
  *ppuVar13 = (undefined *)&PTR_FUN_110a71be0;
  ppuVar35 = ppuVar13 + 3;
  *ppuVar35 = (undefined *)&PTR_DAT_110a71cb8;
  ppuVar31 = ppuVar13 + 4;
  *ppuVar31 = (undefined *)0x0;
  puStack_e0 = (undefined *)0x0;
  func_0x000107c27f9c(&puStack_e0);
  ppuVar13[5] = (undefined *)0x0;
  puStack_e0 = (undefined *)0x0;
  func_0x000107c27f98(&puStack_e0);
  FUN_1087d4e18(&puStack_e0);
  puVar24 = puStack_d8;
  puVar36 = puStack_e0;
  uStack_120 = 0;
  uStack_118 = 0;
  puStack_e0 = (undefined *)0x0;
  puStack_d8 = (undefined *)0x0;
  uStack_f8 = (ulong)puVar24;
  puStack_100 = puVar36;
  func_0x000107c27f98(&uStack_120);
  func_0x000107c27f9c(&uStack_118);
  func_0x000107c27fec(&puStack_e0);
  func_0x000107c288b0(ppuVar31,&puStack_100);
  func_0x000107c2887c(ppuVar13 + 5,(ulong)&puStack_100 | 8);
  func_0x000107c27f98((ulong)&puStack_100 | 8);
  func_0x000107c27f9c(&puStack_100);
  *ppuVar35 = (undefined *)&PTR_FUN_110a71c30;
  puVar12[0x24d] = ppuVar35;
  puVar12[0x24e] = ppuVar13;
  puVar16 = *ppuVar31;
  puVar12[0x25b] = puVar16;
  if (puVar16 != (undefined *)0x0) {
    do {
      func_0x0001087d81cc();
    } while (extraout_w10 != 0);
  }
  ppuVar13 = param_3 + 4;
  func_0x0001087d8da0();
  puVar12[5] = puVar24;
  *ppuStack_138 = puVar36;
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001087d8244();
    } while (extraout_w10_00 != 0);
  }
  uVar28 = *(undefined8 *)(param_2 + 0x30);
  puVar12[7] = *(undefined8 *)(param_2 + 0x38);
  puVar12[6] = uVar28;
  if (*(long *)(param_2 + 0x38) != 0) {
    do {
      func_0x0001087d8244();
    } while (extraout_w10_01 != 0);
  }
  FUN_108792860(puVar12 + 8,ppuVar13);
  puVar12[0x143] = puVar12[0x24d];
  puVar12[0x144] = puVar12[0x24e];
  if (puVar12[0x24e] != 0) {
    do {
      func_0x0001087d8244();
    } while (extraout_w10_02 != 0);
  }
  FUN_1087d1f94(ppuStack_138);
  puVar12[0x262] = puVar12[0x25b];
  if (puVar12[0x25b] != 0) {
    do {
      func_0x0001087d81cc();
    } while (extraout_w10_03 != 0);
  }
  func_0x000107c314e0(puVar12 + 0x25c,*(undefined8 *)(param_2 + 0x40),
                      *(long *)(param_2 + 0x50) * 1000000);
  plVar3 = puVar12 + 0x261;
  FUN_1087d2154(plVar3,puVar12 + 0x262,puVar12 + 0x25c);
  plVar42 = puVar12 + 0x264;
  func_0x000107c27f9c(puVar12 + 0x25c);
  func_0x0001087d870c();
  *plVar42 = *plVar3;
  if (*plVar3 != 0) {
    do {
      func_0x0001087d81cc();
    } while (extraout_w10_04 != 0);
  }
  lVar17 = *param_4;
  puVar12[0x263] = lVar17;
  if (lVar17 != 0) {
    do {
      func_0x0001087d81cc();
    } while (extraout_w10_05 != 0);
  }
  func_0x000107c278b8(&puStack_e0,&UNK_10f4bb88c);
  ppuStack_140 = (undefined **)(puVar12 + 0x265);
  FUN_1087d2320(plVar42,puVar12 + 0x263,&puStack_e0);
  plStack_130 = puVar12 + 0x145;
  func_0x0001087d8950();
  func_0x000107c27f9c(puVar12 + 0x263);
  func_0x000107c27f9c(plVar42);
  *plStack_130 = 0;
  puVar12[0x146] = 0;
  puVar12[0x147] = 0;
  FUN_108685044(puVar12 + 0x148,param_3 + 0x23);
  puStack_148 = puVar12 + 0x247;
  puVar4 = (undefined1 *)((long)puVar12 + 0x1365);
  if (*(char *)(param_2 + 0xac) == '\x01') {
    if (*(long *)(param_2 + 0xa0) == 0x7fffffffffffffff) {
      cVar29 = '\x01';
LAB_1087d0824:
      bVar25 = 0;
      *puVar4 = 0;
      cVar27 = cVar29;
    }
    else {
      bVar25 = *(byte *)(param_2 + 0xc0);
      *puVar4 = *(undefined1 *)(param_2 + 0xc1);
      if ((bVar25 & 1) == 0) {
        bVar25 = 0;
      }
      else {
LAB_1087d085c:
        bVar25 = *(byte *)(param_2 + 0xc2);
      }
      cVar27 = '\x01';
    }
  }
  else {
    cVar29 = *(char *)(param_2 + 0xc0);
    if (*(long *)(param_2 + 0xa0) == 0x7fffffffffffffff) goto LAB_1087d0824;
    cVar27 = '\0';
    bVar25 = 0;
    *puVar4 = 0;
    if (cVar29 != '\0') goto LAB_1087d085c;
  }
  *(char *)(puVar12 + 0x26d) = cVar27;
  *(byte *)((long)puVar12 + 0x1366) = bVar25 & 1;
  func_0x0001087d8e58();
  *(undefined1 *)((long)puVar12 + 0x1367) = 0;
  *(undefined4 *)(puVar12 + 0x26c) = 0;
  puVar12[0x236] = param_2;
  puVar12[0x237] = ppuStack_140;
  puVar12[0x238] = extraout_x9;
  puVar12[0x239] = puStack_148;
  *(undefined1 *)(puVar12 + 0x24f) = 0;
  *(undefined1 *)(puVar12 + 0x250) = 0;
  uVar11 = extraout_x8_01 == 0x7fffffffffffffff;
  if (!(bool)uVar11) {
    FUN_1087d24f4(&puStack_e0,puVar12 + 0x236);
    FUN_1087d2778(puVar12 + 0x24f,&puStack_e0);
    func_0x000107c27f9c(&puStack_e0);
  }
  ppuVar5 = (undefined **)(puVar12 + 0x23e);
  plVar42 = (long *)0x12f0;
  lVar17 = *(long *)(param_2 + 0x88);
  lVar20 = *(long *)(param_2 + 0x90);
  puVar12[0x251] = lVar17;
  ppuVar31 = (undefined **)(puVar12 + 0x26c);
  ppuVar35 = (undefined **)((long)puVar12 + 0x1366);
  puVar12[0x252] = lVar20;
  if (lVar20 != 0) {
    plVar14 = (long *)(lVar20 + 8);
    do {
      cVar29 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar9) {
        *plVar14 = *plVar14 + 1;
        cVar29 = ExclusiveMonitorsStatus();
      }
    } while (cVar29 != '\0');
  }
  ppuVar1 = (undefined **)(puVar12 + 0x1b9);
  ppuVar2 = (undefined **)(puVar12 + 0x1d2);
  uVar10 = *(undefined1 *)(param_2 + 0xc0);
  uVar8 = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(puVar12 + 0x214) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined1 *)((long)puVar12 + 0x10a4) = uVar10;
  *(undefined4 *)(puVar12 + 0x215) = uVar8;
  puVar12[0x216] = 0;
  puVar12[0x219] = 0;
  puVar12[0x218] = 0;
  puVar12[0x217] = puVar12 + 0x218;
  puVar12[0x253] = param_2;
  puVar12[0x254] = ppuVar13;
  puVar12[0x255] = param_2;
  puVar12[0x256] = ppuVar13;
  puVar12[0x25f] = puVar12 + 0x253;
  puVar12[599] = ppuVar13;
  puVar12[600] = puVar12 + 0x253;
  puVar12[0x259] = param_2;
  puVar12[0x25a] = ppuVar13;
  puVar12[0x260] = puVar12 + 0x255;
  puVar12[0x25d] = puVar12 + 0x255;
  puVar12[0x20e] = ppuVar31;
  puVar12[0x20f] = param_2;
  puVar12[0x210] = puVar4;
  puVar12[0x211] = ppuVar35;
  puVar12[0x212] = (undefined *)((long)puVar12 + 0x1367);
  puVar12[0x213] = puStack_148;
  puVar12[0x207] = param_2;
  puVar12[0x208] = puVar12 + 0x25f;
  puVar12[0x209] = puVar12 + 599;
  puVar12[0x20a] = puVar12 + 0x259;
  puVar12[0x20b] = puVar12 + 0x260;
  puVar12[0x20c] = puVar12 + 0x25d;
  puVar12[0x20d] = puVar12 + 0x20e;
  puVar12[0x229] = param_2;
  puVar12[0x22a] = ppuVar13;
  puVar12[0x22b] = (undefined *)((long)puVar12 + 0x1367);
  puVar12[0x22c] = param_3;
  puVar12[0x22d] = ppuStack_138;
  ppuVar30 = &PTR___tlv_bootstrap_11340e278;
  if ((*(long *)(param_2 + 0x78) == 0) || (lVar17 == 0)) {
    uVar10 = *(char *)(puVar12 + 0x250) != '\0';
    uVar11 = *(char *)(puVar12 + 0x250) == '\x01';
    if ((bool)uVar11) {
      func_0x0001087d8420();
LAB_1087d0db4:
      func_0x000107c28874(ppuVar1);
      func_0x0001087d8800(ppuVar5);
      func_0x0001087d82d4();
      func_0x000107c28890(ppuVar5);
      *(undefined8 *)(puVar12[0x1bb] + 8) = 2;
      func_0x0001087d8ba4();
      func_0x0001087d8e40(puVar12[0x1bb]);
      ppuVar31 = (undefined **)0x0;
      FUN_1087d5500();
      func_0x0001087d8d30();
      func_0x0001087d8858();
      ppuVar13 = ppuVar1;
      func_0x000107c2889c();
      puVar12[0x1d2] = puVar12[0x21a];
      do {
        func_0x0001087d81cc();
      } while (extraout_w10_11 != 0);
      func_0x0001087d83f4(*ppuVar2);
      if ((extraout_w8_03 >> 1 & 1) == 0) {
        *(undefined1 *)((long)puVar12 + 0x1364) = 5;
        puVar24 = *ppuVar2;
        puVar36 = *ppuVar35;
        if (puVar36 == (undefined *)0x0) {
          func_0x000107c3a5c0();
          puVar36 = *ppuVar13;
        }
        plVar14 = (long *)(puVar24 + 0x10);
        do {
          if (*plVar14 == 0) {
            cVar29 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar9) {
              *plVar14 = 1;
              cVar29 = ExclusiveMonitorsStatus();
            }
            uVar11 = cVar29 == '\0';
            uVar10 = 1;
            uVar22 = 0;
            if ((bool)uVar11) goto LAB_1087d1090;
          }
          else {
            func_0x0001087d8ad0();
            plVar14 = extraout_x8_12;
            uVar22 = extraout_w9_06;
            if ((extraout_x10_05 & 1) != 0) goto LAB_1087d1090;
          }
        } while ((uVar22 >> 1 & 1) == 0);
      }
      ppuVar13 = ppuVar2;
      func_0x000107c28870();
      puVar36 = *ppuVar13;
      puVar12[0x26b] = puVar36;
      func_0x0001087d8b90();
      func_0x0001087d8558(0x10d0);
      if (puVar36 != (undefined *)0x0) goto code_r0x0001087d0e90;
      func_0x0001087d8440();
      do {
        func_0x0001087d81cc();
      } while (extraout_w10_21 != 0);
      func_0x0001087d8394();
      if ((extraout_w8_08 >> 1 & 1) == 0) {
        func_0x0001087d8adc(6);
        puVar36 = *ppuVar1;
        ppuVar35 = (undefined **)*ppuVar35;
        if (ppuVar35 == (undefined **)0x0) {
          func_0x000107c3a5c0();
          ppuVar35 = (undefined **)*ppuVar13;
        }
        func_0x0001087d85a8();
        plVar14 = extraout_x8_29;
        lVar17 = extraout_x9_06;
        while( true ) {
          if (*plVar14 == 0) {
            cVar29 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar9) {
              *plVar14 = lVar17;
              cVar29 = ExclusiveMonitorsStatus();
            }
            uVar11 = cVar29 == '\0';
            uVar37 = (ulong)-(uint)(byte)uVar11;
            uVar22 = 0;
          }
          else {
            func_0x0001087d842c();
            plVar14 = extraout_x8_30;
            lVar17 = extraout_x9_07;
            uVar37 = extraout_x11_06;
            uVar22 = extraout_w10_22;
          }
          plStack_160 = plVar3;
          if ((uVar37 & 1) != 0) break;
          if ((uVar22 >> 1 & 1) != 0) goto LAB_1087d19c8;
        }
        goto LAB_1087d19d8;
      }
LAB_1087d19c8:
      func_0x0001087d8850();
      func_0x0001087d87dc();
      plStack_160 = plVar3;
      goto LAB_1087d1088;
    }
    func_0x0001087d8440();
    ppuVar13 = ppuVar35;
    do {
      func_0x0001087d81cc();
    } while (extraout_w10_15 != 0);
    func_0x0001087d8394();
    ppuVar35 = ppuVar30;
    if ((extraout_w8_06 >> 1 & 1) == 0) {
      func_0x0001087d8adc(9);
      puVar36 = (undefined *)puVar12[0x1b9];
      func_0x0001087d8420();
      ppuVar35 = (undefined **)*ppuVar13;
      if (ppuVar35 == (undefined **)0x0) {
        func_0x000107c3a5c0();
        ppuVar35 = (undefined **)*ppuVar13;
      }
      func_0x0001087d85a8();
      plVar14 = extraout_x8_18;
      do {
        if (*plVar14 == 0) {
          func_0x0001087d8224();
          plVar14 = extraout_x8_20;
          uVar22 = extraout_w10_17;
          uVar37 = extraout_x11_01;
        }
        else {
          func_0x0001087d842c();
          plVar14 = extraout_x8_19;
          uVar22 = extraout_w10_16;
          uVar37 = extraout_x11_00;
        }
        if ((uVar37 & 1) != 0) goto LAB_1087d19d8;
      } while ((uVar22 >> 1 & 1) == 0);
    }
    func_0x0001087d8850();
    func_0x0001087d87dc();
    goto LAB_1087d1088;
  }
  puVar12[0x21a] = *(long *)(param_2 + 0x78);
  lVar17 = *(long *)(param_2 + 0x80);
  puVar12[0x21b] = lVar17;
  if (lVar17 != 0) {
    do {
      func_0x0001087d8244();
    } while (extraout_w10_06 != 0);
  }
  __ZNSt3__16chrono12system_clock3nowEv();
  puVar12[0x268] = ppuVar35;
  puVar12[0x269] = *(undefined8 *)(param_2 + 0x98);
  if (param_3[0x14a] != (undefined *)0x0) {
    ppuVar35 = param_3 + 0x147;
    func_0x000104c003e8();
  }
  func_0x0001087d8420();
  while( true ) {
    *ppuVar1 = (undefined *)0x0;
    puVar12[0x1ba] = 0;
    if (lVar17 == 0) break;
    __ZNSt3__119__shared_weak_count4lockEv();
    puVar12[0x1ba] = lVar17;
    if (lVar17 == 0) {
      puVar18 = (undefined8 *)*ppuVar1;
    }
    else {
      puVar18 = (undefined8 *)puVar12[0x21a];
      *ppuVar1 = (undefined *)puVar18;
    }
    if (puVar18 == (undefined8 *)0x0) break;
    puVar24 = (undefined *)*puVar18;
    *ppuVar5 = puVar24;
    puVar36 = (undefined *)0x0;
    if (puVar24 != (undefined *)0x0) {
      do {
        func_0x0001087d81cc();
      } while (extraout_w10_07 != 0);
      puVar36 = *ppuVar5;
    }
    puVar12[0x1d2] = puVar36;
    puVar12[0x23e] = 0;
    *(undefined1 *)(puVar12 + 0x1d3) = 1;
    func_0x0001087d8858();
    ppuVar13 = ppuVar1;
    func_0x000107c2994c();
    if ((*(byte *)(puVar12 + 0x1d3) & 1) == 0) goto LAB_1087d10e4;
    if (*(char *)(puVar12 + 0x250) != '\x01') {
      ppuVar13 = ppuVar5;
      ppuVar31 = ppuStack_140;
      FUN_1087d2eec(ppuVar5,ppuStack_140,ppuVar2);
      *ppuVar1 = *ppuVar5;
      do {
        func_0x0001087d81cc();
      } while (extraout_w10_09 != 0);
      func_0x0001087d8394();
      if ((extraout_w8_01 >> 1 & 1) == 0) {
        *(undefined1 *)((long)puVar12 + 0x1364) = 2;
        func_0x0001087d8d80();
        puVar36 = (undefined *)*extraout_x8_05;
        if (puVar36 == (undefined *)0x0) {
          func_0x000107c3a5c0();
          puVar36 = *ppuVar13;
        }
        ppuVar19 = ppuVar30 + 2;
        do {
          if (*ppuVar19 == (undefined *)0x0) {
            func_0x0001087d8aa0();
            ppuVar19 = extraout_x8_07;
            uVar22 = extraout_w9_03;
            uVar37 = extraout_x10_02;
          }
          else {
            func_0x0001087d8ad0();
            ppuVar19 = extraout_x8_06;
            uVar22 = extraout_w9_02;
            uVar37 = extraout_x10_01;
          }
          if ((uVar37 & 1) != 0) goto LAB_1087d0fd4;
        } while ((uVar22 >> 1 & 1) == 0);
      }
      ppuVar13 = ppuVar1;
      func_0x000107c28870();
      ppuVar30 = (undefined **)*ppuVar13;
      func_0x0001087d8598();
      func_0x0001087d8858();
LAB_1087d0ca4:
      uVar11 = ppuVar30 == (undefined **)0x1;
      if ((bool)uVar11) {
        func_0x0001087d891c();
        func_0x0001087d8610();
        (*extraout_x8_08)();
        uVar11 = 0;
        if ((int)ppuVar13 == 1) {
          func_0x0001087d8824();
          uVar11 = ppuVar13 == (undefined **)0x1;
          if (0 < (long)ppuVar13) {
            *(undefined1 *)(puVar12[0x267] + 0x971) = 1;
            func_0x0001087d3014();
            FUN_1087d1f94(ppuStack_138);
          }
        }
        goto LAB_1087d0d80;
      }
      if (ppuVar30 != (undefined **)0x0) goto LAB_1087d0d80;
      func_0x0001087d8440();
      do {
        func_0x0001087d81cc();
      } while (extraout_w10_23 != 0);
      func_0x0001087d8394();
      if ((extraout_w8_09 >> 1 & 1) == 0) {
        func_0x0001087d8adc(3);
        func_0x0001087d8d80();
        puVar36 = (undefined *)*extraout_x8_32;
        if (puVar36 == (undefined *)0x0) {
          func_0x000107c3a5c0();
          puVar36 = *ppuVar13;
        }
        func_0x0001087d858c();
        plVar14 = extraout_x8_33;
        lVar17 = extraout_x9_08;
        while( true ) {
          if (*plVar14 == 0) {
            cVar29 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar9) {
              *plVar14 = lVar17;
              cVar29 = ExclusiveMonitorsStatus();
            }
            uVar11 = cVar29 == '\0';
            uVar37 = (ulong)-(uint)(byte)uVar11;
            uVar22 = 0;
          }
          else {
            func_0x0001087d842c();
            plVar14 = extraout_x8_34;
            lVar17 = extraout_x9_09;
            uVar37 = extraout_x11_07;
            uVar22 = extraout_w10_24;
          }
          if ((uVar37 & 1) != 0) break;
          if ((uVar22 >> 1 & 1) != 0) goto LAB_1087d1a68;
        }
        goto LAB_1087d1a80;
      }
LAB_1087d1a68:
      func_0x0001087d8850();
      func_0x0001087d87dc();
      func_0x0001087d8598();
      func_0x0001087d88ec();
      goto LAB_1087d114c;
    }
    func_0x000107c28874(ppuVar1);
    func_0x0001087d8c38(ppuVar5);
    func_0x0001087d82d4();
    func_0x000107c28890(ppuVar5);
    lVar17 = puVar12[0x1bb];
    *(undefined8 *)(lVar17 + 8) = 3;
    func_0x000107c2887c(lVar17,puVar12 + 0x1ba);
    uVar28 = puVar12[0x1bb];
    func_0x000107c28894(uVar28,0,ppuStack_140);
    func_0x0001087d8e40();
    ppuVar31 = (undefined **)0x1;
    FUN_1087d5500(uVar28,1,ppuVar2);
    puVar36 = *ppuVar1;
    *ppuVar1 = (undefined *)0x0;
    puVar12[0x25e] = puVar36;
    *ppuVar5 = (undefined *)0x0;
    func_0x0001087d8858();
    ppuVar13 = ppuVar1;
    func_0x000107c2889c();
    puVar12[0x241] = puVar12[0x25e];
    do {
      func_0x0001087d81cc();
    } while (extraout_w10_08 != 0);
    func_0x0001087d83f4(puVar12[0x241]);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)((long)puVar12 + 0x1364) = 0;
      ppuVar30 = (undefined **)puVar12[0x241];
      puVar36 = *ppuVar35;
      if (puVar36 == (undefined *)0x0) {
        func_0x000107c3a5c0();
        puVar36 = *ppuVar13;
      }
      ppuVar19 = ppuVar30 + 2;
      do {
        if (*ppuVar19 == (undefined *)0x0) {
          func_0x0001087d8aa0();
          ppuVar19 = extraout_x8_03;
          uVar22 = extraout_w9_01;
          uVar37 = extraout_x10_00;
        }
        else {
          func_0x0001087d8ad0();
          ppuVar19 = extraout_x8_02;
          uVar22 = extraout_w9_00;
          uVar37 = extraout_x10;
        }
        if ((uVar37 & 1) != 0) goto LAB_1087d0fd4;
      } while ((uVar22 >> 1 & 1) == 0);
    }
    puVar18 = puVar12 + 0x241;
    func_0x000107c28870();
    ppuVar30 = (undefined **)*puVar18;
    func_0x000107c27f9c(puVar12 + 0x241);
    ppuVar13 = (undefined **)(puVar12 + 0x25e);
    func_0x000107c27f9c();
    uVar11 = ppuVar30 == (undefined **)0x2;
    if (!(bool)uVar11) goto LAB_1087d0ca4;
    func_0x0001087d891c();
    if (ppuVar13 != (undefined **)0x0) {
      func_0x0001087d8610();
      (*extraout_x8_04)();
      uVar11 = (int)ppuVar13 == 1;
    }
    func_0x0001087d86d4(puVar12[0x267]);
    func_0x0001087d82fc();
    FUN_1087d27c0(ppuVar5);
    *ppuVar1 = *ppuVar5;
    do {
      func_0x0001087d81cc();
    } while (extraout_w10_10 != 0);
    func_0x0001087d8394();
    if ((extraout_w8_02 >> 1 & 1) == 0) {
      *(undefined1 *)((long)puVar12 + 0x1364) = 1;
      func_0x0001087d8d80();
      puVar36 = (undefined *)*extraout_x8_09;
      if (puVar36 == (undefined *)0x0) {
        func_0x000107c3a5c0();
        puVar36 = *ppuVar13;
      }
      plVar14 = (long *)0x12;
      do {
        if (*plVar14 == 0) {
          func_0x0001087d8aa0();
          plVar14 = extraout_x8_11;
          uVar22 = extraout_w9_05;
          uVar37 = extraout_x10_04;
        }
        else {
          func_0x0001087d8ad0();
          plVar14 = extraout_x8_10;
          uVar22 = extraout_w9_04;
          uVar37 = extraout_x10_03;
        }
        if ((uVar37 & 1) != 0) goto LAB_1087d0fd4;
      } while ((uVar22 >> 1 & 1) == 0);
    }
    func_0x000107c28834(ppuVar1);
    func_0x0001087d8598();
    func_0x0001087d8858();
LAB_1087d0d80:
    func_0x0001087d88ec();
    lVar17 = puVar12[0x21b];
  }
  ppuVar13 = ppuVar1;
  func_0x000107c2994c();
  *(undefined1 *)(puVar12 + 0x1d2) = 0;
  *(undefined1 *)(puVar12 + 0x1d3) = 0;
LAB_1087d10e4:
  func_0x0001087d88ec();
  func_0x0001087d8440();
  do {
    func_0x0001087d81cc();
  } while (extraout_w10_18 != 0);
  func_0x0001087d8394();
  if ((extraout_w8_07 >> 1 & 1) == 0) {
    func_0x0001087d8adc(4);
    func_0x0001087d8d80();
    puVar36 = (undefined *)*extraout_x8_22;
    if (puVar36 == (undefined *)0x0) {
      func_0x000107c3a5c0();
      puVar36 = *ppuVar13;
    }
    func_0x0001087d858c();
    plVar14 = extraout_x8_23;
    do {
      if (*plVar14 == 0) {
        func_0x0001087d8224();
        plVar14 = extraout_x8_25;
        uVar22 = extraout_w10_20;
        uVar37 = extraout_x11_03;
      }
      else {
        func_0x0001087d842c();
        plVar14 = extraout_x8_24;
        uVar22 = extraout_w10_19;
        uVar37 = extraout_x11_02;
      }
      if ((uVar37 & 1) != 0) goto LAB_1087d1a80;
    } while ((uVar22 >> 1 & 1) == 0);
  }
  func_0x0001087d8850();
  func_0x0001087d87dc();
  func_0x0001087d8598();
LAB_1087d114c:
  func_0x0001087d8544();
  ppuVar35 = ppuVar30;
  goto LAB_1087d1150;
code_r0x0001087d0e90:
  func_0x0001087d891c();
  if (ppuVar13 != (undefined **)0x0) {
    func_0x0001087d8610();
    (*extraout_x8_13)();
    uVar10 = (int)ppuVar13 != 0;
    uVar11 = (int)ppuVar13 == 1;
  }
  func_0x0001087d86d4(puVar12[0x267]);
  func_0x0001087d82fc();
  FUN_1087d27c0(ppuVar2);
  func_0x0001087d8440();
  do {
    func_0x0001087d81cc();
  } while (extraout_w10_12 != 0);
  func_0x0001087d8394();
  if ((extraout_w8_04 >> 1 & 1) == 0) {
    *(undefined1 *)((long)puVar12 + 0x1364) = 7;
    puVar24 = *ppuVar1;
    puVar36 = *ppuVar35;
    if (puVar36 == (undefined *)0x0) {
      func_0x000107c3a5c0();
      puVar36 = *ppuVar13;
    }
    plVar14 = (long *)(puVar24 + 0x10);
    do {
      if (*plVar14 == 0) {
        cVar29 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar9) {
          *plVar14 = 1;
          cVar29 = ExclusiveMonitorsStatus();
        }
        uVar11 = cVar29 == '\0';
        uVar10 = 1;
        uVar22 = 0;
        if ((bool)uVar11) goto LAB_1087d1090;
      }
      else {
        func_0x0001087d8ad0();
        plVar14 = extraout_x8_14;
        uVar22 = extraout_w9_07;
        if ((extraout_x10_06 & 1) != 0) goto LAB_1087d1090;
      }
    } while ((uVar22 >> 1 & 1) == 0);
  }
  func_0x000107c28834(ppuVar1);
  func_0x0001087d8598();
  ppuVar13 = ppuVar2;
  func_0x000107c27f9c();
  puVar12[0x26a] = puVar12[0x26b];
  if ((*(byte *)(puVar12 + 0x250) & 1) == 0) goto code_r0x0001087d0f68;
  goto LAB_1087d0db4;
LAB_1087d1090:
  func_0x0001087d82a8();
  if ((bool)uVar11) {
    func_0x0001087d8234();
    uVar6 = extraout_w8;
    if ((bool)uVar10) {
      uVar6 = extraout_w9;
    }
    func_0x0001087d84b8();
    func_0x0001087d8cd4();
    *(undefined1 *)ppuVar13 = uVar6;
    func_0x0001087d81b8(0);
    *(undefined ***)(puVar24 + 0x90) = ppuVar13;
  }
  func_0x0001087d82b8();
  *(undefined **)(extraout_x8_21 + 0x20) = puVar36;
  func_0x0001087d8284(*(undefined8 *)(puVar24 + 0x90));
  ppuVar30 = (undefined **)(puVar24 + 0x10);
  plStack_160 = plVar3;
  goto LAB_1087d1a08;
code_r0x0001087d0f68:
  func_0x0001087d8440();
  do {
    func_0x0001087d81cc();
  } while (extraout_w10_13 != 0);
  func_0x0001087d8394();
  if ((extraout_w8_05 >> 1 & 1) == 0) {
    func_0x0001087d8adc(8);
    puVar36 = *ppuVar1;
    ppuVar35 = (undefined **)*ppuVar35;
    if (ppuVar35 == (undefined **)0x0) {
      func_0x000107c3a5c0();
      ppuVar35 = (undefined **)*ppuVar13;
    }
    func_0x0001087d85a8();
    plVar14 = extraout_x8_15;
    lVar17 = extraout_x9_00;
    do {
      if (*plVar14 == 0) {
        cVar29 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar9) {
          *plVar14 = lVar17;
          cVar29 = ExclusiveMonitorsStatus();
        }
        uVar11 = cVar29 == '\0';
        uVar37 = (ulong)-(uint)(byte)uVar11;
        uVar22 = 0;
      }
      else {
        func_0x0001087d842c();
        plVar14 = extraout_x8_16;
        lVar17 = extraout_x9_01;
        uVar37 = extraout_x11;
        uVar22 = extraout_w10_14;
      }
      plStack_160 = plVar3;
      if ((uVar37 & 1) != 0) goto LAB_1087d19d8;
    } while ((uVar22 >> 1 & 1) == 0);
  }
  func_0x0001087d8850();
  func_0x0001087d87dc();
  plStack_160 = plVar3;
LAB_1087d1088:
  func_0x0001087d8598();
LAB_1087d1150:
  uVar11 = puVar12[0x145] == puVar12[0x146];
  if ((bool)uVar11) {
    func_0x0001087d8de4(puVar12[0x267]);
    puVar12[0x1f8] = extraout_x9_04;
    puVar12[0x1f9] = extraout_x10_08;
    puVar12[0x1fa] = extraout_x11_04;
    func_0x0001087d8994();
    func_0x0001087d8b0c();
    if ((bool)uVar11) {
      func_0x0001087d8c24();
      ppuVar31 = ppuVar13;
    }
    else {
      uRam0000000000001a98 = 0;
      uRam0000000000001ab0 = 0;
      ppuVar31 = ppuVar13;
    }
    func_0x0001087d8a68(&puStack_e0);
    func_0x0001087d8408();
    func_0x0001087d8848();
    func_0x0001087d8c30();
    func_0x0001087d8a54();
    func_0x0001087d8838();
    goto LAB_1087d1b54;
  }
  plVar14 = plStack_130;
  FUN_108799ed8(ppuVar2,plStack_130,puVar12 + 0x148);
  func_0x0001087d8b3c();
  if ((bool)uVar11) {
    func_0x0001087d87b8();
    func_0x000107c278b8(puVar12 + 0x24a);
    ppuVar13 = &puStack_e0;
    func_0x000107c28824(ppuVar13,puVar12 + 0x24a,PTR_DAT_11326a088);
    func_0x000107c2884c(puVar12 + 0x224,ppuVar13);
    puVar32 = (uint *)(puVar12 + 0x224);
    func_0x0001087d8cec(*(undefined8 *)(*ppuVar35 + 0x50));
    func_0x000107c2882c(puVar12 + 0x224);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar12 + 0x24a);
    func_0x0001087d8bfc();
    func_0x0001087d8df8();
    puVar21 = extraout_x8_26;
    puVar23 = extraout_x9_02;
    if (!(bool)uVar11) {
      puVar26 = extraout_x8_26 + 0x46;
      puVar32 = extraout_x8_26;
      while (uVar11 = puVar26 == puVar23, !(bool)uVar11) {
        func_0x0001087d8b24();
        puVar21 = extraout_x8_27;
        puVar23 = extraout_x9_03;
        puVar26 = extraout_x10_07;
      }
    }
    ppuVar31 = (undefined **)(ulong)*puVar32;
    uVar28 = puVar12[0x147];
    *plStack_130 = 0;
    puVar12[0x146] = 0;
    puVar12[0x147] = 0;
    puVar12[0x1f0] = puVar21;
    puVar12[0x1f1] = puVar23;
    puVar12[0x1f2] = uVar28;
    func_0x0001087d8994();
    *(undefined4 *)(puVar12 + 0x1f5) = 0;
    *(undefined1 *)(puVar12 + 0x1f6) = 1;
    func_0x0001087d3028(puVar12 + 0x232);
    func_0x0001087d84dc(&puStack_e0,ppuVar31,puVar12 + 0x1ef);
    func_0x0001087d8408();
    func_0x0001087d8848();
    func_0x000107c279a4(puVar12 + 0x232);
    puVar12 = puVar12 + 0x1ef;
    plVar42 = plStack_130;
LAB_1087d1618:
    FUN_1087a33a8(puVar12);
    func_0x0001087d8838();
  }
  else {
    if (puVar12[0x1d7] != puVar12[0x1d8]) {
      func_0x0001087d87b8();
      func_0x000107c278b8(puVar12 + 0x244);
      ppuVar13 = &puStack_e0;
      func_0x000107c28824(ppuVar13,puVar12 + 0x244,PTR_DAT_11326a080);
      func_0x000107c2884c(puVar12 + 0x21f,ppuVar13);
      func_0x0001087d8cec(*(undefined8 *)(*ppuVar35 + 0x50));
      lVar43 = puVar12[0x267];
      func_0x000107c2882c(puVar12 + 0x21f);
      plVar14 = puVar12 + 0x244;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x0001087d8bfc();
      lVar17 = puVar12[0x1da];
      lVar20 = puVar12[0x1db];
LAB_1087d12a4:
      if (lVar17 != lVar20) {
        uVar37 = *(ulong *)(lVar43 + 0xb0);
        uVar40 = *(ulong *)(lVar43 + 0xb8);
        while ((uVar38 = uVar40, uVar37 != uVar40 &&
               (uVar15 = uVar37, func_0x0001087d8914(), uVar38 = uVar37, (uVar15 & 1) == 0))) {
          uVar37 = uVar37 + 0x58;
        }
        uVar37 = *(ulong *)(lVar43 + 0xb8);
        if (uVar38 != uVar37) {
          *(undefined4 *)(lVar17 + 0x1c) = *(undefined4 *)(uVar38 + 0x30);
          *(undefined1 *)(lVar17 + 0x20) = 1;
          uVar37 = *(ulong *)(lVar43 + 0xb8);
        }
        uVar40 = *(ulong *)(lVar43 + 0xb0);
        while ((uVar38 = uVar37, uVar40 != uVar37 &&
               (uVar15 = uVar40, func_0x0001087d8914(), uVar38 = uVar40, (uVar15 & 1) == 0))) {
          uVar40 = uVar40 + 0x58;
        }
        uVar37 = *(ulong *)(lVar43 + 0xb8);
        if (uVar37 == uVar38) {
          func_0x0001087d8bd4(ppuVar5);
          uVar28 = puVar12[0x240];
          uVar44 = puVar12[0x23f];
          puVar36 = (undefined *)puVar12[0x23e];
          puVar12[0x241] = 0;
          puVar12[0x240] = 0;
          puVar12[0x243] = 0;
          puVar12[0x242] = 0;
          puVar12[0x23f] = 0;
          *ppuVar5 = (undefined *)0x0;
          puStack_e0 = (undefined *)((ulong)puStack_e0 & 0xffffffffffffff00);
          uStack_c8 = 0;
          puVar12[0x1ba] = uVar44;
          *ppuVar1 = puVar36;
          puVar12[0x1bb] = uVar28;
          uStack_f8 = 0;
          uStack_f0 = 0;
          uStack_108 = 0;
          puStack_100 = (undefined *)0x0;
          puVar12[0x1bd] = 0;
          puVar12[0x1be] = 0;
          puVar12[0x1bc] = 0;
          uStack_118 = 0;
          uStack_110 = 0;
          *(undefined4 *)(puVar12 + 0x1bf) = 0;
          *(undefined1 *)(puVar12 + 0x1c0) = 0;
          *(undefined1 *)(puVar12 + 0x1c3) = 0;
          func_0x000107c279a4(&puStack_e0);
          func_0x000107c27914(&uStack_118);
          func_0x000107c27914(&puStack_100);
        }
        else {
          FUN_108685a78(ppuVar1,uVar38);
        }
        func_0x000105291a88(lVar43 + 0x910,ppuVar1);
        func_0x000104bee8ec(ppuVar1);
        if (uVar37 == uVar38) {
          func_0x0001087d8520();
          func_0x000107c27914(ppuVar5);
        }
        uVar40 = *(ulong *)(lVar43 + 0xb8);
        for (uVar37 = *(ulong *)(lVar43 + 0xb0); uVar38 = uVar40, uVar37 != uVar40;
            uVar37 = uVar37 + 0x58) {
          uVar15 = uVar37;
          func_0x0001087d8914();
          uVar38 = uVar37;
          if ((int)uVar15 != 0) goto LAB_1087d13e4;
        }
        goto LAB_1087d1414;
      }
    }
    lVar20 = 0;
    puVar32 = (uint *)0x0;
    lVar17 = 0;
    plVar42 = (long *)0x118;
    while( true ) {
      puVar21 = (uint *)puVar12[0x146];
      puVar23 = (uint *)puVar12[0x145];
      if (lVar17 == ((long)puVar21 - (long)puVar23) / 0x118) break;
      puStack_e0 = (undefined *)CONCAT44(puStack_e0._4_4_,(int)lVar17);
      func_0x0001087d8b78();
      if ((plVar14 == (long *)0x0) &&
         ((puVar32 == (uint *)0x0 || ((int)*puVar32 < *(int *)(*plStack_130 + lVar20))))) {
        puVar32 = (uint *)(*plStack_130 + lVar20);
      }
      lVar17 = lVar17 + 1;
      lVar20 = lVar20 + 0x118;
    }
    uVar11 = true;
    if (puVar32 == (uint *)0x0) {
      if (puVar12[0x1d5] != 0) {
        uVar11 = puVar23 == puVar21;
        puVar26 = puVar23;
        puVar32 = puVar23;
        if (!(bool)uVar11) {
          while( true ) {
            puVar23 = puVar26;
            puVar32 = puVar32 + 0x46;
            uVar11 = true;
            if (puVar32 == puVar21) break;
            puVar26 = puVar32;
            if ((int)*puVar32 <= (int)*puVar23) {
              puVar26 = puVar23;
            }
          }
        }
        puVar32 = puVar23;
        if (puVar23 != (uint *)0x0) goto LAB_1087d15b4;
      }
    }
    else {
LAB_1087d15b4:
      ppuVar31 = (undefined **)(ulong)*puVar32;
      if (*puVar32 != 0) {
        func_0x0001087d8de4();
        puVar12[0x1e8] = extraout_x9_05;
        puVar12[0x1e9] = extraout_x8_28;
        puVar12[0x1ea] = extraout_x11_05;
        func_0x0001087d8994();
        *(undefined4 *)(puVar12 + 0x1ed) = 0;
        *(undefined1 *)(puVar12 + 0x1ee) = 1;
        func_0x0001087d3028(puVar12 + 0x22e,puVar32,extraout_x10_09 + 0x20);
        func_0x0001087d84dc(&puStack_e0,ppuVar31,puVar12 + 0x1e7);
        func_0x0001087d8408();
        func_0x0001087d8848();
        func_0x000107c279a4(puVar12 + 0x22e);
        puVar12 = puVar12 + 0x1e7;
        goto LAB_1087d1618;
      }
    }
    lVar43 = puVar12[0x267];
    FUN_108656428(ppuVar1,lVar43 + 0x4a0);
    func_0x000107c29edc(&puStack_e0,puVar12 + 0x148);
    FUN_10879d9ac(ppuVar1);
    func_0x000107c27b9c();
    func_0x0001087d8950();
    FUN_1087d4b54(puVar12 + 0x1bc);
    FUN_1086eb9e8(puVar12 + 0x1bf);
    puVar12[0x241] = 0;
    puVar12[0x240] = 0;
    puVar12[0x243] = 0;
    puVar12[0x242] = 0;
    puVar12[0x23f] = 0;
    *ppuVar5 = (undefined *)0x0;
    func_0x0001087d8318();
    func_0x000107c27ed0(ppuVar5);
    func_0x0001087d8318();
    ppuVar13 = (undefined **)(puVar12 + 0x241);
    func_0x00010528d190();
    lVar20 = 0;
    lVar17 = 0;
    for (uVar37 = 0; lVar33 = puVar12[0x145], uVar37 != (puVar12[0x146] - lVar33) / 0x118;
        uVar37 = uVar37 + 1) {
      puStack_e0 = (undefined *)CONCAT44(puStack_e0._4_4_,(int)uVar37);
      func_0x0001087d8b78();
      if (ppuVar13 == (undefined **)0x0) {
        if ((puVar12[0x1d5] != 0) &&
           (uVar37 < (ulong)((long)(puVar12[0x187] - puVar12[0x186]) / 0x18))) {
          ppuVar13 = (undefined **)(puVar12 + 0x241);
          FUN_1087d4b68(ppuVar13,puVar12[0x186] + lVar17);
        }
        lVar33 = lVar33 + lVar20;
        if (*(char *)(lVar33 + 200) == '\x01') {
          FUN_1088455a4(&puStack_e0,lVar33 + 0x80);
          ppuVar13 = (undefined **)(puVar12 + 0x1bc);
          func_0x000107c303b0(ppuVar13,FUN_1087d4c40);
          if (ppuVar13 != &puStack_e0) {
            puVar36 = ppuVar13[1];
            if (((ulong)puVar36 & 1) != 0) {
              puVar36 = *(undefined **)((ulong)puVar36 & 0xfffffffffffffffe);
            }
            puVar24 = puStack_d8;
            if (((ulong)puStack_d8 & 1) != 0) {
              puVar24 = *(undefined **)((ulong)puStack_d8 & 0xfffffffffffffffe);
            }
            if (puVar36 == puVar24) {
              func_0x00010890b3e0();
            }
            else {
              FUN_10890b3b0();
            }
          }
          ppuVar13 = &puStack_e0;
          FUN_10890b038();
        }
        if (*(char *)(lVar33 + 0xe8) == '\x01') {
          FUN_108848384(&puStack_e0,lVar33 + 0xd0);
          FUN_10879d9f8(puVar12 + 0x1bf);
          FUN_10879c7d4();
          func_0x000107c2a4cc(&puStack_e0);
          ppuVar31 = (undefined **)puVar12[0x23f];
          if (ppuVar31 < (undefined **)puVar12[0x240]) {
            ppuVar13 = ppuVar31;
            func_0x000107c28c7c(ppuVar31,lVar33 + 0xd0);
            ppuVar31 = ppuVar31 + 3;
          }
          else {
            ppuVar13 = ppuVar5;
            func_0x00010528d850(ppuVar5,((long)ppuVar31 - (long)*ppuVar5) / 0x18 + 1);
            func_0x0001087d8c04(puVar12 + 0x21a,ppuVar13,
                                (long)(puVar12[0x23f] - puVar12[0x23e]) / 0x18);
            func_0x000107c28c7c(puVar12[0x21c],lVar33 + 0xd0);
            puVar12[0x21c] = puVar12[0x21c] + 0x18;
            func_0x000107c27ed4(ppuVar5,puVar12 + 0x21a);
            ppuVar31 = (undefined **)puVar12[0x23f];
            ppuVar13 = (undefined **)(puVar12 + 0x21a);
            func_0x000107c27edc();
          }
          puVar12[0x23f] = ppuVar31;
        }
      }
      lVar17 = lVar17 + 0x18;
      lVar20 = lVar20 + 0x118;
    }
    if (puVar12[0x1d5] != 0) {
      FUN_10869e39c(puVar12 + 0x186,puVar12 + 0x241);
    }
    uVar11 = *(char *)(puVar12 + 0x1a0) == '\x01';
    if ((bool)uVar11) {
      puVar18 = puVar12 + 0x19d;
      FUN_108725c44(puVar18,ppuVar5);
    }
    else {
      puVar18 = puVar12 + 0x19d;
      func_0x000107c28b94(puVar18,ppuVar5);
      *(undefined1 *)(puVar12 + 0x1a0) = 1;
    }
    *(uint *)(puVar12 + 0x1bb) = *(uint *)(puVar12 + 0x1bb) | 2;
    puVar34 = (undefined8 *)puVar12[0x1c7];
    if ((undefined8 *)puVar12[0x1c7] == (undefined8 *)0x0) {
      puVar18 = (undefined8 *)puVar12[0x1ba];
      if (((ulong)puVar18 & 1) != 0) {
        func_0x0001087d8dc0();
      }
      func_0x000107c29a10();
      puVar12[0x1c7] = puVar18;
      puVar34 = puVar18;
    }
    uVar10 = SUB81(puVar18,0);
    func_0x0001087d8514();
    *(undefined1 *)(puVar34 + 2) = uVar10;
    if (*(int *)(puVar12 + 0x1ce) == 0) {
      ppuVar13 = ppuVar1;
      FUN_10879c7c4();
      uVar11 = *(int *)((long)ppuVar13 + 0x1c) == 1;
      if ((bool)uVar11) {
        ppuVar31 = ppuVar13;
        ppuVar13 = (undefined **)ppuVar13[2];
      }
      else {
        func_0x000107c2a4e0(ppuVar13);
        *(undefined4 *)((long)ppuVar13 + 0x1c) = 1;
        ppuVar31 = (undefined **)ppuVar13[1];
        if (((ulong)ppuVar31 & 1) != 0) {
          func_0x0001087d8dc0();
        }
        func_0x000107c29a14();
        ppuVar13[2] = (undefined *)ppuVar31;
        ppuVar13 = ppuVar31;
      }
      uVar10 = SUB81(ppuVar31,0);
      func_0x0001087d8514();
      *(undefined1 *)(ppuVar13 + 2) = uVar10;
    }
    ppuVar31 = ppuVar1;
    func_0x0001087be850(lVar43 + 0x4a0);
    func_0x0001087d8bc8(puVar12[0x267]);
    uVar28 = puVar12[0x146];
    lVar17 = *plStack_130;
    func_0x0001087d8e58(puVar12[0x147]);
    puVar12[0x201] = uVar28;
    puVar12[0x200] = lVar17;
    puVar12[0x202] = extraout_x8_36;
    func_0x0001087d8994();
    *(undefined4 *)(puVar12 + 0x205) = 0;
    *(undefined1 *)(puVar12 + 0x206) = 1;
    func_0x0001087d88f4(&puStack_e0);
    func_0x0001087d8408();
    func_0x0001087d8848();
    FUN_1087a33a8(puVar12 + 0x1ff);
    func_0x0001087d8838();
    func_0x000104be1594(puVar12 + 0x241);
    func_0x000107c27a44(ppuVar5);
    func_0x000107c2a500(ppuVar1);
    plVar42 = plStack_130;
  }
  FUN_10879b7ac(ppuVar2);
  plStack_160 = plVar3;
LAB_1087d1b54:
  func_0x0001087d8bac();
  func_0x0001087d8508();
  func_0x0001087d8560();
  func_0x000104be1594(puStack_148);
  FUN_1087d30e0(plVar42);
  func_0x000107c27f9c(ppuStack_140);
  func_0x0001087d870c();
  ppuVar13 = ppuStack_138;
  func_0x0001087d3108(ppuStack_138);
  func_0x0001087d84f4();
  func_0x0001087d84e8();
  goto LAB_1087d1b8c;
LAB_1087d19d8:
  func_0x0001087d8d8c();
  if ((bool)uVar11) {
    func_0x0001087d8234();
    func_0x0001087d8164();
    func_0x0001087d8174();
    *(undefined ***)(puVar36 + 0x90) = ppuVar13;
  }
  func_0x0001087d83e4();
  *(undefined ***)(extraout_x8_31 + 0x20) = ppuVar35;
  func_0x0001087d8284(*(undefined8 *)(puVar36 + 0x90));
  ppuVar30 = (undefined **)(puVar36 + 0x10);
  goto LAB_1087d1a08;
LAB_1087d13e4:
  while (uVar37 = uVar37 + 0x58, uVar37 != uVar40) {
    uVar15 = uVar37;
    func_0x0001087d8914();
    if ((uVar15 & 1) == 0) {
      FUN_1087a2964(uVar38,uVar37);
      uVar38 = uVar38 + 0x58;
    }
  }
LAB_1087d1414:
  FUN_1087cd180(lVar43 + 0xb0,uVar38,*(undefined8 *)(lVar43 + 0xb8));
  if (*(char *)(lVar43 + 0x110) != '\x01') goto LAB_1087d14b8;
  lVar33 = *(long *)(lVar43 + 0xf8);
  lVar7 = *(long *)(lVar43 + 0x100);
  puVar12[0x25e] = lVar17;
  for (; lVar39 = lVar7, lVar33 != lVar7; lVar33 = lVar33 + 0x30) {
    puVar18 = puVar12 + 0x25e;
    FUN_1087d4ad8(puVar18,*(undefined8 *)(lVar33 + 0x20),*(undefined4 *)(lVar33 + 0x28));
    lVar39 = lVar33;
    if ((int)puVar18 != 0) goto LAB_1087d1464;
  }
LAB_1087d14a0:
  if (lVar39 != *(long *)(lVar43 + 0x100)) {
    FUN_1086a92ec(lVar43 + 0xf8,lVar39);
  }
LAB_1087d14b8:
  FUN_10863c080(puVar12 + 0x1de,lVar17);
  plVar14 = (long *)(lVar43 + 0x9e0);
  func_0x00010863c18c(plVar14,puVar12 + 0x1de);
  func_0x0001087d88dc();
  lVar17 = lVar17 + 0x48;
  goto LAB_1087d12a4;
LAB_1087d1464:
  while (lVar41 = lVar33 + 0x30, lVar41 != lVar7) {
    puVar18 = puVar12 + 0x25e;
    FUN_1087d4ad8(puVar18,*(undefined8 *)(lVar33 + 0x50),*(undefined4 *)(lVar33 + 0x58));
    lVar33 = lVar41;
    if (((ulong)puVar18 & 1) == 0) {
      FUN_1086ec534(lVar39,lVar41);
      lVar39 = lVar39 + 0x30;
    }
  }
  goto LAB_1087d14a0;
LAB_1087d0fd4:
  ppuVar35 = (undefined **)ppuVar30[0x12];
  uVar37 = (ulong)*(byte *)((long)ppuVar35 + 1);
  uVar11 = *(byte *)((long)ppuVar35 + 1) == *(byte *)ppuVar35;
  if ((bool)uVar11) {
    func_0x0001087d8234();
    func_0x0001087d8164();
    func_0x0001087d8190();
    ppuVar35[1] = (undefined *)ppuVar13;
    ppuVar30[0x12] = (undefined *)ppuVar13;
    uVar37 = extraout_x8_17;
    ppuVar35 = ppuVar13;
  }
  uVar37 = uVar37 & 0xffffffff;
  ppuVar35[uVar37 * 3 + 2] = (undefined *)0x0;
  ppuVar35[uVar37 * 3 + 3] = (undefined *)puVar12;
  ppuVar35[uVar37 * 3 + 4] = puVar36;
  goto LAB_1087d1014;
LAB_1087d1a80:
  func_0x0001087d8358();
  if ((bool)uVar11) {
    func_0x0001087d8234();
    func_0x0001087d8164();
    func_0x0001087d8174();
    ppuVar30[0x12] = (undefined *)ppuVar13;
  }
  func_0x0001087d83e4();
  *(undefined **)(extraout_x8_35 + 0x20) = puVar36;
LAB_1087d1014:
  func_0x0001087d8284(ppuVar30[0x12]);
  ppuVar30 = ppuVar30 + 2;
LAB_1087d1a08:
  *ppuVar30 = (undefined *)0x0;
  while (func_0x0001087d82e8(uStack_70), !(bool)uVar11) {
    ___stack_chk_fail();
    if ((int)ppuVar31 != 0) goto LAB_1087d1e00;
    do {
      __Unwind_Resume(ppuVar13);
LAB_1087d1e00:
      func_0x000104bd46a0();
    } while ((int)ppuVar31 == 0);
    func_0x0001087d8bac();
    func_0x0001087d8508();
    func_0x0001087d8560();
    func_0x000104be1594(puStack_148);
    FUN_1087d30e0(plStack_130);
    func_0x000107c27f9c(ppuStack_140);
    func_0x000107c27f9c(plStack_160);
    func_0x0001087d3108(ppuStack_138);
    func_0x0001087d84f4();
    func_0x0001087d84e8();
    ___cxa_begin_catch();
    func_0x0001087d84a8();
    ___cxa_end_catch();
LAB_1087d1b8c:
    func_0x0001087d8400();
    func_0x0001087d84a0();
  }
  return;
}



/* Entry: 1087d1f94; end: 1087d2153;  */

void FUN_1087d1f94(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  code **ppcVar6;
  uint extraout_w8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  code *pcVar7;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  uint extraout_w10_07;
  uint extraout_w10_08;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  long lStack_a90;
  long lStack_a88;
  undefined1 auStack_a80 [2520];
  code *pcStack_a8;
  undefined **ppuStack_a0;
  code *pcStack_90;
  undefined **ppuStack_88;
  long *plStack_80;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  plVar5 = &lStack_a90;
  puVar2 = param_1;
  func_0x0001087d8450();
  puVar9 = (undefined8 *)*puVar2;
  lStack_a88 = puVar2[3];
  lStack_a90 = puVar2[2];
  uStack_58 = extraout_x8;
  if (puVar2[3] != 0) {
    do {
      func_0x0001087d8244();
    } while (extraout_w10 != 0);
  }
  puVar3 = auStack_a80;
  FUN_108792860(puVar3,param_1 + 4);
  pcStack_a8 = (code *)param_1[0x13f];
  ppuStack_a0 = (undefined **)param_1[0x140];
  if (ppuStack_a0 != (undefined **)0x0) {
    do {
      func_0x0001087d8244();
    } while (extraout_w10_00 != 0);
  }
  func_0x000107c28150();
  lVar10 = puVar9[2];
  __ZNSt3__15mutex4lockEv(lVar10 + 8);
  lVar11 = *(long *)(lVar10 + 0x70);
  pcStack_90 = FUN_1087d31a8;
  ppuStack_88 = &PTR_FUN_110a718d8;
  plVar4 = (long *)0x9f8;
  __Znwm();
  plVar4[1] = lStack_a88;
  *plVar4 = lStack_a90;
  lStack_a90 = 0;
  lStack_a88 = 0;
  FUN_1086ac094(plVar4 + 2,auStack_a80);
  ppuVar12 = ppuStack_a0;
  pcVar7 = pcStack_a8;
  plVar4[0x13e] = (long)ppuStack_a0;
  plVar4[0x13d] = (long)pcStack_a8;
  pcStack_a8 = (code *)0x0;
  ppuStack_a0 = (undefined **)0x0;
  ppcVar6 = &pcStack_90;
  plStack_80 = plVar4;
  puStack_60 = puVar3;
  func_0x000107c28154(lVar10 + 0x48);
  func_0x0001087d8a34();
  __ZNSt3__15mutex6unlockEv(lVar10 + 8);
  if (lVar11 == 0) {
    func_0x0001087d8da0(*puVar9);
    pcStack_90 = pcVar7;
    ppuStack_88 = ppuVar12;
    if (extraout_x8_00 != 0) {
      do {
        func_0x0001087d8244();
      } while (extraout_w10_01 != 0);
    }
    func_0x0001087d8610();
    ppcVar6 = &pcStack_90;
    (*extraout_x8_01)();
    func_0x000107c27e74(&pcStack_90);
  }
  FUN_1087d317c();
  func_0x0001087d82e8(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27e74(&pcStack_90);
    FUN_1087d317c();
    func_0x0001087d84d4();
    lVar10 = 0x70;
    __Znwm();
    func_0x0001087d848c(FUN_1087d5a20);
    if (extraout_x8_02 != 0) {
      do {
        func_0x0001087d81cc();
      } while (extraout_w10_02 != 0);
    }
    pcVar7 = *ppcVar6;
    *(code **)(lVar10 + 0x40) = pcVar7;
    if (pcVar7 != (code *)0x0) {
      do {
        func_0x0001087d81cc();
      } while (extraout_w10_03 != 0);
    }
    FUN_1087d4f6c(lVar10 + 0x10);
    func_0x0001087d876c();
    lVar11 = *plVar5;
    *(long *)(lVar10 + 0x58) = lVar11;
    if (lVar11 != 0) {
      do {
        func_0x0001087d81cc();
      } while (extraout_w10_04 != 0);
    }
    *(long *)(lVar10 + 0x60) = *(long *)(lVar10 + 0x40);
    if (*(long *)(lVar10 + 0x40) != 0) {
      do {
        func_0x0001087d81cc();
      } while (extraout_w10_05 != 0);
    }
    plVar5 = (long *)(lVar10 + 0x20);
    func_0x000107c278b8(plVar5,&UNK_10f4afc82);
    func_0x0001087d8e0c();
    FUN_1087d5010();
    func_0x0001087d873c();
    do {
      func_0x0001087d81cc();
    } while (extraout_w10_06 != 0);
    func_0x0001087d83a4();
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(lVar10 + 0x68) = 0;
      func_0x0001087d8254();
      lVar11 = *plVar5;
      if (lVar11 == 0) {
        func_0x000107c3a5c0();
        lVar11 = *plVar5;
      }
      func_0x0001087d85a8();
      plVar5 = extraout_x8_03;
      do {
        if (*plVar5 == 0) {
          func_0x0001087d8224();
          plVar5 = extraout_x8_05;
          uVar1 = extraout_w10_08;
          uVar8 = extraout_w11_00;
        }
        else {
          func_0x0001087d842c();
          plVar5 = extraout_x8_04;
          uVar1 = extraout_w10_07;
          uVar8 = extraout_w11;
        }
        if ((uVar8 & 1) != 0) {
          func_0x0001087d8294();
          if ((bool)in_ZR) {
            func_0x0001087d8234();
            func_0x0001087d8164();
            func_0x0001087d8190();
            func_0x0001087d83d4();
          }
          func_0x0001087d82b8();
          *(long *)(extraout_x8_06 + 0x20) = lVar11;
          func_0x0001087d81dc();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
    func_0x0001087d8728();
    func_0x0001087d85dc();
    func_0x0001087d8438();
    func_0x0001087d84b0();
    func_0x0001087d8460();
    func_0x0001087d857c();
    func_0x0001087d8584();
    func_0x0001087d8400();
    func_0x0001087d8484();
    func_0x0001087d856c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar10);
    return;
  }
  return;
}



/* Entry: 1087d2154; end: 1087d231f;  */

void FUN_1087d2154(long *param_1,long *param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long *plVar3;
  uint extraout_w8;
  long extraout_x8;
  long lVar4;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  
  lVar2 = 0x70;
  __Znwm();
  func_0x0001087d848c(FUN_1087d5a20);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087d81cc();
    } while (extraout_w10 != 0);
  }
  lVar4 = *param_2;
  *(long *)(lVar2 + 0x40) = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x0001087d81cc();
    } while (extraout_w10_00 != 0);
  }
  FUN_1087d4f6c(lVar2 + 0x10);
  func_0x0001087d876c();
  lVar4 = *param_1;
  *(long *)(lVar2 + 0x58) = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x0001087d81cc();
    } while (extraout_w10_01 != 0);
  }
  *(long *)(lVar2 + 0x60) = *(long *)(lVar2 + 0x40);
  if (*(long *)(lVar2 + 0x40) != 0) {
    do {
      func_0x0001087d81cc();
    } while (extraout_w10_02 != 0);
  }
  plVar3 = (long *)(lVar2 + 0x20);
  func_0x000107c278b8(plVar3,&UNK_10f4afc82);
  func_0x0001087d8e0c();
  FUN_1087d5010();
  func_0x0001087d873c();
  do {
    func_0x0001087d81cc();
  } while (extraout_w10_03 != 0);
  func_0x0001087d83a4();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x68) = 0;
    func_0x0001087d8254();
    lVar4 = *plVar3;
    if (lVar4 == 0) {
      func_0x000107c3a5c0();
      lVar4 = *plVar3;
    }
    func_0x0001087d85a8();
    plVar3 = extraout_x8_00;
    do {
      if (*plVar3 == 0) {
        func_0x0001087d8224();
        plVar3 = extraout_x8_02;
        uVar1 = extraout_w10_05;
        uVar5 = extraout_w11_00;
      }
      else {
        func_0x0001087d842c();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_04;
        uVar5 = extraout_w11;
      }
      if ((uVar5 & 1) != 0) {
        func_0x0001087d8294();
        if ((bool)in_ZR) {
          func_0x0001087d8234();
          func_0x0001087d8164();
          func_0x0001087d8190();
          func_0x0001087d83d4();
        }
        func_0x0001087d82b8();
        *(long *)(extraout_x8_03 + 0x20) = lVar4;
        func_0x0001087d81dc();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087d8728();
  func_0x0001087d85dc();
  func_0x0001087d8438();
  func_0x0001087d84b0();
  func_0x0001087d8460();
  func_0x0001087d857c();
  func_0x0001087d8584();
  func_0x0001087d8400();
  func_0x0001087d8484();
  func_0x0001087d856c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 1087d2320; end: 1087d24f3;  */

void FUN_1087d2320(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long *plVar3;
  uint extraout_w8;
  long extraout_x8;
  long lVar4;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  
  lVar2 = 0x70;
  __Znwm();
  func_0x0001087d848c(FUN_1087d5c84);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087d81cc();
    } while (extraout_w10 != 0);
  }
  lVar4 = *param_3;
  *(long *)(lVar2 + 0x40) = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x0001087d81cc();
    } while (extraout_w10_00 != 0);
  }
  FUN_1087d4f6c(lVar2 + 0x10);
  FUN_1087d4fa0(param_1,*(undefined8 *)(lVar2 + 0x10));
  lVar4 = *param_2;
  *(long *)(lVar2 + 0x58) = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x0001087d81cc();
    } while (extraout_w10_01 != 0);
  }
  *(long *)(lVar2 + 0x60) = *(long *)(lVar2 + 0x40);
  if (*(long *)(lVar2 + 0x40) != 0) {
    do {
      func_0x0001087d81cc();
    } while (extraout_w10_02 != 0);
  }
  plVar3 = (long *)(lVar2 + 0x20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar3,param_4);
  func_0x0001087d8e0c();
  FUN_1087d5288();
  func_0x0001087d873c();
  do {
    func_0x0001087d81cc();
  } while (extraout_w10_03 != 0);
  func_0x0001087d83a4();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x68) = 0;
    func_0x0001087d8254();
    lVar4 = *plVar3;
    if (lVar4 == 0) {
      func_0x000107c3a5c0();
      lVar4 = *plVar3;
    }
    func_0x0001087d85a8();
    plVar3 = extraout_x8_00;
    do {
      if (*plVar3 == 0) {
        func_0x0001087d8224();
        plVar3 = extraout_x8_02;
        uVar1 = extraout_w10_05;
        uVar5 = extraout_w11_00;
      }
      else {
        func_0x0001087d842c();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_04;
        uVar5 = extraout_w11;
      }
      if ((uVar5 & 1) != 0) {
        func_0x0001087d8294();
        if ((bool)in_ZR) {
          func_0x0001087d8234();
          func_0x0001087d8164();
          func_0x0001087d8190();
          func_0x0001087d83d4();
        }
        func_0x0001087d82b8();
        *(long *)(extraout_x8_03 + 0x20) = lVar4;
        func_0x0001087d81dc();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087d8728();
  func_0x0001087d85dc();
  func_0x0001087d8438();
  func_0x0001087d84b0();
  func_0x0001087d8460();
  func_0x0001087d857c();
  func_0x0001087d8584();
  func_0x0001087d8400();
  func_0x0001087d8484();
  func_0x0001087d856c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 1087d24f4; end: 1087d2777;  */

void FUN_1087d24f4(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_100 [24];
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  func_0x0001087d8dd8();
  lVar2 = *param_2;
  plVar1 = (long *)param_2[3];
  lVar7 = plVar1[1];
  lVar6 = *plVar1;
  if (lVar6 == lVar7) {
    uVar5 = *(undefined8 *)(lVar2 + 0x48);
    uVar3 = *(undefined8 *)(lVar2 + 0x40);
    uStack_c0 = uVar3;
    uStack_b8 = uVar5;
    if (*(long *)(lVar2 + 0x48) != 0) {
      do {
        func_0x0001087d8244();
      } while (extraout_w10 != 0);
    }
    func_0x0001087d8da0();
    uStack_d0 = uVar3;
    uStack_c8 = uVar5;
    if (extraout_x8 != 0) {
      do {
        func_0x0001087d8244();
      } while (extraout_w10_00 != 0);
    }
    uStack_d8 = *(undefined8 *)(lVar2 + 0x38);
    uStack_e0 = *(undefined8 *)(lVar2 + 0x30);
    if (*(long *)(lVar2 + 0x38) != 0) {
      do {
        func_0x0001087d8244();
      } while (extraout_w10_01 != 0);
    }
    lStack_e8 = **(long **)(unaff_x20 + 8);
    if (lStack_e8 != 0) {
      do {
        func_0x0001087d81cc();
      } while (extraout_w10_02 != 0);
    }
    uVar3 = *(undefined8 *)(lVar2 + 0xa0);
    func_0x000108687044(auStack_100,*(undefined8 *)(unaff_x20 + 0x10));
    FUN_1087d38dc(&uStack_c0,&uStack_d0,&uStack_e0,&lStack_e8,uVar3,auStack_100);
    func_0x000104be1594(auStack_100);
    func_0x000107c27f9c(&lStack_e8);
    func_0x000107c286d8(&uStack_e0);
    func_0x000107c2814c(&uStack_d0);
    func_0x000107c28868(&uStack_c0);
  }
  else {
    lVar4 = plVar1[2];
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    lStack_60 = lVar6;
    lStack_58 = lVar7;
    lStack_50 = lVar4;
    func_0x000104be15e4(*(undefined8 *)(unaff_x20 + 0x18));
    uVar5 = *(undefined8 *)(lVar2 + 0x48);
    uVar3 = *(undefined8 *)(lVar2 + 0x40);
    uStack_70 = uVar3;
    uStack_68 = uVar5;
    if (*(long *)(lVar2 + 0x48) != 0) {
      do {
        func_0x0001087d8244();
      } while (extraout_w10_03 != 0);
    }
    func_0x0001087d8da0();
    uStack_80 = uVar3;
    uStack_78 = uVar5;
    if (extraout_x8_00 != 0) {
      do {
        func_0x0001087d8244();
      } while (extraout_w10_04 != 0);
    }
    uStack_88 = *(undefined8 *)(lVar2 + 0x38);
    uStack_90 = *(undefined8 *)(lVar2 + 0x30);
    if (*(long *)(lVar2 + 0x38) != 0) {
      do {
        func_0x0001087d8244();
      } while (extraout_w10_05 != 0);
    }
    lStack_98 = **(long **)(unaff_x20 + 8);
    lStack_a0 = lVar4;
    lStack_b0 = lVar6;
    lStack_a8 = lVar7;
    if (lStack_98 != 0) {
      do {
        func_0x0001087d81cc();
        lStack_a0 = lStack_50;
        lStack_b0 = lStack_60;
        lStack_a8 = lStack_58;
      } while (extraout_w10_06 != 0);
    }
    lStack_58 = 0;
    lStack_50 = 0;
    lStack_60 = 0;
    FUN_1087d323c(&uStack_70,&uStack_80,&uStack_90,&lStack_98,*(undefined8 *)(lVar2 + 0xb0),
                  &lStack_b0);
    func_0x000104be1594(&lStack_b0);
    func_0x000107c27f9c(&lStack_98);
    func_0x000107c286d8(&uStack_90);
    func_0x000107c2814c(&uStack_80);
    func_0x000107c28868(&uStack_70);
    func_0x000104be1594(&lStack_60);
  }
  return;
}



/* Entry: 1087d2778; end: 1087d27bf;  */

undefined8 * FUN_1087d2778(undefined8 *param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    func_0x000107c288b0(param_1);
  }
  else {
    *param_1 = *param_2;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return param_1;
}



/* Entry: 1087d27c0; end: 1087d2eeb;  */

void FUN_1087d27c0(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  uint extraout_w8;
  uint extraout_w8_00;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  undefined8 uVar11;
  int iVar12;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  undefined4 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar8 = (undefined8 *)0x188;
  __Znwm();
  *puVar8 = FUN_1087d65c8;
  puVar8[1] = FUN_1087d6c38;
  puVar8[0x2e] = param_8;
  puVar8[0x2f] = param_9;
  *(undefined1 *)((long)puVar8 + 0x182) = param_7;
  *(undefined1 *)((long)puVar8 + 0x181) = param_6;
  puVar8[0x2c] = param_4;
  puVar8[0x2d] = param_5;
  puVar8[0x2a] = param_2;
  puVar8[0x2b] = param_3;
  func_0x000107c27f94(puVar8 + 2);
  plVar13 = puVar8 + 2;
  func_0x000107c287c4(param_1);
  plVar21 = puVar8 + 4;
  *plVar21 = *param_3;
  do {
    func_0x0001087d81cc();
  } while (extraout_w10 != 0);
  func_0x0001087d83f4(*plVar21);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar8 + 0x30) = 0;
    func_0x0001087d8254();
    lVar15 = *plVar13;
    if (lVar15 == 0) {
      func_0x000107c3a5c0();
      lVar15 = *plVar13;
    }
    func_0x0001087d85a8();
    plVar13 = extraout_x8;
    do {
      if (*plVar13 == 0) {
        func_0x0001087d8224();
        plVar13 = extraout_x8_01;
        uVar6 = extraout_w10_01;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x0001087d842c();
        plVar13 = extraout_x8_00;
        uVar6 = extraout_w10_00;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087d8294();
        if ((bool)in_ZR) {
          func_0x0001087d8234();
          func_0x0001087d8164();
          func_0x0001087d8190();
          func_0x0001087d83d4();
        }
        func_0x0001087d82b8();
        *(long *)(extraout_x8_02 + 0x20) = lVar15;
        func_0x0001087d81dc();
        return;
      }
    } while ((uVar6 >> 1 & 1) == 0);
  }
  func_0x0001087d83f4(*plVar21);
  lVar15 = *plVar21;
  if ((extraout_w8_00 >> 5 & 1) != 0) {
    __ZNSt13exception_ptrC1ERKS_(&ppuStack_88,lVar15 + 0x18);
    __ZSt17rethrow_exceptionSt13exception_ptr(&ppuStack_88);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1087d2db0);
    (*pcVar2)();
  }
  puVar14 = puVar8 + 0x1d;
  FUN_1087d491c(puVar14,lVar15 + 0x98);
  puVar8[0x20] = *(undefined8 *)(lVar15 + 0xb0);
  func_0x0001087d8b90();
  if (*(char *)((long)puVar8 + 0x104) == '\x01') {
    uVar6 = *(uint *)(puVar8 + 0x20);
    if (uVar6 != 4) {
      lVar20 = *(long *)puVar8[0x2f];
      plVar13 = *(long **)(lVar20 + 0x58);
      uStack_78 = 0;
      uStack_70 = 0;
      ppuStack_88 = &PTR_FUN_110a6f328;
      ppuStack_80 = (undefined **)0x0;
      uStack_68 = 0x19;
      uVar3 = uVar6 == 4;
      func_0x0001087d8a0c();
      func_0x0001087d88c0();
      puVar9 = puVar8 + 0x24;
      func_0x000107c278b8(puVar9);
      lVar18 = puVar8[0x2f];
      func_0x0001087d85cc(*(undefined8 *)(lVar18 + 8));
      FUN_108791610(puVar14,puVar8 + 0x24,puVar9);
      FUN_108791a34(plVar21,puVar14);
      (**(code **)(*plVar13 + 0x60))(plVar13,plVar21);
      lVar15 = puVar8[0x2f];
      FUN_108788618(plVar21);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar8 + 0x24);
      func_0x0001087d8550();
      func_0x0001087d8a78(*(undefined8 *)(lVar15 + 0x10));
      if ((bool)uVar3) {
        plVar13 = *(long **)(lVar20 + 0x58);
        uStack_78 = 0;
        uStack_70 = 0;
        ppuStack_88 = &PTR_FUN_110a6f328;
        ppuStack_80 = (undefined **)0x0;
        uStack_68 = 0x1e;
        func_0x0001087d8a0c();
        func_0x0001087d88c0();
        puVar14 = puVar8 + 0x27;
        func_0x000107c278b8(puVar14);
        func_0x0001087d85cc(*(undefined8 *)(lVar18 + 8));
        func_0x0001087d8bf4();
        FUN_108791a34(puVar8 + 0x18,puVar14);
        func_0x0001087d8cec(*(undefined8 *)(*plVar13 + 0x60));
        FUN_108788618(puVar8 + 0x18);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar8 + 0x27);
        func_0x0001087d8550();
      }
      if (uVar6 < 2) {
        lVar15 = puVar8[0x2f];
        *(undefined1 *)(*(long *)(lVar18 + 8) + 0x952) = 1;
        FUN_1087d3014(*(undefined8 *)(lVar15 + 0x18));
        FUN_1087d1f94(*(undefined8 *)(puVar8[0x2f] + 0x20));
      }
    }
    goto LAB_1087d2d60;
  }
  lVar15 = puVar8[0x2a];
  puVar14 = (undefined8 *)(lVar15 + 0x960);
  if (*(char *)(lVar15 + 0x9b8) == '\x01') {
    iVar12 = *(int *)(lVar15 + 0x9b0) + 1;
  }
  else {
    *(undefined8 *)(lVar15 + 0x9b0) = 0;
    *(undefined8 *)(lVar15 + 0x998) = 0;
    *(undefined8 *)(lVar15 + 0x990) = 0;
    *(undefined8 *)(lVar15 + 0x9a8) = 0;
    *(undefined8 *)(lVar15 + 0x9a0) = 0;
    *(undefined8 *)(lVar15 + 0x978) = 0;
    *(undefined8 *)(lVar15 + 0x970) = 0;
    *(undefined8 *)(lVar15 + 0x988) = 0;
    *(undefined8 *)(lVar15 + 0x980) = 0;
    *(undefined8 *)(lVar15 + 0x968) = 0;
    *puVar14 = 0;
    iVar12 = 1;
    *(undefined1 *)(lVar15 + 0x9b8) = 1;
    lVar15 = puVar8[0x2a];
  }
  *(int *)(lVar15 + 0x9b0) = iVar12;
  lVar15 = puVar8[0x1d];
  lVar18 = puVar8[0x1e];
  lVar20 = lVar15;
  if (lVar15 != lVar18) {
    while (lVar19 = lVar15, lVar15 = lVar20 + 0xf8, lVar15 != lVar18) {
      uVar6 = *(uint *)(lVar19 + 0x18);
      uVar7 = *(uint *)(lVar20 + 0x110);
      FUN_1087d55bc();
      FUN_1087d55bc();
      lVar20 = lVar15;
      if (uVar7 <= uVar6) {
        lVar15 = lVar19;
      }
    }
    uVar11 = puVar8[0x2a];
    *(undefined4 *)puVar14 = *(undefined4 *)(lVar19 + 0x18);
    func_0x0001087d8794(uVar11);
    func_0x0001087d8c90();
    func_0x0001087d8878();
  }
  if (*(char *)((long)puVar8 + 0x181) != '\x01') goto LAB_1087d2d60;
  FUN_1087a580c(plVar21,puVar8[0x2d],puVar8 + 0x1d,*(undefined1 *)((long)puVar8 + 0x182));
  plVar13 = (long *)puVar8[0x2e];
  lVar15 = *plVar13;
  if (*(char *)(lVar15 + 0xac) == '\x01') {
    puVar14 = (undefined8 *)plVar13[1];
    lVar20 = puVar8[5];
    for (lVar18 = puVar8[4]; lVar18 != lVar20; lVar18 = lVar18 + 0x20) {
      FUN_1087d55dc(*puVar14,0x11,*(undefined4 *)(lVar18 + 0x18));
    }
    lVar18 = puVar8[0x2e];
    puVar1 = (undefined4 *)puVar8[8];
    for (puVar17 = (undefined4 *)puVar8[7]; puVar17 != puVar1; puVar17 = puVar17 + 1) {
      FUN_1087d55dc(*(undefined8 *)(*(long *)(lVar18 + 0x10) + 8),0x12,*puVar17);
    }
    lVar19 = puVar8[0x2e];
    lVar20 = puVar8[0xb];
    for (lVar18 = puVar8[10]; lVar18 != lVar20; lVar18 = lVar18 + 4) {
      plVar13 = *(long **)(lVar19 + 0x18);
      plVar16 = *(long **)(*plVar13 + 0x58);
      ppuStack_80 = (undefined **)0x0;
      uStack_78 = 0;
      uStack_70 = 0;
      ppuStack_88 = &PTR_FUN_110a6f328;
      uStack_68 = 0x1b;
      puVar14 = puVar8 + 0x21;
      func_0x000107c278b8(puVar14,"media_type");
      func_0x0001087d85cc(plVar13[1]);
      pppuVar10 = &ppuStack_88;
      FUN_108791610(pppuVar10,puVar8 + 0x21,puVar14);
      FUN_108791a34(puVar8 + 0x13,pppuVar10);
      func_0x0001087d8c74(*(undefined8 *)(*plVar16 + 0x60));
      FUN_108788618(puVar8 + 0x13);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar8 + 0x21);
      func_0x0001087d8550();
    }
    plVar13 = (long *)puVar8[0x2e];
  }
  if (*(char *)(lVar15 + 0xc0) == '\x01') {
    puVar14 = (undefined8 *)plVar13[4];
    lVar18 = puVar8[0xe];
    for (lVar15 = puVar8[0xd]; lVar15 != lVar18; lVar15 = lVar15 + 0x20) {
      FUN_1087d5700(*puVar14,0x1c,*(undefined4 *)(lVar15 + 0x18));
    }
    lVar15 = puVar8[0x2e];
    puVar1 = (undefined4 *)puVar8[0x11];
    for (puVar17 = (undefined4 *)puVar8[0x10]; puVar17 != puVar1; puVar17 = puVar17 + 1) {
      FUN_1087d5700(**(undefined8 **)(lVar15 + 0x28),0x1d,*puVar17);
    }
    plVar13 = (long *)puVar8[0x2e];
  }
  puVar14 = (undefined8 *)plVar13[6];
  bVar4 = *(int *)*puVar14 == *(int *)(puVar14[1] + 0xb8);
  if (*(int *)*puVar14 < *(int *)(puVar14[1] + 0xb8)) {
    ppuStack_80 = (undefined **)0x0;
    uStack_78 = 0;
    ppuStack_88 = (undefined **)0x0;
    func_0x0001087d8a78(puVar14[2]);
    bVar5 = false;
    if (bVar4) {
      lVar18 = puVar8[5];
      for (lVar15 = puVar8[4]; bVar5 = lVar15 == lVar18, !bVar5; lVar15 = lVar15 + 0x20) {
        func_0x0001087d8cb0();
      }
    }
    func_0x0001087d8a78(puVar14[3]);
    if (bVar5) {
      lVar15 = puVar8[0xd];
      lVar18 = puVar8[0xe];
      if (lVar15 == lVar18) goto LAB_1087d2d20;
      for (; uVar3 = 1, lVar15 != lVar18; lVar15 = lVar15 + 0x20) {
        func_0x0001087d8cb0();
      }
    }
    else {
LAB_1087d2d20:
      uVar3 = 0;
    }
    if (ppuStack_88 != ppuStack_80) {
      *(int *)*puVar14 = *(int *)*puVar14 + 1;
      *(undefined1 *)puVar14[4] = uVar3;
      FUN_10869e39c(puVar14[5],&ppuStack_88);
    }
    func_0x0001087d8a04();
  }
  FUN_1087a628c(plVar21);
LAB_1087d2d60:
  FUN_1087d24f4(&ppuStack_88,puVar8[0x2c]);
  func_0x0001087d8bdc();
  func_0x000107c27f9c(&ppuStack_88);
  FUN_108642450(puVar8 + 0x1d);
  func_0x000107c287c8(puVar8 + 2);
  func_0x0001087d8400();
  func_0x0001087d84a0();
  return;
}



/* Entry: 1087d2eec; end: 1087d2f8f;  */

void FUN_1087d2eec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  func_0x000107c28874(&uStack_48);
  func_0x0001087d8800(&uStack_50);
  uStack_50 = 0;
  func_0x0001087d85d4(lStack_38);
  func_0x000107c28890(&uStack_50);
  *(undefined8 *)(lStack_38 + 8) = 2;
  func_0x000107c2887c(lStack_38,auStack_40);
  func_0x000107c28880(lStack_38,0,param_2,param_3);
  uVar1 = uStack_48;
  uStack_50 = 0;
  uStack_48 = 0;
  *param_1 = uVar1;
  func_0x0001087d8ce4();
  func_0x000107c2889c(&uStack_48);
  return;
}



/* Entry: 1087d2f90; end: 1087d2fe3;  */

long FUN_1087d2f90(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    return *param_1 + 0x98;
  }
  func_0x0001087d861c(auStack_28);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1087d2fd4);
  (*pcVar1)();
}



/* Entry: 1087d2fe4; end: 1087d3013;  */

long FUN_1087d2fe4(long param_1,long param_2)

{
  FUN_1087b08f4();
  func_0x0001087c3f2c(param_1 + 0x18,param_2 + 0x18);
  return param_1;
}



/* Entry: 1087d3014; end: 1087d30bf;  */

void FUN_1087d3014(long param_1)

{
  if (*(long *)(param_1 + 0xa30) == 0) {
    return;
  }
  if (*(long **)(param_1 + 0xa30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c01bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xa30) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x000104c00420();
  return;
}



/* Entry: 1087d30c0; end: 1087d30df;  */

void FUN_1087d30c0(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000107c27f9c();
  }
  return;
}



/* Entry: 1087d30e0; end: 1087d3163;  */

long FUN_1087d30e0(long param_1)

{
  long lStack_28;
  
  func_0x000104bee3a8(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x0001086422bc(&lStack_28);
  return param_1;
}



/* Entry: 1087d3164; end: 1087d3167;  */

undefined8 * FUN_1087d3164(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a718a8;
  func_0x000107c29778(param_1 + 0x11);
  func_0x000107c2994c(param_1 + 0xf);
  func_0x000107c289fc(param_1 + 0xd);
  func_0x000107c288a4(param_1 + 0xb);
  func_0x000107c28868(param_1 + 8);
  func_0x000107c286d8(param_1 + 6);
  func_0x000107c28808(param_1 + 4);
  func_0x0001087d8cf4();
  return param_1;
}



/* Entry: 1087d3168; end: 1087d317b;  */

void FUN_1087d3168(void)

{
  func_0x0001087d4ccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087d317c; end: 1087d31a7;  */

undefined8 FUN_1087d317c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001087d3140(param_1 + 0x9e8);
  func_0x0001086a931c(param_1 + 0x10);
  func_0x0001005528ec();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1087d31a8; end: 1087d3217;  */

void FUN_1087d31a8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  plVar4 = (long *)*puVar5;
  uStack_30 = puVar5[0x13d];
  lStack_28 = puVar5[0x13e];
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
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar5 + 0x21,puVar5 + 5,&uStack_30);
  FUN_108642610(&uStack_30);
  return;
}



/* Entry: 1087d3218; end: 1087d3237;  */

void FUN_1087d3218(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1087d317c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087d3238; end: 1087d323b;  */

void FUN_1087d3238(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1087d323c; end: 1087d38db;  */

void FUN_1087d323c(void)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code **ppcVar7;
  long *plVar8;
  undefined8 *in_x4;
  undefined8 *in_x5;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  uint extraout_w8_04;
  uint extraout_w8_05;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar9;
  long extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  long *extraout_x8_05;
  long *extraout_x8_06;
  long *extraout_x8_07;
  undefined8 uVar10;
  long extraout_x8_08;
  long *extraout_x8_09;
  long *extraout_x8_10;
  long *extraout_x8_11;
  long *plVar11;
  long extraout_x8_12;
  long extraout_x8_13;
  undefined1 extraout_w9;
  undefined1 extraout_w9_00;
  undefined4 uVar12;
  undefined8 extraout_x9;
  ulong uVar13;
  ulong extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  int extraout_w10_06;
  uint extraout_w10_07;
  uint extraout_w10_08;
  uint uVar14;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  undefined8 *puVar15;
  undefined8 *unaff_x21;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  code **ppcStack_80;
  undefined8 uStack_70;
  
  func_0x0001087d8d58();
  func_0x0001087d8450();
  puVar4 = (undefined8 *)0xc0;
  uStack_70 = extraout_x8_00;
  __Znwm();
  uVar10 = *unaff_x21;
  puVar15 = puVar4 + 0xb;
  puVar4[0xc] = unaff_x21[1];
  *puVar15 = uVar10;
  *unaff_x21 = 0;
  unaff_x21[1] = 0;
  uVar20 = unaff_x23[1];
  uVar10 = *unaff_x23;
  puVar16 = puVar4 + 0xd;
  puVar4[0xe] = uVar20;
  *puVar16 = uVar10;
  puVar5 = puVar4;
  func_0x0001087d8b54(FUN_1087d5d34);
  plVar8 = unaff_x23 + 0x13;
  *plVar8 = extraout_x10;
  puVar5[0x10] = uVar20;
  puVar5[0xf] = uVar10;
  *unaff_x24 = 0;
  uVar10 = *in_x5;
  puVar5[9] = in_x5[1];
  puVar5[8] = uVar10;
  *puVar5 = extraout_x8_01;
  puVar5[1] = extraout_x9;
  puVar5[10] = in_x5[2];
  in_x5[1] = 0;
  in_x5[2] = 0;
  *in_x5 = 0;
  FUN_1087d3f64(puVar5 + 2);
  puVar6 = extraout_x8;
  FUN_1087d3fcc(extraout_x8,puVar4[2]);
  func_0x0001087d83f4(*plVar8);
  if (((extraout_w8_01 >> 1 & 1) == 0) &&
     (func_0x0001087d83f4(*plVar8), (extraout_w8_02 >> 5 & 1) == 0)) {
    func_0x0001087d898c();
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_FUN_110a71940;
    func_0x0001087d89d0(&PTR_DAT_110a71a10);
    func_0x0001087d8730();
    *in_x4 = 0;
    lStack_100 = 0;
    func_0x0001087d8c88();
    func_0x0001087d8c60();
    func_0x0001087d8414();
    func_0x0001087d8ab0(&PTR_FUN_110a71a38);
    lStack_100 = 0;
    pcStack_b0 = (code *)0x0;
    func_0x000107c27f98(&pcStack_b0);
    func_0x000107c27f9c(&lStack_100);
    lStack_100 = 0;
    lStack_f8 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    func_0x000107c27f98(&uStack_c0);
    func_0x000107c27f9c(&uStack_b8);
    func_0x000107c27fec(&lStack_100);
    func_0x000107c288b0();
    func_0x0001087d8c40();
    func_0x000107c27f98(&ppuStack_a8);
    ppcVar7 = &pcStack_b0;
    func_0x000107c27f9c();
    puVar6[3] = &PTR_FUN_110a71990;
    puVar4[0x11] = puVar16;
    puVar4[0x12] = puVar6;
    lVar9 = puVar6[4];
    puVar4[0x14] = lVar9;
    puVar17 = puVar16;
    if (lVar9 != 0) {
      do {
        func_0x0001087d81cc();
      } while (extraout_w10 != 0);
      puVar17 = (undefined8 *)puVar4[0x11];
      puVar6 = (undefined8 *)puVar4[0x12];
    }
    lVar9 = puVar4[0xd];
    lStack_f8 = puVar4[0x10];
    lStack_100 = puVar4[0xf];
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    lStack_e8 = puVar4[9];
    lStack_f0 = puVar4[8];
    func_0x0001087d8e58(puVar4[10]);
    lStack_e0 = extraout_x8_02;
    puStack_d8 = puVar17;
    puStack_d0 = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      do {
        func_0x0001087d8244();
      } while (extraout_w10_00 != 0);
    }
    lStack_c8 = *plVar8;
    if (lStack_c8 != 0) {
      do {
        func_0x0001087d81cc();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c28150();
    lVar9 = *(long *)(lVar9 + 0x10);
    __ZNSt3__15mutex4lockEv(lVar9 + 8);
    lVar19 = *(long *)(lVar9 + 0x70);
    pcStack_b0 = FUN_1087d4410;
    ppuStack_a8 = &PTR_FUN_110a71a68;
    plVar8 = (long *)0x40;
    __Znwm();
    lVar18 = lStack_f8;
    lVar9 = lStack_100;
    lStack_100 = 0;
    lStack_f8 = 0;
    plVar8[1] = lVar18;
    *plVar8 = lVar9;
    plVar8[3] = lStack_e8;
    plVar8[2] = lStack_f0;
    plVar8[4] = lStack_e0;
    lStack_f0 = 0;
    lStack_e8 = 0;
    plVar8[6] = (long)puStack_d0;
    plVar8[5] = (long)puStack_d8;
    lStack_e0 = 0;
    puStack_d8 = (undefined8 *)0x0;
    puStack_d0 = (undefined8 *)0x0;
    plVar8[7] = lStack_c8;
    lStack_c8 = 0;
    plStack_a0 = plVar8;
    ppcStack_80 = ppcVar7;
    func_0x0001087d8be8();
    func_0x0001087d836c();
    func_0x0001087d8958();
    if (lVar19 == 0) {
      func_0x0001087d8dac();
      if (extraout_x8_03 != 0) {
        do {
          func_0x0001087d8244();
        } while (extraout_w10_02 != 0);
      }
      func_0x0001087d8610();
      (*extraout_x8_04)();
      func_0x0001087d89b0();
    }
    FUN_1087d40b0(&lStack_100);
    func_0x000107c314e0(puVar4 + 0x16,*puVar15,(long)in_x4 * 1000000);
    func_0x000107c28874(&lStack_100);
    func_0x0001087d8c38(&pcStack_b0);
    pcStack_b0 = (code *)0x0;
    func_0x0001087d85d4(lStack_f0);
    func_0x000107c28890(&pcStack_b0);
    func_0x0001087d8c18(3,lStack_f0);
    lVar9 = lStack_f0;
    func_0x0001087d88cc();
    func_0x000107c28880(lVar9,1,puVar4 + 0x14,puVar4 + 0x16);
    lVar9 = lStack_100;
    lStack_100 = 0;
    puVar4[0x15] = lVar9;
    pcStack_b0 = (code *)0x0;
    func_0x000107c27f9c(&pcStack_b0);
    plVar8 = &lStack_100;
    func_0x000107c2889c();
    puVar4[4] = puVar4[0x15];
    do {
      func_0x0001087d81cc();
    } while (extraout_w10_03 != 0);
    func_0x0001087d83f4(puVar4[4]);
    if ((extraout_w8_03 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar4 + 0x17) = 0;
      lVar9 = puVar4[4];
      func_0x0001087d8b84();
      lVar18 = *plVar8;
      if (lVar18 == 0) {
        func_0x000107c3a5c0();
        lVar18 = *plVar8;
      }
      func_0x0001087d85a8();
      plVar11 = extraout_x8_05;
      do {
        if (*plVar11 == 0) {
          func_0x0001087d8224();
          plVar11 = extraout_x8_07;
          uVar14 = extraout_w10_05;
          uVar13 = extraout_x11_00;
        }
        else {
          func_0x0001087d842c();
          plVar11 = extraout_x8_06;
          uVar14 = extraout_w10_04;
          uVar13 = extraout_x11;
        }
        if ((uVar13 & 1) != 0) {
          func_0x0001087d8294();
          if ((bool)in_ZR) {
            func_0x0001087d8234();
            uVar3 = extraout_w8;
            if ((bool)in_CY) {
              uVar3 = extraout_w9;
            }
            func_0x0001087d84b8();
            func_0x0001087d8bb8();
            *(undefined1 *)plVar8 = uVar3;
            func_0x0001087d81b8(0);
            *(long **)(lVar9 + 0x90) = plVar8;
          }
          func_0x0001087d82b8();
          *(long *)(extraout_x8_08 + 0x20) = lVar18;
          goto LAB_1087d369c;
        }
      } while ((uVar14 >> 1 & 1) == 0);
    }
    plVar8 = puVar4 + 4;
    func_0x000107c28870();
    lVar9 = *plVar8;
    func_0x0001087d8870();
    func_0x0001087d8574();
    func_0x0001087d881c();
    uVar3 = lVar9 != 0;
    in_ZR = lVar9 == 1;
    if ((bool)in_ZR) {
      func_0x0001087d8ae8();
      do {
        func_0x0001087d81cc();
      } while (extraout_w10_06 != 0);
      func_0x0001087d83f4(puVar4[0x15]);
      if ((extraout_w8_04 >> 1 & 1) == 0) {
        *(undefined1 *)(puVar4 + 0x17) = 1;
        lVar9 = puVar4[0x15];
        func_0x0001087d8b84();
        lVar18 = *plVar8;
        if (lVar18 == 0) {
          func_0x000107c3a5c0();
          lVar18 = *plVar8;
        }
        func_0x0001087d85a8();
        plVar11 = extraout_x8_09;
        do {
          if (*plVar11 != 0) {
            func_0x0001087d842c();
            plVar11 = extraout_x8_10;
            uVar14 = extraout_w10_07;
            if ((extraout_x11_01 & 1) == 0) goto LAB_1087d36fc;
LAB_1087d3788:
            func_0x0001087d8294();
            if ((bool)in_ZR) {
              func_0x0001087d8234();
              uVar1 = extraout_w8_00;
              if ((bool)uVar3) {
                uVar1 = extraout_w9_00;
              }
              func_0x0001087d84b8();
              func_0x0001087d8bb8();
              *(undefined1 *)plVar8 = uVar1;
              func_0x0001087d81b8(0);
              *(long **)(lVar9 + 0x90) = plVar8;
            }
            func_0x0001087d82b8();
            *(long *)(extraout_x8_13 + 0x20) = lVar18;
LAB_1087d369c:
            func_0x0001087d81dc();
            goto LAB_1087d3658;
          }
          func_0x0001087d8224();
          plVar11 = extraout_x8_11;
          uVar14 = extraout_w10_08;
          if ((extraout_x11_02 & 1) != 0) goto LAB_1087d3788;
LAB_1087d36fc:
        } while ((uVar14 >> 1 & 1) == 0);
      }
      func_0x0001087d83f4(puVar4[0x15]);
      lVar9 = puVar4[0x15];
      if ((extraout_w8_05 >> 5 & 1) != 0) goto LAB_1087d37c0;
      uVar13 = 0;
      lVar18 = *(long *)(lVar9 + 0x98);
      lVar9 = *(long *)(lVar9 + 0xa0);
      while ((lVar18 != lVar9 && (*(int *)(lVar18 + 0x18) != 0))) {
        func_0x0001087d8d08();
        lVar18 = extraout_x8_12;
        uVar13 = extraout_x9_00;
        lVar9 = extraout_x10_00;
      }
      uVar12 = 1;
      if ((uVar13 & 1) == 0) {
        uVar12 = 2;
      }
      in_ZR = lVar18 == lVar9;
      if (!(bool)in_ZR) {
        uVar12 = 0;
      }
      func_0x0001087d87ec(uVar12);
      func_0x0001087d8868();
      func_0x0001087d8574();
      func_0x0001087d84c4();
      func_0x0001087d86c0();
    }
    else {
      if (lVar9 == 0) {
        uVar10 = 4;
      }
      else {
        uVar10 = 3;
      }
      lStack_f0 = 0;
      lStack_f8 = 0;
      lStack_100 = 0;
      func_0x0001087d86a0(uVar10);
      FUN_108642450(&lStack_100);
      func_0x0001087d84c4();
      func_0x0001087d86c0();
    }
  }
  else {
    lStack_100 = 0;
    lStack_f8 = 0;
    lStack_f0 = 0;
    func_0x0001087d86a0(4);
    FUN_108642450(&lStack_100);
  }
  func_0x0001087d8400();
  func_0x0001087d8928();
  func_0x0001087d870c();
  func_0x0001087d89ec();
  func_0x000107c2814c(puVar16);
  func_0x000107c28868(puVar15);
  func_0x0001087d84a0();
LAB_1087d3658:
  func_0x0001087d82e8(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = extraout_x10_01;
LAB_1087d37c0:
  __ZNSt13exception_ptrC1ERKS_(&lStack_100,lVar9 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(&lStack_100);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1087d37d8);
  (*pcVar2)();
}



/* Entry: 1087d38dc; end: 1087d3f63;  */

void FUN_1087d38dc(void)

{
  undefined1 uVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  long in_x4;
  undefined8 *in_x5;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined *extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  long *extraout_x8_09;
  long *extraout_x8_10;
  long *extraout_x8_11;
  long *extraout_x8_12;
  long *plVar9;
  long *extraout_x8_13;
  long *extraout_x8_14;
  long extraout_x8_15;
  undefined1 extraout_w9;
  uint extraout_w9_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  int extraout_w10_08;
  uint extraout_w10_09;
  uint extraout_w10_10;
  undefined8 extraout_x10;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar10;
  uint extraout_w11_01;
  uint extraout_w11_02;
  uint extraout_w11_03;
  uint extraout_w11_04;
  undefined8 *unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined **ppuStack_e0;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_94;
  undefined **ppuStack_80;
  undefined8 uStack_70;
  
  func_0x0001087d8d58();
  func_0x0001087d8450();
  puVar4 = (undefined8 *)0xb0;
  uStack_70 = extraout_x8_00;
  __Znwm();
  uVar14 = *unaff_x21;
  puVar13 = puVar4 + 10;
  puVar4[0xb] = unaff_x21[1];
  *puVar13 = uVar14;
  *unaff_x21 = 0;
  unaff_x21[1] = 0;
  uVar15 = unaff_x23[1];
  uVar14 = *unaff_x23;
  puVar4[0xd] = uVar15;
  puVar4[0xc] = uVar14;
  puVar8 = puVar4;
  func_0x0001087d8b54(FUN_1087d5fac);
  unaff_x23[0x12] = extraout_x10;
  puVar8[0xf] = uVar15;
  puVar8[0xe] = uVar14;
  *unaff_x24 = 0;
  uVar14 = *in_x5;
  puVar8[5] = in_x5[1];
  puVar8[4] = uVar14;
  *puVar8 = extraout_x8_01;
  puVar8[1] = extraout_x9;
  puVar8[6] = in_x5[2];
  in_x5[1] = 0;
  in_x5[2] = 0;
  *in_x5 = 0;
  FUN_1087d3f64(puVar8 + 2);
  FUN_1087d3fcc(extraout_x8,puVar4[2]);
  func_0x000107c314e0(puVar4 + 0x13,*puVar13,in_x4 * 1000000);
  FUN_1087d2eec(puVar4 + 0x10,unaff_x23 + 0x12,puVar4 + 0x13);
  puVar4[7] = puVar4[0x10];
  do {
    func_0x0001087d81cc();
  } while (extraout_w10 != 0);
  func_0x0001087d83f4(puVar4[7]);
  ppuVar5 = &PTR___tlv_bootstrap_11340e278;
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar4 + 0x15) = 0;
    unaff_x21 = (undefined8 *)puVar4[7];
    (*(code *)PTR___tlv_bootstrap_11340e278)();
    puVar11 = *ppuVar5;
    if (puVar11 == (undefined *)0x0) {
      func_0x000107c3a5c0();
      puVar11 = *ppuVar5;
    }
    func_0x0001087d85a8();
    plVar9 = extraout_x8_02;
    do {
      if (*plVar9 == 0) {
        func_0x0001087d8224();
        plVar9 = extraout_x8_04;
        uVar2 = extraout_w10_01;
        uVar10 = extraout_w11_00;
      }
      else {
        func_0x0001087d842c();
        plVar9 = extraout_x8_03;
        uVar2 = extraout_w10_00;
        uVar10 = extraout_w11;
      }
      if ((uVar10 & 1) != 0) goto LAB_1087d3da8;
    } while ((uVar2 >> 1 & 1) == 0);
  }
  func_0x0001087d88b8();
  puVar11 = *ppuVar5;
  func_0x0001087d8468();
  func_0x0001087d87e4();
  func_0x0001087d84cc();
  if (puVar11 == (undefined *)0x0) {
    func_0x0001087d8678();
    func_0x0001087d8c4c();
  }
  else {
    uStack_a8 = 1;
    func_0x0001087d898c();
    ppuStack_a0 = ppuVar5;
    func_0x0001087d8970();
    func_0x0001087d89d0();
    uStack_110 = 0;
    func_0x0001087d8a44();
    *extraout_x8 = 0;
    uStack_110 = 0;
    puVar6 = &uStack_110;
    func_0x000107c27f98();
    func_0x0001087d8c60();
    func_0x0001087d8414();
    func_0x0001087d8ab0(&PTR_FUN_110a71b88);
    uStack_110 = 0;
    puStack_d0 = (undefined8 *)0x0;
    func_0x000107c27f98(&puStack_d0);
    func_0x0001087d8a44();
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    puStack_d0 = puVar6;
    puStack_c8 = puVar6;
    func_0x000107c27f98(&uStack_c0);
    func_0x000107c27f9c(&uStack_b8);
    func_0x000107c27fec(&uStack_110);
    func_0x000107c288b0(puVar13,&puStack_d0);
    func_0x0001087d8c40();
    func_0x000107c27f98(&puStack_c8);
    func_0x000107c27f9c(&puStack_d0);
    ppuVar5[3] = (undefined *)&PTR_FUN_110a71ae0;
    ppuStack_a0 = (undefined **)0x0;
    puVar4[0x10] = unaff_x21;
    puVar4[0x11] = ppuVar5;
    ppuVar7 = &puStack_b0;
    func_0x0001087d46f8();
    puVar11 = ppuVar5[4];
    puVar4[0x13] = puVar11;
    if (puVar11 != (undefined *)0x0) {
      do {
        func_0x0001087d81cc();
      } while (extraout_w10_02 != 0);
      unaff_x21 = (undefined8 *)puVar4[0x10];
      ppuVar5 = (undefined **)puVar4[0x11];
    }
    lVar12 = puVar4[0xc];
    uStack_108 = puVar4[0xf];
    uStack_110 = puVar4[0xe];
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    uStack_f8 = puVar4[5];
    uStack_100 = puVar4[4];
    func_0x0001087d8e58(puVar4[6]);
    uStack_f0 = extraout_x8_05;
    puStack_e8 = unaff_x21;
    ppuStack_e0 = ppuVar5;
    if (ppuVar5 != (undefined **)0x0) {
      do {
        func_0x0001087d8244();
      } while (extraout_w10_03 != 0);
    }
    func_0x000107c28150();
    lVar12 = *(long *)(lVar12 + 0x10);
    __ZNSt3__15mutex4lockEv(lVar12 + 8);
    lVar12 = *(long *)(lVar12 + 0x70);
    func_0x0001087d8e2c();
    puVar8 = (undefined8 *)0x38;
    puStack_b0 = extraout_x8_06;
    uStack_a8 = extraout_x9_00;
    __Znwm();
    uVar15 = uStack_108;
    uVar14 = uStack_110;
    uStack_110 = 0;
    uStack_108 = 0;
    puVar8[1] = uVar15;
    *puVar8 = uVar14;
    puVar8[3] = uStack_f8;
    puVar8[2] = uStack_100;
    puVar8[4] = uStack_f0;
    uStack_100 = 0;
    uStack_f8 = 0;
    puVar8[6] = ppuStack_e0;
    puVar8[5] = puStack_e8;
    uStack_f0 = 0;
    puStack_e8 = (undefined8 *)0x0;
    ppuStack_e0 = (undefined **)0x0;
    ppuStack_a0 = (undefined **)puVar8;
    ppuStack_80 = ppuVar7;
    func_0x0001087d8be8();
    func_0x0001087d836c();
    func_0x0001087d8958();
    if (lVar12 == 0) {
      func_0x0001087d8dac();
      if (extraout_x8_07 != 0) {
        do {
          func_0x0001087d8244();
        } while (extraout_w10_04 != 0);
      }
      func_0x0001087d8610();
      (*extraout_x8_08)();
      func_0x0001087d89b0();
    }
    func_0x0001087d46a8(&uStack_110);
    func_0x000107c28874(&puStack_b0);
    func_0x0001087d8800(&uStack_110);
    uStack_110 = 0;
    func_0x0001087d85d4(ppuStack_a0);
    func_0x000107c28890(&uStack_110);
    ppuStack_a0[1] = (undefined *)0x2;
    func_0x000107c2887c(ppuStack_a0,&uStack_a8);
    ppuVar5 = ppuStack_a0;
    func_0x0001087d88cc();
    func_0x000107c28898(ppuVar5,1,puVar4 + 0x13);
    puVar11 = puStack_b0;
    puStack_b0 = (undefined *)0x0;
    puVar4[0x14] = puVar11;
    uStack_110 = 0;
    func_0x0001087d8a44();
    ppuVar5 = &puStack_b0;
    func_0x000107c2889c();
    puVar4[7] = puVar11;
    do {
      func_0x0001087d81cc();
    } while (extraout_w10_05 != 0);
    func_0x0001087d83f4(puVar4[7]);
    if ((extraout_w8_01 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar4 + 0x15) = 1;
      unaff_x21 = (undefined8 *)puVar4[7];
      func_0x0001087d8c54();
      puVar11 = *ppuVar5;
      if (puVar11 == (undefined *)0x0) {
        func_0x000107c3a5c0();
        puVar11 = *ppuVar5;
      }
      func_0x0001087d85a8();
      plVar9 = extraout_x8_09;
      do {
        if (*plVar9 == 0) {
          func_0x0001087d8224();
          plVar9 = extraout_x8_11;
          uVar2 = extraout_w10_07;
          uVar10 = extraout_w11_02;
        }
        else {
          func_0x0001087d842c();
          plVar9 = extraout_x8_10;
          uVar2 = extraout_w10_06;
          uVar10 = extraout_w11_01;
        }
        if ((uVar10 & 1) != 0) goto LAB_1087d3da8;
      } while ((uVar2 >> 1 & 1) == 0);
    }
    func_0x0001087d88b8();
    puVar11 = *ppuVar5;
    func_0x0001087d8468();
    func_0x0001087d84c4();
    if (puVar11 == (undefined *)0x0) {
      func_0x0001087d8678();
      func_0x0001087d8c4c();
      func_0x0001087d84cc();
      func_0x0001087d86b8();
    }
    else {
      puVar4[0x14] = puVar4[0x13];
      do {
        func_0x0001087d81cc();
      } while (extraout_w10_08 != 0);
      func_0x0001087d83f4(puVar4[0x14]);
      if ((extraout_w8_02 >> 1 & 1) == 0) {
        *(undefined1 *)(puVar4 + 0x15) = 2;
        unaff_x21 = (undefined8 *)puVar4[0x14];
        func_0x0001087d8c54();
        puVar11 = *ppuVar5;
        if (puVar11 == (undefined *)0x0) {
          func_0x000107c3a5c0();
          puVar11 = *ppuVar5;
        }
        func_0x0001087d85a8();
        plVar9 = extraout_x8_12;
        do {
          if (*plVar9 == 0) {
            func_0x0001087d8224();
            plVar9 = extraout_x8_14;
            uVar2 = extraout_w10_10;
            uVar10 = extraout_w11_04;
          }
          else {
            func_0x0001087d842c();
            plVar9 = extraout_x8_13;
            uVar2 = extraout_w10_09;
            uVar10 = extraout_w11_03;
          }
          if ((uVar10 & 1) != 0) goto LAB_1087d3da8;
        } while ((uVar2 >> 1 & 1) == 0);
      }
      func_0x0001087d8d44();
      if ((extraout_w9_00 >> 5 & 1) != 0) goto LAB_1087d3e38;
      func_0x0001087d8b6c();
      func_0x0001087d84c4();
      uStack_a8 = puVar4[8];
      puStack_b0 = (undefined *)puVar4[7];
      ppuStack_a0 = (undefined **)puVar4[9];
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[7] = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      FUN_1087d4008(puVar4 + 2,&puStack_b0);
      func_0x0001087d8c4c();
      FUN_108642450(puVar4 + 7);
      func_0x0001087d84cc();
      func_0x0001087d86b8();
    }
  }
  func_0x0001087d8400();
  func_0x0001087d8928();
  func_0x0001087d870c();
  func_0x0001087d89ec();
  func_0x0001087d8cf4();
  func_0x000107c28868(puVar13);
  func_0x0001087d84a0();
LAB_1087d3e20:
  func_0x0001087d82e8(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1087d3e38:
  func_0x0001087d861c(&puStack_b0);
  __ZSt17rethrow_exceptionSt13exception_ptr(&puStack_b0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1087d3e4c);
  (*pcVar3)();
LAB_1087d3da8:
  func_0x0001087d8294();
  if ((bool)in_ZR) {
    func_0x0001087d8234();
    uVar1 = extraout_w8;
    if ((bool)in_CY) {
      uVar1 = extraout_w9;
    }
    func_0x0001087d84b8();
    func_0x0001087d8bb8();
    *(undefined1 *)ppuVar5 = uVar1;
    func_0x0001087d81b8(0);
    unaff_x21[0x12] = ppuVar5;
  }
  func_0x0001087d82b8();
  *(undefined **)(extraout_x8_15 + 0x20) = puVar11;
  func_0x0001087d81dc();
  goto LAB_1087d3e20;
}



/* Entry: 1087d3f64; end: 1087d3fcb;  */

undefined8 * FUN_1087d3f64(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0xc0;
  __Znwm();
  puVar2 = puVar1;
  func_0x0001087d8414();
  *puVar2 = &PTR_SUB_110a71900;
  *(undefined1 *)(puVar2 + 0x13) = 0;
  *(undefined1 *)(puVar2 + 0x17) = 0;
  uStack_28 = 0;
  func_0x000107c27f98(&uStack_28);
  func_0x0001087d8ce4();
  *param_1 = puVar1;
  param_1[1] = puVar1;
  func_0x0001087d8cdc();
  return param_1;
}



/* Entry: 1087d3fcc; end: 1087d4007;  */

void FUN_1087d3fcc(undefined8 param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    do {
      func_0x0001087d81cc();
    } while (extraout_w10 != 0);
  }
  func_0x0001087d8960(param_2);
  return;
}



/* Entry: 1087d4008; end: 1087d40af;  */

void FUN_1087d4008(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_1 + 8);
  do {
    uStack_38 = 0;
    lVar1 = lVar2 + 0x10;
    func_0x0001087d8538(lVar1,&uStack_38);
    if ((int)lVar1 != 0) {
      if (*(char *)(lVar2 + 0xb8) == '\x01') {
        FUN_108642450(lVar2 + 0x98);
        *(undefined1 *)(lVar2 + 0xb8) = 0;
      }
      *(undefined8 *)(lVar2 + 0x98) = 0;
      *(undefined8 *)(lVar2 + 0xa0) = 0;
      *(undefined8 *)(lVar2 + 0xa8) = 0;
      uVar3 = *param_2;
      *(undefined8 *)(lVar2 + 0xa0) = param_2[1];
      *(undefined8 *)(lVar2 + 0x98) = uVar3;
      *(undefined8 *)(lVar2 + 0xa8) = param_2[2];
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      *(undefined8 *)(lVar2 + 0xb0) = param_2[3];
      *(undefined1 *)(lVar2 + 0xb8) = 1;
      func_0x0001087d837c();
      break;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  func_0x000107c27fa0((long *)(param_1 + 8),0);
  return;
}



/* Entry: 1087d40b0; end: 1087d4143;  */

undefined8 FUN_1087d40b0(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c27f9c(param_1 + 0x38);
  func_0x0001087d40e4(param_1 + 0x28);
  func_0x000104be1594(param_1 + 0x10);
  func_0x0001005528ec();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1087d4144; end: 1087d4157;  */

void FUN_1087d4144(void)

{
  func_0x0001087d4108();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087d4158; end: 1087d4163;  */

void FUN_1087d4158(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71940;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087d4164; end: 1087d4177;  */

void FUN_1087d4164(void)

{
  FUN_1087d4158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087d4178; end: 1087d417f;  */

void FUN_1087d4178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001087d8724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1087d4180; end: 1087d41bf;  */

void FUN_1087d4180(void)

{
  func_0x0001087d8a5c();
  func_0x0001087d42a0();
  return;
}



/* Entry: 1087d41c0; end: 1087d424b;  */

void FUN_1087d41c0(void)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  func_0x0001087d8694();
  FUN_1087d42c4();
  lVar2 = *(long *)(unaff_x19 + 0x10);
  do {
    uStack_28 = 0;
    lVar1 = lVar2 + 0x10;
    func_0x0001087d8538(lVar1,&uStack_28);
    if ((int)lVar1 != 0) {
      if (*(char *)(lVar2 + 0xb0) == '\x01') {
        func_0x000108644cbc(lVar2 + 0x98);
        *(undefined1 *)(lVar2 + 0xb0) = 0;
      }
      FUN_1087d42c4(lVar2 + 0x98,auStack_40);
      *(undefined1 *)(lVar2 + 0xb0) = 1;
      func_0x0001087d837c();
      break;
    }
  } while (((uint)uStack_28 >> 1 & 1) == 0);
  func_0x000108644cbc(auStack_40);
  return;
}



/* Entry: 1087d424c; end: 1087d424f;  */

undefined8 * FUN_1087d424c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71a38;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    func_0x000108644cbc(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087d4250; end: 1087d4263;  */

void FUN_1087d4250(void)

{
  FUN_1087d4264();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087d4264; end: 1087d42c3;  */

undefined8 * FUN_1087d4264(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71a38;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    func_0x000108644cbc(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087d42c4; end: 1087d43e3;  */

void FUN_1087d42c4(void)

{
  code *pcVar1;
  undefined1 in_ZR;
  long *plVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x21;
  long *plVar3;
  long unaff_x23;
  long lVar4;
  long lVar5;
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long *plStack_48;
  
  func_0x0001087d8898();
  if (!(bool)in_ZR) {
    if (0x249249249249249 < (ulong)(extraout_x8 / 0x70)) {
      FUN_108644f44();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1087d43a0);
      (*pcVar1)();
    }
    plVar3 = unaff_x19 + 2;
    plVar2 = plVar3;
    func_0x000108645030();
    *unaff_x19 = (long)plVar2;
    unaff_x19[1] = (long)plVar2;
    func_0x0001087d86e4(0x70);
    for (; unaff_x21 != unaff_x23; unaff_x21 = unaff_x21 + 0x70) {
      func_0x0001087d8c7c();
      lVar5 = *(long *)(unaff_x21 + 0x20);
      lVar4 = *(long *)(unaff_x21 + 0x18);
      *(undefined1 *)(plVar3 + 5) = *(undefined1 *)(unaff_x21 + 0x28);
      plVar3[4] = lVar5;
      plVar3[3] = lVar4;
      func_0x000107c279a0(plVar3 + 6,unaff_x21 + 0x30);
      func_0x000107c279a0(plVar3 + 10,unaff_x21 + 0x50);
      plVar3 = plStack_48 + 0xe;
      plStack_48 = plVar3;
    }
    uStack_58 = 1;
    FUN_1086451fc(auStack_70);
    unaff_x19[1] = (long)plVar3;
  }
  uStack_78 = 1;
  FUN_1087d43e4(auStack_80);
  return;
}



/* Entry: 1087d43e4; end: 1087d440f;  */

long FUN_1087d43e4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000108644cf0(param_1);
  }
  return param_1;
}



/* Entry: 1087d4410; end: 1087d45e7;  */

void FUN_1087d4410(long param_1)

{
  long *plVar1;
  uint extraout_w8;
  uint extraout_w8_00;
  int extraout_w10;
  undefined8 *puVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  func_0x0001087d83f4(puVar2[7]);
  if (((extraout_w8 >> 1 & 1) == 0) &&
     (func_0x0001087d83f4(puVar2[7]), (extraout_w8_00 >> 5 & 1) == 0)) {
    plVar1 = (long *)*puVar2;
    uStack_78 = puVar2[6];
    uStack_80 = puVar2[5];
    if (puVar2[6] != 0) {
      do {
        func_0x0001087d8244();
      } while (extraout_w10 != 0);
    }
    (**(code **)(*plVar1 + 0x28))();
    FUN_108644e80(&uStack_80);
  }
  return;
}



/* Entry: 1087d45e8; end: 1087d4683;  */

undefined8 FUN_1087d45e8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [24];
  undefined1 uStack_68;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000107c27994(&uStack_a0);
  uStack_38 = uStack_98;
  uStack_40 = uStack_a0;
  uStack_30 = uStack_90;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  auStack_60[0] = 0;
  uStack_48 = 0;
  auStack_80[0] = 0;
  uStack_68 = 0;
  FUN_108645558(param_1,&uStack_40,*param_3,0,0,auStack_60,auStack_80);
  func_0x000107c279a4(auStack_80);
  func_0x000107c279a4(auStack_60);
  func_0x000107c27914(&uStack_40);
  func_0x000107c27914(&uStack_a0);
  return param_1;
}



/* Entry: 1087d4684; end: 1087d46a3;  */

void FUN_1087d4684(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1087d40b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087d46a4; end: 1087d46a7;  */

void FUN_1087d46a4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1087d46a8; end: 1087d471f;  */

undefined8 FUN_1087d46a8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001087d46d4(param_1 + 0x28);
  func_0x000104be1594(param_1 + 0x10);
  func_0x0001005528ec();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1087d4720; end: 1087d472b;  */

void FUN_1087d4720(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71a90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087d472c; end: 1087d473f;  */

void FUN_1087d472c(void)

{
  FUN_1087d4720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087d4740; end: 1087d4747;  */

void FUN_1087d4740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001087d8724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1087d4748; end: 1087d4787;  */

void FUN_1087d4748(void)

{
  func_0x0001087d8a5c();
  func_0x0001087d4868();
  return;
}



/* Entry: 1087d4788; end: 1087d4813;  */

void FUN_1087d4788(void)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  func_0x0001087d8694();
  FUN_1087d491c();
  lVar2 = *(long *)(unaff_x19 + 0x10);
  do {
    uStack_28 = 0;
    lVar1 = lVar2 + 0x10;
    func_0x0001087d8538(lVar1,&uStack_28);
    if ((int)lVar1 != 0) {
      if (*(char *)(lVar2 + 0xb0) == '\x01') {
        FUN_108642450(lVar2 + 0x98);
        *(undefined1 *)(lVar2 + 0xb0) = 0;
      }
      FUN_1087d491c(lVar2 + 0x98,auStack_40);
      *(undefined1 *)(lVar2 + 0xb0) = 1;
      func_0x0001087d837c();
      break;
    }
  } while (((uint)uStack_28 >> 1 & 1) == 0);
  FUN_108642450(auStack_40);
  return;
}



/* Entry: 1087d4814; end: 1087d4817;  */

undefined8 * FUN_1087d4814(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71b88;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    FUN_108642450(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087d4818; end: 1087d482b;  */

void FUN_1087d4818(void)

{
  FUN_1087d482c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087d482c; end: 1087d488b;  */

undefined8 * FUN_1087d482c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71b88;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    FUN_108642450(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087d488c; end: 1087d48f7;  */

void FUN_1087d488c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  plVar4 = (long *)*puVar5;
  uStack_28 = puVar5[6];
  uStack_30 = puVar5[5];
  if (puVar5[6] != 0) {
    plVar1 = (long *)(puVar5[6] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*plVar4 + 0x20))(plVar4,puVar5 + 2,&uStack_30);
  FUN_1086461d0(&uStack_30);
  return;
}



/* Entry: 1087d48f8; end: 1087d4917;  */

void FUN_1087d48f8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1087d46a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087d4918; end: 1087d491b;  */

void FUN_1087d4918(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1087d491c; end: 1087d4a87;  */

void FUN_1087d491c(void)

{
  code *pcVar1;
  undefined1 in_ZR;
  long *plVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x21;
  long *plVar3;
  long unaff_x23;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long *plStack_48;
  
  func_0x0001087d8898();
  if (!(bool)in_ZR) {
    if (0x108421084210842 < (ulong)(extraout_x8 / 0xf8)) {
      FUN_108642b1c();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1087d4a34);
      (*pcVar1)();
    }
    plVar3 = unaff_x19 + 2;
    plVar2 = plVar3;
    func_0x000108642bb4();
    *unaff_x19 = (long)plVar2;
    unaff_x19[1] = (long)plVar2;
    func_0x0001087d86e4(0xf8);
    for (; unaff_x21 != unaff_x23; unaff_x21 = unaff_x21 + 0xf8) {
      func_0x0001087d8c7c();
      lVar5 = *(long *)(unaff_x21 + 0x20);
      lVar4 = *(long *)(unaff_x21 + 0x18);
      uVar6 = *(undefined8 *)(unaff_x21 + 0x21);
      *(undefined8 *)((long)plVar3 + 0x29) = *(undefined8 *)(unaff_x21 + 0x29);
      *(undefined8 *)((long)plVar3 + 0x21) = uVar6;
      plVar3[4] = lVar5;
      plVar3[3] = lVar4;
      func_0x000107c279a0(plVar3 + 7,unaff_x21 + 0x38);
      func_0x000104be0ccc(plVar3 + 0xb,unaff_x21 + 0x58);
      lVar5 = *(long *)(unaff_x21 + 0x80);
      lVar4 = *(long *)(unaff_x21 + 0x78);
      lVar8 = *(long *)(unaff_x21 + 0x90);
      lVar7 = *(long *)(unaff_x21 + 0x88);
      lVar10 = *(long *)(unaff_x21 + 0xa0);
      lVar9 = *(long *)(unaff_x21 + 0x98);
      *(undefined1 *)(plVar3 + 0x15) = *(undefined1 *)(unaff_x21 + 0xa8);
      plVar3[0x14] = lVar10;
      plVar3[0x13] = lVar9;
      plVar3[0x12] = lVar8;
      plVar3[0x11] = lVar7;
      plVar3[0x10] = lVar5;
      plVar3[0xf] = lVar4;
      func_0x000107c279d4(plVar3 + 0x16,unaff_x21 + 0xb0);
      lVar5 = *(long *)(unaff_x21 + 0xd8);
      lVar4 = *(long *)(unaff_x21 + 0xd0);
      lVar8 = *(long *)(unaff_x21 + 0xe8);
      lVar7 = *(long *)(unaff_x21 + 0xe0);
      plVar3[0x1e] = *(long *)(unaff_x21 + 0xf0);
      plVar3[0x1b] = lVar5;
      plVar3[0x1a] = lVar4;
      plVar3[0x1d] = lVar8;
      plVar3[0x1c] = lVar7;
      plVar3 = plStack_48 + 0x1f;
      plStack_48 = plVar3;
    }
    uStack_58 = 1;
    FUN_108642d90(auStack_70);
    unaff_x19[1] = (long)plVar3;
  }
  uStack_78 = 1;
  FUN_1087d4a88(auStack_80);
  return;
}


