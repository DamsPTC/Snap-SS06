/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00466318; end: 0046631b;  */

void FUN_00466318(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e6228;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0046631c; end: 0046632f;  */

void FUN_0046631c(void)

{
  func_0x00466338();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00466330; end: 00466353;  */

void FUN_00466330(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0046cd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 00466354; end: 00466377;  */

void FUN_00466354(long param_1)

{
  func_0x0046cd3c();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 00466378; end: 004663df;  */

void FUN_00466378(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_30;
  
  func_0x0046cb34();
  func_0x0046d01c();
  FUN_004663e0();
  FUN_00466430(uStack_30,param_2);
  func_0x0046cc18();
  func_0x00466db4();
  func_0x0046ca74(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0046ce90();
  func_0x00466db4();
  func_0x0046cc64();
  func_0x0046d004();
  FUN_00466400();
  func_0x0046d010();
  return;
}



/* Entry: 004663e0; end: 004663ff;  */

void FUN_004663e0(void)

{
  func_0x0046d004();
  FUN_00466400();
  func_0x0046d010();
  return;
}



/* Entry: 00466400; end: 0046642f;  */

void FUN_00466400(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x38e38e38e38e38f) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 * 0x48);
    return;
  }
  FUN_0040cee8();
  func_0x0046cfdc();
  func_0x0046d204(&UNK_009e6268);
  FUN_00466484();
  return;
}



/* Entry: 00466430; end: 00466463;  */

void FUN_00466430(void)

{
  func_0x0046cfdc();
  func_0x0046d204(&UNK_009e6268);
  FUN_00466484();
  return;
}



/* Entry: 00466464; end: 00466467;  */

void FUN_00466464(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e6278;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00466468; end: 0046647b;  */

void FUN_00466468(void)

{
  FUN_00466da8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0046647c; end: 00466483;  */

void FUN_0046647c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0046cd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 00466484; end: 004664db;  */

void FUN_00466484(void)

{
  undefined1 uStack_39;
  undefined1 auStack_38 [24];
  
  func_0x0046cc6c();
  FUN_004664dc(auStack_38,&PTR_s__messagingcoreservice_MessagingC_009e62b8,&UNK_009e62d0,&uStack_39)
  ;
  func_0x0046cd9c();
  FUN_00466b68();
  func_0x00466b04(auStack_38);
  return;
}



/* Entry: 004664dc; end: 00466513;  */

void FUN_004664dc(undefined8 *param_1)

{
  func_0x0046cfdc();
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_00466514();
  return;
}



/* Entry: 00466514; end: 00466557;  */

void FUN_00466514(long param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    FUN_00466558(param_1,param_1 + 8,param_2);
  }
  return;
}



/* Entry: 00466558; end: 004665d3;  */

long FUN_00466558(long *param_1)

{
  long lVar1;
  long alStack_38 [3];
  
  func_0x0046cc6c();
  FUN_004665d4(alStack_38);
  func_0x0046cd9c();
  FUN_00466618();
  lVar1 = *param_1;
  if (lVar1 == 0) {
    FUN_00466724();
    lVar1 = alStack_38[0];
    alStack_38[0] = 0;
  }
  FUN_00466a8c(alStack_38);
  return lVar1;
}



/* Entry: 004665d4; end: 00466617;  */

void FUN_004665d4(long param_1)

{
  long *unaff_x19;
  long unaff_x21;
  
  func_0x0046cef0();
  *unaff_x19 = param_1;
  unaff_x19[1] = unaff_x21;
  unaff_x19[2] = 0;
  FUN_00466754(param_1 + 0x20);
  *(undefined1 *)(unaff_x19 + 2) = 1;
  return;
}



/* Entry: 00466618; end: 00466723;  */

long * FUN_00466618(long *param_1,long *param_2,undefined8 *param_3,long *param_4,undefined8 param_5
                   )

{
  uint uVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar3;
  long *plVar4;
  
  if ((param_2 == param_1 + 1) ||
     (plVar3 = param_1, func_0x0046d1f0(param_1,param_2 + 4), ((uint)plVar3 >> 7 & 1) != 0)) {
    plVar3 = param_2;
    if (param_2 != (long *)*param_1) {
      FUN_00466844();
      uVar1 = (int)plVar3 + 0x20;
      func_0x0046d15c();
      if ((uVar1 >> 7 & 1) == 0) goto FUN_00466780;
    }
    if (*param_2 == 0) {
      *param_3 = param_2;
      param_4 = param_2;
    }
    else {
      *param_3 = plVar3;
      param_4 = plVar3 + 1;
    }
  }
  else {
    uVar1 = (int)param_2 + 0x20;
    func_0x0046d15c();
    if ((uVar1 >> 7 & 1) == 0) {
      *param_3 = param_2;
      *param_4 = (long)param_2;
    }
    else {
      param_4 = param_2;
      FUN_004667f0(param_2,1);
      if ((param_1 + 1 != param_4) &&
         (plVar3 = param_4, func_0x0046d1f0(), ((uint)plVar3 >> 7 & 1) == 0)) {
FUN_00466780:
        func_0x0046cd28(param_1,param_3,param_5);
        plVar3 = (long *)(unaff_x20 + 8);
        plVar2 = (long *)*plVar3;
        plVar4 = plVar3;
        while (plVar2 != (long *)0x0) {
          while (plVar4 = plVar2, func_0x0046d1f0(), ((uint)param_1 >> 7 & 1) != 0) {
            plVar2 = (long *)*plVar4;
            plVar3 = plVar4;
            if ((long *)*plVar4 == (long *)0x0) goto LAB_004667e0;
          }
          param_1 = plVar4 + 4;
          func_0x0046d15c();
          if (((uint)param_1 >> 7 & 1) == 0) break;
          plVar3 = plVar4 + 1;
          plVar2 = (long *)*plVar3;
        }
LAB_004667e0:
        *unaff_x19 = plVar4;
        return plVar3;
      }
      if (param_2[1] == 0) {
        *param_3 = param_2;
        param_4 = param_2 + 1;
      }
      else {
        *param_3 = param_4;
      }
    }
  }
  return param_4;
}



/* Entry: 00466724; end: 00466753;  */

void FUN_00466724(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x0046cfe8();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x0046d0f0();
  unaff_x19[2] = unaff_x19[2] + 1;
  return;
}



/* Entry: 00466754; end: 0046675b;  */

ulong * FUN_00466754(ulong *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  long *plVar9;
  
  puVar7 = (ulong *)*param_2;
  puVar5 = puVar7;
  _strlen();
  if ((ulong *)0x7ffffffffffffff6 < puVar5) {
    FUN_0040d740();
    plVar9 = (long *)puVar5[1];
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    return puVar5;
  }
  if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar5) {
    pdVar4 = &MACH_HEADER.flags;
    if ((dword *)((ulong)puVar5 | 7) != (dword *)0x17) {
      pdVar4 = (dword *)((ulong)puVar5 | 7);
    }
    puVar6 = (ulong *)((long)pdVar4 + 1);
    __Znwm();
    param_1[1] = (ulong)puVar5;
    param_1[2] = (ulong)((long)pdVar4 + 1) | 0x8000000000000000;
    *param_1 = (ulong)puVar6;
  }
  else {
    *(char *)((long)param_1 + 0x17) = (char)puVar5;
    puVar6 = param_1;
    if (puVar5 == (ulong *)0x0) goto LAB_00425d3c;
  }
  _memmove(puVar6,puVar7,puVar5);
LAB_00425d3c:
  *(undefined1 *)((long)puVar6 + (long)puVar5) = 0;
  return param_1;
}



/* Entry: 0046675c; end: 0046677f;  */

void FUN_0046675c(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0046d0e4();
  FUN_00466844();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 00466780; end: 004667ef;  */

long * FUN_00466780(long *param_1)

{
  long *plVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar2;
  long *plVar3;
  
  func_0x0046cd28();
  plVar2 = (long *)(unaff_x20 + 8);
  plVar1 = (long *)*plVar2;
  plVar3 = plVar2;
  while (plVar1 != (long *)0x0) {
    while (plVar3 = plVar1, func_0x0046d1f0(), ((uint)param_1 >> 7 & 1) != 0) {
      plVar1 = (long *)*plVar3;
      plVar2 = plVar3;
      if ((long *)*plVar3 == (long *)0x0) goto LAB_004667e0;
    }
    param_1 = plVar3 + 4;
    func_0x0046d15c();
    if (((uint)param_1 >> 7 & 1) == 0) break;
    plVar2 = plVar3 + 1;
    plVar1 = (long *)*plVar2;
  }
LAB_004667e0:
  *unaff_x19 = plVar3;
  return plVar2;
}



/* Entry: 004667f0; end: 00466843;  */

undefined8 FUN_004667f0(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_0046687c(&uStack_18);
  return uStack_18;
}



/* Entry: 00466844; end: 0046687b;  */

long * FUN_00466844(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if ((long *)*param_1 == (long *)0x0) {
    do {
      plVar3 = (long *)param_1[2];
      bVar1 = param_1 == (long *)*plVar3;
      param_1 = plVar3;
    } while (bVar1);
    return plVar3;
  }
  do {
    plVar2 = plVar3;
    plVar3 = (long *)plVar2[1];
  } while (plVar3 != (long *)0x0);
  return plVar2;
}



/* Entry: 0046687c; end: 004668e3;  */

void FUN_0046687c(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x0046cd28();
  if (param_2 < 0) {
    for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + 1) {
      FUN_0046675c();
    }
  }
  else {
    while (0 < unaff_x19) {
      func_0x004668c0();
      unaff_x19 = unaff_x19 + -1;
    }
  }
  return;
}



/* Entry: 004668e4; end: 0046691b;  */

long * FUN_004668e4(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[1];
  if ((long *)param_1[1] == (long *)0x0) {
    do {
      plVar3 = (long *)param_1[2];
      bVar1 = param_1 != (long *)*plVar3;
      param_1 = plVar3;
    } while (bVar1);
    return plVar3;
  }
  do {
    plVar2 = plVar3;
    plVar3 = (long *)*plVar2;
  } while (plVar3 != (long *)0x0);
  return plVar2;
}



/* Entry: 0046691c; end: 00466a0b;  */

/* WARNING: Possible PIC construction at 0x004669b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004669b8) */

void FUN_0046691c(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  *(bool *)(param_2 + 3) = param_2 == param_1;
  do {
    if ((param_2 == param_1) || (plVar6 = (long *)param_2[2], (*(byte *)(plVar6 + 3) & 1) != 0)) {
      return;
    }
    plVar1 = (long *)plVar6[2];
    plVar5 = (long *)*plVar1;
    if (plVar6 == plVar5) {
      plVar5 = (long *)plVar1[1];
      if ((plVar5 == (long *)0x0) || ((*(byte *)(plVar5 + 3) & 1) != 0)) {
        if (param_2 != (long *)*plVar6) {
          func_0x00466a0c(plVar6);
          plVar6 = (long *)plVar6[2];
          plVar1 = (long *)plVar6[2];
        }
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(plVar1 + 3) = 0;
        plVar6 = plVar1;
        goto SUB_00466a4c;
      }
    }
    else if ((plVar5 == (long *)0x0) || ((*(byte *)(plVar5 + 3) & 1) != 0)) {
      if (param_2 != (long *)*plVar6) {
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(plVar1 + 3) = 0;
        plVar6 = (long *)plVar1[1];
        lVar2 = *plVar6;
        plVar1[1] = lVar2;
        if (lVar2 != 0) {
          *(long **)(lVar2 + 0x10) = plVar1;
        }
        puVar3 = (undefined8 *)plVar1[2];
        plVar6[2] = (long)puVar3;
        if (plVar1 == (long *)*puVar3) {
          *puVar3 = plVar6;
        }
        else {
          puVar3[1] = plVar6;
        }
        *plVar6 = (long)plVar1;
        plVar1[2] = (long)plVar6;
        return;
      }
SUB_00466a4c:
      lVar2 = *plVar6;
      lVar4 = *(long *)(lVar2 + 8);
      *plVar6 = lVar4;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 0x10) = plVar6;
      }
      plVar1 = (long *)plVar6[2];
      *(long **)(lVar2 + 0x10) = plVar1;
      if (plVar6 == (long *)*plVar1) {
        *plVar1 = lVar2;
      }
      else {
        plVar1[1] = lVar2;
      }
      *(long **)(lVar2 + 8) = plVar6;
      plVar6[2] = lVar2;
      return;
    }
    *(undefined1 *)(plVar6 + 3) = 1;
    *(bool *)(plVar1 + 3) = plVar1 == param_1;
    *(undefined1 *)(plVar5 + 3) = 1;
    param_2 = plVar1;
  } while( true );
}



/* Entry: 00466a0c; end: 00466a8b;  */

void FUN_00466a0c(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 8);
  lVar2 = *plVar1;
  *(long *)(param_1 + 8) = lVar2;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_1;
  }
  plVar3 = *(long **)(param_1 + 0x10);
  plVar1[2] = (long)plVar3;
  if (param_1 == *plVar3) {
    *plVar3 = (long)plVar1;
  }
  else {
    plVar3[1] = (long)plVar1;
  }
  *plVar1 = param_1;
  *(long **)(param_1 + 0x10) = plVar1;
  return;
}



/* Entry: 00466a8c; end: 00466aab;  */

void FUN_00466a8c(void)

{
  func_0x0046cf4c();
  FUN_00466aac();
  return;
}



/* Entry: 00466aac; end: 00466ac3;  */

void FUN_00466aac(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x20);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(lVar1);
  return;
}



/* Entry: 00466ac4; end: 00466b67;  */

void FUN_00466ac4(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x20);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_2);
  return;
}



/* Entry: 00466b68; end: 00466bcf;  */

undefined8 * FUN_00466b68(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_009e62e0;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0046cbb4();
    } while (extraout_w10 != 0);
  }
  FUN_00466be8(param_1 + 3,param_3);
  return param_1;
}



/* Entry: 00466bd0; end: 00466bd3;  */

long FUN_00466bd0(long param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  
  lVar1 = param_1;
  FUN_0046cf40(&UNK_009e62d0);
  *unaff_x20 = extraout_x8;
  func_0x00466b04(lVar1 + 0x18);
  FUN_00466d48(unaff_x20 + 1);
  return param_1;
}



/* Entry: 00466bd4; end: 00466be7;  */

void FUN_00466bd4(void)

{
  func_0x00466d6c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00466be8; end: 00466c27;  */

void FUN_00466be8(undefined8 *param_1)

{
  func_0x0046cfdc();
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_00466c28();
  return;
}



/* Entry: 00466c28; end: 00466c73;  */

void FUN_00466c28(long param_1,long param_2,long param_3)

{
  while (param_2 != param_3) {
    FUN_00466c74(param_1,param_1 + 8,param_2 + 0x20);
    FUN_004668e4();
  }
  return;
}



/* Entry: 00466c74; end: 00466c7b;  */

undefined1  [16] FUN_00466c74(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_58 [3];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_00466618(param_1,param_2,&uStack_38,auStack_40,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    func_0x0046cd9c(alStack_58);
    FUN_00466d08();
    FUN_00466724(param_1,uStack_38,plVar2,alStack_58[0]);
    lVar3 = alStack_58[0];
    alStack_58[0] = 0;
    FUN_00466a8c(alStack_58);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 00466c7c; end: 00466d07;  */

undefined1  [16] FUN_00466c7c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_58 [3];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_00466618(param_1,param_2,&uStack_38,auStack_40,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    func_0x0046cd9c(alStack_58);
    FUN_00466d08();
    FUN_00466724(param_1,uStack_38,plVar2,alStack_58[0]);
    lVar3 = alStack_58[0];
    alStack_58[0] = 0;
    FUN_00466a8c(alStack_58);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 00466d08; end: 00466d47;  */

void FUN_00466d08(long param_1)

{
  long *unaff_x19;
  long unaff_x21;
  
  func_0x0046cef0();
  *unaff_x19 = param_1;
  unaff_x19[1] = unaff_x21;
  unaff_x19[2] = 0;
  func_0x0046d048(param_1 + 0x20);
  *(undefined1 *)(unaff_x19 + 2) = 1;
  return;
}



/* Entry: 00466d48; end: 00466da7;  */

void FUN_00466d48(long param_1)

{
  func_0x0046cd3c();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 00466da8; end: 00466dc3;  */

void FUN_00466da8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e6278;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00466dc4; end: 00466de7;  */

void FUN_00466dc4(long param_1)

{
  func_0x0046cd3c();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 00466de8; end: 00466ec7;  */

undefined8 * FUN_00466de8(undefined8 *param_1)

{
  undefined1 auStack_98 [24];
  undefined1 uStack_80;
  undefined1 auStack_78 [24];
  undefined1 uStack_60;
  undefined1 auStack_58 [24];
  undefined1 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_0040acf8(param_1 + 8);
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  auStack_58[0] = 0;
  uStack_40 = 0;
  auStack_78[0] = 0;
  uStack_60 = 0;
  auStack_98[0] = 0;
  uStack_80 = 0;
  FUN_00466ec8(param_1 + 0x10,&uStack_38,0,0,3,auStack_58,0,auStack_78,0,0,auStack_98,0x101);
  FUN_00457530(auStack_98);
  FUN_00457530(auStack_78);
  FUN_00457530(auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  return param_1;
}



/* Entry: 00466ec8; end: 00466fbb;  */

void FUN_00466ec8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 *param_6,undefined8 param_7,undefined8 *param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 *param_11,undefined4 param_12,
                 undefined4 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[3] = param_3;
  param_1[4] = param_4;
  *(undefined4 *)(param_1 + 5) = param_5;
  *(undefined1 *)(param_1 + 9) = 0;
  if (*(char *)(param_6 + 3) == '\x01') {
    uVar2 = param_6[1];
    uVar1 = *param_6;
    param_1[8] = param_6[2];
    param_1[7] = uVar2;
    param_1[6] = uVar1;
    param_6[1] = 0;
    param_6[2] = 0;
    *param_6 = 0;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[10] = param_7;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (*(char *)(param_8 + 3) == '\x01') {
    uVar2 = param_8[1];
    uVar1 = *param_8;
    param_1[0xd] = param_8[2];
    param_1[0xc] = uVar2;
    param_1[0xb] = uVar1;
    param_8[1] = 0;
    param_8[2] = 0;
    *param_8 = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0xf] = param_9;
  param_1[0x10] = param_10;
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_11 + 3) == '\x01') {
    uVar2 = param_11[1];
    uVar1 = *param_11;
    param_1[0x13] = param_11[2];
    param_1[0x12] = uVar2;
    param_1[0x11] = uVar1;
    param_11[1] = 0;
    param_11[2] = 0;
    *param_11 = 0;
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  *(undefined1 *)(param_1 + 0x15) = (undefined1)param_12;
  *(undefined1 *)((long)param_1 + 0xa9) = param_12._1_1_;
  param_1[0x16] = param_14;
  param_1[0x17] = param_15;
  return;
}



/* Entry: 00466fbc; end: 0046706f;  */

void FUN_00466fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *puStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar5 = auStack_70;
  func_0x0046d244();
  func_0x0046cb34();
  uStack_58 = extraout_x8;
  func_0x0046d01c();
  FUN_0046708c();
  FUN_004670dc(uStack_60,param_2,param_3,param_4);
  func_0x0046d2f0();
  FUN_00467070();
  FUN_0046c854();
  func_0x0046ca74(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0046ce90();
  FUN_0046c854();
  func_0x0046cc64();
  *extraout_x8_00 = puVar5;
  extraout_x8_00[1] = param_2;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_78 = FUN_00467070;
    lStack_88 = extraout_x8_00[1];
    if (lStack_88 != 0) {
      plVar1 = (long *)(lStack_88 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_90 = puVar5;
    puStack_80 = &stack0xfffffffffffffff0;
    FUN_0046c7f0(puVar2,&puStack_90);
    func_0x0046c830(&puStack_90);
    return;
  }
  return;
}



/* Entry: 00467070; end: 0046708b;  */

void FUN_00467070(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = param_2 + 8;
  }
  if ((lVar2 != 0) && ((*(long *)(lVar2 + 8) == 0 || (*(long *)(*(long *)(lVar2 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_20 = param_2;
    FUN_0046c7f0(lVar2,&lStack_20);
    func_0x0046c830(&lStack_20);
    return;
  }
  return;
}



/* Entry: 0046708c; end: 004670ab;  */

void FUN_0046708c(void)

{
  func_0x0046d004();
  FUN_004670ac();
  func_0x0046d010();
  return;
}



/* Entry: 004670ac; end: 004670db;  */

void FUN_004670ac(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x67b23a5440cf65) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 * 0x278);
    return;
  }
  FUN_0040cee8();
  func_0x0046cfdc();
  func_0x0046d204(&UNK_009e6300);
  FUN_00467130();
  return;
}



/* Entry: 004670dc; end: 0046710f;  */

void FUN_004670dc(void)

{
  func_0x0046cfdc();
  func_0x0046d204(&UNK_009e6300);
  FUN_00467130();
  return;
}



/* Entry: 00467110; end: 00467113;  */

void FUN_00467110(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e6310;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00467114; end: 00467127;  */

void FUN_00467114(void)

{
  FUN_0046c77c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00467128; end: 0046712f;  */

void FUN_00467128(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0046cd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 00467130; end: 0046717b;  */

undefined8 FUN_00467130(undefined8 param_1)

{
  func_0x0046d2d8();
  FUN_0046717c();
  func_0x0046ce4c();
  return param_1;
}



/* Entry: 0046717c; end: 00467243;  */

undefined8 *
FUN_0046717c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long extraout_x8;
  code *extraout_x8_00;
  long lStack_50;
  undefined1 auStack_48 [8];
  
  func_0x0046d2d8();
  *(undefined1 *)(extraout_x8 + 0x78) = 1;
  FUN_005c498c(&lStack_50,param_7,param_8);
  FUN_00467244(param_1,param_2,param_3,param_4,auStack_48,param_6,&lStack_50);
  lVar1 = lStack_50;
  lStack_50 = 0;
  if (lVar1 != 0) {
    func_0x0046cd88();
    (*extraout_x8_00)();
  }
  func_0x0046ce4c();
  *param_1 = &PTR_FUN_009e6360;
  return param_1;
}



/* Entry: 00467244; end: 0046737f;  */

void FUN_00467244(void)

{
  undefined8 *in_x6;
  long lVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0046cc6c();
  func_0x0046d2d8();
  FUN_00467398();
  func_0x0046ce4c();
  *unaff_x19 = &PTR_FUN_009e6398;
  *(undefined1 *)(unaff_x19 + 0x19) = 0;
  lVar1 = unaff_x20[1];
  uVar2 = *unaff_x20;
  unaff_x19[0x1b] = unaff_x20[1];
  unaff_x19[0x1a] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0046cbb4();
    } while (extraout_w10 != 0);
  }
  uVar2 = *in_x6;
  *in_x6 = 0;
  unaff_x19[0x1c] = uVar2;
  *(undefined1 *)(unaff_x19 + 0x1d) = 0;
  *(undefined1 *)(unaff_x19 + 0x20) = 0;
  FUN_00467eb0(unaff_x19 + 0x21);
  *(undefined1 *)(unaff_x19 + 0x38) = 0;
  *(undefined1 *)(unaff_x19 + 0x3b) = 0;
  *(undefined1 *)(unaff_x19 + 0x3c) = 0;
  *(undefined1 *)(unaff_x19 + 0x3f) = 0;
  unaff_x19[0x40] = 0;
  unaff_x19[0x42] = 0;
  unaff_x19[0x41] = 0;
  unaff_x19[0x44] = 0x32aaaba7;
  unaff_x19[0x46] = 0;
  unaff_x19[0x45] = 0;
  unaff_x19[0x48] = 0;
  unaff_x19[0x47] = 0;
  unaff_x19[0x4a] = 0;
  unaff_x19[0x49] = 0;
  unaff_x19[0x4b] = 0;
  FUN_004675cc();
  return;
}



/* Entry: 00467380; end: 00467383;  */

long FUN_00467380(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  undefined8 uStack_28;
  
  lVar2 = param_1;
  FUN_0046cf40(&UNK_009e6388);
  *unaff_x20 = extraout_x8;
  __ZNSt3__15mutexD1Ev(lVar2 + 0x220);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x200);
  FUN_00457530(param_1 + 0x1e0);
  FUN_00457530(param_1 + 0x1c0);
  FUN_0046c560(param_1 + 0x108);
  FUN_00457530(param_1 + 0xe8);
  func_0x0046c750(param_1 + 0xe0);
  func_0x0045a078(unaff_x20 + 0x1a);
  lVar2 = param_1;
  func_0x0046d278();
  if ((*(byte *)(lVar2 + 0x34) & 1) == 0) {
    ppuVar1 = &PTR___tlv_bootstrap_00b2c5a0;
    (*(code *)PTR___tlv_bootstrap_00b2c5a0)();
    if (*ppuVar1 == *(undefined **)(param_1 + 0x38)) {
      FUN_0046c5f0(param_1);
    }
    else {
      uStack_28 = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x80) = 0;
      FUN_0046c624(*(undefined **)(param_1 + 0x38),&uStack_28);
      func_0x00467c64(&uStack_28);
    }
  }
  func_0x00467c1c(param_1 + 0xb8);
  func_0x00467c40(param_1 + 0xa8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x88);
  func_0x00467c64(param_1 + 0x80);
  func_0x00467bf8(param_1 + 0x70);
  FUN_00467dc8(param_1 + 0x68);
  FUN_00466354(param_1 + 0x58);
  FUN_00466dc4(param_1 + 0x48);
  func_0x0045a078(param_1 + 0x38);
  func_0x00467e68(param_1 + 0x20);
  func_0x00465c64(param_1 + 0x18);
  func_0x00467e8c(param_1 + 8);
  return param_1;
}



/* Entry: 00467384; end: 00467397;  */

void FUN_00467384(void)

{
  FUN_0046c6e0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00467398; end: 004675cb;  */

long FUN_00467398(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5,undefined4 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar4;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [40];
  undefined4 uStack_100;
  undefined8 uStack_d8;
  undefined1 uStack_80;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar1 = param_1;
  puVar2 = param_2;
  func_0x0046d278();
  func_0x0046d2d8();
  *(long *)(lVar1 + 0x18) = extraout_x8;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined4 *)(lVar1 + 0x30) = param_6;
  *(undefined2 *)(lVar1 + 0x34) = 0;
  lVar3 = puVar2[1];
  uVar4 = *puVar2;
  *(undefined8 *)(lVar1 + 0x40) = puVar2[1];
  *(undefined8 *)(lVar1 + 0x38) = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x0046cbb4();
    } while (extraout_w10 != 0);
  }
  lVar3 = param_3[1];
  uVar4 = *param_3;
  *(undefined8 *)(param_1 + 0x50) = param_3[1];
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x0046cbb4();
    } while (extraout_w10_00 != 0);
  }
  lVar3 = param_4[1];
  uVar4 = *param_4;
  *(undefined8 *)(param_1 + 0x60) = param_4[1];
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x0046cbb4();
    } while (extraout_w10_01 != 0);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_004678d0(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  FUN_005b9b40();
  FUN_005bc9cc();
  FUN_005b90a8(auStack_128,*(long *)(lVar1 + 0x18) + 0x80);
  FUN_005b9d8c(auStack_140,auStack_128);
  FUN_004575b8((undefined8 *)(param_1 + 0x88),auStack_140);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_140);
  *(undefined4 *)(param_1 + 0xa0) = uStack_100;
  *(undefined1 *)(param_1 + 0xa4) = uStack_80;
  uStack_148 = uStack_d8;
  uStack_14c = 0;
  FUN_00467908(auStack_140,param_2,&uStack_148,&uStack_14c);
  FUN_00467924((undefined8 *)(param_1 + 0x70),auStack_140);
  FUN_00467bf8(auStack_140);
  func_0x00465c30(auStack_128);
  return param_1;
}



/* Entry: 004675cc; end: 004677df;  */

void FUN_004675cc(long param_1)

{
  long *plVar1;
  int extraout_w10;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_220 [40];
  undefined4 uStack_1f8;
  undefined4 auStack_160 [2];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined1 auStack_140 [24];
  undefined1 uStack_128;
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [40];
  undefined4 uStack_d8;
  undefined1 auStack_a8 [48];
  undefined1 auStack_78 [24];
  char cStack_60;
  
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x0046ce9c(auStack_100);
  *(undefined4 *)(param_1 + 0x218) = uStack_d8;
  func_0x00465c30();
  if (*(long *)(param_1 + 0xe0) != 0) {
    func_0x0046ce9c();
    func_0x00465c30();
    if (cStack_60 == '\x01') {
      func_0x0046ce9c();
      FUN_004575fc(param_1 + 0x1c0,auStack_78);
      func_0x0046d118();
      puVar3 = *(undefined8 **)(param_1 + 0xe0);
      FUN_00425cb4(auStack_220,"");
      FUN_00425cb4(auStack_160,"");
      FUN_00459e04(auStack_120,param_1 + 0x1c0);
      auStack_140[0] = 0;
      uStack_128 = 0;
      (**(code **)*puVar3)
                (auStack_100,puVar3,auStack_220,param_1 + 0x88,auStack_160,auStack_120,auStack_140);
      FUN_00467eec(param_1 + 0x108,auStack_100);
      FUN_0046c560(auStack_100);
      FUN_00457530(auStack_140);
      FUN_00457530(auStack_120);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_160);
      func_0x0046d028();
      if (*(char *)(param_1 + 0x138) == '\x01') {
        func_0x005b87cc(lVar2,param_1 + 0x120);
      }
    }
    plVar1 = *(long **)(param_1 + 0xe0);
    if ((plVar1 != (long *)0x0) && ((**(code **)(*plVar1 + 8))(), (int)plVar1 != 0)) {
      *(undefined1 *)(lVar2 + 0x79) = 1;
    }
  }
  func_0x0046ce9c(auStack_100);
  FUN_00463600(param_1 + 0x1e0,auStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x200,auStack_100);
  FUN_00468160(param_1);
  uVar4 = *(undefined8 *)(param_1 + 0xd0);
  auStack_160[0] = *(undefined4 *)(param_1 + 0x30);
  uStack_150 = *(undefined8 *)(param_1 + 0x28);
  uStack_158 = *(undefined8 *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    do {
      func_0x0046cbb4();
    } while (extraout_w10 != 0);
  }
  func_0x0046ce9c(auStack_220);
  uStack_148 = uStack_1f8;
  FUN_00467f54(uVar4,auStack_160);
  func_0x00467e68(&uStack_158);
  func_0x0046d030();
  func_0x0046d118();
  return;
}



/* Entry: 004677e0; end: 004678b7;  */

long FUN_004677e0(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  func_0x0046d278();
  if ((*(byte *)(lVar1 + 0x34) & 1) == 0) {
    ppuVar2 = &PTR___tlv_bootstrap_00b2c5a0;
    (*(code *)PTR___tlv_bootstrap_00b2c5a0)();
    if (*ppuVar2 == *(undefined **)(param_1 + 0x38)) {
      FUN_0046c5f0(param_1);
    }
    else {
      uStack_28 = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x80) = 0;
      FUN_0046c624(*(undefined **)(param_1 + 0x38),&uStack_28);
      func_0x00467c64(&uStack_28);
    }
  }
  func_0x00467c1c(param_1 + 0xb8);
  func_0x00467c40(param_1 + 0xa8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x88);
  func_0x00467c64(param_1 + 0x80);
  func_0x00467bf8(param_1 + 0x70);
  FUN_00467dc8(param_1 + 0x68);
  FUN_00466354(param_1 + 0x58);
  FUN_00466dc4(param_1 + 0x48);
  func_0x0045a078(param_1 + 0x38);
  func_0x00467e68(param_1 + 0x20);
  func_0x00465c64(param_1 + 0x18);
  func_0x00467e8c(param_1 + 8);
  return param_1;
}



/* Entry: 004678b8; end: 004678bb;  */

long FUN_004678b8(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  undefined8 uStack_28;
  
  lVar2 = param_1;
  FUN_0046cf40(&UNK_009e6388);
  *unaff_x20 = extraout_x8;
  __ZNSt3__15mutexD1Ev(lVar2 + 0x220);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x200);
  FUN_00457530(param_1 + 0x1e0);
  FUN_00457530(param_1 + 0x1c0);
  FUN_0046c560(param_1 + 0x108);
  FUN_00457530(param_1 + 0xe8);
  func_0x0046c750(param_1 + 0xe0);
  func_0x0045a078(unaff_x20 + 0x1a);
  lVar2 = param_1;
  func_0x0046d278();
  if ((*(byte *)(lVar2 + 0x34) & 1) == 0) {
    ppuVar1 = &PTR___tlv_bootstrap_00b2c5a0;
    (*(code *)PTR___tlv_bootstrap_00b2c5a0)();
    if (*ppuVar1 == *(undefined **)(param_1 + 0x38)) {
      FUN_0046c5f0(param_1);
    }
    else {
      uStack_28 = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x80) = 0;
      FUN_0046c624(*(undefined **)(param_1 + 0x38),&uStack_28);
      func_0x00467c64(&uStack_28);
    }
  }
  func_0x00467c1c(param_1 + 0xb8);
  func_0x00467c40(param_1 + 0xa8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x88);
  func_0x00467c64(param_1 + 0x80);
  func_0x00467bf8(param_1 + 0x70);
  FUN_00467dc8(param_1 + 0x68);
  FUN_00466354(param_1 + 0x58);
  FUN_00466dc4(param_1 + 0x48);
  func_0x0045a078(param_1 + 0x38);
  func_0x00467e68(param_1 + 0x20);
  func_0x00465c64(param_1 + 0x18);
  func_0x00467e8c(param_1 + 8);
  return param_1;
}



/* Entry: 004678bc; end: 004678cf;  */

void FUN_004678bc(void)

{
  FUN_0046c6e0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004678d0; end: 00467907;  */

void FUN_004678d0(undefined8 *param_1)

{
  char *pcVar1;
  
  pcVar1 = segment_command_00000020.segname + 8;
  __Znwm();
  *(qword *)(pcVar1 + 0x18) = 0;
  *(qword *)(pcVar1 + 0x10) = 0;
  *(undefined8 *)(pcVar1 + 0x28) = 0;
  *(qword *)(pcVar1 + 0x20) = 0;
  *(qword *)(pcVar1 + 8) = 0;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  *(undefined4 *)(pcVar1 + 0x20) = 0x3f800000;
  *param_1 = pcVar1;
  return;
}



/* Entry: 00467908; end: 00467923;  */

void FUN_00467908(void)

{
  func_0x0046d264();
  FUN_00467960();
  return;
}



/* Entry: 00467924; end: 00467947;  */

void FUN_00467924(void)

{
  func_0x0046cf58();
  FUN_00467bf8();
  return;
}



/* Entry: 00467948; end: 0046794b;  */

long FUN_00467948(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  func_0x0046d278();
  if ((*(byte *)(lVar1 + 0x34) & 1) == 0) {
    ppuVar2 = &PTR___tlv_bootstrap_00b2c5a0;
    (*(code *)PTR___tlv_bootstrap_00b2c5a0)();
    if (*ppuVar2 == *(undefined **)(param_1 + 0x38)) {
      FUN_0046c5f0(param_1);
    }
    else {
      uStack_28 = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x80) = 0;
      FUN_0046c624(*(undefined **)(param_1 + 0x38),&uStack_28);
      func_0x00467c64(&uStack_28);
    }
  }
  func_0x00467c1c(param_1 + 0xb8);
  func_0x00467c40(param_1 + 0xa8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x88);
  func_0x00467c64(param_1 + 0x80);
  func_0x00467bf8(param_1 + 0x70);
  FUN_00467dc8(param_1 + 0x68);
  FUN_00466354(param_1 + 0x58);
  FUN_00466dc4(param_1 + 0x48);
  func_0x0045a078(param_1 + 0x38);
  func_0x00467e68(param_1 + 0x20);
  func_0x00465c64(param_1 + 0x18);
  func_0x00467e8c(param_1 + 8);
  return param_1;
}



/* Entry: 0046794c; end: 0046795f;  */

void FUN_0046794c(void)

{
  FUN_004677e0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00467960; end: 004679e3;  */

void FUN_00467960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar4 = auStack_50;
  func_0x0046cb34();
  uStack_38 = extraout_x8;
  func_0x0046d01c();
  FUN_004679f8();
  FUN_00467a44(uStack_40,param_2,param_3,param_4);
  func_0x0046d2f0();
  FUN_004679e4();
  FUN_00467be8();
  func_0x0046ca74(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0046ce90();
  FUN_00467be8();
  func_0x0046cc64();
  *extraout_x8_00 = puVar4;
  extraout_x8_00[1] = param_2;
  if ((puVar4 != (undefined1 *)0x0) &&
     ((*(long *)(puVar4 + 8) == 0 || (*(long *)(*(long *)(puVar4 + 8) + 8) == -1)))) {
    pcStack_58 = FUN_004679e4;
    lStack_68 = extraout_x8_00[1];
    if (lStack_68 != 0) {
      plVar1 = (long *)(lStack_68 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_70 = puVar4;
    puStack_60 = &stack0xfffffffffffffff0;
    FUN_00467ba8(puVar4,&puStack_70);
    FUN_00467bf8(&puStack_70);
    return;
  }
  return;
}



/* Entry: 004679e4; end: 004679f7;  */

void FUN_004679e4(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = param_1[1];
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_20 = param_2;
    FUN_00467ba8(param_2,&lStack_20);
    FUN_00467bf8(&lStack_20);
    return;
  }
  return;
}



/* Entry: 004679f8; end: 00467a17;  */

void FUN_004679f8(void)

{
  func_0x0046d004();
  FUN_00467a18();
  func_0x0046d010();
  return;
}



/* Entry: 00467a18; end: 00467a43;  */

void FUN_00467a18(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x2aaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 * 0x60);
    return;
  }
  FUN_0040cee8();
  func_0x0046cfdc();
  func_0x0046d204(&UNK_009e63c8);
  func_0x00467a9c();
  return;
}



/* Entry: 00467a44; end: 00467a77;  */

void FUN_00467a44(void)

{
  func_0x0046cfdc();
  func_0x0046d204(&UNK_009e63c8);
  func_0x00467a9c();
  return;
}



/* Entry: 00467a78; end: 00467a7b;  */

void FUN_00467a78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e63d8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00467a7c; end: 00467a8f;  */

void FUN_00467a7c(void)

{
  FUN_00467b0c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00467a90; end: 00467ae7;  */

undefined8 FUN_00467a90(long param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  
  lVar1 = param_1 + 0x18;
  func_0x0045a078(param_1 + 0x28);
  func_0x0046cd3c();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 00467ae8; end: 00467b0b;  */

void FUN_00467ae8(long param_1)

{
  func_0x0046cd3c();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 00467b0c; end: 00467b17;  */

void FUN_00467b0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e63d8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00467b18; end: 00467b3f;  */

undefined8 FUN_00467b18(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0045a078(param_1 + 0x10);
  func_0x0046cd3c();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 00467b40; end: 00467ba7;  */

void FUN_00467b40(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_20 = param_3;
    FUN_00467ba8(param_2,&uStack_20);
    FUN_00467bf8(&uStack_20);
    return;
  }
  return;
}



/* Entry: 00467ba8; end: 00467be7;  */

undefined8 FUN_00467ba8(undefined8 param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x0046cbb4();
    } while (extraout_w10 != 0);
  }
  func_0x0046d28c();
  FUN_00467ae8();
  return param_1;
}



/* Entry: 00467be8; end: 00467bf7;  */

void FUN_00467be8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00467bf8; end: 00467c83;  */

void FUN_00467bf8(long param_1)

{
  func_0x0046cd3c();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 00467c84; end: 00467c9b;  */

void FUN_00467c84(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_00467cb8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00467c9c; end: 00467cb7;  */

void FUN_00467c9c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_00467cb8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00467cb8; end: 00467daf;  */

undefined8 FUN_00467cb8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00467ce0(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x0046cf4c(param_1);
  FUN_00467db0();
  return unaff_x19;
}



/* Entry: 00467db0; end: 00467dc7;  */

void FUN_00467db0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00467dc8; end: 00467de7;  */

void FUN_00467dc8(void)

{
  func_0x0046cf4c();
  FUN_00467de8();
  return;
}



/* Entry: 00467de8; end: 00467dff;  */

void FUN_00467de8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00467e44(lVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1);
    return;
  }
  return;
}



/* Entry: 00467e00; end: 00467eaf;  */

void FUN_00467e00(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00467e44(param_2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_2);
  return;
}



/* Entry: 00467eb0; end: 00467eeb;  */

void FUN_00467eb0(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  return;
}



/* Entry: 00467eec; end: 00467f53;  */

void FUN_00467eec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x0046cd28();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_004575fc(param_1 + 3,param_2 + 3);
  FUN_00467fbc(unaff_x20 + 0x38,unaff_x19 + 0x38);
  FUN_004575fc(unaff_x20 + 0x60,unaff_x19 + 0x60);
  func_0x004680ac(unaff_x20 + 0x80,unaff_x19 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x19 + 0xa8);
  *(undefined4 *)(unaff_x20 + 0xb0) = *(undefined4 *)(unaff_x19 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar1;
  return;
}



/* Entry: 00467f54; end: 00467fbb;  */

void FUN_00467f54(void)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x9;
  ulong uVar2;
  long extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  long *unaff_x19;
  long alStack_88 [12];
  undefined8 uStack_28;
  
  func_0x0046cb00();
  uStack_28 = extraout_x8;
  func_0x0046c454(alStack_88);
  (**(code **)(*unaff_x19 + 0x10))();
  func_0x0046d050();
  func_0x0046ca74(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0046d050();
  func_0x0046cc64();
  func_0x0046cd28();
  func_0x0046801c();
  lVar1 = *unaff_x19;
  *unaff_x19 = 0;
  FUN_00468068(alStack_88,lVar1);
  func_0x0046cde0();
  if (extraout_x10 != 0) {
    func_0x0046d2a0();
    if ((bool)in_ZR) {
      uVar2 = extraout_x11 & extraout_x9;
    }
    else {
      uVar2 = extraout_x9;
      if (extraout_x10_00 <= extraout_x9) {
        uVar2 = 0;
        if (extraout_x10_00 != 0) {
          uVar2 = extraout_x9 / extraout_x10_00;
        }
        uVar2 = extraout_x9 - uVar2 * extraout_x10_00;
      }
    }
    *(undefined8 *)(alStack_88[0] + uVar2 * 8) = extraout_x8_00;
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  return;
}



/* Entry: 00467fbc; end: 00468067;  */

void FUN_00467fbc(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  ulong extraout_x9;
  ulong uVar1;
  long extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
  func_0x0046cd28();
  func_0x0046801c();
  *unaff_x19 = 0;
  FUN_00468068();
  func_0x0046cde0();
  if (extraout_x10 != 0) {
    func_0x0046d2a0();
    if ((bool)in_ZR) {
      uVar1 = extraout_x11 & extraout_x9;
    }
    else {
      uVar1 = extraout_x9;
      if (extraout_x10_00 <= extraout_x9) {
        uVar1 = 0;
        if (extraout_x10_00 != 0) {
          uVar1 = extraout_x9 / extraout_x10_00;
        }
        uVar1 = extraout_x9 - uVar1 * extraout_x10_00;
      }
    }
    *(undefined8 *)(*unaff_x20 + uVar1 * 8) = extraout_x8;
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  return;
}



/* Entry: 00468068; end: 0046807f;  */

void FUN_00468068(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00468080; end: 0046815f;  */

void FUN_00468080(undefined8 param_1,long *param_2)

{
  while (param_2 != (long *)0x0) {
    param_2 = (long *)*param_2;
    __ZdlPv();
  }
  return;
}



/* Entry: 00468160; end: 00468263;  */

void FUN_00468160(long param_1)

{
  undefined8 uVar1;
  int extraout_w10;
  long lVar2;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 auStack_48 [3];
  
  lVar2 = *(long *)(param_1 + 0x18);
  FUN_005b90a8(&uStack_110,lVar2 + 0x80);
  FUN_005bab28(auStack_48,&uStack_110,*(undefined1 *)(*(long *)(param_1 + 0x18) + 0x78),
               *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x79),param_1 + 0xa8,param_1 + 0xb8);
  func_0x005b8b84(lVar2,auStack_48);
  func_0x00465cf0(auStack_48);
  func_0x0046d030();
  FUN_005b8bb4(&uStack_110,*(undefined8 *)(param_1 + 0x18));
  FUN_00468264(param_1 + 0x20,&uStack_110);
  func_0x00467e68(&uStack_110);
  uStack_108 = *(undefined8 *)(param_1 + 0x28);
  uStack_110 = *(undefined8 *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    do {
      func_0x0046cbb4();
    } while (extraout_w10 != 0);
  }
  func_0x00468288(auStack_48,&uStack_110);
  uVar1 = auStack_48[0];
  auStack_48[0] = 0;
  FUN_00467de8(param_1 + 0x68,uVar1);
  FUN_00467dc8(auStack_48);
  func_0x00467e44(&uStack_110);
  return;
}



/* Entry: 00468264; end: 004682ef;  */

void FUN_00468264(void)

{
  func_0x0046cf58();
  func_0x00467e68();
  return;
}



/* Entry: 004682f0; end: 0046836f;  */

void FUN_004682f0(undefined8 param_1)

{
  undefined8 *unaff_x23;
  
  func_0x0046cf94();
  func_0x0046cd18();
  func_0x0046cf78();
  FUN_004683d0();
  *unaff_x23 = param_1;
  return;
}



/* Entry: 00468370; end: 004683cf;  */

void FUN_00468370(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  uStack_48 = 0;
  uStack_40 = 3;
  lVar1 = param_2;
  uStack_50 = param_3;
  func_0x0046cd18();
  uVar2 = *(undefined8 *)(param_2 + 8);
  lStack_38 = lVar1;
  FUN_0046bec4(uVar2,param_5,&uStack_50,param_4,0,0);
  *param_1 = uVar2;
  return;
}



/* Entry: 004683d0; end: 004683ff;  */

undefined8 FUN_004683d0(undefined8 param_1)

{
  int in_w5;
  
  FUN_00468400();
  if (in_w5 != 0) {
    FUN_00468490(param_1);
  }
  return param_1;
}



/* Entry: 00468400; end: 0046848f;  */

undefined8 *
FUN_00468400(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  code *extraout_x8;
  code *extraout_x9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0046cd48();
  (*extraout_x9)();
  func_0x0046cb14();
  func_0x0046d080();
  (*extraout_x8)();
  *param_1 = &PTR_FUN_009e6508;
  param_1[1] = param_4;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  param_1[5] = uStack_48;
  param_1[4] = uStack_50;
  param_1[7] = uStack_38;
  param_1[6] = uStack_40;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0x12] = 0;
  FUN_004684a8(uStack_50,param_1 + 9,param_1 + 0xb,param_1 + 0xf,param_5);
  return param_1;
}


