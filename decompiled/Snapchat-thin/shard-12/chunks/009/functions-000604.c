/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109c4a598; end: 109c4a5af;  */

void FUN_109c4a598(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109c4a5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 109c4a5b0; end: 109c4a5e7;  */

undefined8 FUN_109c4a5b0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b2d080);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109c4a5e8; end: 109c4a5eb;  */

void FUN_109c4a5e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c4a5ec; end: 109c4a72f;  */

undefined8 * FUN_109c4a5ec(undefined4 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  param_2[1] = &PTR_FUN_110b2d0d0;
  *(undefined8 *)((long)param_2 + 0x61) = 0;
  *(undefined8 *)((long)param_2 + 0x59) = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xb] = 0;
  param_2[10] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  *(undefined2 *)((long)param_2 + 0x69) = 1;
  *(undefined1 *)((long)param_2 + 0x6b) = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0x3f800000;
  *(undefined1 *)(param_2 + 0x11) = 0;
  *(undefined1 *)((long)param_2 + 0x8c) = 0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  *(undefined1 *)((long)param_2 + 0x94) = 0;
  *param_2 = &PTR_FUN_110b2d0a8;
  *(undefined4 *)(param_2 + 0x13) = param_1;
  *(undefined8 *)((long)param_2 + 0xa4) = 0;
  *(undefined8 *)((long)param_2 + 0x9c) = 0;
  *(undefined4 *)((long)param_2 + 0xac) = 0;
  func_0x000107c31940(auStack_58,PTR_DAT_1132edb20);
  puVar1 = auStack_58;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar1,0,&UNK_10f5a582c,7);
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  lStack_30 = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_2 + 7,&uStack_40);
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  *(undefined1 *)((long)param_2 + 0x6b) = 1;
  return param_2;
}



/* Entry: 109c4a730; end: 109c4a77f;  */

long FUN_109c4a730(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4a780; end: 109c4a96b;  */

void FUN_109c4a780(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar7 = *plVar8;
  bVar3 = *(byte *)(param_1 + 0x6b);
  if (bVar3 == 1) {
    plStack_98 = (long *)plVar8[1];
    lStack_a0 = lVar7;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar7 + 8,
               *(undefined1 *)(lVar7 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  if (*(char *)(*plVar8 + 0x48) == '\x02') {
    lVar7 = param_1;
    func_0x000109c60814(param_1,plVar8,(undefined8 *)*param_3,(long)*(char *)(param_1 + 0x84),0x7f);
    if ((int)lVar7 == 0) goto LAB_109c4a940;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (*(long *)*param_3 + 0x20,param_1 + 0x50);
    lVar7 = *(long *)*param_3;
    *(undefined4 *)(lVar7 + 0x3c) = *(undefined4 *)(*plVar8 + 0x3c);
    *(undefined4 *)(lVar7 + 0x50) = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(lVar7 + 0x4c) = *(undefined4 *)(param_1 + 0x80);
  }
  else {
    FUN_109c11af8(*(undefined8 *)*param_3);
    FUN_109c23d78(*(undefined4 *)(param_1 + 0x98),*(undefined8 *)*param_3);
    *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar8 + 0x3c);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_109c4a940:
  func_0x000105688514(&UNK_10f5a5ae1);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109c4a950);
  (*pcVar6)();
}



/* Entry: 109c4a96c; end: 109c4a96f;  */

undefined8 * FUN_109c4a96c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4a970; end: 109c4a993;  */

void FUN_109c4a970(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4a994; end: 109c4a99b;  */

void FUN_109c4a994(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lVar7 = param_1 + -8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar8 = *plVar9;
  bVar3 = *(byte *)(param_1 + 99);
  if (bVar3 == 1) {
    plStack_98 = (long *)plVar9[1];
    lStack_a0 = lVar8;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar8 + 8,
               *(undefined1 *)(lVar8 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar8 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  if (*(char *)(*plVar9 + 0x48) == '\x02') {
    func_0x000109c60814(lVar7,plVar9,(undefined8 *)*param_3,(long)*(char *)(param_1 + 0x7c),0x7f);
    if ((int)lVar7 == 0) goto LAB_109c4a940;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (*(long *)*param_3 + 0x20,param_1 + 0x48);
    lVar7 = *(long *)*param_3;
    *(undefined4 *)(lVar7 + 0x3c) = *(undefined4 *)(*plVar9 + 0x3c);
    *(undefined4 *)(lVar7 + 0x50) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(lVar7 + 0x4c) = *(undefined4 *)(param_1 + 0x78);
  }
  else {
    FUN_109c11af8(*(undefined8 *)*param_3);
    FUN_109c23d78(*(undefined4 *)(param_1 + 0x90),*(undefined8 *)*param_3);
    *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar9 + 0x3c);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_109c4a940:
  func_0x000105688514(&UNK_10f5a5ae1);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109c4a950);
  (*pcVar6)();
}



/* Entry: 109c4a99c; end: 109c4a9eb;  */

long FUN_109c4a99c(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4a9ec; end: 109c4abcf;  */

void FUN_109c4a9ec(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar7 = *plVar8;
  bVar3 = *(byte *)(param_1 + 0x6b);
  if (bVar3 == 1) {
    plStack_98 = (long *)plVar8[1];
    lStack_a0 = lVar7;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar7 + 8,
               *(undefined1 *)(lVar7 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  if (*(char *)(*plVar8 + 0x48) == '\x02') {
    lVar7 = param_1;
    FUN_109c60680(param_1,plVar8);
    if ((int)lVar7 == 0) goto LAB_109c4aba4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (*(long *)*param_3 + 0x20,param_1 + 0x50);
    lVar7 = *(long *)*param_3;
    *(undefined4 *)(lVar7 + 0x3c) = *(undefined4 *)(*plVar8 + 0x3c);
    *(undefined4 *)(lVar7 + 0x50) = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(lVar7 + 0x4c) = *(undefined4 *)(param_1 + 0x80);
  }
  else {
    FUN_109c11af8(*(undefined8 *)*param_3);
    func_0x000109c23ef8(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c),
                        *(undefined8 *)*param_3);
    *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar8 + 0x3c);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_109c4aba4:
  func_0x000105688514(&UNK_10f5a5ae1);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109c4abb4);
  (*pcVar6)();
}



/* Entry: 109c4abd0; end: 109c4abd3;  */

undefined8 * FUN_109c4abd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4abd4; end: 109c4abf7;  */

void FUN_109c4abd4(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4abf8; end: 109c4abff;  */

void FUN_109c4abf8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lVar7 = param_1 + -8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar8 = *plVar9;
  bVar3 = *(byte *)(param_1 + 99);
  if (bVar3 == 1) {
    plStack_98 = (long *)plVar9[1];
    lStack_a0 = lVar8;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar8 + 8,
               *(undefined1 *)(lVar8 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar8 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  if (*(char *)(*plVar9 + 0x48) == '\x02') {
    FUN_109c60680(lVar7,plVar9);
    if ((int)lVar7 == 0) goto LAB_109c4aba4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (*(long *)*param_3 + 0x20,param_1 + 0x48);
    lVar7 = *(long *)*param_3;
    *(undefined4 *)(lVar7 + 0x3c) = *(undefined4 *)(*plVar9 + 0x3c);
    *(undefined4 *)(lVar7 + 0x50) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(lVar7 + 0x4c) = *(undefined4 *)(param_1 + 0x78);
  }
  else {
    FUN_109c11af8(*(undefined8 *)*param_3);
    func_0x000109c23ef8(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),
                        *(undefined8 *)*param_3);
    *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar9 + 0x3c);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_109c4aba4:
  func_0x000105688514(&UNK_10f5a5ae1);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109c4abb4);
  (*pcVar6)();
}



/* Entry: 109c4ac00; end: 109c4ac4f;  */

long FUN_109c4ac00(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4ac50; end: 109c4b273;  */

void FUN_109c4ac50(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  uint uVar10;
  code *pcVar11;
  bool bVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  long *plVar27;
  ulong uVar28;
  uint uVar29;
  long lVar30;
  ulong uVar31;
  ulong uStack_d8;
  int iStack_cc;
  long lStack_c8;
  long *plStack_c0;
  undefined1 auStack_b8 [72];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar27 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar20 = *plVar27;
  bVar6 = *(byte *)(param_1 + 0x6b);
  if (bVar6 == 1) {
    plStack_c0 = (long *)plVar27[1];
    lStack_c8 = lVar20;
    if (plStack_c0 != (long *)0x0) {
      plVar1 = plStack_c0 + 1;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = *plVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_b8,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar20 + 8,
               *(undefined1 *)(lVar20 + 0x48));
    FUN_109c18570(&lStack_c8,auStack_b8);
  }
  func_0x000109c1e534(*param_3,&lStack_c8);
  plVar1 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    plVar2 = plStack_c0 + 1;
    do {
      lVar20 = *plVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = lVar20 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar6 & 1) == 0) {
    FUN_109c180ec(auStack_b8);
  }
  if (((*(int *)(param_1 + 0x49c) == 3) || (*(int *)(param_1 + 0x49c) == -1)) &&
     (*(char *)(*plVar27 + 0x48) == '\x02')) {
    lVar20 = param_1;
    func_0x000109c60a94(param_1,plVar27,*param_3);
    if ((int)lVar20 == 0) goto LAB_109c4b220;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (*(long *)*param_3 + 0x20,param_1 + 0x50);
    lVar20 = *(long *)*param_3;
    *(undefined4 *)(lVar20 + 0x3c) = *(undefined4 *)(*plVar27 + 0x3c);
    *(undefined4 *)(lVar20 + 0x50) = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(lVar20 + 0x4c) = *(undefined4 *)(param_1 + 0x80);
  }
  else {
    FUN_109c11af8(*(undefined8 *)*param_3);
    lVar20 = *(long *)*param_3;
    uVar18 = *(uint *)(param_1 + 0x49c);
    if ((int)uVar18 < 0) {
      if (*(int *)(lVar20 + 0x3c) == 1) {
        uVar18 = 1;
        goto LAB_109c4ade4;
      }
      uVar16 = *(uint *)(lVar20 + 8);
      iStack_cc = 0x65;
      uVar18 = 0xffffffff;
      bVar8 = true;
      bVar12 = true;
    }
    else {
LAB_109c4ade4:
      bVar8 = false;
      uVar16 = *(uint *)(lVar20 + 8);
      bVar12 = uVar16 - 1 == uVar18;
      iStack_cc = 0x65;
      if (!bVar12) {
        iStack_cc = 0x66;
      }
    }
    if ((int)uVar16 < 1) {
      uVar29 = 0xffffffff;
      if (bVar8) goto LAB_109c4ae14;
LAB_109c4ae30:
      if ((int)uVar18 < (int)uVar16) {
        uStack_d8 = (ulong)*(uint *)(lVar20 + (ulong)uVar18 * 4 + 0xc);
      }
      else {
        uStack_d8 = 0xffffffff;
      }
      bVar8 = bVar12;
      if (uVar18 != 2) {
        bVar8 = true;
      }
      if (!bVar8) {
        if ((int)uVar16 < 2) {
          iVar19 = -1;
        }
        else {
          iVar19 = *(int *)(lVar20 + 0x10);
        }
        uVar29 = iVar19 * uVar29;
      }
    }
    else {
      uVar29 = *(uint *)(lVar20 + 0xc);
      if (!bVar8) goto LAB_109c4ae30;
LAB_109c4ae14:
      if ((int)uVar16 < 1) {
        uStack_d8 = 0xffffffff;
      }
      else {
        uStack_d8 = (ulong)*(uint *)(lVar20 + (ulong)(uVar16 - 1) * 4 + 0xc);
      }
    }
    lVar21 = *(long *)(param_1 + 0x70);
    uVar16 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar16) {
      uVar16 = 5;
    }
    iVar19 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar20 + 0xc,uVar16);
    pcVar11 = FUN_109c4b2a4;
    if (!bVar12) {
      pcVar11 = (code *)0x109c4b35c;
    }
    if (0 < (int)uVar29) {
      uVar25 = 0;
      uVar18 = 0;
      if (uVar29 != 0) {
        uVar18 = iVar19 / (int)uVar29;
      }
      uVar16 = 0;
      uVar23 = (uint)uStack_d8;
      if (uVar23 != 0) {
        uVar16 = (int)uVar18 / (int)uVar23;
      }
      uVar28 = (ulong)uVar16;
      uVar17 = -(ulong)(uVar16 >> 0x1f) & 0xfffffffc00000000 | uVar28 << 2;
      if ((int)uVar16 < 0) {
        uVar17 = 0xffffffffffffffff;
      }
      lVar30 = (long)(int)uVar23;
      if (bVar12) {
        lVar5 = lVar30;
        uVar9 = 1;
      }
      else {
        lVar5 = 1;
        uVar9 = uVar28;
      }
      if (iStack_cc == 0x65) {
        uVar3 = uVar23;
        uVar4 = uVar23;
        uVar10 = 1;
      }
      else {
        uVar4 = 1;
        uVar3 = uVar16;
        uVar10 = uVar16;
      }
      uVar22 = -(uStack_d8 >> 0x1f) & 0xfffffffc00000000 | uStack_d8 << 2;
      if ((int)uVar23 < 0) {
        uVar22 = 0xffffffffffffffff;
      }
      lVar26 = *(long *)(lVar20 + 0x40);
      lVar20 = lVar26;
      do {
        uVar13 = uVar17;
        __Znam();
        lVar24 = lVar20;
        uVar15 = uVar28;
        uVar31 = uVar13;
        if (0 < (int)uVar16) {
          do {
            _vDSP_maxv(lVar24,uVar9,uVar31,lVar30);
            uVar15 = uVar15 - 1;
            lVar24 = lVar24 + lVar5 * 4;
            uVar31 = uVar31 + 4;
          } while (uVar15 != 0);
        }
        lVar24 = lVar26 + uVar25 * (long)(int)uVar18 * 4;
        if (lVar21 == 0) {
          uVar15 = uVar22;
          __Znam();
          _bzero();
          lStack_c8 = CONCAT44(lStack_c8._4_4_,0x3f800000);
          _vDSP_vfill(&lStack_c8,uVar15,1,lVar30);
          _cblas_sgemm(0xbf800000,0x3f800000,iStack_cc,0x6f,0x6f,uVar28,uStack_d8,1,uVar13,uVar10,
                       uVar15,uVar4);
          __ZdaPv(uVar15);
        }
        else {
          lVar14 = lVar21;
          func_0x000109c1a4c0(lVar21,lVar30);
          _cblas_sgemm(0xbf800000,0x3f800000,iStack_cc,0x6f,0x6f,uVar28,uStack_d8,1,uVar13,uVar10,
                       lVar14,uVar4);
        }
        lStack_c8._0_4_ = uVar18;
        _vvexpf(lVar24,lVar24,&lStack_c8);
        if (lVar21 == 0) {
          uVar15 = uVar22;
          __Znam(uVar22);
          _bzero();
          lStack_c8._0_4_ = 0x3f800000;
          _vDSP_vfill(&lStack_c8,uVar15,1,lVar30);
          _cblas_sgemv(0x3f800000,0,iStack_cc,0x6f,uVar28,uStack_d8,lVar24,uVar3,uVar15,1,uVar13,1);
          __ZdaPv(uVar15);
        }
        else {
          lVar14 = lVar21;
          func_0x000109c1a4c0(lVar21,lVar30);
          _cblas_sgemv(0x3f800000,0,iStack_cc,0x6f,uVar28,uStack_d8,lVar24,uVar3,lVar14,1,uVar13,1);
        }
        lStack_c8 = CONCAT44(lStack_c8._4_4_,uVar16);
        _vvrecf(uVar13,uVar13,&lStack_c8);
        (*pcVar11)(iStack_cc,uVar28,uStack_d8,uVar13,lVar24,lVar21);
        __ZdaPv(uVar13);
        uVar25 = uVar25 + 1;
        lVar20 = lVar20 + (-(ulong)(uVar18 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar18 << 2);
      } while (uVar25 != uVar29);
    }
    *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar27 + 0x3c);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_109c4b220:
  func_0x000105688514(&UNK_10f5a5ae1);
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x109c4b230);
  (*pcVar11)();
}



/* Entry: 109c4b274; end: 109c4b277;  */

undefined8 * FUN_109c4b274(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4b278; end: 109c4b29b;  */

void FUN_109c4b278(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4b29c; end: 109c4b2a3;  */

void FUN_109c4b29c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  uint uVar10;
  code *pcVar11;
  bool bVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  long *plVar27;
  ulong uVar28;
  uint uVar29;
  long lVar30;
  ulong uVar31;
  ulong uStack_d8;
  int iStack_cc;
  long lStack_c8;
  long *plStack_c0;
  undefined1 auStack_b8 [72];
  long lStack_70;
  
  lVar16 = param_1 + -8;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar27 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar21 = *plVar27;
  bVar6 = *(byte *)(param_1 + 99);
  if (bVar6 == 1) {
    plStack_c0 = (long *)plVar27[1];
    lStack_c8 = lVar21;
    if (plStack_c0 != (long *)0x0) {
      plVar1 = plStack_c0 + 1;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = *plVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_b8,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar21 + 8,
               *(undefined1 *)(lVar21 + 0x48));
    FUN_109c18570(&lStack_c8,auStack_b8);
  }
  func_0x000109c1e534(*param_3,&lStack_c8);
  plVar1 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    plVar2 = plStack_c0 + 1;
    do {
      lVar21 = *plVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = lVar21 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar6 & 1) == 0) {
    FUN_109c180ec(auStack_b8);
  }
  if (((*(int *)(param_1 + 0x494) == 3) || (*(int *)(param_1 + 0x494) == -1)) &&
     (*(char *)(*plVar27 + 0x48) == '\x02')) {
    func_0x000109c60a94(lVar16,plVar27,*param_3);
    if ((int)lVar16 == 0) goto LAB_109c4b220;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (*(long *)*param_3 + 0x20,param_1 + 0x48);
    lVar16 = *(long *)*param_3;
    *(undefined4 *)(lVar16 + 0x3c) = *(undefined4 *)(*plVar27 + 0x3c);
    *(undefined4 *)(lVar16 + 0x50) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(lVar16 + 0x4c) = *(undefined4 *)(param_1 + 0x78);
  }
  else {
    FUN_109c11af8(*(undefined8 *)*param_3);
    lVar16 = *(long *)*param_3;
    uVar19 = *(uint *)(param_1 + 0x494);
    if ((int)uVar19 < 0) {
      if (*(int *)(lVar16 + 0x3c) == 1) {
        uVar19 = 1;
        goto LAB_109c4ade4;
      }
      uVar17 = *(uint *)(lVar16 + 8);
      iStack_cc = 0x65;
      uVar19 = 0xffffffff;
      bVar8 = true;
      bVar12 = true;
    }
    else {
LAB_109c4ade4:
      bVar8 = false;
      uVar17 = *(uint *)(lVar16 + 8);
      bVar12 = uVar17 - 1 == uVar19;
      iStack_cc = 0x65;
      if (!bVar12) {
        iStack_cc = 0x66;
      }
    }
    if ((int)uVar17 < 1) {
      uVar29 = 0xffffffff;
      if (bVar8) goto LAB_109c4ae14;
LAB_109c4ae30:
      if ((int)uVar19 < (int)uVar17) {
        uStack_d8 = (ulong)*(uint *)(lVar16 + (ulong)uVar19 * 4 + 0xc);
      }
      else {
        uStack_d8 = 0xffffffff;
      }
      bVar8 = bVar12;
      if (uVar19 != 2) {
        bVar8 = true;
      }
      if (!bVar8) {
        if ((int)uVar17 < 2) {
          iVar20 = -1;
        }
        else {
          iVar20 = *(int *)(lVar16 + 0x10);
        }
        uVar29 = iVar20 * uVar29;
      }
    }
    else {
      uVar29 = *(uint *)(lVar16 + 0xc);
      if (!bVar8) goto LAB_109c4ae30;
LAB_109c4ae14:
      if ((int)uVar17 < 1) {
        uStack_d8 = 0xffffffff;
      }
      else {
        uStack_d8 = (ulong)*(uint *)(lVar16 + (ulong)(uVar17 - 1) * 4 + 0xc);
      }
    }
    lVar21 = *(long *)(param_1 + 0x68);
    uVar17 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar17) {
      uVar17 = 5;
    }
    iVar20 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar16 + 0xc,uVar17);
    pcVar11 = FUN_109c4b2a4;
    if (!bVar12) {
      pcVar11 = (code *)0x109c4b35c;
    }
    if (0 < (int)uVar29) {
      uVar25 = 0;
      uVar19 = 0;
      if (uVar29 != 0) {
        uVar19 = iVar20 / (int)uVar29;
      }
      uVar17 = 0;
      uVar23 = (uint)uStack_d8;
      if (uVar23 != 0) {
        uVar17 = (int)uVar19 / (int)uVar23;
      }
      uVar28 = (ulong)uVar17;
      uVar18 = -(ulong)(uVar17 >> 0x1f) & 0xfffffffc00000000 | uVar28 << 2;
      if ((int)uVar17 < 0) {
        uVar18 = 0xffffffffffffffff;
      }
      lVar30 = (long)(int)uVar23;
      if (bVar12) {
        lVar5 = lVar30;
        uVar9 = 1;
      }
      else {
        lVar5 = 1;
        uVar9 = uVar28;
      }
      if (iStack_cc == 0x65) {
        uVar3 = uVar23;
        uVar4 = uVar23;
        uVar10 = 1;
      }
      else {
        uVar4 = 1;
        uVar3 = uVar17;
        uVar10 = uVar17;
      }
      uVar22 = -(uStack_d8 >> 0x1f) & 0xfffffffc00000000 | uStack_d8 << 2;
      if ((int)uVar23 < 0) {
        uVar22 = 0xffffffffffffffff;
      }
      lVar26 = *(long *)(lVar16 + 0x40);
      lVar16 = lVar26;
      do {
        uVar13 = uVar18;
        __Znam();
        lVar24 = lVar16;
        uVar15 = uVar28;
        uVar31 = uVar13;
        if (0 < (int)uVar17) {
          do {
            _vDSP_maxv(lVar24,uVar9,uVar31,lVar30);
            uVar15 = uVar15 - 1;
            lVar24 = lVar24 + lVar5 * 4;
            uVar31 = uVar31 + 4;
          } while (uVar15 != 0);
        }
        lVar24 = lVar26 + uVar25 * (long)(int)uVar19 * 4;
        if (lVar21 == 0) {
          uVar15 = uVar22;
          __Znam();
          _bzero();
          lStack_c8 = CONCAT44(lStack_c8._4_4_,0x3f800000);
          _vDSP_vfill(&lStack_c8,uVar15,1,lVar30);
          _cblas_sgemm(0xbf800000,0x3f800000,iStack_cc,0x6f,0x6f,uVar28,uStack_d8,1,uVar13,uVar10,
                       uVar15,uVar4);
          __ZdaPv(uVar15);
        }
        else {
          lVar14 = lVar21;
          func_0x000109c1a4c0(lVar21,lVar30);
          _cblas_sgemm(0xbf800000,0x3f800000,iStack_cc,0x6f,0x6f,uVar28,uStack_d8,1,uVar13,uVar10,
                       lVar14,uVar4);
        }
        lStack_c8._0_4_ = uVar19;
        _vvexpf(lVar24,lVar24,&lStack_c8);
        if (lVar21 == 0) {
          uVar15 = uVar22;
          __Znam(uVar22);
          _bzero();
          lStack_c8._0_4_ = 0x3f800000;
          _vDSP_vfill(&lStack_c8,uVar15,1,lVar30);
          _cblas_sgemv(0x3f800000,0,iStack_cc,0x6f,uVar28,uStack_d8,lVar24,uVar3,uVar15,1,uVar13,1);
          __ZdaPv(uVar15);
        }
        else {
          lVar14 = lVar21;
          func_0x000109c1a4c0(lVar21,lVar30);
          _cblas_sgemv(0x3f800000,0,iStack_cc,0x6f,uVar28,uStack_d8,lVar24,uVar3,lVar14,1,uVar13,1);
        }
        lStack_c8 = CONCAT44(lStack_c8._4_4_,uVar17);
        _vvrecf(uVar13,uVar13,&lStack_c8);
        (*pcVar11)(iStack_cc,uVar28,uStack_d8,uVar13,lVar24,lVar21);
        __ZdaPv(uVar13);
        uVar25 = uVar25 + 1;
        lVar16 = lVar16 + (-(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2);
      } while (uVar25 != uVar29);
    }
    *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar27 + 0x3c);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_109c4b220:
  func_0x000105688514(&UNK_10f5a5ae1);
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x109c4b230);
  (*pcVar11)();
}



/* Entry: 109c4b2a4; end: 109c4b41b;  */

void FUN_109c4b2a4(int param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  uint uVar1;
  
  if (param_1 == 0x66) {
    if (0 < (int)param_3) {
      do {
        _vDSP_vsmul(param_5,1,param_4,param_5,1,(long)(int)param_2);
        param_5 = param_5 + (-(param_2 >> 0x1f & 1) & 0xfffffffc00000000 |
                            (param_2 & 0xffffffff) << 2);
        uVar1 = (int)param_3 - 1;
        param_3 = (ulong)uVar1;
      } while (uVar1 != 0);
    }
  }
  else if (0 < (int)param_2) {
    param_2 = param_2 & 0xffffffff;
    do {
      _vDSP_vsmul(param_5,1,param_4,param_5,1,(long)(int)param_3);
      param_4 = param_4 + 4;
      param_5 = param_5 + (-(param_3 >> 0x1f & 1) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2
                          );
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}



/* Entry: 109c4b41c; end: 109c4b46b;  */

long FUN_109c4b41c(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4b46c; end: 109c4b64b;  */

void FUN_109c4b46c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar7 = *plVar8;
  bVar3 = *(byte *)(param_1 + 0x6b);
  if (bVar3 == 1) {
    plStack_98 = (long *)plVar8[1];
    lStack_a0 = lVar7;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar7 + 8,
               *(undefined1 *)(lVar7 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  if (*(char *)(*plVar8 + 0x48) == '\x02') {
    lVar7 = param_1;
    func_0x000109c60944(param_1,plVar8);
    if ((int)lVar7 == 0) goto LAB_109c4b620;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (*(long *)*param_3 + 0x20,param_1 + 0x50);
    lVar7 = *(long *)*param_3;
    *(undefined4 *)(lVar7 + 0x3c) = *(undefined4 *)(*plVar8 + 0x3c);
    *(undefined4 *)(lVar7 + 0x50) = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(lVar7 + 0x4c) = *(undefined4 *)(param_1 + 0x80);
  }
  else {
    FUN_109c11af8(*(undefined8 *)*param_3);
    FUN_109c19038(*(undefined8 *)*param_3);
    *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar8 + 0x3c);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_109c4b620:
  func_0x000105688514(&UNK_10f5a5ae1);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109c4b630);
  (*pcVar6)();
}



/* Entry: 109c4b64c; end: 109c4b64f;  */

undefined8 * FUN_109c4b64c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4b650; end: 109c4b673;  */

void FUN_109c4b650(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4b674; end: 109c4b67b;  */

void FUN_109c4b674(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lVar7 = param_1 + -8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar8 = *plVar9;
  bVar3 = *(byte *)(param_1 + 99);
  if (bVar3 == 1) {
    plStack_98 = (long *)plVar9[1];
    lStack_a0 = lVar8;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar8 + 8,
               *(undefined1 *)(lVar8 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar8 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  if (*(char *)(*plVar9 + 0x48) == '\x02') {
    func_0x000109c60944(lVar7,plVar9);
    if ((int)lVar7 == 0) goto LAB_109c4b620;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (*(long *)*param_3 + 0x20,param_1 + 0x48);
    lVar7 = *(long *)*param_3;
    *(undefined4 *)(lVar7 + 0x3c) = *(undefined4 *)(*plVar9 + 0x3c);
    *(undefined4 *)(lVar7 + 0x50) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(lVar7 + 0x4c) = *(undefined4 *)(param_1 + 0x78);
  }
  else {
    FUN_109c11af8(*(undefined8 *)*param_3);
    FUN_109c19038(*(undefined8 *)*param_3);
    *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar9 + 0x3c);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_109c4b620:
  func_0x000105688514(&UNK_10f5a5ae1);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109c4b630);
  (*pcVar6)();
}



/* Entry: 109c4b67c; end: 109c4b6cb;  */

long FUN_109c4b67c(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4b6cc; end: 109c4b847;  */

undefined8 * FUN_109c4b6cc(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar7 = *plVar8;
  bVar3 = *(byte *)(param_1 + 0x6b);
  if (bVar3 == 1) {
    plStack_98 = (long *)plVar8[1];
    lStack_a0 = lVar7;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar7 + 8,
               *(undefined1 *)(lVar7 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar8);
  puVar6 = *(undefined8 **)*param_3;
  FUN_109c18fcc(*(undefined4 *)(param_1 + 0x98));
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar8 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar6 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar6 + 0xd);
    if (*(char *)((long)puVar6 + 0x5f) < '\0') {
      __ZdlPv(puVar6[9]);
    }
    if (*(char *)((long)puVar6 + 0x47) < '\0') {
      __ZdlPv(puVar6[6]);
    }
    FUN_109c61bbc(puVar6 + 1);
    return puVar6;
  }
  return puVar6;
}



/* Entry: 109c4b848; end: 109c4b84b;  */

undefined8 * FUN_109c4b848(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4b84c; end: 109c4b86f;  */

void FUN_109c4b84c(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4b870; end: 109c4b877;  */

undefined8 * FUN_109c4b870(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar7 = *plVar8;
  bVar3 = *(byte *)(param_1 + 99);
  if (bVar3 == 1) {
    plStack_98 = (long *)plVar8[1];
    lStack_a0 = lVar7;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar7 + 8,
               *(undefined1 *)(lVar7 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar8);
  puVar6 = *(undefined8 **)*param_3;
  FUN_109c18fcc(*(undefined4 *)(param_1 + 0x90));
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar8 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar6 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar6 + 0xd);
    if (*(char *)((long)puVar6 + 0x5f) < '\0') {
      __ZdlPv(puVar6[9]);
    }
    if (*(char *)((long)puVar6 + 0x47) < '\0') {
      __ZdlPv(puVar6[6]);
    }
    FUN_109c61bbc(puVar6 + 1);
    return puVar6;
  }
  return puVar6;
}



/* Entry: 109c4b878; end: 109c4b8c7;  */

long FUN_109c4b878(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4b8c8; end: 109c4ba6f;  */

undefined8 * FUN_109c4b8c8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar10;
  bVar4 = *(byte *)(param_1 + 0x6b);
  if (bVar4 == 1) {
    plStack_88 = (long *)plVar10[1];
    lStack_90 = lVar9;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar10);
  lVar9 = *(long *)*param_3;
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  uVar7 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  puVar8 = *(undefined8 **)(lVar9 + 0x40);
  lStack_90 = CONCAT44(lStack_90._4_4_,uVar7);
  _vvsqrtf(puVar8,puVar8,&lStack_90);
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar10 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar8 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar8 + 0xd);
    if (*(char *)((long)puVar8 + 0x5f) < '\0') {
      __ZdlPv(puVar8[9]);
    }
    if (*(char *)((long)puVar8 + 0x47) < '\0') {
      __ZdlPv(puVar8[6]);
    }
    FUN_109c61bbc(puVar8 + 1);
    return puVar8;
  }
  return puVar8;
}



/* Entry: 109c4ba70; end: 109c4ba73;  */

undefined8 * FUN_109c4ba70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4ba74; end: 109c4ba97;  */

void FUN_109c4ba74(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4ba98; end: 109c4ba9f;  */

undefined8 * FUN_109c4ba98(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar10;
  bVar4 = *(byte *)(param_1 + 99);
  if (bVar4 == 1) {
    plStack_88 = (long *)plVar10[1];
    lStack_90 = lVar9;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar10);
  lVar9 = *(long *)*param_3;
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  uVar7 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  puVar8 = *(undefined8 **)(lVar9 + 0x40);
  lStack_90 = CONCAT44(lStack_90._4_4_,uVar7);
  _vvsqrtf(puVar8,puVar8,&lStack_90);
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar10 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar8 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar8 + 0xd);
    if (*(char *)((long)puVar8 + 0x5f) < '\0') {
      __ZdlPv(puVar8[9]);
    }
    if (*(char *)((long)puVar8 + 0x47) < '\0') {
      __ZdlPv(puVar8[6]);
    }
    FUN_109c61bbc(puVar8 + 1);
    return puVar8;
  }
  return puVar8;
}



/* Entry: 109c4baa0; end: 109c4baef;  */

long FUN_109c4baa0(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4baf0; end: 109c4bd4b;  */

long * FUN_109c4baf0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  float *pfVar7;
  uint uVar8;
  long lVar9;
  float *pfVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  float fVar14;
  int iStack_110;
  int iStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [72];
  long lStack_b0;
  long *plStack_a8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar12;
  bVar2 = *(byte *)(param_1 + 0x6b);
  if (bVar2 == 1) {
    plStack_a8 = (long *)plVar12[1];
    lStack_b0 = lVar9;
    if (plStack_a8 != (long *)0x0) {
      plVar11 = plStack_a8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = *plVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_f8,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_b0,auStack_f8);
  }
  func_0x000109c1e534(*param_3,&lStack_b0);
  plVar11 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar1 = plStack_a8 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  if ((bVar2 & 1) == 0) {
    FUN_109c180ec(auStack_f8);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar12);
  lVar9 = *(long *)*param_3;
  lVar13 = *(long *)(param_1 + 0x70);
  fVar14 = *(float *)(param_1 + 0x98);
  uVar8 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar8) {
    uVar8 = 5;
  }
  iVar5 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar8);
  plVar11 = *(long **)(lVar9 + 0x40);
  if (fVar14 == 2.0) {
    _vDSP_vsq(plVar11,1,plVar11,1,(long)iVar5);
  }
  else {
    uStack_108 = 0;
    uStack_100 = 0;
    iStack_110 = 1;
    puVar6 = *(undefined8 **)(lVar13 + 0x10);
    iStack_10c = iVar5;
    (**(code **)*puVar6)(&lStack_b0,puVar6,&iStack_110,*(undefined1 *)(lVar9 + 0x48));
    pfVar7 = *(float **)(lStack_b0 + 0x40);
    if (0 < iVar5) {
      uVar8 = iVar5 + 1;
      pfVar10 = pfVar7;
      do {
        *pfVar10 = fVar14;
        uVar8 = uVar8 - 1;
        pfVar10 = pfVar10 + 1;
      } while (1 < uVar8);
    }
    iStack_110 = iVar5;
    _vvpowf(plVar11,pfVar7,plVar11,&iStack_110);
    plVar11 = &lStack_b0;
    FUN_109c180ec();
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar12 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    FUN_109c180ec(&lStack_b0);
    __Unwind_Resume();
    *plVar11 = (long)&PTR_FUN_110b2c3e0;
    func_0x000109c20db4(plVar11 + 0xd);
    if (*(char *)((long)plVar11 + 0x5f) < '\0') {
      __ZdlPv(plVar11[9]);
    }
    if (*(char *)((long)plVar11 + 0x47) < '\0') {
      __ZdlPv(plVar11[6]);
    }
    FUN_109c61bbc(plVar11 + 1);
    return plVar11;
  }
  return plVar11;
}



/* Entry: 109c4bd4c; end: 109c4bd4f;  */

undefined8 * FUN_109c4bd4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4bd50; end: 109c4bd73;  */

void FUN_109c4bd50(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4bd74; end: 109c4bd7b;  */

long * FUN_109c4bd74(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  float *pfVar7;
  uint uVar8;
  long lVar9;
  float *pfVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  float fVar14;
  int iStack_110;
  int iStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [72];
  long lStack_b0;
  long *plStack_a8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar12;
  bVar2 = *(byte *)(param_1 + 99);
  if (bVar2 == 1) {
    plStack_a8 = (long *)plVar12[1];
    lStack_b0 = lVar9;
    if (plStack_a8 != (long *)0x0) {
      plVar11 = plStack_a8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = *plVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_f8,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_b0,auStack_f8);
  }
  func_0x000109c1e534(*param_3,&lStack_b0);
  plVar11 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar1 = plStack_a8 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  if ((bVar2 & 1) == 0) {
    FUN_109c180ec(auStack_f8);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar12);
  lVar9 = *(long *)*param_3;
  lVar13 = *(long *)(param_1 + 0x68);
  fVar14 = *(float *)(param_1 + 0x90);
  uVar8 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar8) {
    uVar8 = 5;
  }
  iVar5 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar8);
  plVar11 = *(long **)(lVar9 + 0x40);
  if (fVar14 == 2.0) {
    _vDSP_vsq(plVar11,1,plVar11,1,(long)iVar5);
  }
  else {
    uStack_108 = 0;
    uStack_100 = 0;
    iStack_110 = 1;
    puVar6 = *(undefined8 **)(lVar13 + 0x10);
    iStack_10c = iVar5;
    (**(code **)*puVar6)(&lStack_b0,puVar6,&iStack_110,*(undefined1 *)(lVar9 + 0x48));
    pfVar7 = *(float **)(lStack_b0 + 0x40);
    if (0 < iVar5) {
      uVar8 = iVar5 + 1;
      pfVar10 = pfVar7;
      do {
        *pfVar10 = fVar14;
        uVar8 = uVar8 - 1;
        pfVar10 = pfVar10 + 1;
      } while (1 < uVar8);
    }
    iStack_110 = iVar5;
    _vvpowf(plVar11,pfVar7,plVar11,&iStack_110);
    plVar11 = &lStack_b0;
    FUN_109c180ec();
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar12 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    FUN_109c180ec(&lStack_b0);
    __Unwind_Resume();
    *plVar11 = (long)&PTR_FUN_110b2c3e0;
    func_0x000109c20db4(plVar11 + 0xd);
    if (*(char *)((long)plVar11 + 0x5f) < '\0') {
      __ZdlPv(plVar11[9]);
    }
    if (*(char *)((long)plVar11 + 0x47) < '\0') {
      __ZdlPv(plVar11[6]);
    }
    FUN_109c61bbc(plVar11 + 1);
    return plVar11;
  }
  return plVar11;
}



/* Entry: 109c4bd7c; end: 109c4bdcb;  */

long FUN_109c4bd7c(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4bdcc; end: 109c4bf87;  */

undefined8 * FUN_109c4bdcc(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar10;
  bVar4 = *(byte *)(param_1 + 0x6b);
  if (bVar4 == 1) {
    plStack_98 = (long *)plVar10[1];
    lStack_a0 = lVar9;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar10);
  lVar9 = *(long *)*param_3;
  FUN_109c3870c(*(undefined4 *)(param_1 + 0x98),lVar9);
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  uVar7 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  puVar8 = *(undefined8 **)(lVar9 + 0x40);
  lStack_a0 = CONCAT44(lStack_a0._4_4_,uVar7);
  _vvrsqrtf(puVar8,puVar8,&lStack_a0);
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar10 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar8 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar8 + 0xd);
    if (*(char *)((long)puVar8 + 0x5f) < '\0') {
      __ZdlPv(puVar8[9]);
    }
    if (*(char *)((long)puVar8 + 0x47) < '\0') {
      __ZdlPv(puVar8[6]);
    }
    FUN_109c61bbc(puVar8 + 1);
    return puVar8;
  }
  return puVar8;
}



/* Entry: 109c4bf88; end: 109c4bf8b;  */

undefined8 * FUN_109c4bf88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4bf8c; end: 109c4bfaf;  */

void FUN_109c4bf8c(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4bfb0; end: 109c4bfb7;  */

undefined8 * FUN_109c4bfb0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar10;
  bVar4 = *(byte *)(param_1 + 99);
  if (bVar4 == 1) {
    plStack_98 = (long *)plVar10[1];
    lStack_a0 = lVar9;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar10);
  lVar9 = *(long *)*param_3;
  FUN_109c3870c(*(undefined4 *)(param_1 + 0x90),lVar9);
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  uVar7 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  puVar8 = *(undefined8 **)(lVar9 + 0x40);
  lStack_a0 = CONCAT44(lStack_a0._4_4_,uVar7);
  _vvrsqrtf(puVar8,puVar8,&lStack_a0);
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar10 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar8 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar8 + 0xd);
    if (*(char *)((long)puVar8 + 0x5f) < '\0') {
      __ZdlPv(puVar8[9]);
    }
    if (*(char *)((long)puVar8 + 0x47) < '\0') {
      __ZdlPv(puVar8[6]);
    }
    FUN_109c61bbc(puVar8 + 1);
    return puVar8;
  }
  return puVar8;
}



/* Entry: 109c4bfb8; end: 109c4c007;  */

long FUN_109c4bfb8(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4c008; end: 109c4c1c3;  */

undefined8 * FUN_109c4c008(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar10;
  bVar4 = *(byte *)(param_1 + 0x6b);
  if (bVar4 == 1) {
    plStack_98 = (long *)plVar10[1];
    lStack_a0 = lVar9;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar10);
  lVar9 = *(long *)*param_3;
  FUN_109c3870c(*(undefined4 *)(param_1 + 0x98),lVar9);
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  uVar7 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  puVar8 = *(undefined8 **)(lVar9 + 0x40);
  lStack_a0 = CONCAT44(lStack_a0._4_4_,uVar7);
  _vvrecf(puVar8,puVar8,&lStack_a0);
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar10 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar8 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar8 + 0xd);
    if (*(char *)((long)puVar8 + 0x5f) < '\0') {
      __ZdlPv(puVar8[9]);
    }
    if (*(char *)((long)puVar8 + 0x47) < '\0') {
      __ZdlPv(puVar8[6]);
    }
    FUN_109c61bbc(puVar8 + 1);
    return puVar8;
  }
  return puVar8;
}



/* Entry: 109c4c1c4; end: 109c4c1c7;  */

undefined8 * FUN_109c4c1c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4c1c8; end: 109c4c1eb;  */

void FUN_109c4c1c8(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4c1ec; end: 109c4c1f3;  */

undefined8 * FUN_109c4c1ec(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar10;
  bVar4 = *(byte *)(param_1 + 99);
  if (bVar4 == 1) {
    plStack_98 = (long *)plVar10[1];
    lStack_a0 = lVar9;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar10);
  lVar9 = *(long *)*param_3;
  FUN_109c3870c(*(undefined4 *)(param_1 + 0x90),lVar9);
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  uVar7 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  puVar8 = *(undefined8 **)(lVar9 + 0x40);
  lStack_a0 = CONCAT44(lStack_a0._4_4_,uVar7);
  _vvrecf(puVar8,puVar8,&lStack_a0);
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar10 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar8 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar8 + 0xd);
    if (*(char *)((long)puVar8 + 0x5f) < '\0') {
      __ZdlPv(puVar8[9]);
    }
    if (*(char *)((long)puVar8 + 0x47) < '\0') {
      __ZdlPv(puVar8[6]);
    }
    FUN_109c61bbc(puVar8 + 1);
    return puVar8;
  }
  return puVar8;
}



/* Entry: 109c4c1f4; end: 109c4c243;  */

long FUN_109c4c1f4(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4c244; end: 109c4c3b3;  */

undefined8 * FUN_109c4c244(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar7 = *plVar8;
  bVar3 = *(byte *)(param_1 + 0x6b);
  if (bVar3 == 1) {
    plStack_88 = (long *)plVar8[1];
    lStack_90 = lVar7;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar7 + 8,
               *(undefined1 *)(lVar7 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar8);
  puVar6 = *(undefined8 **)*param_3;
  FUN_109c4c3e4();
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar8 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar6 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar6 + 0xd);
    if (*(char *)((long)puVar6 + 0x5f) < '\0') {
      __ZdlPv(puVar6[9]);
    }
    if (*(char *)((long)puVar6 + 0x47) < '\0') {
      __ZdlPv(puVar6[6]);
    }
    FUN_109c61bbc(puVar6 + 1);
    return puVar6;
  }
  return puVar6;
}



/* Entry: 109c4c3b4; end: 109c4c3b7;  */

undefined8 * FUN_109c4c3b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4c3b8; end: 109c4c3db;  */

void FUN_109c4c3b8(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4c3dc; end: 109c4c3e3;  */

undefined8 * FUN_109c4c3dc(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar7 = *plVar8;
  bVar3 = *(byte *)(param_1 + 99);
  if (bVar3 == 1) {
    plStack_88 = (long *)plVar8[1];
    lStack_90 = lVar7;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar7 + 8,
               *(undefined1 *)(lVar7 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar8);
  puVar6 = *(undefined8 **)*param_3;
  FUN_109c4c3e4();
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar8 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar6 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar6 + 0xd);
    if (*(char *)((long)puVar6 + 0x5f) < '\0') {
      __ZdlPv(puVar6[9]);
    }
    if (*(char *)((long)puVar6 + 0x47) < '\0') {
      __ZdlPv(puVar6[6]);
    }
    FUN_109c61bbc(puVar6 + 1);
    return puVar6;
  }
  return puVar6;
}



/* Entry: 109c4c3e4; end: 109c4c493;  */

void FUN_109c4c3e4(long param_1)

{
  uint uVar1;
  undefined4 uStack_24;
  
  uVar1 = *(uint *)(param_1 + 8) & ((int)*(uint *)(param_1 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  uStack_24 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_1 + 0xc,uVar1);
  _vvexpf(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x40),&uStack_24);
  return;
}



/* Entry: 109c4c494; end: 109c4c603;  */

undefined8 * FUN_109c4c494(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar7 = *plVar8;
  bVar3 = *(byte *)(param_1 + 0x6b);
  if (bVar3 == 1) {
    plStack_88 = (long *)plVar8[1];
    lStack_90 = lVar7;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar7 + 8,
               *(undefined1 *)(lVar7 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar8);
  puVar6 = *(undefined8 **)*param_3;
  FUN_109c4c634();
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar8 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar6 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar6 + 0xd);
    if (*(char *)((long)puVar6 + 0x5f) < '\0') {
      __ZdlPv(puVar6[9]);
    }
    if (*(char *)((long)puVar6 + 0x47) < '\0') {
      __ZdlPv(puVar6[6]);
    }
    FUN_109c61bbc(puVar6 + 1);
    return puVar6;
  }
  return puVar6;
}



/* Entry: 109c4c604; end: 109c4c607;  */

undefined8 * FUN_109c4c604(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4c608; end: 109c4c62b;  */

void FUN_109c4c608(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4c62c; end: 109c4c633;  */

undefined8 * FUN_109c4c62c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar7 = *plVar8;
  bVar3 = *(byte *)(param_1 + 99);
  if (bVar3 == 1) {
    plStack_88 = (long *)plVar8[1];
    lStack_90 = lVar7;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar7 + 8,
               *(undefined1 *)(lVar7 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar8);
  puVar6 = *(undefined8 **)*param_3;
  FUN_109c4c634();
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar8 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar6 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar6 + 0xd);
    if (*(char *)((long)puVar6 + 0x5f) < '\0') {
      __ZdlPv(puVar6[9]);
    }
    if (*(char *)((long)puVar6 + 0x47) < '\0') {
      __ZdlPv(puVar6[6]);
    }
    FUN_109c61bbc(puVar6 + 1);
    return puVar6;
  }
  return puVar6;
}



/* Entry: 109c4c634; end: 109c4c6e3;  */

void FUN_109c4c634(long param_1)

{
  uint uVar1;
  undefined4 uStack_24;
  
  uVar1 = *(uint *)(param_1 + 8) & ((int)*(uint *)(param_1 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  uStack_24 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_1 + 0xc,uVar1);
  _vvlogf(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x40),&uStack_24);
  return;
}



/* Entry: 109c4c6e4; end: 109c4c88f;  */

undefined8 * FUN_109c4c6e4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar10;
  bVar4 = *(byte *)(param_1 + 0x6b);
  if (bVar4 == 1) {
    plStack_88 = (long *)plVar10[1];
    lStack_90 = lVar9;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar10);
  lVar9 = *(long *)*param_3;
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  iVar7 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  puVar8 = *(undefined8 **)(lVar9 + 0x40);
  _vDSP_vabs(puVar8,1,puVar8,1,(long)iVar7);
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar10 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar8 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar8 + 0xd);
    if (*(char *)((long)puVar8 + 0x5f) < '\0') {
      __ZdlPv(puVar8[9]);
    }
    if (*(char *)((long)puVar8 + 0x47) < '\0') {
      __ZdlPv(puVar8[6]);
    }
    FUN_109c61bbc(puVar8 + 1);
    return puVar8;
  }
  return puVar8;
}



/* Entry: 109c4c890; end: 109c4c893;  */

undefined8 * FUN_109c4c890(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4c894; end: 109c4c8b7;  */

void FUN_109c4c894(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4c8b8; end: 109c4c8bf;  */

undefined8 * FUN_109c4c8b8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar10;
  bVar4 = *(byte *)(param_1 + 99);
  if (bVar4 == 1) {
    plStack_88 = (long *)plVar10[1];
    lStack_90 = lVar9;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar10);
  lVar9 = *(long *)*param_3;
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  iVar7 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  puVar8 = *(undefined8 **)(lVar9 + 0x40);
  _vDSP_vabs(puVar8,1,puVar8,1,(long)iVar7);
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar10 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar8 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar8 + 0xd);
    if (*(char *)((long)puVar8 + 0x5f) < '\0') {
      __ZdlPv(puVar8[9]);
    }
    if (*(char *)((long)puVar8 + 0x47) < '\0') {
      __ZdlPv(puVar8[6]);
    }
    FUN_109c61bbc(puVar8 + 1);
    return puVar8;
  }
  return puVar8;
}



/* Entry: 109c4c8c0; end: 109c4c90f;  */

long FUN_109c4c8c0(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4c910; end: 109c4cab7;  */

undefined8 * FUN_109c4c910(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar10;
  bVar4 = *(byte *)(param_1 + 0x6b);
  if (bVar4 == 1) {
    plStack_88 = (long *)plVar10[1];
    lStack_90 = lVar9;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar10);
  lVar9 = *(long *)*param_3;
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  uVar7 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  puVar8 = *(undefined8 **)(lVar9 + 0x40);
  lStack_90 = CONCAT44(lStack_90._4_4_,uVar7);
  _vvsinf(puVar8,puVar8,&lStack_90);
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar10 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar8 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar8 + 0xd);
    if (*(char *)((long)puVar8 + 0x5f) < '\0') {
      __ZdlPv(puVar8[9]);
    }
    if (*(char *)((long)puVar8 + 0x47) < '\0') {
      __ZdlPv(puVar8[6]);
    }
    FUN_109c61bbc(puVar8 + 1);
    return puVar8;
  }
  return puVar8;
}



/* Entry: 109c4cab8; end: 109c4cabb;  */

undefined8 * FUN_109c4cab8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4cabc; end: 109c4cadf;  */

void FUN_109c4cabc(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4cae0; end: 109c4cae7;  */

undefined8 * FUN_109c4cae0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar10;
  bVar4 = *(byte *)(param_1 + 99);
  if (bVar4 == 1) {
    plStack_88 = (long *)plVar10[1];
    lStack_90 = lVar9;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar10);
  lVar9 = *(long *)*param_3;
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  uVar7 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  puVar8 = *(undefined8 **)(lVar9 + 0x40);
  lStack_90 = CONCAT44(lStack_90._4_4_,uVar7);
  _vvsinf(puVar8,puVar8,&lStack_90);
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar10 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar8 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar8 + 0xd);
    if (*(char *)((long)puVar8 + 0x5f) < '\0') {
      __ZdlPv(puVar8[9]);
    }
    if (*(char *)((long)puVar8 + 0x47) < '\0') {
      __ZdlPv(puVar8[6]);
    }
    FUN_109c61bbc(puVar8 + 1);
    return puVar8;
  }
  return puVar8;
}



/* Entry: 109c4cae8; end: 109c4cb37;  */

long FUN_109c4cae8(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4cb38; end: 109c4ccdf;  */

undefined8 * FUN_109c4cb38(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar10;
  bVar4 = *(byte *)(param_1 + 0x6b);
  if (bVar4 == 1) {
    plStack_88 = (long *)plVar10[1];
    lStack_90 = lVar9;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar10);
  lVar9 = *(long *)*param_3;
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  uVar7 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  puVar8 = *(undefined8 **)(lVar9 + 0x40);
  lStack_90 = CONCAT44(lStack_90._4_4_,uVar7);
  _vvcosf(puVar8,puVar8,&lStack_90);
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar10 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar8 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar8 + 0xd);
    if (*(char *)((long)puVar8 + 0x5f) < '\0') {
      __ZdlPv(puVar8[9]);
    }
    if (*(char *)((long)puVar8 + 0x47) < '\0') {
      __ZdlPv(puVar8[6]);
    }
    FUN_109c61bbc(puVar8 + 1);
    return puVar8;
  }
  return puVar8;
}



/* Entry: 109c4cce0; end: 109c4cce3;  */

undefined8 * FUN_109c4cce0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4cce4; end: 109c4cd07;  */

void FUN_109c4cce4(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4cd08; end: 109c4cd0f;  */

undefined8 * FUN_109c4cd08(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar10;
  bVar4 = *(byte *)(param_1 + 99);
  if (bVar4 == 1) {
    plStack_88 = (long *)plVar10[1];
    lStack_90 = lVar9;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar10);
  lVar9 = *(long *)*param_3;
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  uVar7 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  puVar8 = *(undefined8 **)(lVar9 + 0x40);
  lStack_90 = CONCAT44(lStack_90._4_4_,uVar7);
  _vvcosf(puVar8,puVar8,&lStack_90);
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar10 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar8 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar8 + 0xd);
    if (*(char *)((long)puVar8 + 0x5f) < '\0') {
      __ZdlPv(puVar8[9]);
    }
    if (*(char *)((long)puVar8 + 0x47) < '\0') {
      __ZdlPv(puVar8[6]);
    }
    FUN_109c61bbc(puVar8 + 1);
    return puVar8;
  }
  return puVar8;
}



/* Entry: 109c4cd10; end: 109c4cd97;  */

undefined8 * FUN_109c4cd10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2d818;
  param_1[1] = &PTR_FUN_110b2d840;
  FUN_10959b818(param_1 + 0x14);
  FUN_109c21610(param_1 + 1);
  return param_1;
}



/* Entry: 109c4cd98; end: 109c4cf7b;  */

void FUN_109c4cd98(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar7 = *plVar8;
  bVar3 = *(byte *)(param_1 + 0x6b);
  if (bVar3 == 1) {
    plStack_98 = (long *)plVar8[1];
    lStack_a0 = lVar7;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar7 + 8,
               *(undefined1 *)(lVar7 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  if (*(char *)(*plVar8 + 0x48) == '\x02') {
    lVar7 = param_1;
    FUN_109c60c80(param_1,plVar8);
    if ((int)lVar7 == 0) goto LAB_109c4cf50;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (*(long *)*param_3 + 0x20,param_1 + 0x50);
    lVar7 = *(long *)*param_3;
    *(undefined4 *)(lVar7 + 0x3c) = *(undefined4 *)(*plVar8 + 0x3c);
    *(undefined4 *)(lVar7 + 0x50) = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(lVar7 + 0x4c) = *(undefined4 *)(param_1 + 0x80);
  }
  else {
    FUN_109c11af8(*(undefined8 *)*param_3);
    FUN_109c4d000(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c),
                  *(undefined8 *)*param_3);
    *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar8 + 0x3c);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_109c4cf50:
  func_0x000105688514(&UNK_10f5a5ae1);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109c4cf60);
  (*pcVar6)();
}



/* Entry: 109c4cf7c; end: 109c4cff7;  */

undefined8 * FUN_109c4cf7c(undefined8 *param_1)

{
  param_1[-1] = &PTR_FUN_110b2d818;
  *param_1 = &PTR_FUN_110b2d840;
  FUN_10959b818(param_1 + 0x13);
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4cff8; end: 109c4cfff;  */

void FUN_109c4cff8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lVar7 = param_1 + -8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar8 = *plVar9;
  bVar3 = *(byte *)(param_1 + 99);
  if (bVar3 == 1) {
    plStack_98 = (long *)plVar9[1];
    lStack_a0 = lVar8;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar8 + 8,
               *(undefined1 *)(lVar8 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar8 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  if (*(char *)(*plVar9 + 0x48) == '\x02') {
    FUN_109c60c80(lVar7,plVar9);
    if ((int)lVar7 == 0) goto LAB_109c4cf50;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (*(long *)*param_3 + 0x20,param_1 + 0x48);
    lVar7 = *(long *)*param_3;
    *(undefined4 *)(lVar7 + 0x3c) = *(undefined4 *)(*plVar9 + 0x3c);
    *(undefined4 *)(lVar7 + 0x50) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(lVar7 + 0x4c) = *(undefined4 *)(param_1 + 0x78);
  }
  else {
    FUN_109c11af8(*(undefined8 *)*param_3);
    FUN_109c4d000(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),
                  *(undefined8 *)*param_3);
    *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar9 + 0x3c);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_109c4cf50:
  func_0x000105688514(&UNK_10f5a5ae1);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109c4cf60);
  (*pcVar6)();
}



/* Entry: 109c4d000; end: 109c4d0bf;  */

void FUN_109c4d000(undefined4 param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar1 = *(uint *)(param_3 + 8) & ((int)*(uint *)(param_3 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  iVar2 = 0xf5749aa;
  uStack_28 = param_2;
  uStack_24 = param_1;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_3 + 0xc,uVar1);
  _vDSP_vsmsa(*(undefined8 *)(param_3 + 0x40),1,&uStack_24,&uStack_28,
              *(undefined8 *)(param_3 + 0x40),1,(long)iVar2);
  return;
}



/* Entry: 109c4d0c0; end: 109c4d2ab;  */

undefined8 * FUN_109c4d0c0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  long *plVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  long lStack_b0;
  long *plStack_a8;
  undefined1 auStack_a0 [72];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar8 = *plVar11;
  bVar4 = *(byte *)(param_1 + 0x6b);
  if (bVar4 == 1) {
    plStack_a8 = (long *)plVar11[1];
    lStack_b0 = lVar8;
    if (plStack_a8 != (long *)0x0) {
      plVar1 = plStack_a8 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_a0,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar8 + 8,
               *(undefined1 *)(lVar8 + 0x48));
    FUN_109c18570(&lStack_b0,auStack_a0);
  }
  func_0x000109c1e534(*param_3,&lStack_b0);
  plVar1 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar2 = plStack_a8 + 1;
    do {
      lVar8 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_a0);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar11);
  lVar8 = *(long *)*param_3;
  pfVar10 = *(float **)(lVar8 + 0x40);
  uVar3 = *(uint *)(lVar8 + 8) & ((int)*(uint *)(lVar8 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  puVar7 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar8 + 0xc,uVar3);
  if ((int)puVar7 != 0) {
    fVar14 = *(float *)(param_1 + 0x98);
    lVar12 = (long)(int)puVar7 << 2;
    pfVar9 = *(float **)(lVar8 + 0x40);
    do {
      fVar13 = *pfVar10;
      if (fVar13 < 0.0) {
        _expf();
        fVar13 = fVar14 * (fVar13 + -1.0);
      }
      *pfVar9 = fVar13;
      pfVar10 = pfVar10 + 1;
      lVar12 = lVar12 + -4;
      pfVar9 = pfVar9 + 1;
    } while (lVar12 != 0);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar11 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_a0);
    __Unwind_Resume();
    *puVar7 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar7 + 0xd);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      __ZdlPv(puVar7[9]);
    }
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      __ZdlPv(puVar7[6]);
    }
    FUN_109c61bbc(puVar7 + 1);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 109c4d2ac; end: 109c4d2af;  */

undefined8 * FUN_109c4d2ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4d2b0; end: 109c4d2d3;  */

void FUN_109c4d2b0(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4d2d4; end: 109c4d2db;  */

undefined8 * FUN_109c4d2d4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  long *plVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  long lStack_b0;
  long *plStack_a8;
  undefined1 auStack_a0 [72];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar8 = *plVar11;
  bVar4 = *(byte *)(param_1 + 99);
  if (bVar4 == 1) {
    plStack_a8 = (long *)plVar11[1];
    lStack_b0 = lVar8;
    if (plStack_a8 != (long *)0x0) {
      plVar1 = plStack_a8 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_a0,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar8 + 8,
               *(undefined1 *)(lVar8 + 0x48));
    FUN_109c18570(&lStack_b0,auStack_a0);
  }
  func_0x000109c1e534(*param_3,&lStack_b0);
  plVar1 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar2 = plStack_a8 + 1;
    do {
      lVar8 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_a0);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar11);
  lVar8 = *(long *)*param_3;
  pfVar10 = *(float **)(lVar8 + 0x40);
  uVar3 = *(uint *)(lVar8 + 8) & ((int)*(uint *)(lVar8 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  puVar7 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar8 + 0xc,uVar3);
  if ((int)puVar7 != 0) {
    fVar14 = *(float *)(param_1 + 0x90);
    lVar12 = (long)(int)puVar7 << 2;
    pfVar9 = *(float **)(lVar8 + 0x40);
    do {
      fVar13 = *pfVar10;
      if (fVar13 < 0.0) {
        _expf();
        fVar13 = fVar14 * (fVar13 + -1.0);
      }
      *pfVar9 = fVar13;
      pfVar10 = pfVar10 + 1;
      lVar12 = lVar12 + -4;
      pfVar9 = pfVar9 + 1;
    } while (lVar12 != 0);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar11 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_a0);
    __Unwind_Resume();
    *puVar7 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar7 + 0xd);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      __ZdlPv(puVar7[9]);
    }
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      __ZdlPv(puVar7[6]);
    }
    FUN_109c61bbc(puVar7 + 1);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 109c4d2dc; end: 109c4d32b;  */

long FUN_109c4d2dc(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4d32c; end: 109c4d4ff;  */

undefined8 * FUN_109c4d32c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar12;
  bVar4 = *(byte *)(param_1 + 0x6b);
  if (bVar4 == 1) {
    plStack_98 = (long *)plVar12[1];
    lStack_a0 = lVar9;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar12);
  lVar9 = *(long *)*param_3;
  pfVar11 = *(float **)(lVar9 + 0x40);
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  puVar7 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  if ((int)puVar7 != 0) {
    fVar13 = *(float *)(param_1 + 0x98);
    lVar10 = (long)(int)puVar7 << 2;
    pfVar8 = *(float **)(lVar9 + 0x40);
    do {
      fVar14 = 0.0;
      if (fVar13 <= *pfVar11) {
        fVar14 = *pfVar11;
      }
      *pfVar8 = fVar14;
      lVar10 = lVar10 + -4;
      pfVar8 = pfVar8 + 1;
      pfVar11 = pfVar11 + 1;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar12 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar7 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar7 + 0xd);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      __ZdlPv(puVar7[9]);
    }
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      __ZdlPv(puVar7[6]);
    }
    FUN_109c61bbc(puVar7 + 1);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 109c4d500; end: 109c4d503;  */

undefined8 * FUN_109c4d500(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4d504; end: 109c4d527;  */

void FUN_109c4d504(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4d528; end: 109c4d52f;  */

undefined8 * FUN_109c4d528(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar12;
  bVar4 = *(byte *)(param_1 + 99);
  if (bVar4 == 1) {
    plStack_98 = (long *)plVar12[1];
    lStack_a0 = lVar9;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar12);
  lVar9 = *(long *)*param_3;
  pfVar11 = *(float **)(lVar9 + 0x40);
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  puVar7 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  if ((int)puVar7 != 0) {
    fVar13 = *(float *)(param_1 + 0x90);
    lVar10 = (long)(int)puVar7 << 2;
    pfVar8 = *(float **)(lVar9 + 0x40);
    do {
      fVar14 = 0.0;
      if (fVar13 <= *pfVar11) {
        fVar14 = *pfVar11;
      }
      *pfVar8 = fVar14;
      lVar10 = lVar10 + -4;
      pfVar8 = pfVar8 + 1;
      pfVar11 = pfVar11 + 1;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar12 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar7 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar7 + 0xd);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      __ZdlPv(puVar7[9]);
    }
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      __ZdlPv(puVar7[6]);
    }
    FUN_109c61bbc(puVar7 + 1);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 109c4d530; end: 109c4d57f;  */

long FUN_109c4d530(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4d580; end: 109c4d743;  */

undefined8 * FUN_109c4d580(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  float *pfVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar11;
  bVar4 = *(byte *)(param_1 + 0x6b);
  if (bVar4 == 1) {
    plStack_88 = (long *)plVar11[1];
    lStack_90 = lVar9;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar11);
  lVar9 = *(long *)*param_3;
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  puVar7 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  if (0 < (int)puVar7) {
    uVar10 = (ulong)puVar7 & 0xffffffff;
    pfVar8 = *(float **)(lVar9 + 0x40);
    do {
      *pfVar8 = *pfVar8 / (ABS(*pfVar8) + 1.0);
      uVar10 = uVar10 - 1;
      pfVar8 = pfVar8 + 1;
    } while (uVar10 != 0);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar11 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar7 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar7 + 0xd);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      __ZdlPv(puVar7[9]);
    }
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      __ZdlPv(puVar7[6]);
    }
    FUN_109c61bbc(puVar7 + 1);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 109c4d744; end: 109c4d747;  */

undefined8 * FUN_109c4d744(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4d748; end: 109c4d76b;  */

void FUN_109c4d748(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4d76c; end: 109c4d773;  */

undefined8 * FUN_109c4d76c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  float *pfVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar11;
  bVar4 = *(byte *)(param_1 + 99);
  if (bVar4 == 1) {
    plStack_88 = (long *)plVar11[1];
    lStack_90 = lVar9;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar11);
  lVar9 = *(long *)*param_3;
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  puVar7 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  if (0 < (int)puVar7) {
    uVar10 = (ulong)puVar7 & 0xffffffff;
    pfVar8 = *(float **)(lVar9 + 0x40);
    do {
      *pfVar8 = *pfVar8 / (ABS(*pfVar8) + 1.0);
      uVar10 = uVar10 - 1;
      pfVar8 = pfVar8 + 1;
    } while (uVar10 != 0);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar11 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar7 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar7 + 0xd);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      __ZdlPv(puVar7[9]);
    }
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      __ZdlPv(puVar7[6]);
    }
    FUN_109c61bbc(puVar7 + 1);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 109c4d774; end: 109c4d7c3;  */

long FUN_109c4d774(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4d7c4; end: 109c4d94b;  */

undefined8 * FUN_109c4d7c4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar6 = *plVar8;
  bVar3 = *(byte *)(param_1 + 0x6b);
  if (bVar3 == 1) {
    plStack_88 = (long *)plVar8[1];
    lStack_90 = lVar6;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar6 + 8,
               *(undefined1 *)(lVar6 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar6 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar8);
  puVar7 = *(undefined8 **)*param_3;
  FUN_109c4c3e4(puVar7);
  FUN_109c3870c(0x3f800000,puVar7);
  FUN_109c4c634();
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar8 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar7 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar7 + 0xd);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      __ZdlPv(puVar7[9]);
    }
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      __ZdlPv(puVar7[6]);
    }
    FUN_109c61bbc(puVar7 + 1);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 109c4d94c; end: 109c4d94f;  */

undefined8 * FUN_109c4d94c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4d950; end: 109c4d973;  */

void FUN_109c4d950(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4d974; end: 109c4d97b;  */

undefined8 * FUN_109c4d974(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar6 = *plVar8;
  bVar3 = *(byte *)(param_1 + 99);
  if (bVar3 == 1) {
    plStack_88 = (long *)plVar8[1];
    lStack_90 = lVar6;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar6 + 8,
               *(undefined1 *)(lVar6 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar6 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar8);
  puVar7 = *(undefined8 **)*param_3;
  FUN_109c4c3e4(puVar7);
  FUN_109c3870c(0x3f800000,puVar7);
  FUN_109c4c634();
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar8 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar7 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar7 + 0xd);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      __ZdlPv(puVar7[9]);
    }
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      __ZdlPv(puVar7[6]);
    }
    FUN_109c61bbc(puVar7 + 1);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 109c4d97c; end: 109c4d9cb;  */

long FUN_109c4d97c(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}


