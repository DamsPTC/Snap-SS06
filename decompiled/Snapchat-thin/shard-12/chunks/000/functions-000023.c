/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c54a20; end: 108c54a57;  */

long FUN_108c54a20(void)

{
  code *pcVar1;
  long extraout_x8;
  uint extraout_w9;
  
  func_0x000108c58bec();
  if ((extraout_w9 >> 5 & 1) == 0) {
    return extraout_x8 + 0x98;
  }
  func_0x000108c58c7c();
  func_0x000108c59290();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108c54a50);
  (*pcVar1)();
}



/* Entry: 108c54a58; end: 108c54b2b;  */

void FUN_108c54a58(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  func_0x000108c597d0();
  func_0x000108c597c0();
  FUN_108c40438();
  FUN_108c40460(alStack_30,auStack_40);
  func_0x000108c3ff78(auStack_40);
  func_0x000108c3ff78(auStack_50);
  lVar1 = alStack_30[0];
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x88);
  FUN_108c54b2c();
  plVar2 = *(long **)(alStack_30[0] + 0xd0);
  *(undefined8 *)(alStack_30[0] + 0xd0) = 0;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x88);
  if (plVar2 == (long *)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(alStack_30[0] + 0x58);
  }
  else {
    func_0x000108c59234(*(undefined8 *)(*plVar2 + 0x10));
    func_0x000108c58f04();
  }
  func_0x000108c3ff78(alStack_30);
  return;
}



/* Entry: 108c54b2c; end: 108c54b3b;  */

long FUN_108c54b2c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*(char *)(lVar1 + 0x50) == '\x01') {
    FUN_108c54b8c();
  }
  else {
    FUN_108c54b70(lVar1,*param_1);
  }
  return lVar1;
}



/* Entry: 108c54b3c; end: 108c54b6f;  */

long FUN_108c54b3c(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_108c54b8c();
  }
  else {
    FUN_108c54b70();
  }
  return param_1;
}



/* Entry: 108c54b70; end: 108c54b8b;  */

void FUN_108c54b70(long param_1)

{
  FUN_108c54bd0();
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 108c54b8c; end: 108c54bb3;  */

void FUN_108c54b8c(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x48);
  if (cVar1 != *(char *)(param_2 + 0x48)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x48) == '\x01') {
        FUN_108c4064c();
        *(undefined1 *)(param_1 + 0x48) = 0;
      }
      return;
    }
    FUN_108c420f0();
    *(undefined1 *)(param_1 + 0x48) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000108c59048();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (unaff_x20 + 0x18,unaff_x19 + 0x18);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x40);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x38) = *(undefined8 *)(unaff_x19 + 0x38);
    *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
    return;
  }
  return;
}



/* Entry: 108c54bb4; end: 108c54bcf;  */

void FUN_108c54bb4(long param_1)

{
  FUN_108c420f0();
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 108c54bd0; end: 108c54c03;  */

undefined1 * FUN_108c54bd0(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x48] = 0;
  FUN_108c54c04();
  return param_1;
}



/* Entry: 108c54c04; end: 108c54c17;  */

void FUN_108c54c04(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_108c420f0();
    *(undefined1 *)(param_1 + 0x48) = 1;
    return;
  }
  return;
}



/* Entry: 108c54c18; end: 108c54c37;  */

void FUN_108c54c18(void)

{
  func_0x000108c58e0c();
  FUN_108c54c38();
  return;
}



/* Entry: 108c54c38; end: 108c54c5b;  */

void FUN_108c54c38(undefined8 *param_1)

{
  FUN_108c54c5c();
  *param_1 = &PTR_FUN_110ab92f0;
  return;
}



/* Entry: 108c54c5c; end: 108c54c67;  */

void FUN_108c54c5c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110ab9338;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 108c54c68; end: 108c54cd3;  */

void FUN_108c54c68(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x000108c5945c();
  FUN_108c40300();
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



/* Entry: 108c54cd4; end: 108c54d43;  */

void FUN_108c54cd4(void)

{
  func_0x000108c58ca8();
  func_0x000108c594d8();
  func_0x000108c59cc0(FUN_108c57c9c);
  FUN_108c54fd0();
  func_0x000108c5951c();
  func_0x000108c58bd4();
  func_0x000108c58c48();
  func_0x000108c58c20();
  return;
}



/* Entry: 108c54d44; end: 108c54e8b;  */

void FUN_108c54d44(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar3;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  undefined8 *unaff_x20;
  long lVar5;
  
  func_0x000108c58ef4();
  plVar2 = param_1;
  func_0x000108c58e88(FUN_108c57be4);
  func_0x000108c58bd4();
  func_0x000108c59250();
  do {
    func_0x000108c58a0c();
  } while (extraout_w10 != 0);
  func_0x000108c58d54(*unaff_x20);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 7) = 0;
    lVar5 = param_1[4];
    func_0x000108c58970();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108c58fa0();
    plVar3 = extraout_x8;
    do {
      if (*plVar3 == 0) {
        func_0x000108c58a1c();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x000108c58d84();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x000108c58a3c();
        if ((bool)in_ZR) {
          func_0x000108c58a2c();
          func_0x000108c58960();
          func_0x000108c58944();
          *(long **)(lVar5 + 0x90) = plVar2;
        }
        func_0x000108c58a6c();
        func_0x000108c58998();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_108c51150();
  FUN_108c54e8c(param_1[6] + 8,unaff_x20);
  func_0x000108c58ed4();
  func_0x000108c58db8();
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c54e8c; end: 108c54eab;  */

void FUN_108c54e8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_108c54eac(param_1,&uStack_18);
  return;
}



/* Entry: 108c54eac; end: 108c54f6f;  */

void FUN_108c54eac(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  func_0x000108c597d0();
  func_0x000108c597c0();
  FUN_108c40acc();
  FUN_108c40af4(alStack_30,auStack_40);
  func_0x000108c59adc();
  func_0x000108c592a8();
  lVar1 = alStack_30[0];
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x50);
  FUN_108c54f70();
  plVar2 = *(long **)(alStack_30[0] + 0x98);
  *(undefined8 *)(alStack_30[0] + 0x98) = 0;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x50);
  if (plVar2 == (long *)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(alStack_30[0] + 0x20);
  }
  else {
    func_0x000108c59234(*(undefined8 *)(*plVar2 + 0x10));
    func_0x000108c58f04();
  }
  func_0x000108c59248();
  return;
}



/* Entry: 108c54f70; end: 108c54f7f;  */

long FUN_108c54f70(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*(char *)(lVar1 + 0x18) == '\x01') {
    FUN_108c527f0();
  }
  else {
    FUN_108c54fb4(lVar1,*param_1);
  }
  return lVar1;
}



/* Entry: 108c54f80; end: 108c54fb3;  */

long FUN_108c54f80(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_108c527f0();
  }
  else {
    FUN_108c54fb4();
  }
  return param_1;
}



/* Entry: 108c54fb4; end: 108c54fcf;  */

void FUN_108c54fb4(long param_1)

{
  FUN_108c41f1c();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 108c54fd0; end: 108c54fef;  */

void FUN_108c54fd0(void)

{
  func_0x000108c58e0c();
  FUN_108c54ff0();
  return;
}



/* Entry: 108c54ff0; end: 108c55013;  */

void FUN_108c54ff0(undefined8 *param_1)

{
  FUN_108c55014();
  *param_1 = &PTR_FUN_110ab93a8;
  return;
}



/* Entry: 108c55014; end: 108c5501f;  */

void FUN_108c55014(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110ab93f0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 108c55020; end: 108c5506f;  */

void FUN_108c55020(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x000108c5945c();
  FUN_108c40998();
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



/* Entry: 108c55070; end: 108c550f7;  */

void FUN_108c55070(void)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [40];
  
  func_0x000108c59800();
  func_0x0001052b2590();
  func_0x000108c59d10();
  func_0x0001052b2514();
  func_0x000107c3a5c0();
  func_0x000108c592f4();
  if (extraout_x8 != 0) {
    do {
      func_0x000108c58a0c();
    } while (extraout_w10 != 0);
  }
  func_0x000108c597a0();
  FUN_108c56230();
  func_0x000108c59444(auStack_60);
  func_0x000108c55ee0();
  FUN_108c56260(auStack_90);
  func_0x000108c59698();
  func_0x0001052b282c(auStack_58);
  return;
}



/* Entry: 108c550f8; end: 108c55177;  */

void FUN_108c550f8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000108c58ca8();
  func_0x000108c59934();
  *param_1 = FUN_108c569a0;
  param_1[1] = FUN_108c56ab0;
  FUN_108c55178(param_1 + 4);
  FUN_108c558ec(param_1 + 2);
  func_0x000108c59a8c();
  param_1[0x16] = unaff_x20;
  *(undefined1 *)(param_1 + 0x18) = 0;
  func_0x000108c58cb8();
  func_0x000108c58c20();
  return;
}



/* Entry: 108c55178; end: 108c5525b;  */

undefined8 * FUN_108c55178(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_2[6] = 0;
  param_2[7] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (*(char *)(param_2 + 0x10) == '\x01') {
    puVar1 = (undefined8 *)param_2[0xf];
    if (puVar1 == (undefined8 *)0x0) {
      param_1[0xf] = 0;
    }
    else if (puVar1 == param_2 + 0xc) {
      param_1[0xf] = param_1 + 0xc;
      (**(code **)(*(long *)param_2[0xf] + 0x18))();
    }
    else {
      param_1[0xf] = puVar1;
      param_2[0xf] = 0;
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  param_1[0x11] = param_2[0x11];
  return param_1;
}



/* Entry: 108c5525c; end: 108c5529b;  */

void FUN_108c5525c(long *param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    do {
      func_0x000108c58a0c();
    } while (extraout_w10 != 0);
  }
  *param_1 = param_2;
  func_0x000108c58e60();
  return;
}



/* Entry: 108c5529c; end: 108c552eb;  */

void FUN_108c5529c(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long unaff_x20;
  long *plVar5;
  uint uStack_38;
  
  func_0x000108c597b0();
  do {
    func_0x000108c58914();
    if ((int)param_1 != 0) {
      param_1 = (long *)(unaff_x20 + 0x98);
      FUN_108c559b4();
      func_0x000108c59d28();
      func_0x0001052b2b44();
      func_0x000108c5892c();
      break;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  func_0x000108c59130();
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5,1,param_1);
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
  *param_1 = param_2;
  return;
}



/* Entry: 108c552ec; end: 108c558b3;  */

void FUN_108c552ec(void)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long *plVar7;
  long *extraout_x8_06;
  long *extraout_x8_07;
  long extraout_x8_08;
  long extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  int extraout_w10_07;
  uint extraout_w10_08;
  uint extraout_w10_09;
  int extraout_w10_10;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar8;
  uint extraout_w11_01;
  uint extraout_w11_02;
  uint extraout_w11_03;
  uint extraout_w11_04;
  undefined8 unaff_x20;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  func_0x000108c59054();
  puVar4 = (undefined8 *)0x198;
  __Znwm();
  *puVar4 = FUN_108c56414;
  puVar4[1] = FUN_108c56944;
  puVar4[0x31] = unaff_x20;
  plVar5 = puVar4 + 2;
  FUN_108c558ec();
  func_0x000108c59a8c();
  FUN_108c559d8(puVar4 + 0x2e);
  puVar4[4] = puVar4[0x2e];
  do {
    func_0x000108c58a0c();
  } while (extraout_w10 != 0);
  func_0x000108c58d54(puVar4[4]);
  func_0x000108c59c4c();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar4 + 0x32) = 0;
    lVar9 = puVar4[4];
    func_0x000108c58b08();
    if (*plVar5 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108c58fa0();
    plVar7 = extraout_x8;
    do {
      if (*plVar7 == 0) {
        func_0x000108c58a1c();
        plVar7 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar8 = extraout_w11_00;
      }
      else {
        func_0x000108c58d84();
        plVar7 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar8 = extraout_w11;
      }
      if ((uVar8 & 1) != 0) goto LAB_108c55604;
    } while ((uVar1 >> 1 & 1) == 0);
  }
  puVar10 = puVar4 + 4;
  FUN_108c558b4(puVar10);
  plVar5 = puVar4 + 9;
  func_0x000104be0ccc(plVar5,puVar10);
  puVar10 = (undefined8 *)puVar4[0x31];
  func_0x000108c58d90();
  func_0x000108c58e70();
  in_ZR = *(char *)(puVar4 + 0xc) == '\x01';
  if ((bool)in_ZR) {
    puVar4[0x28] = *puVar10;
    lVar9 = puVar10[1];
    puVar4[0x29] = lVar9;
    if (lVar9 != 0) {
      do {
        func_0x000108c589fc();
      } while (extraout_w10_02 != 0);
    }
    func_0x000108c598e4();
    func_0x000108c4cad0(puVar4 + 0x28);
    func_0x000108c599bc();
  }
  else {
    puVar4[0x2a] = *puVar10;
    lVar9 = puVar10[1];
    puVar4[0x2b] = lVar9;
    uVar3 = 0;
    if (lVar9 != 0) {
      do {
        func_0x000108c589fc();
      } while (extraout_w10_03 != 0);
      uVar3 = *(undefined1 *)(puVar4 + 0xc);
    }
    func_0x000108c594c8(uVar3);
    func_0x000108c59928();
    func_0x000108c5991c();
    func_0x000108c59c6c(puVar4[0x30]);
    do {
      func_0x000108c58a0c();
    } while (extraout_w10_04 != 0);
    func_0x000108c58d54(puVar4[0x2e]);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar4 + 0x32) = 1;
      lVar9 = puVar4[0x2e];
      func_0x000108c58b08();
      if (*plVar5 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108c58fa0();
      plVar7 = extraout_x8_02;
      do {
        if (*plVar7 == 0) {
          func_0x000108c58a1c();
          plVar7 = extraout_x8_04;
          uVar1 = extraout_w10_06;
          uVar8 = extraout_w11_02;
        }
        else {
          func_0x000108c58d84();
          plVar7 = extraout_x8_03;
          uVar1 = extraout_w10_05;
          uVar8 = extraout_w11_01;
        }
        if ((uVar8 & 1) != 0) goto LAB_108c55604;
      } while ((uVar1 >> 1 & 1) == 0);
    }
    func_0x000108c58d54(puVar4[0x2e]);
    lVar9 = puVar4[0x2e];
    if ((extraout_w8_01 >> 5 & 1) != 0) {
      func_0x000108c598fc();
      __ZSt17rethrow_exceptionSt13exception_ptr(puVar4 + 0x2f);
      goto LAB_108c5572c;
    }
    func_0x000108c59998();
    uVar3 = *(undefined1 *)(lVar9 + 0xbc);
    puVar10 = puVar4 + 8;
    *(undefined4 *)puVar10 = *(undefined4 *)(lVar9 + 0xb8);
    *(undefined1 *)((long)puVar4 + 0x44) = uVar3;
    func_0x000108c58e70();
    func_0x000108c59374();
    if ((*(char *)((long)puVar4 + 0x44) == '\x01') &&
       (uVar3 = *(char *)(puVar4 + 7) == '\x01', (bool)uVar3)) {
      FUN_108c55cbc(puVar4 + 0x2f);
      func_0x000108c59c6c(puVar4[0x2f]);
      do {
        func_0x000108c58a0c();
      } while (extraout_w10_07 != 0);
      func_0x000108c58d54(puVar4[0x2e]);
      if ((extraout_w8_02 >> 1 & 1) == 0) {
        *(undefined1 *)(puVar4 + 0x32) = 2;
        puVar10 = (undefined8 *)puVar4[0x2e];
        func_0x000108c58b08();
        lVar9 = *plVar5;
        if (lVar9 == 0) {
          func_0x000107c3a5c0();
          lVar9 = *plVar5;
        }
        func_0x000108c58fa0();
        plVar7 = extraout_x8_05;
        do {
          if (*plVar7 == 0) {
            func_0x000108c58a1c();
            plVar7 = extraout_x8_07;
            uVar1 = extraout_w10_09;
            uVar8 = extraout_w11_04;
          }
          else {
            func_0x000108c58d84();
            plVar7 = extraout_x8_06;
            uVar1 = extraout_w10_08;
            uVar8 = extraout_w11_03;
          }
          if ((uVar8 & 1) != 0) {
            func_0x000108c58a80();
            if ((bool)uVar3) {
              func_0x000108c58a2c();
              func_0x000108c58960();
              func_0x000108c588f8();
              puVar10[0x12] = plVar5;
            }
            func_0x000108c58a90();
            *(long *)(extraout_x8_08 + 0x20) = lVar9;
            goto LAB_108c55624;
          }
        } while ((uVar1 >> 1 & 1) == 0);
      }
      func_0x000107c28834(puVar4 + 0x2e);
      lVar9 = puVar4[0x31];
      func_0x000108c58e70();
      func_0x000108c5936c();
      if (*(char *)(lVar9 + 0x80) == '\x01') {
        if ((*(byte *)(puVar4 + 7) & 1) == 0) {
          func_0x000104bdc2c8();
LAB_108c5572c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x108c55730);
          (*pcVar2)();
        }
        if (*(long *)(puVar4[0x31] + 0x78) == 0) {
          func_0x000104bfeb48();
          goto LAB_108c5572c;
        }
        func_0x000108c59a98();
        func_0x000108c59c58();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar4 + 0xd);
        func_0x000108c5917c();
        func_0x000107c278b8(puVar4 + 0x10);
        func_0x000108c59358();
        func_0x000108c594a0();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4 + 0xd);
        func_0x000108c58d60();
      }
      func_0x000108c59c84();
      if (extraout_x9 != 0) {
        do {
          func_0x000108c589fc();
        } while (extraout_w10_10 != 0);
      }
      func_0x000108c596e0(puVar4 + 0x2c);
      func_0x000108c59498();
      func_0x000108c59cec();
      do {
        puVar4[0x2e] = 0;
        puVar6 = puVar10 + 2;
        func_0x000108c58aa0(puVar6,puVar4 + 0x2e);
        if ((int)puVar6 != 0) {
          FUN_108c559b4(puVar10 + 0x13);
          func_0x000108c59c04();
          *(undefined1 *)(puVar10 + 0x17) = 1;
          func_0x000108c58ae4();
          break;
        }
      } while ((*(byte *)(puVar4 + 0x2e) >> 1 & 1) == 0);
      func_0x000108c58edc();
    }
    else {
      func_0x000108c59638(*(undefined4 *)puVar10);
      puVar10 = (undefined8 *)puVar4[0x31];
      __ZNSt3__16chrono12steady_clock3nowEv();
      uVar11 = *puVar10;
      func_0x000108c596e8(puVar4 + 0x13);
      func_0x000108c59630(puVar4 + 0x16);
      func_0x000108c58e20(uVar11,puVar4 + 0x13,puVar4 + 0x16);
      func_0x000108c596f8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4 + 0x13);
      func_0x000108c58fac(puVar4 + 0x19);
      func_0x000108c59438();
      func_0x000107c278b8(puVar4 + 0x1c);
      func_0x000108c59584();
      func_0x000108c5913c();
      func_0x000108c59010();
      func_0x000108c592dc();
      func_0x000108c59174();
      func_0x000108c59524();
      func_0x000108c58d60();
    }
    func_0x000108c591d0();
  }
  func_0x000108c59408();
  func_0x000108c58ca0();
  func_0x000108c58cf4();
  return;
LAB_108c55604:
  func_0x000108c58a3c();
  if ((bool)in_ZR) {
    func_0x000108c58a2c();
    func_0x000108c58960();
    func_0x000108c58944();
    *(long **)(lVar9 + 0x90) = plVar5;
  }
  func_0x000108c58a6c();
LAB_108c55624:
  func_0x000108c58998();
  return;
}



/* Entry: 108c558b4; end: 108c558eb;  */

long FUN_108c558b4(void)

{
  code *pcVar1;
  long extraout_x8;
  uint extraout_w9;
  
  func_0x000108c58bec();
  if ((extraout_w9 >> 5 & 1) == 0) {
    return extraout_x8 + 0x98;
  }
  func_0x000108c58c7c();
  func_0x000108c59290();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108c558e4);
  (*pcVar1)();
}



/* Entry: 108c558ec; end: 108c55913;  */

void FUN_108c558ec(void)

{
  func_0x000108c59d80();
  FUN_108c55914();
  func_0x000108c58bc0();
  return;
}



/* Entry: 108c55914; end: 108c5594b;  */

void FUN_108c55914(void)

{
  __Znwm(0xc0);
  func_0x000108c59450();
  FUN_108c5594c();
  func_0x000108c58bb0();
  func_0x000108c58e60();
  return;
}



/* Entry: 108c5594c; end: 108c5596f;  */

void FUN_108c5594c(long param_1)

{
  func_0x000107c31510();
  func_0x000108c58f6c(&UNK_110ababd8);
  *(undefined1 *)(param_1 + 0xb8) = 0;
  return;
}



/* Entry: 108c55970; end: 108c55973;  */

undefined8 * FUN_108c55970(undefined8 *param_1)

{
  func_0x000108c59884(&UNK_110ababd8);
  func_0x0001052b27fc();
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c55974; end: 108c55987;  */

void FUN_108c55974(void)

{
  FUN_108c55988();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c55988; end: 108c559b3;  */

undefined8 * FUN_108c55988(undefined8 *param_1)

{
  func_0x000108c59884(&UNK_110ababd8);
  func_0x0001052b27fc();
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c559b4; end: 108c559d7;  */

void FUN_108c559b4(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c279c4();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 108c559d8; end: 108c55a1b;  */

void FUN_108c559d8(undefined8 param_1)

{
  undefined8 auStack_38 [3];
  
  FUN_108c558ec(auStack_38);
  FUN_108c5525c(param_1,auStack_38[0]);
  func_0x000108c55d00(auStack_38);
  func_0x000107c27fb8(auStack_38);
  return;
}



/* Entry: 108c55a1c; end: 108c55cbb;  */

void FUN_108c55a1c(void)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  uint extraout_w8;
  uint extraout_w8_00;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar8;
  undefined8 *unaff_x20;
  long lVar9;
  long *unaff_x21;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  func_0x000108c59054();
  puVar3 = (undefined8 *)0x78;
  __Znwm();
  *puVar3 = FUN_108c56280;
  puVar3[1] = FUN_108c563e8;
  puVar4 = puVar3;
  func_0x000108c59934();
  puVar5 = puVar4;
  func_0x000108c59450();
  func_0x000107c31510();
  *puVar5 = &PTR_FUN_110abac28;
  *(undefined1 *)(puVar5 + 0x13) = 0;
  *(undefined1 *)(puVar5 + 0x18) = 0;
  lStack_90 = 0;
  uStack_60 = 0;
  func_0x000107c27f98(&uStack_60);
  func_0x000107c27f9c(&lStack_90);
  puVar3[2] = puVar4;
  puVar3[3] = puVar4;
  lStack_90 = 0;
  uStack_88 = 0;
  func_0x000107c27fec(&lStack_90);
  lStack_90 = puVar3[2];
  if (lStack_90 != 0) {
    do {
      func_0x000108c58a0c();
    } while (extraout_w10 != 0);
  }
  *unaff_x21 = lStack_90;
  lStack_90 = 0;
  func_0x000107c27f9c(&lStack_90);
  plVar6 = (long *)*unaff_x20;
  func_0x000108c59ba4(puVar3 + 0xd);
  puVar3[0xc] = puVar3[0xd];
  do {
    func_0x000108c58a0c();
  } while (extraout_w10_00 != 0);
  func_0x000108c58d54(puVar3[0xc]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar3 + 0xe) = 0;
    func_0x000108c58970();
    if (*plVar6 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108c58f88();
    plVar6 = extraout_x8;
    do {
      if (*plVar6 == 0) {
        func_0x000108c58a1c();
        plVar6 = extraout_x8_01;
        uVar1 = extraout_w10_02;
        uVar8 = extraout_w11_00;
      }
      else {
        func_0x000108c58d84();
        plVar6 = extraout_x8_00;
        uVar1 = extraout_w10_01;
        uVar8 = extraout_w11;
      }
      if ((uVar8 & 1) != 0) {
        func_0x000108c589d4();
        if ((bool)in_ZR) {
          func_0x000108c58a2c();
          func_0x000108c58960();
          func_0x000108c588d8();
        }
        func_0x000108c588ac();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000108c58d54(puVar3[0xc]);
  lVar9 = puVar3[0xc];
  if ((extraout_w8_00 >> 5 & 1) != 0) {
    __ZNSt13exception_ptrC1ERKS_(&lStack_90,lVar9 + 0x18);
    __ZSt17rethrow_exceptionSt13exception_ptr(&lStack_90);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x108c55c70);
    (*pcVar2)();
  }
  func_0x000104be0ccc(puVar3 + 4,lVar9 + 0x98);
  *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(lVar9 + 0xb8);
  func_0x000107c27f9c(puVar3 + 0xc);
  func_0x000108c59aa4();
  iVar7 = *(int *)(puVar3 + 8);
  if (iVar7 == 0) {
    if ((*(byte *)(puVar3 + 7) & 1) != 0) {
      uStack_50 = puVar3[6];
      uStack_58 = puVar3[5];
      uStack_60 = puVar3[4];
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_a8 = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[9] = 0;
      uStack_48 = 1;
      func_0x000108c55e2c(&lStack_90,&uStack_60,0);
      func_0x000107c279c4(&uStack_60);
      func_0x000108c5903c();
      FUN_108c55d30();
      func_0x000107c279c4(&lStack_90);
      func_0x000107c27914(puVar3 + 9);
      func_0x000107c27914(&uStack_a8);
      goto LAB_108c55c34;
    }
    iVar7 = 2;
  }
  FUN_108c55da4(&lStack_90,iVar7);
  func_0x000108c5903c();
  FUN_108c55d30();
  func_0x000107c279c4(&lStack_90);
LAB_108c55c34:
  func_0x000108c591d0();
  func_0x000108c58ca0();
  func_0x000108c58cf4();
  return;
}



/* Entry: 108c55cbc; end: 108c55d2f;  */

void FUN_108c55cbc(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c27f94(auStack_38);
  func_0x000107c287c4(param_1,auStack_38);
  func_0x000107c287c8(auStack_38);
  func_0x000107c27fb8(auStack_38);
  return;
}



/* Entry: 108c55d30; end: 108c55da3;  */

void FUN_108c55d30(long *param_1,long param_2)

{
  ulong *puVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long unaff_x20;
  long *plVar6;
  long unaff_x21;
  uint uStack_38;
  
  func_0x000108c597b0();
  do {
    func_0x000108c58914();
    if ((int)param_1 != 0) {
      if (*(char *)(unaff_x20 + 0xc0) == '\x01') {
        param_1 = (long *)(unaff_x20 + 0x98);
        func_0x000107c279c4();
        *(undefined1 *)(unaff_x20 + 0xc0) = 0;
      }
      func_0x000108c59d28();
      func_0x000107c27b7c();
      uVar2 = *(undefined4 *)(unaff_x21 + 0x20);
      *(undefined1 *)(unaff_x20 + 0xbc) = *(undefined1 *)(unaff_x21 + 0x24);
      *(undefined4 *)(unaff_x20 + 0xb8) = uVar2;
      *(undefined1 *)(unaff_x20 + 0xc0) = 1;
      func_0x000108c5892c();
      break;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  func_0x000108c59130();
  if (param_2 != 0) {
    plVar6 = (long *)(param_2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = (long *)*param_1;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar5 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar5 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar5 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,param_1);
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
  *param_1 = param_2;
  return;
}



/* Entry: 108c55da4; end: 108c55dd7;  */

void FUN_108c55da4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [24];
  undefined1 uStack_18;
  
  auStack_30[0] = 0;
  uStack_18 = 0;
  func_0x000108c55e2c(param_1,auStack_30,param_2);
  func_0x000107c279c4(auStack_30);
  return;
}



/* Entry: 108c55dd8; end: 108c55ddb;  */

undefined8 * FUN_108c55dd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abac28;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c279c4(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c55ddc; end: 108c55def;  */

void FUN_108c55ddc(void)

{
  FUN_108c55df0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c55df0; end: 108c55e63;  */

undefined8 * FUN_108c55df0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abac28;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c279c4(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c55e64; end: 108c55eaf;  */

undefined8 FUN_108c55e64(undefined8 param_1)

{
  uint uStack_38;
  
  func_0x000108c58f54();
  do {
    func_0x000108c58914();
    if ((int)param_1 != 0) {
      func_0x000108c59860();
      FUN_108c55eb0();
      func_0x000108c5892c();
      return param_1;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return param_1;
}



/* Entry: 108c55eb0; end: 108c55f0f;  */

undefined1 * FUN_108c55eb0(undefined1 *param_1)

{
  FUN_108c559b4();
  *param_1 = 0;
  param_1[0x18] = 0;
  param_1[0x20] = 1;
  return param_1;
}



/* Entry: 108c55f10; end: 108c55f7f;  */

void FUN_108c55f10(void)

{
  func_0x000108c58ca8();
  func_0x000108c594d8();
  func_0x000108c59cc0(FUN_108c56ba0);
  FUN_108c56210();
  func_0x000108c5951c();
  func_0x000108c58bd4();
  func_0x000108c58c48();
  func_0x000108c58c20();
  return;
}



/* Entry: 108c55f80; end: 108c560c7;  */

void FUN_108c55f80(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar3;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  undefined8 *unaff_x20;
  long lVar5;
  
  func_0x000108c58ef4();
  plVar2 = param_1;
  func_0x000108c58e88(FUN_108c56ae8);
  func_0x000108c58bd4();
  func_0x000108c59250();
  do {
    func_0x000108c58a0c();
  } while (extraout_w10 != 0);
  func_0x000108c58d54(*unaff_x20);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 7) = 0;
    lVar5 = param_1[4];
    func_0x000108c58970();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108c58fa0();
    plVar3 = extraout_x8;
    do {
      if (*plVar3 == 0) {
        func_0x000108c58a1c();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x000108c58d84();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x000108c58a3c();
        if ((bool)in_ZR) {
          func_0x000108c58a2c();
          func_0x000108c58960();
          func_0x000108c58944();
          *(long **)(lVar5 + 0x90) = plVar2;
        }
        func_0x000108c58a6c();
        func_0x000108c58998();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_108c558b4();
  FUN_108c560c8(param_1[6] + 8,unaff_x20);
  func_0x000108c58ed4();
  func_0x000108c58db8();
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c560c8; end: 108c560e7;  */

void FUN_108c560c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_108c560e8(param_1,&uStack_18);
  return;
}



/* Entry: 108c560e8; end: 108c561af;  */

void FUN_108c560e8(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  func_0x000108c597d0();
  func_0x000108c597c0();
  func_0x0001052b21e8();
  func_0x0001052b223c(alStack_30,auStack_40);
  func_0x000108c59ad4();
  func_0x0001052b22bc(auStack_50);
  lVar1 = alStack_30[0];
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x58);
  FUN_108c561b0();
  plVar2 = *(long **)(alStack_30[0] + 0xa0);
  *(undefined8 *)(alStack_30[0] + 0xa0) = 0;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x58);
  if (plVar2 == (long *)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(alStack_30[0] + 0x28);
  }
  else {
    func_0x000108c59234(*(undefined8 *)(*plVar2 + 0x10));
    func_0x000108c58f04();
  }
  func_0x000108c59594();
  return;
}



/* Entry: 108c561b0; end: 108c561bf;  */

long FUN_108c561b0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*(char *)(lVar1 + 0x20) == '\x01') {
    func_0x00010866e758();
  }
  else {
    FUN_108c561f4(lVar1,*param_1);
  }
  return lVar1;
}



/* Entry: 108c561c0; end: 108c561f3;  */

long FUN_108c561c0(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x00010866e758();
  }
  else {
    FUN_108c561f4();
  }
  return param_1;
}



/* Entry: 108c561f4; end: 108c5620f;  */

void FUN_108c561f4(long param_1)

{
  func_0x000104be0ccc();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 108c56210; end: 108c5622f;  */

void FUN_108c56210(void)

{
  func_0x000108c58e0c();
  FUN_108c56230();
  return;
}



/* Entry: 108c56230; end: 108c56253;  */

void FUN_108c56230(undefined8 *param_1)

{
  FUN_108c56254();
  *param_1 = &PTR_DAT_110875068;
  return;
}



/* Entry: 108c56254; end: 108c5625f;  */

void FUN_108c56254(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_1108750b0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 108c56260; end: 108c5627f;  */

void FUN_108c56260(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x000108c5945c();
  func_0x0001052b282c();
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



/* Entry: 108c56280; end: 108c563e7;  */

void FUN_108c56280(long param_1)

{
  code *pcVar1;
  int iVar2;
  uint extraout_w8;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [40];
  
  plVar4 = (long *)(param_1 + 0x60);
  func_0x000108c58d54(*plVar4);
  lVar5 = *plVar4;
  if ((extraout_w8 >> 5 & 1) != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_68,lVar5 + 0x18);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_68);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x108c563ac);
    (*pcVar1)();
  }
  puVar3 = (undefined8 *)(param_1 + 0x20);
  func_0x000104be0ccc(puVar3,lVar5 + 0x98);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar5 + 0xb8);
  func_0x000107c27f9c(plVar4);
  func_0x000107c27f9c(param_1 + 0x68);
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 == 0) {
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      uStack_90 = *(undefined8 *)(param_1 + 0x30);
      uStack_98 = *(undefined8 *)(param_1 + 0x28);
      uStack_a0 = *(undefined8 *)(param_1 + 0x20);
      *puVar3 = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_80 = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      uStack_88 = 1;
      func_0x000108c55e2c(auStack_68,&uStack_a0,0);
      func_0x000107c279c4(&uStack_a0);
      func_0x000108c599b0();
      func_0x000107c279c4(auStack_68);
      func_0x000107c27914((undefined8 *)(param_1 + 0x48));
      func_0x000107c27914(&uStack_80);
      goto LAB_108c56378;
    }
    iVar2 = 2;
  }
  FUN_108c55da4(auStack_68,iVar2);
  func_0x000108c599b0();
  func_0x000107c279c4(auStack_68);
LAB_108c56378:
  func_0x000107c279c4(puVar3);
  func_0x000107c27fb8(param_1 + 0x10);
  func_0x000108c58cf4();
  return;
}



/* Entry: 108c563e8; end: 108c56413;  */

void FUN_108c563e8(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x60);
  func_0x000108c59aa4();
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c56414; end: 108c56943;  */

void FUN_108c56414(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  int extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long extraout_x8_05;
  long extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long *unaff_x21;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  if ((char)param_1[0x32] == '\x02') {
LAB_108c564f4:
    func_0x000107c28834(param_1 + 0x2e);
    lVar7 = param_1[0x31];
    func_0x000108c58e70();
    func_0x000108c5936c();
    if (*(char *)(lVar7 + 0x80) == '\x01') {
      if ((*(byte *)(param_1 + 7) & 1) == 0) {
        func_0x000104bdc2c8();
LAB_108c567d0:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x108c567d4);
        (*pcVar2)();
      }
      if (*(long *)(param_1[0x31] + 0x78) == 0) {
        func_0x000104bfeb48();
        goto LAB_108c567d0;
      }
      func_0x000108c59a98();
      func_0x000108c59c58();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 0xd);
      func_0x000108c5917c();
      func_0x000107c278b8(param_1 + 0x10);
      func_0x000108c59358();
      func_0x000108c594a0();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xd);
      func_0x000108c58d60();
    }
    func_0x000108c59c84();
    if (extraout_x9 != 0) {
      do {
        func_0x000108c589fc();
      } while (extraout_w10_02 != 0);
    }
    func_0x000108c596e0(param_1 + 0x2c);
    func_0x000108c59498();
    func_0x000108c59cec();
    do {
      param_1[0x2e] = 0;
      plVar5 = unaff_x21 + 2;
      func_0x000108c58aa0(plVar5,param_1 + 0x2e);
      if ((int)plVar5 != 0) {
        FUN_108c559b4(unaff_x21 + 0x13);
        func_0x000108c59c04();
        *(undefined1 *)(unaff_x21 + 0x17) = 1;
        func_0x000108c58ae4();
        break;
      }
    } while ((*(byte *)(param_1 + 0x2e) >> 1 & 1) == 0);
    func_0x000108c58edc();
  }
  else {
    plVar5 = param_1;
    func_0x000108c59c4c();
    if (extraout_w8 != 1) {
      plVar8 = param_1 + 4;
      FUN_108c558b4(plVar8);
      plVar5 = param_1 + 9;
      func_0x000104be0ccc(plVar5,plVar8);
      plVar8 = (long *)param_1[0x31];
      func_0x000108c58d90();
      func_0x000108c58e70();
      if ((char)param_1[0xc] == '\x01') {
        param_1[0x28] = *plVar8;
        lVar7 = plVar8[1];
        param_1[0x29] = lVar7;
        if (lVar7 != 0) {
          do {
            func_0x000108c589fc();
          } while (extraout_w10_03 != 0);
        }
        func_0x000108c598e4();
        func_0x000108c4cad0(param_1 + 0x28);
        func_0x000108c599bc();
        goto LAB_108c566b8;
      }
      param_1[0x2a] = *plVar8;
      lVar7 = plVar8[1];
      param_1[0x2b] = lVar7;
      uVar3 = 0;
      uVar4 = 0;
      if (lVar7 != 0) {
        do {
          func_0x000108c589fc();
        } while (extraout_w10_04 != 0);
        uVar4 = (undefined1)param_1[0xc];
      }
      func_0x000108c594c8(uVar4);
      func_0x000108c59928();
      func_0x000108c5991c();
      func_0x000108c59c6c(param_1[0x30]);
      do {
        func_0x000108c58a0c();
      } while (extraout_w10_05 != 0);
      func_0x000108c58d54(param_1[0x2e]);
      if ((extraout_w8_02 >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x32) = 1;
        lVar7 = param_1[0x2e];
        func_0x000108c58b08();
        if (*plVar5 == 0) {
          func_0x000107c3a5c0();
        }
        func_0x000108c58fa0();
        plVar8 = extraout_x8_02;
        do {
          if (*plVar8 == 0) {
            func_0x000108c58a1c();
            plVar8 = extraout_x8_04;
            uVar1 = extraout_w10_07;
            uVar6 = extraout_w11_02;
          }
          else {
            func_0x000108c58d84();
            plVar8 = extraout_x8_03;
            uVar1 = extraout_w10_06;
            uVar6 = extraout_w11_01;
          }
          if ((uVar6 & 1) != 0) {
            func_0x000108c58a3c();
            if ((bool)uVar3) {
              func_0x000108c58a2c();
              func_0x000108c58960();
              func_0x000108c58944();
              *(long **)(lVar7 + 0x90) = plVar5;
            }
            func_0x000108c58a6c();
            goto LAB_108c567ac;
          }
        } while ((uVar1 >> 1 & 1) == 0);
      }
    }
    func_0x000108c58d54(param_1[0x2e]);
    lVar7 = param_1[0x2e];
    if ((extraout_w8_00 >> 5 & 1) != 0) {
      func_0x000108c598fc();
      __ZSt17rethrow_exceptionSt13exception_ptr(param_1 + 0x2f);
      goto LAB_108c567d0;
    }
    func_0x000108c59998();
    uVar4 = *(undefined1 *)(lVar7 + 0xbc);
    unaff_x21 = param_1 + 8;
    *(undefined4 *)unaff_x21 = *(undefined4 *)(lVar7 + 0xb8);
    *(undefined1 *)((long)param_1 + 0x44) = uVar4;
    func_0x000108c58e70();
    func_0x000108c59374();
    uVar4 = *(char *)((long)param_1 + 0x44) == '\x01';
    if (((bool)uVar4) && ((*(byte *)(param_1 + 7) & 1) != 0)) {
      FUN_108c55cbc(param_1 + 0x2f);
      func_0x000108c59c6c(param_1[0x2f]);
      do {
        func_0x000108c58a0c();
      } while (extraout_w10 != 0);
      func_0x000108c58d54(param_1[0x2e]);
      if ((extraout_w8_01 >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x32) = 2;
        unaff_x21 = (long *)param_1[0x2e];
        func_0x000108c58b08();
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          func_0x000107c3a5c0();
          lVar7 = *plVar5;
        }
        func_0x000108c58fa0();
        plVar8 = extraout_x8;
        do {
          if (*plVar8 == 0) {
            func_0x000108c58a1c();
            plVar8 = extraout_x8_01;
            uVar1 = extraout_w10_01;
            uVar6 = extraout_w11_00;
          }
          else {
            func_0x000108c58d84();
            plVar8 = extraout_x8_00;
            uVar1 = extraout_w10_00;
            uVar6 = extraout_w11;
          }
          if ((uVar6 & 1) != 0) {
            func_0x000108c58a80();
            if ((bool)uVar4) {
              func_0x000108c58a2c();
              func_0x000108c58960();
              func_0x000108c588f8();
              unaff_x21[0x12] = (long)plVar5;
            }
            func_0x000108c58a90();
            *(long *)(extraout_x8_05 + 0x20) = lVar7;
LAB_108c567ac:
            func_0x000108c58998();
            return;
          }
        } while ((uVar1 >> 1 & 1) == 0);
      }
      goto LAB_108c564f4;
    }
    func_0x000108c59638((int)*unaff_x21);
    puVar10 = (undefined8 *)param_1[0x31];
    __ZNSt3__16chrono12steady_clock3nowEv();
    uVar9 = *puVar10;
    func_0x000108c596e8(param_1 + 0x13);
    func_0x000108c59630(param_1 + 0x16);
    func_0x000108c58e20(uVar9,param_1 + 0x13,param_1 + 0x16);
    func_0x000108c596f8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x13);
    func_0x000108c58fac(param_1 + 0x19);
    func_0x000108c59438();
    func_0x000107c278b8(param_1 + 0x1c);
    func_0x000108c59584();
    func_0x000108c5913c();
    func_0x000108c59010();
    func_0x000108c592dc();
    func_0x000108c59174();
    func_0x000108c59524();
    func_0x000108c58d60();
  }
  func_0x000108c591d0();
LAB_108c566b8:
  func_0x000108c59408();
  func_0x000108c58ca0();
  func_0x000108c58cf4();
  return;
}



/* Entry: 108c56944; end: 108c5699f;  */

void FUN_108c56944(long param_1)

{
  if (*(char *)(param_1 + 400) == '\0') {
    func_0x000108c58d90();
    func_0x000108c58e70();
  }
  else {
    if (*(char *)(param_1 + 400) == '\x01') {
      func_0x000107c27f9c(param_1 + 0x170);
      func_0x000108c59374();
    }
    else {
      func_0x000107c27f9c(param_1 + 0x170);
      func_0x000108c5936c();
      func_0x000108c591d0();
    }
    func_0x000108c59408();
  }
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c569a0; end: 108c56aaf;  */

void FUN_108c569a0(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long lVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_108c552ec(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0xb8);
    do {
      func_0x000108c58a0c();
    } while (extraout_w10 != 0);
    func_0x000108c58d54(*(undefined8 *)(param_1 + 0xb0));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xc0) = 1;
      func_0x000108c58970();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108c58f88();
      plVar2 = extraout_x8;
      do {
        if (*plVar2 == 0) {
          func_0x000108c58a1c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x000108c58d84();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x000108c589d4();
          if ((bool)in_ZR) {
            func_0x000108c58a2c();
            func_0x000108c58960();
            func_0x000108c588d8();
          }
          func_0x000108c588ac();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  lVar3 = param_1 + 0xb0;
  FUN_108c558b4(lVar3);
  FUN_108c5529c(param_1 + 0x10,lVar3);
  func_0x000108c59b38();
  func_0x000108c590d0();
  func_0x000108c58ca0();
  func_0x000108c59944();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c56ab0; end: 108c56ae7;  */

void FUN_108c56ab0(long param_1)

{
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    func_0x000108c59b38();
    func_0x000108c590d0();
  }
  func_0x000108c58ca0();
  func_0x000108c59944();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c56ae8; end: 108c56b7f;  */

void FUN_108c56ae8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  FUN_108c558b4(lVar1);
  FUN_108c560c8(*(long *)(param_1 + 0x30) + 8,lVar1);
  func_0x000108c58d90();
  func_0x000108c58db8();
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c56b80; end: 108c56b9f;  */

void FUN_108c56b80(void)

{
  func_0x000108c5932c();
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c56ba0; end: 108c56c93;  */

void FUN_108c56ba0(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *plVar2;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  
  func_0x000108c5934c();
  if ((extraout_x8 & 1) == 0) {
    func_0x000108c59d34();
    FUN_108c55f80();
    func_0x000108c592bc();
    do {
      func_0x000108c58a0c();
    } while (extraout_w10 != 0);
    func_0x000108c58d54(*(undefined8 *)(unaff_x19 + 0x50));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x60) = 1;
      func_0x000108c58970();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108c58f88();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x000108c58a1c();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000108c58d84();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x000108c589d4();
          if ((bool)in_ZR) {
            func_0x000108c58a2c();
            func_0x000108c58960();
            func_0x000108c588d8();
          }
          func_0x000108c588ac();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000108c59534();
  func_0x000108c58e98();
  func_0x000108c58f20();
  func_0x000108c58db8();
  func_0x000108c58ca0();
  func_0x000108c59984();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c56c94; end: 108c56cc3;  */

void FUN_108c56c94(void)

{
  undefined1 in_ZR;
  
  func_0x000108c59304();
  if ((bool)in_ZR) {
    func_0x000108c58e98();
    func_0x000108c58f20();
  }
  func_0x000108c58ca0();
  func_0x000108c59984();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c56cc4; end: 108c56f27;  */

void FUN_108c56cc4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  func_0x000108c59c34();
  puVar1 = (undefined8 *)(param_1 + 0x40);
  FUN_108c523ec();
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  func_0x000108c59640();
  func_0x000108c5998c();
  func_0x000108c59680();
  func_0x000108c59650();
  lVar6 = *(long *)(param_1 + 0x20);
  puVar2 = (undefined8 *)(lVar6 + 0x60);
  __ZNSt3__15mutex4lockEv();
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  if (*(char *)(puVar4 + 5) == '\x01') {
    if (puVar4 != puVar1) {
      *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar1 + 4);
      plVar7 = (long *)puVar1[2];
      lVar3 = puVar4[1];
      plVar8 = plVar7;
      if (lVar3 != 0) {
        puVar1 = (undefined8 *)*puVar4;
        for (; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar1 = 0;
          puVar1 = puVar1 + 1;
        }
        plVar5 = (long *)puVar4[2];
        puVar4[2] = 0;
        puVar4[3] = 0;
        for (; (plVar8 = plVar7, plVar5 != (long *)0x0 &&
               (plVar8 = (long *)0x0, plVar7 != (long *)0x0)); plVar7 = (long *)*plVar7) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (plVar5 + 2,plVar7 + 2);
          puVar2 = plVar5 + 5;
          FUN_108c527f0(puVar2,plVar7 + 5);
          plVar5 = (long *)*plVar5;
          func_0x000108c5986c();
          FUN_108c52424();
        }
        func_0x000108c5986c();
        FUN_108c41838();
      }
      for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        func_0x000108c5916c();
        *puVar2 = 0;
        puVar2[1] = 0;
        FUN_108c41ee8(puVar2 + 2,plVar8 + 2);
        puVar1 = puVar4 + 3;
        func_0x000107c278c4(puVar1,puVar2 + 2);
        puVar2[1] = puVar1;
        func_0x000108c5986c();
        FUN_108c52424();
        func_0x000108c59288();
        puVar2 = puVar1;
      }
    }
  }
  else {
    func_0x000108c5986c();
    FUN_108c41b74();
    *(undefined1 *)(puVar4 + 5) = 1;
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0x20) + 0xa8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8) = 0;
  __ZNSt3__15mutex6unlockEv(lVar6 + 0x60);
  if (plVar7 == (long *)0x0) {
    func_0x000108c598d8();
  }
  else {
    (**(code **)(*plVar7 + 0x10))(plVar7,param_1 + 0x20);
    func_0x000108c59658();
  }
  func_0x000108c5950c();
  func_0x000107c27f9c(param_1 + 0x40);
  func_0x000108c58db8();
  func_0x000108c58ca0();
  func_0x000108c58cf4();
  return;
}



/* Entry: 108c56f28; end: 108c56f4f;  */

void FUN_108c56f28(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x40);
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c56f50; end: 108c57043;  */

void FUN_108c56f50(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *plVar2;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  
  func_0x000108c5934c();
  if ((extraout_x8 & 1) == 0) {
    func_0x000108c59d34();
    FUN_108c520c8();
    func_0x000108c592bc();
    do {
      func_0x000108c58a0c();
    } while (extraout_w10 != 0);
    func_0x000108c58d54(*(undefined8 *)(unaff_x19 + 0x50));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x60) = 1;
      func_0x000108c58970();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108c58f88();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x000108c58a1c();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000108c58d84();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x000108c589d4();
          if ((bool)in_ZR) {
            func_0x000108c58a2c();
            func_0x000108c58960();
            func_0x000108c588d8();
          }
          func_0x000108c588ac();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000108c59534();
  func_0x000108c58e98();
  func_0x000108c58f20();
  func_0x000108c58db8();
  func_0x000108c58ca0();
  func_0x000108c59958();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c57044; end: 108c57073;  */

void FUN_108c57044(void)

{
  undefined1 in_ZR;
  
  func_0x000108c59304();
  if ((bool)in_ZR) {
    func_0x000108c58e98();
    func_0x000108c58f20();
  }
  func_0x000108c58ca0();
  func_0x000108c59958();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c57074; end: 108c5711f;  */

void FUN_108c57074(long param_1)

{
  long lVar1;
  long unaff_x21;
  undefined8 uStack_38;
  
  FUN_108c523ec(param_1 + 0x30);
  func_0x000108c59cec();
  do {
    uStack_38 = 0;
    lVar1 = unaff_x21 + 0x10;
    func_0x000108c58aa0(lVar1,&uStack_38);
    if ((int)lVar1 != 0) {
      FUN_108c52034(unaff_x21 + 0x98);
      func_0x000108c59bf8();
      *(undefined1 *)(unaff_x21 + 0xc0) = 1;
      func_0x000108c58ae4();
      break;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  func_0x000108c58edc();
  func_0x000108c58ddc();
  func_0x000108c58d98();
  func_0x000108c58d7c();
  func_0x000108c58ca0();
  func_0x000108c58cf4();
  return;
}



/* Entry: 108c57120; end: 108c57147;  */

void FUN_108c57120(void)

{
  func_0x000108c58f14();
  func_0x000108c58d98();
  func_0x000108c58d7c();
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c57148; end: 108c5722b;  */

void FUN_108c57148(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_78 [40];
  undefined1 auStack_50 [48];
  
  FUN_108c51bc4(param_1 + 0xe8);
  func_0x000108c59514();
  func_0x000108c59710();
  func_0x000108c5902c();
  func_0x000108c59cf8();
  if ((bool)in_ZR) {
    FUN_108c6ae84(auStack_78,param_1 + 0x20);
    FUN_108c41898(param_1 + 0x60,auStack_78);
    func_0x000108c54048(auStack_50,param_1 + 0x60,*(undefined4 *)(param_1 + 0x58));
    func_0x000108c599dc();
    func_0x000108c42160(auStack_50);
    func_0x000108c42160(param_1 + 0x60);
    puVar1 = auStack_78;
  }
  else {
    func_0x000108c594e8();
    func_0x000108c54048(auStack_50,param_1 + 0x88);
    func_0x000108c599dc();
    func_0x000108c42160(auStack_50);
    puVar1 = (undefined1 *)(param_1 + 0x88);
  }
  func_0x000108c42160(puVar1);
  func_0x000108c58ff4();
  func_0x000108c592e4();
  func_0x000108c58ca0();
  func_0x000108c58cf4();
  return;
}



/* Entry: 108c5722c; end: 108c5725b;  */

void FUN_108c5722c(long param_1)

{
  func_0x000107c27f9c(param_1 + 0xe8);
  func_0x000108c5902c();
  func_0x000108c592e4();
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c5725c; end: 108c572b3;  */

void FUN_108c5725c(long param_1)

{
  func_0x000107c28834(param_1 + 0x30);
  func_0x000108c58ddc();
  func_0x000108c58d98();
  func_0x000108c58d7c();
  func_0x000108c58db8();
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c572b4; end: 108c572db;  */

void FUN_108c572b4(void)

{
  func_0x000108c58f14();
  func_0x000108c58d98();
  func_0x000108c58d7c();
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c572dc; end: 108c57a33;  */

void FUN_108c572dc(long param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long *plVar7;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long *extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  undefined1 extraout_w9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar8;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 *unaff_x25;
  undefined8 *puVar14;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [48];
  
  if (*(char *)(param_1 + 0x278) == '\x02') {
LAB_108c575cc:
    func_0x000107c28834(param_1 + 0xa0);
    func_0x000108c59024();
    func_0x000108c58ed4();
  }
  else {
    uVar6 = *(char *)(param_1 + 0x278) == '\x01';
    if (!(bool)uVar6) {
      lVar9 = param_1 + 0x78;
      FUN_108c523ec(lVar9);
      FUN_108c41b74(param_1 + 0x50,lVar9);
      unaff_x25 = *(undefined4 **)(param_1 + 0x248);
      func_0x000108c58f3c();
      func_0x000108c58d90();
      plVar10 = (long *)(param_1 + 0x60);
      while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
        func_0x000108c59400(param_1 + 0x170);
        func_0x000108c59a70();
        func_0x000108c595ac();
      }
      *(undefined8 *)(param_1 + 0x1e8) = 0;
      *(undefined8 *)(param_1 + 0x1f0) = 0;
      *(undefined8 *)(param_1 + 0x1f8) = 0;
      func_0x000108c58dc8();
      plVar10 = (long *)(param_1 + 0x1e8);
      func_0x000107c31930();
      lVar9 = 0;
      uVar11 = *(ulong *)(*(long *)(param_1 + 0x248) + 0x28);
      uVar1 = *(ulong *)(*(long *)(param_1 + 0x248) + 0x30);
      while( true ) {
        *(long *)(param_1 + 0x250) = lVar9;
        uVar5 = uVar1 <= uVar11;
        uVar6 = uVar11 == uVar1;
        if ((bool)uVar6) break;
        func_0x000108c59a18();
        plVar7 = (long *)0x0;
        if (plVar10 == (long *)0x0) {
LAB_108c573bc:
          func_0x000108c59a64();
          if (plVar10 != (long *)0x0) {
            lVar9 = lVar9 + 1;
          }
        }
        else {
          plVar7 = plVar10 + 5;
          FUN_108c6b380();
          if ((int)plVar7 != 0) goto LAB_108c573bc;
        }
        uVar11 = uVar11 + 0x18;
        plVar10 = plVar7;
      }
      func_0x000108c59104();
      if ((bool)uVar6) {
        __ZNSt3__16chrono12steady_clock3nowEv();
        func_0x000108c59b78();
        __ZNSt3__16chrono12steady_clock3nowEv();
        func_0x000108c59400(param_1 + 0xf8);
        func_0x000108c59554();
        func_0x000107c278b8(param_1 + 0x110);
        func_0x000108c59604();
        func_0x000108c5954c();
        func_0x000108c59200();
        puVar14 = *(undefined8 **)(param_1 + 0x248);
        func_0x000108c59008();
        func_0x000108c59034();
        func_0x000108c59010();
        lVar9 = puVar14[1];
        uVar13 = *puVar14;
        *(undefined8 *)(param_1 + 0x238) = puVar14[1];
        *(undefined8 *)(param_1 + 0x230) = uVar13;
        if (lVar9 != 0) {
          do {
            func_0x000108c589fc();
          } while (extraout_w10_07 != 0);
        }
        func_0x000108c59604();
        func_0x000108c59298();
        func_0x000108c593a8();
        func_0x000108c59830();
        FUN_108c5382c(param_1 + 0x230,unaff_x25 + 4,auStack_a8,auStack_90,
                      (undefined8 *)(param_1 + 0x240));
        func_0x000108c59ccc();
        func_0x000108c58dc0();
        func_0x000108c58d60();
        func_0x000108c4cad0(param_1 + 0x230);
        func_0x000108c59cac();
        if (extraout_x8_07 != 0) {
          do {
            func_0x000108c589fc();
          } while (extraout_w10_08 != 0);
        }
        func_0x000108c59084();
        func_0x000108c4cad0(param_1 + 0x220);
        func_0x000108c599e8();
        goto LAB_108c576d8;
      }
      func_0x000108c5959c();
      func_0x000108c59ce0(*(undefined8 *)(param_1 + 0x78));
      do {
        func_0x000108c58a0c();
      } while (extraout_w10 != 0);
      func_0x000108c58d54(*(undefined8 *)(param_1 + 0xa0));
      if ((extraout_w8_00 >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x278) = 1;
        lVar9 = *(long *)(param_1 + 0xa0);
        func_0x000108c58cfc();
        lVar12 = *plVar10;
        if (lVar12 == 0) {
          func_0x000107c3a5c0();
          lVar12 = *plVar10;
        }
        func_0x000108c59848();
        plVar7 = extraout_x8;
        do {
          if (*plVar7 == 0) {
            func_0x000108c58a1c();
            plVar7 = extraout_x8_01;
            uVar3 = extraout_w10_01;
            uVar8 = extraout_w11_00;
          }
          else {
            func_0x000108c58d84();
            plVar7 = extraout_x8_00;
            uVar3 = extraout_w10_00;
            uVar8 = extraout_w11;
          }
          if ((uVar8 & 1) != 0) {
            func_0x000108c58b3c();
            if ((bool)uVar6) {
              func_0x000108c58a2c();
              uVar6 = extraout_w8;
              if ((bool)uVar5) {
                uVar6 = extraout_w9;
              }
              func_0x000108c59744();
              *(undefined1 *)plVar10 = uVar6;
              func_0x000108c589e8(0);
              *(long **)(lVar9 + 0x90) = plVar10;
            }
            func_0x000108c58b2c();
            *(long *)(extraout_x8_09 + 0x20) = lVar12;
            goto LAB_108c57818;
          }
        } while ((uVar3 >> 1 & 1) == 0);
      }
    }
    func_0x000108c58d54(*(undefined8 *)(param_1 + 0xa0));
    if ((extraout_w8_01 >> 5 & 1) != 0) {
      func_0x000108c59c28();
      __ZSt17rethrow_exceptionSt13exception_ptr();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x108c5782c);
      (*pcVar4)();
    }
    func_0x000108c59968();
    func_0x000108c58e28();
    func_0x000108c58f3c();
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x000108c590d8();
    if ((bool)uVar6) {
      func_0x000108c59544();
    }
    else {
      func_0x000108c59544();
      uVar13 = **(undefined8 **)(param_1 + 0x248);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (param_1 + 0x1b8,*(undefined8 **)(param_1 + 0x248) + 2);
      FUN_108c51960(param_1 + 0x1d0,*unaff_x25);
      func_0x000108c58e20(uVar13,param_1 + 0x1b8,param_1 + 0x1d0);
      func_0x000108c59504();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1b8);
    }
    func_0x000108c59c98();
    if (extraout_x8_02 != 0) {
      do {
        func_0x000108c589fc();
      } while (extraout_w10_02 != 0);
    }
    func_0x000108c59a3c();
    func_0x000108c59418();
    func_0x000108c5937c();
    func_0x000108c58dc0();
    func_0x000108c4cad0(param_1 + 0x200);
    func_0x000108c59dac();
    if (extraout_x8_03 != 0) {
      do {
        func_0x000108c589fc();
      } while (extraout_w10_03 != 0);
    }
    func_0x000108c58fbc();
    func_0x000108c59908();
    func_0x000108c4cad0(param_1 + 0x210);
    uVar6 = *(char *)(param_1 + 0x4c) == '\x01';
    if (((bool)uVar6) && (*(long *)(param_1 + 0x38) != 0)) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      func_0x000108c598f0();
      __ZNSt3__16chrono12steady_clock3nowEv();
      func_0x000108c59b60();
      func_0x000108c59554();
      func_0x000107c278b8(param_1 + 0x1a0);
      func_0x000108c59438();
      plVar10 = (long *)(param_1 + 0x188);
      func_0x000107c278b8();
      func_0x000108c591a4();
      func_0x000108c594a8();
      func_0x000108c594b0();
      func_0x000108c592dc();
      func_0x000108c59688();
      func_0x000108c59ce0(*(undefined8 *)(param_1 + 0x240));
      do {
        func_0x000108c58a0c();
      } while (extraout_w10_04 != 0);
      func_0x000108c58d54(*(undefined8 *)(param_1 + 0xa0));
      if ((extraout_w8_02 >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x278) = 2;
        lVar12 = *(long *)(param_1 + 0xa0);
        func_0x000108c58cfc();
        lVar9 = *plVar10;
        if (lVar9 == 0) {
          func_0x000107c3a5c0();
          lVar9 = *plVar10;
        }
        func_0x000108c59848();
        plVar7 = extraout_x8_04;
        do {
          if (*plVar7 == 0) {
            func_0x000108c58a1c();
            plVar7 = extraout_x8_06;
            uVar3 = extraout_w10_06;
            uVar8 = extraout_w11_02;
          }
          else {
            func_0x000108c58d84();
            plVar7 = extraout_x8_05;
            uVar3 = extraout_w10_05;
            uVar8 = extraout_w11_01;
          }
          if ((uVar8 & 1) != 0) {
            func_0x000108c58b3c();
            if ((bool)uVar6) {
              func_0x000108c58a2c();
              func_0x000108c58960();
              func_0x000108c58944();
              *(long **)(lVar12 + 0x90) = plVar10;
            }
            func_0x000108c58b2c();
            *(long *)(extraout_x8_08 + 0x20) = lVar9;
LAB_108c57818:
            func_0x000108c59560();
            return;
          }
        } while ((uVar3 >> 1 & 1) == 0);
      }
      goto LAB_108c575cc;
    }
  }
  func_0x000108c593a0();
  FUN_108c54074(param_1 + 0xa0,*(undefined8 *)(param_1 + 0x1e8),*(undefined8 *)(param_1 + 0x1f0));
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  func_0x000108c58dc8(*(undefined8 *)(param_1 + 0x248));
  lVar9 = param_1 + 0x78;
  func_0x000108c41908();
  lVar2 = *(long *)(*(long *)(param_1 + 0x248) + 0x30);
  for (lVar12 = *(long *)(*(long *)(param_1 + 0x248) + 0x28); lVar12 != lVar2;
      lVar12 = lVar12 + 0x18) {
    func_0x000108c59b2c();
    if (lVar9 == 0) {
      lVar9 = param_1 + 0x50;
      func_0x000108c5973c();
      if (lVar9 != 0) {
        func_0x000108c58c70();
        func_0x000108c59620();
      }
    }
    else {
      lVar9 = param_1 + 0x20;
      func_0x000108c5973c();
      if (lVar9 == 0) {
        func_0x000108c58c70();
        FUN_108c40c94();
      }
      else {
        func_0x000108c58c70();
        func_0x000108c59620();
      }
    }
  }
  if (*(long *)(*(long *)(param_1 + 0x248) + 0xa8) != 0) {
    func_0x000104c003e8(*(long *)(param_1 + 0x248) + 0x90);
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x000108c59b84();
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x000108c59760(param_1 + 0x158);
  func_0x000108c59554();
  func_0x000107c278b8(param_1 + 0x140);
  func_0x000108c595e4();
  func_0x000108c59154();
  func_0x000108c59174();
  func_0x000108c59488();
  func_0x000108c59490();
  func_0x000108c59a00();
  func_0x000108c5953c();
  func_0x000108c596d8();
  func_0x000108c59390();
LAB_108c576d8:
  func_0x000108c593c4();
  func_0x000108c5952c();
  func_0x000108c58ca0();
  func_0x000108c58cf4();
  return;
}



/* Entry: 108c57a34; end: 108c57a9b;  */

void FUN_108c57a34(long param_1)

{
  if (*(char *)(param_1 + 0x278) == '\0') {
    func_0x000108c58f3c();
    func_0x000108c58d90();
  }
  else {
    if (*(char *)(param_1 + 0x278) == '\x01') {
      func_0x000107c27f9c(param_1 + 0xa0);
      func_0x000108c58f3c();
    }
    else {
      func_0x000107c27f9c(param_1 + 0xa0);
      func_0x000107c27f9c(param_1 + 0x240);
      func_0x000108c593a0();
      func_0x000108c59390();
    }
    func_0x000108c593c4();
    func_0x000108c5952c();
  }
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c57a9c; end: 108c57bab;  */

void FUN_108c57a9c(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long lVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_108c52e24(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0xe0);
    do {
      func_0x000108c58a0c();
    } while (extraout_w10 != 0);
    func_0x000108c58d54(*(undefined8 *)(param_1 + 0xd8));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xe8) = 1;
      func_0x000108c58970();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108c58f88();
      plVar2 = extraout_x8;
      do {
        if (*plVar2 == 0) {
          func_0x000108c58a1c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x000108c58d84();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x000108c589d4();
          if ((bool)in_ZR) {
            func_0x000108c58a2c();
            func_0x000108c58960();
            func_0x000108c588d8();
          }
          func_0x000108c588ac();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  lVar3 = param_1 + 0xd8;
  FUN_108c523ec(lVar3);
  FUN_108c52e04(param_1 + 0x10,lVar3);
  func_0x000108c59b90();
  func_0x000108c59b4c();
  func_0x000108c58ca0();
  func_0x000108c5993c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c57bac; end: 108c57be3;  */

void FUN_108c57bac(long param_1)

{
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    func_0x000108c59b90();
    func_0x000108c59b4c();
  }
  func_0x000108c58ca0();
  func_0x000108c5993c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c57be4; end: 108c57c7b;  */

void FUN_108c57be4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  FUN_108c51150(lVar1);
  FUN_108c54e8c(*(long *)(param_1 + 0x30) + 8,lVar1);
  func_0x000108c58d90();
  func_0x000108c58db8();
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c57c7c; end: 108c57c9b;  */

void FUN_108c57c7c(void)

{
  func_0x000108c5932c();
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c57c9c; end: 108c57d8f;  */

void FUN_108c57c9c(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *plVar2;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  
  func_0x000108c5934c();
  if ((extraout_x8 & 1) == 0) {
    func_0x000108c59d34();
    FUN_108c54d44();
    func_0x000108c592bc();
    do {
      func_0x000108c58a0c();
    } while (extraout_w10 != 0);
    func_0x000108c58d54(*(undefined8 *)(unaff_x19 + 0x50));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x60) = 1;
      func_0x000108c58970();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108c58f88();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x000108c58a1c();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000108c58d84();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x000108c589d4();
          if ((bool)in_ZR) {
            func_0x000108c58a2c();
            func_0x000108c58960();
            func_0x000108c588d8();
          }
          func_0x000108c588ac();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000108c59534();
  func_0x000108c58e98();
  func_0x000108c58f20();
  func_0x000108c58db8();
  func_0x000108c58ca0();
  func_0x000108c59974();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c57d90; end: 108c57dbf;  */

void FUN_108c57d90(void)

{
  undefined1 in_ZR;
  
  func_0x000108c59304();
  if ((bool)in_ZR) {
    func_0x000108c58e98();
    func_0x000108c58f20();
  }
  func_0x000108c58ca0();
  func_0x000108c59974();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c57dc0; end: 108c57e1f;  */

void FUN_108c57dc0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  FUN_108c51150(lVar1);
  FUN_108c51b60(param_1 + 0x10,lVar1);
  func_0x000108c58ddc();
  func_0x000108c58d98();
  func_0x000108c58d7c();
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c57e20; end: 108c57e47;  */

void FUN_108c57e20(void)

{
  func_0x000108c58f14();
  func_0x000108c58d98();
  func_0x000108c58d7c();
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c57e48; end: 108c57f5b;  */

void FUN_108c57e48(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  int iStack_28;
  undefined1 uStack_24;
  
  puVar1 = &uStack_60;
  FUN_108c51bc4(param_1 + 0xb8);
  func_0x000108c59514();
  func_0x000108c590d0();
  func_0x000108c593d4();
  func_0x000108c59cf8();
  if ((bool)in_ZR) {
    FUN_108c6add0(&uStack_60,param_1 + 0x20);
    uStack_30 = uStack_50;
    uStack_38 = uStack_58;
    uStack_40 = uStack_60;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    iStack_28 = *(int *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    uStack_24 = iStack_28 == 0;
    func_0x000108c5903c();
    FUN_108c51bfc();
    func_0x000108c59a34();
    FUN_108c41168(param_1 + 0x60);
  }
  else {
    iStack_28 = *(int *)(param_1 + 0x58);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    uStack_24 = iStack_28 == 0;
    func_0x000108c5903c();
    FUN_108c51bfc();
    func_0x000108c59a34();
    puVar1 = (undefined8 *)(param_1 + 0x78);
  }
  FUN_108c41168(puVar1);
  func_0x000108c58ff4();
  func_0x000108c591bc();
  func_0x000108c58ca0();
  func_0x000108c58cf4();
  return;
}



/* Entry: 108c57f5c; end: 108c57f8b;  */

void FUN_108c57f5c(long param_1)

{
  func_0x000107c27f9c(param_1 + 0xb8);
  func_0x000108c593d4();
  func_0x000108c591bc();
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c57f8c; end: 108c57fe3;  */

void FUN_108c57f8c(long param_1)

{
  func_0x000107c28834(param_1 + 0x30);
  func_0x000108c58ddc();
  func_0x000108c58d98();
  func_0x000108c58d7c();
  func_0x000108c58db8();
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c57fe4; end: 108c5800b;  */

void FUN_108c57fe4(void)

{
  func_0x000108c58f14();
  func_0x000108c58d98();
  func_0x000108c58d7c();
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c5800c; end: 108c5852b;  */

void FUN_108c5800c(long param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  long lVar6;
  long extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *plVar7;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  long extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong uVar8;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  undefined8 *unaff_x20;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  
  func_0x000108c59c34();
  if (*(char *)(param_1 + 0x128) == '\x02') {
LAB_108c582ec:
    func_0x000107c28834(param_1 + 0x110);
    lVar6 = *(long *)(param_1 + 0x120);
    func_0x000108c58e80();
    func_0x000108c58f64();
    if (*(long *)(lVar6 + 0xc0) != 0) {
      func_0x000104c003e8(*(long *)(param_1 + 0x120) + 0xa8);
    }
  }
  else {
    func_0x000108c59c4c();
    uVar4 = extraout_w8 + -1 < 0;
    uVar5 = extraout_w8 == 1;
    if (!(bool)uVar5) {
      lVar6 = param_1 + 0x20;
      FUN_108c51150(lVar6);
      FUN_108c41f1c(param_1 + 0x40,lVar6);
      func_0x000108c58d90();
      func_0x000108c58e80();
      func_0x000108c58e78(param_1 + 0x58);
      func_0x000108c59d98();
      func_0x000108c59bec();
      plVar9 = (long *)(param_1 + 0x58);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x000108c59d8c();
      if (!(bool)uVar5) {
        __ZNSt3__16chrono12system_clock3nowEv();
        func_0x000108c59468();
        if ((bool)uVar4) {
          func_0x000108c58e78((long *)(param_1 + 0x88U));
          func_0x000108c59778();
          plVar9 = (long *)(param_1 + 0x88U);
        }
        else {
          func_0x000108c58e78((long *)(param_1 + 0x70U));
          func_0x000108c59768();
          plVar9 = (long *)(param_1 + 0x70U);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        func_0x000108c59d8c();
        if (!(bool)uVar5) {
          plVar9 = (long *)(param_1 + 0x40);
          FUN_108c6b380();
          if ((((ulong)plVar9 & 1) == 0) && (*(long *)(param_1 + 0x40) != *(long *)(param_1 + 0x48))
             ) {
            func_0x000108c59bb4();
            lVar6 = unaff_x20[1];
            uVar12 = *unaff_x20;
            *(undefined8 *)(param_1 + 0xd8) = unaff_x20[1];
            *(undefined8 *)(param_1 + 0xd0) = uVar12;
            if (lVar6 != 0) {
              do {
                func_0x000108c589fc();
              } while (extraout_w10 != 0);
            }
            func_0x000108c59b98();
            func_0x000108c4cad0(param_1 + 0xd0);
            func_0x000108c599d0();
            goto LAB_108c5831c;
          }
        }
      }
      func_0x000108c59d4c();
      lVar6 = extraout_x9;
      if (extraout_x10 != 0) {
        plVar7 = (long *)(extraout_x10 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        lVar6 = *(long *)(param_1 + 0x48);
      }
      uVar5 = extraout_x8 == lVar6;
      func_0x000108c59b54();
      func_0x000108c59c1c();
      func_0x000108c59b40();
      func_0x000108c592cc();
      do {
        func_0x000108c58a0c();
      } while (extraout_w10_00 != 0);
      func_0x000108c58d54(*(undefined8 *)(param_1 + 0x110));
      if ((extraout_w8_00 >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x128) = 1;
        lVar6 = *(long *)(param_1 + 0x110);
        func_0x000108c58b08();
        if (*plVar9 == 0) {
          func_0x000107c3a5c0();
        }
        func_0x000108c58fa0();
        plVar7 = extraout_x8_00;
        do {
          if (*plVar7 == 0) {
            func_0x000108c58a1c();
            plVar7 = extraout_x8_02;
            uVar3 = extraout_w10_02;
            uVar8 = extraout_x11_00;
          }
          else {
            func_0x000108c58d84();
            plVar7 = extraout_x8_01;
            uVar3 = extraout_w10_01;
            uVar8 = extraout_x11;
          }
          if ((uVar8 & 1) != 0) {
            func_0x000108c58a3c();
            if ((bool)uVar5) {
              func_0x000108c58a2c();
              func_0x000108c58960();
              func_0x000108c58944();
              *(long **)(lVar6 + 0x90) = plVar9;
            }
            func_0x000108c58a6c();
            goto LAB_108c5837c;
          }
        } while ((uVar3 >> 1 & 1) == 0);
      }
    }
    lVar6 = param_1 + 0x110;
    FUN_108c51850(lVar6);
    FUN_108c51e68(param_1 + 0x20,lVar6);
    func_0x000108c58e80();
    func_0x000108c58f64();
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x000108c59d40();
    if ((bool)uVar5) {
      func_0x000108c59d60();
      if (extraout_x9_00 != 0) {
        do {
          func_0x000108c589fc();
        } while (extraout_w10_03 != 0);
      }
      plVar9 = (long *)(param_1 + 0xf0);
      func_0x000108c596e0();
      func_0x000108c596f0();
    }
    else {
      func_0x000108c59638(*(undefined4 *)(param_1 + 0x38));
      plVar9 = (long *)**(long **)(param_1 + 0x120);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (param_1 + 0xa0,*(long **)(param_1 + 0x120) + 2);
      func_0x000108c59630(param_1 + 0xb8);
      func_0x000108c58e20(plVar9,param_1 + 0xa0,param_1 + 0xb8);
      puVar10 = *(undefined8 **)(param_1 + 0x120);
      func_0x000108c596c8();
      func_0x000108c596d0();
      lVar6 = puVar10[1];
      uVar12 = *puVar10;
      *(undefined8 *)(param_1 + 0x108) = puVar10[1];
      *(undefined8 *)(param_1 + 0x100) = uVar12;
      if (lVar6 != 0) {
        do {
          func_0x000108c589fc();
        } while (extraout_w10_04 != 0);
      }
      func_0x000108c59b20(*(undefined8 *)(param_1 + 0x120));
      func_0x000108c596c0();
      func_0x000108c58d60();
    }
    func_0x000108c59d40();
    if (((bool)uVar5) &&
       (uVar5 = *(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28), !(bool)uVar5)) {
      func_0x000108c59c10();
      func_0x000108c59700();
      func_0x000108c592cc();
      do {
        func_0x000108c58a0c();
      } while (extraout_w10_05 != 0);
      func_0x000108c58d54(*(undefined8 *)(param_1 + 0x110));
      if ((extraout_w8_01 >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x128) = 2;
        lVar11 = *(long *)(param_1 + 0x110);
        func_0x000108c58b08();
        lVar6 = *plVar9;
        if (lVar6 == 0) {
          func_0x000107c3a5c0();
          lVar6 = *plVar9;
        }
        func_0x000108c58fa0();
        plVar7 = extraout_x8_03;
        do {
          if (*plVar7 == 0) {
            func_0x000108c58a1c();
            plVar7 = extraout_x8_05;
            uVar3 = extraout_w10_07;
            uVar8 = extraout_x11_02;
          }
          else {
            func_0x000108c58d84();
            plVar7 = extraout_x8_04;
            uVar3 = extraout_w10_06;
            uVar8 = extraout_x11_01;
          }
          if ((uVar8 & 1) != 0) {
            func_0x000108c58a80();
            if ((bool)uVar5) {
              func_0x000108c58a2c();
              func_0x000108c58960();
              func_0x000108c588f8();
              *(long **)(lVar11 + 0x90) = plVar9;
            }
            func_0x000108c58a90();
            *(long *)(extraout_x8_06 + 0x20) = lVar6;
LAB_108c5837c:
            func_0x000108c58998();
            return;
          }
        } while ((uVar3 >> 1 & 1) == 0);
      }
      goto LAB_108c582ec;
    }
  }
  func_0x000108c59a0c();
  func_0x000108c59398();
LAB_108c5831c:
  func_0x000108c59410();
  func_0x000108c58ca0();
  func_0x000108c58cf4();
  return;
}



/* Entry: 108c5852c; end: 108c58587;  */

void FUN_108c5852c(long param_1)

{
  if (*(char *)(param_1 + 0x128) == '\0') {
    func_0x000108c58d90();
    func_0x000108c58e80();
  }
  else {
    if (*(char *)(param_1 + 0x128) == '\x01') {
      func_0x000107c27f9c(param_1 + 0x110);
      func_0x000108c58f64();
    }
    else {
      func_0x000107c27f9c(param_1 + 0x110);
      func_0x000108c58f64();
      func_0x000108c59398();
    }
    func_0x000108c59410();
  }
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c58588; end: 108c58697;  */

void FUN_108c58588(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long lVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 0x100) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_108c50b54(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0xf8);
    do {
      func_0x000108c58a0c();
    } while (extraout_w10 != 0);
    func_0x000108c58d54(*(undefined8 *)(param_1 + 0xf0));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x100) = 1;
      func_0x000108c58970();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108c58f88();
      plVar2 = extraout_x8;
      do {
        if (*plVar2 == 0) {
          func_0x000108c58a1c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x000108c58d84();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x000108c589d4();
          if ((bool)in_ZR) {
            func_0x000108c58a2c();
            func_0x000108c58960();
            func_0x000108c588d8();
          }
          func_0x000108c588ac();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  lVar3 = param_1 + 0xf0;
  FUN_108c51150(lVar3);
  FUN_108c50b34(param_1 + 0x10,lVar3);
  func_0x000108c5902c();
  func_0x000108c59a2c();
  func_0x000108c58ca0();
  func_0x000108c59960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c58698; end: 108c586cf;  */

void FUN_108c58698(long param_1)

{
  if (*(char *)(param_1 + 0x100) == '\x01') {
    func_0x000108c5902c();
    func_0x000108c59a2c();
  }
  func_0x000108c58ca0();
  func_0x000108c59960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c586d0; end: 108c58767;  */

void FUN_108c586d0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  FUN_108c54a20(lVar1);
  FUN_108c54a00(*(long *)(param_1 + 0x30) + 8,lVar1);
  func_0x000108c58d90();
  func_0x000108c58db8();
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c58768; end: 108c58787;  */

void FUN_108c58768(void)

{
  func_0x000108c5932c();
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c58788; end: 108c5887b;  */

void FUN_108c58788(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *plVar2;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  
  func_0x000108c5934c();
  if ((extraout_x8 & 1) == 0) {
    func_0x000108c59d34();
    FUN_108c548b8();
    func_0x000108c592bc();
    do {
      func_0x000108c58a0c();
    } while (extraout_w10 != 0);
    func_0x000108c58d54(*(undefined8 *)(unaff_x19 + 0x50));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x60) = 1;
      func_0x000108c58970();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108c58f88();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x000108c58a1c();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000108c58d84();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x000108c589d4();
          if ((bool)in_ZR) {
            func_0x000108c58a2c();
            func_0x000108c58960();
            func_0x000108c588d8();
          }
          func_0x000108c588ac();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000108c59534();
  func_0x000108c58e98();
  func_0x000108c58f20();
  func_0x000108c58db8();
  func_0x000108c58ca0();
  func_0x000108c5997c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


