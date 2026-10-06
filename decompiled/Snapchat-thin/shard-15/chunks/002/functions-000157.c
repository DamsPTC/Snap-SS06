/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b948250; end: 10b94825f;  */

void FUN_10b948250(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  lVar3 = param_3;
  func_0x000105277f8c();
  plVar5 = *(long **)(lVar3 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + param_3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar5 = (long *)(*(long *)(lVar3 + 0x10) + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar5 = (long *)(*(long *)(lVar3 + 0x10) + 0x10);
  do {
    lVar6 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 + -1 == 0) {
    puVar4 = *(undefined8 **)(lVar3 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010b9482b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar4[3])(*puVar4,puVar4[1]);
    return;
  }
  return;
}



/* Entry: 10b948260; end: 10b9486b3;  */

void FUN_10b948260(long param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_3 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + param_1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar4 = (long *)(*(long *)(param_3 + 0x10) + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar4 = (long *)(*(long *)(param_3 + 0x10) + 0x10);
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    puVar3 = *(undefined8 **)(param_3 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010b9482b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar3[3])(*puVar3,puVar3[1]);
    return;
  }
  return;
}



/* Entry: 10b9486b4; end: 10b9488b7;  */

void FUN_10b9486b4(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long *unaff_x19;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 auStack_b8 [8];
  undefined1 *puStack_b0;
  code *pcStack_a8;
  uint uStack_9c;
  uint *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  uint auStack_80 [8];
  uint uStack_60;
  uint uStack_5c;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001137fd1e8 & 1) == 0) {
    iVar3 = 0x137fd1e8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      unaff_x19 = (long *)0x68;
      __Znwm();
      lVar6 = 0;
      *(undefined1 *)unaff_x19 = 0;
      unaff_x19[1] = (long)(unaff_x19 + 4);
      unaff_x19[3] = 4;
      unaff_x19[2] = 0;
      unaff_x19[6] = (long)&UNK_10dd5b8b0;
      unaff_x19[7] = 0;
      unaff_x19[8] = 0;
      unaff_x19[9] = 0;
      unaff_x19[0xb] = 0;
      unaff_x19[0xc] = 0;
      puStack_98 = auStack_80;
      uStack_88 = 8;
      uStack_90 = 0;
      plVar4 = unaff_x19;
      while( true ) {
        while( true ) {
          while( true ) {
            if (lVar6 == 0xa18) goto LAB_10b948890;
            uVar2 = *(uint *)(&UNK_10e5f8da0 + lVar6);
            lVar6 = lVar6 + 4;
            uVar1 = uVar2 >> 0x1d;
            uVar7 = (ulong)(uVar2 >> 0x15) & 0xff;
            uVar2 = uVar2 & 0x1fffff;
            uStack_9c = uVar2;
            if (uVar1 != 3) break;
            uStack_90 = 0;
            FUN_10b9488b8(&puStack_98,&uStack_9c);
            for (uVar8 = 1; uVar8 < uVar7; uVar8 = uVar8 + 1) {
              uStack_60 = *(uint *)(&UNK_10e5f8da0 + lVar6);
              lVar6 = lVar6 + 4;
              FUN_10b9488b8(&puStack_98,&uStack_60);
            }
            plVar4 = unaff_x19;
            param_2 = puStack_98;
            func_0x00010b997ea0(unaff_x19,puStack_98,uStack_90);
          }
          if (uVar1 != 2) break;
          for (uVar8 = 0; uVar8 != uVar7; uVar8 = uVar8 + 1) {
            uVar9 = *(uint *)(&UNK_10e5f8da0 + lVar6) & 0x1fffff;
            uVar1 = uVar9 + (*(uint *)(&UNK_10e5f8da0 + lVar6) >> 0x15 & 0xff);
            for (; uVar9 < uVar1; uVar9 = uVar9 + 1) {
              param_2 = &uStack_60;
              plVar4 = unaff_x19;
              uStack_60 = uVar9;
              uStack_5c = uVar2;
              func_0x00010b997ea0(unaff_x19,param_2,2);
            }
            lVar6 = lVar6 + 4;
          }
        }
        if (uVar1 != 1) break;
        uVar1 = (int)uVar7 + uVar2;
        for (; puVar5 = (uint *)(ulong)uVar2, uVar2 < uVar1; uVar2 = uVar2 + 1) {
          plVar4 = unaff_x19;
          FUN_10b997fa4();
          param_2 = puVar5;
        }
      }
      _abort();
      lVar6 = plVar4[1];
      if (lVar6 != plVar4[2]) {
        *(uint *)(*plVar4 + lVar6 * 4) = *param_2;
        plVar4[1] = lVar6 + 1;
        return;
      }
      pcStack_a8 = FUN_10b9488b8;
      puStack_b0 = &stack0xfffffffffffffff0;
      FUN_10b948908(auStack_b8);
      return;
    }
  }
  while( true ) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) break;
    ___stack_chk_fail(plRam00000001137fd1e0);
LAB_10b948890:
    FUN_10b998070(unaff_x19);
    FUN_10b8b04dc(&puStack_98);
    plRam00000001137fd1e0 = unaff_x19;
    ___cxa_guard_release(0x1137fd1e8);
  }
  return;
}



/* Entry: 10b9488b8; end: 10b948907;  */

void FUN_10b9488b8(long *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined1 auStack_18 [8];
  
  lVar1 = param_1[1];
  if (lVar1 != param_1[2]) {
    *(undefined4 *)(*param_1 + lVar1 * 4) = *param_2;
    param_1[1] = lVar1 + 1;
    return;
  }
  FUN_10b948908(auStack_18);
  return;
}



/* Entry: 10b948908; end: 10b948a1f;  */

void FUN_10b948908(long *param_1,long *param_2,long param_3,undefined4 *param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_78;
  long *plStack_70;
  long *plStack_68;
  
  lVar6 = *param_2;
  plVar3 = param_2;
  FUN_10b8aff74(param_2,1);
  plVar4 = param_2;
  func_0x00010b8affdc(param_2,plVar3);
  lVar1 = *param_2;
  lVar2 = param_2[1];
  plVar5 = plVar4;
  plStack_70 = param_2;
  plStack_68 = plVar3;
  if (((lVar1 != 0) && (plVar4 != (long *)0x0)) && (lVar1 != param_3)) {
    _memmove(plVar4,lVar1,param_3 - lVar1);
    plVar5 = (long *)((long)plVar4 + (param_3 - lVar1));
  }
  *(undefined4 *)plVar5 = *param_4;
  if ((param_3 != 0) && (lVar2 = lVar1 + lVar2 * 4, param_3 != lVar2)) {
    _memmove((long)plVar5 + 4,param_3,lVar2 - param_3);
  }
  uStack_78 = 0;
  if (lVar1 != 0) {
    FUN_10b8b0010(param_2,param_2,param_2[2]);
  }
  *param_2 = (long)plVar4;
  param_2[1] = param_2[1] + 1;
  param_2[2] = (long)plVar3;
  FUN_10b8b002c(&uStack_78);
  *param_1 = *param_2 + (param_3 - lVar6);
  return;
}



/* Entry: 10b948a20; end: 10b94a727;  */

undefined8 * FUN_10b948a20(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d78770;
  func_0x00010b948e9c(param_1 + 0xb);
  FUN_10b9a1f08(param_1 + 2);
  return param_1;
}



/* Entry: 10b94a728; end: 10b94a753;  */

undefined8 * FUN_10b94a728(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000104bd4df4(param_1 + 3);
  return param_1;
}



/* Entry: 10b94a754; end: 10b94a7ab;  */

void FUN_10b94a754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x000107c31068(&uStack_48);
  FUN_10b9a9084(&uStack_40,param_3);
  FUN_10b94a7ac(param_1,&uStack_48);
  func_0x0001080d579c(&uStack_48);
  return;
}



/* Entry: 10b94a7ac; end: 10b94a837;  */

long FUN_10b94a7ac(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10b94aaf0();
    lVar2 = uVar1 + 0x18;
  }
  else {
    lVar2 = param_1;
    FUN_10b94ab18();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x18;
}



/* Entry: 10b94a838; end: 10b94a8db;  */

void FUN_10b94a838(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 *puStack_38;
  
  puVar1 = (undefined8 *)param_2[1];
  puVar3 = param_2;
  for (puVar6 = (undefined8 *)*param_2; puVar6 != puVar1; puVar6 = puVar6 + 3) {
    puVar3 = puVar6;
    FUN_10b94a754(param_1,puVar6,puVar6 + 1);
  }
  lVar5 = param_2[3];
  lVar2 = lVar5 + 0x10;
  func_0x00010527d444();
  lVar4 = *(long *)(lVar5 + 0x10);
  lVar5 = *(long *)(lVar5 + 0x28);
  lStack_40 = lVar2;
  puStack_38 = puVar3;
  while (puVar6 = puStack_38, lStack_40 != lVar4 + lVar5) {
    FUN_10b9a9358(&uStack_48,puStack_38 + 1);
    func_0x00010b94a7e8(param_1,puVar6,&uStack_48);
    func_0x000107c278f8(uStack_48);
    func_0x00010527d4cc(&lStack_40);
  }
  return;
}



/* Entry: 10b94a8dc; end: 10b94aa17;  */

void FUN_10b94a8dc(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  FUN_10b9a8f54(&puStack_88,param_2 + 0x18);
  FUN_10b9a989c(&lStack_78,&puStack_88);
  FUN_10b9a8d98(&puStack_88);
  *param_1 = 0;
  for (lVar2 = lStack_78; lVar2 != lStack_70; lVar2 = lVar2 + 8) {
    lVar1 = lVar2;
    func_0x0001080ce754(*(long *)(param_2 + 0x18) + 0x10,lVar2);
    FUN_10b9a6368(&uStack_a8,param_1,lVar2);
    puStack_88 = &UNK_10f7ce6fd;
    uStack_80 = 3;
    FUN_10b9a63dc(&uStack_a0,&uStack_a8,&puStack_88);
    FUN_10b9a9358(&uStack_b0,lVar1 + 8);
    FUN_10b9a6368(&uStack_98,&uStack_a0,&uStack_b0);
    puStack_c0 = &UNK_10f7ce701;
    uStack_b8 = 1;
    FUN_10b9a63dc(&uStack_90,&uStack_98,&puStack_c0);
    func_0x000107c31060(param_1,&uStack_90);
    func_0x000107c278f8(uStack_90);
    func_0x000107c278f8(uStack_98);
    func_0x000107c278f8(uStack_b0);
    func_0x000107c278f8(uStack_a0);
    func_0x000107c278f8(uStack_a8);
  }
  func_0x000104bfe1e0(&lStack_78);
  return;
}



/* Entry: 10b94aa18; end: 10b94aaef;  */

void FUN_10b94aa18(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined *puStack_58;
  ulong uStack_50;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  bVar2 = true;
  plVar1 = (long *)param_2[1];
  for (plVar4 = (long *)*param_2; plVar4 != plVar1; plVar4 = plVar4 + 3) {
    if (!bVar2) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (param_1,&UNK_10f7ce703);
    }
    lVar3 = *plVar4;
    if (lVar3 == 0) {
      uStack_50 = 0;
      puStack_58 = &UNK_10f7d0ef0;
    }
    else {
      uStack_50 = (ulong)*(uint *)(lVar3 + 0xc);
      puStack_58 = (undefined *)(lVar3 + 0x18);
    }
    func_0x000108120a18(param_1,&puStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (param_1,&UNK_10f7ce706);
    FUN_10b9a9964(&puStack_58,plVar4 + 1,1);
    func_0x0001080e753c(param_1,&puStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_58);
    bVar2 = false;
  }
  return;
}



/* Entry: 10b94aaf0; end: 10b94ab17;  */

void FUN_10b94aaf0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_10b94abac();
  *(long *)(param_1 + 8) = lVar1 + 0x18;
  return;
}



/* Entry: 10b94ab18; end: 10b94abab;  */

long FUN_10b94ab18(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010b94ae78();
  FUN_10b94abd8();
  FUN_10b94acbc(auStack_58,param_1,(unaff_x20[1] - *unaff_x20) / 0x18,unaff_x20 + 2);
  FUN_10b94abac(lStack_48);
  lStack_48 = lStack_48 + 0x18;
  FUN_10b94ac28();
  lVar1 = unaff_x20[1];
  func_0x00010b94adf0(auStack_58);
  return lVar1;
}



/* Entry: 10b94abac; end: 10b94abd7;  */

undefined8 * FUN_10b94abac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0;
  func_0x00010b9a8fa8(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10b94abd8; end: 10b94ac27;  */

long * FUN_10b94abd8(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    uVar1 = (param_1[2] - *param_1) / 0x18;
    plVar3 = (long *)(uVar1 * 2);
    if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
      plVar3 = param_2;
    }
    if (0x555555555555554 < uVar1) {
      plVar3 = (long *)0xaaaaaaaaaaaaaaa;
    }
    return plVar3;
  }
  FUN_10b94acb0();
  func_0x00010b94ae78();
  plVar3 = param_1 + 2;
  lVar4 = param_2[1] + ((param_1[1] - *param_1) / -0x18) * 0x18;
  FUN_10b94ad58(plVar3,*param_1,param_1[1],lVar4);
  unaff_x19[1] = lVar4;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return plVar3;
}



/* Entry: 10b94ac28; end: 10b94acaf;  */

void FUN_10b94ac28(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010b94ae78();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18;
  FUN_10b94ad58(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10b94acb0; end: 10b94acbb;  */

long * FUN_10b94acb0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  _abort();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b94ad08();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 10b94acbc; end: 10b94ad2b;  */

long * FUN_10b94acbc(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b94ad08();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 10b94ad2c; end: 10b94ad57;  */

void FUN_10b94ad2c(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  
  if (0xaaaaaaaaaaaaaaa < param_2) {
    func_0x000104bfe188();
    for (uVar1 = param_2; uVar1 != param_3; uVar1 = uVar1 + 0x18) {
      FUN_10b94abac(param_4,uVar1);
      param_4 = param_4 + 0x18;
    }
    for (; param_2 != param_3; param_2 = param_2 + 0x18) {
      func_0x0001080d579c();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
  return;
}



/* Entry: 10b94ad58; end: 10b94adbf;  */

void FUN_10b94ad58(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (lVar1 = param_2; lVar1 != param_3; lVar1 = lVar1 + 0x18) {
    FUN_10b94abac(param_4,lVar1);
    param_4 = param_4 + 0x18;
  }
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x0001080d579c();
  }
  return;
}



/* Entry: 10b94adc0; end: 10b94ae1b;  */

void FUN_10b94adc0(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x0001080d579c();
  }
  return;
}



/* Entry: 10b94ae1c; end: 10b94ae23;  */

void FUN_10b94ae1c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b94ae78(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    func_0x0001080d579c();
  }
  return;
}



/* Entry: 10b94ae24; end: 10b94ae57;  */

void FUN_10b94ae24(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b94ae78();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    func_0x0001080d579c();
  }
  return;
}



/* Entry: 10b94ae58; end: 10b94ae83;  */

void FUN_10b94ae58(void)

{
  return;
}



/* Entry: 10b94ae84; end: 10b94cf93;  */

void FUN_10b94ae84(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b94aec4(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010b94b23c(&uStack_30);
  return;
}



/* Entry: 10b94cf94; end: 10b94cffb;  */

void FUN_10b94cf94(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [8];
  
  func_0x00010b94d76c();
  _strlen();
  func_0x000107c31078(auStack_38,param_1,&stack0xffffffffffffffb8);
  func_0x00010b94d760(*(undefined8 *)(**(long **)(unaff_x20 + 0x10) + 0x18));
  func_0x00010b94d74c();
  return;
}



/* Entry: 10b94cffc; end: 10b94d033;  */

void FUN_10b94cffc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110d78a30;
  param_1[1] = 1;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar5;
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



/* Entry: 10b94d034; end: 10b94d06b;  */

undefined8 * FUN_10b94d034(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d78a30;
  if (param_1[3] != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b94d06c; end: 10b94d06f;  */

undefined8 * FUN_10b94d06c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d78a30;
  if (param_1[3] != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b94d070; end: 10b94d083;  */

void FUN_10b94d070(void)

{
  FUN_10b94d034();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b94d084; end: 10b94d0d7;  */

void FUN_10b94d084(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [8];
  
  func_0x00010b94d76c(param_1,&UNK_10f7ce708);
  _strlen();
  func_0x000107c31078(auStack_38,param_1,&stack0xffffffffffffffb8);
  func_0x00010b94d760(*(undefined8 *)(**(long **)(unaff_x20 + 0x10) + 0x18));
  func_0x00010b94d74c();
  return;
}



/* Entry: 10b94d0d8; end: 10b94d2b3;  */

byte FUN_10b94d0d8(void)

{
  undefined ***pppuVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  long *unaff_x19;
  long unaff_x20;
  byte unaff_w21;
  ulong *puVar5;
  long lVar6;
  undefined8 auStack_c8 [3];
  undefined1 auStack_b0 [24];
  undefined **ppuStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  long lStack_68;
  char cStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined8 *puStack_40;
  ulong *puStack_38;
  
  func_0x00010b94d76c();
  ppuStack_98 = (undefined **)&UNK_10f7ce7e7;
  uStack_90 = 0x19;
  func_0x000107c31078(&uStack_48);
  puStack_40 = (undefined8 *)CONCAT44(puStack_40._4_4_,3);
  ppuStack_98 = (undefined **)0x0;
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x000104bd909c(auStack_c8,&puStack_40,&ppuStack_98);
  func_0x00010b9a8f90(auStack_58,auStack_c8);
  func_0x000104bdb3b0(auStack_c8[0]);
  if (ppuStack_98 != (undefined **)0x0) {
    (**(code **)(*ppuStack_98 + 0x18))();
  }
  (**(code **)(**(long **)(unaff_x20 + 0x10) + 0x30))
            (&lStack_68,*(long **)(unaff_x20 + 0x10),&uStack_48,auStack_58);
  if (cStack_60 == '\n') {
    ppuStack_98 = &PTR_FUN_110d79080;
    uStack_90 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    pppuVar1 = &ppuStack_98;
    func_0x000107c3034c(pppuVar1,*(undefined8 *)(lStack_68 + 0x20),*(undefined4 *)(lStack_68 + 0x28)
                       );
    if ((int)pppuVar1 != 0) {
      puVar5 = &uStack_88;
      if ((uStack_88 & 1) != 0) {
        puVar5 = (ulong *)(uStack_88 + 7);
      }
      lVar6 = (long)(int)uStack_80 << 3;
      do {
        if (lVar6 == 0) {
          unaff_w21 = (int)uStack_80 == 0;
          goto LAB_10b94d274;
        }
        puVar4 = (ulong *)*puVar5;
        if (*(char *)((long)puVar4 + 0x17) < '\0') {
          puVar4 = (ulong *)*puVar4;
        }
        plVar2 = unaff_x19;
        FUN_10b9a60f4();
        puVar5 = puVar5 + 1;
        lVar6 = lVar6 + -8;
      } while ((int)plVar2 == 0);
      FUN_10b99dc78();
      FUN_10b9a5e5c(auStack_c8);
      puVar3 = auStack_c8;
      func_0x000107c27e5c();
      puStack_40 = puVar3;
      puStack_38 = puVar4;
      func_0x000107c2793c(&UNK_10f7ce801);
      func_0x000107c3173c(auStack_b0);
      (**(code **)(*plVar2 + 0x28))(plVar2,0,auStack_b0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
      unaff_w21 = 1;
    }
LAB_10b94d274:
    FUN_10b952698(&ppuStack_98);
    if (((ulong)pppuVar1 & 1) != 0) goto LAB_10b94d284;
  }
  unaff_w21 = 1;
LAB_10b94d284:
  FUN_10b9a8d98(&lStack_68);
  FUN_10b9a8d98(auStack_58);
  func_0x000107c278f8(uStack_48);
  return unaff_w21 & 1;
}



/* Entry: 10b94d2b4; end: 10b94d2cb;  */

void FUN_10b94d2b4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [8];
  
  func_0x00010b94d76c(param_1,&UNK_10f7ce81d);
  _strlen();
  func_0x000107c31078(auStack_38,param_1,&stack0xffffffffffffffb8);
  func_0x00010b94d760(*(undefined8 *)(**(long **)(unaff_x20 + 0x10) + 0x18));
  func_0x00010b94d74c();
  return;
}



/* Entry: 10b94d2cc; end: 10b94d363;  */

void FUN_10b94d2cc(long param_1)

{
  int iVar1;
  
  if ((bRam0000000113846860 & 1) == 0) {
    iVar1 = 0x13846860;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31084();
      func_0x000107c31078(0x113846858);
      ___cxa_guard_release(0x113846860);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010b94d308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),0x113846858,0);
  return;
}



/* Entry: 10b94d364; end: 10b94d39b;  */

void FUN_10b94d364(void)

{
  func_0x00010b94d758();
  func_0x00010b94d730(&UNK_10f7ce896);
  func_0x00010b94d718();
  func_0x00010b94d74c();
  return;
}



/* Entry: 10b94d39c; end: 10b94d3a7;  */

void FUN_10b94d39c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [8];
  
  func_0x00010b94d76c(param_1,&UNK_10f7ce8be);
  _strlen();
  func_0x000107c31078(auStack_38,param_1,&stack0xffffffffffffffb8);
  func_0x00010b94d760(*(undefined8 *)(**(long **)(unaff_x20 + 0x10) + 0x18));
  func_0x00010b94d74c();
  return;
}



/* Entry: 10b94d3a8; end: 10b94d487;  */

void FUN_10b94d3a8(void)

{
  func_0x00010b94d758();
  func_0x00010b94d730(&UNK_10f7ce8dd);
  func_0x00010b94d718();
  func_0x00010b94d74c();
  return;
}



/* Entry: 10b94d488; end: 10b94d493;  */

void FUN_10b94d488(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [8];
  
  func_0x00010b94d76c(param_1,&UNK_10f7ce973);
  _strlen();
  func_0x000107c31078(auStack_38,param_1,&stack0xffffffffffffffb8);
  func_0x00010b94d760(*(undefined8 *)(**(long **)(unaff_x20 + 0x10) + 0x18));
  func_0x00010b94d74c();
  return;
}



/* Entry: 10b94d494; end: 10b94d4e3;  */

bool FUN_10b94d494(void)

{
  long *plVar1;
  long unaff_x19;
  undefined8 uStack_28;
  
  func_0x00010b94d758();
  func_0x00010b94d730(&UNK_10f7ce998);
  plVar1 = *(long **)(unaff_x19 + 0x10);
  func_0x00010b94d760(*(undefined8 *)(*plVar1 + 0x28));
  func_0x000107c278f8(uStack_28);
  return 0 < (int)plVar1;
}



/* Entry: 10b94d4e4; end: 10b94d4ef;  */

void FUN_10b94d4e4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [8];
  
  func_0x00010b94d76c(param_1,&UNK_10f7ce9c2);
  _strlen();
  func_0x000107c31078(auStack_38,param_1,&stack0xffffffffffffffb8);
  func_0x00010b94d760(*(undefined8 *)(**(long **)(unaff_x20 + 0x10) + 0x18));
  func_0x00010b94d74c();
  return;
}



/* Entry: 10b94d4f0; end: 10b94d6bb;  */

bool FUN_10b94d4f0(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  char ******ppppppcVar5;
  long lVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long lStack_58;
  long *plStack_50;
  long lStack_48;
  char *****pppppcStack_40;
  ulong uStack_38;
  
  if ((bRam00000001137fd1f8 & 1) == 0) {
    iVar3 = 0x137fd1f8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107c31084();
      pppppcStack_40 = (char *****)0x10f241d73;
      uStack_38 = 0x23;
      func_0x000107c31078(0x1137fd1f0);
      ___cxa_guard_release(0x1137fd1f8);
    }
  }
  pppppcStack_40 = (char *****)0x0;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
            (&lStack_48,*(long **)(param_1 + 0x10),0x1137fd1f0,&pppppcStack_40);
  func_0x000107c278f8(pppppcStack_40);
  if ((lStack_48 == 0) || (*(uint *)(lStack_48 + 0xc) == 0)) {
    bVar7 = false;
  }
  else {
    lVar6 = *param_2;
    if (lVar6 == 0) {
      pppppcStack_40 = (char *****)&UNK_10f7d0ef0;
      uStack_38 = 0;
    }
    else {
      pppppcStack_40 = (char *****)(lVar6 + 0x18);
      uStack_38 = (ulong)*(uint *)(lVar6 + 0xc);
    }
    lStack_58 = lStack_48 + 0x18;
    plVar8 = (long *)0x0;
    plStack_50 = (long *)(ulong)*(uint *)(lStack_48 + 0xc);
    while (bVar7 = plVar8 <= plStack_50, plVar8 <= plStack_50) {
      plVar4 = &lStack_58;
      func_0x0001089f8ee8(plVar4,0x2c,plVar8);
      plVar2 = plStack_50;
      if (plVar4 != (long *)0xffffffffffffffff) {
        plVar2 = plVar4;
      }
      plVar4 = &lStack_58;
      func_0x000107c28524(plVar4,plVar8,(long)plVar2 - (long)plVar8);
      plVar1 = (long *)((long)plVar4 + (long)plVar8);
      for (; (plVar9 = plVar1, plVar8 != (long *)0x0 && (plVar9 = plVar4, (char)*plVar4 == ' '));
          plVar4 = (long *)((long)plVar4 + 1)) {
        plVar8 = (long *)((long)plVar8 + -1);
      }
      for (; plVar8 != (long *)0x0; plVar8 = (long *)((long)plVar8 + -1)) {
        if (((char *)((long)plVar9 + -1))[(long)plVar8] != ' ') {
          if (((char *)((long)plVar9 + -1))[(long)plVar8] == '$') {
            ppppppcVar5 = (char ******)pppppcStack_40;
            if (plVar8 == (long *)0x1) break;
          }
          else {
            ppppppcVar5 = &pppppcStack_40;
            func_0x000107c28524(ppppppcVar5,0,plVar8);
          }
          func_0x00010812e298();
          if (((ulong)ppppppcVar5 & 1) != 0) goto LAB_10b94d65c;
          break;
        }
      }
      plVar8 = (long *)((long)plVar2 + 1);
    }
  }
LAB_10b94d65c:
  func_0x000107c278f8(lStack_48);
  return bVar7;
}



/* Entry: 10b94d6bc; end: 10b94d6d3;  */

void FUN_10b94d6bc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [8];
  
  func_0x00010b94d76c(param_1,&UNK_10f7ce9e4);
  _strlen();
  func_0x000107c31078(auStack_38,param_1,&stack0xffffffffffffffb8);
  func_0x00010b94d760(*(undefined8 *)(**(long **)(unaff_x20 + 0x10) + 0x18));
  func_0x00010b94d74c();
  return;
}



/* Entry: 10b94d6d4; end: 10b94d717;  */

void FUN_10b94d6d4(void)

{
  long unaff_x19;
  
  func_0x00010b94d758();
  func_0x00010b94d730(&UNK_10f7cea31);
  func_0x00010b94d760(*(undefined8 *)(**(long **)(unaff_x19 + 0x10) + 0x28));
  func_0x00010b94d74c();
  return;
}



/* Entry: 10b94d718; end: 10b94d777;  */

void FUN_10b94d718(void)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x00010b94d72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(unaff_x19 + 0x10) + 0x18))
            (*(long **)(unaff_x19 + 0x10),&stack0x00000018,1);
  return;
}



/* Entry: 10b94d778; end: 10b94f8cb;  */

long * FUN_10b94d778(undefined8 param_1,undefined8 param_2,long *param_3,undefined1 *param_4,
                    long param_5,undefined8 param_6)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  long lStack_78;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_4;
  lVar5 = param_5;
  FUN_10b8b4ed8(&lStack_78,param_4 + 0x90);
  if (lStack_78 == 1) {
    if (*(long *)(param_4 + 0x18) == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = (*(byte *)(*(long *)(param_4 + 0x18) + 0x230) & 3) == 2;
    }
    puVar4 = auStack_70;
    (**(code **)(*param_3 + 0x28))(param_1,param_2,param_3,puVar4,param_5,param_6,bVar1);
    lVar5 = param_5;
  }
  plVar2 = &lStack_78;
  func_0x0001080cfc70();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar2;
  }
  ___stack_chk_fail();
  *plVar2 = (long)&PTR_DAT_110d78a90;
  plVar2[1] = 1;
  plVar2[2] = (long)puVar4;
  plVar2[3] = lVar5;
  plVar3 = plVar2;
  func_0x00010b8c2a68();
  func_0x00010b8c3770();
  plVar2[4] = (long)plVar3;
  plVar2[5] = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  return plVar2;
}



/* Entry: 10b94f8cc; end: 10b94f91b;  */

void FUN_10b94f8cc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110d78da8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = &UNK_10dd5b8b0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = &UNK_10dd5b8b0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  param_1[0x10] = 0x32aaaba7;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  return;
}



/* Entry: 10b94f91c; end: 10b94f96b;  */

undefined8 * FUN_10b94f91c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d78da8;
  FUN_10b9a1f08(param_1 + 0x10);
  FUN_10b8d4a24(param_1 + 10);
  func_0x000108138894(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b94f96c; end: 10b94f96f;  */

undefined8 * FUN_10b94f96c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d78da8;
  FUN_10b9a1f08(param_1 + 0x10);
  FUN_10b8d4a24(param_1 + 10);
  func_0x000108138894(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b94f970; end: 10b94f983;  */

void FUN_10b94f970(void)

{
  FUN_10b94f91c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b94f984; end: 10b94f9eb;  */

void FUN_10b94f984(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long lStack_30;
  long lStack_28;
  
  func_0x00010b94fea8();
  lVar1 = unaff_x19 + 0x50;
  FUN_10b8d4834();
  lVar2 = *(long *)(unaff_x19 + 0x50);
  lVar3 = *(long *)(unaff_x19 + 0x68);
  lStack_30 = lVar1;
  lStack_28 = param_2;
  while (lStack_30 != lVar2 + lVar3) {
    func_0x00010b950a68(*(undefined8 *)(lStack_28 + 8));
    FUN_10b8d4860(&lStack_30);
  }
  __ZNSt3__15mutex6unlockEv(unaff_x19 + 0x80);
  return;
}



/* Entry: 10b94f9ec; end: 10b94fa63;  */

void FUN_10b94f9ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b94fea8();
  func_0x00010813843c(unaff_x19 + 0x20,param_2);
  func_0x000107c31068();
  lVar1 = unaff_x19 + 0x50;
  FUN_10b94fa64(lVar1,param_2);
  if (*(long *)(unaff_x19 + 0x50) + *(long *)(unaff_x19 + 0x68) != lVar1) {
    FUN_10b94fa94(unaff_x19 + 0x50,lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x80);
  return;
}



/* Entry: 10b94fa64; end: 10b94fa93;  */

void FUN_10b94fa64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  uVar1 = param_1;
  FUN_10b8d544c();
  FUN_10b8d5988(param_1,param_2,uVar1,auStack_28);
  if ((int)param_1 == 0) {
    func_0x00010b8d75e0();
  }
  else {
    func_0x00010b8d743c();
  }
  return;
}



/* Entry: 10b94fa94; end: 10b94fdb7;  */

undefined1  [16] FUN_10b94fa94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b94fe98();
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_10b8d4860(&uStack_40);
  func_0x00010b94fd80();
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 10b94fdb8; end: 10b94febf;  */

void FUN_10b94fdb8(long *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = 0;
  param_1[2] = param_1[2] + -1;
  puVar3 = (undefined1 *)((long)param_2 + (-8 - *param_1));
  uVar5 = *(ulong *)(*param_1 + ((ulong)puVar3 & param_1[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar4;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)puVar3) + 1) = uVar4;
  param_1[5] = param_1[5] + uVar2;
  return;
}



/* Entry: 10b94fec0; end: 10b950307;  */

undefined8 * FUN_10b94fec0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_110d78df0;
  func_0x0001080c5c5c(param_1 + 0xb);
  FUN_10b9a1f08(param_1 + 2);
  return param_1;
}



/* Entry: 10b950308; end: 10b9504d7;  */

long * FUN_10b950308(undefined8 *param_1,long param_2,long *param_3,long param_4,long *param_5,
                    long *param_6,undefined8 param_7,long *param_8)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long lVar6;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [16];
  long lStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  long *plStack_78;
  undefined8 uStack_58;
  
  plVar4 = &lStack_c0;
  func_0x00010b950a04();
  uStack_58 = extraout_x8;
  func_0x00010b951e90();
  lStack_c0 = *param_5;
  if ((lStack_c0 != 0) && (*(long *)(lStack_c0 + 0x10) != 0)) {
    do {
      func_0x00010b9509b8();
      lStack_c0 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  lStack_b8 = *param_8;
  if ((lStack_b8 != 0) && (*(long *)(lStack_b8 + 0x10) != 0)) {
    do {
      func_0x00010b9509b8();
      lStack_b8 = extraout_x8_01;
    } while (extraout_w11_00 != 0);
  }
  if (param_2 != 0) {
    plVar3 = (long *)(param_2 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lStack_b0 = param_2;
  func_0x0001080da434();
  lStack_a8 = param_4;
  FUN_10b9a8f04(auStack_a0,param_7);
  lVar6 = *param_6;
  if (lVar6 != 0) {
    do {
      func_0x00010b9509c8();
    } while (extraout_w10 != 0);
  }
  uStack_88 = 0x10b9506dc;
  ppuStack_80 = &PTR_FUN_110d78ef0;
  plVar3 = (long *)0x38;
  lStack_90 = lVar6;
  __Znwm();
  lVar5 = lStack_c0;
  if ((lStack_c0 != 0) && (*(long *)(lStack_c0 + 0x10) != 0)) {
    do {
      func_0x00010b9509b8();
      lVar5 = extraout_x8_02;
    } while (extraout_w11_01 != 0);
  }
  *plVar3 = lVar5;
  lVar5 = lStack_b8;
  if ((lStack_b8 != 0) && (*(long *)(lStack_b8 + 0x10) != 0)) {
    do {
      func_0x00010b9509b8();
      lVar5 = extraout_x8_03;
    } while (extraout_w11_02 != 0);
  }
  plVar3[1] = lVar5;
  plVar3[3] = lStack_a8;
  plVar3[2] = lStack_b0;
  lStack_b0 = 0;
  lStack_a8 = 0;
  FUN_10b9a8f04(plVar3 + 4,auStack_a0);
  if (lVar6 != 0) {
    do {
      func_0x00010b9509c8();
    } while (extraout_w10_00 != 0);
  }
  plVar3[6] = lVar6;
  plStack_78 = plVar3;
  (**(code **)(*param_3 + 0xa8))(param_3,&uStack_88);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  FUN_10b9504d8();
  *param_1 = 1;
  func_0x00010b9509d8(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c278f4(plVar4 + 6);
    FUN_10b9a8d98(plVar4 + 4);
    func_0x0001080da474(plVar4 + 3);
    FUN_10b950874(plVar4 + 2);
    func_0x00010b8b5d14(plVar4 + 1);
    func_0x0001080c5c80(*plVar4);
    return plVar4;
  }
  return plVar4;
}



/* Entry: 10b9504d8; end: 10b95051f;  */

undefined8 * FUN_10b9504d8(undefined8 *param_1)

{
  func_0x000107c278f4(param_1 + 6);
  FUN_10b9a8d98(param_1 + 4);
  func_0x0001080da474(param_1 + 3);
  FUN_10b950874(param_1 + 2);
  func_0x00010b8b5d14(param_1 + 1);
  func_0x0001080c5c80(*param_1);
  return param_1;
}



/* Entry: 10b950520; end: 10b9506a3;  */

long * FUN_10b950520(long param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5,
                    long *param_6)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long lVar5;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  undefined8 uStack_48;
  
  func_0x00010b950a04();
  uStack_48 = extraout_x8;
  func_0x00010b951e90();
  lStack_98 = *param_4;
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x00010b9509b8();
      lStack_98 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  lStack_90 = *param_6;
  if ((lStack_90 != 0) && (*(long *)(lStack_90 + 0x10) != 0)) {
    do {
      func_0x00010b9509b8();
      lStack_90 = extraout_x8_01;
    } while (extraout_w11_00 != 0);
  }
  if (param_1 != 0) {
    plVar3 = (long *)(param_1 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar5 = *param_5;
  lStack_88 = param_1;
  if (lVar5 != 0) {
    do {
      func_0x00010b9509c8();
    } while (extraout_w10 != 0);
  }
  pcStack_78 = FUN_10b9508c0;
  ppuStack_70 = &PTR_FUN_110d78f10;
  plVar3 = (long *)0x20;
  lStack_80 = lVar5;
  __Znwm();
  lVar4 = lStack_98;
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x00010b9509b8();
      lVar4 = extraout_x8_02;
    } while (extraout_w11_01 != 0);
  }
  *plVar3 = lVar4;
  lVar4 = lStack_90;
  if ((lStack_90 != 0) && (*(long *)(lStack_90 + 0x10) != 0)) {
    do {
      func_0x00010b9509b8();
      lVar4 = extraout_x8_03;
    } while (extraout_w11_02 != 0);
  }
  plVar3[1] = lVar4;
  plVar3[2] = lStack_88;
  lStack_88 = 0;
  if (lVar5 != 0) {
    do {
      func_0x00010b9509c8();
    } while (extraout_w10_00 != 0);
  }
  plVar3[3] = lVar5;
  plStack_68 = plVar3;
  (**(code **)(*param_2 + 0xa8))(param_2,&pcStack_78);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  plVar3 = &lStack_98;
  FUN_10b9506a4();
  func_0x00010b9509d8(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c278f4(plVar3 + 3);
    FUN_10b950874(plVar3 + 2);
    func_0x00010b8b5d14(plVar3 + 1);
    func_0x0001080c5c80(*plVar3);
    return plVar3;
  }
  return plVar3;
}



/* Entry: 10b9506a4; end: 10b95075f;  */

undefined8 * FUN_10b9506a4(undefined8 *param_1)

{
  func_0x000107c278f4(param_1 + 3);
  FUN_10b950874(param_1 + 2);
  func_0x00010b8b5d14(param_1 + 1);
  func_0x0001080c5c80(*param_1);
  return param_1;
}



/* Entry: 10b950760; end: 10b95077f;  */

void FUN_10b950760(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b9504d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b950780; end: 10b950783;  */

void FUN_10b950780(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b950784; end: 10b950873;  */

void FUN_10b950784(undefined8 *param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long *plVar7;
  
  plVar7 = *(long **)(param_2 + 8);
  *param_1 = &PTR_FUN_110d78ef0;
  plVar5 = (long *)0x38;
  __Znwm();
  lVar6 = *plVar7;
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
    do {
      FUN_10b9509b8();
      lVar6 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *plVar5 = lVar6;
  lVar6 = plVar7[1];
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
    do {
      FUN_10b9509b8();
      lVar6 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  plVar5[1] = lVar6;
  lVar6 = plVar7[2];
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar5[2] = lVar6;
  lVar6 = plVar7[3];
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
    do {
      FUN_10b9509b8();
      lVar6 = extraout_x8_01;
    } while (extraout_w11_01 != 0);
  }
  plVar5[3] = lVar6;
  FUN_10b9a8f04(plVar5 + 4,plVar7 + 4);
  lVar6 = plVar7[6];
  if (lVar6 != 0) {
    piVar2 = (int *)(lVar6 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar5[6] = lVar6;
  param_1[1] = plVar5;
  return;
}



/* Entry: 10b950874; end: 10b9508bf;  */

long * FUN_10b950874(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  return param_1;
}



/* Entry: 10b9508c0; end: 10b9508db;  */

void FUN_10b9508c0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010b9508d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x10) + 0x38))
            (*(long **)(lVar1 + 0x10),lVar1,lVar1 + 0x18,lVar1 + 8);
  return;
}



/* Entry: 10b9508dc; end: 10b9508fb;  */

void FUN_10b9508dc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b9506a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b9508fc; end: 10b9508ff;  */

void FUN_10b9508fc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b950900; end: 10b9509b7;  */

void FUN_10b950900(undefined8 *param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar7;
  
  plVar7 = *(long **)(param_2 + 8);
  *param_1 = &PTR_FUN_110d78f10;
  plVar5 = (long *)0x20;
  __Znwm();
  lVar6 = *plVar7;
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
    do {
      FUN_10b9509b8();
      lVar6 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *plVar5 = lVar6;
  lVar6 = plVar7[1];
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
    do {
      FUN_10b9509b8();
      lVar6 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  plVar5[1] = lVar6;
  lVar6 = plVar7[2];
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar5[2] = lVar6;
  lVar6 = plVar7[3];
  if (lVar6 != 0) {
    piVar2 = (int *)(lVar6 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar5[3] = lVar6;
  param_1[1] = plVar5;
  return;
}



/* Entry: 10b9509b8; end: 10b950a13;  */

void FUN_10b9509b8(void)

{
  bool bVar1;
  long *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b950a14; end: 10b95143f;  */

undefined8 * FUN_10b950a14(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d78f40;
  FUN_10b9a1f08(param_1 + 0xc);
  func_0x00010b950e20(param_1 + 6);
  FUN_10b8a83c8(param_1 + 5);
  func_0x000107c278f4(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b951440; end: 10b95148f;  */

void FUN_10b951440(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d78fa0;
  param_1[3] = *param_2;
  *param_2 = 0;
  param_1[4] = param_3;
  param_1[5] = param_4;
  param_1[6] = 0;
  param_1[7] = &UNK_10dd5b8b0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0x32aaaba7;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((long)param_1 + 0xa2) = 0;
  *(undefined8 *)((long)param_1 + 0x9a) = 0;
  return;
}



/* Entry: 10b951490; end: 10b9514e3;  */

undefined8 * FUN_10b951490(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d78fa0;
  __ZNSt3__15mutexD1Ev(param_1 + 0xd);
  func_0x0001089310d0(param_1 + 7);
  func_0x000104bd5214(param_1 + 6);
  func_0x00010b8c58b0(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b9514e4; end: 10b9514e7;  */

undefined8 * FUN_10b9514e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d78fa0;
  __ZNSt3__15mutexD1Ev(param_1 + 0xd);
  func_0x0001089310d0(param_1 + 7);
  func_0x000104bd5214(param_1 + 6);
  func_0x00010b8c58b0(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b9514e8; end: 10b9514fb;  */

void FUN_10b9514e8(void)

{
  FUN_10b951490();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9514fc; end: 10b951523;  */

void FUN_10b9514fc(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  code **ppcVar2;
  code **ppcVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x19;
  code **ppcVar4;
  long lVar5;
  long lVar6;
  code *pcStack_c0;
  long lStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  long lStack_80;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_38;
  
  if ((((*(byte *)(param_1 + 0xa8) & 1) != 0) || ((*(byte *)(param_1 + 0xa9) & 1) != 0)) ||
     (*(long *)(param_1 + 0x48) == 0)) {
    return;
  }
  *(undefined1 *)(param_1 + 0xa8) = 1;
  ppcVar3 = &pcStack_c0;
  func_0x00010b951cb4();
  uStack_38 = extraout_x8;
  if (param_1 == 0) {
    lVar5 = 0;
    lVar6 = 0;
  }
  else {
    lVar6 = unaff_x19;
    if (*(long *)(unaff_x19 + 8) == 0) {
      lVar5 = *(long *)(unaff_x19 + 0x10);
      if (lVar5 != 0) {
        do {
          func_0x00010b951c98();
        } while (extraout_w10_00 != 0);
      }
    }
    else {
      func_0x000107c278f0(&lStack_a8);
      if (lStack_a8 == 0) {
        lVar5 = 0;
        lVar6 = 0;
      }
      else {
        lVar5 = lStack_a0;
        if (lStack_a0 != 0) {
          do {
            func_0x00010b951c98();
          } while (extraout_w10 != 0);
        }
      }
      func_0x000107c284e8(&lStack_a8);
    }
  }
  plVar1 = *(long **)(unaff_x19 + 0x30);
  if (plVar1 == (long *)0x0) {
    pcStack_c0 = (code *)0x0;
    if (lVar5 != 0) {
      do {
        func_0x00010b951c98();
      } while (extraout_w10_02 != 0);
    }
    pcStack_98 = (code *)0x10b951a78;
    ppuStack_90 = &PTR_DAT_110d79008;
    ppcVar4 = &pcStack_98;
    lStack_a8 = 0;
    lStack_a0 = 0;
    lStack_88 = lVar6;
    lStack_80 = lVar5;
    func_0x00010b94b6f8();
    func_0x00010b951ca8(ppuStack_90);
    FUN_10b951c38(&lStack_a8);
    func_0x000105276914(pcStack_c0);
  }
  else {
    if (lVar5 != 0) {
      do {
        func_0x00010b951c98();
      } while (extraout_w10_01 != 0);
    }
    ppcVar4 = &pcStack_68;
    pcStack_68 = FUN_10b951a28;
    ppuStack_60 = &PTR_DAT_110d78fe8;
    lStack_a8 = 0;
    lStack_a0 = 0;
    ppcVar3 = &pcStack_68;
    lStack_58 = lVar6;
    lStack_50 = lVar5;
    (**(code **)(*plVar1 + 0x28))();
    func_0x00010b951ca8(ppuStack_60);
    FUN_10b951c38(&lStack_a8);
  }
  FUN_10b951c38(&stack0xffffffffffffff48);
  func_0x00010b951cc8(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b951c60();
    while (ppcVar4[9] != (code *)0x0) {
      ppcVar2 = ppcVar4 + 7;
      FUN_10b9517b8(ppcVar2);
      FUN_10b951764(ppcVar4 + 7,ppcVar2,ppcVar3);
      ppcVar3 = ppcVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(ppcVar4 + 0xd);
    return;
  }
  return;
}



/* Entry: 10b951524; end: 10b95171b;  */

void FUN_10b951524(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  long unaff_x19;
  ulong uVar4;
  
  FUN_10b951c60();
  lVar1 = unaff_x19 + 0x38;
  lVar3 = param_2;
  FUN_10b8a3cc8();
  uVar4 = param_3;
  if ((*(long *)(unaff_x19 + 0x38) + *(long *)(unaff_x19 + 0x50) != lVar1) &&
     (uVar4 = *(ulong *)(lVar3 + 8), *(ulong *)(lVar3 + 8) <= param_3)) {
    uVar4 = param_3;
  }
  puVar2 = (ulong *)(unaff_x19 + 0x38);
  FUN_10b8a3cf8(puVar2,param_2);
  *puVar2 = uVar4;
  FUN_10b9514fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x68);
  return;
}



/* Entry: 10b95171c; end: 10b951763;  */

void FUN_10b95171c(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  
  FUN_10b951c60();
  while (*(long *)(unaff_x19 + 0x48) != 0) {
    lVar1 = unaff_x19 + 0x38;
    FUN_10b9517b8(lVar1);
    FUN_10b951764(unaff_x19 + 0x38,lVar1,param_2);
    param_2 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x68);
  return;
}



/* Entry: 10b951764; end: 10b9517b7;  */

undefined1  [16] FUN_10b951764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_2;
  uStack_38 = param_3;
  func_0x00010b951b20(&uStack_40);
  FUN_10b951b54(param_1,param_2,param_3);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 10b9517b8; end: 10b9517e3;  */

undefined1  [16] FUN_10b9517b8(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_10b951ac8(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10b9517e4; end: 10b951a27;  */

undefined1 * FUN_10b9517e4(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined8 extraout_x8;
  ulong *puVar7;
  long unaff_x19;
  ulong uVar8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined1 auStack_88 [88];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b951cb4();
  uStack_b8 = 0;
  uStack_28 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_a8 = 1;
  auStack_88[0] = 0;
  uStack_30 = 0;
  uStack_b0 = param_1;
  func_0x000105c3b044();
  if ((int)param_1 != 0) {
    func_0x0001081232b4(auStack_88,&UNK_10f7cea6d);
  }
  do {
    puVar4 = &uStack_b8;
    func_0x00010563be04();
    uVar1 = puVar4 == (undefined8 *)0x9;
    if (9 < (long)puVar4) {
      func_0x00010b951598();
LAB_10b9519a0:
      puVar5 = auStack_88;
      func_0x0001080e8dd4(puVar5);
      func_0x00010b951cc8(uStack_28);
      if ((bool)uVar1) {
        return puVar5;
      }
      ___stack_chk_fail();
      if ((bRam00000001137fd218 & 1) == 0) {
        iVar2 = 0x137fd218;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          func_0x000107c31088(0x1137fd210,&UNK_10f7cea80);
          ___cxa_guard_release(0x1137fd218);
        }
      }
      return (undefined1 *)0x1137fd210;
    }
    while( true ) {
      lStack_90 = 0;
      __ZNSt3__15mutex4lockEv(unaff_x19 + 0x68);
      if (*(long *)(unaff_x19 + 0x48) == 0) break;
      uVar1 = 1;
      if (*(char *)(unaff_x19 + 0xa9) == '\x01') break;
      FUN_10b9517b8(unaff_x19 + 0x38);
      func_0x000107c31068(&lStack_90);
      func_0x00010b951c80();
      func_0x00010b94fae0(&uStack_98,*(undefined8 *)(unaff_x19 + 0x18),&lStack_90);
      uVar8 = uStack_98;
      func_0x00010b950d94();
      __ZNSt3__15mutex4lockEv(unaff_x19 + 0x68);
      if (*(char *)(unaff_x19 + 0xa9) == '\x01') {
        *(undefined1 *)(unaff_x19 + 0xa8) = 0;
        puVar7 = &uStack_a0;
        uVar1 = true;
LAB_10b951918:
        *puVar7 = 0;
        func_0x00010b951c80();
        func_0x0001080d2890(uStack_98);
        uVar8 = uStack_a0;
        goto LAB_10b95192c;
      }
      lVar3 = unaff_x19 + 0x38;
      plVar6 = &lStack_90;
      FUN_10b8a3cc8();
      uVar1 = *(long *)(unaff_x19 + 0x38) + *(long *)(unaff_x19 + 0x50) == lVar3;
      if (!(bool)uVar1) {
        uVar1 = uVar8 == plVar6[1];
        if (uVar8 < (ulong)plVar6[1]) {
          uStack_a0 = uStack_98;
          puVar7 = &uStack_98;
          goto LAB_10b951918;
        }
        FUN_10b951764(unaff_x19 + 0x38,lVar3,plVar6);
      }
      func_0x00010b951c80();
      func_0x0001080d2890(uStack_98);
      func_0x000107c278f8(lStack_90);
    }
    *(undefined1 *)(unaff_x19 + 0xa8) = 0;
    func_0x00010b951c80();
    uVar8 = 0;
LAB_10b95192c:
    func_0x000107c278f8(lStack_90);
    if (uVar8 == 0) {
      func_0x0001080d2890(0);
      goto LAB_10b9519a0;
    }
    func_0x00010b950b58(&lStack_90,uVar8,0,0,0);
    if (lStack_90 == 0) {
      lVar3 = 0;
    }
    else {
      func_0x00010b950ce0(uVar8,&lStack_90);
      lVar3 = lStack_90;
    }
    func_0x0001080c5c80(lVar3);
    func_0x0001080d2890(uVar8);
  } while( true );
}



/* Entry: 10b951a28; end: 10b951ac7;  */

undefined1 * FUN_10b951a28(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 extraout_x8;
  ulong *puVar8;
  long unaff_x19;
  ulong uVar9;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined1 auStack_88 [88];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010b951cb4();
  uStack_b8 = 0;
  uStack_28 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_a8 = 1;
  auStack_88[0] = 0;
  uStack_30 = 0;
  uStack_b0 = uVar6;
  func_0x000105c3b044();
  if ((int)uVar6 != 0) {
    func_0x0001081232b4(auStack_88,&UNK_10f7cea6d);
  }
  do {
    puVar4 = &uStack_b8;
    func_0x00010563be04();
    uVar1 = puVar4 == (undefined8 *)0x9;
    if (9 < (long)puVar4) {
      func_0x00010b951598();
LAB_10b9519a0:
      puVar5 = auStack_88;
      func_0x0001080e8dd4(puVar5);
      func_0x00010b951cc8(uStack_28);
      if ((bool)uVar1) {
        return puVar5;
      }
      ___stack_chk_fail();
      if ((bRam00000001137fd218 & 1) == 0) {
        iVar2 = 0x137fd218;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          func_0x000107c31088(0x1137fd210,&UNK_10f7cea80);
          ___cxa_guard_release(0x1137fd218);
        }
      }
      return (undefined1 *)0x1137fd210;
    }
    while( true ) {
      lStack_90 = 0;
      __ZNSt3__15mutex4lockEv(unaff_x19 + 0x68);
      if (*(long *)(unaff_x19 + 0x48) == 0) break;
      uVar1 = 1;
      if (*(char *)(unaff_x19 + 0xa9) == '\x01') break;
      FUN_10b9517b8(unaff_x19 + 0x38);
      func_0x000107c31068(&lStack_90);
      func_0x00010b951c80();
      func_0x00010b94fae0(&uStack_98,*(undefined8 *)(unaff_x19 + 0x18),&lStack_90);
      uVar9 = uStack_98;
      func_0x00010b950d94();
      __ZNSt3__15mutex4lockEv(unaff_x19 + 0x68);
      if (*(char *)(unaff_x19 + 0xa9) == '\x01') {
        *(undefined1 *)(unaff_x19 + 0xa8) = 0;
        puVar8 = &uStack_a0;
        uVar1 = true;
LAB_10b951918:
        *puVar8 = 0;
        func_0x00010b951c80();
        func_0x0001080d2890(uStack_98);
        uVar9 = uStack_a0;
        goto LAB_10b95192c;
      }
      lVar3 = unaff_x19 + 0x38;
      plVar7 = &lStack_90;
      FUN_10b8a3cc8();
      uVar1 = *(long *)(unaff_x19 + 0x38) + *(long *)(unaff_x19 + 0x50) == lVar3;
      if (!(bool)uVar1) {
        uVar1 = uVar9 == plVar7[1];
        if (uVar9 < (ulong)plVar7[1]) {
          uStack_a0 = uStack_98;
          puVar8 = &uStack_98;
          goto LAB_10b951918;
        }
        FUN_10b951764(unaff_x19 + 0x38,lVar3,plVar7);
      }
      func_0x00010b951c80();
      func_0x0001080d2890(uStack_98);
      func_0x000107c278f8(lStack_90);
    }
    *(undefined1 *)(unaff_x19 + 0xa8) = 0;
    func_0x00010b951c80();
    uVar9 = 0;
LAB_10b95192c:
    func_0x000107c278f8(lStack_90);
    if (uVar9 == 0) {
      func_0x0001080d2890(0);
      goto LAB_10b9519a0;
    }
    func_0x00010b950b58(&lStack_90,uVar9,0,0,0);
    if (lStack_90 == 0) {
      lVar3 = 0;
    }
    else {
      func_0x00010b950ce0(uVar9,&lStack_90);
      lVar3 = lStack_90;
    }
    func_0x0001080c5c80(lVar3);
    func_0x0001080d2890(uVar9);
  } while( true );
}



/* Entry: 10b951ac8; end: 10b951b53;  */

void FUN_10b951ac8(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = (char *)*param_1;
  while (*pcVar2 < -1) {
    uStack_28 = *(undefined8 *)pcVar2;
    puVar1 = &uStack_28;
    func_0x000107c27e58();
    pcVar2 = (char *)(*param_1 + ((ulong)puVar1 & 0xffffffff));
    *param_1 = (long)pcVar2;
    param_1[1] = param_1[1] + ((ulong)puVar1 & 0xffffffff) * 0x10;
  }
  return;
}



/* Entry: 10b951b54; end: 10b951b93;  */

void FUN_10b951b54(long *param_1,ulong *param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  func_0x000107c278f4(param_3);
  uVar2 = 0;
  param_1[2] = param_1[2] + -1;
  puVar3 = (undefined1 *)((long)param_2 + (-8 - *param_1));
  uVar5 = *(ulong *)(*param_1 + ((ulong)puVar3 & param_1[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar4;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)puVar3) + 1) = uVar4;
  param_1[5] = param_1[5] + uVar2;
  return;
}



/* Entry: 10b951b94; end: 10b951c37;  */

void FUN_10b951b94(long *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = 0;
  param_1[2] = param_1[2] + -1;
  puVar3 = (undefined1 *)((long)param_2 + (-8 - *param_1));
  uVar5 = *(ulong *)(*param_1 + ((ulong)puVar3 & param_1[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar4;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)puVar3) + 1) = uVar4;
  param_1[5] = param_1[5] + uVar2;
  return;
}



/* Entry: 10b951c38; end: 10b951c5f;  */

long FUN_10b951c38(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b951c60; end: 10b951cdb;  */

void FUN_10b951c60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex4lockEv_110346780)(param_1 + 0x68);
  return;
}



/* Entry: 10b951cdc; end: 10b95202b;  */

void FUN_10b951cdc(undefined8 *param_1,undefined8 param_2,long *param_3,undefined1 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_DAT_110d79038;
  param_1[1] = 1;
  param_1[2] = param_2;
  param_1[3] = 0;
  lVar4 = *param_3;
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
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = lVar4;
  *(undefined1 *)((long)param_1 + 0x39) = param_4;
  return;
}



/* Entry: 10b95202c; end: 10b95205b;  */

long FUN_10b95202c(long param_1)

{
  func_0x00010b952bec();
  func_0x000107c30258(param_1 + 0x10);
  func_0x00010b952c58();
  return param_1;
}



/* Entry: 10b95205c; end: 10b95205f;  */

long FUN_10b95205c(long param_1)

{
  func_0x00010b952bec();
  func_0x000107c30258(param_1 + 0x10);
  func_0x00010b952c58();
  return param_1;
}



/* Entry: 10b952060; end: 10b952073;  */

void FUN_10b952060(void)

{
  FUN_10b95202c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b952074; end: 10b95207f;  */

void FUN_10b952074(void)

{
  Hint_Prefetch(0x1133fb148,0,0,0);
  Hint_Prefetch(PTR_DAT_1133fb148,0,0,0);
  return;
}



/* Entry: 10b952080; end: 10b9520f7;  */

undefined8 * FUN_10b952080(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d79120;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10bd2b19c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x000107c2809c(lVar1,param_2);
  param_1[2] = lVar1;
  param_3 = param_3 + 0x18;
  func_0x000107c2809c(param_3,param_2);
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



/* Entry: 10b9520f8; end: 10b952123;  */

undefined8 FUN_10b9520f8(undefined8 param_1)

{
  func_0x00010b952bec();
  FUN_10b952124(param_1);
  return param_1;
}



/* Entry: 10b952124; end: 10b95214b;  */

/* WARNING: Possible PIC construction at 0x00010b952138: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b95213c) */

void FUN_10b952124(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 10b95214c; end: 10b95214f;  */

undefined8 FUN_10b95214c(undefined8 param_1)

{
  func_0x00010b952bec();
  FUN_10b952124(param_1);
  return param_1;
}



/* Entry: 10b952150; end: 10b952163;  */

void FUN_10b952150(void)

{
  FUN_10b9520f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b952164; end: 10b95216f;  */

void FUN_10b952164(void)

{
  Hint_Prefetch(0x1133fb2c0,0,0,0);
  Hint_Prefetch(PTR_DAT_1133fb2c0,0,0,0);
  return;
}



/* Entry: 10b952170; end: 10b9521a3;  */

long FUN_10b952170(long param_1)

{
  func_0x00010b952bec();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b9520f8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b9521a4; end: 10b9521a7;  */

long FUN_10b9521a4(long param_1)

{
  func_0x00010b952bec();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b9520f8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b9521a8; end: 10b9521bb;  */

void FUN_10b9521a8(void)

{
  FUN_10b952170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


