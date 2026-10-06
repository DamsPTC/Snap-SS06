/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10142fa2c; end: 10142fa8b; -[_TtC36ScopeGraphAppStartupViolationMonitor41ProxyScopeGraphAppStartupViolationMonitor init] */

void FUN_10142fa2c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ScopeGraphAppStartupViolationMonitor.ProxyScopeGraphAppStartupViolationMonitor"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10142fa58);
  (*pcVar1)();
}



/* Entry: 10142fa8c; end: 10142fbdf; -[_TtC36ScopeGraphAppStartupViolationMonitor41ProxyScopeGraphAppStartupViolationMonitor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10142fa8c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7f3e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d7f3f0));
  return;
}



/* Entry: 10142fbe0; end: 10142fc1b;  */

void FUN_10142fbe0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10142fc1c; end: 10142fd2b;  */

long FUN_10142fc1c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001000c6518(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000101433418();
  func_0x0001000834e4(param_1);
  return lVar1;
}



/* Entry: 10142fd2c; end: 1014300bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10142fd2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 extraout_x13;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  undefined1 auStack_b0 [8];
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  uStack_98 = param_2;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar9 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)puVar9 - extraout_x8_00;
  lVar11 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar10 = (lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = uVar10 - extraout_x12_00;
  if (param_4 == 0) {
    return;
  }
  if (*(char *)(unaff_x20 + 0x10) != '\x02') {
    return;
  }
  uStack_a0 = extraout_x13;
  func_0x000107c61428(unaff_x20 + 0x80,auStack_78,0x21,0);
  func_0x000107c61174(param_1);
  FUN_101430c40();
  func_0x000107c614a8(auStack_78);
  func_0x000107c61170(param_1);
  lVar1 = _DAT_112d7f420;
  func_0x000107c61428(unaff_x20 + _DAT_112d7f420,auStack_78,0,0);
  pcStack_a8 = *(code **)(lVar7 + 0x38);
  (*pcStack_a8)(lVar11,1,1,lVar2);
  lVar6 = (long)*(int *)(lVar6 + 0x30);
  func_0x0001009f0578(unaff_x20 + lVar1,lVar8);
  func_0x0001009f0578(lVar11,lVar8 + lVar6);
  pcVar12 = *(code **)(lVar7 + 0x30);
  lVar3 = lVar8;
  (*pcVar12)(lVar8,1,lVar2);
  if ((int)lVar3 == 1) {
    func_0x000100c8a528(lVar11,0x112d373d8,&UNK_10d9014c0);
    lVar6 = lVar8 + lVar6;
    (*pcVar12)(lVar6,1,lVar2);
    if ((int)lVar6 != 1) {
LAB_10142ffa4:
      func_0x000100c8a528(lVar8,0x112d373d0,&UNK_10d90f8f0);
      return;
    }
    func_0x000100c8a528(lVar8,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    func_0x0001009f0578(lVar8,uVar10);
    lVar3 = lVar8 + lVar6;
    (*pcVar12)(lVar3,1,lVar2);
    if ((int)lVar3 == 1) {
      func_0x000100c8a528(lVar11,0x112d373d8,&UNK_10d9014c0);
      (**(code **)(lVar7 + 8))(uVar10,lVar2);
      goto LAB_10142ffa4;
    }
    puVar4 = puVar9;
    (**(code **)(lVar7 + 0x20))(puVar9,lVar8 + lVar6,lVar2);
    FUN_100df4c40();
    uVar5 = uVar10;
    func_0x000107c5fab8(uVar10,puVar9,lVar2,puVar4);
    pcVar12 = *(code **)(lVar7 + 8);
    (*pcVar12)(puVar9,lVar2);
    func_0x000100c8a528(lVar11,0x112d373d8,&UNK_10d9014c0);
    (*pcVar12)(uVar10,lVar2);
    func_0x000100c8a528(lVar8,0x112d373d8,&UNK_10d9014c0);
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
  (**(code **)(lVar7 + 0x10))(uStack_a0,uStack_98,lVar2);
  (*pcStack_a8)(uStack_a0,0,1,lVar2);
  func_0x000107c61428(unaff_x20 + lVar1,auStack_90,0x21,0);
  func_0x000100ed9cbc(uStack_a0,unaff_x20 + lVar1);
  func_0x000107c614a8(auStack_90);
  return;
}



/* Entry: 1014300c0; end: 1014303af;  */

void FUN_1014300c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  if (param_5 == 0) {
    return;
  }
  if (*(char *)(unaff_x20 + 0x10) == '\x02') {
    func_0x000107c61434(param_5);
  }
  else {
    func_0x000107c61428(unaff_x20 + 0x80,auStack_a0,0,0);
    uVar3 = *(ulong *)(unaff_x20 + 0x80);
    if ((uVar3 & 0xc000000000000001) == 0) {
      uVar4 = *(ulong *)(uVar3 + 0x10);
      func_0x000107c61434(param_5);
    }
    else {
      uVar4 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar4 = uVar3;
      }
      func_0x000107c61434(param_5);
      func_0x000107c61434(uVar3);
      func_0x000107c6029c();
      func_0x000107c6142c(uVar3);
    }
    if (uVar4 == 0) {
      uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
      uVar3 = (ulong)*(byte *)(unaff_x20 + 0x58);
      FUN_100c89a3c(uVar1,uVar3,*(undefined8 *)(unaff_x20 + 0x68));
      func_0x000107c61428(unaff_x20 + 0x18,auStack_b8,0,0);
      FUN_1014334bc(unaff_x20 + 0x18,auStack_e0);
      func_0x0001000a8868(auStack_e0,uStack_c8);
      (**(code **)(lStack_c0 + 0x30))(param_1,param_4,param_5,uVar1,uVar3,uStack_c8,lStack_c0);
      func_0x000107c6142c(param_5);
      func_0x000107c6142c(uVar3);
      func_0x0001000834e4(auStack_e0);
      goto LAB_1014301c4;
    }
  }
  func_0x000107c61428(unaff_x20 + 0x78,auStack_e0,0x21,0);
  uVar5 = *(ulong *)(unaff_x20 + 0x78);
  uVar3 = uVar5;
  func_0x000107c61558();
  *(ulong *)(unaff_x20 + 0x78) = uVar5;
  uVar4 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
    FUN_101431b54(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    *(ulong *)(unaff_x20 + 0x78) = uVar4;
  }
  uVar3 = *(ulong *)(uVar4 + 0x10);
  uVar5 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_101431b54(uVar5,uVar3 + 1,1,uVar4);
  }
  *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
  lVar2 = uVar5 + uVar3 * 0x18;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(long *)(lVar2 + 0x28) = param_5;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  *(ulong *)(unaff_x20 + 0x78) = uVar5;
  func_0x000107c614a8(auStack_e0);
LAB_1014301c4:
  func_0x000107c61428(unaff_x20 + 0x80,auStack_e0,0,0);
  uVar3 = *(ulong *)(unaff_x20 + 0x80);
  if ((uVar3 & 0xc000000000000001) == 0) {
    uVar4 = *(ulong *)(uVar3 + 0x10);
  }
  else {
    uVar4 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar4 = uVar3;
    }
    func_0x000107c61434(uVar3);
    func_0x000107c6029c();
    func_0x000107c6142c(uVar3);
  }
  func_0x000107c61428(unaff_x20 + 0x80,auStack_88,0x21,0);
  func_0x0001014316d8(param_2);
  func_0x000107c614a8(auStack_88);
  func_0x000107c61170(param_2);
  if (0 < (long)uVar4) {
    uVar3 = *(ulong *)(unaff_x20 + 0x80);
    if ((uVar3 & 0xc000000000000001) == 0) {
      uVar4 = *(ulong *)(uVar3 + 0x10);
    }
    else {
      uVar4 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar4 = uVar3;
      }
      func_0x000107c61434(uVar3);
      func_0x000107c6029c();
      func_0x000107c6142c(uVar3);
    }
    if ((uVar4 == 0) && (*(char *)(unaff_x20 + 0x10) == '\0')) {
      FUN_100c88808(param_3);
    }
  }
  return;
}



/* Entry: 1014303b0; end: 101430803;  */

void FUN_1014303b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  FUN_101433c68(0);
  uVar3 = param_2;
  lVar5 = param_3;
  FUN_101433ba4();
  uVar1 = 0x5445534e55;
  if (lVar5 != 0) {
    uVar1 = uVar3;
  }
  lVar2 = -0x1b00000000000000;
  if (lVar5 != 0) {
    lVar2 = lVar5;
  }
  if (*(char *)(unaff_x20 + 0x10) != '\x02') {
    func_0x000107c61428(unaff_x20 + 0x80,auStack_78,0,0);
    uVar6 = *(ulong *)(unaff_x20 + 0x80);
    if ((uVar6 & 0xc000000000000001) == 0) {
      uVar4 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      uVar4 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar4 = uVar6;
      }
      func_0x000107c61434(uVar6);
      func_0x000107c6029c();
      func_0x000107c6142c(uVar6);
    }
    if (uVar4 == 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
      uVar6 = (ulong)*(byte *)(unaff_x20 + 0x58);
      FUN_100c89a3c(uVar3,uVar6,*(undefined8 *)(unaff_x20 + 0x68));
      func_0x000107c61428(unaff_x20 + 0x18,auStack_90,0,0);
      FUN_1014334bc(unaff_x20 + 0x18,auStack_b8);
      func_0x0001000a8868(auStack_b8,uStack_a0);
      (**(code **)(lStack_98 + 0x20))
                (param_1,param_2,param_3,uVar3,uVar6,uVar1,lVar2,uStack_a0,lStack_98);
      func_0x000107c6142c(lVar2);
      func_0x000107c6142c(uVar6);
      func_0x0001000834e4(auStack_b8);
      return;
    }
  }
  func_0x000107c61428(unaff_x20 + 0x70,auStack_b8,0x21,0);
  uVar7 = *(ulong *)(unaff_x20 + 0x70);
  func_0x000107c61434(param_3);
  uVar6 = uVar7;
  func_0x000107c61558();
  *(ulong *)(unaff_x20 + 0x70) = uVar7;
  uVar4 = uVar7;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
    func_0x000101431c70(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    *(ulong *)(unaff_x20 + 0x70) = uVar4;
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  uVar7 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar6) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    func_0x000101431c70(uVar7,uVar6 + 1,1,uVar4);
  }
  *(ulong *)(uVar7 + 0x10) = uVar6 + 1;
  lVar5 = uVar7 + uVar6 * 0x30;
  *(undefined8 *)(lVar5 + 0x20) = param_2;
  *(long *)(lVar5 + 0x28) = param_3;
  *(undefined8 *)(lVar5 + 0x30) = uVar1;
  *(long *)(lVar5 + 0x38) = lVar2;
  *(undefined8 *)(lVar5 + 0x40) = param_1;
  *(undefined1 *)(lVar5 + 0x48) = 0;
  *(ulong *)(unaff_x20 + 0x70) = uVar7;
  func_0x000107c614a8(auStack_b8);
  return;
}



/* Entry: 101430804; end: 101430817;  */

bool FUN_101430804(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101430818; end: 1014308c3;  */

void FUN_101430818(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1014308c4; end: 1014308ef; -[_TtC36ScopeGraphAppStartupViolationMonitor36ScopeGraphAppStartupViolationMonitor setBlizzardLogger:] */

void FUN_1014308c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1014308f0; end: 101430933; -[_TtC36ScopeGraphAppStartupViolationMonitor36ScopeGraphAppStartupViolationMonitor setDeviceSamplingProvider:] */

void FUN_1014308f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_1);
  func_0x00010142fc6c(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101430934; end: 101430bcf;  */

void FUN_101430934(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  long unaff_x20;
  char *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar7 = (ulong)*(byte *)(unaff_x20 + 0x58);
  FUN_100c89a3c(uVar5,uVar7,*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61428(unaff_x20 + 0x70,auStack_90,1,0);
  lVar6 = *(long *)(unaff_x20 + 0x70);
  uVar8 = *(ulong *)(lVar6 + 0x10);
  func_0x000107c61434();
  func_0x000107c61428(unaff_x20 + 0x18,auStack_a8,0,0);
  if (uVar8 != 0) {
    uVar11 = 0;
    pcVar10 = (char *)(lVar6 + 0x48);
    do {
      if (*(ulong *)(lVar6 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x101430bcc);
        (*pcVar9)();
      }
      uVar1 = *(undefined8 *)(pcVar10 + -0x28);
      uVar3 = *(undefined8 *)(pcVar10 + -0x20);
      uVar2 = *(undefined8 *)(pcVar10 + -0x18);
      uVar16 = *(undefined8 *)(pcVar10 + -0x10);
      uVar15 = *(undefined8 *)(pcVar10 + -8);
      if (*pcVar10 == '\x01') {
        FUN_1014334bc(unaff_x20 + 0x18,auStack_d0);
        lVar13 = lStack_b0;
        uVar12 = uStack_b8;
        func_0x0001000a8868(auStack_d0,uStack_b8);
        pcVar9 = *(code **)(lVar13 + 0x28);
      }
      else {
        FUN_1014334bc(unaff_x20 + 0x18,auStack_d0);
        lVar13 = lStack_b0;
        uVar12 = uStack_b8;
        func_0x0001000a8868(auStack_d0,uStack_b8);
        pcVar9 = *(code **)(lVar13 + 0x20);
      }
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar16);
      (*pcVar9)(uVar15,uVar1,uVar3,uVar5,uVar7,uVar2,uVar16,uVar12,lVar13);
      func_0x000107c6142c(uVar16);
      func_0x000107c6142c(uVar3);
      func_0x0001000834e4(auStack_d0);
      uVar11 = uVar11 + 1;
      pcVar10 = pcVar10 + 0x30;
    } while (uVar8 != uVar11);
  }
  func_0x000107c6142c(lVar6);
  func_0x000107c61428(unaff_x20 + 0x78,auStack_e8,1,0);
  lVar6 = *(long *)(unaff_x20 + 0x78);
  uVar8 = *(ulong *)(lVar6 + 0x10);
  func_0x000107c61434(lVar6);
  func_0x000107c61428(unaff_x20 + 0x18,auStack_100,0,0);
  if (uVar8 != 0) {
    uVar11 = 0;
    puVar14 = (undefined8 *)(lVar6 + 0x30);
    do {
      if (*(ulong *)(lVar6 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x101430bd0);
        (*pcVar9)();
      }
      uVar11 = uVar11 + 1;
      uVar16 = *puVar14;
      uVar1 = puVar14[-2];
      uVar2 = puVar14[-1];
      FUN_1014334bc(unaff_x20 + 0x18,auStack_d0);
      lVar13 = lStack_b0;
      uVar3 = uStack_b8;
      func_0x0001000a8868(auStack_d0,uStack_b8);
      pcVar9 = *(code **)(lVar13 + 0x30);
      func_0x000107c61434(uVar2);
      (*pcVar9)(uVar16,uVar1,uVar2,uVar5,uVar7,uVar3,lVar13);
      func_0x000107c6142c(uVar2);
      func_0x0001000834e4(auStack_d0);
      puVar14 = puVar14 + 3;
    } while (uVar8 != uVar11);
  }
  func_0x000107c6142c(uVar7);
  func_0x000107c6142c(lVar6);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined **)(unaff_x20 + 0x70) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined **)(unaff_x20 + 0x78) = puVar4;
  func_0x000107c6142c(uVar5);
  return;
}



/* Entry: 101430bd0; end: 101430c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101430bd0(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000100c8a528(unaff_x20 + _DAT_112d7f420,0x112d373d8,&UNK_10d9014c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101430c40; end: 101430cfb;  */

void FUN_101430c40(undefined8 param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  undefined8 uStack_48;
  
  uVar3 = *unaff_x20;
  if ((uVar3 & 0xc000000000000001) == 0) {
    func_0x000107c61558(uVar3);
    uStack_48 = *unaff_x20;
  }
  else {
    uStack_48 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uStack_48 = uVar3;
    }
    func_0x000107c61434(uVar3);
    uVar2 = uStack_48;
    func_0x000107c6029c();
    func_0x000107c6142c(uVar3);
    if (SCARRY8(uVar2,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101430cfc);
      (*pcVar1)();
    }
    FUN_101430cfc(uStack_48,uVar2 + 1);
    uVar3 = 1;
  }
  func_0x000101430ef8(param_1,uVar3);
  *unaff_x20 = uStack_48;
  return;
}



/* Entry: 101430cfc; end: 10143135b;  */

undefined * FUN_101430cfc(undefined *param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_2 == 0) {
    func_0x000107c615e8();
    puVar5 = PTR___swiftEmptySetSingleton_11034f1d8;
  }
  else {
    func_0x0001000285a8(0x112d7f538,&UNK_10d93d778);
    puVar5 = param_1;
    func_0x000107c602e4(param_1,param_2);
    puStack_68 = puVar5;
    func_0x000107c60288();
    puVar7 = param_1;
    func_0x000107c602ac();
    if (puVar7 != (undefined *)0x0) {
      uVar6 = 0;
      FUN_101433a30(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      puVar2 = PTR___syXlN_11034f1a0;
      do {
        puStack_78 = puVar7;
        func_0x000107c6147c(&uStack_70,&puStack_78,puVar2 + 8,uVar6,7);
        uVar3 = uStack_70;
        if (*(ulong *)(puVar5 + 0x18) <= *(ulong *)(puVar5 + 0x10)) {
          FUN_1014314ac(*(ulong *)(puVar5 + 0x10) + 1);
          puVar5 = puStack_68;
        }
        puVar7 = *(undefined **)(puVar5 + 0x28);
        func_0x000107c60114();
        uVar11 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
        uVar10 = (ulong)puVar7 & (uVar11 ^ 0xffffffffffffffff);
        uVar8 = uVar10 >> 6;
        uVar9 = -1L << (uVar10 & 0x3f) &
                (*(ulong *)(puVar5 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
        if (uVar9 == 0) {
          bVar1 = false;
          uVar9 = 0x3f - uVar11 >> 6;
          do {
            uVar10 = uVar8 + 1;
            if ((uVar10 == uVar9) && (bVar1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101430ef8);
              (*pcVar4)();
            }
            uVar8 = 0;
            if (uVar10 != uVar9) {
              uVar8 = uVar10;
            }
            bVar1 = (bool)(uVar10 == uVar9 | bVar1);
          } while (*(ulong *)(puVar5 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
          uVar9 = ~*(ulong *)(puVar5 + uVar8 * 8 + 0x38);
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar8 << 6;
        }
        else {
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar10 & 0x7fffffffffffffc0;
        }
        uVar8 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar5 + uVar8 + 0x38) = 1L << (uVar9 & 0x3f) | *(ulong *)(puVar5 + uVar8 + 0x38)
        ;
        *(undefined8 *)(*(long *)(puVar5 + 0x30) + uVar9 * 8) = uVar3;
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
        func_0x000107c602ac();
      } while (puVar7 != (undefined *)0x0);
    }
    func_0x000107c61574(param_1);
  }
  return puVar5;
}



/* Entry: 10143135c; end: 1014314ab;  */

void FUN_10143135c(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  
  func_0x0001000285a8(0x112d7f538,&UNK_10d93d778);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c602dc();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x38;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x38U) {
      func_0x000107c610b8(lVar4 + 0x38U,lVar1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x38);
    if (uVar5 == 0) goto LAB_101431438;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        func_0x000107c61174();
        if (uVar5 != 0) break;
LAB_101431438:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1014314ac);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_101431484;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_101431484:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1014314ac; end: 1014319c7;  */

void FUN_1014314ac(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar11 = 0x112d7f538;
  func_0x0001000285a8(0x112d7f538,&UNK_10d93d778);
  lVar4 = lVar12;
  func_0x000107c602e0(lVar12,lVar1,1,uVar11);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_1014316a8:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x38);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar15 = uVar15 & *puVar13;
  lVar1 = lVar4 + 0x38;
  lVar7 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1014316d4);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) {
          uVar15 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
          if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
            *puVar13 = -1L << (uVar15 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar13,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar12 + 0x10) = 0;
          goto LAB_1014316a8;
        }
        uVar15 = puVar13[lVar14];
        lVar7 = lVar7 + 1;
      } while (uVar15 == 0);
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar14 = lVar7;
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + (LZCOUNT(uVar6) | lVar14 << 6) * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60114();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1014316d8);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar11;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Entry: 1014319c8; end: 101431b53;  */

void FUN_1014319c8(ulong param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  lVar9 = *unaff_x20;
  lVar1 = lVar9 + 0x38;
  uVar7 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
  uVar10 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  uVar8 = 1L << (uVar10 & 0x3f);
  if ((uVar8 & *(ulong *)(lVar1 + (uVar10 >> 6) * 8)) == 0) {
    uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  }
  else {
    uVar7 = ~uVar7;
    uVar6 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    if ((*(ulong *)(lVar1 + (uVar10 >> 6) * 8) & uVar8) != 0) {
      uVar8 = uVar6 + 1 & uVar7;
      do {
        uVar6 = *(ulong *)(lVar9 + 0x28);
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar10 * 8);
        func_0x000107c61174(uVar5);
        func_0x000107c60114();
        func_0x000107c61170(uVar5);
        uVar6 = uVar6 & uVar7;
        if ((long)param_1 < (long)uVar8) {
          if (uVar8 <= uVar6 || (long)uVar6 <= (long)param_1) {
LAB_101431ab8:
            puVar2 = (undefined8 *)(*(long *)(lVar9 + 0x30) + param_1 * 8);
            puVar3 = (undefined8 *)(*(long *)(lVar9 + 0x30) + uVar10 * 8);
            if ((param_1 != uVar10) || (puVar3 + 1 <= puVar2)) {
              *puVar2 = *puVar3;
              param_1 = uVar10;
            }
          }
        }
        else if (uVar8 <= uVar6 && (long)uVar6 <= (long)param_1) goto LAB_101431ab8;
        uVar10 = uVar10 + 1 & uVar7;
      } while ((*(ulong *)(lVar1 + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f) & 1) != 0);
    }
    uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = (-1L << (param_1 & 0x3f)) - 1U & *(ulong *)(lVar1 + uVar7);
  }
  if (!SBORROW8(*(long *)(lVar9 + 0x10),1)) {
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + -1;
    *(int *)(lVar9 + 0x24) = *(int *)(lVar9 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101431b54);
  (*pcVar4)();
}



/* Entry: 101431b54; end: 101431d87;  */

undefined * FUN_101431b54(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101431c70);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d7f540;
    func_0x0001000285a8(0x112d7f540,&UNK_10d93d780);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1103b6c00);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101431d88; end: 101431ee7;  */

ulong FUN_101431d88(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101431ee8);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_101431ee8(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101431ee4);
      (*pcVar1)();
    }
    FUN_101432004(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101431ee8; end: 101432003;  */

undefined *
FUN_101431ee8(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_101432120(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 101432004; end: 10143211f;  */

long FUN_101432004(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10143211c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101432120);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_101433a30(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_101433a30(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101432118);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101432120; end: 101432197;  */

void FUN_101432120(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101433a30(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101432198; end: 1014322a3;  */

void FUN_101432198(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_1014332c0();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar6;
  uStack_48 = uVar6;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar6) {
    puVar5 = (undefined *)(uVar6 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      uVar2 = 0x112d7f568;
      func_0x0001000285a8(0x112d7f568,&UNK_10d93d7a0);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    FUN_1014322a4(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_1014326d4(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 1014322a4; end: 1014326d3;  */

void FUN_1014322a4(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  long unaff_x21;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar19 = param_3[1];
  if (0 < lVar19) {
    lVar14 = 0;
    do {
      lVar22 = lVar14 + 1;
      if (lVar22 < lVar19) {
        lVar20 = *param_3;
        puVar11 = (ulong *)(lVar20 + lVar22 * 0x18);
        uVar21 = *puVar11;
        puVar12 = (ulong *)(lVar20 + lVar14 * 0x18);
        if (uVar21 == *puVar12 && puVar11[1] == puVar12[1]) {
          uVar21 = 0;
        }
        else {
          func_0x000107c605b8();
        }
        lVar16 = lVar14 + 2;
        lVar22 = lVar16;
        if (lVar16 < lVar19) {
          plVar18 = (long *)(lVar20 + lVar14 * 0x18 + 0x20);
          do {
            lVar7 = plVar18[2];
            if (lVar7 == plVar18[-1] && plVar18[3] == *plVar18) {
              if ((uVar21 & 1) != 0) goto LAB_1014323a0;
            }
            else {
              func_0x000107c605b8();
              lVar22 = lVar16;
              if ((((uint)uVar21 ^ (uint)lVar7) & 1) != 0) break;
            }
            lVar16 = lVar16 + 1;
            plVar18 = plVar18 + 3;
            lVar22 = lVar19;
          } while (lVar19 != lVar16);
        }
        lVar16 = lVar22;
        if ((uVar21 & 1) != 0) {
LAB_1014323a0:
          if (lVar16 < lVar14) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1014326a8);
            (*pcVar5)();
          }
          lVar22 = lVar16;
          if (lVar14 < lVar16) {
            lVar13 = lVar16 * 0x18;
            lVar7 = lVar14 * 0x18;
            lVar19 = lVar14;
            do {
              lVar16 = lVar16 + -1;
              if (lVar19 != lVar16) {
                if (lVar20 == 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x1014326c8);
                  (*pcVar5)();
                }
                puVar1 = (undefined8 *)(lVar20 + lVar7);
                lVar2 = lVar20 + lVar13;
                uVar3 = *puVar1;
                uVar4 = puVar1[1];
                uVar23 = puVar1[2];
                uVar17 = *(undefined8 *)(lVar2 + -8);
                uVar25 = *(undefined8 *)(lVar2 + -0x18);
                puVar1[1] = *(undefined8 *)(lVar2 + -0x10);
                *puVar1 = uVar25;
                puVar1[2] = uVar17;
                *(undefined8 *)(lVar2 + -0x18) = uVar3;
                *(undefined8 *)(lVar2 + -0x10) = uVar4;
                *(undefined8 *)(lVar2 + -8) = uVar23;
              }
              lVar19 = lVar19 + 1;
              lVar13 = lVar13 + -0x18;
              lVar7 = lVar7 + 0x18;
            } while (lVar19 < lVar16);
          }
        }
      }
      lVar19 = param_3[1];
      lVar20 = lVar22;
      if (lVar22 < lVar19) {
        if (SBORROW8(lVar22,lVar14)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1014326a4);
          (*pcVar5)();
        }
        if (lVar22 - lVar14 < param_4) {
          if (SCARRY8(lVar14,param_4)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1014326ac);
            (*pcVar5)();
          }
          lVar16 = lVar14 + param_4;
          if (lVar19 <= lVar14 + param_4) {
            lVar16 = lVar19;
          }
          if (lVar16 < lVar14) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1014326b0);
            (*pcVar5)();
          }
          if (lVar22 != lVar16) {
            lVar19 = *param_3;
            puVar11 = (ulong *)(lVar19 + lVar22 * 0x18 + -0x18);
            lVar7 = lVar14 - lVar22;
            do {
              puVar12 = (ulong *)(lVar19 + lVar22 * 0x18);
              uVar21 = *puVar12;
              uVar15 = puVar12[1];
              lVar20 = lVar7;
              puVar12 = puVar11;
              do {
                if ((uVar21 == *puVar12 && uVar15 == puVar12[1]) ||
                   (func_0x000107c605b8(), (uVar21 & 1) == 0)) break;
                if (lVar19 == 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x1014326b4);
                  (*pcVar5)();
                }
                uVar21 = puVar12[3];
                uVar15 = puVar12[4];
                uVar24 = puVar12[5];
                puVar12[4] = puVar12[1];
                puVar12[3] = *puVar12;
                puVar12[5] = puVar12[2];
                *puVar12 = uVar21;
                puVar12[1] = uVar15;
                puVar12[2] = uVar24;
                puVar12 = puVar12 + -3;
                bVar6 = lVar20 != -1;
                lVar20 = lVar20 + 1;
              } while (bVar6);
              lVar22 = lVar22 + 1;
              puVar11 = puVar11 + 3;
              lVar7 = lVar7 + -1;
              lVar20 = lVar16;
            } while (lVar22 != lVar16);
          }
        }
      }
      puVar10 = puStack_58;
      if (lVar20 < lVar14) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101432694);
        (*pcVar5)();
      }
      puVar8 = puStack_58;
      func_0x000107c61558();
      puVar9 = puVar10;
      if (((ulong)puVar8 & 1) == 0) {
        puVar9 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
      }
      uVar21 = *(ulong *)(puVar9 + 0x10);
      puVar10 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar21) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        func_0x0001000a91e0(puVar10,uVar21 + 1,1,puVar9);
      }
      *(ulong *)(puVar10 + 0x10) = uVar21 + 1;
      *(long *)(puVar10 + uVar21 * 0x10 + 0x20) = lVar14;
      *(long *)(puVar10 + uVar21 * 0x10 + 0x28) = lVar20;
      puStack_58 = puVar10;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1014326cc);
        (*pcVar5)();
      }
      FUN_1014327b4(&puStack_58,*param_1,param_3);
      puVar10 = puStack_58;
      if (unaff_x21 != 0) goto LAB_101432664;
      lVar19 = param_3[1];
      lVar14 = lVar20;
    } while (lVar20 < lVar19);
  }
  puVar10 = puStack_58;
  lVar19 = *param_1;
  if (lVar19 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1014326d4);
    (*pcVar5)();
  }
  puVar8 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar8 & 1) == 0) {
    FUN_100e06d54();
  }
  puVar11 = (ulong *)(puVar10 + 0x10);
  uVar21 = *puVar11;
  while (1 < uVar21) {
    lVar14 = *param_3;
    if (lVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1014326d0);
      (*pcVar5)();
    }
    plVar18 = (long *)(puVar10 + uVar21 * 0x10);
    lVar22 = *plVar18;
    puVar12 = puVar11 + uVar21 * 2;
    uVar15 = puVar12[1];
    FUN_101432a24(lVar14 + lVar22 * 0x18,lVar14 + *puVar12 * 0x18,lVar14 + uVar15 * 0x18,lVar19);
    if (unaff_x21 != 0) break;
    if ((long)uVar15 < lVar22) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101432698);
      (*pcVar5)();
    }
    if (*puVar11 <= uVar21 - 2) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10143269c);
      (*pcVar5)();
    }
    *plVar18 = lVar22;
    plVar18[1] = uVar15;
    uVar15 = *puVar11;
    lVar14 = uVar15 - uVar21;
    if (uVar15 < uVar21) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1014326a0);
      (*pcVar5)();
    }
    uVar21 = uVar15 - 1;
    func_0x000107c610b8(puVar12,puVar12 + 2,lVar14 * 0x10);
    *puVar11 = uVar21;
  }
LAB_101432664:
  func_0x000107c6142c(puVar10);
  return;
}



/* Entry: 1014326d4; end: 1014327b3;  */

void FUN_1014326d4(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_3 != param_2) {
    lVar6 = *param_4;
    puVar7 = (ulong *)(lVar6 + param_3 * 0x18 + -0x18);
    param_1 = param_1 - param_3;
    do {
      puVar5 = (ulong *)(lVar6 + param_3 * 0x18);
      uVar3 = *puVar5;
      uVar4 = puVar5[1];
      lVar8 = param_1;
      puVar5 = puVar7;
      do {
        if ((uVar3 == *puVar5 && uVar4 == puVar5[1]) || (func_0x000107c605b8(), (uVar3 & 1) == 0))
        break;
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1014327b4);
          (*pcVar1)();
        }
        uVar3 = puVar5[3];
        uVar4 = puVar5[4];
        uVar9 = puVar5[5];
        puVar5[4] = puVar5[1];
        puVar5[3] = *puVar5;
        puVar5[5] = puVar5[2];
        *puVar5 = uVar3;
        puVar5[1] = uVar4;
        puVar5[2] = uVar9;
        puVar5 = puVar5 + -3;
        bVar2 = lVar8 != -1;
        lVar8 = lVar8 + 1;
      } while (bVar2);
      param_3 = param_3 + 1;
      puVar7 = puVar7 + 3;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1014327b4; end: 101432a23;  */

undefined8 FUN_1014327b4(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      FUN_100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_10143288c;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101432a0c);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1014328f0:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1014329fc);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101432a04);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1014329e4);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1014329e8);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1014329f0);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1014329f8);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_10143288c:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1014329ec);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1014329f4);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101432a00);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101432a08);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1014328f0;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101432a10);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1014329d8);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101432a24);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_101432a24(lVar9 + lVar12 * 0x18,lVar9 + *plVar1 * 0x18,lVar9 + lVar7 * 0x18,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1014329dc);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        FUN_100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1014329e0);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 101432a24; end: 101432c97;  */

undefined8 FUN_101432a24(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar1 = ((long)param_2 - (long)param_1) / 0x18;
  lVar2 = ((long)param_3 - (long)param_2) / 0x18;
  if (lVar1 < lVar2) {
    if (((param_4 < param_1) || (param_1 + lVar1 * 3 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar1 * 0x18);
    }
    puVar6 = param_4 + lVar1 * 3;
    puVar3 = param_1;
    if (0x17 < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        uVar8 = *param_2;
        if ((uVar8 == *param_4 && param_2[1] == param_4[1]) ||
           (func_0x000107c605b8(), (uVar8 & 1) == 0)) {
          puVar4 = param_4 + 3;
          puVar5 = param_4;
        }
        else {
          puVar4 = param_4;
          puVar5 = param_2;
          param_2 = param_2 + 3;
        }
        param_4 = puVar4;
        if (puVar3 != puVar5) {
          uVar9 = puVar5[1];
          uVar8 = *puVar5;
          puVar3[2] = puVar5[2];
          puVar3[1] = uVar9;
          *puVar3 = uVar8;
        }
        puVar3 = puVar3 + 3;
      } while (param_4 < puVar6);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar2 * 3 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar2 * 0x18);
    }
    puVar5 = param_4 + lVar2 * 3;
    puVar3 = param_2;
    puVar6 = puVar5;
    if ((param_1 < param_2) && (0x17 < (long)param_3 - (long)param_2)) {
      do {
        puVar7 = param_2 + -3;
        puVar4 = param_3;
        while( true ) {
          param_3 = puVar4 + -3;
          puVar6 = puVar5 + -3;
          uVar8 = *puVar6;
          if ((uVar8 != param_2[-3] || puVar5[-2] != param_2[-2]) &&
             (func_0x000107c605b8(), (uVar8 & 1) != 0)) break;
          if (puVar4 != puVar5) {
            uVar9 = puVar5[-2];
            uVar8 = *puVar6;
            puVar4[-1] = puVar5[-1];
            puVar4[-2] = uVar9;
            *param_3 = uVar8;
          }
          puVar3 = param_2;
          puVar5 = puVar6;
          puVar4 = param_3;
          if (puVar6 <= param_4) goto LAB_101432c34;
        }
        if (puVar4 != param_2) {
          uVar9 = param_2[-2];
          uVar8 = *puVar7;
          puVar4[-1] = param_2[-1];
          puVar4[-2] = uVar9;
          *param_3 = uVar8;
        }
        puVar3 = puVar7;
        puVar6 = puVar5;
      } while ((param_1 < puVar7) && (param_2 = puVar7, param_4 < puVar5));
    }
  }
LAB_101432c34:
  lVar1 = ((long)puVar6 - (long)param_4) / 0x18;
  if ((puVar3 != param_4) || (param_4 + lVar1 * 3 <= puVar3)) {
    func_0x000107c610b8(puVar3,param_4,lVar1 * 0x18);
  }
  return 1;
}



/* Entry: 101432c98; end: 101432dff;  */

void FUN_101432c98(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  func_0x0001000285a8(0x112d5df98,&UNK_10d9246a0);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_101432d74;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar12 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar13;
        func_0x000107c61434();
        if (uVar8 != 0) break;
LAB_101432d74:
        do {
          lVar2 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101432e00);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_101432dd8;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar12 = lVar2;
      }
    } while( true );
  }
LAB_101432dd8:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 101432e00; end: 101433097;  */

void FUN_101432e00(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined1 auStack_b8 [72];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112d5df98;
  func_0x0001000285a8(0x112d5df98,&UNK_10d9246a0);
  lVar7 = lVar15;
  func_0x000107c60490(lVar15,lVar1,param_2,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_101433060:
    func_0x000107c61574(lVar15);
    *unaff_x20 = lVar7;
    return;
  }
  puVar17 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar16 = uVar16 & *puVar17;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar18 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101433094);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
            if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
              *puVar17 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar17,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar15 + 0x10) = 0;
          }
          goto LAB_101433060;
        }
        uVar16 = puVar17[lVar18];
        lVar10 = lVar10 + 1;
      } while (uVar16 == 0);
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar18 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar18 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar19 = *(undefined8 *)(*(long *)(lVar15 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
    }
    func_0x000107c6068c(auStack_b8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_b8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101433098);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar19;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar18;
  } while( true );
}



/* Entry: 101433098; end: 101433163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101433098(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_40 = param_3;
  uStack_38 = param_4;
  func_0x0001000c5db4(auStack_58);
  (**(code **)(*(long *)(param_3 + -8) + 0x20))();
  *(undefined1 *)(param_2 + 0x10) = 2;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined1 *)(param_2 + 0x58) = 1;
  *(undefined8 *)(param_2 + 0x68) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x60) = 1;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(param_2 + 0x70) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(param_2 + 0x78) = puVar1;
  *(undefined **)(param_2 + 0x80) = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar2 = _DAT_112d7f420;
  lVar3 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_2 + lVar2,1,1,lVar3);
  func_0x0001000778a0(auStack_58,param_2 + 0x18);
  return param_2;
}



/* Entry: 101433164; end: 1014332bf;  */

long FUN_101433164(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  puVar7 = (ulong *)(param_4 + 0x40);
  uVar8 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (-uVar8 < 0x40) {
    uVar9 = ~(-1L << (-uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *puVar7;
  if (param_2 == (undefined8 *)0x0) {
    lVar11 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar11 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1014332c0);
      (*pcVar3)();
    }
    lVar5 = 0;
    lVar10 = 0;
    uVar12 = 0x3f - uVar8 >> 6;
    lVar11 = lVar5;
    while( true ) {
      while (uVar9 == 0) {
        bVar4 = SCARRY8(lVar11,1);
        lVar11 = lVar11 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1014332bc);
          (*pcVar3)();
        }
        if ((long)uVar12 <= lVar11) {
          uVar9 = 0;
          if ((long)uVar12 <= lVar5 + 1) {
            uVar12 = lVar5 + 1;
          }
          lVar11 = uVar12 - 1;
          param_3 = lVar10;
          goto LAB_101433280;
        }
        uVar9 = puVar7[lVar11];
      }
      lVar10 = lVar10 + 1;
      uVar6 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | lVar11 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar6 * 0x10);
      uVar2 = puVar1[1];
      uVar13 = *(undefined8 *)(*(long *)(param_4 + 0x38) + uVar6 * 8);
      uVar9 = uVar9 - 1 & uVar9;
      *param_2 = *puVar1;
      param_2[1] = uVar2;
      param_2[2] = uVar13;
      if (lVar10 == param_3) break;
      param_2 = param_2 + 3;
      func_0x000107c61434();
      lVar5 = lVar11;
    }
    func_0x000107c61434();
  }
LAB_101433280:
  *param_1 = param_4;
  param_1[1] = (long)puVar7;
  param_1[2] = ~uVar8;
  param_1[3] = lVar11;
  param_1[4] = uVar9;
  return param_3;
}



/* Entry: 1014332c0; end: 1014332d3;  */

/* WARNING: Removing unreachable block (ram,0x0001014332f4) */
/* WARNING: Removing unreachable block (ram,0x000101433304) */
/* WARNING: Removing unreachable block (ram,0x000101433414) */
/* WARNING: Removing unreachable block (ram,0x000101433310) */
/* WARNING: Removing unreachable block (ram,0x000101433318) */
/* WARNING: Removing unreachable block (ram,0x00010143339c) */
/* WARNING: Removing unreachable block (ram,0x0001014333a8) */
/* WARNING: Removing unreachable block (ram,0x0001014333ac) */
/* WARNING: Removing unreachable block (ram,0x0001014333b0) */
/* WARNING: Removing unreachable block (ram,0x0001014333c4) */

undefined * FUN_1014332c0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar2 = (undefined *)0x112d7f570;
    func_0x0001000285a8(0x112d7f570,&UNK_10d93d7b0);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(long *)(puVar2 + 0x10) = lVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x18) * 2;
  }
  uVar4 = 0x112d7f568;
  func_0x0001000285a8(0x112d7f568,&UNK_10d93d7a0);
  func_0x000107c6140c(puVar2 + 0x20,param_1 + 0x20,lVar5,uVar4);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 1014332d4; end: 1014334bb;  */

undefined * FUN_1014332d4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101433418);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112d7f570;
    func_0x0001000285a8(0x112d7f570,&UNK_10d93d7b0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d7f568;
    func_0x0001000285a8(0x112d7f568,&UNK_10d93d7a0);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1014334bc; end: 1014334ff;  */

long FUN_1014334bc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101433500; end: 10143350f;  */

void FUN_101433500(void)

{
  if (lRam0000000112d7f450 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e636cb0);
  return;
}



/* Entry: 101433510; end: 101433543;  */

undefined8 * FUN_101433510(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101433544; end: 101433597;  */

undefined8 * FUN_101433544(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 101433598; end: 1014335d3;  */

undefined8 * FUN_101433598(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 1014335d4; end: 10143366b;  */

int FUN_1014335d4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10143366c; end: 10143370b;  */

long FUN_10143366c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10143370c; end: 101433787;  */

undefined8 * FUN_10143370c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Entry: 101433788; end: 1014337db;  */

undefined8 * FUN_101433788(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Entry: 1014337dc; end: 1014339e7;  */

int FUN_1014337dc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1014339e8; end: 101433a27;  */

void FUN_1014339e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7f528 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93d744;
  func_0x000107c61520(&UNK_10d93d744,&UNK_1103b6d20);
  puRam0000000112d7f528 = puVar1;
  return;
}



/* Entry: 101433a28; end: 101433a2f;  */

void FUN_101433a28(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101433a30; end: 101433a6f;  */

void FUN_101433a30(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101433a70; end: 101433a77;  */

undefined8 * FUN_101433a70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101433a78; end: 101433ba3;  */

void FUN_101433a78(void)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  
  func_0x0001000285a8(0x112d38330,&UNK_10d91d920);
  lVar11 = 0xed8;
  lVar7 = 0xed8;
  func_0x000107c60498();
  func_0x000107c6157c();
  puVar12 = (undefined8 *)0x112d7f650;
  while( true ) {
    uVar3 = puVar12[-3];
    uVar4 = puVar12[-2];
    uVar9 = puVar12[-1];
    uVar5 = *puVar12;
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar5);
    uVar8 = uVar3;
    uVar10 = uVar4;
    func_0x000100029284();
    if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101433ba0);
      (*pcVar6)();
    }
    uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar7 + 0x40 + uVar10) = *(ulong *)(lVar7 + 0x40 + uVar10) | 1L << (uVar8 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar8 * 0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar8 * 0x10);
    *puVar2 = uVar9;
    puVar2[1] = uVar5;
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) break;
    puVar12 = puVar12 + 4;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar11 = lVar11 + -1;
    if (lVar11 == 0) {
      func_0x000107c61574(lVar7);
      uVar9 = 0x112d38308;
      func_0x0001000285a8(0x112d38308,&UNK_10d902040);
      func_0x000107c61408(0x112d7f638,0xed8,uVar9);
      lRam0000000113440f18 = lVar7;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x101433ba4);
  (*pcVar6)();
}



/* Entry: 101433ba4; end: 101433c57;  */

undefined1  [16] FUN_101433ba4(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if (lRam0000000113440f10 != -1) {
    func_0x000107c61568(0x113440f10,FUN_101433a78);
  }
  lVar2 = lRam0000000113440f18;
  if (*(long *)(lRam0000000113440f18 + 0x10) == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    func_0x000107c61434(lRam0000000113440f18);
    func_0x000100029284();
    if ((param_2 & 1) == 0) {
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 0x10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      func_0x000107c61434(uVar4);
    }
    func_0x000107c6142c(lVar2);
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 101433c58; end: 101433c67;  */

void FUN_101433c58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101433c68; end: 101433c87;  */

void FUN_101433c68(void)

{
  func_0x000107c61168(&PTR_PTR_112d7f5b8);
  return;
}



/* Entry: 101433c88; end: 101433f6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101433c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33)

{
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d9d140) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d148) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d150) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d158) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d160) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d168) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d170) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d178) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d180) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d188) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d190) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d198) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d1a0) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d1a8) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d1b0) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d1b8) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d1c0) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d1c8) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d1d0) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d1d8) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d1e0) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d1e8) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d1f0) = param_23;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d1f8) = param_24;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d200) = param_25;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d208) = param_26;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d210) = param_27;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d218) = param_28;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d220) = param_29;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d228) = param_30;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d230) = param_31;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d238) = param_32;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d240) = param_33;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101433f70; end: 101433f8f;  */

void FUN_101433f70(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101433f90; end: 101433fef; -[_TtC34SystemScopedFactoryServiceProvider22SCSystemScopedServices init] */

void FUN_101433f90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SystemScopedFactoryServiceProvider.SCSystemScopedServices",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101433fbc);
  (*pcVar1)();
}



/* Entry: 101433ff0; end: 101434217; -[_TtC34SystemScopedFactoryServiceProvider22SCSystemScopedServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010143400c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010143402c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010143404c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010143406c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010143408c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014340ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014340cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014340ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010143410c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010143412c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010143414c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010143416c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010143418c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014341ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014341cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014341ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014341d0) */
/* WARNING: Removing unreachable block (ram,0x0001014341b0) */
/* WARNING: Removing unreachable block (ram,0x000101434190) */
/* WARNING: Removing unreachable block (ram,0x000101434170) */
/* WARNING: Removing unreachable block (ram,0x000101434150) */
/* WARNING: Removing unreachable block (ram,0x000101434130) */
/* WARNING: Removing unreachable block (ram,0x000101434110) */
/* WARNING: Removing unreachable block (ram,0x0001014340f0) */
/* WARNING: Removing unreachable block (ram,0x0001014340d0) */
/* WARNING: Removing unreachable block (ram,0x0001014340b0) */
/* WARNING: Removing unreachable block (ram,0x000101434090) */
/* WARNING: Removing unreachable block (ram,0x000101434070) */
/* WARNING: Removing unreachable block (ram,0x000101434050) */
/* WARNING: Removing unreachable block (ram,0x000101434030) */
/* WARNING: Removing unreachable block (ram,0x000101434010) */
/* WARNING: Removing unreachable block (ram,0x0001014341f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101433ff0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d9d1e8));
  return;
}



/* Entry: 101434218; end: 101434283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101434218(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103b6f80;
  func_0x000107c613fc(&UNK_1103b6f80,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10143430c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101434284; end: 1014342e3;  */

undefined1  [16] FUN_101434284(void)

{
  return ZEXT816(0x1103b6ec0);
}



/* Entry: 1014342e4; end: 10143430b;  */

void FUN_1014342e4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10143430c; end: 10143433b;  */

void FUN_10143430c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10143433c; end: 1014343cf;  */

void FUN_10143433c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100099ee8();
  func_0x000107c613fc();
  FUN_101434424(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1014343d0; end: 101434423;  */

undefined8 FUN_1014343d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101434424(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101434424; end: 101434607;  */

void FUN_101434424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a6d80;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef3c720);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 101434608; end: 101434643;  */

void FUN_101434608(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101434644; end: 101434697;  */

void FUN_101434644(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101434698; end: 1014346e7;  */

undefined8 FUN_101434698(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1014346e8; end: 10143472b;  */

undefined1  [16] FUN_1014346e8(void)

{
  return ZEXT816(0x1103b7158);
}



/* Entry: 10143472c; end: 101434753;  */

void FUN_10143472c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101434754; end: 10143475b;  */

undefined8 FUN_101434754(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 10143475c; end: 101434827;  */

void FUN_10143475c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d3f0,&UNK_10d93dc70);
  func_0x000107c613fc();
  uVar1 = 0x1014347c8;
  func_0x0001000841fc(0x1014347c8,0);
  func_0x000100084214("DeepLinkTransformerSaberPluginRegistryServiceProvider",0x35,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101434828; end: 1014348a3;  */

void FUN_101434828(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112d9d3f8,&UNK_10d93dc78);
  func_0x000107c613fc();
  pcVar1 = FUN_1014348a4;
  func_0x0001000841fc(FUN_1014348a4,param_2);
  func_0x000100084214("SCCremaLegacyBackdoorPluginRegistryServiceProvider",0x32,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1014348a4; end: 10143498b;  */

void FUN_1014348a4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  FUN_1014524ac();
  func_0x000100082720("SCBlizzardCremaBackdoorPluginProvider",0x25,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10143498c; end: 1014349cb;  */

undefined1  [16] FUN_10143498c(void)

{
  return ZEXT816(0x1103b78d0);
}



/* Entry: 1014349cc; end: 1014349e7;  */

void FUN_1014349cc(void)

{
  func_0x000107c610f8(PTR_PTR_1126a6d98);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1014349e8; end: 101434a67;  */

void FUN_1014349e8(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x0001048d8b84();
  func_0x0001048d8ad8();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5cd4c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      func_0x000107c5ee30(lVar2);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 101434a68; end: 101434a6f;  */

undefined8 FUN_101434a68(void)

{
  return 0;
}



/* Entry: 101434a70; end: 101434a97;  */

void FUN_101434a70(void)

{
  func_0x0001054e44c8();
  return;
}



/* Entry: 101434a98; end: 101434acf;  */

void FUN_101434a98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101434ad0; end: 101434b3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101434ad0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x0001000a0c70();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112d9d458) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101434b3c; end: 101434b43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101434b3c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x0001000a0c70();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112d9d458) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 101434b44; end: 101434b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101434b44(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d9d458) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101434b90; end: 101434bef; -[_TtC27CrashServicesImplementation20CrashServicesWrapper init] */

void FUN_101434b90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CrashServicesImplementation.CrashServicesWrapper",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101434bbc);
  (*pcVar1)();
}



/* Entry: 101434bf0; end: 101434bff;  */

undefined1  [16] FUN_101434bf0(void)

{
  return ZEXT816(0x1103b7c88);
}



/* Entry: 101434c00; end: 101434c6f; -[_TtC27CrashServicesImplementation20CrashServicesWrapper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101434c00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d9d458));
  return;
}



/* Entry: 101434c70; end: 101434c93;  */

undefined8 FUN_101434c70(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 101434c94; end: 101434c9b;  */

void FUN_101434c94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101434c9c; end: 101434c9f; -[_TtC27CrashServicesImplementation20NoOpThreadMonitoring resume] */

void FUN_101434c9c(void)

{
  return;
}



/* Entry: 101434ca0; end: 101434ca3; -[_TtC27CrashServicesImplementation20NoOpThreadMonitoring pause] */

void FUN_101434ca0(void)

{
  return;
}



/* Entry: 101434ca4; end: 101434ca7; -[_TtC27CrashServicesImplementation20NoOpThreadMonitoring updateANRThreshold] */

void FUN_101434ca4(void)

{
  return;
}



/* Entry: 101434ca8; end: 101434cab; -[_TtC27CrashServicesImplementation20NoOpThreadMonitoring start] */

void FUN_101434ca8(void)

{
  return;
}



/* Entry: 101434cac; end: 101434cb3; -[_TtC27CrashServicesImplementation20NoOpThreadMonitoring lastSessionANRCrashed] */

undefined8 FUN_101434cac(void)

{
  return 0;
}



/* Entry: 101434cb4; end: 101434cb7; -[_TtC27CrashServicesImplementation20NoOpThreadMonitoring didBecomeActive] */

void FUN_101434cb4(void)

{
  return;
}



/* Entry: 101434cb8; end: 101434cbb; -[_TtC27CrashServicesImplementation20NoOpThreadMonitoring didEnterBackground] */

void FUN_101434cb8(void)

{
  return;
}



/* Entry: 101434cbc; end: 101434cf7; -[_TtC27CrashServicesImplementation20NoOpThreadMonitoring init] */

void FUN_101434cbc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101434cf8; end: 101434d4b;  */

void FUN_101434cf8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101434d4c; end: 101434d6b;  */

undefined1  [16] FUN_101434d4c(void)

{
  return ZEXT816(0x1103b7e30);
}



/* Entry: 101434d6c; end: 101434dcb;  */

void FUN_101434d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c610f8();
  func_0x0001001b83f8(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 101434dcc; end: 101434ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101434dcc(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  if (*(char *)(unaff_x20 + _DAT_112d9d520) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d9d500);
    func_0x000107c4b940(uVar2);
    func_0x000107c6071c();
    *(undefined8 *)(unaff_x20 + _DAT_112d9d518) = param_1;
    lVar3 = *(long *)(unaff_x20 + _DAT_112d9d510);
    func_0x000107c61428(lVar3 + 0x10,auStack_48,0x21,0);
    func_0x000107c60b30(0,lVar3 + 0x10);
    func_0x000107c614a8(auStack_48);
    func_0x000107c60060();
    func_0x000107c5d278(uVar2);
  }
  else {
    lVar3 = *(long *)(unaff_x20 + _DAT_112d9d540);
    func_0x000107c61428(lVar3 + 0x10,auStack_48,0x21,0);
    iVar1 = 0;
    func_0x000107c60b2c(0,lVar3 + 0x10);
    func_0x000107c614a8(auStack_48);
    if (iVar1 != 0) {
      func_0x000107c60060();
    }
  }
  return;
}



/* Entry: 101434ec8; end: 101434f43; -[_TtC22SCCrashLoggerThreadsV227SCEventDelayMonitorThreadV2 initWithLazyPreference:crashLogger:appStartExperimentReader:applicationLifecycleEvents:mainThreadRef:] */

void FUN_101434ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x0001001b83f8(param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 101434f44; end: 101435083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101434f44(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d9d4e8);
  *puVar1 = 0;
  puVar1[1] = 0x8000000000000000;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d4f0) = 0x3fb999999999999a;
  lVar2 = _DAT_112d9d4f8;
  uVar4 = 0;
  func_0x000107c60f6c();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  lVar2 = _DAT_112d9d500;
  puVar5 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112d9d508;
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112d9d510;
  func_0x0001001b89d4();
  func_0x000107c613fc();
  *(undefined4 *)(puVar5 + 0x10) = 0;
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d518) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d9d520) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d528) = 0x4010000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d530) = 0x4024000000000000;
  *(undefined1 *)(unaff_x20 + _DAT_112d9d538) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0x616c696176616e75,0xeb00000000656c62,
                      "SCCrashLoggerThreadsV2/SCEventDelayMonitorThreadV2.swift",0x38,2,0x7b,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101435084);
  (*pcVar3)();
}


